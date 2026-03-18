/*
 * XREFs of ?EndScan@FxChildList@@QEAAXPEAK@Z @ 0x1C000E170
 * Callers:
 *     imp_WdfChildListEndScan @ 0x1C000E120 (imp_WdfChildListEndScan.c)
 *     ?EndIteration@FxChildList@@QEAAXPEAU_WDF_CHILD_LIST_ITERATOR@@@Z @ 0x1C003A920 (-EndIteration@FxChildList@@QEAAXPEAU_WDF_CHILD_LIST_ITERATOR@@@Z.c)
 * Callees:
 *     ?GetObjectHandleUnchecked@FxObject@@IEAAPEAXXZ @ 0x1C0003FA0 (-GetObjectHandleUnchecked@FxObject@@IEAAPEAXXZ.c)
 *     WPP_IFR_SF_qL @ 0x1C000B0E4 (WPP_IFR_SF_qL.c)
 *     ?GetSafePhysicalDevice@FxDevice@@QEAAPEAU_DEVICE_OBJECT@@XZ @ 0x1C000F144 (-GetSafePhysicalDevice@FxDevice@@QEAAPEAU_DEVICE_OBJECT@@XZ.c)
 *     ?ProcessModificationsLocked@FxChildList@@IEAAXPEAU_LIST_ENTRY@@@Z @ 0x1C000FEA4 (-ProcessModificationsLocked@FxChildList@@IEAAXPEAU_LIST_ENTRY@@@Z.c)
 *     ?DrainFreeListHead@FxChildList@@IEAAXPEAU_LIST_ENTRY@@@Z @ 0x1C0010CA8 (-DrainFreeListHead@FxChildList@@IEAAXPEAU_LIST_ENTRY@@@Z.c)
 *     WPP_IFR_SF_q @ 0x1C00138C0 (WPP_IFR_SF_q.c)
 *     WPP_IFR_SF_qq @ 0x1C0013E44 (WPP_IFR_SF_qq.c)
 *     ?MarkDescriptionNotPresentWorker@FxChildList@@IEAAXPEAUFxDeviceDescriptionEntry@@E@Z @ 0x1C003B1F8 (-MarkDescriptionNotPresentWorker@FxChildList@@IEAAXPEAUFxDeviceDescriptionEntry@@E@Z.c)
 *     ?MarkModificationNotPresentWorker@FxChildList@@IEAAXPEAU_LIST_ENTRY@@PEAUFxDeviceDescriptionEntry@@@Z @ 0x1C003B24C (-MarkModificationNotPresentWorker@FxChildList@@IEAAXPEAU_LIST_ENTRY@@PEAUFxDeviceDescriptionEntr.c)
 *     WPP_IFR_SF_qll @ 0x1C003C138 (WPP_IFR_SF_qll.c)
 */

