/*
 * XREFs of CmInitBootFeatureConfigurations @ 0x140A35340
 * Callers:
 *     KiInitializeBootStructures @ 0x1409977A0 (KiInitializeBootStructures.c)
 * Callees:
 *     wil_InitializeFeatureStagingFromBuffers @ 0x140A355E4 (wil_InitializeFeatureStagingFromBuffers.c)
 *     CmFcManagerStartBootPhase @ 0x140A3570C (CmFcManagerStartBootPhase.c)
 *     CmFcManagerInitialize @ 0x140A35D98 (CmFcManagerInitialize.c)
 */

__int64 __fastcall CmInitBootFeatureConfigurations(__int64 a1)
{
  _QWORD *v2; // rbx
  int v3; // ecx

  CmFcManagerInitialize();
  v2 = (_QWORD *)(*(_QWORD *)(a1 + 240) + 3568LL);
  wil_InitializeFeatureStagingFromBuffers(v2);
  return CmFcManagerStartBootPhase(v3, *v2, v2[1], v2[2], v2[3], v2[4]);
}
