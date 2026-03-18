/*
 * XREFs of ?BeginScan@FxChildList@@QEAAXPEAK@Z @ 0x1C0013D00
 * Callers:
 *     imp_WdfChildListBeginScan @ 0x1C0013CB0 (imp_WdfChildListBeginScan.c)
 * Callees:
 *     ?GetObjectHandleUnchecked@FxObject@@IEAAPEAXXZ @ 0x1C0002928 (-GetObjectHandleUnchecked@FxObject@@IEAAPEAXXZ.c)
 *     WPP_IFR_SF_qL @ 0x1C0013680 (WPP_IFR_SF_qL.c)
 */

void __fastcall FxChildList::BeginScan(FxChildList *this, unsigned int *ScanTag)
{
  unsigned __int64 *p_m_ListLock; // rdi
  KIRQL v4; // si
  _LIST_ENTRY *i; // rax
  _LIST_ENTRY *p_m_ModificationListHead; // rbx
  _LIST_ENTRY *j; // rax
  const void *_a1; // rax
  unsigned int _a2; // edx
  _FX_DRIVER_GLOBALS *v10; // r10

  p_m_ListLock = &this->m_ListLock;
  v4 = KeAcquireSpinLockRaiseToDpc(&this->m_ListLock);
  KeClearEvent(&this->m_ScanEvent.m_Event);
  ++this->m_ScanCount;
  if ( this->m_Globals->FxVerboseOn )
  {
    _a1 = (const void *)FxObject::GetObjectHandleUnchecked(this);
    WPP_IFR_SF_qL(v10, 5u, 0xCu, 0xBu, WPP_FxChildList_cpp_Traceguids, _a1, _a2);
  }
  for ( i = this->m_DescriptionListHead.Flink; i != &this->m_DescriptionListHead; i = i->Flink )
    LOBYTE(i[5].Flink) = 0;
  p_m_ModificationListHead = &this->m_ModificationListHead;
  for ( j = p_m_ModificationListHead->Flink; j != p_m_ModificationListHead; j = j->Flink )
    LOBYTE(j[2].Blink) = 0;
  KeReleaseSpinLock(p_m_ListLock, v4);
}
