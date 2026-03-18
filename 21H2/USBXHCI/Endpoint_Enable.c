/*
 * XREFs of Endpoint_Enable @ 0x1C0004FA0
 * Callers:
 *     UsbDevice_InitializeInputContextForAddEndpoints @ 0x1C00045DC (UsbDevice_InitializeInputContextForAddEndpoints.c)
 *     UsbDevice_UcxEvtEnable @ 0x1C000FC10 (UsbDevice_UcxEvtEnable.c)
 * Callees:
 *     TR_Enable_Internal @ 0x1C0001298 (TR_Enable_Internal.c)
 *     Endpoint_GetDequeuePointer @ 0x1C0004B68 (Endpoint_GetDequeuePointer.c)
 *     TR_GetDequeuePointer @ 0x1C0004B8C (TR_GetDequeuePointer.c)
 *     Endpoint_Disable_Internal @ 0x1C0004DBC (Endpoint_Disable_Internal.c)
 *     ESM_AddEvent @ 0x1C0005174 (ESM_AddEvent.c)
 *     RtlStringCchPrintfA @ 0x1C000597C (RtlStringCchPrintfA.c)
 *     WPP_RECORDER_SF_ddq @ 0x1C00059E8 (WPP_RECORDER_SF_ddq.c)
 *     WPP_RECORDER_SF_DDDD @ 0x1C000B300 (WPP_RECORDER_SF_DDDD.c)
 *     WPP_RECORDER_SF_ddd @ 0x1C0013618 (WPP_RECORDER_SF_ddd.c)
 *     __security_check_cookie @ 0x1C0018EB0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C00199B0 (_guard_dispatch_icall_nop.c)
 *     XilEndpoint_AllocateStreamContextArray @ 0x1C003725C (XilEndpoint_AllocateStreamContextArray.c)
 *     XilEndpoint_CommitStreamContextArrayUpdates @ 0x1C0037444 (XilEndpoint_CommitStreamContextArrayUpdates.c)
 */

