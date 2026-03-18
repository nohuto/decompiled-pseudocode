/*
 * XREFs of imp_WdfCollectionRemove @ 0x1C005E8E0
 * Callers:
 *     <none>
 * Callees:
 *     ?FxObjectHandleGetPtr@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAXGPEAPEAX@Z @ 0x1C000BE90 (-FxObjectHandleGetPtr@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAXGPEAPEAX@Z.c)
 *     ?Unlock@FxNonPagedObject@@QEAAXE@Z @ 0x1C000C8E0 (-Unlock@FxNonPagedObject@@QEAAXE@Z.c)
 *     ?Lock@FxNonPagedObject@@QEAAXPEAE@Z @ 0x1C000C960 (-Lock@FxNonPagedObject@@QEAAXPEAE@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C001CA60 (_guard_dispatch_icall_nop.c)
 *     ?FxVerifierDbgBreakPoint@@YAXPEAU_FX_DRIVER_GLOBALS@@@Z @ 0x1C002DD0C (-FxVerifierDbgBreakPoint@@YAXPEAU_FX_DRIVER_GLOBALS@@@Z.c)
 *     WPP_IFR_SF_qid @ 0x1C002F42C (WPP_IFR_SF_qid.c)
 *     ?CleanupEntry@FxCollectionInternal@@QEAAXPEAVFxCollectionEntry@@@Z @ 0x1C0060F84 (-CleanupEntry@FxCollectionInternal@@QEAAXPEAVFxCollectionEntry@@@Z.c)
 */

void __fastcall imp_WdfCollectionRemove(_WDF_DRIVER_GLOBALS *DriverGlobals, WDFCOLLECTION__ *Collection, void *Item)
{
  _FX_DRIVER_GLOBALS *m_Globals; // rdi
  unsigned __int8 v6; // r8
  unsigned __int8 v7; // r8
  FxCollection *v8; // rcx
  FxCollection *Flink; // rax
  FxCollectionEntry *p_Blink; // rdx
  int _a3; // ebx
  FxObject *pObject; // [rsp+40h] [rbp-10h] BYREF
  unsigned __int8 irql; // [rsp+70h] [rbp+20h] BYREF
  FxCollection *pCollection; // [rsp+88h] [rbp+38h] BYREF

  pCollection = 0LL;
  pObject = 0LL;
  irql = 0;
  FxObjectHandleGetPtr(
    (_FX_DRIVER_GLOBALS *)DriverGlobals[-8].DriverName,
    (unsigned __int64)Collection,
    0x100Eu,
    (void **)&pCollection);
  m_Globals = pCollection->m_Globals;
  FxObjectHandleGetPtr(m_Globals, (unsigned __int64)Item, 0x1000u, (void **)&pObject);
  FxNonPagedObject::Lock(pCollection, &irql, v6);
  v8 = pCollection;
  Flink = (FxCollection *)pCollection->m_ListHead.Flink;
  if ( Flink == (FxCollection *)&pCollection->m_ListHead )
  {
LABEL_5:
    p_Blink = 0LL;
  }
  else
  {
    v7 = (unsigned __int8)pObject;
    while ( 1 )
    {
      p_Blink = (FxCollectionEntry *)&Flink[-1].m_ListHead.Blink;
      if ( (FxObject *)Flink[-1].m_ListHead.Blink == pObject )
        break;
      Flink = (FxCollection *)Flink->__vftable;
      if ( Flink == (FxCollection *)&pCollection->m_ListHead )
        goto LABEL_5;
    }
  }
  if ( p_Blink )
  {
    FxCollectionInternal::CleanupEntry(&pCollection->FxCollectionInternal, p_Blink);
    v8 = pCollection;
    _a3 = 0;
  }
  else
  {
    pObject = 0LL;
    _a3 = -1073741275;
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
    WPP_IFR_SF_qid(m_Globals, 2u, 2u, 0xDu, WPP_FxCollectionApi_cpp_Traceguids, Item, (__int64)Collection, _a3);
    FxVerifierDbgBreakPoint(m_Globals);
  }
}
