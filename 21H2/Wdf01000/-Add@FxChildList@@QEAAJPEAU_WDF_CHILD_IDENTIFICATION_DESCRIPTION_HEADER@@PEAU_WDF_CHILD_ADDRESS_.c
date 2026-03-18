/*
 * XREFs of ?Add@FxChildList@@QEAAJPEAU_WDF_CHILD_IDENTIFICATION_DESCRIPTION_HEADER@@PEAU_WDF_CHILD_ADDRESS_DESCRIPTION_HEADER@@PEAK@Z @ 0x1C001207C
 * Callers:
 *     imp_WdfChildListAddOrUpdateChildDescriptionAsPresent @ 0x1C0011FB0 (imp_WdfChildListAddOrUpdateChildDescriptionAsPresent.c)
 *     imp_WdfFdoAddStaticChild @ 0x1C00333D0 (imp_WdfFdoAddStaticChild.c)
 * Callees:
 *     ?FxPoolAllocator@@YAPEAXPEAU_FX_DRIVER_GLOBALS@@PEAUFX_POOL@@UFxPoolTypeOrPoolFlags@@_KKPEAX@Z @ 0x1C0006DE0 (-FxPoolAllocator@@YAPEAXPEAU_FX_DRIVER_GLOBALS@@PEAUFX_POOL@@UFxPoolTypeOrPoolFlags@@_KKPEAX@Z.c)
 *     ?SearchBackwardsForMatchingDescriptionLocked@FxChildList@@IEAAPEAUFxDeviceDescriptionEntry@@PEAU_WDF_CHILD_IDENTIFICATION_DESCRIPTION_HEADER@@@Z @ 0x1C00122DC (-SearchBackwardsForMatchingDescriptionLocked@FxChildList@@IEAAPEAUFxDeviceDescriptionEntry@@PEAU.c)
 *     ?SearchBackwardsForMatchingModificationLocked@FxChildList@@IEAAPEAUFxDeviceDescriptionEntry@@PEAU_WDF_CHILD_IDENTIFICATION_DESCRIPTION_HEADER@@@Z @ 0x1C0012348 (-SearchBackwardsForMatchingModificationLocked@FxChildList@@IEAAPEAUFxDeviceDescriptionEntry@@PEA.c)
 *     ?DrainFreeListHead@FxChildList@@IEAAXPEAU_LIST_ENTRY@@@Z @ 0x1C001812C (-DrainFreeListHead@FxChildList@@IEAAXPEAU_LIST_ENTRY@@@Z.c)
 *     ?ProcessModificationsLocked@FxChildList@@IEAAXPEAU_LIST_ENTRY@@@Z @ 0x1C0018288 (-ProcessModificationsLocked@FxChildList@@IEAAXPEAU_LIST_ENTRY@@@Z.c)
 *     ?MarkNoDeleteDDI@FxObject@@QEAAXW4FxObjectLockState@@@Z @ 0x1C0026218 (-MarkNoDeleteDDI@FxObject@@QEAAXW4FxObjectLockState@@@Z.c)
 *     ??0FxDeviceDescriptionEntry@@QEAA@PEAVFxChildList@@KK@Z @ 0x1C0032E78 (--0FxDeviceDescriptionEntry@@QEAA@PEAVFxChildList@@KK@Z.c)
 *     ?DuplicateId@FxChildList@@IEAAJPEAU_WDF_CHILD_IDENTIFICATION_DESCRIPTION_HEADER@@0@Z @ 0x1C0033A4C (-DuplicateId@FxChildList@@IEAAJPEAU_WDF_CHILD_IDENTIFICATION_DESCRIPTION_HEADER@@0@Z.c)
 *     ?CopyAddress@FxChildList@@IEAAXPEAU_WDF_CHILD_ADDRESS_DESCRIPTION_HEADER@@0@Z @ 0x1C005BC34 (-CopyAddress@FxChildList@@IEAAXPEAU_WDF_CHILD_ADDRESS_DESCRIPTION_HEADER@@0@Z.c)
 *     ?DuplicateAddress@FxChildList@@IEAAJPEAU_WDF_CHILD_ADDRESS_DESCRIPTION_HEADER@@0@Z @ 0x1C005BD10 (-DuplicateAddress@FxChildList@@IEAAJPEAU_WDF_CHILD_ADDRESS_DESCRIPTION_HEADER@@0@Z.c)
 */

