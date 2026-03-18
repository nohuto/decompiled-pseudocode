/*
 * XREFs of DpiTryLidStateRecovery @ 0x1C005F948
 * Callers:
 *     DxgkCheckDisplayState @ 0x1C02F0140 (DxgkCheckDisplayState.c)
 * Callees:
 *     DpiAcpiCallAcpiEventHandler @ 0x1C0066024 (DpiAcpiCallAcpiEventHandler.c)
 */

bool DpiTryLidStateRecovery()
{
  return (int)DpiAcpiCallAcpiEventHandler(g_pDeviceObject) >= 0;
}
