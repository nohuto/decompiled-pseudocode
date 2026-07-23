/*
 * XREFs of MiBeginProcessClean @ 0x1402A0890
 * Callers:
 *     MiReAcquireOutSwappedProcessCommit @ 0x14052C5A8 (MiReAcquireOutSwappedProcessCommit.c)
 *     MmCleanProcessAddressSpace @ 0x14070262C (MmCleanProcessAddressSpace.c)
 * Callees:
 *     MiOutlawInswaps @ 0x1402A098C (MiOutlawInswaps.c)
 *     MiGetSharedVm @ 0x1402BF850 (MiGetSharedVm.c)
 *     MiUnlockWorkingSetExclusive @ 0x1402C13E0 (MiUnlockWorkingSetExclusive.c)
 *     ExAcquireSpinLockExclusive @ 0x1402C1960 (ExAcquireSpinLockExclusive.c)
 *     UNLOCK_ADDRESS_SPACE @ 0x14031F5B0 (UNLOCK_ADDRESS_SPACE.c)
 *     ExAcquirePushLockExclusiveEx @ 0x1403556E0 (ExAcquirePushLockExclusiveEx.c)
 *     MiFreeWorkingSetSwapContext @ 0x1406BEC70 (MiFreeWorkingSetSwapContext.c)
 */

__int64 __fastcall MiBeginProcessClean(__int64 a1, __int64 a2)
{
  __int64 v2; // rsi
  __int64 v5; // rdx
  __int64 SharedVm; // rbx
  KIRQL v7; // al
  __int64 v8; // rdx
  unsigned int v9; // ebp
  unsigned __int64 v10; // rax
  unsigned __int64 v11; // rbx

  v2 = a2 + 1664;
  if ( (*(_DWORD *)(a2 + 1124) & 0x20) != 0 )
    return 1LL;
  --*(_WORD *)(a1 + 486);
  ExAcquirePushLockExclusiveEx(a2 + 1224, 0LL);
  *(_BYTE *)(a1 + 1304) |= 1u;
  SharedVm = MiGetSharedVm(v2, v5);
  v7 = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)SharedVm);
  v9 = 0;
  *(_DWORD *)(SharedVm + 4) = 0;
  _InterlockedOr((volatile signed __int32 *)(a2 + 1124), 0x20u);
  if ( (*(_BYTE *)(v2 + 187) & 0x60) != 0x60 )
    *(_BYTE *)(v2 + 187) &= 0x9Fu;
  LOBYTE(v8) = v7;
  MiUnlockWorkingSetExclusive(v2, v8);
  UNLOCK_ADDRESS_SPACE(a1, a2);
  v10 = MiOutlawInswaps(a2);
  v11 = v10;
  if ( v10 > 2 )
    MiFreeWorkingSetSwapContext(*(_QWORD *)(qword_140C4E688 + 8LL * *(unsigned __int16 *)(a2 + 1838)), v10);
  LOBYTE(v9) = v11 != 0;
  return v9;
}
