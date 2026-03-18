/*
 * XREFs of WdfDeviceSetDeviceInterfaceStateWorker @ 0x1C001B734
 * Callers:
 *     imp_WdfDeviceSetDeviceInterfaceStateEx @ 0x1C001B8B0 (imp_WdfDeviceSetDeviceInterfaceStateEx.c)
 *     imp_WdfDeviceSetDeviceInterfaceState @ 0x1C005CC30 (imp_WdfDeviceSetDeviceInterfaceState.c)
 * Callees:
 *     ?ReleaseLock@FxWaitLockInternal@@QEAAXPEAU_FX_DRIVER_GLOBALS@@@Z @ 0x1C0004DF4 (-ReleaseLock@FxWaitLockInternal@@QEAAXPEAU_FX_DRIVER_GLOBALS@@@Z.c)
 *     ?FxValidateUnicodeString@@YAJPEAU_FX_DRIVER_GLOBALS@@PEBU_UNICODE_STRING@@@Z @ 0x1C000A094 (-FxValidateUnicodeString@@YAJPEAU_FX_DRIVER_GLOBALS@@PEBU_UNICODE_STRING@@@Z.c)
 *     ?FxVerifierCheckIrqlLevel@@YAJPEAU_FX_DRIVER_GLOBALS@@E@Z @ 0x1C000CF7C (-FxVerifierCheckIrqlLevel@@YAJPEAU_FX_DRIVER_GLOBALS@@E@Z.c)
 *     ?AcquireLock@FxWaitLockInternal@@QEAAJPEAU_FX_DRIVER_GLOBALS@@PEA_J@Z @ 0x1C000EC9C (-AcquireLock@FxWaitLockInternal@@QEAAJPEAU_FX_DRIVER_GLOBALS@@PEA_J@Z.c)
 *     WPP_IFR_SF_q @ 0x1C00138C0 (WPP_IFR_SF_q.c)
 *     ?FxObjectHandleGetPtrAndGlobals@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAXGPEAPEAXPEAPEAU1@@Z @ 0x1C002DCE0 (-FxObjectHandleGetPtrAndGlobals@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAXGPEAPEAXPEAPEAU1@@Z.c)
 *     ?FxVerifierDbgBreakPoint@@YAXPEAU_FX_DRIVER_GLOBALS@@@Z @ 0x1C002DD0C (-FxVerifierDbgBreakPoint@@YAXPEAU_FX_DRIVER_GLOBALS@@@Z.c)
 *     FxIsEqualGuid @ 0x1C003927C (FxIsEqualGuid.c)
 *     ?FxVerifierNullBugCheck@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAX@Z @ 0x1C0058968 (-FxVerifierNullBugCheck@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAX@Z.c)
 *     ?SetState@FxDeviceInterface@@QEAAXE@Z @ 0x1C0061928 (-SetState@FxDeviceInterface@@QEAAXE@Z.c)
 */

void __fastcall WdfDeviceSetDeviceInterfaceStateWorker(
        _WDF_DRIVER_GLOBALS *DriverGlobals,
        WDFDEVICE__ *Device,
        const _GUID *InterfaceClassGUID,
        const _UNICODE_STRING *RefString,
        unsigned __int8 State,
        _WDF_TRI_STATE AutoEnableOnFirstStart)
{
  _FX_DRIVER_GLOBALS *v9; // rbx
  _FX_DRIVER_GLOBALS *v10; // rdx
  FxPkgPnp *m_PkgPnp; // rbx
  _FX_DRIVER_GLOBALS *v12; // rdx
  _SINGLE_LIST_ENTRY *i; // rdi
  void *retaddr; // [rsp+58h] [rbp+0h]
  _FX_DRIVER_GLOBALS *pFxDriverGlobals; // [rsp+60h] [rbp+8h] BYREF
  FxDevice *pDevice; // [rsp+70h] [rbp+18h] BYREF

  pFxDriverGlobals = 0LL;
  pDevice = 0LL;
  FxObjectHandleGetPtrAndGlobals(
    (_FX_DRIVER_GLOBALS *)DriverGlobals[-8].DriverName,
    Device,
    0x1002u,
    (void **)&pDevice,
    &pFxDriverGlobals);
  if ( !InterfaceClassGUID )
    FxVerifierNullBugCheck(pFxDriverGlobals, retaddr);
  v9 = pFxDriverGlobals;
  if ( (int)FxVerifierCheckIrqlLevel(pFxDriverGlobals, 0) < 0
    || RefString && (int)FxValidateUnicodeString(v9, RefString) < 0 )
  {
    goto LABEL_3;
  }
  if ( pDevice->m_Legacy )
  {
    WPP_IFR_SF_q(v9, 2u, 2u, 0xDu, WPP_FxDeviceInterfaceAPI_cpp_Traceguids, Device);
LABEL_3:
    FxVerifierDbgBreakPoint(v9);
    return;
  }
  m_PkgPnp = pDevice->m_PkgPnp;
  FxWaitLockInternal::AcquireLock(&m_PkgPnp->m_DeviceInterfaceLock, v10, 0LL);
  for ( i = m_PkgPnp->m_DeviceInterfaceHead.Next; i; i = i->Next )
  {
    if ( FxIsEqualGuid((const _GUID *)&i[-6], InterfaceClassGUID) )
    {
      if ( RefString )
      {
        if ( RefString->Length == LOWORD(i[-4].Next)
          && RtlCompareMemory(RefString->Buffer, i[-3].Next, RefString->Length) == RefString->Length )
        {
LABEL_14:
          FxDeviceInterface::SetState((FxDeviceInterface *)&i[-6], State);
          if ( AutoEnableOnFirstStart == WdfFalse )
            BYTE1(i[1].Next) = 0;
          break;
        }
      }
      else if ( !LOWORD(i[-4].Next) )
      {
        goto LABEL_14;
      }
    }
  }
  FxWaitLockInternal::ReleaseLock(&m_PkgPnp->m_DeviceInterfaceLock, v12);
}
