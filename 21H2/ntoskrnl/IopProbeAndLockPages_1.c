/*
 * XREFs of IopProbeAndLockPages_1 @ 0x1402ACAF0
 * Callers:
 *     IopXxxControlFile @ 0x1407153F0 (IopXxxControlFile.c)
 *     IopSetEaOrQuotaInformationFile @ 0x14089250C (IopSetEaOrQuotaInformationFile.c)
 * Callees:
 *     MiProbeAndLockPages @ 0x1402AF160 (MiProbeAndLockPages.c)
 *     MmUpdateMdlTracker @ 0x1405314B0 (MmUpdateMdlTracker.c)
 */

__int64 __fastcall IopProbeAndLockPages_1(__int64 a1, char a2, int a3, __int64 a4, unsigned int a5)
{
  __int64 result; // rax

  MiProbeAndLockPages(a1, a2 != 0, a3 != 0);
  result = (unsigned int)MmTrackLockedPages;
  if ( (MmTrackLockedPages & 1) != 0 )
    return MmUpdateMdlTracker(a1, *(_QWORD *)(*(_QWORD *)(a4 + 8) + 8LL * a5 + 112), a4);
  return result;
}
