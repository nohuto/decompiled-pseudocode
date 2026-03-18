/*
 * XREFs of imp_WdfChildListCreate @ 0x1C005A720
 * Callers:
 *     <none>
 * Callees:
 *     ?FxObjectHandleGetPtr@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAXGPEAPEAX@Z @ 0x1C0005610 (-FxObjectHandleGetPtr@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAXGPEAPEAX@Z.c)
 *     ?FxVerifierCheckIrqlLevel@@YAJPEAU_FX_DRIVER_GLOBALS@@E@Z @ 0x1C00058D8 (-FxVerifierCheckIrqlLevel@@YAJPEAU_FX_DRIVER_GLOBALS@@E@Z.c)
 *     ?Commit@FxObject@@QEAAJPEAU_WDF_OBJECT_ATTRIBUTES@@PEAPEAXPEAV1@E@Z @ 0x1C0005B30 (-Commit@FxObject@@QEAAJPEAU_WDF_OBJECT_ATTRIBUTES@@PEAPEAXPEAV1@E@Z.c)
 *     ?FxValidateObjectAttributes@@YAJPEAU_FX_DRIVER_GLOBALS@@PEAU_WDF_OBJECT_ATTRIBUTES@@K@Z @ 0x1C00062C0 (-FxValidateObjectAttributes@@YAJPEAU_FX_DRIVER_GLOBALS@@PEAU_WDF_OBJECT_ATTRIBUTES@@K@Z.c)
 *     WPP_IFR_SF_q @ 0x1C00198E8 (WPP_IFR_SF_q.c)
 *     ?_CreateAndInit@FxChildList@@SAJPEAPEAV1@PEAU_FX_DRIVER_GLOBALS@@PEAU_WDF_OBJECT_ATTRIBUTES@@_KPEAVFxDevice@@PEAU_WDF_CHILD_LIST_CONFIG@@E@Z @ 0x1C0025908 (-_CreateAndInit@FxChildList@@SAJPEAPEAV1@PEAU_FX_DRIVER_GLOBALS@@PEAU_WDF_OBJECT_ATTRIBUTES@@_KP.c)
 *     WPP_IFR_SF_d @ 0x1C00306F4 (WPP_IFR_SF_d.c)
 *     ?_ValidateConfig@FxChildList@@SAJPEAU_FX_DRIVER_GLOBALS@@PEAU_WDF_CHILD_LIST_CONFIG@@PEA_K@Z @ 0x1C0030EA0 (-_ValidateConfig@FxChildList@@SAJPEAU_FX_DRIVER_GLOBALS@@PEAU_WDF_CHILD_LIST_CONFIG@@PEA_K@Z.c)
 *     ?ClearEvtCallbacks@FxObject@@QEAAXXZ @ 0x1C0032F1C (-ClearEvtCallbacks@FxObject@@QEAAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C0036BA0 (_guard_dispatch_icall_nop.c)
 *     ?FxVerifierNullBugCheck@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAX@Z @ 0x1C006CAD4 (-FxVerifierNullBugCheck@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAX@Z.c)
 */

__int64 __fastcall imp_WdfChildListCreate(
        _WDF_DRIVER_GLOBALS *DriverGlobals,
        WDFDEVICE__ *Device,
        _WDF_CHILD_LIST_CONFIG *Config,
        _WDF_OBJECT_ATTRIBUTES *DeviceListAttributes,
        WDFCHILDLIST__ **DeviceList)
{
  _FX_DRIVER_GLOBALS *m_Globals; // rbx
  void **v9; // rdi
  __int64 result; // rax
  int v11; // esi
  FxChildList *v12; // rsi
  int v13; // eax
  unsigned int v14; // edi
  FxChildList *pList; // [rsp+40h] [rbp-10h] BYREF
  void *retaddr; // [rsp+78h] [rbp+28h]
  FxDevice *pDevice; // [rsp+80h] [rbp+30h] BYREF
  unsigned __int64 totalDescriptionSize; // [rsp+90h] [rbp+40h] BYREF

  pDevice = 0LL;
  pList = 0LL;
  totalDescriptionSize = 0LL;
  FxObjectHandleGetPtr((_FX_DRIVER_GLOBALS *)&DriverGlobals[-8], (unsigned __int64)Device, 0x1002u, (void **)&pDevice);
  m_Globals = pDevice->m_Globals;
  if ( m_Globals->FxVerboseOn )
    WPP_IFR_SF_q(m_Globals, 5u, 0xCu, 0xAu, WPP_FxChildListAPI_cpp_Traceguids, Device);
  if ( !Config )
    FxVerifierNullBugCheck(m_Globals, retaddr);
  v9 = (void **)DeviceList;
  if ( !DeviceList )
    FxVerifierNullBugCheck(m_Globals, retaddr);
  *DeviceList = 0LL;
  result = FxVerifierCheckIrqlLevel(m_Globals, 0);
  if ( (int)result >= 0 )
  {
    v11 = FxChildList::_ValidateConfig(m_Globals, Config, &totalDescriptionSize);
    if ( v11 >= 0 )
    {
      result = FxValidateObjectAttributes(m_Globals, DeviceListAttributes, 1);
      if ( (int)result >= 0 )
      {
        result = ((__int64 (__fastcall *)(FxDevice *))pDevice->AllocateEnumInfo)(pDevice);
        if ( (int)result >= 0 )
        {
          result = FxChildList::_CreateAndInit(
                     &pList,
                     m_Globals,
                     DeviceListAttributes,
                     totalDescriptionSize,
                     pDevice,
                     Config,
                     0);
          if ( (int)result >= 0 )
          {
            v12 = pList;
            v13 = FxObject::Commit(pList, (_FX_DRIVER_GLOBALS *)DeviceListAttributes, v9, pDevice, 1u);
            v14 = v13;
            if ( v13 >= 0 )
            {
              pDevice->SetDeviceTelemetryInfoFlags(pDevice, DeviceInfoHasDynamicChildren);
            }
            else
            {
              WPP_IFR_SF_d(m_Globals, 2u, 0xCu, 0xCu, WPP_FxChildListAPI_cpp_Traceguids, v13);
              FxObject::ClearEvtCallbacks(v12);
              ((void (*)(void))v12->DeleteObject)();
            }
            return v14;
          }
        }
      }
    }
    else
    {
      WPP_IFR_SF_q(m_Globals, 2u, 0xCu, 0xBu, WPP_FxChildListAPI_cpp_Traceguids, Device);
      return (unsigned int)v11;
    }
  }
  return result;
}
