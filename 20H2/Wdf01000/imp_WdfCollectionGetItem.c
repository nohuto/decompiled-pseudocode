/*
 * XREFs of imp_WdfCollectionGetItem @ 0x1C0003490
 * Callers:
 *     <none>
 * Callees:
 *     ?FxObjectHandleGetPtrQI@@YAXPEAVFxObject@@PEAPEAXPEAXGG@Z @ 0x1C0003F34 (-FxObjectHandleGetPtrQI@@YAXPEAVFxObject@@PEAPEAXPEAXGG@Z.c)
 *     ?FxVerifierBugCheckWorker@@YAXPEAU_FX_DRIVER_GLOBALS@@W4_WDF_BUGCHECK_CODES@@_K2@Z @ 0x1C00588FC (-FxVerifierBugCheckWorker@@YAXPEAU_FX_DRIVER_GLOBALS@@W4_WDF_BUGCHECK_CODES@@_K2@Z.c)
 *     ?Lock@FxVerifierLock@@QEAAXPEAEE@Z @ 0x1C005A018 (-Lock@FxVerifierLock@@QEAAXPEAEE@Z.c)
 *     ?Unlock@FxVerifierLock@@QEAAXEE@Z @ 0x1C005A318 (-Unlock@FxVerifierLock@@QEAAXEE@Z.c)
 */

unsigned __int64 __fastcall imp_WdfCollectionGetItem(
        _WDF_DRIVER_GLOBALS *DriverGlobals,
        unsigned __int64 Collection,
        unsigned int Index)
{
  __int64 v3; // rdi
  __int64 Offset; // r8
  FxCollection *v6; // rcx
  unsigned __int8 v7; // r10
  int v8; // ecx
  _LIST_ENTRY *Flink; // rdx
  _LIST_ENTRY *Blink; // rbx
  FxVerifierLock *v12; // rcx
  unsigned __int8 irql; // [rsp+48h] [rbp+10h] BYREF
  FxCollection *pCollection; // [rsp+58h] [rbp+20h] BYREF

  v3 = 0LL;
  pCollection = 0LL;
  irql = 0;
  if ( !Collection )
    FxVerifierBugCheckWorker((_FX_DRIVER_GLOBALS *)DriverGlobals[-8].DriverName, WDF_INVALID_HANDLE, 0LL, 0x100EuLL);
  LOWORD(Offset) = 0;
  v6 = (FxCollection *)(~Collection & 0xFFFFFFFFFFFFFFF8uLL);
  if ( (Collection & 1) != 0 )
  {
    Offset = LOWORD(v6->__vftable);
    v6 = (FxCollection *)((char *)v6 - Offset);
  }
  if ( v6->m_Type == 4110 )
  {
    pCollection = v6;
  }
  else
  {
    FxObjectHandleGetPtrQI(v6, (void **)&pCollection, (void *)Collection, 0x100Eu, Offset);
    v6 = pCollection;
  }
  if ( SLOBYTE(v6->m_ObjectFlags) < 0 && *(_QWORD *)&v6[-1].m_NPLock.m_DbgFlagIsInitialized )
  {
    FxVerifierLock::Lock(*(FxVerifierLock **)&v6[-1].m_NPLock.m_DbgFlagIsInitialized, &irql, Offset);
    v7 = irql;
  }
  else
  {
    v7 = KeAcquireSpinLockRaiseToDpc(&v6->m_NPLock.m_Lock);
  }
  if ( Index >= pCollection->m_Count )
    goto LABEL_20;
  v8 = 0;
  Flink = pCollection->m_ListHead.Flink;
  if ( Flink == &pCollection->m_ListHead )
    goto LABEL_20;
  while ( v8 != Index )
  {
    Flink = Flink->Flink;
    ++v8;
    if ( Flink == &pCollection->m_ListHead )
      goto LABEL_20;
  }
  if ( Flink == (_LIST_ENTRY *)8 )
LABEL_20:
    Blink = 0LL;
  else
    Blink = Flink[-1].Blink;
  if ( SLOBYTE(pCollection->m_ObjectFlags) < 0
    && (v12 = *(FxVerifierLock **)&pCollection[-1].m_NPLock.m_DbgFlagIsInitialized) != 0LL )
  {
    FxVerifierLock::Unlock(v12, v7, (unsigned __int8)pCollection);
  }
  else
  {
    KeReleaseSpinLock(&pCollection->m_NPLock.m_Lock, v7);
  }
  if ( !Blink )
    return 0LL;
  if ( WORD1(Blink->Blink) )
    return (unsigned __int64)Blink ^ 0xFFFFFFFFFFFFFFF8uLL;
  return v3;
}
