/*
 * XREFs of ?RemoveAndDelete@FxResourceCollection@@QEAAEK@Z @ 0x1C0060D30
 * Callers:
 *     imp_WdfCmResourceListRemove @ 0x1C005BCF0 (imp_WdfCmResourceListRemove.c)
 *     imp_WdfIoResourceListRemove @ 0x1C005C120 (imp_WdfIoResourceListRemove.c)
 *     imp_WdfIoResourceRequirementsListRemove @ 0x1C005C560 (imp_WdfIoResourceRequirementsListRemove.c)
 * Callees:
 *     ?GetObjectHandleUnchecked@FxObject@@IEAAPEAXXZ @ 0x1C0003FA0 (-GetObjectHandleUnchecked@FxObject@@IEAAPEAXXZ.c)
 *     WPP_IFR_SF_qL @ 0x1C000B0E4 (WPP_IFR_SF_qL.c)
 *     ?Unlock@FxNonPagedObject@@QEAAXE@Z @ 0x1C000C8E0 (-Unlock@FxNonPagedObject@@QEAAXE@Z.c)
 *     ?Lock@FxNonPagedObject@@QEAAXPEAE@Z @ 0x1C000C960 (-Lock@FxNonPagedObject@@QEAAXPEAE@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C001CA60 (_guard_dispatch_icall_nop.c)
 *     ?FxVerifierDbgBreakPoint@@YAXPEAU_FX_DRIVER_GLOBALS@@@Z @ 0x1C002DD0C (-FxVerifierDbgBreakPoint@@YAXPEAU_FX_DRIVER_GLOBALS@@@Z.c)
 *     ?FindEntry@FxCollectionInternal@@QEAAPEAVFxCollectionEntry@@K@Z @ 0x1C0061004 (-FindEntry@FxCollectionInternal@@QEAAPEAVFxCollectionEntry@@K@Z.c)
 *     ?RemoveEntry@FxCollectionInternal@@QEAAJPEAVFxCollectionEntry@@@Z @ 0x1C0061064 (-RemoveEntry@FxCollectionInternal@@QEAAJPEAVFxCollectionEntry@@@Z.c)
 */

unsigned __int8 __fastcall FxResourceCollection::RemoveAndDelete(
        FxResourceCollection *this,
        unsigned int Index,
        unsigned __int8 a3)
{
  const void *_a1; // rax
  unsigned __int8 v6; // dl
  FxObject *m_Object; // rdi
  FxCollectionEntry *Entry; // rax
  unsigned __int8 v10; // r8
  unsigned __int8 irql; // [rsp+50h] [rbp+8h] BYREF

  irql = 0;
  if ( (this->m_AccessFlags & 2) == 0 )
  {
    _a1 = (const void *)FxObject::GetObjectHandleUnchecked(this);
    WPP_IFR_SF_qL(this->m_Globals, v6, 0xCu, 0xAu, WPP_FxResourceCollection_cpp_Traceguids, _a1, Index);
    FxVerifierDbgBreakPoint(this->m_Globals);
    return 0;
  }
  m_Object = 0LL;
  FxNonPagedObject::Lock(this, &irql, a3);
  Entry = FxCollectionInternal::FindEntry(&this->FxCollectionInternal, Index);
  if ( Entry )
  {
    this->m_Changed = 1;
    m_Object = Entry->m_Object;
    FxCollectionInternal::RemoveEntry(&this->FxCollectionInternal, Entry);
  }
  FxNonPagedObject::Unlock(this, irql, v10);
  if ( !m_Object )
    return 0;
  m_Object->DeleteObject(m_Object);
  return 1;
}
