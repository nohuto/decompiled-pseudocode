/*
 * XREFs of MiCreateForkWsles @ 0x1405542BC
 * Callers:
 *     MiCloneProcessAddressSpace @ 0x1408D4710 (MiCloneProcessAddressSpace.c)
 * Callees:
 *     MiGetSharedVm @ 0x14021A770 (MiGetSharedVm.c)
 *     ExAcquireSpinLockExclusive @ 0x14023C6E0 (ExAcquireSpinLockExclusive.c)
 *     MiUnlockWorkingSetExclusive @ 0x14026C350 (MiUnlockWorkingSetExclusive.c)
 *     MiCreateForkWsle @ 0x14055412C (MiCreateForkWsle.c)
 */

void MiCreateForkWsles()
{
  unsigned __int64 *v0; // rbp
  unsigned __int64 v1; // r14
  __int64 v2; // rcx
  unsigned __int64 v3; // rsi
  LONG *SharedVm; // rbx
  KIRQL v5; // al
  unsigned __int8 v6; // di

  v0 = &KeGetCurrentThread()->ApcState.Process[1].ActiveProcessorsPadding[6];
  v1 = 0xFFFFF68000000000uLL;
  v2 = 3LL;
  v3 = 0xFFFFF6BFFFFFFFF8uLL;
  do
  {
    v1 = ((v1 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
    v3 = ((v3 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
    --v2;
  }
  while ( v2 );
  SharedVm = MiGetSharedVm((__int64)v0);
  v5 = ExAcquireSpinLockExclusive(SharedVm);
  SharedVm[1] = 0;
  v6 = v5;
  MiCreateForkWsle((__int64)v0, v5, v1, v3, 3);
  MiUnlockWorkingSetExclusive((__int64)v0, v6);
}
