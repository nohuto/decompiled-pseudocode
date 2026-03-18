/*
 * XREFs of PopDispatchAcDcCallback @ 0x1408F3C20
 * Callers:
 *     <none>
 * Callees:
 *     ExNotifyCallback @ 0x14030FBB0 (ExNotifyCallback.c)
 */

struct _KTHREAD *PopDispatchAcDcCallback()
{
  struct _KTHREAD *result; // rax

  ExNotifyCallback(ExCbPowerState, (PVOID)1, (PVOID)(dword_140C23D4C == 0));
  result = KeGetCurrentThread();
  if ( result->WaitBlock[3].SpareLong )
    __fastfail(0x20u);
  return result;
}
