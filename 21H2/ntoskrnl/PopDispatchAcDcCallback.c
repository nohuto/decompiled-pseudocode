/*
 * XREFs of PopDispatchAcDcCallback @ 0x140997E90
 * Callers:
 *     <none>
 * Callees:
 *     ExNotifyCallback @ 0x140232770 (ExNotifyCallback.c)
 */

struct _KTHREAD *PopDispatchAcDcCallback()
{
  struct _KTHREAD *result; // rax

  ExNotifyCallback(ExCbPowerState, (PVOID)1, (PVOID)(dword_140C232CC == 0));
  result = KeGetCurrentThread();
  if ( result->WaitBlock[3].SpareLong )
    __fastfail(0x20u);
  return result;
}
