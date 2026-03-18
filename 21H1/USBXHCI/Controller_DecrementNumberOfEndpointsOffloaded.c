/*
 * XREFs of Controller_DecrementNumberOfEndpointsOffloaded @ 0x1C0030984
 * Callers:
 *     Endpoint_Disable @ 0x1C000A348 (Endpoint_Disable.c)
 * Callees:
 *     DynamicLock_Release @ 0x1C0006998 (DynamicLock_Release.c)
 *     DynamicLock_Acquire @ 0x1C0006DD0 (DynamicLock_Acquire.c)
 *     WPP_RECORDER_SF_ @ 0x1C0009878 (WPP_RECORDER_SF_.c)
 *     _guard_dispatch_icall_nop @ 0x1C00191C0 (_guard_dispatch_icall_nop.c)
 *     WPP_RECORDER_SF_sds @ 0x1C003567C (WPP_RECORDER_SF_sds.c)
 *     Interrupter_DeInitializeAfterOffload @ 0x1C003B048 (Interrupter_DeInitializeAfterOffload.c)
 */

__int64 __fastcall Controller_DecrementNumberOfEndpointsOffloaded(__int64 a1, int a2, int a3, int a4)
{
  int v5; // edx
  int v6; // r8d
  int v7; // r9d
  int v8; // eax
  int v9; // eax
  __int64 v10; // rdx

  DynamicLock_Acquire(*(_QWORD *)(a1 + 584), a2, a3, a4);
  v8 = *(_DWORD *)(a1 + 576);
  if ( v8 )
  {
    v9 = v8 - 1;
    *(_DWORD *)(a1 + 576) = v9;
    if ( !v9 && *(_DWORD *)(a1 + 572) == 1 )
    {
      Interrupter_DeInitializeAfterOffload(*(_QWORD *)(a1 + 128));
      if ( *(_DWORD *)(a1 + 572) == 1 )
      {
        v10 = *(_QWORD *)(a1 + 760);
        *(_BYTE *)(a1 + 768) = 0;
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
      WPP_RECORDER_SF_(*(_QWORD *)(a1 + 72), v5, 4, 303, (__int64)&WPP_2a10b20b34c83bd3dea18079565cd6d6_Traceguids);
    }
  }
  return DynamicLock_Release(*(_QWORD *)(a1 + 584), v5, v6, v7);
}
