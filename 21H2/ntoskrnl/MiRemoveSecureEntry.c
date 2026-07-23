/*
 * XREFs of MiRemoveSecureEntry @ 0x14027CB50
 * Callers:
 *     MmUnsecureVirtualMemory @ 0x1406893D0 (MmUnsecureVirtualMemory.c)
 *     MiUnmapLockedPagesInUserSpace @ 0x14076DE5C (MiUnmapLockedPagesInUserSpace.c)
 * Callees:
 *     MiSetVadFlags @ 0x14027CE30 (MiSetVadFlags.c)
 *     MiGetSharedVm @ 0x1402BF850 (MiGetSharedVm.c)
 *     MiUnlockWorkingSetExclusive @ 0x1402C13E0 (MiUnlockWorkingSetExclusive.c)
 *     ExAcquireSpinLockExclusive @ 0x1402C1960 (ExAcquireSpinLockExclusive.c)
 *     KeBugCheckEx @ 0x1403FE0D0 (KeBugCheckEx.c)
 *     MiUnsecureVirtualMemoryAgainstWrites @ 0x140689564 (MiUnsecureVirtualMemoryAgainstWrites.c)
 *     ExFreePoolWithTag @ 0x1409B5010 (ExFreePoolWithTag.c)
 */

void __fastcall MiRemoveSecureEntry(ULONG_PTR BugCheckParameter2, __int64 *BugCheckParameter3)
{
  __int64 **v2; // r14
  unsigned int v5; // ebx
  int v6; // ebp
  _KPROCESS *Process; // r15
  __int64 SharedVm; // rdi
  KIRQL v9; // al
  __int64 *i; // rdx

  v2 = (__int64 **)(BugCheckParameter2 + 56);
  v5 = 0;
  v6 = 0;
  Process = KeGetCurrentThread()->ApcState.Process;
  SharedVm = MiGetSharedVm(&Process[1].ActiveProcessorsPadding[6], BugCheckParameter3);
  v9 = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)SharedVm);
  *(_DWORD *)(SharedVm + 4) = 0;
  for ( i = *v2; i; i = (__int64 *)*i )
  {
    if ( *((_DWORD *)i + 16) == 2 && v5 <= 1 )
      ++v5;
    if ( i == BugCheckParameter3 )
    {
      v6 = 1;
      *v2 = (__int64 *)*i;
    }
    if ( v5 > 1 && v6 == 1 )
      break;
    v2 = (__int64 **)i;
  }
  MiUnlockWorkingSetExclusive(&Process[1].ActiveProcessorsPadding[6], v9);
  if ( !v6 )
    KeBugCheckEx(0x1Au, 0x15001uLL, BugCheckParameter2, (ULONG_PTR)BugCheckParameter3, 0LL);
  if ( (BugCheckParameter3[1] & 0x10) != 0 )
    MiUnsecureVirtualMemoryAgainstWrites(BugCheckParameter2, BugCheckParameter3[1], BugCheckParameter3[2]);
  if ( v5 == 1 )
    MiSetVadFlags(BugCheckParameter2, 1LL, 0LL);
  ExFreePoolWithTag(BugCheckParameter3, 0);
}
