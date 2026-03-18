/*
 * XREFs of PoGetProcessorIdleAccounting @ 0x1405C6DA0
 * Callers:
 *     EmonOverflowHandler @ 0x140520920 (EmonOverflowHandler.c)
 *     Amd64OverflowHandler @ 0x14052C290 (Amd64OverflowHandler.c)
 * Callees:
 *     <none>
 */

struct _KPRCB *__fastcall PoGetProcessorIdleAccounting(_QWORD *a1)
{
  struct _KPRCB *result; // rax
  _PROC_IDLE_ACCOUNTING *IdleAccounting; // rdx

  result = KeGetCurrentPrcb();
  IdleAccounting = result->PowerState.IdleAccounting;
  if ( a1 )
  {
    if ( IdleAccounting )
    {
      result = (struct _KPRCB *)IdleAccounting->TotalTransitions;
      *a1 = result;
    }
    else
    {
      *a1 = 0LL;
    }
  }
  return result;
}
