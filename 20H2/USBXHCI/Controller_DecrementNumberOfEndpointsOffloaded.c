/*
 * XREFs of Controller_DecrementNumberOfEndpointsOffloaded @ 0x1C0031E64
 * Callers:
 *     Endpoint_Disable @ 0x1C000AB88 (Endpoint_Disable.c)
 * Callees:
 *     DynamicLock_Release @ 0x1C0006D40 (DynamicLock_Release.c)
 *     DynamicLock_Acquire @ 0x1C0007340 (DynamicLock_Acquire.c)
 *     WPP_RECORDER_SF_ @ 0x1C000A0B8 (WPP_RECORDER_SF_.c)
 *     _guard_dispatch_icall_nop @ 0x1C001BCF0 (_guard_dispatch_icall_nop.c)
 *     WPP_RECORDER_SF_sds @ 0x1C0036B5C (WPP_RECORDER_SF_sds.c)
 *     Interrupter_DeInitializeAfterOffload @ 0x1C003C528 (Interrupter_DeInitializeAfterOffload.c)
 */

__int64 __fastcall Controller_DecrementNumberOfEndpointsOffloaded(__int64 a1, int a2, int a3, int a4)
{
  int v5; // edx
  int v6; // r8d
  int v7; // r9d
  int v8; // eax
  int v9; // eax
  __int64 v10; // rdx

  DynamicLock_Acquire(*(_QWORD *)(a1 + 600), a2, a3, a4);
  v8 = *(_DWORD *)(a1 + 592);
  if ( v8 )
  {
    v9 = v8 - 1;
    *(_DWORD *)(a1 + 592) = v9;
    if ( !v9 && *(_DWORD *)(a1 + 588) == 1 )
    {
      Interrupter_DeInitializeAfterOffload(*(_QWORD *)(a1 + 128));
      if ( *(_DWORD *)(a1 + 588) == 1 )
      {
        v10 = *(_QWORD *)(a1 + 776);
        *(_BYTE *)(a1 + 784) = 0;
        (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64))(WdfFunctions_01023 + 3040))(WdfDriverGlobals, v10);
      }
    }
  }
  else
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_sds(WPP_GLOBAL_Control->DeviceExtension, v5, v6, v7);
    if ( !KdRefreshDebuggerNotPresent() )
      __debugbreak();
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v5) = 2;
      WPP_RECORDER_SF_(*(_QWORD *)(a1 + 72), v5, 4, 303, (__int64)&WPP_1fced1a270be39d344e698c349d4a9f8_Traceguids);
    }
  }
  return DynamicLock_Release(*(_QWORD *)(a1 + 600), v5, v6, v7);
}
