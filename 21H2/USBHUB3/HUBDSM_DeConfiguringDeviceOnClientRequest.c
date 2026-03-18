/*
 * XREFs of HUBDSM_DeConfiguringDeviceOnClientRequest @ 0x1C001D010
 * Callers:
 *     <none>
 * Callees:
 *     HUBDTX_SetDeviceNullConfigurationUsingControlTransfer @ 0x1C0028FE4 (HUBDTX_SetDeviceNullConfigurationUsingControlTransfer.c)
 */

__int64 __fastcall HUBDSM_DeConfiguringDeviceOnClientRequest(__int64 a1)
{
  HUBDTX_SetDeviceNullConfigurationUsingControlTransfer(*(_QWORD *)(a1 + 960));
  return 1000LL;
}
