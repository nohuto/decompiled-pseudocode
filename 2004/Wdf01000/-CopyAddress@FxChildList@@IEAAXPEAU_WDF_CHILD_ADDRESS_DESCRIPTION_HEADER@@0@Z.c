/*
 * XREFs of ?CopyAddress@FxChildList@@IEAAXPEAU_WDF_CHILD_ADDRESS_DESCRIPTION_HEADER@@0@Z @ 0x1C003ADF4
 * Callers:
 *     ?Add@FxChildList@@QEAAJPEAU_WDF_CHILD_IDENTIFICATION_DESCRIPTION_HEADER@@PEAU_WDF_CHILD_ADDRESS_DESCRIPTION_HEADER@@PEAK@Z @ 0x1C003A834 (-Add@FxChildList@@QEAAJPEAU_WDF_CHILD_IDENTIFICATION_DESCRIPTION_HEADER@@PEAU_WDF_CHILD_ADDRESS_.c)
 *     ?GetAddressDescription@FxChildList@@QEAAJPEAU_WDF_CHILD_IDENTIFICATION_DESCRIPTION_HEADER@@PEAU_WDF_CHILD_ADDRESS_DESCRIPTION_HEADER@@@Z @ 0x1C003B250 (-GetAddressDescription@FxChildList@@QEAAJPEAU_WDF_CHILD_IDENTIFICATION_DESCRIPTION_HEADER@@PEAU_.c)
 *     ?GetAddressDescriptionFromEntry@FxChildList@@QEAAXPEAUFxDeviceDescriptionEntry@@PEAU_WDF_CHILD_ADDRESS_DESCRIPTION_HEADER@@@Z @ 0x1C003B2F8 (-GetAddressDescriptionFromEntry@FxChildList@@QEAAXPEAUFxDeviceDescriptionEntry@@PEAU_WDF_CHILD_A.c)
 *     ?GetDeviceFromId@FxChildList@@QEAAPEAVFxDevice@@PEAU_WDF_CHILD_RETRIEVE_INFO@@@Z @ 0x1C003B374 (-GetDeviceFromId@FxChildList@@QEAAPEAVFxDevice@@PEAU_WDF_CHILD_RETRIEVE_INFO@@@Z.c)
 *     ?GetNextDevice@FxChildList@@QEAAJPEAPEAUWDFDEVICE__@@PEAU_WDF_CHILD_LIST_ITERATOR@@PEAU_WDF_CHILD_RETRIEVE_INFO@@@Z @ 0x1C003B44C (-GetNextDevice@FxChildList@@QEAAJPEAPEAUWDFDEVICE__@@PEAU_WDF_CHILD_LIST_ITERATOR@@PEAU_WDF_CHIL.c)
 *     ?UpdateAddressDescriptionFromEntry@FxChildList@@QEAAXPEAUFxDeviceDescriptionEntry@@PEAU_WDF_CHILD_ADDRESS_DESCRIPTION_HEADER@@@Z @ 0x1C003C2CC (-UpdateAddressDescriptionFromEntry@FxChildList@@QEAAXPEAUFxDeviceDescriptionEntry@@PEAU_WDF_CHIL.c)
 * Callees:
 *     ?GetObjectHandleUnchecked@FxObject@@IEAAPEAXXZ @ 0x1C0003FA0 (-GetObjectHandleUnchecked@FxObject@@IEAAPEAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C001D310 (_guard_dispatch_icall_nop.c)
 *     memmove @ 0x1C001D440 (memmove.c)
 */

void __fastcall FxChildList::CopyAddress(
        FxChildList *this,
        _WDF_CHILD_ADDRESS_DESCRIPTION_HEADER *Dest,
        _WDF_CHILD_ADDRESS_DESCRIPTION_HEADER *Source)
{
  unsigned __int64 ObjectHandleUnchecked; // rax
  __int64 v4; // rdx
  __int64 v5; // r9
  void (__fastcall *v6)(unsigned __int64, __int64, __int64); // r10

  if ( Source )
  {
    if ( this->m_EvtAddressDescriptionCopy )
    {
      ObjectHandleUnchecked = FxObject::GetObjectHandleUnchecked(this);
      v6(ObjectHandleUnchecked, v5, v4);
    }
    else
    {
      memmove(Dest, Source, this->m_AddressDescriptionSize);
    }
  }
}
