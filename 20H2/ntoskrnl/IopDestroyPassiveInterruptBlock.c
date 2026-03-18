/*
 * XREFs of IopDestroyPassiveInterruptBlock @ 0x1408A40D0
 * Callers:
 *     IoDisconnectInterrupt @ 0x14075D220 (IoDisconnectInterrupt.c)
 *     IopConnectInterrupt @ 0x14075D9DC (IopConnectInterrupt.c)
 * Callees:
 *     IopDereferencePassiveInterruptBlock @ 0x14050B700 (IopDereferencePassiveInterruptBlock.c)
 *     IopFindPassiveInterruptBlock @ 0x14050B878 (IopFindPassiveInterruptBlock.c)
 */

void __fastcall IopDestroyPassiveInterruptBlock(unsigned int a1)
{
  volatile signed __int32 *PassiveInterruptBlock; // rax

  PassiveInterruptBlock = (volatile signed __int32 *)IopFindPassiveInterruptBlock(a1);
  if ( PassiveInterruptBlock )
  {
    _InterlockedDecrement(PassiveInterruptBlock + 48);
    IopDereferencePassiveInterruptBlock((PVOID)PassiveInterruptBlock);
  }
}
