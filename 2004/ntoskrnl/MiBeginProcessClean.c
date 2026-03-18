/*
 * XREFs of MiBeginProcessClean @ 0x140310758
 * Callers:
 *     MiReAcquireOutSwappedProcessCommit @ 0x140526E98 (MiReAcquireOutSwappedProcessCommit.c)
 *     MmCleanProcessAddressSpace @ 0x1405FE978 (MmCleanProcessAddressSpace.c)
 * Callees:
 *     ExAcquirePushLockExclusiveEx @ 0x140207AC0 (ExAcquirePushLockExclusiveEx.c)
 *     MiUnlockWorkingSetExclusive @ 0x140213300 (MiUnlockWorkingSetExclusive.c)
 *     UNLOCK_ADDRESS_SPACE @ 0x14024ADB4 (UNLOCK_ADDRESS_SPACE.c)
 *     MiGetSharedVm @ 0x1402AD3F0 (MiGetSharedVm.c)
 *     ExAcquireSpinLockExclusive @ 0x1402CF510 (ExAcquireSpinLockExclusive.c)
 *     MiOutlawInswaps @ 0x140310854 (MiOutlawInswaps.c)
 *     MiFreeWorkingSetSwapContext @ 0x1406D05FC (MiFreeWorkingSetSwapContext.c)
 */

__int64 __fastcall MiBeginProcessClean(__int64 a1, __int64 a2)
{
  __int64 v2; // rsi
  LONG *SharedVm; // rbx
  KIRQL v6; // al
  unsigned int v7; // ebp
  unsigned __int64 v8; // rax
  unsigned __int64 v9; // rbx

  v2 = a2 + 1664;
  if ( (*(_DWORD *)(a2 + 1124) & 0x20) != 0 )
    return 1LL;
  --*(_WORD *)(a1 + 486);
  ExAcquirePushLockExclusiveEx(a2 + 1224, 0LL);
  *(_BYTE *)(a1 + 1304) |= 1u;
  SharedVm = MiGetSharedVm(v2);
  v6 = ExAcquireSpinLockExclusive(SharedVm);
  v7 = 0;
  SharedVm[1] = 0;
  _InterlockedOr((volatile signed __int32 *)(a2 + 1124), 0x20u);
  if ( (*(_BYTE *)(v2 + 187) & 0x60) != 0x60 )
    *(_BYTE *)(v2 + 187) &= 0x9Fu;
  MiUnlockWorkingSetExclusive(v2, v6);
  UNLOCK_ADDRESS_SPACE(a1, a2);
  v8 = MiOutlawInswaps(a2);
  v9 = v8;
  if ( v8 > 2 )
    MiFreeWorkingSetSwapContext(*(_QWORD *)(qword_140C4E448 + 8LL * *(unsigned __int16 *)(a2 + 1838)), v8);
  LOBYTE(v7) = v9 != 0;
  return v7;
}
