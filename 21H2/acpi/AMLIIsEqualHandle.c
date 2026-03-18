/*
 * XREFs of AMLIIsEqualHandle @ 0x1C000C8F0
 * Callers:
 *     GetPciAddressWorker @ 0x1C000CDE0 (GetPciAddressWorker.c)
 *     ACPIBuildDevicePowerNodes @ 0x1C002A088 (ACPIBuildDevicePowerNodes.c)
 *     CacheBBNResult @ 0x1C002E6E0 (CacheBBNResult.c)
 *     ACPIEcStartDevice @ 0x1C00530C0 (ACPIEcStartDevice.c)
 * Callees:
 *     <none>
 */

bool __fastcall AMLIIsEqualHandle(_QWORD *a1, _QWORD *a2)
{
  bool result; // al

  result = 0;
  if ( a1 )
  {
    if ( a2 )
      return *a1 == *a2;
  }
  else if ( !a2 )
  {
    return 1;
  }
  return result;
}
