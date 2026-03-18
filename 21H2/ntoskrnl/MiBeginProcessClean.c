/*
 * XREFs of MiBeginProcessClean @ 0x14025F344
 * Callers:
 *     MiReAcquireOutSwappedProcessCommit @ 0x140580DB8 (MiReAcquireOutSwappedProcessCommit.c)
 *     MmCleanProcessAddressSpace @ 0x1406F89A4 (MmCleanProcessAddressSpace.c)
 * Callees:
 *     MiOutlawInswaps @ 0x14025F440 (MiOutlawInswaps.c)
 *     UNLOCK_ADDRESS_SPACE_UNORDERED @ 0x140281A58 (UNLOCK_ADDRESS_SPACE_UNORDERED.c)
 *     MiGetSharedVm @ 0x140282AD0 (MiGetSharedVm.c)
 *     ExAcquirePushLockExclusiveEx @ 0x1402AC910 (ExAcquirePushLockExclusiveEx.c)
 *     MiUnlockWorkingSetExclusive @ 0x14030FA80 (MiUnlockWorkingSetExclusive.c)
 *     ExAcquireSpinLockExclusive @ 0x14034FBE0 (ExAcquireSpinLockExclusive.c)
 *     MiFreeWorkingSetSwapContext @ 0x1406EC158 (MiFreeWorkingSetSwapContext.c)
 */

__int64 __fastcall MiBeginProcessClean(__int64 a1, __int64 a2)
{
  __int64 v2; // rbp
  unsigned int v5; // esi
  __int64 SharedVm; // rbx
  KIRQL v7; // al
  __int64 v8; // rdx
  unsigned __int64 v9; // rax

  v2 = a2 + 1664;
  if ( (*(_DWORD *)(a2 + 1124) & 0x20) != 0 )
    return 1LL;
  --*(_WORD *)(a1 + 486);
  ExAcquirePushLockExclusiveEx(a2 + 1224, 0LL);
  v5 = 1;
  *(_BYTE *)(a1 + 1384) |= 1u;
  SharedVm = MiGetSharedVm(v2);
  v7 = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)SharedVm);
  *(_DWORD *)(SharedVm + 4) = 0;
  _InterlockedOr((volatile signed __int32 *)(a2 + 1124), 0x20u);
  if ( (*(_BYTE *)(v2 + 187) & 0x60) != 0x60 )
    *(_BYTE *)(v2 + 187) &= 0x9Fu;
  LOBYTE(v8) = v7;
  MiUnlockWorkingSetExclusive(v2, v8);
  UNLOCK_ADDRESS_SPACE_UNORDERED(a1, a2);
  v9 = MiOutlawInswaps(a2);
  if ( v9 > 2 )
  {
    MiFreeWorkingSetSwapContext(*(_QWORD *)(qword_140C51F48 + 8LL * *(unsigned __int16 *)(a2 + 1838)), v9);
  }
  else if ( !v9 )
  {
    return 0;
  }
  return v5;
}
