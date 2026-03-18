/*
 * XREFs of MiUnlockSystemVa @ 0x14022B50C
 * Callers:
 *     MmAccessFault @ 0x14020C560 (MmAccessFault.c)
 *     MiSystemFault @ 0x14022A810 (MiSystemFault.c)
 *     MiSynchronizeSystemVa @ 0x14022B050 (MiSynchronizeSystemVa.c)
 *     MiTrimSharedPageFromViews @ 0x1402CE864 (MiTrimSharedPageFromViews.c)
 *     MmCopyMemory @ 0x1403028D0 (MmCopyMemory.c)
 *     MiTranslatePageForCopy @ 0x140302DD4 (MiTranslatePageForCopy.c)
 *     MiUnlockStealVm @ 0x14034B18C (MiUnlockStealVm.c)
 *     MiReleaseFaultSynchronization @ 0x1405433A4 (MiReleaseFaultSynchronization.c)
 * Callees:
 *     MiUnlockWorkingSetShared @ 0x14020EC60 (MiUnlockWorkingSetShared.c)
 *     MiUnlockFaultPageTable @ 0x14022B558 (MiUnlockFaultPageTable.c)
 *     MiUnlockWorkingSetExclusive @ 0x14026C350 (MiUnlockWorkingSetExclusive.c)
 */

__int64 __fastcall MiUnlockSystemVa(__int64 a1)
{
  __int64 v1; // rbx
  __int64 v2; // rdi
  __int64 v3; // rdx
  __int64 result; // rax

  v1 = a1 + 24;
  v2 = *(_QWORD *)(a1 + 24);
  if ( v2 )
  {
    MiUnlockFaultPageTable(a1 + 24);
    LOBYTE(v3) = *(_BYTE *)(v1 + 12);
    if ( (*(_BYTE *)(v1 + 13) & 1) != 0 )
      result = MiUnlockWorkingSetExclusive(v2, v3);
    else
      result = MiUnlockWorkingSetShared(v2, v3);
    *(_QWORD *)v1 = 0LL;
  }
  return result;
}
