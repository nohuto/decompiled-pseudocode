/*
 * XREFs of Endpoint_UcxEvtEndpointStaticStreamsDisable @ 0x1C003A360
 * Callers:
 *     <none>
 * Callees:
 *     TR_Enable_Internal @ 0x1C00055F4 (TR_Enable_Internal.c)
 *     TR_GetDequeuePointer @ 0x1C0007C6C (TR_GetDequeuePointer.c)
 *     WPP_RECORDER_SF_ddd @ 0x1C0012BE0 (WPP_RECORDER_SF_ddd.c)
 *     __security_check_cookie @ 0x1C0018DB0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C00191C0 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C00194C0 (memset.c)
 *     XilEndpoint_AllocateStreamContextArray @ 0x1C003683C (XilEndpoint_AllocateStreamContextArray.c)
 *     XilEndpoint_CommitStreamContextArrayUpdates @ 0x1C0036A24 (XilEndpoint_CommitStreamContextArrayUpdates.c)
 *     XilEndpoint_FreeStreamContextArray @ 0x1C0036D54 (XilEndpoint_FreeStreamContextArray.c)
 *     UsbDevice_ReconfigureEndpoint @ 0x1C00462EC (UsbDevice_ReconfigureEndpoint.c)
 */

__int64 __fastcall Endpoint_UcxEvtEndpointStaticStreamsDisable(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v5; // rsi
  __int64 v6; // rax
  __int64 v7; // rdi
  __int64 v8; // rbx
  int v9; // edx
  __int64 *v10; // rax
  POOL_TYPE SignalState; // ecx
  PVOID PoolWithTag; // rax
  int StreamContextArray; // edi
  __int64 v14; // rcx
  __int64 v15; // rax
  __int64 result; // rax
  int v17; // edx
  _QWORD *v18; // rcx
  _OWORD v19[2]; // [rsp+40h] [rbp-58h] BYREF
  __int64 v20; // [rsp+60h] [rbp-38h]

  v20 = 0LL;
  memset(v19, 0, sizeof(v19));
  LOWORD(v19[0]) = 40;
  (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, _OWORD *))(WdfFunctions_01023 + 2128))(
    WdfDriverGlobals,
    a3,
    v19);
  v5 = *((_QWORD *)&v19[0] + 1);
  v6 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, void *))(WdfFunctions_01023 + 1616))(
         WdfDriverGlobals,
         a2,
         off_1C0060338);
  v7 = v6;
  v8 = *(_QWORD *)v6;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    v9 = *(unsigned __int8 *)(*(_QWORD *)(v8 + 16) + 135LL);
    LOBYTE(v9) = 4;
    WPP_RECORDER_SF_ddd(
      *(_QWORD *)(v8 + 80),
      v9,
      13,
      110,
      (__int64)&WPP_90fdb84eefba3b5477bce0ca4c98412a_Traceguids,
      *(_BYTE *)(*(_QWORD *)(v8 + 16) + 135LL),
      *(_DWORD *)(v8 + 144),
      *(_DWORD *)(v6 + 8));
  }
  v10 = (__int64 *)(*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, void *))(WdfFunctions_01023 + 1616))(
                     WdfDriverGlobals,
                     a3,
                     off_1C0060090);
  SignalState = WPP_MAIN_CB.DeviceLock.Header.SignalState;
  *v10 = v7;
  PoolWithTag = ExAllocatePoolWithTag(SignalState, 0x98uLL, 0x49434858u);
  *(_QWORD *)(v8 + 128) = PoolWithTag;
  if ( !PoolWithTag )
  {
    *(_DWORD *)(v5 + 4) = -1073737728;
    StreamContextArray = -1073741670;
LABEL_14:
    v18 = *(_QWORD **)(v8 + 128);
    if ( v18 )
    {
      XilEndpoint_FreeStreamContextArray(v18);
      ExFreePoolWithTag(*(PVOID *)(v8 + 128), 0x49434858u);
      *(_QWORD *)(v8 + 128) = 0LL;
    }
    return (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, _QWORD))(WdfFunctions_01023 + 2104))(
             WdfDriverGlobals,
             a3,
             (unsigned int)StreamContextArray);
  }
  memset(PoolWithTag, 0, 0x98uLL);
  **(_QWORD **)(v8 + 128) = v8;
  *(_DWORD *)(*(_QWORD *)(v8 + 128) + 8LL) = 1;
  *(_DWORD *)(*(_QWORD *)(v8 + 128) + 12LL) = 1;
  StreamContextArray = XilEndpoint_AllocateStreamContextArray(*(_QWORD *)(v8 + 128));
  if ( StreamContextArray < 0 )
    goto LABEL_14;
  v14 = *(_QWORD *)(v8 + 128);
  v15 = *(_QWORD *)(v8 + 88);
  *(_QWORD *)(v8 + 136) = v14;
  *(_QWORD *)(v14 + 48) = v15;
  result = TR_Enable_Internal(*(_QWORD **)(v8 + 88));
  StreamContextArray = result;
  if ( (int)result >= 0 )
  {
    *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v8 + 136) + 32LL) + 16LL) + 16LL) = TR_GetDequeuePointer(*(_QWORD *)(v8 + 88));
    result = XilEndpoint_CommitStreamContextArrayUpdates(*(_QWORD *)(v8 + 136));
    StreamContextArray = result;
    if ( (int)result >= 0 )
    {
      result = UsbDevice_ReconfigureEndpoint(
                 *(_QWORD *)(v8 + 16),
                 v8,
                 Endpoint_EndpointStaticStreamsDisableCompletion,
                 a3);
      StreamContextArray = 0;
    }
    else
    {
      *(_DWORD *)(v5 + 4) = -2147481600;
    }
  }
  else
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v17) = 2;
      result = WPP_RECORDER_SF_ddd(
                 *(_QWORD *)(v8 + 80),
                 v17,
                 13,
                 111,
                 (__int64)&WPP_90fdb84eefba3b5477bce0ca4c98412a_Traceguids,
                 *(_BYTE *)(*(_QWORD *)(v8 + 16) + 135LL),
                 *(_DWORD *)(v8 + 144),
                 result);
    }
    *(_DWORD *)(v5 + 4) = -1073737728;
  }
  if ( StreamContextArray < 0 )
    goto LABEL_14;
  return result;
}
