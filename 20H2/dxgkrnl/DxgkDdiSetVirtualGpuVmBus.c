/*
 * XREFs of DxgkDdiSetVirtualGpuVmBus @ 0x1C0230C64
 * Callers:
 *     ?DpiSetPartitionVmbus@@YAJPEAU_DEVICE_OBJECT@@PEAU_IRP@@PEAXK@Z @ 0x1C0051AFC (-DpiSetPartitionVmbus@@YAJPEAU_DEVICE_OBJECT@@PEAU_IRP@@PEAXK@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0027100 (_guard_dispatch_icall_nop.c)
 *     ?VgpuTrace@@YAXEJPEAXPEBG1ZZ @ 0x1C003F144 (-VgpuTrace@@YAXEJPEAXPEBG1ZZ.c)
 *     ?FindVirtualGpuByLuid@ADAPTER_RENDER@@QEAAPEAUDXGK_VIRTUAL_GPU@@W4DXG_VIRTUAL_GPU_TYPE@@PEAU_LUID@@@Z @ 0x1C022E980 (-FindVirtualGpuByLuid@ADAPTER_RENDER@@QEAAPEAUDXGK_VIRTUAL_GPU@@W4DXG_VIRTUAL_GPU_TYPE@@PEAU_LUI.c)
 */

__int64 __fastcall DxgkDdiSetVirtualGpuVmBus(_QWORD *a1, int a2, struct _LUID *a3, int *a4)
{
  struct DXGK_VIRTUAL_GPU *VirtualGpuByLuid; // rax
  __int64 v7; // rdx
  __int64 v8; // rax
  unsigned int v9; // ebx
  int v11; // [rsp+28h] [rbp-10h]

  VirtualGpuByLuid = ADAPTER_RENDER::FindVirtualGpuByLuid(a1[338], a2, a3);
  if ( VirtualGpuByLuid )
  {
    v9 = (*(__int64 (__fastcall **)(struct DXGK_VIRTUAL_GPU *, int *))(*(_QWORD *)VirtualGpuByLuid + 24LL))(
           VirtualGpuByLuid,
           a4);
  }
  else
  {
    v8 = WdLogNewEntry5_WdError(0LL, v7);
    *(_QWORD *)(v8 + 24) = 1533LL;
    WdLogEvent5_WdError(v8);
    v9 = -1073741811;
  }
  if ( bTracingEnabled )
  {
    v11 = *a4;
    VgpuTrace(1, v9, a1, L"DxgkDdiSetVirtualGpuVmBus", (wchar_t *)L"%d", v11);
  }
  return v9;
}
