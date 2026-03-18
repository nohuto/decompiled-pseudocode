/*
 * XREFs of ?RemoveAndDelete@FxResourceCollection@@QEAAEK@Z @ 0x1C0034A84
 * Callers:
 *     imp_WdfIoResourceListRemove @ 0x1C0034A10 (imp_WdfIoResourceListRemove.c)
 *     imp_WdfCmResourceListRemove @ 0x1C006F670 (imp_WdfCmResourceListRemove.c)
 *     imp_WdfIoResourceRequirementsListRemove @ 0x1C006FB50 (imp_WdfIoResourceRequirementsListRemove.c)
 * Callees:
 *     ?GetObjectHandleUnchecked@FxObject@@IEAAPEAXXZ @ 0x1C0002928 (-GetObjectHandleUnchecked@FxObject@@IEAAPEAXXZ.c)
 *     ?Unlock@FxNonPagedObject@@QEAAXE@Z @ 0x1C0004FD4 (-Unlock@FxNonPagedObject@@QEAAXE@Z.c)
 *     ?Lock@FxNonPagedObject@@QEAAXPEAE@Z @ 0x1C0005028 (-Lock@FxNonPagedObject@@QEAAXPEAE@Z.c)
 *     WPP_IFR_SF_qL @ 0x1C0013680 (WPP_IFR_SF_qL.c)
 *     ?FindEntry@FxCollectionInternal@@QEAAPEAVFxCollectionEntry@@K@Z @ 0x1C0014B44 (-FindEntry@FxCollectionInternal@@QEAAPEAVFxCollectionEntry@@K@Z.c)
 *     ?RemoveEntry@FxCollectionInternal@@QEAAJPEAVFxCollectionEntry@@@Z @ 0x1C0021CB4 (-RemoveEntry@FxCollectionInternal@@QEAAJPEAVFxCollectionEntry@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C0036BA0 (_guard_dispatch_icall_nop.c)
 *     ?FxVerifierDbgBreakPoint@@YAXPEAU_FX_DRIVER_GLOBALS@@@Z @ 0x1C0052DF0 (-FxVerifierDbgBreakPoint@@YAXPEAU_FX_DRIVER_GLOBALS@@@Z.c)
 */

unsigned __int8 __fastcall FxResourceCollection::RemoveAndDelete(
        FxResourceCollection *this,
        unsigned int Index,
        unsigned __int8 a3)
{
  _LIST_ENTRY *Flink; // rdi
  FX_POOL_TRACKER *Entry; // rax
  unsigned __int8 v7; // r8
  const void *_a1; // rax
  unsigned __int8 v10; // dl
  unsigned __int8 irql; // [rsp+50h] [rbp+8h] BYREF

  irql = 0;
  if ( (this->m_AccessFlags & 2) != 0 )
  {
    Flink = 0LL;
    FxNonPagedObject::Lock(this, &irql, a3);
    Entry = (FX_POOL_TRACKER *)FxCollectionInternal::FindEntry(&this->FxCollectionInternal, Index);
    if ( Entry )
    {
      this->m_Changed = 1;
      Flink = Entry->Link.Flink;
      FxCollectionInternal::RemoveEntry(&this->FxCollectionInternal, Entry);
    }
    FxNonPagedObject::Unlock(this, irql, v7);
    if ( Flink )
    {
      ((void (__fastcall *)(_LIST_ENTRY *))Flink->Flink[3].Flink)(Flink);
      return 1;
    }
  }
  else
  {
    _a1 = (const void *)FxObject::GetObjectHandleUnchecked(this);
    WPP_IFR_SF_qL(this->m_Globals, v10, 0xCu, 0xAu, WPP_FxResourceCollection_cpp_Traceguids, _a1, Index);
    FxVerifierDbgBreakPoint(this->m_Globals);
  }
  return 0;
}
