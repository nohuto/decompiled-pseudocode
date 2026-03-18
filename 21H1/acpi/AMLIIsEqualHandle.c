/*
 * XREFs of AMLIIsEqualHandle @ 0x1C00633A4
 * Callers:
 *     ACPIBuildDevicePowerNodes @ 0x1C0015BC4 (ACPIBuildDevicePowerNodes.c)
 *     CacheBBNResult @ 0x1C00314B0 (CacheBBNResult.c)
 *     ACPIEcStartDevice @ 0x1C0053860 (ACPIEcStartDevice.c)
 * Callees:
 *     <none>
 */

bool __fastcall AMLIIsEqualHandle(_QWORD *a1, _QWORD *a2)
{
  bool result; // al

  result = 0;
  if ( !a1 )
    return a2 == 0LL;
  if ( a2 )
    return *a1 == *a2;
  return result;
}
