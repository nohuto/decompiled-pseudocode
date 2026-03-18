/*
 * XREFs of Endpoint_Enable @ 0x1C00083B0
 * Callers:
 *     UsbDevice_InitializeInputContextForAddEndpoints @ 0x1C0007D58 (UsbDevice_InitializeInputContextForAddEndpoints.c)
 *     UsbDevice_UcxEvtEnable @ 0x1C000E990 (UsbDevice_UcxEvtEnable.c)
 * Callees:
 *     TR_Enable_Internal @ 0x1C00055F4 (TR_Enable_Internal.c)
 *     Endpoint_GetDequeuePointer @ 0x1C0008334 (Endpoint_GetDequeuePointer.c)
 *     TR_GetDequeuePointer @ 0x1C0008358 (TR_GetDequeuePointer.c)
 *     ESM_AddEvent @ 0x1C0008850 (ESM_AddEvent.c)
 *     RtlStringCchPrintfA @ 0x1C00093AC (RtlStringCchPrintfA.c)
 *     WPP_RECORDER_SF_ddq @ 0x1C0009428 (WPP_RECORDER_SF_ddq.c)
 *     Endpoint_Disable_Internal @ 0x1C000ABD4 (Endpoint_Disable_Internal.c)
 *     WPP_RECORDER_SF_dddd @ 0x1C000E080 (WPP_RECORDER_SF_dddd.c)
 *     WPP_RECORDER_SF_ddd @ 0x1C0013CB0 (WPP_RECORDER_SF_ddd.c)
 *     __security_check_cookie @ 0x1C0019F30 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C001BCF0 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C001BFC0 (memset.c)
 *     XilEndpoint_AllocateStreamContextArray @ 0x1C0037D1C (XilEndpoint_AllocateStreamContextArray.c)
 *     XilEndpoint_CommitStreamContextArrayUpdates @ 0x1C0037F04 (XilEndpoint_CommitStreamContextArrayUpdates.c)
 */

