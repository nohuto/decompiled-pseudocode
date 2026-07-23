/*
 * XREFs of MiBuildPagedPool @ 0x140A4F614
 * Callers:
 *     MiInitNucleus @ 0x140A43F34 (MiInitNucleus.c)
 * Callees:
 *     MiSystemVaToDynamicBitmap @ 0x14023222C (MiSystemVaToDynamicBitmap.c)
 *     MiGetAnyMultiplexedVm @ 0x140307E4C (MiGetAnyMultiplexedVm.c)
 *     MiBuildDynamicRegion @ 0x1403B60F4 (MiBuildDynamicRegion.c)
 *     MiInitializeSystemWorkingSetList @ 0x14078697C (MiInitializeSystemWorkingSetList.c)
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
  qword_140C4EF78 = 0x100000000LL;
  MmSizeOfPagedPoolInBytes = 0x100000000000LL;
  AnyMultiplexedVm = MiGetAnyMultiplexedVm(2);
  if ( !(unsigned int)MiInitializeSystemWorkingSetList(&MiSystemPartition, (__int64)AnyMultiplexedVm, 3, 0x100000000LL) )
    return 0LL;
  qword_140C4EF58 = 0LL;
  qword_140C4EF60 = qword_140C4EF78;
  result = 1LL;
  qword_140C4C928 = 7680LL;
  qword_140C4C930 = 15360LL;
  return result;
}
