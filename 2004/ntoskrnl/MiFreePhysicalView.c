/*
 * XREFs of MiFreePhysicalView @ 0x140221BA8
 * Callers:
 *     MiReleaseVadEventBlocks @ 0x1405F8F10 (MiReleaseVadEventBlocks.c)
 * Callees:
 *     MiUnlockWorkingSetExclusive @ 0x140213300 (MiUnlockWorkingSetExclusive.c)
 *     MiGetSharedVm @ 0x1402AD3F0 (MiGetSharedVm.c)
 *     ExAcquireSpinLockExclusive @ 0x1402CF510 (ExAcquireSpinLockExclusive.c)
 */

void __fastcall MiFreePhysicalView(__int64 a1, __int64 a2)
{
  __int64 v2; // rdi
  __int64 v3; // rsi
  __int64 SharedVm; // rbx
  KIRQL v5; // al

  if ( (*(_DWORD *)(a2 + 48) & 0x70) == 0x10 )
  {
    v2 = *(_QWORD *)(a1 + 1680);
    v3 = a1 + 1664;
    SharedVm = MiGetSharedVm(a1 + 1664, a2);
    v5 = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)SharedVm);
    *(_DWORD *)(SharedVm + 4) = 0;
    --*(_QWORD *)(v2 + 304);
    MiUnlockWorkingSetExclusive(v3, v5);
  }
}
