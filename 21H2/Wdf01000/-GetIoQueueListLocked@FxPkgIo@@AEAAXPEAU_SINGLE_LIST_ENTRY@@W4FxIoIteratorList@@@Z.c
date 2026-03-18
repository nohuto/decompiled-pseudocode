/*
 * XREFs of ?GetIoQueueListLocked@FxPkgIo@@AEAAXPEAU_SINGLE_LIST_ENTRY@@W4FxIoIteratorList@@@Z @ 0x1C0019308
 * Callers:
 *     ?StopProcessingForPower@FxPkgIo@@QEAAJW4FxIoStopProcessingForPowerAction@@@Z @ 0x1C000F808 (-StopProcessingForPower@FxPkgIo@@QEAAJW4FxIoStopProcessingForPowerAction@@@Z.c)
 *     ?ResumeProcessingForPower@FxPkgIo@@QEAAJXZ @ 0x1C0018E80 (-ResumeProcessingForPower@FxPkgIo@@QEAAJXZ.c)
 *     ?ResetStateForRestart@FxPkgIo@@QEAAXXZ @ 0x1C00815E8 (-ResetStateForRestart@FxPkgIo@@QEAAXXZ.c)
 * Callees:
 *     GetIoQueueList_ProcessQueueListEntry @ 0x1C0019378 (GetIoQueueList_ProcessQueueListEntry.c)
 */

void __fastcall FxPkgIo::GetIoQueueListLocked(FxPkgIo *this, _SINGLE_LIST_ENTRY *SListHead, void *ListType)
{
  _LIST_ENTRY *p_m_IoQueueListHead; // rbx
  _LIST_ENTRY *i; // rdi
  _LIST_ENTRY *j; // rdi

  p_m_IoQueueListHead = &this->m_IoQueueListHead;
  if ( (_DWORD)ListType == 1 )
    goto LABEL_2;
  if ( (_DWORD)ListType != 2 )
    return;
  if ( *(FxDeviceBase **)&this->m_DeviceBase[1].m_ExecutionLevel == (FxDeviceBase *)&this->m_DeviceBase[1].m_ExecutionLevel )
  {
LABEL_2:
    for ( i = this->m_IoQueueListHead.Blink; i != p_m_IoQueueListHead; i = i->Blink )
      GetIoQueueList_ProcessQueueListEntry(i, SListHead, ListType);
  }
  else
  {
    for ( j = p_m_IoQueueListHead->Flink; j != p_m_IoQueueListHead; j = j->Flink )
      GetIoQueueList_ProcessQueueListEntry(j, SListHead, ListType);
  }
}
