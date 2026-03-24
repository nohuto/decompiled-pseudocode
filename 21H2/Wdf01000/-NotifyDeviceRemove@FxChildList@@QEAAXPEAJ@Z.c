/*
 * XREFs of ?NotifyDeviceRemove@FxChildList@@QEAAXPEAJ@Z @ 0x1C003BCD8
 * Callers:
 *     ?PnpEventRemoved@FxPkgPnp@@KA?AW4_WDF_DEVICE_PNP_STATE@@PEAV1@@Z @ 0x1C007AF20 (-PnpEventRemoved@FxPkgPnp@@KA-AW4_WDF_DEVICE_PNP_STATE@@PEAV1@@Z.c)
 * Callees:
 *     ?GetObjectHandleUnchecked@FxObject@@IEAAPEAXXZ @ 0x1C0003FA0 (-GetObjectHandleUnchecked@FxObject@@IEAAPEAXXZ.c)
 *     ?FxVerifierCheckIrqlLevel@@YAJPEAU_FX_DRIVER_GLOBALS@@E@Z @ 0x1C000CF7C (-FxVerifierCheckIrqlLevel@@YAJPEAU_FX_DRIVER_GLOBALS@@E@Z.c)
 *     ?ProcessModificationsLocked@FxChildList@@IEAAXPEAU_LIST_ENTRY@@@Z @ 0x1C000FC54 (-ProcessModificationsLocked@FxChildList@@IEAAXPEAU_LIST_ENTRY@@@Z.c)
 *     ?DrainFreeListHead@FxChildList@@IEAAXPEAU_LIST_ENTRY@@@Z @ 0x1C0010A58 (-DrainFreeListHead@FxChildList@@IEAAXPEAU_LIST_ENTRY@@@Z.c)
 *     WPP_IFR_SF_q @ 0x1C0013820 (WPP_IFR_SF_q.c)
 *     WPP_IFR_SF_qqq @ 0x1C0032C78 (WPP_IFR_SF_qqq.c)
 *     ?NotifyDeviceSurpriseRemove@FxChildList@@QEAAXXZ @ 0x1C003BEB0 (-NotifyDeviceSurpriseRemove@FxChildList@@QEAAXXZ.c)
 *     ?PnpProcessEvent@FxPkgPnp@@QEAAXW4FxPnpEvent@@E@Z @ 0x1C007BC58 (-PnpProcessEvent@FxPkgPnp@@QEAAXW4FxPnpEvent@@E@Z.c)
 */

void __fastcall FxChildList::NotifyDeviceRemove(FxChildList *this, int *ChildCount)
{
  const void *_a1; // rax
  _FX_DRIVER_GLOBALS *m_Globals; // rcx
  _LIST_ENTRY *v6; // rbx
  KIRQL v7; // r14
  _LIST_ENTRY *p_m_DescriptionListHead; // rsi
  _LIST_ENTRY *i; // rcx
  const void *_a2; // rax
  __int64 v11; // rdx
  _LIST_ENTRY *Flink; // rcx
  _LIST_ENTRY *Blink; // rax
  unsigned __int8 v14; // r8
  unsigned __int8 v15; // r8
  _LIST_ENTRY freeHead; // [rsp+40h] [rbp-28h] BYREF

  _a1 = (const void *)FxObject::GetObjectHandleUnchecked(this);
  WPP_IFR_SF_q(this->m_Globals, 4u, 0xCu, 0x32u, WPP_FxChildList_cpp_Traceguids, _a1);
  m_Globals = this->m_Globals;
  freeHead.Blink = &freeHead;
  v6 = 0LL;
  freeHead.Flink = &freeHead;
  FxVerifierCheckIrqlLevel(m_Globals, 0);
  FxChildList::NotifyDeviceSurpriseRemove(this);
  v7 = KeAcquireSpinLockRaiseToDpc(&this->m_ListLock);
  FxChildList::ProcessModificationsLocked(this, &freeHead);
  this->m_State = ListLockedForParentRemove;
  p_m_DescriptionListHead = &this->m_DescriptionListHead;
  while ( 1 )
  {
    for ( i = p_m_DescriptionListHead->Flink; i != p_m_DescriptionListHead; i = i->Flink )
    {
      v6 = i;
      if ( !BYTE1(i[5].Flink) )
        break;
    }
    if ( i == p_m_DescriptionListHead )
      break;
    _a2 = (const void *)FxObject::GetObjectHandleUnchecked((FxObject *)v6[4].Flink);
    WPP_IFR_SF_qqq(
      this->m_Globals,
      4u,
      0xCu,
      0x33u,
      WPP_FxChildList_cpp_Traceguids,
      v6,
      _a2,
      *(const void **)(v11 + 160));
    Flink = v6->Flink;
    if ( v6->Flink->Blink != v6 || (Blink = v6->Blink, Blink->Flink != v6) )
      __fastfail(3u);
    Blink->Flink = Flink;
    Flink->Blink = Blink;
    v6->Blink = v6;
    v6->Flink = v6;
    KeReleaseSpinLock(&this->m_ListLock, v7);
    BYTE3(v6[4].Flink[13].Blink) = 1;
    _InterlockedIncrement(ChildCount);
    FxPkgPnp::PnpProcessEvent((FxPkgPnp *)v6[4].Flink[40].Blink, PnpEventParentRemoved, v14);
    v7 = KeAcquireSpinLockRaiseToDpc(&this->m_ListLock);
  }
  this->m_State = ListUnlocked;
  FxChildList::ProcessModificationsLocked(this, &freeHead);
  KeReleaseSpinLock(&this->m_ListLock, v7);
  FxChildList::DrainFreeListHead(this, &freeHead, v15);
}
