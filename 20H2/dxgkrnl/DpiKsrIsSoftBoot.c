/*
 * XREFs of DpiKsrIsSoftBoot @ 0x1C01824FC
 * Callers:
 *     DpiFdoStartAdapter @ 0x1C01815E4 (DpiFdoStartAdapter.c)
 *     ?Initialize@ADAPTER_RENDER@@QEAAJXZ @ 0x1C01832A8 (-Initialize@ADAPTER_RENDER@@QEAAJXZ.c)
 *     ?CreateVirtualGpu@DXGVIRTUALGPUMANAGER_GPUP@@UEAAJPEAU_DXGKARG_CREATEVIRTUALGPU@@E@Z @ 0x1C0235660 (-CreateVirtualGpu@DXGVIRTUALGPUMANAGER_GPUP@@UEAAJPEAU_DXGKARG_CREATEVIRTUALGPU@@E@Z.c)
 *     DpiKsrGetSavedAdapterState @ 0x1C02D1974 (DpiKsrGetSavedAdapterState.c)
 *     DpiKsrRestoreAdapterDriverState @ 0x1C02D1B4C (DpiKsrRestoreAdapterDriverState.c)
 * Callees:
 *     <none>
 */

char DpiKsrIsSoftBoot()
{
  char result; // al

  result = 0;
  if ( qword_1C00B1018 )
  {
    if ( !*(_BYTE *)(qword_1C00B1018 + 28) )
      return 1;
  }
  return result;
}
