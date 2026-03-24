/*
 * XREFs of DpiKsrIsSoftBoot @ 0x1C018AE38
 * Callers:
 *     DpiFdoStartAdapter @ 0x1C018071C (DpiFdoStartAdapter.c)
 *     ?Initialize@ADAPTER_RENDER@@QEAAJXZ @ 0x1C0189BF8 (-Initialize@ADAPTER_RENDER@@QEAAJXZ.c)
 *     ?CreateVirtualGpu@DXGVIRTUALGPUMANAGER_GPUP@@UEAAJPEAU_DXGKARG_CREATEVIRTUALGPU@@E@Z @ 0x1C0236580 (-CreateVirtualGpu@DXGVIRTUALGPUMANAGER_GPUP@@UEAAJPEAU_DXGKARG_CREATEVIRTUALGPU@@E@Z.c)
 *     DpiKsrGetSavedAdapterState @ 0x1C02D2C74 (DpiKsrGetSavedAdapterState.c)
 *     DpiKsrRestoreAdapterDriverState @ 0x1C02D2E4C (DpiKsrRestoreAdapterDriverState.c)
 * Callees:
 *     <none>
 */

char DpiKsrIsSoftBoot()
{
  char result; // al

  result = 0;
  if ( qword_1C00B3018 )
  {
    if ( !*(_BYTE *)(qword_1C00B3018 + 28) )
      return 1;
  }
  return result;
}
