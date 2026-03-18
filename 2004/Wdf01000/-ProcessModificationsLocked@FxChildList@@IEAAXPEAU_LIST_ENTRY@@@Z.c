/*
 * XREFs of ?ProcessModificationsLocked@FxChildList@@IEAAXPEAU_LIST_ENTRY@@@Z @ 0x1C000FEA4
 * Callers:
 *     ?EndScan@FxChildList@@QEAAXPEAK@Z @ 0x1C000E170 (-EndScan@FxChildList@@QEAAXPEAK@Z.c)
 *     ?ProcessBusRelations@FxChildList@@QEAAJPEAPEAU_DEVICE_RELATIONS@@@Z @ 0x1C000FBEC (-ProcessBusRelations@FxChildList@@QEAAJPEAPEAU_DEVICE_RELATIONS@@@Z.c)
 *     ?InvokeReportedMissingCallback@FxChildList@@QEAAXXZ @ 0x1C000FF64 (-InvokeReportedMissingCallback@FxChildList@@QEAAXXZ.c)
 *     ?Add@FxChildList@@QEAAJPEAU_WDF_CHILD_IDENTIFICATION_DESCRIPTION_HEADER@@PEAU_WDF_CHILD_ADDRESS_DESCRIPTION_HEADER@@PEAK@Z @ 0x1C003A834 (-Add@FxChildList@@QEAAJPEAU_WDF_CHILD_IDENTIFICATION_DESCRIPTION_HEADER@@PEAU_WDF_CHILD_ADDRESS_.c)
 *     ?CreateDevice@FxChildList@@IEAAEPEAUFxDeviceDescriptionEntry@@PEAE@Z @ 0x1C003AE48 (-CreateDevice@FxChildList@@IEAAEPEAUFxDeviceDescriptionEntry@@PEAE@Z.c)
 *     ?NotifyDeviceRemove@FxChildList@@QEAAXPEAJ@Z @ 0x1C003BC58 (-NotifyDeviceRemove@FxChildList@@QEAAXPEAJ@Z.c)
 *     ?NotifyDeviceSurpriseRemove@FxChildList@@QEAAXXZ @ 0x1C003BE30 (-NotifyDeviceSurpriseRemove@FxChildList@@QEAAXXZ.c)
 *     ?ReenumerateEntry@FxChildList@@QEAAXPEAUFxDeviceDescriptionEntry@@@Z @ 0x1C003C014 (-ReenumerateEntry@FxChildList@@QEAAXPEAUFxDeviceDescriptionEntry@@@Z.c)
 *     ?UpdateAllAsPresent@FxChildList@@QEAAXPEAK@Z @ 0x1C003C348 (-UpdateAllAsPresent@FxChildList@@QEAAXPEAK@Z.c)
 *     ?UpdateAsMissing@FxChildList@@QEAAJPEAU_WDF_CHILD_IDENTIFICATION_DESCRIPTION_HEADER@@@Z @ 0x1C003C418 (-UpdateAsMissing@FxChildList@@QEAAJPEAU_WDF_CHILD_IDENTIFICATION_DESCRIPTION_HEADER@@@Z.c)
 *     ?UpdateDeviceAsMissing@FxChildList@@QEAAJPEAVFxDevice@@@Z @ 0x1C003C500 (-UpdateDeviceAsMissing@FxChildList@@QEAAJPEAVFxDevice@@@Z.c)
 * Callees:
 *     ?GetObjectHandleUnchecked@FxObject@@IEAAPEAXXZ @ 0x1C0003FA0 (-GetObjectHandleUnchecked@FxObject@@IEAAPEAXXZ.c)
 *     ?GetSafePhysicalDevice@FxDevice@@QEAAPEAU_DEVICE_OBJECT@@XZ @ 0x1C000F144 (-GetSafePhysicalDevice@FxDevice@@QEAAPEAU_DEVICE_OBJECT@@XZ.c)
 *     WPP_IFR_SF_q @ 0x1C00138C0 (WPP_IFR_SF_q.c)
 *     WPP_IFR_SF_qq @ 0x1C0013E44 (WPP_IFR_SF_qq.c)
 *     WPP_IFR_SF_ql @ 0x1C002FA6C (WPP_IFR_SF_ql.c)
 *     ?CloneEntryLocked@FxChildList@@IEAAEPEAU_LIST_ENTRY@@PEAUFxDeviceDescriptionEntry@@E@Z @ 0x1C003ABFC (-CloneEntryLocked@FxChildList@@IEAAEPEAU_LIST_ENTRY@@PEAUFxDeviceDescriptionEntry@@E@Z.c)
 *     WPP_IFR_SF_qdd @ 0x1C003C8B8 (WPP_IFR_SF_qdd.c)
 */

