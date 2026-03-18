/*
 * XREFs of MiLockWorkingSetForLargeMapping @ 0x14054A338
 * Callers:
 *     MiCommitExistingVad @ 0x1402AB230 (MiCommitExistingVad.c)
 *     MiMapUserLargePages @ 0x140559290 (MiMapUserLargePages.c)
 * Callees:
 *     MiUnlockWorkingSetExclusive @ 0x140213300 (MiUnlockWorkingSetExclusive.c)
 *     ExAllocatePoolMm @ 0x140248040 (ExAllocatePoolMm.c)
 *     MiGetSharedVm @ 0x1402AD3F0 (MiGetSharedVm.c)
 *     ExAcquireSpinLockExclusive @ 0x1402CF510 (ExAcquireSpinLockExclusive.c)
 *     memset @ 0x14040A280 (memset.c)
 *     ExFreePoolWithTag @ 0x1409B1140 (ExFreePoolWithTag.c)
 */

KIRQL __fastcall MiLockWorkingSetForLargeMapping(__int64 a1, __int64 a2, int a3)
{
  void *v4; // rsi
  unsigned __int64 v5; // r14
  PVOID PoolMm; // rax
  LONG *v7; // rbx
  KIRQL v8; // al
  KIRQL v9; // r15
  LONG *SharedVm; // rbx

  if ( (*(_BYTE *)(a1 + 184) & 7) != 0 )
  {
    SharedVm = MiGetSharedVm(a1);
    v9 = ExAcquireSpinLockExclusive(SharedVm);
    goto LABEL_10;
  }
  v4 = 0LL;
  v5 = KeGetCurrentThread()->ApcState.Process[1].ActiveProcessorsPadding[8];
  if ( !*(_QWORD *)(v5 + 608) )
  {
    PoolMm = ExAllocatePoolMm(64, 0x800uLL, 0x6C53694Du, a3 | 0x80000000);
    v4 = PoolMm;
    if ( PoolMm )
      memset(PoolMm, 0, 0x800uLL);
  }
  v7 = MiGetSharedVm(a1);
  v8 = ExAcquireSpinLockExclusive(v7);
  v7[1] = 0;
  v9 = v8;
  if ( v4 )
  {
    if ( !*(_QWORD *)(v5 + 608) )
    {
      *(_QWORD *)(v5 + 608) = v4;
      return v9;
    }
    MiUnlockWorkingSetExclusive(a1, v8);
    ExFreePoolWithTag(v4, 0);
    SharedVm = MiGetSharedVm(a1);
    ExAcquireSpinLockExclusive(SharedVm);
LABEL_10:
    SharedVm[1] = 0;
  }
  return v9;
}
