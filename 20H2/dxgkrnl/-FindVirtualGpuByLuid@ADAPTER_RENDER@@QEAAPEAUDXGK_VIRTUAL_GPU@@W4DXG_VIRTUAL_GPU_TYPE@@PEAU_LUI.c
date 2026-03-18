/*
 * XREFs of ?FindVirtualGpuByLuid@ADAPTER_RENDER@@QEAAPEAUDXGK_VIRTUAL_GPU@@W4DXG_VIRTUAL_GPU_TYPE@@PEAU_LUID@@@Z @ 0x1C022E980
 * Callers:
 *     DxgkDdiQueryVirtualFunctionIndexByLuid @ 0x1C02307A8 (DxgkDdiQueryVirtualFunctionIndexByLuid.c)
 *     DxgkDdiSetVirtualGpuVmBus @ 0x1C0230C64 (DxgkDdiSetVirtualGpuVmBus.c)
 *     DpiFdoDispatchIoctl @ 0x1C02C7BB0 (DpiFdoDispatchIoctl.c)
 * Callees:
 *     ?FindVirtualGpuByLuid@DXGVIRTUALGPUMANAGER@@QEAAPEAUDXGK_VIRTUAL_GPU@@PEAU_LUID@@@Z @ 0x1C022E9BC (-FindVirtualGpuByLuid@DXGVIRTUALGPUMANAGER@@QEAAPEAUDXGK_VIRTUAL_GPU@@PEAU_LUID@@@Z.c)
 */

struct DXGK_VIRTUAL_GPU *__fastcall ADAPTER_RENDER::FindVirtualGpuByLuid(__int64 a1, int a2, struct _LUID *a3)
{
  DXGVIRTUALGPUMANAGER *v3; // rcx

  if ( a2 )
  {
    if ( a2 != 1 )
      return 0LL;
    v3 = *(DXGVIRTUALGPUMANAGER **)(a1 + 1640);
  }
  else
  {
    v3 = *(DXGVIRTUALGPUMANAGER **)(a1 + 1632);
  }
  if ( v3 )
    return DXGVIRTUALGPUMANAGER::FindVirtualGpuByLuid(v3, a3);
  return 0LL;
}
