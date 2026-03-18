/*
 * XREFs of ?GetNextStaticDevice@FxChildList@@QEAAPEAUWDFDEVICE__@@PEAU2@K@Z @ 0x1C005BF54
 * Callers:
 *     imp_WdfFdoRetrieveNextStaticChild @ 0x1C005B4F0 (imp_WdfFdoRetrieveNextStaticChild.c)
 * Callees:
 *     ?GetObjectHandleUnchecked@FxObject@@IEAAPEAXXZ @ 0x1C0002928 (-GetObjectHandleUnchecked@FxObject@@IEAAPEAXXZ.c)
 */

WDFDEVICE__ *__fastcall FxChildList::GetNextStaticDevice(FxChildList *this, WDFDEVICE__ *PreviousDevice, char Flags)
{
  unsigned __int64 *p_m_ListLock; // r14
  unsigned __int64 ObjectHandleUnchecked; // rdi
  bool v8; // bl
  KIRQL v9; // r11
  char v10; // r8
  _LIST_ENTRY *p_m_DescriptionListHead; // r10
  _LIST_ENTRY *i; // rdx
  _LIST_ENTRY *Blink; // rcx
  int Flink; // r9d
  _LIST_ENTRY *p_m_ModificationListHead; // r9
  _LIST_ENTRY *j; // rdx
  _LIST_ENTRY *v17; // rcx

  p_m_ListLock = &this->m_ListLock;
  ObjectHandleUnchecked = 0LL;
  v8 = PreviousDevice == 0LL;
  v9 = KeAcquireSpinLockRaiseToDpc(&this->m_ListLock);
  if ( this->m_ScanCount )
  {
    v10 = v8;
    if ( (Flags & 1) != 0 )
    {
      p_m_DescriptionListHead = &this->m_DescriptionListHead;
      for ( i = this->m_DescriptionListHead.Flink; i != p_m_DescriptionListHead; i = i->Flink )
      {
        if ( !BYTE2(i[5].Flink) )
        {
          Blink = i[1].Blink;
          if ( v10 )
          {
            if ( (Flink = (int)i[1].Flink, Flink == 2)
              || (Flags & 2) != 0 && (unsigned int)(Flink - 3) <= 1
              || (Flags & 4) != 0 && Flink == 1 )
            {
              ObjectHandleUnchecked = FxObject::GetObjectHandleUnchecked((FxObject *)Blink->Blink);
              if ( ObjectHandleUnchecked )
                goto $Done_30;
              break;
            }
          }
          if ( (WDFDEVICE__ *)FxObject::GetObjectHandleUnchecked((FxObject *)Blink->Blink) == PreviousDevice )
            v10 = 1;
        }
      }
    }
    if ( (Flags & 4) != 0 )
    {
      p_m_ModificationListHead = &this->m_ModificationListHead;
      for ( j = this->m_ModificationListHead.Flink; j != p_m_ModificationListHead; j = j->Flink )
      {
        if ( !BYTE2(j[2].Blink) )
        {
          v17 = j[-1].Flink;
          if ( v10 && LODWORD(j[1].Flink) == 1 )
          {
            ObjectHandleUnchecked = FxObject::GetObjectHandleUnchecked((FxObject *)v17->Blink);
            break;
          }
          if ( (WDFDEVICE__ *)FxObject::GetObjectHandleUnchecked((FxObject *)v17->Blink) == PreviousDevice )
            v10 = 1;
        }
      }
    }
  }
$Done_30:
  KeReleaseSpinLock(p_m_ListLock, v9);
  return (WDFDEVICE__ *)ObjectHandleUnchecked;
}
