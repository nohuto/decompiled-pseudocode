/*
 * XREFs of MiComputePreferredNode @ 0x1405426A8
 * Callers:
 *     MiCommitExistingVad @ 0x1402AB230 (MiCommitExistingVad.c)
 *     MiCreateLargePfnList @ 0x140558A5C (MiCreateLargePfnList.c)
 *     MiMapUserLargePages @ 0x140559290 (MiMapUserLargePages.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MiComputePreferredNode(__int64 a1)
{
  unsigned int v1; // edx
  int v2; // eax

  v1 = *(_DWORD *)(a1 + 48);
  v2 = (v1 >> 12) & 0x3F;
  if ( v2 )
    return (unsigned int)(v2 - 1);
  if ( (v1 & 0x100000) == 0 && (v2 = (*(_DWORD *)(**(_QWORD **)(a1 + 72) + 56LL) >> 20) & 0x3F) != 0 )
    return (unsigned int)(v2 - 1);
  else
    return *(unsigned int *)(KiProcessorBlock[KeGetCurrentThread()->IdealProcessor] + 32532);
}
