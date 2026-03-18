/*
 * XREFs of RtlGetHotPatchSize @ 0x14058A8CC
 * Callers:
 *     MiPrepareDriverForHotPatch @ 0x1408C9F48 (MiPrepareDriverForHotPatch.c)
 *     RtlCountRequiredHotPatchAddressTableEntries @ 0x140917898 (RtlCountRequiredHotPatchAddressTableEntries.c)
 *     RtlEnumerateHotPatchPatches @ 0x140917A88 (RtlEnumerateHotPatchPatches.c)
 *     RtlHotPatchSynchronizationRequired @ 0x140917C74 (RtlHotPatchSynchronizationRequired.c)
 *     RtlValidateHotPatchBase @ 0x140917DD4 (RtlValidateHotPatchBase.c)
 *     RtlApplyHotPatch @ 0x1409AF8D4 (RtlApplyHotPatch.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall RtlGetHotPatchSize(_DWORD *a1)
{
  __int64 result; // rax

  result = 2LL;
  if ( *a1 >= 3u )
    return (unsigned int)(a1[6] + 2);
  return result;
}
