/*
 * XREFs of RtlGetHotPatchSize @ 0x14058E2FC
 * Callers:
 *     MiPrepareDriverForHotPatch @ 0x1408CFD88 (MiPrepareDriverForHotPatch.c)
 *     RtlCountRequiredHotPatchAddressTableEntries @ 0x14091D4C8 (RtlCountRequiredHotPatchAddressTableEntries.c)
 *     RtlEnumerateHotPatchPatches @ 0x14091D6B8 (RtlEnumerateHotPatchPatches.c)
 *     RtlHotPatchSynchronizationRequired @ 0x14091D8A4 (RtlHotPatchSynchronizationRequired.c)
 *     RtlValidateHotPatchBase @ 0x14091DA04 (RtlValidateHotPatchBase.c)
 *     RtlApplyHotPatch @ 0x1409B5844 (RtlApplyHotPatch.c)
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
