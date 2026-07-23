/*
 * XREFs of ExInitializeProcessor @ 0x1403ADC8C
 * Callers:
 *     KiStartDynamicProcessor @ 0x1408BA7D8 (KiStartDynamicProcessor.c)
 *     ExpInitSystemPhase1 @ 0x140A3DEBC (ExpInitSystemPhase1.c)
 * Callees:
 *     ExQueueWorkItem @ 0x1402E2FA0 (ExQueueWorkItem.c)
 *     ExInitializeSystemLookasideList @ 0x14099D6E4 (ExInitializeSystemLookasideList.c)
 *     ExAllocatePoolWithTag @ 0x1409B5160 (ExAllocatePoolWithTag.c)
 */

__int64 __fastcall ExInitializeProcessor(__int64 a1, char a2)
{
  signed __int64 v4; // rbx
  PVOID PoolWithTag; // rsi
  __int64 v7; // rcx

  v4 = 0LL;
  PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, 0x80uLL, 0x43497845u);
  if ( PoolWithTag )
  {
    ExInitializeSystemLookasideList((_DWORD)PoolWithTag, 512, 1264, 1128888389, 32, (__int64)&ExSystemLookasideListHead);
    *(_QWORD *)(a1 + 2176) = PoolWithTag;
  }
  if ( a2 )
  {
    v7 = *(unsigned __int16 *)(*(_QWORD *)(a1 + 192) + 146LL);
    if ( (_UNKNOWN *)KeNodeBlock[v7] != (_UNKNOWN *)((char *)&KiNodeInit + 384 * v7) )
      v4 = *(_QWORD *)(a1 + 192);
    if ( !_InterlockedCompareExchange64((volatile signed __int64 *)(v4 + 408), v4, 0LL) )
      ExQueueWorkItem((PWORK_QUEUE_ITEM)(v4 + 384), DelayedWorkQueue);
    *(_QWORD *)(a1 + 33584) = *(_QWORD *)(ExSaPageArrays + 8LL * *(unsigned int *)(a1 + 36));
  }
  return 0LL;
}
