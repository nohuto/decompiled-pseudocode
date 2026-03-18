/*
 * XREFs of MiClearCommitReleaseState @ 0x14057FE58
 * Callers:
 *     MmCleanProcessAddressSpace @ 0x1406F89A4 (MmCleanProcessAddressSpace.c)
 * Callees:
 *     MiGetSharedVm @ 0x140282AD0 (MiGetSharedVm.c)
 *     MiUnlockWorkingSetExclusive @ 0x14030FA80 (MiUnlockWorkingSetExclusive.c)
 *     ExAcquireSpinLockExclusive @ 0x14034FBE0 (ExAcquireSpinLockExclusive.c)
 */

void __fastcall MiClearCommitReleaseState(__int64 a1)
{
  volatile LONG *SharedVm; // rbx
  KIRQL v3; // al

  SharedVm = (volatile LONG *)MiGetSharedVm(a1);
  v3 = ExAcquireSpinLockExclusive(SharedVm);
  *((_DWORD *)SharedVm + 1) = 0;
  *(_BYTE *)(a1 + 187) &= 0x9Fu;
  MiUnlockWorkingSetExclusive(a1, v3);
}
