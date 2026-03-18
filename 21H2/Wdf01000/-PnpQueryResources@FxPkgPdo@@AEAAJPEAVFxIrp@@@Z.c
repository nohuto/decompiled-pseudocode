/*
 * XREFs of ?PnpQueryResources@FxPkgPdo@@AEAAJPEAVFxIrp@@@Z @ 0x1C0020848
 * Callers:
 *     ?_PnpQueryResources@FxPkgPdo@@CAJPEAVFxPkgPnp@@PEAVFxIrp@@@Z @ 0x1C0020830 (-_PnpQueryResources@FxPkgPdo@@CAJPEAVFxPkgPnp@@PEAVFxIrp@@@Z.c)
 * Callees:
 *     ?GetObjectHandleUnchecked@FxObject@@IEAAPEAXXZ @ 0x1C0002928 (-GetObjectHandleUnchecked@FxObject@@IEAAPEAXXZ.c)
 *     ?CompletePnpRequest@FxPkgPnp@@IEAAJPEAVFxIrp@@J@Z @ 0x1C0002DF8 (-CompletePnpRequest@FxPkgPnp@@IEAAJPEAVFxIrp@@J@Z.c)
 *     ?Commit@FxObject@@QEAAJPEAU_WDF_OBJECT_ATTRIBUTES@@PEAPEAXPEAV1@E@Z @ 0x1C0005B30 (-Commit@FxObject@@QEAAJPEAU_WDF_OBJECT_ATTRIBUTES@@PEAPEAXPEAV1@E@Z.c)
 *     ?_CreateAndInit@FxCmResList@@SAJPEAPEAV1@PEAU_FX_DRIVER_GLOBALS@@PEAVFxDevice@@PEAU_WDF_OBJECT_ATTRIBUTES@@E@Z @ 0x1C0022804 (-_CreateAndInit@FxCmResList@@SAJPEAPEAV1@PEAU_FX_DRIVER_GLOBALS@@PEAVFxDevice@@PEAU_WDF_OBJECT_A.c)
 *     _guard_dispatch_icall_nop @ 0x1C0036BA0 (_guard_dispatch_icall_nop.c)
 *     ?CreateWdmList@FxCmResList@@QEAAPEAU_CM_RESOURCE_LIST@@_K@Z @ 0x1C0072290 (-CreateWdmList@FxCmResList@@QEAAPEAU_CM_RESOURCE_LIST@@_K@Z.c)
 */

__int64 __fastcall FxPkgPdo::PnpQueryResources(FxPkgPdo *this, FxIrp *Irp, FxDevice *a3, _WDF_OBJECT_ATTRIBUTES *a4)
{
  _CM_RESOURCE_LIST *WdmList; // rbx
  FxIrp *v5; // r14
  FxPkgPdo *v6; // rsi
  unsigned int v7; // r8d
  int Status; // edi
  FxCmResList *v10; // r15
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
    if ( Status < 0 )
    {
$exit_6:
      v7 = Status;
      Irp = v5;
      this = v6;
      v5->m_Irp->IoStatus.Information = (unsigned __int64)WdmList;
      return FxPkgPnp::CompletePnpRequest(this, Irp, v7);
    }
    v10 = pResList;
    Status = FxObject::Commit(pResList, 0LL, (void **)&list, 0LL, 1u);
    if ( Status >= 0 )
    {
      ObjectHandleUnchecked = FxObject::GetObjectHandleUnchecked(v6->m_DeviceBase);
      m_Method = v6->m_DeviceResourcesQuery.m_Method;
      if ( !m_Method )
      {
        Status = 0;
LABEL_8:
        if ( v10->m_Count )
        {
          WdmList = FxCmResList::CreateWdmList(v10, 0x100uLL);
        }
        else
        {
          Status = v5->m_Irp->IoStatus.Status;
          WdmList = (_CM_RESOURCE_LIST *)v5->m_Irp->IoStatus.Information;
        }
        goto LABEL_10;
      }
      Status = m_Method((WDFDEVICE__ *)ObjectHandleUnchecked, list);
      if ( Status >= 0 )
        goto LABEL_8;
    }
LABEL_10:
    v10->DeleteObject(v10);
    goto $exit_6;
  }
  v7 = Irp->m_Irp->IoStatus.Status;
  return FxPkgPnp::CompletePnpRequest(this, Irp, v7);
}
