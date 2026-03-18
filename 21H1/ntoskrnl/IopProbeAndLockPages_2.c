/*
 * XREFs of IopProbeAndLockPages_2 @ 0x140502CF0
 * Callers:
 *     NtQueryEaFile @ 0x1406C9520 (NtQueryEaFile.c)
 *     NtSetEaFile @ 0x14071CE70 (NtSetEaFile.c)
 * Callees:
 *     MiProbeAndLockPages @ 0x1402A6910 (MiProbeAndLockPages.c)
 *     MmUpdateMdlTracker @ 0x14052B750 (MmUpdateMdlTracker.c)
 */

__int64 __fastcall IopProbeAndLockPages_2(_DWORD *a1, char a2, int a3, __int64 a4, unsigned int a5)
{
  __int64 result; // rax

  MiProbeAndLockPages(a1, a2 != 0, a3 != 0);
  result = (unsigned int)MmTrackLockedPages;
  if ( (MmTrackLockedPages & 1) != 0 )
    return MmUpdateMdlTracker(a1, *(_QWORD *)(*(_QWORD *)(a4 + 8) + 8LL * a5 + 112), a4);
  return result;
}
