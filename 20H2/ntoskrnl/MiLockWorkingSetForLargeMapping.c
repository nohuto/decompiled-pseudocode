/*
 * XREFs of MiLockWorkingSetForLargeMapping @ 0x14054DD08
 * Callers:
 *     MiCommitExistingVad @ 0x14027A570 (MiCommitExistingVad.c)
 *     MiMapUserLargePages @ 0x14055CC60 (MiMapUserLargePages.c)
 * Callees:
 *     ExAllocatePoolMm @ 0x14022D3E0 (ExAllocatePoolMm.c)
 *     MiGetSharedVm @ 0x14027C730 (MiGetSharedVm.c)
 *     MiUnlockWorkingSetExclusive @ 0x14027F090 (MiUnlockWorkingSetExclusive.c)
 *     ExAcquireSpinLockExclusive @ 0x1402D4460 (ExAcquireSpinLockExclusive.c)
 *     memset @ 0x140411300 (memset.c)
 *     ExFreePoolWithTag @ 0x1409B70B0 (ExFreePoolWithTag.c)
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