__int64 __fastcall Endpoint_Enable(__m128i **a1)
{
  void *v2; // rdx
  __int64 v3; // rax
  __int64 v4; // r15
  int v5; // edx
  int StreamContextArray; // edi
  int v7; // r8d
  __m128i *v8; // rax
  __m128i *v9; // r8
  __m128i *v11; // rcx
  __int64 v12; // rdx
  __int64 v13; // rax
  __m128i *v14; // rsi
  __int64 Pool2; // rax
  int v16; // r9d
  __int64 v17; // rcx
  __int64 v18; // rax
  unsigned int v19; // r14d
  __int64 DequeuePointer; // rax
  __int64 v21; // r8
  int v22; // edx
  char v23; // [rsp+30h] [rbp-21h]
  int v24; // [rsp+38h] [rbp-19h]
  char v25; // [rsp+40h] [rbp-11h]
  __int128 v26; // [rsp+58h] [rbp+7h] BYREF
  __int128 v27; // [rsp+68h] [rbp+17h]
  char pszDest[16]; // [rsp+78h] [rbp+27h] BYREF

  v26 = 0LL;
  v27 = 0LL;
  *(_OWORD *)pszDest = 0LL;
  v2 = &WPP_60b6c7b69d133891580a7186b105caca_Traceguids;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(v2) = 4;
    WPP_RECORDER_SF_ddq(
      (*a1)[4].m128i_i64[1],
      (_DWORD)v2,
      13,
      23,
      (__int64)&WPP_60b6c7b69d133891580a7186b105caca_Traceguids,
      a1[2][8].m128i_i8[7],
      *((_DWORD *)a1 + 36),
      (char)a1[3]);
  }
  if ( (_mm_srli_si128((*a1)[21], 8).m128i_u64[0] & 0x10000) != 0 )
  {
    v11 = a1[2];
    if ( v11[2].m128i_i32[1] == 1 && ((*((_DWORD *)a1 + 30) - 3) & 0xFFFFFFFB) == 0 )
    {
      v12 = 112LL * (unsigned int)(v11[2].m128i_i32[3] - 1);
      v13 = *(_QWORD *)(*(_QWORD *)(v11->m128i_i64[1] + 152) + 48LL);
      if ( *(_BYTE *)(v12 + v13 + 13) == 3 )
        _InterlockedIncrement((volatile signed __int32 *)(v12 + v13 + 108));
    }
  }
  v3 = ((__int64 (__fastcall *)(__int64, __m128i *, __int64 (__fastcall *)(_QWORD)))qword_1C00627F8)(
         UcxDriverGlobals,
         a1[3],
         Endpoint_Enable);
  v4 = v3;
  if ( !*((_BYTE *)a1 + 37) )
  {
    StreamContextArray = TR_Enable_Internal(a1[11]);
    if ( StreamContextArray >= 0 )
      goto LABEL_6;
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v16 = 26;
      v25 = StreamContextArray;
      v17 = (*a1)[4].m128i_i64[1];
      v24 = *((_DWORD *)a1 + 36);
      v23 = a1[2][8].m128i_i8[7];
      goto LABEL_38;
    }
    goto LABEL_39;
  }
  if ( v3 )
  {
    v18 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, void *))(WdfFunctions_01023 + 1616))(
            WdfDriverGlobals,
            v3,
            off_1C0061338);
    a1[17] = (__m128i *)v18;
    v14 = (__m128i *)v18;
    if ( !*(_QWORD *)(v18 + 32) )
    {
      StreamContextArray = XilEndpoint_AllocateStreamContextArray(v18);
      if ( StreamContextArray < 0 )
        goto LABEL_39;
    }
    v19 = 1;
    if ( v14->m128i_i32[2] )
    {
      while ( 1 )
      {
        StreamContextArray = TR_Enable_Internal(*((_QWORD **)&a1[17][-3] + 13 * v19 - 1));
        if ( StreamContextArray < 0 )
          break;
        DequeuePointer = Endpoint_GetDequeuePointer((__int64)a1, v19);
        v21 = v19++;
        *(_QWORD *)(*(_QWORD *)(a1[17][2].m128i_i64[0] + 16) + 16 * v21) = DequeuePointer;
        if ( v19 > v14->m128i_i32[2] )
          goto LABEL_26;
      }
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        v22 = a1[2][8].m128i_u8[7];
        LOBYTE(v22) = 2;
        WPP_RECORDER_SF_DDDD(
          (*a1)[4].m128i_i64[1],
          v22,
          13,
          25,
          (__int64)&WPP_60b6c7b69d133891580a7186b105caca_Traceguids,
          a1[2][8].m128i_i8[7],
          *((_DWORD *)a1 + 36),
          v19 + 1,
          StreamContextArray);
      }
      goto LABEL_39;
    }
  }
  else
  {
    v14 = a1[16];
    if ( !v14 )
    {
      Pool2 = ExAllocatePool2(64LL, 152LL, 1229146200LL);
      a1[16] = (__m128i *)Pool2;
      LODWORD(v14) = Pool2;
      if ( !Pool2 )
      {
        StreamContextArray = -1073741670;
        goto LABEL_39;
      }
      a1[17] = (__m128i *)Pool2;
      *(_QWORD *)Pool2 = a1;
      *(_DWORD *)(Pool2 + 8) = 1;
      *(_DWORD *)(Pool2 + 12) = 1;
      a1[17][3].m128i_i64[0] = (__int64)a1[11];
      StreamContextArray = XilEndpoint_AllocateStreamContextArray(Pool2);
      if ( StreamContextArray < 0 )
        goto LABEL_39;
    }
    StreamContextArray = TR_Enable_Internal(a1[11]);
    if ( StreamContextArray < 0 )
    {
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        v16 = 24;
        v25 = StreamContextArray;
        v24 = *((_DWORD *)a1 + 36);
        v23 = a1[2][8].m128i_i8[7];
        v17 = (*a1)[4].m128i_i64[1];
LABEL_38:
        LOBYTE(v5) = 2;
        WPP_RECORDER_SF_ddd(v17, v5, 13, v16, (__int64)&WPP_60b6c7b69d133891580a7186b105caca_Traceguids, v23, v24, v25);
      }
LABEL_39:
      Endpoint_Disable_Internal((__int64)a1, 1, v7);
      goto LABEL_9;
    }
    *(_QWORD *)(*(_QWORD *)(a1[17][2].m128i_i64[0] + 16) + 16LL) = TR_GetDequeuePointer((__int64)a1[11]);
  }
LABEL_26:
  StreamContextArray = XilEndpoint_CommitStreamContextArrayUpdates((_DWORD)v14);
  if ( StreamContextArray < 0 )
    goto LABEL_39;
LABEL_6:
  v8 = a1[2];
  v9 = *a1;
  *(_QWORD *)&v27 = 0LL;
  *(_QWORD *)&v26 = 48LL;
  pszDest[0] = 0;
  HIDWORD(v27) = 16;
  BYTE8(v27) = 0;
  *((_QWORD *)&v26 + 1) = 0xC800000400LL;
  if ( RtlStringCchPrintfA(
         pszDest,
         0x10uLL,
         "%02d SLT%02d DCI%02d",
         v9[11].m128i_i32[0],
         v8[8].m128i_u8[7],
         *((_DWORD *)a1 + 36)) < 0
    || (int)imp_WppRecorderLogCreate(WPP_GLOBAL_Control, &v26, a1 + 10) < 0 )
  {
    a1[10] = (__m128i *)(*a1)[4].m128i_i64[1];
  }
  ESM_AddEvent(a1 + 36);
  StreamContextArray = 0;
LABEL_9:
  if ( v4 )
    (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, __int64 (__fastcall *)(_QWORD), __int64, const char *))(WdfFunctions_01023 + 1648))(
      WdfDriverGlobals,
      v4,
      Endpoint_Enable,
      1142LL,
      "onecore\\drivers\\wdm\\usb\\usb3\\usbxhci\\sys\\endpoint.c");
  return (unsigned int)StreamContextArray;
}
