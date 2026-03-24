/*
 * XREFs of IopProbeAndLockPages_1 @ 0x1402E7A50
 * Callers:
 *     IopBuildDeviceIoControlRequest @ 0x14022B990 (IopBuildDeviceIoControlRequest.c)
 *     IopBuildAsynchronousFsdRequest @ 0x1402E7890 (IopBuildAsynchronousFsdRequest.c)
 * Callees:
 *     MiProbeAndLockPages @ 0x14020A860 (MiProbeAndLockPages.c)
 *     MmUpdateMdlTracker @ 0x140531270 (MmUpdateMdlTracker.c)
 */

__int64 __fastcall IopProbeAndLockPages_1(__int64 a1, __int64 a2, unsigned int a3, __int64 a4, unsigned int a5)
{
  bool v7; // zf
  unsigned int v8; // r8d
  __int64 result; // rax

  v7 = a3 == 0;
  v8 = 1;
  if ( v7 )
    v8 = a3;
  MiProbeAndLockPages(a1, 0, v8);
  result = (unsigned int)MmTrackLockedPages;
  if ( (MmTrackLockedPages & 1) != 0 )
    return MmUpdateMdlTracker(a1, *(_QWORD *)(*(_QWORD *)(a4 + 8) + 8LL * a5 + 112), a4);
  return result;
}
