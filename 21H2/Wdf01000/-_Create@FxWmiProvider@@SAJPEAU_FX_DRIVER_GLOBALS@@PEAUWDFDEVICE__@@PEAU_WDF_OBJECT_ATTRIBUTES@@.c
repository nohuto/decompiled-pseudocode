/*
 * XREFs of ?_Create@FxWmiProvider@@SAJPEAU_FX_DRIVER_GLOBALS@@PEAUWDFDEVICE__@@PEAU_WDF_OBJECT_ATTRIBUTES@@PEAU_WDF_WMI_PROVIDER_CONFIG@@PEAPEAUWDFWMIPROVIDER__@@PEAPEAV1@@Z @ 0x1C0025E7C
 * Callers:
 *     imp_WdfWmiInstanceCreate @ 0x1C0025AA0 (imp_WdfWmiInstanceCreate.c)
 *     imp_WdfWmiProviderCreate @ 0x1C005DDA0 (imp_WdfWmiProviderCreate.c)
 * Callees:
 *     ?FxObjectHandleGetPtr@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAXGPEAPEAX@Z @ 0x1C0005610 (-FxObjectHandleGetPtr@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAXGPEAPEAX@Z.c)
 *     ?Commit@FxObject@@QEAAJPEAU_WDF_OBJECT_ATTRIBUTES@@PEAPEAXPEAV1@E@Z @ 0x1C0005B30 (-Commit@FxObject@@QEAAJPEAU_WDF_OBJECT_ATTRIBUTES@@PEAPEAXPEAV1@E@Z.c)
 *     ?FxValidateObjectAttributes@@YAJPEAU_FX_DRIVER_GLOBALS@@PEAU_WDF_OBJECT_ATTRIBUTES@@K@Z @ 0x1C00062C0 (-FxValidateObjectAttributes@@YAJPEAU_FX_DRIVER_GLOBALS@@PEAU_WDF_OBJECT_ATTRIBUTES@@K@Z.c)
 *     ?FxObjectHandleAllocCommon@@YAPEAXPEAU_FX_DRIVER_GLOBALS@@UFxPoolTypeOrPoolFlags@@_KKPEAU_WDF_OBJECT_ATTRIBUTES@@GW4FxObjectType@@@Z @ 0x1C0006B70 (-FxObjectHandleAllocCommon@@YAPEAXPEAU_FX_DRIVER_GLOBALS@@UFxPoolTypeOrPoolFlags@@_KKPEAU_WDF_OB.c)
 *     ?AddProvider@FxWmiIrpHandler@@QEAAJPEAVFxWmiProvider@@PEAE@Z @ 0x1C0026040 (-AddProvider@FxWmiIrpHandler@@QEAAJPEAVFxWmiProvider@@PEAE@Z.c)
 *     ??0FxWmiProvider@@QEAA@PEAU_FX_DRIVER_GLOBALS@@PEAU_WDF_WMI_PROVIDER_CONFIG@@PEAVFxDevice@@@Z @ 0x1C0026138 (--0FxWmiProvider@@QEAA@PEAU_FX_DRIVER_GLOBALS@@PEAU_WDF_WMI_PROVIDER_CONFIG@@PEAVFxDevice@@@Z.c)
 *     WPP_IFR_SF_d @ 0x1C00306F4 (WPP_IFR_SF_d.c)
 *     ?ClearEvtCallbacks@FxObject@@QEAAXXZ @ 0x1C0032F1C (-ClearEvtCallbacks@FxObject@@QEAAXXZ.c)
 *     __security_check_cookie @ 0x1C0035840 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C0036BA0 (_guard_dispatch_icall_nop.c)
 *     WPP_IFR_SF_DDd @ 0x1C0052E4C (WPP_IFR_SF_DDd.c)
 *     ?DecrementUpdateCount@FxWmiIrpHandler@@AEAAXXZ @ 0x1C005E01C (-DecrementUpdateCount@FxWmiIrpHandler@@AEAAXXZ.c)
 *     WPP_IFR_SF_Dddd @ 0x1C005E29C (WPP_IFR_SF_Dddd.c)
 *     ?RemoveProvider@FxWmiIrpHandler@@IEAAXPEAVFxWmiProvider@@@Z @ 0x1C005F30C (-RemoveProvider@FxWmiIrpHandler@@IEAAXPEAVFxWmiProvider@@@Z.c)
 *     ?UpdateGuids@FxWmiIrpHandler@@AEAAXXZ @ 0x1C005F37C (-UpdateGuids@FxWmiIrpHandler@@AEAAXXZ.c)
 */

