/*
 * XREFs of ExInitializeProcessor @ 0x1403C03EC
 * Callers:
 *     KiStartDynamicProcessor @ 0x14096029C (KiStartDynamicProcessor.c)
 *     ExpInitSystemPhase1 @ 0x140AFCEF0 (ExpInitSystemPhase1.c)
 * Callees:
 *     ExpHotAddProcessorToWorkers @ 0x14063F5BC (ExpHotAddProcessorToWorkers.c)
 *     ExInitializeSystemLookasideList @ 0x140A57C10 (ExInitializeSystemLookasideList.c)
 *     ExAllocatePoolWithTag @ 0x140A6E910 (ExAllocatePoolWithTag.c)
 */

__int64 __fastcall ExInitializeProcessor(__int64 a1, char a2)
{
  PVOID PoolWithTag; // rdi

  PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, 0x80uLL, 0x43497845u);
  if ( PoolWithTag )
  {
    ExInitializeSystemLookasideList((_DWORD)PoolWithTag, 512, 1264, 1128888389, 32, (__int64)&ExSystemLookasideListHead);
    *(_QWORD *)(a1 + 2176) = PoolWithTag;
  }
  if ( a2 )
  {
    ExpHotAddProcessorToWorkers(a1);
    *(_QWORD *)(a1 + 34480) = *(_QWORD *)(ExSaPageArrays + 8LL * *(unsigned int *)(a1 + 36));
  }
  return 0LL;
}
