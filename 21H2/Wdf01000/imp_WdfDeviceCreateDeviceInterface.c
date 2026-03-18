/*
 * XREFs of imp_WdfDeviceCreateDeviceInterface @ 0x1C001E730
 * Callers:
 *     <none>
 * Callees:
 *     ?FxObjectHandleGetPtr@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAXGPEAPEAX@Z @ 0x1C0005610 (-FxObjectHandleGetPtr@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAXGPEAPEAX@Z.c)
 *     ?FxVerifierCheckIrqlLevel@@YAJPEAU_FX_DRIVER_GLOBALS@@E@Z @ 0x1C00058D8 (-FxVerifierCheckIrqlLevel@@YAJPEAU_FX_DRIVER_GLOBALS@@E@Z.c)
 *     ?FxPoolAllocator@@YAPEAXPEAU_FX_DRIVER_GLOBALS@@PEAUFX_POOL@@UFxPoolTypeOrPoolFlags@@_KKPEAX@Z @ 0x1C0006DE0 (-FxPoolAllocator@@YAPEAXPEAU_FX_DRIVER_GLOBALS@@PEAUFX_POOL@@UFxPoolTypeOrPoolFlags@@_KKPEAX@Z.c)
 *     WPP_IFR_SF_qL @ 0x1C0013680 (WPP_IFR_SF_qL.c)
 *     ?GetSafePhysicalDevice@FxDevice@@QEAAPEAU_DEVICE_OBJECT@@XZ @ 0x1C0015030 (-GetSafePhysicalDevice@FxDevice@@QEAAPEAU_DEVICE_OBJECT@@XZ.c)
 *     ?FxValidateUnicodeString@@YAJPEAU_FX_DRIVER_GLOBALS@@PEBU_UNICODE_STRING@@@Z @ 0x1C0015654 (-FxValidateUnicodeString@@YAJPEAU_FX_DRIVER_GLOBALS@@PEBU_UNICODE_STRING@@@Z.c)
 *     ?AcquireLock@FxWaitLockInternal@@QEAAJPEAU_FX_DRIVER_GLOBALS@@PEA_J@Z @ 0x1C0017090 (-AcquireLock@FxWaitLockInternal@@QEAAJPEAU_FX_DRIVER_GLOBALS@@PEA_J@Z.c)
 *     ?Register@FxDeviceInterface@@QEAAJPEAU_DEVICE_OBJECT@@@Z @ 0x1C001E91C (-Register@FxDeviceInterface@@QEAAJPEAU_DEVICE_OBJECT@@@Z.c)
 *     ?FxDuplicateUnicodeString@@YAJPEAU_FX_DRIVER_GLOBALS@@PEBU_UNICODE_STRING@@PEAU2@@Z @ 0x1C00273A8 (-FxDuplicateUnicodeString@@YAJPEAU_FX_DRIVER_GLOBALS@@PEBU_UNICODE_STRING@@PEAU2@@Z.c)
 *     ?FxVerifierNullBugCheck@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAX@Z @ 0x1C006CAD4 (-FxVerifierNullBugCheck@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAX@Z.c)
 *     ??_GFxDeviceInterface@@QEAAPEAXI@Z @ 0x1C006FDC4 (--_GFxDeviceInterface@@QEAAPEAXI@Z.c)
 */

