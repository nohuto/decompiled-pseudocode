/*
 * XREFs of CmInitBootFeatureConfigurations @ 0x140B15450
 * Callers:
 *     KiInitializeBootStructures @ 0x140A57680 (KiInitializeBootStructures.c)
 * Callees:
 *     CmFcManagerStartBootPhase @ 0x140B154A4 (CmFcManagerStartBootPhase.c)
 *     wil_InitializeFeatureStagingFromBuffers @ 0x140B15550 (wil_InitializeFeatureStagingFromBuffers.c)
 *     CmFcManagerInitialize @ 0x140B15B24 (CmFcManagerInitialize.c)
 */

__int64 __fastcall CmInitBootFeatureConfigurations(__int64 a1)
{
  _QWORD *v2; // rbx
  int v3; // ecx

  CmFcManagerInitialize();
  v2 = (_QWORD *)(*(_QWORD *)(a1 + 240) + 3600LL);
  wil_InitializeFeatureStagingFromBuffers(v2);
  return CmFcManagerStartBootPhase(v3, *v2, v2[1], v2[2], v2[3], v2[4]);
}
