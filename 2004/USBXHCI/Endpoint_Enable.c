/*
 * XREFs of Endpoint_Enable @ 0x1C0007CC0
 * Callers:
 *     UsbDevice_InitializeInputContextForAddEndpoints @ 0x1C00077E4 (UsbDevice_InitializeInputContextForAddEndpoints.c)
 *     UsbDevice_UcxEvtEnable @ 0x1C000DF00 (UsbDevice_UcxEvtEnable.c)
 * Callees:
 *     TR_Enable_Internal @ 0x1C00055F4 (TR_Enable_Internal.c)
 *     Endpoint_GetDequeuePointer @ 0x1C0007C48 (Endpoint_GetDequeuePointer.c)
 *     TR_GetDequeuePointer @ 0x1C0007C6C (TR_GetDequeuePointer.c)
 *     ESM_AddEvent @ 0x1C0007E70 (ESM_AddEvent.c)
 *     RtlStringCchPrintfA @ 0x1C00089CC (RtlStringCchPrintfA.c)
 *     WPP_RECORDER_SF_ddq @ 0x1C0008A48 (WPP_RECORDER_SF_ddq.c)
 *     Endpoint_Disable_Internal @ 0x1C000A394 (Endpoint_Disable_Internal.c)
 *     WPP_RECORDER_SF_dddd @ 0x1C000D7B0 (WPP_RECORDER_SF_dddd.c)
 *     WPP_RECORDER_SF_ddd @ 0x1C0012BE0 (WPP_RECORDER_SF_ddd.c)
 *     __security_check_cookie @ 0x1C0018DB0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C00191C0 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C00194C0 (memset.c)
 *     XilEndpoint_AllocateStreamContextArray @ 0x1C003683C (XilEndpoint_AllocateStreamContextArray.c)
 *     XilEndpoint_CommitStreamContextArrayUpdates @ 0x1C0036A24 (XilEndpoint_CommitStreamContextArrayUpdates.c)
 */

__int64 __fastcall Endpoint_Enable(__int64 a1)
{
  __int64 v2; // rax
  __int64 v3; // r15
  __int64 v4; // rdx
  int StreamContextArray; // edi
  __int64 v6; // rax
  __int64 v7; // r8
  char *v9; // rsi
  char *PoolWithTag; // rax
  int v11; // r9d
  __int64 v12; // rax
  unsigned int v13; // r14d
  __int64 DequeuePointer; // rax
  __int64 v15; // r8
  int v16; // edx
  char v17; // [rsp+30h] [rbp-31h]
  int v18; // [rsp+38h] [rbp-29h]
  char v19; // [rsp+40h] [rbp-21h]
  __int128 v20; // [rsp+58h] [rbp-9h] BYREF
  __int128 v21; // [rsp+68h] [rbp+7h]
  char pszDest[16]; // [rsp+78h] [rbp+17h] BYREF

  v20 = 0LL;
  v21 = 0LL;
  *(_OWORD *)pszDest = 0LL;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_ddq(
      *(_QWORD *)(*(_QWORD *)a1 + 72LL),
      4,
      13,
      22,
      (__int64)&WPP_90fdb84eefba3b5477bce0ca4c98412a_Traceguids,
      *(_BYTE *)(*(_QWORD *)(a1 + 16) + 135LL),
      *(_DWORD *)(a1 + 144),
      *(_QWORD *)(a1 + 24));
  v2 = ((__int64 (__fastcall *)(__int64, _QWORD, __int64 (__fastcall *)(_QWORD)))qword_1C00616F8)(
         UcxDriverGlobals,
         *(_QWORD *)(a1 + 24),
         Endpoint_Enable);
  v3 = v2;
  if ( !*(_BYTE *)(a1 + 37) )
  {
    StreamContextArray = TR_Enable_Internal(*(_QWORD **)(a1 + 88));
    if ( StreamContextArray >= 0 )
    {
LABEL_5:
      v6 = *(_QWORD *)(a1 + 16);
      v7 = *(_QWORD *)a1;
      *(_QWORD *)&v21 = 0LL;
      *(_QWORD *)&v20 = 48LL;
      pszDest[0] = 0;
      HIDWORD(v21) = 16;
      BYTE8(v21) = 0;
      *((_QWORD *)&v20 + 1) = 0xC800000400LL;
      RtlStringCchPrintfA(
        pszDest,
        0x10uLL,
        "%02d SLT%02d DCI%02d",
        *(_DWORD *)(v7 + 176),
        *(unsigned __int8 *)(v6 + 135),
        *(_DWORD *)(a1 + 144));
      if ( (unsigned int)imp_WppRecorderLogCreate(WPP_GLOBAL_Control, &v20, a1 + 80) )
        *(_QWORD *)(a1 + 80) = *(_QWORD *)(*(_QWORD *)a1 + 72LL);
      StreamContextArray = 0;
      goto LABEL_8;
    }
    if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      goto LABEL_8;
    v11 = 25;
    v19 = StreamContextArray;
    v18 = *(_DWORD *)(a1 + 144);
    v17 = *(_BYTE *)(*(_QWORD *)(a1 + 16) + 135LL);
LABEL_22:
    LOBYTE(v4) = 2;
    WPP_RECORDER_SF_ddd(
      *(_QWORD *)(*(_QWORD *)a1 + 72LL),
      v4,
      13,
      v11,
      (__int64)&WPP_90fdb84eefba3b5477bce0ca4c98412a_Traceguids,
      v17,
      v18,
      v19);
    goto LABEL_8;
  }
  if ( !v2 )
  {
    v9 = *(char **)(a1 + 128);
    if ( !v9 )
    {
      PoolWithTag = (char *)ExAllocatePoolWithTag(
                              (POOL_TYPE)WPP_MAIN_CB.DeviceLock.Header.SignalState,
                              0x98uLL,
                              0x49434858u);
      *(_QWORD *)(a1 + 128) = PoolWithTag;
      v9 = PoolWithTag;
      if ( !PoolWithTag )
      {
        StreamContextArray = -1073741670;
        goto LABEL_17;
      }
      *(_QWORD *)(a1 + 136) = PoolWithTag;
      memset(PoolWithTag + 16, 0, 0x88uLL);
      *(_QWORD *)v9 = a1;
      *((_DWORD *)v9 + 2) = 1;
      *((_DWORD *)v9 + 3) = 1;
      *(_QWORD *)(*(_QWORD *)(a1 + 136) + 48LL) = *(_QWORD *)(a1 + 88);
      StreamContextArray = XilEndpoint_AllocateStreamContextArray(v9);
      if ( StreamContextArray < 0 )
        goto LABEL_17;
    }
    StreamContextArray = TR_Enable_Internal(*(_QWORD **)(a1 + 88));
    if ( StreamContextArray < 0 )
    {
      if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        goto LABEL_8;
      v11 = 23;
      v19 = StreamContextArray;
      v18 = *(_DWORD *)(a1 + 144);
      v17 = *(_BYTE *)(*(_QWORD *)(a1 + 16) + 135LL);
      goto LABEL_22;
    }
    *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 136) + 32LL) + 16LL) + 16LL) = TR_GetDequeuePointer(*(_QWORD *)(a1 + 88));
