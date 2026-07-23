/*
 * XREFs of MiRelinkStandbyPage @ 0x14025FF78
 * Callers:
 *     MiUpdatePfnPriority @ 0x14025ED44 (MiUpdatePfnPriority.c)
 *     MiEmptyDecayClusterTimers @ 0x14025FDA0 (MiEmptyDecayClusterTimers.c)
 *     MiUpdatePfnPriorityByPte @ 0x140336C60 (MiUpdatePfnPriorityByPte.c)
 *     MmSetPfnListInfo @ 0x140372734 (MmSetPfnListInfo.c)
 * Callees:
 *     MiRestoreTransitionPte @ 0x140220210 (MiRestoreTransitionPte.c)
 *     MiUnlinkPageFromList @ 0x1402BC1B0 (MiUnlinkPageFromList.c)
 *     MiInsertPageInFreeOrZeroedList @ 0x1402D9760 (MiInsertPageInFreeOrZeroedList.c)
 *     MiInsertPageInList @ 0x140331550 (MiInsertPageInList.c)
 */

__int64 __fastcall MiRelinkStandbyPage(ULONG_PTR a1, int a2)
{
  __int64 v4; // r8

  if ( *(_WORD *)(a1 + 32) )
  {
    if ( a2 != 0xFFFFFF )
      *(_BYTE *)(a1 + 35) ^= (a2 ^ *(_BYTE *)(a1 + 35)) & 7;
  }
  else
  {
    if ( !(unsigned int)MiUnlinkPageFromList(a1) )
    {
      MiRestoreTransitionPte(a1, 0LL, v4);
      *(_QWORD *)(a1 + 40) &= ~0x8000000000000000uLL;
      *(_BYTE *)(a1 + 34) &= 0xC7u;
      *(_BYTE *)(a1 + 35) &= ~0x20u;
      *(_BYTE *)(a1 + 34) = *(_BYTE *)(a1 + 34) & 0xF8 | 5;
      *(_QWORD *)(a1 + 24) |= 0x4000000000000000uLL;
      MiInsertPageInFreeOrZeroedList((__int64)(a1 + 0x58000000000LL) / 48);
      return 0LL;
    }
    if ( a2 != 0xFFFFFF )
      *(_BYTE *)(a1 + 35) ^= (a2 ^ *(_BYTE *)(a1 + 35)) & 7;
    MiInsertPageInList(a1, 4LL);
  }
  return 1LL;
}
