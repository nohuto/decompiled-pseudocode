/*
 * XREFs of MiFreePhysicalView @ 0x140230018
 * Callers:
 *     MiReleaseVadEventBlocks @ 0x140624980 (MiReleaseVadEventBlocks.c)
 * Callees:
 *     MiGetSharedVm @ 0x14027C730 (MiGetSharedVm.c)
 *     MiUnlockWorkingSetExclusive @ 0x14027F090 (MiUnlockWorkingSetExclusive.c)
 *     ExAcquireSpinLockExclusive @ 0x1402D4460 (ExAcquireSpinLockExclusive.c)
 */

char __fastcall MiFreePhysicalView(__int64 a1, __int64 a2)
{
  char result; // al
  __int64 v3; // rdi
  __int64 v4; // rsi
  __int64 SharedVm; // rbx
  KIRQL v6; // al
  __int64 v7; // rdx

  result = *(_DWORD *)(a2 + 48) & 0x70;
  if ( result == 16 )
  {
    v3 = *(_QWORD *)(a1 + 1680);
    v4 = a1 + 1664;
    SharedVm = MiGetSharedVm(a1 + 1664, a2);
    v6 = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)SharedVm);
    *(_DWORD *)(SharedVm + 4) = 0;
    LOBYTE(v7) = v6;
    --*(_QWORD *)(v3 + 304);
    return MiUnlockWorkingSetExclusive(v4, v7);
  }
  return result;
}
