/*
 * XREFs of imp_WdfWorkItemEnqueue @ 0x1C000C4B0
 * Callers:
 *     <none>
 * Callees:
 *     ?FxObjectHandleGetPtrQI@@YAXPEAVFxObject@@PEAPEAXPEAXGG@Z @ 0x1C0003F34 (-FxObjectHandleGetPtrQI@@YAXPEAVFxObject@@PEAPEAXPEAXGG@Z.c)
 *     ?Unlock@FxNonPagedObject@@QEAAXE@Z @ 0x1C000C8E0 (-Unlock@FxNonPagedObject@@QEAAXE@Z.c)
 *     ?Lock@FxNonPagedObject@@QEAAXPEAE@Z @ 0x1C000C960 (-Lock@FxNonPagedObject@@QEAAXPEAE@Z.c)
 *     ?AddRef@FxObject@@QEAAKPEAXJPEBD@Z @ 0x1C000CA80 (-AddRef@FxObject@@QEAAKPEAXJPEBD@Z.c)
 *     WPP_IFR_SF_q @ 0x1C00138C0 (WPP_IFR_SF_q.c)
 *     ?FxVerifierDbgBreakPoint@@YAXPEAU_FX_DRIVER_GLOBALS@@@Z @ 0x1C002DD0C (-FxVerifierDbgBreakPoint@@YAXPEAU_FX_DRIVER_GLOBALS@@@Z.c)
 *     ?FxVerifierBugCheckWorker@@YAXPEAU_FX_DRIVER_GLOBALS@@W4_WDF_BUGCHECK_CODES@@_K2@Z @ 0x1C00588FC (-FxVerifierBugCheckWorker@@YAXPEAU_FX_DRIVER_GLOBALS@@W4_WDF_BUGCHECK_CODES@@_K2@Z.c)
 */

void __fastcall imp_WdfWorkItemEnqueue(_WDF_DRIVER_GLOBALS *DriverGlobals, unsigned __int64 WorkItem)
{
  __int64 Offset; // rcx
  unsigned __int64 v3; // rbx
  _FX_DRIVER_GLOBALS *v4; // rsi
  char v5; // di
  const void *_a1; // rdx
  const void *v7; // rcx
  unsigned __int8 PreviousIrql; // [rsp+58h] [rbp+10h] BYREF
  FxWorkItem *pFxWorkItem; // [rsp+60h] [rbp+18h] BYREF

  pFxWorkItem = 0LL;
  if ( !WorkItem )
    FxVerifierBugCheckWorker((_FX_DRIVER_GLOBALS *)DriverGlobals[-8].DriverName, WDF_INVALID_HANDLE, 0LL, 0x1025uLL);
  LOWORD(Offset) = 0;
  v3 = ~WorkItem & 0xFFFFFFFFFFFFFFF8uLL;
  if ( (WorkItem & 1) != 0 )
  {
    Offset = *(unsigned __int16 *)v3;
    v3 -= Offset;
  }
  if ( *(_WORD *)(v3 + 8) == 4133 )
  {
    pFxWorkItem = (FxWorkItem *)v3;
  }
  else
  {
    FxObjectHandleGetPtrQI((FxObject *)v3, (void **)&pFxWorkItem, (void *)WorkItem, 0x1025u, Offset);
    v3 = (unsigned __int64)pFxWorkItem;
  }
  v4 = *(_FX_DRIVER_GLOBALS **)(v3 + 16);
  PreviousIrql = 0;
  v5 = 0;
  FxNonPagedObject::Lock((FxNonPagedObject *)v3, &PreviousIrql);
  if ( *(_BYTE *)(v3 + 129) )
  {
    if ( v4->FxVerboseOn )
    {
      _a1 = (const void *)(v3 ^ 0xFFFFFFFFFFFFFFF8uLL);
      if ( !*(_WORD *)(v3 + 10) )
        _a1 = 0LL;
      WPP_IFR_SF_q(v4, 5u, 0x12u, 0xEu, WPP_FxWorkItem_cpp_Traceguids, _a1);
    }
  }
  else if ( *(_BYTE *)(v3 + 128) )
  {
    v7 = (const void *)(v3 ^ 0xFFFFFFFFFFFFFFF8uLL);
    if ( !*(_WORD *)(v3 + 10) )
      v7 = 0LL;
    WPP_IFR_SF_q(v4, 2u, 0x12u, 0xFu, WPP_FxWorkItem_cpp_Traceguids, v7);
    FxVerifierDbgBreakPoint(v4);
  }
  else
  {
    KeClearEvent((PRKEVENT)(v3 + 168));
    *(_BYTE *)(v3 + 129) = 1;
    FxObject::AddRef(
      (FxObject *)v3,
      FxWorkItem::WorkItemThunk,
      322,
      "minkernel\\wdf\\framework\\shared\\core\\fxworkitem.cpp");
    _InterlockedIncrement(&v4->Refcnt);
    v5 = 1;
  }
  FxNonPagedObject::Unlock((FxNonPagedObject *)v3, PreviousIrql);
  if ( v5 )
    IoQueueWorkItem(*(PIO_WORKITEM *)(v3 + 120), FxWorkItem::WorkItemThunk, DelayedWorkQueue, (PVOID)v3);
}
