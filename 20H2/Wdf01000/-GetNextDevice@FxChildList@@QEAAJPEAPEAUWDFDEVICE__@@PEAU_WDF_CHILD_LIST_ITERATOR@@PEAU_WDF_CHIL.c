/*
 * XREFs of ?GetNextDevice@FxChildList@@QEAAJPEAPEAUWDFDEVICE__@@PEAU_WDF_CHILD_LIST_ITERATOR@@PEAU_WDF_CHILD_RETRIEVE_INFO@@@Z @ 0x1C003AB7C
 * Callers:
 *     imp_WdfChildListRetrieveNextDevice @ 0x1C0037DE0 (imp_WdfChildListRetrieveNextDevice.c)
 * Callees:
 *     ?CopyId@FxChildList@@QEAAXPEAU_WDF_CHILD_IDENTIFICATION_DESCRIPTION_HEADER@@0@Z @ 0x1C00018F0 (-CopyId@FxChildList@@QEAAXPEAU_WDF_CHILD_IDENTIFICATION_DESCRIPTION_HEADER@@0@Z.c)
 *     ?GetObjectHandleUnchecked@FxObject@@IEAAPEAXXZ @ 0x1C0003FA0 (-GetObjectHandleUnchecked@FxObject@@IEAAPEAXXZ.c)
 *     WPP_IFR_SF_qL @ 0x1C000B0E4 (WPP_IFR_SF_qL.c)
 *     _guard_dispatch_icall_nop @ 0x1C001CA60 (_guard_dispatch_icall_nop.c)
 *     ?CopyAddress@FxChildList@@IEAAXPEAU_WDF_CHILD_ADDRESS_DESCRIPTION_HEADER@@0@Z @ 0x1C003A524 (-CopyAddress@FxChildList@@IEAAXPEAU_WDF_CHILD_ADDRESS_DESCRIPTION_HEADER@@0@Z.c)
 *     ?MatchStateToFlags@FxDeviceDescriptionEntry@@QEAAEK@Z @ 0x1C003B350 (-MatchStateToFlags@FxDeviceDescriptionEntry@@QEAAEK@Z.c)
 */

