/*
 * XREFs of ?NotifyPrePrepareHardware@FxCompanionTarget@@QEAAJPEAUWDFCMRESLIST__@@0@Z @ 0x1C00437E4
 * Callers:
 *     ?InvokeCompanionCallback@FxPnpDevicePrepareHardware@@MEAAJPEAVFxCompanionTarget@@@Z @ 0x1C008B6D0 (-InvokeCompanionCallback@FxPnpDevicePrepareHardware@@MEAAJPEAVFxCompanionTarget@@@Z.c)
 * Callees:
 *     ?FxObjectHandleGetPtr@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAXGPEAPEAX@Z @ 0x1C000BE90 (-FxObjectHandleGetPtr@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAXGPEAPEAX@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C001D310 (_guard_dispatch_icall_nop.c)
 *     ?CreateWdmList@FxCmResList@@QEAAPEAU_CM_RESOURCE_LIST@@W4_POOL_TYPE@@@Z @ 0x1C0061380 (-CreateWdmList@FxCmResList@@QEAAPEAU_CM_RESOURCE_LIST@@W4_POOL_TYPE@@@Z.c)
 */

__int64 __fastcall FxCompanionTarget::NotifyPrePrepareHardware(
        FxCompanionTarget *this,
        WDFCMRESLIST__ *Raw,
        WDFCMRESLIST__ *Translated)
{
  _CM_RESOURCE_LIST *WdmList; // rsi
  _CM_RESOURCE_LIST *v6; // rbx
  unsigned int v7; // edi
  FxCmResList *pList; // [rsp+30h] [rbp+8h] BYREF

  pList = 0LL;
  FxObjectHandleGetPtr(this->m_Device->m_Globals, (unsigned __int64)Raw, 0x1036u, (void **)&pList);
  WdmList = FxCmResList::CreateWdmList(pList, PagedPool);
  FxObjectHandleGetPtr(this->m_Device->m_Globals, (unsigned __int64)Translated, 0x1036u, (void **)&pList);
  v6 = FxCmResList::CreateWdmList(pList, PagedPool);
  v7 = this->m_RdDeviceCompanion->SendPrepareHardware(this->m_RdDeviceCompanion, WdmList, v6);
  if ( WdmList )
    ExFreePoolWithTag(WdmList, 0);
  if ( v6 )
    ExFreePoolWithTag(v6, 0);
  return v7;
}
