/*
 * XREFs of ??$make_range@PEAUwil_details_FeatureUsageSRUM@@@wil@@YA?AV?$pointer_range@PEAUwil_details_FeatureUsageSRUM@@@details@0@PEAUwil_details_FeatureUsageSRUM@@_K@Z @ 0x180007B9C
 * Callers:
 *     ?wil_details_WriteSRUMWnfUsageBuffer@@YAJPEAV?$heap_vector@Uwil_details_FeatureUsageSRUM@@@details_abi@wil@@@Z @ 0x180004158 (-wil_details_WriteSRUMWnfUsageBuffer@@YAJPEAV-$heap_vector@Uwil_details_FeatureUsageSRUM@@@detai.c)
 * Callees:
 *     <none>
 */

_QWORD *__fastcall wil::make_range<wil_details_FeatureUsageSRUM *>(_QWORD *a1, __int64 a2, __int64 a3)
{
  _QWORD *result; // rax

  *a1 = a2;
  result = a1;
  a1[1] = a2 + 12 * a3;
  return result;
}