__int64 __fastcall FxChildList::GetNextDevice(
        FxChildList *this,
        WDFDEVICE__ **Device,
        _WDF_CHILD_LIST_ITERATOR *Iterator,
        _WDF_CHILD_RETRIEVE_INFO *Info)
{
  FxDeviceDescriptionEntry *v8; // r15
  unsigned int v9; // esi
  const void *_a1; // rax
  FxDeviceDescriptionEntry *Flink; // r14
  _LIST_ENTRY *p_m_DescriptionListHead; // rcx
  FxDeviceDescriptionEntry *i; // rax
  char v14; // r9
  unsigned __int64 ObjectHandleUnchecked; // rax
  __int64 (__fastcall *v16)(unsigned __int64, _WDF_CHILD_IDENTIFICATION_DESCRIPTION_HEADER *, _WDF_CHILD_IDENTIFICATION_DESCRIPTION_HEADER *); // r10
  FxObject *m_Pdo; // rcx
  _WDF_CHILD_LIST_RETRIEVE_DEVICE_STATUS v18; // esi
  _WDF_CHILD_IDENTIFICATION_DESCRIPTION_HEADER *IdentificationDescription; // rdx
  _WDF_CHILD_ADDRESS_DESCRIPTION_HEADER *AddressDescription; // rdx
  unsigned int v21; // eax
  char v22; // r13
  _LIST_ENTRY *v23; // r14
  unsigned int v24; // r15d
  unsigned __int64 v25; // rax
  __int64 (__fastcall *v26)(unsigned __int64, _WDF_CHILD_IDENTIFICATION_DESCRIPTION_HEADER *, _LIST_ENTRY *); // r9
  _WDF_CHILD_IDENTIFICATION_DESCRIPTION_HEADER *v27; // rdx
  _WDF_CHILD_ADDRESS_DESCRIPTION_HEADER *v28; // rdx
  unsigned int v30; // [rsp+40h] [rbp-38h]
  PKSPIN_LOCK SpinLock; // [rsp+48h] [rbp-30h]
  KIRQL NewIrql; // [rsp+80h] [rbp+8h]

  SpinLock = &this->m_ListLock;
  v8 = 0LL;
  v9 = -2147483622;
  NewIrql = KeAcquireSpinLockRaiseToDpc(&this->m_ListLock);
  if ( !this->m_ScanCount )
  {
    v9 = -1073741436;
    _a1 = (const void *)FxObject::GetObjectHandleUnchecked(this);
    WPP_IFR_SF_qL(this->m_Globals, 2u, 0xCu, 0x13u, WPP_FxChildList_cpp_Traceguids, _a1, 0xC0000184);
    goto $Done_9;
  }
  Flink = (FxDeviceDescriptionEntry *)Iterator->Reserved[0];
  if ( Flink )
  {
    if ( this->m_Globals->FxVerifierOn )
    {
      p_m_DescriptionListHead = &this->m_DescriptionListHead;
      if ( Flink != (FxDeviceDescriptionEntry *)&this->m_DescriptionListHead )
      {
        for ( i = (FxDeviceDescriptionEntry *)p_m_DescriptionListHead->Flink;
              ;
              i = (FxDeviceDescriptionEntry *)i->m_DescriptionLink.Flink )
        {
          if ( i == (FxDeviceDescriptionEntry *)p_m_DescriptionListHead )
          {
            v9 = -1073741811;
            goto $Done_9;
          }
          if ( Flink == i )
            break;
        }
      }
    }
    v14 = 0;
    while ( 1 )
    {
      Flink = (FxDeviceDescriptionEntry *)Flink->m_DescriptionLink.Flink;
      if ( Flink == (FxDeviceDescriptionEntry *)&this->m_DescriptionListHead )
        break;
      v8 = Flink;
      if ( FxDeviceDescriptionEntry::MatchStateToFlags(Flink, Iterator->Flags) )
      {
        v14 = 1;
        if ( !Info )
          break;
        if ( !Info->EvtChildListIdentificationDescriptionCompare )
          break;
        ObjectHandleUnchecked = FxObject::GetObjectHandleUnchecked(this);
        v14 = v16(ObjectHandleUnchecked, Info->IdentificationDescription, Flink->m_IdentificationDescription);
        if ( v14 )
          break;
      }
    }
    if ( v14 )
    {
      Iterator->Reserved[0] = Flink;
      m_Pdo = v8->m_Pdo;
      if ( m_Pdo )
      {
        *Device = (WDFDEVICE__ *)FxObject::GetObjectHandleUnchecked(m_Pdo);
        v18 = WdfChildListRetrieveDeviceSuccess;
      }
      else
      {
        v18 = WdfChildListRetrieveDeviceNotYetCreated;
      }
      if ( Info )
      {
        IdentificationDescription = Info->IdentificationDescription;
        if ( IdentificationDescription )
          FxChildList::CopyId(this, IdentificationDescription, v8->m_IdentificationDescription);
        AddressDescription = Info->AddressDescription;
        if ( AddressDescription )
          FxChildList::CopyAddress(this, AddressDescription, v8->m_AddressDescription);
        Info->Status = v18;
      }
      v9 = 0;
    }
    else
    {
      Iterator->Reserved[0] = 0LL;
    }
  }
  if ( (Iterator->Flags & 4) != 0 )
  {
    v21 = (unsigned int)Iterator->Reserved[1];
    v30 = v21;
    if ( v21 )
    {
      v22 = 0;
      v23 = this->m_ModificationListHead.Flink;
      v24 = 1;
      if ( v23 == &this->m_ModificationListHead )
        goto LABEL_48;
      while ( 1 )
      {
        if ( LODWORD(v23[1].Flink) == 1 && ++v24 > v21 )
        {
          v22 = 1;
          if ( !Info
            || !Info->EvtChildListIdentificationDescriptionCompare
            || (v25 = FxObject::GetObjectHandleUnchecked(this),
                (v22 = v26(v25, Info->IdentificationDescription, v23[-1].Flink)) != 0) )
          {
            Iterator->Reserved[1] = (void *)v24;
            if ( Info )
            {
              v27 = Info->IdentificationDescription;
              if ( v27 )
                FxChildList::CopyId(this, v27, (_WDF_CHILD_IDENTIFICATION_DESCRIPTION_HEADER *)v23[-1].Flink);
              v28 = Info->AddressDescription;
              if ( v28 )
                FxChildList::CopyAddress(this, v28, (_WDF_CHILD_ADDRESS_DESCRIPTION_HEADER *)v23[-1].Blink);
              Info->Status = WdfChildListRetrieveDeviceNotYetCreated;
            }
            v9 = 0;
LABEL_47:
            if ( !v22 )
LABEL_48:
              Iterator->Reserved[1] = 0LL;
            break;
          }
          v21 = v30;
        }
        v23 = v23->Flink;
        if ( v23 == &this->m_ModificationListHead )
          goto LABEL_47;
      }
    }
  }
$Done_9:
  KeReleaseSpinLock(SpinLock, NewIrql);
  return v9;
}
