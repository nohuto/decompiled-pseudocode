/*
 * XREFs of PfpPowerActionDpcRoutine @ 0x14038CE10
 * Callers:
 *     <none>
 * Callees:
 *     KxAcquireSpinLock @ 0x14021E680 (KxAcquireSpinLock.c)
 *     KxReleaseSpinLock @ 0x14021E780 (KxReleaseSpinLock.c)
 *     ExQueueWorkItem @ 0x1402D49A0 (ExQueueWorkItem.c)
 *     ExFreePoolWithTag @ 0x1409B70B0 (ExFreePoolWithTag.c)
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
  KxAcquireSpinLock(&qword_140C501C8);
  v6 = *((_DWORD *)v5 + 41);
  if ( v4 )
  {
    if ( qword_140C501B8 && dword_140C501D0 == v6 )
    {
      *((_QWORD *)v5 + 16) = 0LL;
      *((_QWORD *)v5 + 18) = PfpServiceMainThreadUnboost;
      *((_QWORD *)v5 + 19) = v5;
      ExQueueWorkItem((PWORK_QUEUE_ITEM)v5 + 4, DelayedWorkQueue);
      v5 = 0LL;
    }
  }
  else if ( dword_140C501D4 == v6 )
  {
    _InterlockedAnd(&dword_140CEC054, 0xFFFFFFFE);
  }
  KxReleaseSpinLock(&qword_140C501C8);
  if ( v5 )
    ExFreePoolWithTag(v5, 0);
}