__int64 __fastcall Endpoint_Enable(__m128i **a1)
{
  void *v2; // rdx
  __m128i *v3; // rcx
  __int64 v4; // rdx
  __int64 v5; // rax
  __int64 v6; // rax
  __int64 v7; // r15
  __m128i *v8; // rsi
  __m128i *PoolWithTag; // rax
  __int64 v10; // rdx
  int StreamContextArray; // edi
  int v12; // r9d
  __m128i *v13; // rax
  __m128i *v14; // rdx
  __int64 v15; // rax
  unsigned int v16; // r14d
  __int64 DequeuePointer; // rax
  __int64 v18; // r8
  int v19; // edx
  __int128 v21; // [rsp+58h] [rbp+7h] BYREF
  __int128 v22; // [rsp+68h] [rbp+17h]
  char pszDest[16]; // [rsp+78h] [rbp+27h] BYREF

  v21 = 0LL;
  v22 = 0LL;
  *(_OWORD *)pszDest = 0LL;
  v2 = &WPP_e17193f9e7953bf0d59f9dd2738aa1c9_Traceguids;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(v2) = 4;
    WPP_RECORDER_SF_ddq(
      (*a1)[4].m128i_i64[1],
      (_DWORD)v2,
      13,
      23,
      (__int64)&WPP_e17193f9e7953bf0d59f9dd2738aa1c9_Traceguids,
      a1[2][8].m128i_i8[7],
      *((_DWORD *)a1 + 36),
      (char)a1[3]);
  }
  if ( (_mm_srli_si128((*a1)[21], 8).m128i_u64[0] & 0x10000) != 0 )
  {
    v3 = a1[2];
    if ( v3[2].m128i_i32[1] == 1 && ((*((_DWORD *)a1 + 30) - 3) & 0xFFFFFFFB) == 0 )
    {
      v4 = 112LL * (unsigned int)(v3[2].m128i_i32[3] - 1);
      v5 = *(_QWORD *)(*(_QWORD *)(v3->m128i_i64[1] + 152) + 48LL);
      if ( *(_BYTE *)(v4 + v5 + 13) == 3 )
        _InterlockedIncrement((volatile signed __int32 *)(v4 + v5 + 108));
    }
  }
  v6 = ((__int64 (__fastcall *)(__int64, __m128i *, __int64 (__fastcall *)(_QWORD)))qword_1C00627D8)(
         UcxDriverGlobals,
         a1[3],
         Endpoint_Enable);
  v7 = v6;
  if ( *((_BYTE *)a1 + 37) )
  {
    if ( !v6 )
    {
      v8 = a1[16];
      if ( !v8 )
      {
        PoolWithTag = (__m128i *)ExAllocatePoolWithTag(
                                   SHIDWORD(WPP_MAIN_CB.DeviceLock.Header.WaitListHead.Flink),
                                   0x98uLL,
                                   0x49434858u);
        a1[16] = PoolWithTag;
        v8 = PoolWithTag;
        if ( !PoolWithTag )
        {
          StreamContextArray = -1073741670;
LABEL_24:
          LOBYTE(v10) = 1;
          Endpoint_Disable_Internal(a1, v10);
          goto LABEL_37;
        }
        a1[17] = PoolWithTag;
        memset(&PoolWithTag[1], 0, 0x88uLL);
        v8->m128i_i64[0] = (__int64)a1;
        v8->m128i_i32[2] = 1;
        v8->m128i_i32[3] = 1;
        a1[17][3].m128i_i64[0] = (__int64)a1[11];
        StreamContextArray = XilEndpoint_AllocateStreamContextArray(v8);
        if ( StreamContextArray < 0 )
          goto LABEL_24;
      }
      StreamContextArray = TR_Enable_Internal(a1[11]);
      if ( StreamContextArray < 0 )
      {
        if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          goto LABEL_23;
        v12 = 24;
        goto LABEL_17;
      }
      *(_QWORD *)(*(_QWORD *)(a1[17][2].m128i_i64[0] + 16) + 16LL) = TR_GetDequeuePointer((__int64)a1[11]);
      goto LABEL_19;
    }
    v15 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, void *))(WdfFunctions_01023 + 1616))(
            WdfDriverGlobals,
            v6,
            off_1C0061338);
    a1[17] = (__m128i *)v15;
    v8 = (__m128i *)v15;
    if ( !*(_QWORD *)(v15 + 32) )
    {
      StreamContextArray = XilEndpoint_AllocateStreamContextArray(v15);
      if ( StreamContextArray < 0 )
        goto LABEL_24;
    }
    v16 = 1;
    if ( !v8->m128i_i32[2] )
    {
LABEL_19:
      StreamContextArray = XilEndpoint_CommitStreamContextArrayUpdates((_DWORD)v8);
      if ( StreamContextArray < 0 )
        goto LABEL_24;
      goto LABEL_20;
    }
    while ( 1 )
    {
      StreamContextArray = TR_Enable_Internal(*((_QWORD **)&a1[17][-3] + 13 * v16 - 1));
      if ( StreamContextArray < 0 )
        break;
      DequeuePointer = Endpoint_GetDequeuePointer((__int64)a1, v16);
      v18 = v16++;
      *(_QWORD *)(*(_QWORD *)(a1[17][2].m128i_i64[0] + 16) + 16 * v18) = DequeuePointer;
      if ( v16 > v8->m128i_i32[2] )
        goto LABEL_19;
    }
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v19 = a1[2][8].m128i_u8[7];
      LOBYTE(v19) = 2;
      WPP_RECORDER_SF_dddd(
        (*a1)[4].m128i_i64[1],
        v19,
        13,
        25,
        (__int64)&WPP_e17193f9e7953bf0d59f9dd2738aa1c9_Traceguids,
        a1[2][8].m128i_i8[7],
        *((_DWORD *)a1 + 36),
        v16 + 1,
        StreamContextArray);
    }
  }
  else
  {
    StreamContextArray = TR_Enable_Internal(a1[11]);
    if ( StreamContextArray >= 0 )
    {
LABEL_20:
      v13 = a1[2];
      v14 = *a1;
      *(_QWORD *)&v22 = 0LL;
      *(_QWORD *)&v21 = 48LL;
      pszDest[0] = 0;
      HIDWORD(v22) = 16;
      BYTE8(v22) = 0;
      *((_QWORD *)&v21 + 1) = 0xC800000400LL;
      RtlStringCchPrintfA(
        pszDest,
        0x10uLL,
        "%02d SLT%02d DCI%02d",
        v14[11].m128i_i32[0],
        v13[8].m128i_u8[7],
        *((_DWORD *)a1 + 36));
      if ( (unsigned int)imp_WppRecorderLogCreate(WPP_GLOBAL_Control, &v21, a1 + 10) )
        a1[10] = (__m128i *)(*a1)[4].m128i_i64[1];
      StreamContextArray = 0;
      goto LABEL_23;
    }
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v12 = 26;
LABEL_17:
      LOBYTE(v10) = 2;
      WPP_RECORDER_SF_ddd(
        (*a1)[4].m128i_i64[1],
        v10,
        13,
        v12,
        (__int64)&WPP_e17193f9e7953bf0d59f9dd2738aa1c9_Traceguids,
        a1[2][8].m128i_i8[7],
        *((_DWORD *)a1 + 36),
        StreamContextArray);
    }
  }
LABEL_23:
  if ( StreamContextArray < 0 )
    goto LABEL_24;
  ESM_AddEvent(a1 + 36);
LABEL_37:
  if ( v7 )
    (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, __int64 (__fastcall *)(_QWORD), __int64, const char *))(WdfFunctions_01023 + 1648))(
      WdfDriverGlobals,
      v7,
      Endpoint_Enable,
      1149LL,
      "onecore\\drivers\\wdm\\usb\\usb3\\usbxhci\\sys\\endpoint.c");
  return (unsigned int)StreamContextArray;
}
