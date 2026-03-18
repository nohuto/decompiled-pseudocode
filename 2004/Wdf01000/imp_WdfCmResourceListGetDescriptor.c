/*
 * XREFs of imp_WdfCmResourceListGetDescriptor @ 0x1C005C510
 * Callers:
 *     <none>
 * Callees:
 *     ?FxObjectHandleGetPtr@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAXGPEAPEAX@Z @ 0x1C000BE90 (-FxObjectHandleGetPtr@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAXGPEAPEAX@Z.c)
 *     ?Unlock@FxNonPagedObject@@QEAAXE@Z @ 0x1C000C8E0 (-Unlock@FxNonPagedObject@@QEAAXE@Z.c)
 *     ?Lock@FxNonPagedObject@@QEAAXPEAE@Z @ 0x1C000C960 (-Lock@FxNonPagedObject@@QEAAXPEAE@Z.c)
 *     ?FindEntry@FxCollectionInternal@@QEAAPEAVFxCollectionEntry@@K@Z @ 0x1C00618E4 (-FindEntry@FxCollectionInternal@@QEAAPEAVFxCollectionEntry@@K@Z.c)
 */

_CM_PARTIAL_RESOURCE_DESCRIPTOR *__fastcall imp_WdfCmResourceListGetDescriptor(
        _WDF_DRIVER_GLOBALS *DriverGlobals,
        WDFCMRESLIST__ *List,
        unsigned int Index)
{
  char *v4; // rdi
  FxCmResList *v5; // rsi
  unsigned __int8 v6; // r8
  FxCollectionEntry *Entry; // rax
  unsigned __int8 v8; // r8
  FxObject *m_Object; // rbx
  int m_Globals; // ecx
  unsigned __int8 PreviousIrql; // [rsp+30h] [rbp+8h] BYREF
  FxCmResList *pList; // [rsp+48h] [rbp+20h] BYREF

  v4 = 0LL;
  pList = 0LL;
  FxObjectHandleGetPtr(
    (_FX_DRIVER_GLOBALS *)DriverGlobals[-8].DriverName,
    (unsigned __int64)List,
    0x1036u,
    (void **)&pList);
  v5 = pList;
  PreviousIrql = 0;
  FxNonPagedObject::Lock(pList, &PreviousIrql, v6);
  Entry = FxCollectionInternal::FindEntry(&v5->FxCollectionInternal, Index);
  if ( Entry )
    m_Object = Entry->m_Object;
  else
    m_Object = 0LL;
  FxNonPagedObject::Unlock(v5, PreviousIrql, v8);
  if ( m_Object )
  {
    m_Globals = (int)m_Object[1].m_Globals;
    v4 = (char *)&m_Object[1].m_Globals + 4;
    *(_OWORD *)((char *)&m_Object[1].m_Globals + 4) = *(_OWORD *)&m_Object[1].__vftable;
    HIDWORD(m_Object[1].m_ChildListHead.Flink) = m_Globals;
  }
  return (_CM_PARTIAL_RESOURCE_DESCRIPTOR *)v4;
}
