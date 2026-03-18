/*
 * XREFs of CmFcpCopySectionState @ 0x1406C4388
 * Callers:
 *     CmFcManagerQueryFeatureConfigurationSectionInformation @ 0x1406C4190 (CmFcManagerQueryFeatureConfigurationSectionInformation.c)
 *     CmFcManagerStartRuntimePhase @ 0x140A3B7B8 (CmFcManagerStartRuntimePhase.c)
 * Callees:
 *     ObfReferenceObject @ 0x140221300 (ObfReferenceObject.c)
 */

LONG_PTR __fastcall CmFcpCopySectionState(__int64 a1, __int64 a2)
{
  void *v2; // rcx
  LONG_PTR result; // rax

  *(_OWORD *)a1 = *(_OWORD *)a2;
  *(_QWORD *)(a1 + 16) = *(_QWORD *)(a2 + 16);
  v2 = *(void **)(a1 + 8);
  if ( v2 )
    return ObfReferenceObject(v2);
  return result;
}
