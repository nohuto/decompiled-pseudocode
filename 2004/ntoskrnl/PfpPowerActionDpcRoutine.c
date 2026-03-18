/*
 * XREFs of PfpPowerActionDpcRoutine @ 0x14038AB10
 * Callers:
 *     <none>
 * Callees:
 *     KxAcquireSpinLock @ 0x14021E350 (KxAcquireSpinLock.c)
 *     KxReleaseSpinLock @ 0x14021E3C0 (KxReleaseSpinLock.c)
 *     ExQueueWorkItem @ 0x1402B9BC0 (ExQueueWorkItem.c)
 *     ExFreePoolWithTag @ 0x1409B1140 (ExFreePoolWithTag.c)
 */

void __fastcall PfpPowerActionDpcRoutine(
        struct _KDPC *Dpc,
        _DWORD *DeferredContext,
        PVOID SystemArgument1,
        PVOID SystemArgument2)
{
  int v4; // ebx
  PVOID v5; // rdi
  int v6; // eax

  v4 = DeferredContext[40];
  v5 = DeferredContext;
  KxAcquireSpinLock(&qword_140C50148);
  v6 = *((_DWORD *)v5 + 41);
  if ( v4 )
  {
    if ( qword_140C50138 && dword_140C50150 == v6 )
    {
      *((_QWORD *)v5 + 16) = 0LL;
      *((_QWORD *)v5 + 18) = PfpServiceMainThreadUnboost;
      *((_QWORD *)v5 + 19) = v5;
      ExQueueWorkItem((PWORK_QUEUE_ITEM)v5 + 4, DelayedWorkQueue);
      v5 = 0LL;
    }
  }
  else if ( dword_140C50154 == v6 )
  {
    _InterlockedAnd(&dword_140CEBF94, 0xFFFFFFFE);
  }
  KxReleaseSpinLock(&qword_140C50148);
  if ( v5 )
    ExFreePoolWithTag(v5, 0);
}
