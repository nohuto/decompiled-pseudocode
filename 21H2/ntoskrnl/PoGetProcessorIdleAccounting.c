/*
 * XREFs of PoGetProcessorIdleAccounting @ 0x140565720
 * Callers:
 *     EmonOverflowHandler @ 0x1404D3AE0 (EmonOverflowHandler.c)
 *     Amd64OverflowHandler @ 0x1404DDCF0 (Amd64OverflowHandler.c)
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
