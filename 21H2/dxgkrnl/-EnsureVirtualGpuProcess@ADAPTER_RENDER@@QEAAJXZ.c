/*
 * XREFs of ?EnsureVirtualGpuProcess@ADAPTER_RENDER@@QEAAJXZ @ 0x1C0357578
 * Callers:
 *     ?CreateVirtualGpu@ADAPTER_RENDER@@QEAAJW4DXG_VIRTUAL_GPU_TYPE@@PEAU_DXGKARG_CREATEVIRTUALGPU@@EPEAX@Z @ 0x1C0356AD0 (-CreateVirtualGpu@ADAPTER_RENDER@@QEAAJW4DXG_VIRTUAL_GPU_TYPE@@PEAU_DXGKARG_CREATEVIRTUALGPU@@EP.c)
 *     ?SetGpuPartitionCount@ADAPTER_RENDER@@QEAAJW4DXG_VIRTUAL_GPU_TYPE@@PEAU_DXGKARG_SETGPUPARTITIONCOUNT@@E@Z @ 0x1C0358D20 (-SetGpuPartitionCount@ADAPTER_RENDER@@QEAAJW4DXG_VIRTUAL_GPU_TYPE@@PEAU_DXGKARG_SETGPUPARTITIONC.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x1C0008E10 (DxgkLogInternalTriageEvent.c)
 *     DxgkpCheckProcessForVirtualMachineManagementAccess @ 0x1C035A7A0 (DxgkpCheckProcessForVirtualMachineManagementAccess.c)
 */

__int64 __fastcall ADAPTER_RENDER::EnsureVirtualGpuProcess(ADAPTER_RENDER *this, __int64 a2)
{
  __int64 v2; // rcx

  v2 = *(_QWORD *)(*((_QWORD *)this + 2) + 216LL);
  if ( *(_BYTE *)(*(_QWORD *)(v2 + 64) + 5452LL)
    || (unsigned __int8)DxgkpCheckProcessForVirtualMachineManagementAccess(v2, a2) )
  {
    return 0LL;
  }
  WdLogSingleEntry1(2LL, 144LL);
  DxgkLogInternalTriageEvent(
    0LL,
    0x40000,
    -1,
    (__int64)L"vGPU API is called from wrong process",
    144LL,
    0LL,
    0LL,
    0LL,
    0LL);
  return 3221225485LL;
}