__int64 __fastcall FxWmiProvider::_Create(
        _FX_DRIVER_GLOBALS *CallersGlobals,
        WDFDEVICE__ *Device,
        _WDF_OBJECT_ATTRIBUTES *ProviderAttributes,
        _WDF_WMI_PROVIDER_CONFIG *WmiProviderConfig,
        WDFWMIPROVIDER__ **WmiProvider,
        FxWmiProvider **Provider)
{
  _FX_DRIVER_GLOBALS *m_Globals; // rdi
  __int64 result; // rax
  unsigned int v10; // r8d
  unsigned __int16 v11; // r9
  unsigned int _a2; // ecx
  unsigned int Flags; // edx
  FxWmiProvider *v14; // rax
  FxWmiProvider *v15; // rax
  FxWmiProvider *v16; // rbx
  int v17; // edi
  unsigned int v18; // ebx
  unsigned __int16 v19; // r9
  const _GUID *AssignDriverAsDefaultParent; // [rsp+20h] [rbp-69h]
  int _a3; // [rsp+30h] [rbp-59h]
  int globals; // [rsp+38h] [rbp-51h]
  int v23; // [rsp+40h] [rbp-49h]
  unsigned __int8 update[8]; // [rsp+50h] [rbp-39h] BYREF
  FxDevice *pDevice; // [rsp+58h] [rbp-31h] BYREF
  void *hProvider; // [rsp+60h] [rbp-29h] BYREF
  FxPoolTypeOrPoolFlags v27; // [rsp+70h] [rbp-19h] BYREF
  _GUID zeroGuid; // [rsp+80h] [rbp-9h] BYREF

  pDevice = 0LL;
  hProvider = 0LL;
  FxObjectHandleGetPtr(CallersGlobals, (unsigned __int64)Device, 0x1002u, (void **)&pDevice);
  update[0] = 0;
  m_Globals = pDevice->m_Globals;
  *Provider = 0LL;
  *WmiProvider = 0LL;
  result = FxValidateObjectAttributes(m_Globals, ProviderAttributes, 1);
  if ( (int)result >= 0 )
  {
    _a2 = WmiProviderConfig->Size;
    if ( WmiProviderConfig->Size == 40 )
    {
      Flags = WmiProviderConfig->Flags;
      if ( (Flags & 0xFFFFFFF8) != 0 )
      {
        v18 = -1073741811;
        WPP_IFR_SF_DDd(
          m_Globals,
          (unsigned __int8)WPP_FxWmiProvider_cpp_Traceguids,
          0xCu,
          0xBu,
          WPP_FxWmiProvider_cpp_Traceguids,
          Flags,
          7,
          -1073741811);
      }
      else
      {
        if ( (Flags & 0xFFFFFFFB) != 0 && (Flags & 4) != 0 )
        {
          v19 = 12;
          v18 = -1073741811;
        }
        else
        {
          if ( WmiProviderConfig->EvtWmiProviderFunctionControl && (Flags & 6) == 0 )
          {
            WPP_IFR_SF_Dddd(
              m_Globals,
              Flags,
              v10,
              v11,
              AssignDriverAsDefaultParent,
              WmiProviderConfig->Flags,
              _a3,
              globals,
              v23);
            return 3221225485LL;
          }
          zeroGuid = 0LL;
          if ( RtlCompareMemory(&WmiProviderConfig->Guid, &zeroGuid, 0x10uLL) == 16 )
          {
            v18 = -1073741811;
            v19 = 14;
          }
          else
          {
            *(_QWORD *)&v27.UsePoolType = 0LL;
            v27.u.PoolFlags = 64LL;
            v14 = (FxWmiProvider *)FxObjectHandleAllocCommon(
                                     m_Globals,
                                     &v27,
                                     0xD8uLL,
                                     0,
                                     ProviderAttributes,
                                     0,
                                     FxObjectTypeExternal);
            if ( v14 )
            {
              FxWmiProvider::FxWmiProvider(v14, m_Globals, WmiProviderConfig, pDevice);
              v16 = v15;
              if ( v15 )
              {
                v17 = FxWmiIrpHandler::AddProvider(pDevice->m_PkgWmi, v15, update);
                if ( v17 >= 0 )
                {
                  v17 = FxObject::Commit(v16, (_FX_DRIVER_GLOBALS *)ProviderAttributes, &hProvider, pDevice, 1u);
                  if ( v17 >= 0 )
                  {
                    *WmiProvider = (WDFWMIPROVIDER__ *)hProvider;
                    *Provider = v16;
                    if ( update[0] )
                      FxWmiIrpHandler::UpdateGuids(pDevice->m_PkgWmi);
                    return (unsigned int)v17;
                  }
                  FxWmiIrpHandler::RemoveProvider(pDevice->m_PkgWmi, v16);
                }
                if ( update[0] )
                  FxWmiIrpHandler::DecrementUpdateCount(pDevice->m_PkgWmi);
                FxObject::ClearEvtCallbacks(v16);
                ((void (*)(void))v16->DeleteObject)();
                return (unsigned int)v17;
              }
            }
            v18 = -1073741670;
            v19 = 15;
          }
        }
        WPP_IFR_SF_d(m_Globals, 2u, 0xCu, v19, WPP_FxWmiProvider_cpp_Traceguids, v18);
      }
    }
    else
    {
      v18 = -1073741820;
      WPP_IFR_SF_DDd(
        m_Globals,
        (unsigned __int8)WPP_FxWmiProvider_cpp_Traceguids,
        0xCu,
        0xAu,
        WPP_FxWmiProvider_cpp_Traceguids,
        _a2,
        40,
        -1073741820);
    }
    return v18;
  }
  return result;
}
