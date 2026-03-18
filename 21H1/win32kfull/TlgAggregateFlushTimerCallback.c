/*
 * XREFs of TlgAggregateFlushTimerCallback @ 0x27B27B
 * Callers:
 *     ?TlgAggregateInternalFlushWorkItemRoutineKernelMode@@YGXPAX@Z @ 0x27B2C2 (-TlgAggregateInternalFlushWorkItemRoutineKernelMode@@YGXPAX@Z.c)
 * Callees:
 *     EnableFlushTimer @ 0x1B6884 (EnableFlushTimer.c)
 *     LookUpTableFlushComplete @ 0x27A994 (LookUpTableFlushComplete.c)
 *     LookUpTableFlushPartial @ 0x27B226 (LookUpTableFlushPartial.c)
 */

void __thiscall TlgAggregateFlushTimerCallback(int this)
{
  if ( *(_BYTE *)(this + 216) )
  {
    *(_BYTE *)(this + 216) = 0;
    LookUpTableFlushComplete((_DWORD *)this);
  }
  else
  {
    LookUpTableFlushPartial((_DWORD *)this);
  }
  if ( *(_DWORD *)(this + 128) )
    EnableFlushTimer(*(_DWORD *)(this + 208), *(_DWORD *)(this + 212));
}
