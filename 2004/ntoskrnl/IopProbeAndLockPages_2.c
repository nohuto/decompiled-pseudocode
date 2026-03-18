/*
 * XREFs of IopProbeAndLockPages_2 @ 0x140503340
 * Callers:
 *     NtQueryEaFile @ 0x1406EA6D0 (NtQueryEaFile.c)
 *     NtSetEaFile @ 0x14071EAF0 (NtSetEaFile.c)
 * Callees:
 *     MiProbeAndLockPages @ 0x14024D8E0 (MiProbeAndLockPages.c)
 *     MmUpdateMdlTracker @ 0x14052BDA0 (MmUpdateMdlTracker.c)
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
