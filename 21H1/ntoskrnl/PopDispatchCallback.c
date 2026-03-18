/*
 * XREFs of PopDispatchCallback @ 0x1407BB390
 * Callers:
 *     <none>
 * Callees:
 *     ExNotifyCallback @ 0x1403005D0 (ExNotifyCallback.c)
 */

struct _KTHREAD *__fastcall PopDispatchCallback(PVOID Argument1)
{
  struct _KTHREAD *result; // rax

  ExNotifyCallback(ExCbPowerState, (PVOID)(unsigned int)Argument1, 0LL);
  result = KeGetCurrentThread();
  if ( result->WaitBlock[3].SpareLong )
    __fastfail(0x20u);
  return result;
}
