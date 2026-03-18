/*
 * XREFs of imp_WdfCollectionRemove @ 0x1C0070E10
 * Callers:
 *     <none>
 * Callees:
 *     ?Unlock@FxNonPagedObject@@QEAAXE@Z @ 0x1C0004FD4 (-Unlock@FxNonPagedObject@@QEAAXE@Z.c)
 *     ?Lock@FxNonPagedObject@@QEAAXPEAE@Z @ 0x1C0005028 (-Lock@FxNonPagedObject@@QEAAXPEAE@Z.c)
 *     ?FxObjectHandleGetPtr@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAXGPEAPEAX@Z @ 0x1C0005610 (-FxObjectHandleGetPtr@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAXGPEAPEAX@Z.c)
 *     ?CleanupEntry@FxCollectionInternal@@QEAAXPEAVFxCollectionEntry@@@Z @ 0x1C0014AF8 (-CleanupEntry@FxCollectionInternal@@QEAAXPEAVFxCollectionEntry@@@Z.c)
 *     WPP_IFR_SF_qqd @ 0x1C0030604 (WPP_IFR_SF_qqd.c)
 *     _guard_dispatch_icall_nop @ 0x1C0036BA0 (_guard_dispatch_icall_nop.c)
 *     ?FxVerifierDbgBreakPoint@@YAXPEAU_FX_DRIVER_GLOBALS@@@Z @ 0x1C0052DF0 (-FxVerifierDbgBreakPoint@@YAXPEAU_FX_DRIVER_GLOBALS@@@Z.c)
 */

void __fastcall imp_WdfCollectionRemove(_WDF_DRIVER_GLOBALS *DriverGlobals, WDFCOLLECTION__ *Collection, void *Item)
{
  _FX_DRIVER_GLOBALS *m_Globals; // rdi
  unsigned __int8 v6; // r8
  unsigned __int8 v7; // r8
  FxCollection *v8; // rcx
  _LIST_ENTRY *Flink; // rax
  int _a3; // ebx
  FxObject *pObject; // [rsp+40h] [rbp-10h] BYREF
  unsigned __int8 irql; // [rsp+70h] [rbp+20h] BYREF
  FxCollection *pCollection; // [rsp+88h] [rbp+38h] BYREF

  pCollection = 0LL;
  pObject = 0LL;
  irql = 0;
  FxObjectHandleGetPtr(
    (_FX_DRIVER_GLOBALS *)&DriverGlobals[-8],
    (unsigned __int64)Collection,
    0x100Eu,
    (void **)&pCollection);
  m_Globals = pCollection->m_Globals;
  FxObjectHandleGetPtr(m_Globals, (unsigned __int64)Item, 0x1000u, (void **)&pObject);
  FxNonPagedObject::Lock(pCollection, &irql, v6);
  v8 = pCollection;
  Flink = pCollection->m_ListHead.Flink;
  if ( Flink == &pCollection->m_ListHead )
    goto LABEL_5;
  v7 = (unsigned __int8)pObject;
  while ( (FxObject *)Flink[-1].Blink != pObject )
  {
    Flink = Flink->Flink;
    if ( Flink == &pCollection->m_ListHead )
      goto LABEL_5;
  }
  if ( Flink == (_LIST_ENTRY *)8 )
  {
LABEL_5:
    pObject = 0LL;
    _a3 = -1073741275;
  }
  else
  {
    FxCollectionInternal::CleanupEntry(&pCollection->FxCollectionInternal, (FX_POOL_TRACKER *)&Flink[-1].Blink);
    v8 = pCollection;
    _a3 = 0;
  }
  FxNonPagedObject::Unlock(v8, irql, v7);
  if ( pObject )
    pObject->Release(
      pObject,
      &pCollection->FxCollectionInternal,
      127,
      "minkernel\\wdf\\framework\\shared\\inc\\private\\common\\FxCollection.hpp");
  if ( _a3 < 0 )
  {
    WPP_IFR_SF_qqd(m_Globals, 2u, 2u, 0xDu, WPP_FxCollectionApi_cpp_Traceguids, Item, Collection, _a3);
    FxVerifierDbgBreakPoint(m_Globals);
  }
}
