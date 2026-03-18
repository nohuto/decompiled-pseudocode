/*
 * XREFs of UsbDevice_HandleSendStopEndpointToOffloadedEndpointsState @ 0x1C0045F78
 * Callers:
 *     UsbDevice_QueueConfigureEndpointEvent @ 0x1C00071A4 (UsbDevice_QueueConfigureEndpointEvent.c)
 * Callees:
 *     UsbDevice_QueueConfigureEndpointEvent @ 0x1C00071A4 (UsbDevice_QueueConfigureEndpointEvent.c)
 *     _guard_dispatch_icall_nop @ 0x1C00191C0 (_guard_dispatch_icall_nop.c)
 *     WPP_RECORDER_SF_sds @ 0x1C003567C (WPP_RECORDER_SF_sds.c)
 *     UsbDevice_NumberOfOffloadedEndpointsInDropEndpointsList @ 0x1C004624C (UsbDevice_NumberOfOffloadedEndpointsInDropEndpointsList.c)
 *     UsbDevice_SendStopEndpointToOffloadedEndpoint @ 0x1C0046708 (UsbDevice_SendStopEndpointToOffloadedEndpoint.c)
 */

__int64 __fastcall UsbDevice_HandleSendStopEndpointToOffloadedEndpointsState(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4)
{
  __int64 result; // rax
  int v7; // edx
  int v8; // r8d
  int v9; // r9d
  __int64 v10; // rbx

  result = UsbDevice_NumberOfOffloadedEndpointsInDropEndpointsList(a2, a2, a3, a4);
  v10 = 0LL;
  if ( (_DWORD)result )
  {
    *(_DWORD *)(a1 + 580) = result;
    if ( *(_DWORD *)(a2 + 40) )
    {
      do
      {
        result = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD, void *))(WdfFunctions_01023 + 1616))(
                   WdfDriverGlobals,
                   *(_QWORD *)(*(_QWORD *)(a2 + 48) + 8 * v10),
                   off_1C00601A8);
        if ( *(_DWORD *)(result + 1352) == 2 )
          result = UsbDevice_SendStopEndpointToOffloadedEndpoint(a1, result);
        v10 = (unsigned int)(v10 + 1);
      }
      while ( (unsigned int)v10 < *(_DWORD *)(a2 + 40) );
    }
  }
  else
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_sds(WPP_GLOBAL_Control->DeviceExtension, v7, v8, v9);
    if ( !KdRefreshDebuggerNotPresent() )
      __debugbreak();
    if ( *(_DWORD *)(a1 + 448) == 259 )
      *(_DWORD *)(a1 + 448) = -1073741595;
    return UsbDevice_QueueConfigureEndpointEvent(a1, 2LL);
  }
  return result;
}
