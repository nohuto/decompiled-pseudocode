/*
 * XREFs of HvlpStartPageListIteration @ 0x1404F5DCC
 * Callers:
 *     HvlpMarkHypervisorPagesForHibernation @ 0x1404F2B3C (HvlpMarkHypervisorPagesForHibernation.c)
 *     HvlAddPagesCallbackRoutine @ 0x1404F2D80 (HvlAddPagesCallbackRoutine.c)
 *     HvlpGetEncryptedDataFromHypervisor @ 0x1404F3638 (HvlpGetEncryptedDataFromHypervisor.c)
 * Callees:
 *     HvlpInvokeGetPageListHypercall @ 0x1404F5CB0 (HvlpInvokeGetPageListHypercall.c)
 *     HvlpSetupPageListIteration @ 0x1404F5D4C (HvlpSetupPageListIteration.c)
 */

char __fastcall HvlpStartPageListIteration(int a1)
{
  int *v1; // rax

  v1 = HvlpSetupPageListIteration(a1, 0);
  if ( v1 )
    LOBYTE(v1) = HvlpInvokeGetPageListHypercall((__int64)v1, 0LL);
  return (char)v1;
}