LABEL_24:
    StreamContextArray = XilEndpoint_CommitStreamContextArrayUpdates((_DWORD)v9);
    if ( StreamContextArray < 0 )
      goto LABEL_17;
    goto LABEL_5;
  }
  v12 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, void *))(WdfFunctions_01023 + 1616))(
          WdfDriverGlobals,
          v2,
          off_1C0060338);
  *(_QWORD *)(a1 + 136) = v12;
  v9 = (char *)v12;
  if ( !*(_QWORD *)(v12 + 32) )
  {
    StreamContextArray = XilEndpoint_AllocateStreamContextArray(v12);
    if ( StreamContextArray < 0 )
      goto LABEL_17;
  }
  v13 = 1;
  if ( !*((_DWORD *)v9 + 2) )
    goto LABEL_24;
  while ( 1 )
  {
    StreamContextArray = TR_Enable_Internal(*(_QWORD **)(104LL * (v13 - 1) + *(_QWORD *)(a1 + 136) + 48));
    if ( StreamContextArray < 0 )
      break;
    DequeuePointer = Endpoint_GetDequeuePointer(a1, v13);
    v15 = v13++;
    *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 136) + 32LL) + 16LL) + 16 * v15) = DequeuePointer;
    if ( v13 > *((_DWORD *)v9 + 2) )
      goto LABEL_24;
  }
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    v16 = *(unsigned __int8 *)(*(_QWORD *)(a1 + 16) + 135LL);
    LOBYTE(v16) = 2;
    WPP_RECORDER_SF_dddd(
      *(_QWORD *)(*(_QWORD *)a1 + 72LL),
      v16,
      13,
      24,
      (__int64)&WPP_90fdb84eefba3b5477bce0ca4c98412a_Traceguids,
      *(_BYTE *)(*(_QWORD *)(a1 + 16) + 135LL),
      *(_DWORD *)(a1 + 144),
      v13 + 1,
      StreamContextArray);
  }
LABEL_8:
  if ( StreamContextArray >= 0 )
  {
    ESM_AddEvent((PVOID)(a1 + 288));
    goto LABEL_10;
  }
LABEL_17:
  LOBYTE(v4) = 1;
  Endpoint_Disable_Internal(a1, v4);
LABEL_10:
  if ( v3 )
    (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, __int64 (__fastcall *)(_QWORD), __int64, const char *))(WdfFunctions_01023 + 1648))(
      WdfDriverGlobals,
      v3,
      Endpoint_Enable,
      1070LL,
      "onecore\\drivers\\wdm\\usb\\usb3\\usbxhci\\sys\\endpoint.c");
  return (unsigned int)StreamContextArray;
}
