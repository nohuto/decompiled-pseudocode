/*
 * XREFs of MiLockWorkingSetForLargeMapping @ 0x1405B06E0
 * Callers:
 *     MiCommitExistingVad @ 0x14032C1B0 (MiCommitExistingVad.c)
 *     MiMapUserLargePages @ 0x1405C2A4C (MiMapUserLargePages.c)
 * Callees:
 *     MiGetSharedVm @ 0x140282AD0 (MiGetSharedVm.c)
 *     ExAllocatePoolMm @ 0x14030B860 (ExAllocatePoolMm.c)
 *     MiUnlockWorkingSetExclusive @ 0x14030FA80 (MiUnlockWorkingSetExclusive.c)
 *     ExAcquireSpinLockExclusive @ 0x14034FBE0 (ExAcquireSpinLockExclusive.c)
 *     memset @ 0x140435E00 (memset.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 */

KIRQL __fastcall MiLockWorkingSetForLargeMapping(__int64 a1, __int64 a2, int a3)
{
  void *v4; // rsi
  unsigned __int64 v5; // r14
  PVOID PoolMm; // rax
  volatile LONG *v7; // rbx
  KIRQL v8; // al
  KIRQL v9; // r15
  volatile LONG *SharedVm; // rbx

  if ( (*(_BYTE *)(a1 + 184) & 7) != 0 )
  {
    SharedVm = (volatile LONG *)MiGetSharedVm(a1);
    v9 = ExAcquireSpinLockExclusive(SharedVm);
    goto LABEL_10;
  }
  v4 = 0LL;
  v5 = KeGetCurrentThread()->ApcState.Process[1].ActiveProcessors.StaticBitmap[28];
  if ( !*(_QWORD *)(v5 + 592) )
  {
    PoolMm = ExAllocatePoolMm(64LL, 0x800uLL, 0x6C53694Du, a3 | 0x80000000);
    v4 = PoolMm;
    if ( PoolMm )
      memset(PoolMm, 0, 0x800uLL);
  }
  v7 = (volatile LONG *)MiGetSharedVm(a1);
  v8 = ExAcquireSpinLockExclusive(v7);
  *((_DWORD *)v7 + 1) = 0;
  v9 = v8;
  if ( v4 )
  {
    if ( !*(_QWORD *)(v5 + 592) )
    {
      *(_QWORD *)(v5 + 592) = v4;
      return v9;
    }
    MiUnlockWorkingSetExclusive(a1, v8);
    ExFreePoolWithTag(v4, 0);
    SharedVm = (volatile LONG *)MiGetSharedVm(a1);
    ExAcquireSpinLockExclusive(SharedVm);
LABEL_10:
    *((_DWORD *)SharedVm + 1) = 0;
  }
  return v9;
}