__int64 __fastcall FxChildList::Add(
        FxChildList *this,
        _WDF_CHILD_IDENTIFICATION_DESCRIPTION_HEADER *IdentificationDescription,
        _WDF_CHILD_ADDRESS_DESCRIPTION_HEADER *AddressDescription,
        unsigned int *a4)
{
  unsigned __int64 *p_m_ListLock; // r13
  int v8; // r14d
  FxDeviceDescriptionEntry *v9; // rax
  FxDeviceDescriptionEntry *v10; // rbx
  FxChildListModificationState m_ModificationState; // eax
  FxDeviceDescriptionEntry *v12; // rax
  _FX_DRIVER_GLOBALS *m_Globals; // rcx
  unsigned __int64 m_TotalDescriptionSize; // r9
  void *v15; // rax
  ULONG Tag; // r8d
  FX_POOL **v17; // rax
  __int64 v18; // rax
  __int64 v19; // rsi
  _LIST_ENTRY *v20; // rdx
  _LIST_ENTRY *v21; // rax
  __int64 v22; // rbx
  _LIST_ENTRY *Blink; // rax
  _LIST_ENTRY freeHead; // [rsp+30h] [rbp-20h] BYREF
  __m128i v26; // [rsp+40h] [rbp-10h] BYREF
  void *retaddr; // [rsp+78h] [rbp+28h]
  KIRQL NewIrql; // [rsp+98h] [rbp+48h]

  freeHead.Blink = &freeHead;
  p_m_ListLock = &this->m_ListLock;
  freeHead.Flink = &freeHead;
  v8 = -1073741823;
  NewIrql = KeAcquireSpinLockRaiseToDpc(&this->m_ListLock);
  v9 = FxChildList::SearchBackwardsForMatchingModificationLocked(this, IdentificationDescription);
  v10 = v9;
  if ( v9 )
  {
    m_ModificationState = v9->m_ModificationState;
    if ( m_ModificationState != ModificationInsert )
    {
      if ( (unsigned int)(m_ModificationState - 2) > 1 )
        goto LABEL_24;
LABEL_10:
      m_Globals = this->m_Globals;
      m_TotalDescriptionSize = this->m_TotalDescriptionSize;
      v15 = retaddr;
      v26 = 0LL;
      Tag = m_Globals->Tag;
      v26.m128i_i64[1] = 64LL;
      if ( !m_Globals->FxPoolTrackingOn )
        v15 = 0LL;
      v17 = FxPoolAllocator(m_Globals, &m_Globals->FxPoolFrameworks, &v26, m_TotalDescriptionSize, Tag, v15);
      if ( !v17
        || (FxDeviceDescriptionEntry::FxDeviceDescriptionEntry(
              (FxDeviceDescriptionEntry *)v17,
              this,
              this->m_IdentificationDescriptionSize,
              this->m_AddressDescriptionSize),
            (v19 = v18) == 0) )
      {
        v8 = -1073741670;
        goto LABEL_24;
      }
      v8 = FxChildList::DuplicateId(
             this,
             *(_WDF_CHILD_IDENTIFICATION_DESCRIPTION_HEADER **)(v18 + 24),
             IdentificationDescription);
      if ( v8 < 0
        || this->m_AddressDescriptionSize
        && (v8 = FxChildList::DuplicateAddress(
                   this,
                   *(_WDF_CHILD_ADDRESS_DESCRIPTION_HEADER **)(v19 + 32),
                   AddressDescription),
            v8 < 0) )
      {
        Blink = freeHead.Blink;
        if ( freeHead.Blink->Flink == &freeHead )
        {
          *(_QWORD *)(v19 + 8) = freeHead.Blink;
          *(_QWORD *)v19 = &freeHead;
          Blink->Flink = (_LIST_ENTRY *)v19;
          freeHead.Blink = (_LIST_ENTRY *)v19;
          goto LABEL_24;
        }
      }
      else
      {
        *(_BYTE *)(v19 + 80) = 1;
        v20 = this->m_ModificationListHead.Blink;
        v21 = (_LIST_ENTRY *)(v19 + 40);
        if ( v20->Flink == &this->m_ModificationListHead )
        {
          v21->Flink = &this->m_ModificationListHead;
          *(_QWORD *)(v19 + 48) = v20;
          v20->Flink = v21;
          this->m_ModificationListHead.Blink = v21;
          if ( this->m_StaticList )
          {
            v22 = *(_QWORD *)(*(_QWORD *)(v19 + 24) + 8LL);
            FxObject::MarkNoDeleteDDI((FxObject *)v22, ObjectLock);
            *(_QWORD *)(*(_QWORD *)(v22 + 648) + 1704LL) = v19;
            *(_BYTE *)(*(_QWORD *)(v22 + 648) + 1778LL) = 1;
          }
          goto LABEL_24;
        }
      }
      __fastfail(3u);
    }
  }
  else
  {
    v12 = FxChildList::SearchBackwardsForMatchingDescriptionLocked(this, IdentificationDescription);
    v10 = v12;
    if ( !v12 || (unsigned int)(v12->m_DescriptionState - 1) > 1 )
      goto LABEL_10;
  }
  if ( this->m_AddressDescriptionSize )
    FxChildList::CopyAddress(this, v10->m_AddressDescription, AddressDescription);
  v10->m_FoundInLastScan = 1;
  v8 = 0x40000000;
LABEL_24:
  FxChildList::ProcessModificationsLocked(this, &freeHead);
  KeReleaseSpinLock(p_m_ListLock, NewIrql);
  FxChildList::DrainFreeListHead(this, &freeHead);
  return (unsigned int)v8;
}
