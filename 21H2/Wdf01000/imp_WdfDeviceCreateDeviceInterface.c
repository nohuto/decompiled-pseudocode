/*
 * XREFs of imp_WdfDeviceCreateDeviceInterface @ 0x1C005D190
 * Callers:
 *     <none>
 * Callees:
 *     ?FxPoolAllocator@@YAPEAXPEAU_FX_DRIVER_GLOBALS@@PEAUFX_POOL@@W4_POOL_TYPE@@_KKPEAX@Z @ 0x1C0009330 (-FxPoolAllocator@@YAPEAXPEAU_FX_DRIVER_GLOBALS@@PEAUFX_POOL@@W4_POOL_TYPE@@_KKPEAX@Z.c)
 *     ?FxValidateUnicodeString@@YAJPEAU_FX_DRIVER_GLOBALS@@PEBU_UNICODE_STRING@@@Z @ 0x1C000A094 (-FxValidateUnicodeString@@YAJPEAU_FX_DRIVER_GLOBALS@@PEBU_UNICODE_STRING@@@Z.c)
 *     WPP_IFR_SF_qL @ 0x1C000B0E4 (WPP_IFR_SF_qL.c)
 *     ?FxObjectHandleGetPtr@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAXGPEAPEAX@Z @ 0x1C000BE90 (-FxObjectHandleGetPtr@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAXGPEAPEAX@Z.c)
 *     ?FxVerifierCheckIrqlLevel@@YAJPEAU_FX_DRIVER_GLOBALS@@E@Z @ 0x1C000CF7C (-FxVerifierCheckIrqlLevel@@YAJPEAU_FX_DRIVER_GLOBALS@@E@Z.c)
 *     ?AcquireLock@FxWaitLockInternal@@QEAAJPEAU_FX_DRIVER_GLOBALS@@PEA_J@Z @ 0x1C000EA4C (-AcquireLock@FxWaitLockInternal@@QEAAJPEAU_FX_DRIVER_GLOBALS@@PEA_J@Z.c)
 *     ?GetSafePhysicalDevice@FxDevice@@QEAAPEAU_DEVICE_OBJECT@@XZ @ 0x1C000EBEC (-GetSafePhysicalDevice@FxDevice@@QEAAPEAU_DEVICE_OBJECT@@XZ.c)
 *     ?FxVerifierNullBugCheck@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAX@Z @ 0x1C00592C4 (-FxVerifierNullBugCheck@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAX@Z.c)
 *     ??_GFxDeviceInterface@@QEAAPEAXI@Z @ 0x1C005D134 (--_GFxDeviceInterface@@QEAAPEAXI@Z.c)
 *     ?FxDuplicateUnicodeString@@YAJPEAU_FX_DRIVER_GLOBALS@@PEBU_UNICODE_STRING@@PEAU2@@Z @ 0x1C0061C1C (-FxDuplicateUnicodeString@@YAJPEAU_FX_DRIVER_GLOBALS@@PEBU_UNICODE_STRING@@PEAU2@@Z.c)
 *     ?Register@FxDeviceInterface@@QEAAJPEAU_DEVICE_OBJECT@@@Z @ 0x1C0062250 (-Register@FxDeviceInterface@@QEAAJPEAU_DEVICE_OBJECT@@@Z.c)
 */

