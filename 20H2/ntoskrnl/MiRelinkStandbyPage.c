/*
 * XREFs of MiRelinkStandbyPage @ 0x140265740
 * Callers:
 *     MiEmptyDecayClusterTimers @ 0x140265568 (MiEmptyDecayClusterTimers.c)
 *     MiUpdatePfnPriorityByPte @ 0x1402AF320 (MiUpdatePfnPriorityByPte.c)
 *     MiUpdatePfnPriority @ 0x1402D3D44 (MiUpdatePfnPriority.c)
 *     MmSetPfnListInfo @ 0x140372878 (MmSetPfnListInfo.c)
 * Callees:
 *     MiUnlinkPageFromList @ 0x140279090 (MiUnlinkPageFromList.c)
 *     MiInsertPageInList @ 0x1402A9F50 (MiInsertPageInList.c)
 *     MiInsertPageInFreeOrZeroedList @ 0x1402C3730 (MiInsertPageInFreeOrZeroedList.c)
 *     MiRestoreTransitionPte @ 0x140346AA0 (MiRestoreTransitionPte.c)
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
    if ( !(unsigned int)MiUnlinkPageFromList(BugCheckParameter2) )
    {
      MiRestoreTransitionPte(BugCheckParameter2);
      *(_QWORD *)(BugCheckParameter2 + 40) &= ~0x8000000000000000uLL;
      *(_BYTE *)(BugCheckParameter2 + 34) &= 0xC7u;
      *(_BYTE *)(BugCheckParameter2 + 35) &= ~0x20u;
      *(_BYTE *)(BugCheckParameter2 + 34) = *(_BYTE *)(BugCheckParameter2 + 34) & 0xF8 | 5;
      *(_QWORD *)(BugCheckParameter2 + 24) |= 0x4000000000000000uLL;
      MiInsertPageInFreeOrZeroedList((__int64)(BugCheckParameter2 + 0x58000000000LL) / 48);
      return 0LL;
    }
    if ( a2 != 0xFFFFFF )
      *(_BYTE *)(BugCheckParameter2 + 35) ^= (a2 ^ *(_BYTE *)(BugCheckParameter2 + 35)) & 7;
    MiInsertPageInList(BugCheckParameter2, 4LL);
  }
  return 1LL;
}
