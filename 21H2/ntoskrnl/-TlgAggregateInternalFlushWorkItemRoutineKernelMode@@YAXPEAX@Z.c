/*
 * XREFs of ?TlgAggregateInternalFlushWorkItemRoutineKernelMode@@YAXPEAX@Z @ 0x1407FA9D0
 * Callers:
 *     <none>
 * Callees:
 *     KeSetEvent @ 0x1402AFD30 (KeSetEvent.c)
 *     EnableFlushTimer @ 0x1403A72E4 (EnableFlushTimer.c)
 *     LookUpTableFlushPartial @ 0x1407FAA3C (LookUpTableFlushPartial.c)
 *     LookUpTableFlushComplete @ 0x14085D380 (LookUpTableFlushComplete.c)
 */

void __fastcall TlgAggregateInternalFlushWorkItemRoutineKernelMode(void *a1)
{
  if ( *((_BYTE *)a1 + 372) )
  {
    *((_BYTE *)a1 + 372) = 0;
    LookUpTableFlushComplete(a1);
  }
  else
  {
    LookUpTableFlushPartial();
  }
  if ( *((_DWORD *)a1 + 64) )
    EnableFlushTimer(*((_QWORD *)a1 + 45), *((_DWORD *)a1 + 92));
  if ( _InterlockedCompareExchange16((volatile signed __int16 *)(*((_QWORD *)a1 + 33) + 56LL), 0, 1) == 2 )
    KeSetEvent((PRKEVENT)(*((_QWORD *)a1 + 33) + 32LL), 0, 0);
}