void __fastcall FxChildList::ProcessModificationsLocked(FxChildList *this, _LIST_ENTRY *FreeListHead)
{
  _LIST_ENTRY *p_m_ModificationListHead; // rsi
  _LIST_ENTRY *Flink; // rax
  unsigned __int8 v6; // r15
  _LIST_ENTRY *v7; // rdi
  const void *_a1; // rax
  _FX_DRIVER_GLOBALS *v9; // r10
  _LIST_ENTRY *v10; // rcx
  _LIST_ENTRY *v11; // rax
  _LIST_ENTRY **p_Blink; // rdi
  _FX_DRIVER_GLOBALS *m_Globals; // rcx
  _FX_DRIVER_GLOBALS *v14; // rcx
  const void *v15; // rax
  __int64 v16; // rdx
  _FX_DRIVER_GLOBALS *v17; // r10
  _FX_DRIVER_GLOBALS *v18; // rcx
  _LIST_ENTRY *v19; // rax
  _LIST_ENTRY *v20; // rcx
  _LIST_ENTRY *v21; // rax
  _FX_DRIVER_GLOBALS *v22; // rcx
  _LIST_ENTRY *Blink; // rcx
  _DEVICE_OBJECT *SafePhysicalDevice; // rax
  const void *ObjectHandleUnchecked; // rax
  _FX_DRIVER_GLOBALS *v26; // r10
  const void *v27; // rax
  int _a2; // r8d
  _FX_DRIVER_GLOBALS *v29; // r10

  if ( this->m_State == ListUnlocked && !this->m_ScanCount )
  {
    if ( this->m_Globals->FxVerboseOn )
    {
      _a1 = (const void *)FxObject::GetObjectHandleUnchecked(this);
      WPP_IFR_SF_q(v9, 5u, 0xCu, 0x19u, WPP_FxChildList_cpp_Traceguids, _a1);
    }
    p_m_ModificationListHead = &this->m_ModificationListHead;
    Flink = this->m_ModificationListHead.Flink;
    if ( Flink != &this->m_ModificationListHead )
    {
      do
      {
        v10 = Flink->Flink;
        if ( LODWORD(Flink[1].Flink) == 3 )
          LODWORD(Flink[1].Flink) = 2;
        Flink = v10;
      }
      while ( v10 != p_m_ModificationListHead );
    }
    v6 = 0;
    while ( 1 )
    {
      while ( 1 )
      {
        v7 = p_m_ModificationListHead->Flink;
        if ( p_m_ModificationListHead->Flink == p_m_ModificationListHead )
        {
          if ( v6 )
          {
            if ( this->m_ScanCount || (SafePhysicalDevice = FxDevice::GetSafePhysicalDevice(this->m_Device)) == 0LL )
            {
              this->m_InvalidationNeeded = 1;
            }
            else
            {
              this->m_InvalidationNeeded = 0;
              IoInvalidateDeviceRelations(SafePhysicalDevice, BusRelations);
            }
          }
          if ( this->m_Globals->FxVerboseOn )
          {
            ObjectHandleUnchecked = (const void *)FxObject::GetObjectHandleUnchecked(this);
            WPP_IFR_SF_q(v26, 5u, 0xCu, 0x1Fu, WPP_FxChildList_cpp_Traceguids, ObjectHandleUnchecked);
          }
          return;
        }
        if ( v7->Blink != p_m_ModificationListHead )
          goto LABEL_41;
        v11 = v7->Flink;
        if ( v7->Flink->Blink != v7 )
          goto LABEL_41;
        p_m_ModificationListHead->Flink = v11;
        v11->Blink = p_m_ModificationListHead;
        v7->Blink = v7;
        v7->Flink = v7;
        p_Blink = &v7[-3].Blink;
        m_Globals = this->m_Globals;
        if ( m_Globals->FxVerboseOn )
          WPP_IFR_SF_ql(m_Globals, 5u, 0xCu, 0x1Au, WPP_FxChildList_cpp_Traceguids, p_Blink, *((_DWORD *)p_Blink + 14));
        if ( *((_DWORD *)p_Blink + 14) != 1 )
          break;
        *((_DWORD *)p_Blink + 4) = 1;
        v22 = this->m_Globals;
        if ( v22->FxVerboseOn )
          WPP_IFR_SF_q(v22, 5u, 0xCu, 0x1Eu, WPP_FxChildList_cpp_Traceguids, p_Blink);
        Blink = this->m_DescriptionListHead.Blink;
        if ( Blink->Flink != &this->m_DescriptionListHead )
LABEL_41:
          __fastfail(3u);
        *p_Blink = &this->m_DescriptionListHead;
        p_Blink[1] = Blink;
        Blink->Flink = (_LIST_ENTRY *)p_Blink;
        this->m_DescriptionListHead.Blink = (_LIST_ENTRY *)p_Blink;
        *((_DWORD *)p_Blink + 14) = 0;
LABEL_40:
        v6 = 1;
      }
      if ( *((_DWORD *)p_Blink + 14) == 2 )
      {
        *((_DWORD *)p_Blink + 14) = 0;
        v14 = this->m_Globals;
        if ( v14->FxVerboseOn )
          WPP_IFR_SF_ql(v14, 5u, 0xCu, 0x1Bu, WPP_FxChildList_cpp_Traceguids, p_Blink, *((_DWORD *)p_Blink + 4));
        if ( *((_DWORD *)p_Blink + 4) == 1 )
        {
          v18 = this->m_Globals;
          if ( v18->FxVerboseOn )
            WPP_IFR_SF_q(v18, 5u, 0xCu, 0x1Cu, WPP_FxChildList_cpp_Traceguids, p_Blink);
          v19 = *p_Blink;
          if ( (_LIST_ENTRY **)(*p_Blink)->Blink != p_Blink )
            goto LABEL_41;
          v20 = p_Blink[1];
          if ( (_LIST_ENTRY **)v20->Flink != p_Blink )
            goto LABEL_41;
          v20->Flink = v19;
          v19->Blink = v20;
          v21 = FreeListHead->Blink;
          if ( v21->Flink != FreeListHead )
            goto LABEL_41;
          *p_Blink = FreeListHead;
          p_Blink[1] = v21;
          v21->Flink = (_LIST_ENTRY *)p_Blink;
          FreeListHead->Blink = (_LIST_ENTRY *)p_Blink;
        }
        else if ( *((_DWORD *)p_Blink + 4) == 2 )
        {
          if ( this->m_Globals->FxVerboseOn )
          {
            v15 = (const void *)FxObject::GetObjectHandleUnchecked((FxObject *)p_Blink[8]);
            WPP_IFR_SF_qq(v17, 5u, 0xCu, 0x1Du, WPP_FxChildList_cpp_Traceguids, v15, *(const void **)(v16 + 144));
          }
          *((_DWORD *)p_Blink + 4) = 4;
          goto LABEL_40;
        }
      }
      else if ( *((_DWORD *)p_Blink + 14) == 4 )
      {
        v6 = FxChildList::CloneEntryLocked(this, FreeListHead, (FxDeviceDescriptionEntry *)p_Blink, 0);
      }
    }
  }
  if ( this->m_Globals->FxVerboseOn )
  {
    v27 = (const void *)FxObject::GetObjectHandleUnchecked(this);
    WPP_IFR_SF_qdd(v29, 5u, 0xCu, 0x18u, WPP_FxChildList_cpp_Traceguids, v27, _a2, this->m_ScanCount);
  }
}
