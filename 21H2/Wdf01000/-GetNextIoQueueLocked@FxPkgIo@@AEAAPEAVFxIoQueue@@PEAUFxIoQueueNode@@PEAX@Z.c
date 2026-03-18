/*
 * XREFs of ?GetNextIoQueueLocked@FxPkgIo@@AEAAPEAVFxIoQueue@@PEAUFxIoQueueNode@@PEAX@Z @ 0x1C000513C
 * Callers:
 *     ?FlushAllQueuesByFileObject@FxPkgIo@@QEAAJPEAU_FILE_OBJECT@@@Z @ 0x1C00074E0 (-FlushAllQueuesByFileObject@FxPkgIo@@QEAAJPEAU_FILE_OBJECT@@@Z.c)
 * Callees:
 *     ?UpdateTagHistory@FxTagTracker@@QEAAXPEAXJPEBDW4FxTagRefType@@K@Z @ 0x1C006E6F0 (-UpdateTagHistory@FxTagTracker@@QEAAXPEAXJPEBDW4FxTagRefType@@K@Z.c)
 */

_LIST_ENTRY **__fastcall FxPkgIo::GetNextIoQueueLocked(FxPkgIo *this, FxIoQueueNode *QueueBookmark, void *a3)
{
  _LIST_ENTRY *Flink; // rbx
  _LIST_ENTRY **p_Blink; // rsi
  _LIST_ENTRY *Blink; // rax
  unsigned int RefCount; // edx
  _LIST_ENTRY *v8; // rax
  FxTagTracker *v10; // rcx

  Flink = QueueBookmark->m_ListEntry.Flink;
  p_Blink = 0LL;
  if ( (FxIoQueueNode *)QueueBookmark->m_ListEntry.Flink->Blink != QueueBookmark )
    goto LABEL_13;
  Blink = QueueBookmark->m_ListEntry.Blink;
  if ( (FxIoQueueNode *)Blink->Flink != QueueBookmark )
    goto LABEL_13;
  Blink->Flink = Flink;
  Flink->Blink = Blink;
  QueueBookmark->m_ListEntry.Blink = &QueueBookmark->m_ListEntry;
  QueueBookmark->m_ListEntry.Flink = &QueueBookmark->m_ListEntry;
  while ( 1 )
  {
    if ( Flink == &this->m_IoQueueListHead )
      return p_Blink;
    if ( LODWORD(Flink[1].Flink) == 1 )
      break;
    Flink = Flink->Flink;
  }
  p_Blink = &Flink[-57].Blink;
  RefCount = _InterlockedIncrement((volatile signed __int32 *)&Flink[-56].Flink + 1);
  if ( SLOBYTE(Flink[-55].Flink) < 0 )
  {
    v10 = (FxTagTracker *)Flink[-60].Blink;
    if ( v10 )
      FxTagTracker::UpdateTagHistory(
        v10,
        (void *)0x73756C66,
        1686,
        "minkernel\\wdf\\framework\\shared\\irphandlers\\io\\fxpkgio.cpp",
        TagAddRef,
        RefCount);
  }
  v8 = Flink->Flink;
  if ( Flink->Flink->Blink != Flink )
LABEL_13:
    __fastfail(3u);
  QueueBookmark->m_ListEntry.Flink = v8;
  QueueBookmark->m_ListEntry.Blink = Flink;
  v8->Blink = &QueueBookmark->m_ListEntry;
  Flink->Flink = &QueueBookmark->m_ListEntry;
  return p_Blink;
}
