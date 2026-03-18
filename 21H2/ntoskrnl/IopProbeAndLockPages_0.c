/*
 * XREFs of IopProbeAndLockPages_0 @ 0x14029C568
 * Callers:
 *     IopBuildAsynchronousFsdRequest @ 0x14029BAD0 (IopBuildAsynchronousFsdRequest.c)
 *     IopBuildDeviceIoControlRequest @ 0x1403428E0 (IopBuildDeviceIoControlRequest.c)
 * Callees:
 *     MiProbeAndLockPages @ 0x14029C5B0 (MiProbeAndLockPages.c)
 *     MmUpdateMdlTracker @ 0x140584F10 (MmUpdateMdlTracker.c)
 */

__int64 __fastcall IopProbeAndLockPages_0(__int64 a1, __int64 a2, unsigned int a3, __int64 a4, unsigned int a5)
{
  bool v7; // zf
  __int64 v8; // r8
  __int64 result; // rax

  v7 = a3 == 0;
  v8 = 1LL;
  if ( v7 )
    v8 = a3;
  MiProbeAndLockPages(a1, 0LL, v8);
  result = (unsigned int)MmTrackLockedPages;
  if ( (MmTrackLockedPages & 1) != 0 )
    return MmUpdateMdlTracker(a1, *(_QWORD *)(*(_QWORD *)(a4 + 8) + 8LL * a5 + 112), a4);
  return result;
}
