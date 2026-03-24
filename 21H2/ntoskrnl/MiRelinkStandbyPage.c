/*
 * XREFs of MiRelinkStandbyPage @ 0x140271FD8
 * Callers:
 *     MiUpdatePfnPriority @ 0x140270DA4 (MiUpdatePfnPriority.c)
 *     MiEmptyDecayClusterTimers @ 0x140271E00 (MiEmptyDecayClusterTimers.c)
 *     MiUpdatePfnPriorityByPte @ 0x14032BF10 (MiUpdatePfnPriorityByPte.c)
 *     MmSetPfnListInfo @ 0x140372BE4 (MmSetPfnListInfo.c)
 * Callees:
 *     MiUnlinkPageFromList @ 0x1402178B0 (MiUnlinkPageFromList.c)
 *     MiInsertPageInFreeOrZeroedList @ 0x140234F10 (MiInsertPageInFreeOrZeroedList.c)
 *     MiRestoreTransitionPte @ 0x1402A2DD0 (MiRestoreTransitionPte.c)
 *     MiInsertPageInList @ 0x140326800 (MiInsertPageInList.c)
 */

__int64 __fastcall MiRelinkStandbyPage(ULONG_PTR BugCheckParameter2, int a2)
{
  if ( *(_WORD *)(BugCheckParameter2 + 32) )
  {
    if ( a2 != 0xFFFFFF )
      *(_BYTE *)(BugCheckParameter2 + 35) ^= (a2 ^ *(_BYTE *)(BugCheckParameter2 + 35)) & 7;
  }
  else
  {
    if ( !(unsigned int)MiUnlinkPageFromList(BugCheckParameter2, 0) )
    {
      MiRestoreTransitionPte(BugCheckParameter2);
      *(_QWORD *)(BugCheckParameter2 + 40) &= ~0x8000000000000000uLL;
      *(_BYTE *)(BugCheckParameter2 + 34) &= 0xC7u;
      *(_BYTE *)(BugCheckParameter2 + 35) &= ~0x20u;
      *(_BYTE *)(BugCheckParameter2 + 34) = *(_BYTE *)(BugCheckParameter2 + 34) & 0xF8 | 5;
      *(_QWORD *)(BugCheckParameter2 + 24) |= 0x4000000000000000uLL;
      MiInsertPageInFreeOrZeroedList((__int64)(BugCheckParameter2 + 0x58000000000LL) / 48, 2);
      return 0LL;
    }
    if ( a2 != 0xFFFFFF )
      *(_BYTE *)(BugCheckParameter2 + 35) ^= (a2 ^ *(_BYTE *)(BugCheckParameter2 + 35)) & 7;
    MiInsertPageInList(BugCheckParameter2, 4LL);
  }
  return 1LL;
}
