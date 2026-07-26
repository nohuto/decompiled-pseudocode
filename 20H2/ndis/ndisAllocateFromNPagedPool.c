/*
 * XREFs of ndisAllocateFromNPagedPool @ 0x1C00180F0
 * Callers:
 *     ?ndisPplAllocate@@YAPEAXPEAUPPL_POOL_HANDLE__@@KPEAK@Z @ 0x1C0017F44 (-ndisPplAllocate@@YAPEAXPEAUPPL_POOL_HANDLE__@@KPEAK@Z.c)
 * Callees:
 *     <none>
 */

_QWORD *__fastcall ndisAllocateFromNPagedPool(
        POOL_TYPE PoolType,
        SIZE_T NumberOfBytes,
        ULONG Tag,
        PLOOKASIDE_LIST_EX Lookaside)
{
  _QWORD *PoolWithTagPriority; // rax

  if ( NumberOfBytes + 32 < NumberOfBytes )
    return 0LL;
  PoolWithTagPriority = ExAllocatePoolWithTagPriority(NonPagedPoolNx, NumberOfBytes + 32, Tag, NormalPoolPriority);
  if ( !PoolWithTagPriority )
    return 0LL;
  *PoolWithTagPriority = 0LL;
  return PoolWithTagPriority + 4;
}
