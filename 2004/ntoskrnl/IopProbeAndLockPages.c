/*
 * XREFs of IopProbeAndLockPages @ 0x14024D840
 * Callers:
 *     IopXxxControlFile @ 0x140674CF0 (IopXxxControlFile.c)
 *     IopSetEaOrQuotaInformationFile @ 0x14088F32C (IopSetEaOrQuotaInformationFile.c)
 * Callees:
 *     MiProbeAndLockPages @ 0x14024D8E0 (MiProbeAndLockPages.c)
 *     MmUpdateMdlTracker @ 0x14052BDA0 (MmUpdateMdlTracker.c)
 */

__int64 __fastcall IopProbeAndLockPages(__int64 a1, char a2, int a3, __int64 a4, unsigned int a5)
{
  __int64 result; // rax

  MiProbeAndLockPages(a1, a2 != 0, a3 != 0);
  result = (unsigned int)MmTrackLockedPages;
  if ( (MmTrackLockedPages & 1) != 0 )
    return MmUpdateMdlTracker(a1, *(_QWORD *)(*(_QWORD *)(a4 + 8) + 8LL * a5 + 112), a4);
  return result;
}
