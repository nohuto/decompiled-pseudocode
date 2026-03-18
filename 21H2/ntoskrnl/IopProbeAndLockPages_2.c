/*
 * XREFs of IopProbeAndLockPages_2 @ 0x14055A55C
 * Callers:
 *     NtNotifyChangeDirectoryFileEx @ 0x1406C66B0 (NtNotifyChangeDirectoryFileEx.c)
 *     BuildQueryDirectoryIrp @ 0x1407563A0 (BuildQueryDirectoryIrp.c)
 *     NtQueryQuotaInformationFile @ 0x140939960 (NtQueryQuotaInformationFile.c)
 * Callees:
 *     MiProbeAndLockPages @ 0x14029C5B0 (MiProbeAndLockPages.c)
 *     MmUpdateMdlTracker @ 0x140584F10 (MmUpdateMdlTracker.c)
 */

__int64 __fastcall IopProbeAndLockPages_2(_DWORD *a1, char a2, __int64 a3, __int64 a4, unsigned int a5)
{
  bool v7; // zf
  char v8; // dl
  __int64 result; // rax

  v7 = a2 == 0;
  v8 = 1;
  if ( v7 )
    v8 = a2;
  MiProbeAndLockPages(a1, v8, 1);
  result = (unsigned int)MmTrackLockedPages;
  if ( (MmTrackLockedPages & 1) != 0 )
    return MmUpdateMdlTracker(a1, *(_QWORD *)(*(_QWORD *)(a4 + 8) + 8LL * a5 + 112), a4);
  return result;
}
