/*
 * XREFs of CmInitBootFeatureConfigurations @ 0x140A39340
 * Callers:
 *     KiInitializeBootStructures @ 0x14099D160 (KiInitializeBootStructures.c)
 * Callees:
 *     wil_details_EvaluateFeatureDependencies @ 0x1405CC62C (wil_details_EvaluateFeatureDependencies.c)
 *     wil_details_PopulateInitialConfiguredFeatureStatesFromBuffers @ 0x140A395E8 (wil_details_PopulateInitialConfiguredFeatureStatesFromBuffers.c)
 *     CmFcManagerStartBootPhase @ 0x140A396D8 (CmFcManagerStartBootPhase.c)
 *     CmFcManagerInitialize @ 0x140A39D64 (CmFcManagerInitialize.c)
 */

__int64 __fastcall CmInitBootFeatureConfigurations(__int64 a1)
{
  _QWORD *v2; // rbx
  int v3; // ecx

  CmFcManagerInitialize();
  v2 = (_QWORD *)(*(_QWORD *)(a1 + 240) + 3568LL);
  wil_details_PopulateInitialConfiguredFeatureStatesFromBuffers(v2);
  wil_details_EvaluateFeatureDependencies();
  return CmFcManagerStartBootPhase(v3, *v2, v2[1], v2[2], v2[3], v2[4]);
}
