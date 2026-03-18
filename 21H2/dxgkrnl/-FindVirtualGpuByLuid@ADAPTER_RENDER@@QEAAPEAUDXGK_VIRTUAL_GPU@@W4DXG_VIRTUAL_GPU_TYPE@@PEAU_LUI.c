/*
 * XREFs of ?FindVirtualGpuByLuid@ADAPTER_RENDER@@QEAAPEAUDXGK_VIRTUAL_GPU@@W4DXG_VIRTUAL_GPU_TYPE@@PEAU_LUID@@@Z @ 0x1C0357600
 * Callers:
 *     DpiFdoDispatchIoctl @ 0x1C01E6840 (DpiFdoDispatchIoctl.c)
 *     DxgkDdiQueryVirtualFunctionIndexByLuid @ 0x1C035A030 (DxgkDdiQueryVirtualFunctionIndexByLuid.c)
 *     DxgkDdiSetVirtualGpuVmBus @ 0x1C035A528 (DxgkDdiSetVirtualGpuVmBus.c)
 * Callees:
 *     ?FindVirtualGpuByLuid@DXGVIRTUALGPUMANAGER@@QEAAPEAUDXGK_VIRTUAL_GPU@@PEAU_LUID@@@Z @ 0x1C035763C (-FindVirtualGpuByLuid@DXGVIRTUALGPUMANAGER@@QEAAPEAUDXGK_VIRTUAL_GPU@@PEAU_LUID@@@Z.c)
 */

struct DXGK_VIRTUAL_GPU *__fastcall ADAPTER_RENDER::FindVirtualGpuByLuid(__int64 a1, int a2, struct _LUID *a3)
{
  DXGVIRTUALGPUMANAGER *v3; // rcx

  if ( a2 )
  {
    if ( a2 != 1 )
      return 0LL;
    v3 = *(DXGVIRTUALGPUMANAGER **)(a1 + 1736);
  }
  else
  {
    v3 = *(DXGVIRTUALGPUMANAGER **)(a1 + 1728);
  }
  if ( v3 )
    return DXGVIRTUALGPUMANAGER::FindVirtualGpuByLuid(v3, a3);
  return 0LL;
}
