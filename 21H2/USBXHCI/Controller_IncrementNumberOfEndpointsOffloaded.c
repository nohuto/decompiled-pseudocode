/*
 * XREFs of Controller_IncrementNumberOfEndpointsOffloaded @ 0x1C0031E60
 * Callers:
 *     UsbDevice_GetEndpointOffloadInformation @ 0x1C004631C (UsbDevice_GetEndpointOffloadInformation.c)
 *     UsbDevice_SetResourceAssignmentCompletion @ 0x1C0047110 (UsbDevice_SetResourceAssignmentCompletion.c)
 * Callees:
 *     DynamicLock_Release @ 0x1C0006D40 (DynamicLock_Release.c)
 *     DynamicLock_Acquire @ 0x1C0007340 (DynamicLock_Acquire.c)
 *     _guard_dispatch_icall_nop @ 0x1C001AFF0 (_guard_dispatch_icall_nop.c)
 *     Interrupter_InitializeForOffload @ 0x1C003BC78 (Interrupter_InitializeForOffload.c)
 */

__int64 __fastcall Controller_IncrementNumberOfEndpointsOffloaded(__int64 a1, int a2, int a3, int a4)
{
  int v5; // edx
  int v6; // r8d
  int v7; // r9d
  int v8; // eax
  __int64 v9; // rdx
  __int64 v10; // rcx

  DynamicLock_Acquire(*(_QWORD *)(a1 + 600), a2, a3, a4);
  v8 = *(_DWORD *)(a1 + 592);
  if ( !v8 && *(_DWORD *)(a1 + 588) == 1 )
  {
    Interrupter_InitializeForOffload(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 128) + 32LL)
                                               + 8LL * *(unsigned int *)(*(_QWORD *)(a1 + 128) + 64LL)));
    v9 = *(_QWORD *)(a1 + 776);
    *(_BYTE *)(a1 + 784) = 1;
    (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64))(WdfFunctions_01023 + 3040))(WdfDriverGlobals, v9);
    v8 = *(_DWORD *)(a1 + 592);
  }
  v10 = *(_QWORD *)(a1 + 600);
  *(_DWORD *)(a1 + 592) = v8 + 1;
  return DynamicLock_Release(v10, v5, v6, v7);
}
