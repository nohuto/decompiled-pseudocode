/*
 * XREFs of ?PnpQueryResources@FxPkgPdo@@AEAAJPEAVFxIrp@@@Z @ 0x1C008A940
 * Callers:
 *     ?_PnpQueryResources@FxPkgPdo@@CAJPEAVFxPkgPnp@@PEAVFxIrp@@@Z @ 0x1C008AB60 (-_PnpQueryResources@FxPkgPdo@@CAJPEAVFxPkgPnp@@PEAVFxIrp@@@Z.c)
 * Callees:
 *     ?GetObjectHandleUnchecked@FxObject@@IEAAPEAXXZ @ 0x1C0003FA0 (-GetObjectHandleUnchecked@FxObject@@IEAAPEAXXZ.c)
 *     ?CompletePnpRequest@FxPkgPnp@@IEAAJPEAVFxIrp@@J@Z @ 0x1C0004B54 (-CompletePnpRequest@FxPkgPnp@@IEAAJPEAVFxIrp@@J@Z.c)
 *     ?Commit@FxObject@@QEAAJPEAU_WDF_OBJECT_ATTRIBUTES@@PEAPEAXPEAV1@E@Z @ 0x1C000B520 (-Commit@FxObject@@QEAAJPEAU_WDF_OBJECT_ATTRIBUTES@@PEAPEAXPEAV1@E@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C001D310 (_guard_dispatch_icall_nop.c)
 *     ?CreateWdmList@FxCmResList@@QEAAPEAU_CM_RESOURCE_LIST@@W4_POOL_TYPE@@@Z @ 0x1C0061380 (-CreateWdmList@FxCmResList@@QEAAPEAU_CM_RESOURCE_LIST@@W4_POOL_TYPE@@@Z.c)
 *     ?_CreateAndInit@FxCmResList@@SAJPEAPEAV1@PEAU_FX_DRIVER_GLOBALS@@PEAVFxDevice@@PEAU_WDF_OBJECT_ATTRIBUTES@@E@Z @ 0x1C0082EFC (-_CreateAndInit@FxCmResList@@SAJPEAPEAV1@PEAU_FX_DRIVER_GLOBALS@@PEAVFxDevice@@PEAU_WDF_OBJECT_A.c)
 */

__int64 __fastcall FxPkgPdo::PnpQueryResources(FxPkgPdo *this, FxIrp *Irp, FxDevice *a3, _WDF_OBJECT_ATTRIBUTES *a4)
{
  _CM_RESOURCE_LIST *WdmList; // rbx
  FxIrp *v5; // r14
  FxPkgPdo *v6; // rsi
  unsigned int v7; // r8d
  int Status; // edi
  FxCmResList *v9; // r15
  unsigned __int64 ObjectHandleUnchecked; // rcx
  int (__fastcall *m_Method)(WDFDEVICE__ *, WDFCMRESLIST__ *); // rax
  FxCmResList *pResList; // [rsp+50h] [rbp+8h] BYREF
  WDFCMRESLIST__ *list; // [rsp+60h] [rbp+18h] BYREF

  WdmList = 0LL;
  v5 = Irp;
  v6 = this;
  pResList = 0LL;
  list = 0LL;
  if ( this->m_DeviceResourcesQuery.m_Method )
  {
    Status = FxCmResList::_CreateAndInit(&pResList, this->m_Globals, a3, a4, 3u);
    if ( Status >= 0 )
    {
      v9 = pResList;
      Status = FxObject::Commit(pResList, 0LL, (void **)&list, 0LL, 1u);
      if ( Status >= 0 )
      {
        ObjectHandleUnchecked = FxObject::GetObjectHandleUnchecked(v6->m_DeviceBase);
        m_Method = v6->m_DeviceResourcesQuery.m_Method;
        if ( m_Method )
          Status = m_Method((WDFDEVICE__ *)ObjectHandleUnchecked, list);
        else
          Status = 0;
        if ( Status >= 0 )
        {
          if ( v9->m_Count )
          {
            WdmList = FxCmResList::CreateWdmList(v9, PagedPool);
          }
          else
          {
            Status = v5->m_Irp->IoStatus.Status;
            WdmList = (_CM_RESOURCE_LIST *)v5->m_Irp->IoStatus.Information;
          }
        }
      }
      v9->DeleteObject(v9);
    }
    v7 = Status;
    Irp = v5;
    this = v6;
    v5->m_Irp->IoStatus.Information = (unsigned __int64)WdmList;
  }
  else
  {
    v7 = Irp->m_Irp->IoStatus.Status;
  }
  return FxPkgPnp::CompletePnpRequest(this, Irp, v7);
}
