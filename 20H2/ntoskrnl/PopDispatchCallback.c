/*
 * XREFs of PopDispatchCallback @ 0x1407CCD90
 * Callers:
 *     <none>
 * Callees:
 *     ExNotifyCallback @ 0x14030FBB0 (ExNotifyCallback.c)
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
