/*
 * XREFs of MiRemoveSecureEntry @ 0x1402A4930
 * Callers:
 *     MmUnsecureVirtualMemory @ 0x140635790 (MmUnsecureVirtualMemory.c)
 *     MiUnmapLockedPagesInUserSpace @ 0x1407594EC (MiUnmapLockedPagesInUserSpace.c)
 * Callees:
 *     MiGetSharedVm @ 0x14021A770 (MiGetSharedVm.c)
 *     ExAcquireSpinLockExclusive @ 0x14023C6E0 (ExAcquireSpinLockExclusive.c)
 *     MiUnlockWorkingSetExclusive @ 0x14026C350 (MiUnlockWorkingSetExclusive.c)
 *     MiSetVadFlags @ 0x1402A1110 (MiSetVadFlags.c)
 *     KeBugCheckEx @ 0x1403F5E40 (KeBugCheckEx.c)
 *     MiUnsecureVirtualMemoryAgainstWrites @ 0x1406C9AAC (MiUnsecureVirtualMemoryAgainstWrites.c)
 *     ExFreePoolWithTag @ 0x1409B1010 (ExFreePoolWithTag.c)
 */

void __fastcall MiRemoveSecureEntry(ULONG_PTR BugCheckParameter2, __int64 *BugCheckParameter3)
{
  __int64 **v2; // r14
  unsigned int v5; // ebx
  int v6; // ebp
  _KPROCESS *Process; // r15
  LONG *SharedVm; // rdi
  KIRQL v9; // al
  __int64 *i; // rdx
  _DWORD *v11; // r9

  v2 = (__int64 **)(BugCheckParameter2 + 56);
  v5 = 0;
  v6 = 0;
  Process = KeGetCurrentThread()->ApcState.Process;
  SharedVm = MiGetSharedVm((__int64)&Process[1].ActiveProcessorsPadding[6]);
  v9 = ExAcquireSpinLockExclusive(SharedVm);
  SharedVm[1] = 0;
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
  MiUnlockWorkingSetExclusive((__int64)&Process[1].ActiveProcessorsPadding[6], v9);
  if ( !v6 )
    KeBugCheckEx(0x1Au, 0x15001uLL, BugCheckParameter2, (ULONG_PTR)BugCheckParameter3, 0LL);
  if ( (BugCheckParameter3[1] & 0x10) != 0 )
    MiUnsecureVirtualMemoryAgainstWrites(BugCheckParameter2, BugCheckParameter3[1], BugCheckParameter3[2]);
  if ( v5 == 1 )
    MiSetVadFlags(BugCheckParameter2, 1LL, 0LL, v11);
  ExFreePoolWithTag(BugCheckParameter3, 0);
}
