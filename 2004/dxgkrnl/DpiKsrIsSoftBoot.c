/*
 * XREFs of DpiKsrIsSoftBoot @ 0x1C01836AC
 * Callers:
 *     DpiFdoStartAdapter @ 0x1C0182794 (DpiFdoStartAdapter.c)
 *     ?Initialize@ADAPTER_RENDER@@QEAAJXZ @ 0x1C0184458 (-Initialize@ADAPTER_RENDER@@QEAAJXZ.c)
 *     ?CreateVirtualGpu@DXGVIRTUALGPUMANAGER_GPUP@@UEAAJPEAU_DXGKARG_CREATEVIRTUALGPU@@E@Z @ 0x1C0236810 (-CreateVirtualGpu@DXGVIRTUALGPUMANAGER_GPUP@@UEAAJPEAU_DXGKARG_CREATEVIRTUALGPU@@E@Z.c)
 *     DpiKsrGetSavedAdapterState @ 0x1C02D2934 (DpiKsrGetSavedAdapterState.c)
 *     DpiKsrRestoreAdapterDriverState @ 0x1C02D2B0C (DpiKsrRestoreAdapterDriverState.c)
 * Callees:
 *     <none>
 */

char DpiKsrIsSoftBoot()
{
  char result; // al

  result = 0;
  if ( qword_1C00B2018 )
  {
    if ( !*(_BYTE *)(qword_1C00B2018 + 28) )
      return 1;
  }
  return result;
}
