/*
 * XREFs of HvlpStartPageListIteration @ 0x1404F9CAC
 * Callers:
 *     HvlpMarkHypervisorPagesForHibernation @ 0x1404F69FC (HvlpMarkHypervisorPagesForHibernation.c)
 *     HvlAddPagesCallbackRoutine @ 0x1404F6C40 (HvlAddPagesCallbackRoutine.c)
 *     HvlpGetEncryptedDataFromHypervisor @ 0x1404F74F8 (HvlpGetEncryptedDataFromHypervisor.c)
 * Callees:
 *     HvlpInvokeGetPageListHypercall @ 0x1404F9B90 (HvlpInvokeGetPageListHypercall.c)
 *     HvlpSetupPageListIteration @ 0x1404F9C2C (HvlpSetupPageListIteration.c)
 */

char __fastcall HvlpStartPageListIteration(int a1)
{
  int *v1; // rax

  v1 = HvlpSetupPageListIteration(a1, 0);
  if ( v1 )
    LOBYTE(v1) = HvlpInvokeGetPageListHypercall((__int64)v1, 0LL);
  return (char)v1;
}
