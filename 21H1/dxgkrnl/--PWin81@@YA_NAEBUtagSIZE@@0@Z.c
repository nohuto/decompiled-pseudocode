/*
 * XREFs of ??PWin81@@YA_NAEBUtagSIZE@@0@Z @ 0x1C02AABF0
 * Callers:
 *     ?CalculateMinMaxOverride@Win81@@YAXKUtagSIZE@@PEAJ1QEBUDPI_SCALE_FACTOR_COLLECTION@1@@Z @ 0x1C02AAD08 (-CalculateMinMaxOverride@Win81@@YAXKUtagSIZE@@PEAJ1QEBUDPI_SCALE_FACTOR_COLLECTION@1@@Z.c)
 *     ?HeuristicallyPickScaleFactorsForInternalEdidlessBdd@Win81@@YAXUtagSIZE@@IPEAU_DPI_INFORMATION@@@Z @ 0x1C02AB2D8 (-HeuristicallyPickScaleFactorsForInternalEdidlessBdd@Win81@@YAXUtagSIZE@@IPEAU_DPI_INFORMATION@@.c)
 *     ?SatisfyMinResolutionBarForScaleIdx@Win81@@YAKHUtagSIZE@@QEBUDPI_SCALE_FACTOR_COLLECTION@1@@Z @ 0x1C02AB44C (-SatisfyMinResolutionBarForScaleIdx@Win81@@YAKHUtagSIZE@@QEBUDPI_SCALE_FACTOR_COLLECTION@1@@Z.c)
 * Callees:
 *     <none>
 */

bool __fastcall Win81::operator>=(_DWORD *a1, _DWORD *a2)
{
  return *a1 >= *a2 && a1[1] >= a2[1];
}
