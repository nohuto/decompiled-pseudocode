/*
 * XREFs of ?ReenumerateEntry@FxChildList@@QEAAXPEAUFxDeviceDescriptionEntry@@@Z @ 0x1C003C094
 * Callers:
 *     ?AskParentToRemoveAndReenumerate@FxPkgPdo@@EEAAJXZ @ 0x1C0078F30 (-AskParentToRemoveAndReenumerate@FxPkgPdo@@EEAAJXZ.c)
 * Callees:
 *     ?ProcessModificationsLocked@FxChildList@@IEAAXPEAU_LIST_ENTRY@@@Z @ 0x1C000FC54 (-ProcessModificationsLocked@FxChildList@@IEAAXPEAU_LIST_ENTRY@@@Z.c)
 *     ?DrainFreeListHead@FxChildList@@IEAAXPEAU_LIST_ENTRY@@@Z @ 0x1C0010A58 (-DrainFreeListHead@FxChildList@@IEAAXPEAU_LIST_ENTRY@@@Z.c)
 *     ?ReenumerateEntryLocked@FxChildList@@IEAAEPEAUFxDeviceDescriptionEntry@@E@Z @ 0x1C003C12C (-ReenumerateEntryLocked@FxChildList@@IEAAEPEAUFxDeviceDescriptionEntry@@E@Z.c)
 */

void __fastcall FxChildList::ReenumerateEntry(FxChildList *this, FxDeviceDescriptionEntry *Entry)
{
  unsigned __int64 *p_m_ListLock; // rsi
  KIRQL v5; // bl
  unsigned __int8 v6; // r8
  _LIST_ENTRY freeHead; // [rsp+20h] [rbp-18h] BYREF

  freeHead.Blink = &freeHead;
  p_m_ListLock = &this->m_ListLock;
  freeHead.Flink = &freeHead;
  v5 = KeAcquireSpinLockRaiseToDpc(&this->m_ListLock);
  FxChildList::ReenumerateEntryLocked(this, Entry, 0);
  FxChildList::ProcessModificationsLocked(this, &freeHead);
  KeReleaseSpinLock(p_m_ListLock, v5);
  FxChildList::DrainFreeListHead(this, &freeHead, v6);
}
