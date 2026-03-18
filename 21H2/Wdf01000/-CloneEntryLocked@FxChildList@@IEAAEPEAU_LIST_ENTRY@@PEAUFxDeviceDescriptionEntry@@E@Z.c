/*
 * XREFs of ?CloneEntryLocked@FxChildList@@IEAAEPEAU_LIST_ENTRY@@PEAUFxDeviceDescriptionEntry@@E@Z @ 0x1C005BA9C
 * Callers:
 *     ?ProcessBusRelations@FxChildList@@QEAAJPEAPEAU_DEVICE_RELATIONS@@@Z @ 0x1C0017820 (-ProcessBusRelations@FxChildList@@QEAAJPEAPEAU_DEVICE_RELATIONS@@@Z.c)
 *     ?ProcessModificationsLocked@FxChildList@@IEAAXPEAU_LIST_ENTRY@@@Z @ 0x1C0018288 (-ProcessModificationsLocked@FxChildList@@IEAAXPEAU_LIST_ENTRY@@@Z.c)
 * Callees:
 *     ?GetObjectHandleUnchecked@FxObject@@IEAAPEAXXZ @ 0x1C0002928 (-GetObjectHandleUnchecked@FxObject@@IEAAPEAXXZ.c)
 *     WPP_IFR_SF_qqq @ 0x1C0030348 (WPP_IFR_SF_qqq.c)
 *     WPP_IFR_SF_qqd @ 0x1C0030604 (WPP_IFR_SF_qqd.c)
 *     _guard_dispatch_icall_nop @ 0x1C0036BA0 (_guard_dispatch_icall_nop.c)
 *     ?Clone@FxDeviceDescriptionEntry@@QEAAPEAU1@PEAU_LIST_ENTRY@@@Z @ 0x1C005B98C (-Clone@FxDeviceDescriptionEntry@@QEAAPEAU1@PEAU_LIST_ENTRY@@@Z.c)
 */

char __fastcall FxChildList::CloneEntryLocked(
        FxChildList *this,
        _LIST_ENTRY *FreeListHead,
        FxDeviceDescriptionEntry *Entry,
        unsigned __int8 FromQDR)
{
  int _a3; // r15d
  const void *_a1; // rax
  __int64 v9; // r10
  const _GUID *traceGuid; // r8
  _FX_DRIVER_GLOBALS *v11; // r11
  char v12; // r14
  FxDeviceDescriptionEntry *v13; // rbx
  unsigned __int64 ObjectHandleUnchecked; // rax
  unsigned __int8 (__fastcall *v15)(unsigned __int64); // r10
  _LIST_ENTRY *Blink; // rax
  const void *_a2; // rax
  __int64 v18; // r10
  _FX_DRIVER_GLOBALS *v19; // r11
  _LIST_ENTRY *v20; // rcx

  _a3 = FromQDR;
  if ( this->m_Globals->FxVerboseOn )
  {
    _a1 = (const void *)FxObject::GetObjectHandleUnchecked(Entry->m_Pdo);
    WPP_IFR_SF_qqd(v11, 5u, 0xCu, 0x16u, traceGuid, _a1, *(const void **)(v9 + 144), _a3);
  }
  v12 = 0;
  v13 = FxDeviceDescriptionEntry::Clone(Entry, FreeListHead);
  if ( v13 )
  {
    if ( this->m_EvtChildListDeviceReenumerated )
    {
      FxObject::GetObjectHandleUnchecked(Entry->m_Pdo);
      ObjectHandleUnchecked = FxObject::GetObjectHandleUnchecked(this);
      if ( !v15(ObjectHandleUnchecked) )
      {
        Blink = FreeListHead->Blink;
        if ( Blink->Flink == FreeListHead )
        {
          v13->m_DescriptionLink.Flink = FreeListHead;
          v13->m_DescriptionLink.Blink = Blink;
          Blink->Flink = (_LIST_ENTRY *)v13;
          FreeListHead->Blink = (_LIST_ENTRY *)v13;
          goto LABEL_14;
        }
LABEL_11:
        __fastfail(3u);
      }
    }
    if ( this->m_Globals->FxVerboseOn )
    {
      _a2 = (const void *)FxObject::GetObjectHandleUnchecked(Entry->m_Pdo);
      WPP_IFR_SF_qqq(v19, 5u, 0xCu, 0x17u, WPP_FxChildList_cpp_Traceguids, v13, _a2, *(const void **)(v18 + 144));
    }
    v13->m_ModificationState = ModificationUnspecified;
    v13->m_DescriptionState = DescriptionPresentNeedsInstantiation;
    v20 = this->m_DescriptionListHead.Blink;
    if ( v20->Flink != &this->m_DescriptionListHead )
      goto LABEL_11;
    v13->m_DescriptionLink.Flink = &this->m_DescriptionListHead;
    v13->m_DescriptionLink.Blink = v20;
    v20->Flink = (_LIST_ENTRY *)v13;
    this->m_DescriptionListHead.Blink = (_LIST_ENTRY *)v13;
    if ( !(_BYTE)_a3 )
    {
      Entry->m_DescriptionState = DescriptionNotPresent;
      v12 = 1;
    }
  }
LABEL_14:
  Entry->m_ModificationState = ModificationUnspecified;
  return v12;
}
