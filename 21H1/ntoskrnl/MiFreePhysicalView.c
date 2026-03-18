/*
 * XREFs of MiFreePhysicalView @ 0x14027ABF8
 * Callers:
 *     MiReleaseVadEventBlocks @ 0x14062DF50 (MiReleaseVadEventBlocks.c)
 * Callees:
 *     MiGetSharedVm @ 0x14021A770 (MiGetSharedVm.c)
 *     ExAcquireSpinLockExclusive @ 0x14023C6E0 (ExAcquireSpinLockExclusive.c)
 *     MiUnlockWorkingSetExclusive @ 0x14026C350 (MiUnlockWorkingSetExclusive.c)
 */

void __fastcall MiFreePhysicalView(__int64 a1, __int64 a2)
{
  __int64 v2; // rdi
  __int64 v3; // rsi
  LONG *SharedVm; // rbx
  KIRQL v5; // al

  if ( (*(_DWORD *)(a2 + 48) & 0x70) == 0x10 )
  {
    v2 = *(_QWORD *)(a1 + 1680);
    v3 = a1 + 1664;
    SharedVm = MiGetSharedVm(a1 + 1664);
    v5 = ExAcquireSpinLockExclusive(SharedVm);
    SharedVm[1] = 0;
    --*(_QWORD *)(v2 + 304);
    MiUnlockWorkingSetExclusive(v3, v5);
  }
}
