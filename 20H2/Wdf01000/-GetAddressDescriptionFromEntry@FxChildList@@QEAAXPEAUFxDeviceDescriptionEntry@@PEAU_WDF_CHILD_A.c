/*
 * XREFs of ?GetAddressDescriptionFromEntry@FxChildList@@QEAAXPEAUFxDeviceDescriptionEntry@@PEAU_WDF_CHILD_ADDRESS_DESCRIPTION_HEADER@@@Z @ 0x1C003AA28
 * Callers:
 *     imp_WdfPdoRetrieveAddressDescription @ 0x1C00387A0 (imp_WdfPdoRetrieveAddressDescription.c)
 * Callees:
 *     ?CopyAddress@FxChildList@@IEAAXPEAU_WDF_CHILD_ADDRESS_DESCRIPTION_HEADER@@0@Z @ 0x1C003A524 (-CopyAddress@FxChildList@@IEAAXPEAU_WDF_CHILD_ADDRESS_DESCRIPTION_HEADER@@0@Z.c)
 */

void __fastcall FxChildList::GetAddressDescriptionFromEntry(
        FxChildList *this,
        FxDeviceDescriptionEntry *Entry,
        _WDF_CHILD_ADDRESS_DESCRIPTION_HEADER *AddressDescription)
{
  unsigned __int64 *p_m_ListLock; // r14
  KIRQL v7; // bl

  p_m_ListLock = &this->m_ListLock;
  v7 = KeAcquireSpinLockRaiseToDpc(&this->m_ListLock);
  FxChildList::CopyAddress(this, AddressDescription, Entry->m_AddressDescription);
  KeReleaseSpinLock(p_m_ListLock, v7);
}
