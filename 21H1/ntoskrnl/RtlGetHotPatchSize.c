/*
 * XREFs of RtlGetHotPatchSize @ 0x14058A1DC
 * Callers:
 *     MiPrepareDriverForHotPatch @ 0x1408C8BF8 (MiPrepareDriverForHotPatch.c)
 *     RtlCountRequiredHotPatchAddressTableEntries @ 0x140916628 (RtlCountRequiredHotPatchAddressTableEntries.c)
 *     RtlEnumerateHotPatchPatches @ 0x140916818 (RtlEnumerateHotPatchPatches.c)
 *     RtlHotPatchSynchronizationRequired @ 0x140916A04 (RtlHotPatchSynchronizationRequired.c)
 *     RtlValidateHotPatchBase @ 0x140916B64 (RtlValidateHotPatchBase.c)
 *     RtlApplyHotPatch @ 0x1409AEA74 (RtlApplyHotPatch.c)
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
