/*
 * XREFs of ?GetDeviceFromId@FxChildList@@QEAAPEAVFxDevice@@PEAU_WDF_CHILD_RETRIEVE_INFO@@@Z @ 0x1C003AAA4
 * Callers:
 *     imp_WdfChildListRequestChildEject @ 0x1C0037AE0 (imp_WdfChildListRequestChildEject.c)
 *     imp_WdfChildListRetrievePdo @ 0x1C0037FA0 (imp_WdfChildListRetrievePdo.c)
 * Callees:
 *     ?CopyAddress@FxChildList@@IEAAXPEAU_WDF_CHILD_ADDRESS_DESCRIPTION_HEADER@@0@Z @ 0x1C003A524 (-CopyAddress@FxChildList@@IEAAXPEAU_WDF_CHILD_ADDRESS_DESCRIPTION_HEADER@@0@Z.c)
 *     ?SearchBackwardsForMatchingDescriptionLocked@FxChildList@@IEAAPEAUFxDeviceDescriptionEntry@@PEAU_WDF_CHILD_IDENTIFICATION_DESCRIPTION_HEADER@@@Z @ 0x1C003B918 (-SearchBackwardsForMatchingDescriptionLocked@FxChildList@@IEAAPEAUFxDeviceDescriptionEntry@@PEAU.c)
 *     ?SearchBackwardsForMatchingModificationLocked@FxChildList@@IEAAPEAUFxDeviceDescriptionEntry@@PEAU_WDF_CHILD_IDENTIFICATION_DESCRIPTION_HEADER@@@Z @ 0x1C003B984 (-SearchBackwardsForMatchingModificationLocked@FxChildList@@IEAAPEAUFxDeviceDescriptionEntry@@PEA.c)
 */

FxDevice *__fastcall FxChildList::GetDeviceFromId(FxChildList *this, _WDF_CHILD_RETRIEVE_INFO *Info)
{
  unsigned __int64 *p_m_ListLock; // r14
  FxDevice *m_Pdo; // rbp
  KIRQL v6; // r15
  FxDeviceDescriptionEntry *v7; // rax
  _WDF_CHILD_LIST_RETRIEVE_DEVICE_STATUS v8; // ebx
  FxChildListDescriptionState m_DescriptionState; // ecx
  _WDF_CHILD_ADDRESS_DESCRIPTION_HEADER *AddressDescription; // rdx
  FxDevice *result; // rax

  p_m_ListLock = &this->m_ListLock;
  m_Pdo = 0LL;
  v6 = KeAcquireSpinLockRaiseToDpc(&this->m_ListLock);
  v7 = FxChildList::SearchBackwardsForMatchingModificationLocked(this, Info->IdentificationDescription);
  if ( v7 && v7->m_ModificationState == ModificationInsert )
  {
    v8 = WdfChildListRetrieveDeviceNotYetCreated;
  }
  else
  {
    v7 = FxChildList::SearchBackwardsForMatchingDescriptionLocked(this, Info->IdentificationDescription);
    if ( v7 )
    {
      m_DescriptionState = v7->m_DescriptionState;
      if ( m_DescriptionState != DescriptionPresentNeedsInstantiation )
        m_Pdo = v7->m_Pdo;
      v8 = (m_DescriptionState == DescriptionPresentNeedsInstantiation) + 1;
    }
    else
    {
      v8 = WdfChildListRetrieveDeviceNoSuchDevice;
    }
  }
  if ( v7 )
  {
    AddressDescription = Info->AddressDescription;
    if ( AddressDescription )
      FxChildList::CopyAddress(this, AddressDescription, v7->m_AddressDescription);
  }
  KeReleaseSpinLock(p_m_ListLock, v6);
  result = m_Pdo;
  Info->Status = v8;
  return result;
}
