/*
 * XREFs of KiSynchronizeAddressPolicyTarget @ 0x140319E70
 * Callers:
 *     KeSynchronizeAddressPolicy @ 0x1402C13BC (KeSynchronizeAddressPolicy.c)
 * Callees:
 *     KiSetAddressPolicy @ 0x14025ECC0 (KiSetAddressPolicy.c)
 */

int KiSynchronizeAddressPolicyTarget()
{
  struct _KTHREAD *CurrentThread; // rax

  CurrentThread = KeGetCurrentThread();
  if ( CurrentThread->ApcState.Process->AddressPolicy == 1 )
  {
    LODWORD(CurrentThread) = KeGetPcr()->Prcb.ShadowFlags;
    if ( ((unsigned __int8)CurrentThread & 2) == 0 )
      LODWORD(CurrentThread) = KiSetAddressPolicy();
  }
  return (int)CurrentThread;
}
