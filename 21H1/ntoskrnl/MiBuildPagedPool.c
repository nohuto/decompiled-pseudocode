/*
 * XREFs of MiBuildPagedPool @ 0x140A4157C
 * Callers:
 *     MiInitNucleus @ 0x140A43F3C (MiInitNucleus.c)
 * Callees:
 *     MiGetAnyMultiplexedVm @ 0x1402A9158 (MiGetAnyMultiplexedVm.c)
 *     MiSystemVaToDynamicBitmap @ 0x140301D30 (MiSystemVaToDynamicBitmap.c)
 *     MiBuildDynamicRegion @ 0x1403AC314 (MiBuildDynamicRegion.c)
 *     MiInitializeSystemWorkingSetList @ 0x140771FCC (MiInitializeSystemWorkingSetList.c)
 */

__int64 MiBuildPagedPool()
{
  __int64 *v0; // rax
  __int64 v1; // rdx
  char *AnyMultiplexedVm; // rax
  __int64 result; // rax

  v0 = MiSystemVaToDynamicBitmap(6);
  if ( !(unsigned int)MiBuildDynamicRegion(v0, v1, 0x100000000000uLL) )
    return 0LL;
  qword_140C4EE78 = 0x100000000LL;
  MmSizeOfPagedPoolInBytes = 0x100000000000LL;
  AnyMultiplexedVm = MiGetAnyMultiplexedVm(2);
  if ( !(unsigned int)MiInitializeSystemWorkingSetList(&MiSystemPartition, (__int64)AnyMultiplexedVm, 3, 0x100000000LL) )
    return 0LL;
  qword_140C4EE58 = 0LL;
  qword_140C4EE60 = qword_140C4EE78;
  result = 1LL;
  qword_140C4C828 = 7680LL;
  qword_140C4C830 = 15360LL;
  return result;
}
