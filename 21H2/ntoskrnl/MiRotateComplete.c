/*
 * XREFs of MiRotateComplete @ 0x140218ACC
 * Callers:
 *     MmRotatePhysicalView @ 0x1405E48E0 (MmRotatePhysicalView.c)
 * Callees:
 *     MiGetSharedVm @ 0x1402BF850 (MiGetSharedVm.c)
 *     MiUnlockWorkingSetExclusive @ 0x1402C13E0 (MiUnlockWorkingSetExclusive.c)
 *     ExAcquireSpinLockExclusive @ 0x1402C1960 (ExAcquireSpinLockExclusive.c)
 */

__int64 __fastcall MiRotateComplete(unsigned __int64 *a1)
{
  _KPROCESS *Process; // rdx
  unsigned __int64 *v3; // rbp
  unsigned __int64 *v4; // rdi
  __int64 SharedVm; // rbx
  KIRQL v6; // al
  __int64 v7; // rdx
  unsigned __int64 *i; // rax

  Process = KeGetCurrentThread()->ApcState.Process;
  v3 = &Process[1].ActiveProcessorsPadding[6];
  v4 = &Process[1].Affinity.Bitmap[9];
  SharedVm = MiGetSharedVm(&Process[1].ActiveProcessorsPadding[6], Process);
  v6 = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)SharedVm);
  *(_DWORD *)(SharedVm + 4) = 0;
  LOBYTE(v7) = v6;
  for ( i = (unsigned __int64 *)*v4; i != a1; i = (unsigned __int64 *)*i )
    v4 = i;
  *v4 = *i;
  return MiUnlockWorkingSetExclusive(v3, v7);
}
