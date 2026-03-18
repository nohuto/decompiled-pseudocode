/*
 * XREFs of MiBuildPagedPool @ 0x140A4D074
 * Callers:
 *     MiInitNucleus @ 0x140A43414 (MiInitNucleus.c)
 * Callees:
 *     MiGetAnyMultiplexedVm @ 0x14024EF1C (MiGetAnyMultiplexedVm.c)
 *     MiSystemVaToDynamicBitmap @ 0x140250EA8 (MiSystemVaToDynamicBitmap.c)
 *     MiBuildDynamicRegion @ 0x1403B4904 (MiBuildDynamicRegion.c)
 *     MiInitializeSystemWorkingSetList @ 0x1407829DC (MiInitializeSystemWorkingSetList.c)
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
  qword_140C4EDB8 = 0x100000000LL;
  MmSizeOfPagedPoolInBytes = 0x100000000000LL;
  AnyMultiplexedVm = MiGetAnyMultiplexedVm(2);
  if ( !(unsigned int)MiInitializeSystemWorkingSetList(&MiSystemPartition, (__int64)AnyMultiplexedVm, 3, 0x100000000LL) )
    return 0LL;
  qword_140C4ED98 = 0LL;
  qword_140C4EDA0 = qword_140C4EDB8;
  result = 1LL;
  qword_140C4C768 = 7680LL;
  qword_140C4C770 = 15360LL;
  return result;
}
