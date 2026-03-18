/*
 * XREFs of ?DuplicateAddress@FxChildList@@IEAAJPEAU_WDF_CHILD_ADDRESS_DESCRIPTION_HEADER@@0@Z @ 0x1C003B150
 * Callers:
 *     ?Add@FxChildList@@QEAAJPEAU_WDF_CHILD_IDENTIFICATION_DESCRIPTION_HEADER@@PEAU_WDF_CHILD_ADDRESS_DESCRIPTION_HEADER@@PEAK@Z @ 0x1C003A834 (-Add@FxChildList@@QEAAJPEAU_WDF_CHILD_IDENTIFICATION_DESCRIPTION_HEADER@@PEAU_WDF_CHILD_ADDRESS_.c)
 *     ?Clone@FxDeviceDescriptionEntry@@QEAAPEAU1@PEAU_LIST_ENTRY@@@Z @ 0x1C003AB30 (-Clone@FxDeviceDescriptionEntry@@QEAAPEAU1@PEAU_LIST_ENTRY@@@Z.c)
 * Callees:
 *     ?GetObjectHandleUnchecked@FxObject@@IEAAPEAXXZ @ 0x1C0003FA0 (-GetObjectHandleUnchecked@FxObject@@IEAAPEAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C001D310 (_guard_dispatch_icall_nop.c)
 *     memmove @ 0x1C001D440 (memmove.c)
 */

__int64 __fastcall FxChildList::DuplicateAddress(
        FxChildList *this,
        _WDF_CHILD_ADDRESS_DESCRIPTION_HEADER *Dest,
        _WDF_CHILD_ADDRESS_DESCRIPTION_HEADER *Source)
{
  unsigned __int64 ObjectHandleUnchecked; // rax
  __int64 v4; // rdx
  __int64 v5; // r9
  __int64 (__fastcall *v6)(unsigned __int64, __int64, __int64); // r11

  if ( this->m_EvtAddressDescriptionDuplicate )
  {
    ObjectHandleUnchecked = FxObject::GetObjectHandleUnchecked(this);
    return v6(ObjectHandleUnchecked, v5, v4);
  }
  else
  {
    memmove(Dest, Source, this->m_AddressDescriptionSize);
    return 0LL;
  }
}
