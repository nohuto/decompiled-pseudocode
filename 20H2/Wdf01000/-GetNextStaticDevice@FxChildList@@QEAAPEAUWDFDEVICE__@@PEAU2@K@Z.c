/*
 * XREFs of ?GetNextStaticDevice@FxChildList@@QEAAPEAUWDFDEVICE__@@PEAU2@K@Z @ 0x1C003AE20
 * Callers:
 *     imp_WdfFdoRetrieveNextStaticChild @ 0x1C0038D10 (imp_WdfFdoRetrieveNextStaticChild.c)
 * Callees:
 *     ?GetObjectHandleUnchecked@FxObject@@IEAAPEAXXZ @ 0x1C0003FA0 (-GetObjectHandleUnchecked@FxObject@@IEAAPEAXXZ.c)
 *     ?MatchStateToFlags@FxDeviceDescriptionEntry@@QEAAEK@Z @ 0x1C003B350 (-MatchStateToFlags@FxDeviceDescriptionEntry@@QEAAEK@Z.c)
 */

WDFDEVICE__ *__fastcall FxChildList::GetNextStaticDevice(
        FxChildList *this,
        WDFDEVICE__ *PreviousDevice,
        unsigned int Flags)
{
  unsigned __int64 *p_m_ListLock; // r14
  unsigned __int64 ObjectHandleUnchecked; // rdi
  bool v8; // bl
  KIRQL v9; // r12
  int v10; // r9d
  char v11; // r10
  _LIST_ENTRY *p_m_DescriptionListHead; // r11
  FxDeviceDescriptionEntry *i; // r9
  _WDF_CHILD_IDENTIFICATION_DESCRIPTION_HEADER *m_IdentificationDescription; // rbx
  _LIST_ENTRY *p_m_ModificationListHead; // r8
  _LIST_ENTRY *j; // rdx
  _LIST_ENTRY *Flink; // rcx

  p_m_ListLock = &this->m_ListLock;
  ObjectHandleUnchecked = 0LL;
  v8 = PreviousDevice == 0LL;
  v9 = KeAcquireSpinLockRaiseToDpc(&this->m_ListLock);
  if ( this->m_ScanCount )
  {
    v10 = 1;
    v11 = v8;
    if ( (Flags & 1) != 0 )
    {
      p_m_DescriptionListHead = &this->m_DescriptionListHead;
      for ( i = (FxDeviceDescriptionEntry *)this->m_DescriptionListHead.Flink;
            i != (FxDeviceDescriptionEntry *)p_m_DescriptionListHead;
            i = (FxDeviceDescriptionEntry *)i->m_DescriptionLink.Flink )
      {
        if ( !i->m_PendingDeleteOnScanEnd )
        {
          m_IdentificationDescription = i->m_IdentificationDescription;
          if ( v11 && FxDeviceDescriptionEntry::MatchStateToFlags(i, Flags) )
          {
            ObjectHandleUnchecked = FxObject::GetObjectHandleUnchecked(*(FxObject **)&m_IdentificationDescription[2].IdentificationDescriptionSize);
            if ( ObjectHandleUnchecked )
              goto $Done_10;
            break;
          }
          if ( (WDFDEVICE__ *)FxObject::GetObjectHandleUnchecked(*(FxObject **)&m_IdentificationDescription[2].IdentificationDescriptionSize) == PreviousDevice )
            v11 = 1;
        }
      }
      v10 = 1;
    }
    if ( (Flags & 4) != 0 )
    {
      p_m_ModificationListHead = &this->m_ModificationListHead;
      for ( j = this->m_ModificationListHead.Flink; j != p_m_ModificationListHead; j = j->Flink )
      {
        if ( !BYTE2(j[2].Blink) )
        {
          Flink = j[-1].Flink;
          if ( v11 && LODWORD(j[1].Flink) == v10 )
          {
            ObjectHandleUnchecked = FxObject::GetObjectHandleUnchecked((FxObject *)Flink->Blink);
            break;
          }
          if ( (WDFDEVICE__ *)FxObject::GetObjectHandleUnchecked((FxObject *)Flink->Blink) == PreviousDevice )
            v11 = v10;
        }
      }
    }
  }
$Done_10:
  KeReleaseSpinLock(p_m_ListLock, v9);
  return (WDFDEVICE__ *)ObjectHandleUnchecked;
}
