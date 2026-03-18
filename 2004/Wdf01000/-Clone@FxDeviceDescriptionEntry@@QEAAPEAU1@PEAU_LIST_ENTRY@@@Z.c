/*
 * XREFs of ?Clone@FxDeviceDescriptionEntry@@QEAAPEAU1@PEAU_LIST_ENTRY@@@Z @ 0x1C003AB30
 * Callers:
 *     ?CloneEntryLocked@FxChildList@@IEAAEPEAU_LIST_ENTRY@@PEAUFxDeviceDescriptionEntry@@E@Z @ 0x1C003ABFC (-CloneEntryLocked@FxChildList@@IEAAEPEAU_LIST_ENTRY@@PEAUFxDeviceDescriptionEntry@@E@Z.c)
 * Callees:
 *     ??0FxDeviceDescriptionEntry@@QEAA@PEAVFxChildList@@KK@Z @ 0x1C003A750 (--0FxDeviceDescriptionEntry@@QEAA@PEAVFxChildList@@KK@Z.c)
 *     ??2FxDeviceDescriptionEntry@@SAPEAX_KPEAU_FX_DRIVER_GLOBALS@@0@Z @ 0x1C003A7D0 (--2FxDeviceDescriptionEntry@@SAPEAX_KPEAU_FX_DRIVER_GLOBALS@@0@Z.c)
 *     ?DuplicateAddress@FxChildList@@IEAAJPEAU_WDF_CHILD_ADDRESS_DESCRIPTION_HEADER@@0@Z @ 0x1C003B150 (-DuplicateAddress@FxChildList@@IEAAJPEAU_WDF_CHILD_ADDRESS_DESCRIPTION_HEADER@@0@Z.c)
 *     ?DuplicateId@FxChildList@@IEAAJPEAU_WDF_CHILD_IDENTIFICATION_DESCRIPTION_HEADER@@0@Z @ 0x1C003B1A0 (-DuplicateId@FxChildList@@IEAAJPEAU_WDF_CHILD_IDENTIFICATION_DESCRIPTION_HEADER@@0@Z.c)
 */

FxDeviceDescriptionEntry *__fastcall FxDeviceDescriptionEntry::Clone(
        FxDeviceDescriptionEntry *this,
        _LIST_ENTRY *FreeListHead)
{
  FX_POOL **v4; // rax
  __int64 v5; // rax
  __int64 v6; // rbx
  int v8; // eax
  FxChildList *m_DeviceList; // rcx
  _LIST_ENTRY *Blink; // rax

  v4 = FxDeviceDescriptionEntry::operator new(
         (unsigned __int64)this,
         this->m_DeviceList->m_Globals,
         this->m_DeviceList->m_TotalDescriptionSize);
  if ( v4 )
  {
    FxDeviceDescriptionEntry::FxDeviceDescriptionEntry(
      (FxDeviceDescriptionEntry *)v4,
      this->m_DeviceList,
      this->m_DeviceList->m_IdentificationDescriptionSize,
      this->m_DeviceList->m_AddressDescriptionSize);
    v6 = v5;
  }
  else
  {
    v6 = 0LL;
  }
  if ( !v6 )
    return 0LL;
  v8 = FxChildList::DuplicateId(
         this->m_DeviceList,
         *(_WDF_CHILD_IDENTIFICATION_DESCRIPTION_HEADER **)(v6 + 24),
         this->m_IdentificationDescription);
  if ( v8 < 0 )
    goto LABEL_11;
  m_DeviceList = this->m_DeviceList;
  if ( m_DeviceList->m_AddressDescriptionSize )
    v8 = FxChildList::DuplicateAddress(
           m_DeviceList,
           *(_WDF_CHILD_ADDRESS_DESCRIPTION_HEADER **)(v6 + 32),
           this->m_AddressDescription);
  if ( v8 < 0 )
  {
LABEL_11:
    Blink = FreeListHead->Blink;
    if ( Blink->Flink != FreeListHead )
      __fastfail(3u);
    *(_QWORD *)v6 = FreeListHead;
    *(_QWORD *)(v6 + 8) = Blink;
    Blink->Flink = (_LIST_ENTRY *)v6;
    FreeListHead->Blink = (_LIST_ENTRY *)v6;
    return 0LL;
  }
  else
  {
    *(_BYTE *)(v6 + 80) = 1;
  }
  return (FxDeviceDescriptionEntry *)v6;
}
