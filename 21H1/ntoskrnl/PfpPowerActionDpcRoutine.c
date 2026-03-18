/*
 * XREFs of PfpPowerActionDpcRoutine @ 0x140389AA0
 * Callers:
 *     <none>
 * Callees:
 *     ExQueueWorkItem @ 0x140226F40 (ExQueueWorkItem.c)
 *     KxAcquireSpinLock @ 0x1402773A0 (KxAcquireSpinLock.c)
 *     KxReleaseSpinLock @ 0x140277410 (KxReleaseSpinLock.c)
 *     ExFreePoolWithTag @ 0x1409B1010 (ExFreePoolWithTag.c)
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
  KxAcquireSpinLock(&qword_140C50288);
  v6 = *((_DWORD *)v5 + 41);
  if ( v4 )
  {
    if ( qword_140C50278 && dword_140C50290 == v6 )
    {
      *((_QWORD *)v5 + 16) = 0LL;
      *((_QWORD *)v5 + 18) = PfpServiceMainThreadUnboost;
      *((_QWORD *)v5 + 19) = v5;
      ExQueueWorkItem((PWORK_QUEUE_ITEM)v5 + 4, DelayedWorkQueue);
      v5 = 0LL;
    }
  }
  else if ( dword_140C50294 == v6 )
  {
    _InterlockedAnd(&dword_140CEC0D4, 0xFFFFFFFE);
  }
  KxReleaseSpinLock(&qword_140C50288);
  if ( v5 )
    ExFreePoolWithTag(v5, 0);
}
