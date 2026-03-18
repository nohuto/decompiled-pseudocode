/*
 * XREFs of MiRelinkStandbyPage @ 0x1402D1FBC
 * Callers:
 *     MiUpdatePfnPriorityByPte @ 0x140236580 (MiUpdatePfnPriorityByPte.c)
 *     MiUpdatePfnPriority @ 0x1402501B0 (MiUpdatePfnPriority.c)
 *     MiEmptyDecayClusterTimers @ 0x1402D1DE4 (MiEmptyDecayClusterTimers.c)
 *     MmSetPfnListInfo @ 0x140370928 (MmSetPfnListInfo.c)
 * Callees:
 *     MiInsertPageInList @ 0x140235AB0 (MiInsertPageInList.c)
 *     MiInsertPageInFreeOrZeroedList @ 0x14023E080 (MiInsertPageInFreeOrZeroedList.c)
 *     MiUnlinkPageFromList @ 0x1402A9D50 (MiUnlinkPageFromList.c)
 *     MiRestoreTransitionPte @ 0x1402F6C10 (MiRestoreTransitionPte.c)
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
    MiInsertPageInList(BugCheckParameter2, 4u);
  }
  return 1LL;
}
