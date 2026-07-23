/*
 * XREFs of IopProbeAndLockPages @ 0x140240264
 * Callers:
 *     IopAllocateAndPopulateWriteIrp @ 0x1403F1D8C (IopAllocateAndPopulateWriteIrp.c)
 * Callees:
 *     MiProbeAndLockPages @ 0x1402AF160 (MiProbeAndLockPages.c)
 *     MmUpdateMdlTracker @ 0x1405314B0 (MmUpdateMdlTracker.c)
 */

__int64 __fastcall IopProbeAndLockPages(__int64 a1, unsigned __int8 a2, __int64 a3, __int64 a4, unsigned int a5)
{
  unsigned int v5; // r8d
  bool v7; // zf
  __int64 v8; // rdx
  __int64 result; // rax

  v5 = a2;
  v7 = a2 == 0;
  v8 = 1LL;
  if ( v7 )
    v8 = v5;
  MiProbeAndLockPages(a1, v8, 0LL);
  result = (unsigned int)MmTrackLockedPages;
  if ( (MmTrackLockedPages & 1) != 0 )
    return MmUpdateMdlTracker(a1, *(_QWORD *)(*(_QWORD *)(a4 + 8) + 8LL * a5 + 112), a4);
  return result;
}
