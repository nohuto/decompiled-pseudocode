/*
 * XREFs of MiFreePhysicalView @ 0x140322D08
 * Callers:
 *     MiReleaseVadEventBlocks @ 0x140704770 (MiReleaseVadEventBlocks.c)
 * Callees:
 *     MiGetSharedVm @ 0x1402BF850 (MiGetSharedVm.c)
 *     MiUnlockWorkingSetExclusive @ 0x1402C13E0 (MiUnlockWorkingSetExclusive.c)
 *     ExAcquireSpinLockExclusive @ 0x1402C1960 (ExAcquireSpinLockExclusive.c)
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
