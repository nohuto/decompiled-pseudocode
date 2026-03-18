/*
 * XREFs of DpiKsrIsSoftBoot @ 0x1C016FA38
 * Callers:
 *     ?Initialize@ADAPTER_RENDER@@QEAAJXZ @ 0x1C016DC78 (-Initialize@ADAPTER_RENDER@@QEAAJXZ.c)
 *     DpiFdoStartAdapter @ 0x1C0171310 (DpiFdoStartAdapter.c)
 *     ?CreateVirtualGpu@DXGVIRTUALGPUMANAGER_GPUP@@UEAAJPEAU_DXGKARG_CREATEVIRTUALGPU@@E@Z @ 0x1C0232470 (-CreateVirtualGpu@DXGVIRTUALGPUMANAGER_GPUP@@UEAAJPEAU_DXGKARG_CREATEVIRTUALGPU@@E@Z.c)
 *     DpiKsrGetSavedAdapterState @ 0x1C02CE3B4 (DpiKsrGetSavedAdapterState.c)
 *     DpiKsrRestoreAdapterDriverState @ 0x1C02CE58C (DpiKsrRestoreAdapterDriverState.c)
 * Callees:
 *     <none>
 */

char DpiKsrIsSoftBoot()
{
  char result; // al

  result = 0;
  if ( qword_1C00AFF18 )
  {
    if ( !*(_BYTE *)(qword_1C00AFF18 + 28) )
      return 1;
  }
  return result;
}