void __fastcall FxChildList::EndScan(FxChildList *this, unsigned int *ScanTag)
{
  unsigned __int64 *p_m_ListLock; // r15
  unsigned __int16 v4; // r9
  KIRQL v5; // r12
  unsigned int m_ScanCount; // edx
  const _GUID *v7; // r8
  _LIST_ENTRY *Flink; // rdi
  _LIST_ENTRY *i; // rdi
  const void *_a1; // rax
  unsigned int _a2; // edx
  const _GUID *v12; // r8
  _FX_DRIVER_GLOBALS *v13; // r10
  FxChildList *v14; // rbp
  _LIST_ENTRY **p_Blink; // rsi
  _FX_DRIVER_GLOBALS *m_Globals; // rcx
  const void *ObjectHandleUnchecked; // rax
  __int64 v18; // rdx
  _FX_DRIVER_GLOBALS *v19; // r10
  _LIST_ENTRY *v20; // rcx
  _LIST_ENTRY *Blink; // rax
  _LIST_ENTRY *v22; // rax
  _LIST_ENTRY *v23; // rcx
  _LIST_ENTRY **v24; // rdx
  _LIST_ENTRY *v25; // rcx
  _FX_DRIVER_GLOBALS *v26; // r10
  unsigned __int8 FxVerboseOn; // al
  const void *v28; // rax
  __int64 v29; // rdx
  _FX_DRIVER_GLOBALS *v30; // r10
  _DEVICE_OBJECT *SafePhysicalDevice; // rax
  const _GUID *traceGuid; // [rsp+20h] [rbp-48h]
  _LIST_ENTRY freeHead; // [rsp+40h] [rbp-28h] BYREF

  freeHead.Blink = &freeHead;
  p_m_ListLock = &this->m_ListLock;
  freeHead.Flink = &freeHead;
  v5 = KeAcquireSpinLockRaiseToDpc(&this->m_ListLock);
  m_ScanCount = this->m_ScanCount - 1;
  this->m_ScanCount = m_ScanCount;
  v7 = WPP_FxChildList_cpp_Traceguids;
  if ( this->m_Globals->FxVerboseOn )
  {
    _a1 = (const void *)FxObject::GetObjectHandleUnchecked(this);
    WPP_IFR_SF_qL(v13, 5u, 0xCu, 0xCu, v12, _a1, _a2);
    m_ScanCount = this->m_ScanCount;
  }
  if ( !m_ScanCount )
  {
    Flink = this->m_ModificationListHead.Flink;
    if ( Flink != &this->m_ModificationListHead )
    {
      do
      {
        v14 = (FxChildList *)Flink->Flink;
        p_Blink = &Flink[-3].Blink;
        m_Globals = this->m_Globals;
        if ( m_Globals->FxVerboseOn )
          WPP_IFR_SF_qll(
            m_Globals,
            m_ScanCount,
            (unsigned int)v7,
            v4,
            traceGuid,
            &Flink[-3].Blink,
            *((_DWORD *)p_Blink + 14),
            *((_DWORD *)p_Blink + 4));
        if ( !*((_BYTE *)p_Blink + 80) )
        {
          if ( *((_DWORD *)p_Blink + 14) == 1 )
          {
            FxChildList::MarkModificationNotPresentWorker(this, &freeHead, (FxDeviceDescriptionEntry *)&Flink[-3].Blink);
          }
          else if ( *((_DWORD *)p_Blink + 14) == 4 )
          {
            if ( this->m_Globals->FxVerboseOn )
            {
              ObjectHandleUnchecked = (const void *)FxObject::GetObjectHandleUnchecked((FxObject *)p_Blink[8]);
              WPP_IFR_SF_qq(
                v19,
                5u,
                0xCu,
                0xEu,
                WPP_FxChildList_cpp_Traceguids,
                ObjectHandleUnchecked,
                *(const void **)(v18 + 144));
            }
            *((_DWORD *)p_Blink + 14) = 3;
            v20 = Flink->Flink;
            if ( Flink->Flink->Blink != Flink || (Blink = Flink->Blink, Blink->Flink != Flink) )
LABEL_37:
              __fastfail(3u);
            Blink->Flink = v20;
            v20->Blink = Blink;
            Flink->Blink = Flink;
            Flink->Flink = Flink;
          }
        }
        Flink = (_LIST_ENTRY *)v14;
      }
      while ( v14 != (FxChildList *)&this->m_ModificationListHead );
    }
    for ( i = this->m_DescriptionListHead.Flink; i != &this->m_DescriptionListHead; i = i->Flink )
    {
      v22 = i;
      if ( BYTE2(i[5].Flink) )
      {
        v23 = i->Flink;
        v24 = &i->Blink;
        i = i->Blink;
        if ( v22->Flink->Blink != v22 )
          goto LABEL_37;
        if ( i->Flink != v22 )
          goto LABEL_37;
        i->Flink = v23;
        v23->Blink = i;
        v25 = freeHead.Blink;
        if ( freeHead.Blink->Flink != &freeHead )
          goto LABEL_37;
        *v24 = freeHead.Blink;
        v22->Flink = &freeHead;
        v25->Flink = v22;
        freeHead.Blink = v22;
      }
      else if ( (unsigned int)(LODWORD(i[1].Flink) - 1) <= 1 && !LOBYTE(i[5].Flink) )
      {
        v26 = this->m_Globals;
        FxVerboseOn = v26->FxVerboseOn;
        if ( i[4].Flink )
        {
          if ( FxVerboseOn )
          {
            v28 = (const void *)FxObject::GetObjectHandleUnchecked((FxObject *)i[4].Flink);
            WPP_IFR_SF_qq(v30, 5u, 0xCu, 0xFu, WPP_FxChildList_cpp_Traceguids, v28, *(const void **)(v29 + 144));
          }
        }
        else if ( FxVerboseOn )
        {
          WPP_IFR_SF_q(v26, 5u, 0xCu, 0x10u, WPP_FxChildList_cpp_Traceguids, i);
        }
        FxChildList::MarkDescriptionNotPresentWorker(this, (FxDeviceDescriptionEntry *)i, 1u);
      }
    }
    FxChildList::ProcessModificationsLocked(this, &freeHead);
    if ( this->m_InvalidationNeeded )
    {
      SafePhysicalDevice = FxDevice::GetSafePhysicalDevice(this->m_Device);
      if ( SafePhysicalDevice )
      {
        this->m_InvalidationNeeded = 0;
        IoInvalidateDeviceRelations(SafePhysicalDevice, BusRelations);
      }
    }
    KeSetEvent(&this->m_ScanEvent.m_Event, 0, 0);
  }
  KeReleaseSpinLock(p_m_ListLock, v5);
  FxChildList::DrainFreeListHead(this, &freeHead);
}
