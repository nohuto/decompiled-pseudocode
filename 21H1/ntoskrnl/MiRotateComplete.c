/*
 * XREFs of MiRotateComplete @ 0x1402FAECC
 * Callers:
 *     MmRotatePhysicalView @ 0x1406BD3F0 (MmRotatePhysicalView.c)
 * Callees:
 *     MiGetSharedVm @ 0x14021A770 (MiGetSharedVm.c)
 *     ExAcquireSpinLockExclusive @ 0x14023C6E0 (ExAcquireSpinLockExclusive.c)
 *     MiUnlockWorkingSetExclusive @ 0x14026C350 (MiUnlockWorkingSetExclusive.c)
 */

void __fastcall MiRotateComplete(unsigned __int64 *a1)
{
  _KPROCESS *Process; // rdx
  __int64 v3; // rbp
  unsigned __int64 *v4; // rdi
  LONG *SharedVm; // rbx
  KIRQL v6; // al
  unsigned __int8 v7; // dl
  unsigned __int64 *i; // rax

  Process = KeGetCurrentThread()->ApcState.Process;
  v3 = (__int64)&Process[1].ActiveProcessorsPadding[6];
  v4 = &Process[1].Affinity.Bitmap[9];
  SharedVm = MiGetSharedVm((__int64)&Process[1].ActiveProcessorsPadding[6]);
  v6 = ExAcquireSpinLockExclusive(SharedVm);
  SharedVm[1] = 0;
  v7 = v6;
  for ( i = (unsigned __int64 *)*v4; i != a1; i = (unsigned __int64 *)*i )
    v4 = i;
  *v4 = *i;
  MiUnlockWorkingSetExclusive(v3, v7);
}
