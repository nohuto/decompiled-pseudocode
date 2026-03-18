/*
 * XREFs of Controller_IncrementNumberOfEndpointsOffloaded @ 0x1C0031D50
 * Callers:
 *     UsbDevice_GetEndpointOffloadInformation @ 0x1C00467DC (UsbDevice_GetEndpointOffloadInformation.c)
 *     UsbDevice_SetResourceAssignmentCompletion @ 0x1C00474F0 (UsbDevice_SetResourceAssignmentCompletion.c)
 * Callees:
 *     DynamicLock_Release @ 0x1C0003E5C (DynamicLock_Release.c)
 *     DynamicLock_Acquire @ 0x1C0004248 (DynamicLock_Acquire.c)
 *     _guard_dispatch_icall_nop @ 0x1C00199B0 (_guard_dispatch_icall_nop.c)
 *     Interrupter_InitializeForOffload @ 0x1C003C1CC (Interrupter_InitializeForOffload.c)
 */

__int64 __fastcall Controller_IncrementNumberOfEndpointsOffloaded(__int64 a1)
{
  int v2; // eax
  __int64 v3; // rdx
  __int64 v4; // rcx

  DynamicLock_Acquire(*(_QWORD *)(a1 + 600));
  v2 = *(_DWORD *)(a1 + 592);
  if ( !v2 && *(_DWORD *)(a1 + 588) == 1 )
  {
    Interrupter_InitializeForOffload(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 128) + 32LL)
                                               + 8LL * *(unsigned int *)(*(_QWORD *)(a1 + 128) + 64LL)));
    v3 = *(_QWORD *)(a1 + 776);
    *(_BYTE *)(a1 + 784) = 1;
    (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64))(WdfFunctions_01023 + 3040))(WdfDriverGlobals, v3);
    v2 = *(_DWORD *)(a1 + 592);
  }
  v4 = *(_QWORD *)(a1 + 600);
  *(_DWORD *)(a1 + 592) = v2 + 1;
  return DynamicLock_Release(v4);
}
