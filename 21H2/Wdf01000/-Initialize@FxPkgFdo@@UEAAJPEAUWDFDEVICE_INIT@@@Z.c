/*
 * XREFs of ?Initialize@FxPkgFdo@@UEAAJPEAUWDFDEVICE_INIT@@@Z @ 0x1C0022B80
 * Callers:
 *     <none>
 * Callees:
 *     ?Commit@FxObject@@QEAAJPEAU_WDF_OBJECT_ATTRIBUTES@@PEAPEAXPEAV1@E@Z @ 0x1C0005B30 (-Commit@FxObject@@QEAAJPEAU_WDF_OBJECT_ATTRIBUTES@@PEAPEAXPEAV1@E@Z.c)
 *     ?AddRef@FxObject@@QEAAKPEAXJPEBD@Z @ 0x1C00196F8 (-AddRef@FxObject@@QEAAKPEAXJPEBD@Z.c)
 *     ?Initialize@FxPkgPnp@@UEAAJPEAUWDFDEVICE_INIT@@@Z @ 0x1C00225C0 (-Initialize@FxPkgPnp@@UEAAJPEAUWDFDEVICE_INIT@@@Z.c)
 *     ?AllocateEnumInfo@FxPkgPnp@@QEAAJXZ @ 0x1C00231F8 (-AllocateEnumInfo@FxPkgPnp@@QEAAJXZ.c)
 *     ?_ComputeTotalDescriptionSize@FxChildList@@SAJPEAU_FX_DRIVER_GLOBALS@@PEAU_WDF_CHILD_LIST_CONFIG@@PEA_K@Z @ 0x1C00244C4 (-_ComputeTotalDescriptionSize@FxChildList@@SAJPEAU_FX_DRIVER_GLOBALS@@PEAU_WDF_CHILD_LIST_CONFIG.c)
 *     ?_CreateAndInit@FxChildList@@SAJPEAPEAV1@PEAU_FX_DRIVER_GLOBALS@@PEAU_WDF_OBJECT_ATTRIBUTES@@_KPEAVFxDevice@@PEAU_WDF_CHILD_LIST_CONFIG@@E@Z @ 0x1C0025908 (-_CreateAndInit@FxChildList@@SAJPEAPEAV1@PEAU_FX_DRIVER_GLOBALS@@PEAU_WDF_OBJECT_ATTRIBUTES@@_KP.c)
 *     ?ClearEvtCallbacks@FxObject@@QEAAXXZ @ 0x1C0032F1C (-ClearEvtCallbacks@FxObject@@QEAAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C0036BA0 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0036C00 (memset.c)
 */

int __fastcall FxPkgFdo::Initialize(FxPkgFdo *this, WDFDEVICE_INIT *DeviceInit)
{
  _FX_DRIVER_GLOBALS *m_Globals; // rdi
  int result; // eax
  FxObject **p_m_StaticDeviceList; // rsi
  int v6; // eax
  FxObject *v7; // rcx
  int v8; // edi
  __int64 v9; // rcx
  _WDF_CHILD_LIST_CONFIG config; // [rsp+40h] [rbp-68h] BYREF
  WDFCHILDLIST__ *hList; // [rsp+B0h] [rbp+8h] BYREF

  hList = 0LL;
  m_Globals = this->m_Globals;
  result = FxPkgPnp::Initialize(this, DeviceInit);
  if ( result >= 0 )
  {
    result = FxPkgPnp::AllocateEnumInfo(this);
    if ( result >= 0 )
    {
      memset(&config, 0, sizeof(config));
      config.EvtChildListCreateDevice = 0LL;
      config.Size = 96;
      config.IdentificationDescriptionSize = 16;
      result = FxChildList::_ComputeTotalDescriptionSize(m_Globals, &config, (unsigned __int64 *)&hList);
      if ( result >= 0 )
      {
        p_m_StaticDeviceList = &this->m_StaticDeviceList;
        result = FxChildList::_CreateAndInit(
                   &this->m_StaticDeviceList,
                   m_Globals,
                   0LL,
                   (unsigned __int64)hList,
                   this->m_Device,
                   &config,
                   1u);
        if ( result >= 0 )
        {
          v6 = FxObject::Commit(*p_m_StaticDeviceList, 0LL, (void **)&hList, this->m_DeviceBase, 1u);
          v7 = *p_m_StaticDeviceList;
          v8 = v6;
          if ( v6 < 0 )
          {
            FxObject::ClearEvtCallbacks(v7);
            (*(void (__fastcall **)(__int64))(*(_QWORD *)v9 + 48LL))(v9);
            *p_m_StaticDeviceList = 0LL;
          }
          else
          {
            FxObject::AddRef(v7, this, 447, "minkernel\\wdf\\framework\\shared\\irphandlers\\pnp\\km\\fxpkgfdokm.cpp");
          }
          return v8;
        }
      }
    }
  }
  return result;
}