__int64 __fastcall imp_WdfDeviceCreateDeviceInterface(
        _WDF_DRIVER_GLOBALS *DriverGlobals,
        WDFDEVICE__ *Device,
        const _GUID *InterfaceClassGUID,
        const _UNICODE_STRING *ReferenceString)
{
  _FX_DRIVER_GLOBALS *m_Globals; // rsi
  __int64 result; // rax
  unsigned int _a2; // ebx
  unsigned __int16 v10; // r9
  FX_POOL **v11; // rax
  _FX_DRIVER_GLOBALS *v12; // rdx
  FxDeviceInterface *v13; // rbx
  FxPkgPnp *m_PkgPnp; // rbp
  _DEVICE_OBJECT *SafePhysicalDevice; // rax
  _SINGLE_LIST_ENTRY *p_m_DeviceInterfaceHead; // rcx
  _SINGLE_LIST_ENTRY *i; // rax
  void *retaddr; // [rsp+58h] [rbp+0h]
  FxDevice *pDevice; // [rsp+60h] [rbp+8h] BYREF

  pDevice = 0LL;
  FxObjectHandleGetPtr(
    (_FX_DRIVER_GLOBALS *)DriverGlobals[-8].DriverName,
    (unsigned __int64)Device,
    0x1002u,
    (void **)&pDevice);
  m_Globals = pDevice->m_Globals;
  if ( !InterfaceClassGUID )
    FxVerifierNullBugCheck(m_Globals, (ULONG_PTR)retaddr);
  result = FxVerifierCheckIrqlLevel(m_Globals, 0);
  if ( (int)result >= 0 )
  {
    if ( !ReferenceString || (result = FxValidateUnicodeString(m_Globals, ReferenceString), (int)result >= 0) )
    {
      if ( pDevice->m_Legacy )
      {
        _a2 = -1073741808;
        v10 = 10;
LABEL_8:
        WPP_IFR_SF_qL(m_Globals, 2u, 2u, v10, WPP_FxDeviceInterfaceAPI_cpp_Traceguids, Device, _a2);
        return _a2;
      }
      v11 = FxPoolAllocator(m_Globals, &m_Globals->FxPoolFrameworks, 1u, 0x40uLL, m_Globals->Tag, retaddr);
      v13 = (FxDeviceInterface *)v11;
      if ( v11 )
      {
        *(_OWORD *)v11 = 0LL;
        *((_OWORD *)v11 + 2) = 0LL;
        *((_OWORD *)v11 + 1) = 0LL;
        v11[6] = 0LL;
        *((_WORD *)v11 + 28) = 256;
      }
      else
      {
        v13 = 0LL;
      }
      if ( !v13 )
      {
        _a2 = -1073741670;
        v10 = 11;
        goto LABEL_8;
      }
      v13->m_InterfaceClassGUID = *InterfaceClassGUID;
      if ( ReferenceString )
        LODWORD(ReferenceString) = FxDuplicateUnicodeString(m_Globals, ReferenceString, &v13->m_ReferenceString);
      if ( (int)ReferenceString >= 0 )
      {
        m_PkgPnp = pDevice->m_PkgPnp;
        FxWaitLockInternal::AcquireLock(&m_PkgPnp->m_DeviceInterfaceLock, v12, 0LL);
        SafePhysicalDevice = FxDevice::GetSafePhysicalDevice(pDevice);
        if ( SafePhysicalDevice )
          LODWORD(ReferenceString) = FxDeviceInterface::Register(v13, SafePhysicalDevice);
        else
          LODWORD(ReferenceString) = 0;
        if ( (int)ReferenceString >= 0 )
        {
          p_m_DeviceInterfaceHead = &m_PkgPnp->m_DeviceInterfaceHead;
          for ( i = m_PkgPnp->m_DeviceInterfaceHead.Next; i; i = i->Next )
            p_m_DeviceInterfaceHead = i;
          p_m_DeviceInterfaceHead->Next = &v13->m_Entry;
        }
        m_PkgPnp->m_DeviceInterfaceLock.m_OwningThread = 0LL;
        KeSetEvent(&m_PkgPnp->m_DeviceInterfaceLock.m_Event.m_Event, 0, 0);
        KeLeaveCriticalRegion();
      }
      else
      {
        WPP_IFR_SF_qL(
          m_Globals,
          2u,
          2u,
          0xCu,
          WPP_FxDeviceInterfaceAPI_cpp_Traceguids,
          Device,
          (unsigned int)ReferenceString);
      }
      if ( (int)ReferenceString < 0 )
        FxDeviceInterface::`scalar deleting destructor'(v13);
      return (unsigned int)ReferenceString;
    }
  }
  return result;
}