__int64 __fastcall imp_WdfDeviceCreateDeviceInterface(
        _WDF_DRIVER_GLOBALS *DriverGlobals,
        WDFDEVICE__ *Device,
        const _GUID *InterfaceClassGUID,
        const _UNICODE_STRING *ReferenceString)
{
  _FX_DRIVER_GLOBALS *m_Globals; // rbx
  __int64 result; // rax
  bool v9; // zf
  ULONG Tag; // ecx
  void *v11; // rax
  FX_POOL **v12; // rax
  _FX_DRIVER_GLOBALS *v13; // rdx
  FxDeviceInterface *v14; // rdi
  signed int _a2; // eax
  int v16; // esi
  FxPkgPnp *m_PkgPnp; // r14
  _DEVICE_OBJECT *SafePhysicalDevice; // rax
  FxDeviceInterface *v19; // rbx
  _SINGLE_LIST_ENTRY *p_m_DeviceInterfaceHead; // rcx
  _SINGLE_LIST_ENTRY *i; // rax
  unsigned int v22; // edx
  unsigned int v23; // edi
  unsigned __int16 v24; // r9
  __m128i v25; // [rsp+40h] [rbp-28h] BYREF
  void *retaddr; // [rsp+68h] [rbp+0h]
  FxDevice *pDevice; // [rsp+70h] [rbp+8h] BYREF

  pDevice = 0LL;
  FxObjectHandleGetPtr((_FX_DRIVER_GLOBALS *)&DriverGlobals[-8], (unsigned __int64)Device, 0x1002u, (void **)&pDevice);
  m_Globals = pDevice->m_Globals;
  if ( !InterfaceClassGUID )
    FxVerifierNullBugCheck(m_Globals, retaddr);
  result = FxVerifierCheckIrqlLevel(m_Globals, 0);
  if ( (int)result >= 0 )
  {
    if ( !ReferenceString || (result = FxValidateUnicodeString(m_Globals, ReferenceString), (int)result >= 0) )
    {
      if ( pDevice->m_Legacy )
      {
        v23 = -1073741808;
        v24 = 10;
      }
      else
      {
        v9 = m_Globals->FxPoolTrackingOn == 0;
        Tag = m_Globals->Tag;
        v25.m128i_i64[0] = 0LL;
        v25.m128i_i64[1] = 256LL;
        if ( v9 )
          v11 = 0LL;
        else
          v11 = retaddr;
        v12 = FxPoolAllocator(m_Globals, &m_Globals->FxPoolFrameworks, &v25, 0x40uLL, Tag, v11);
        v14 = (FxDeviceInterface *)v12;
        if ( v12 )
        {
          *(_OWORD *)v12 = 0LL;
          *((_OWORD *)v12 + 2) = 0LL;
          *((_OWORD *)v12 + 1) = 0LL;
          v12[6] = 0LL;
          *((_WORD *)v12 + 28) = 256;
          *(_GUID *)v12 = *InterfaceClassGUID;
          if ( ReferenceString )
          {
            _a2 = FxDuplicateUnicodeString(m_Globals, ReferenceString, (_UNICODE_STRING *)v12 + 1);
            v16 = _a2;
            if ( _a2 < 0 )
            {
              WPP_IFR_SF_qL(m_Globals, 2u, 2u, 0xCu, WPP_FxDeviceInterfaceAPI_cpp_Traceguids, Device, _a2);
              v19 = v14;
              goto LABEL_26;
            }
          }
          m_PkgPnp = pDevice->m_PkgPnp;
          FxWaitLockInternal::AcquireLock(&m_PkgPnp->m_DeviceInterfaceLock, v13, 0LL);
          SafePhysicalDevice = FxDevice::GetSafePhysicalDevice(pDevice);
          if ( SafePhysicalDevice )
          {
            v16 = FxDeviceInterface::Register(v14, SafePhysicalDevice);
            v19 = v14;
            if ( v16 < 0 )
              goto LABEL_16;
          }
          else
          {
            v16 = 0;
          }
          p_m_DeviceInterfaceHead = &m_PkgPnp->m_DeviceInterfaceHead;
          v19 = v14;
          for ( i = m_PkgPnp->m_DeviceInterfaceHead.Next; i; i = i->Next )
            p_m_DeviceInterfaceHead = i;
          p_m_DeviceInterfaceHead->Next = &v14->m_Entry;
LABEL_16:
          m_PkgPnp->m_DeviceInterfaceLock.m_OwningThread = 0LL;
          KeSetEvent(&m_PkgPnp->m_DeviceInterfaceLock.m_Event.m_Event, 0, 0);
          KeLeaveCriticalRegion();
          if ( v16 >= 0 )
            return (unsigned int)v16;
LABEL_26:
          FxDeviceInterface::`scalar deleting destructor'(v19, v22);
          return (unsigned int)v16;
        }
        v23 = -1073741670;
        v24 = 11;
      }
      WPP_IFR_SF_qL(m_Globals, 2u, 2u, v24, WPP_FxDeviceInterfaceAPI_cpp_Traceguids, Device, v23);
      return v23;
    }
  }
  return result;
}
