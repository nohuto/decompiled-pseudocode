/*
 * XREFs of imp_WdfDeviceOpenDevicemapKey @ 0x1C00631A0
 * Callers:
 *     <none>
 * Callees:
 *     ?FxObjectHandleGetPtr@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAXGPEAPEAX@Z @ 0x1C0005610 (-FxObjectHandleGetPtr@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAXGPEAPEAX@Z.c)
 *     ?FxVerifierCheckIrqlLevel@@YAJPEAU_FX_DRIVER_GLOBALS@@E@Z @ 0x1C00058D8 (-FxVerifierCheckIrqlLevel@@YAJPEAU_FX_DRIVER_GLOBALS@@E@Z.c)
 *     ?Commit@FxObject@@QEAAJPEAU_WDF_OBJECT_ATTRIBUTES@@PEAPEAXPEAV1@E@Z @ 0x1C0005B30 (-Commit@FxObject@@QEAAJPEAU_WDF_OBJECT_ATTRIBUTES@@PEAPEAXPEAV1@E@Z.c)
 *     ?FxValidateObjectAttributes@@YAJPEAU_FX_DRIVER_GLOBALS@@PEAU_WDF_OBJECT_ATTRIBUTES@@K@Z @ 0x1C00062C0 (-FxValidateObjectAttributes@@YAJPEAU_FX_DRIVER_GLOBALS@@PEAU_WDF_OBJECT_ATTRIBUTES@@K@Z.c)
 *     ?FxObjectHandleAllocCommon@@YAPEAXPEAU_FX_DRIVER_GLOBALS@@UFxPoolTypeOrPoolFlags@@_KKPEAU_WDF_OBJECT_ATTRIBUTES@@GW4FxObjectType@@@Z @ 0x1C0006B70 (-FxObjectHandleAllocCommon@@YAPEAXPEAU_FX_DRIVER_GLOBALS@@UFxPoolTypeOrPoolFlags@@_KKPEAU_WDF_OB.c)
 *     ?FxValidateUnicodeString@@YAJPEAU_FX_DRIVER_GLOBALS@@PEBU_UNICODE_STRING@@@Z @ 0x1C0015654 (-FxValidateUnicodeString@@YAJPEAU_FX_DRIVER_GLOBALS@@PEBU_UNICODE_STRING@@@Z.c)
 *     ??0FxRegKey@@QEAA@PEAU_FX_DRIVER_GLOBALS@@@Z @ 0x1C0015BCC (--0FxRegKey@@QEAA@PEAU_FX_DRIVER_GLOBALS@@@Z.c)
 *     WPP_IFR_SF_d @ 0x1C00306F4 (WPP_IFR_SF_d.c)
 *     ?ClearEvtCallbacks@FxObject@@QEAAXXZ @ 0x1C0032F1C (-ClearEvtCallbacks@FxObject@@QEAAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C0036BA0 (_guard_dispatch_icall_nop.c)
 *     ?FxVerifierDbgBreakPoint@@YAXPEAU_FX_DRIVER_GLOBALS@@@Z @ 0x1C0052DF0 (-FxVerifierDbgBreakPoint@@YAXPEAU_FX_DRIVER_GLOBALS@@@Z.c)
 *     ?OpenDevicemapKeyWorker@FxDevice@@QEAAJPEAU_FX_DRIVER_GLOBALS@@PEBU_UNICODE_STRING@@KPEAVFxRegKey@@@Z @ 0x1C0069130 (-OpenDevicemapKeyWorker@FxDevice@@QEAAJPEAU_FX_DRIVER_GLOBALS@@PEBU_UNICODE_STRING@@KPEAVFxRegKe.c)
 *     ?FxVerifierNullBugCheck@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAX@Z @ 0x1C006CAD4 (-FxVerifierNullBugCheck@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAX@Z.c)
 */

__int64 __fastcall imp_WdfDeviceOpenDevicemapKey(
        _WDF_DRIVER_GLOBALS *DriverGlobals,
        WDFDEVICE__ *Device,
        const _UNICODE_STRING *KeyName,
        unsigned int DesiredAccess,
        _WDF_OBJECT_ATTRIBUTES *KeyAttributes,
        WDFKEY__ **Key)
{
  WDFKEY__ **v8; // r15
  _FX_DRIVER_GLOBALS *m_Globals; // rbx
  __int64 result; // rax
  int _a1; // edi
  unsigned __int16 v12; // r9
  _WDF_OBJECT_ATTRIBUTES *v13; // rsi
  FxRegKey *v14; // rax
  FxObject *v15; // rax
  FxRegKey *v16; // rdi
  FxDevice *v17; // rcx
  int v18; // esi
  WDFKEY__ *keyHandle; // [rsp+40h] [rbp-20h] BYREF
  FxPoolTypeOrPoolFlags v20; // [rsp+50h] [rbp-10h] BYREF
  void *retaddr; // [rsp+88h] [rbp+28h]
  FxDevice *pDevice; // [rsp+90h] [rbp+30h] BYREF

  pDevice = 0LL;
  keyHandle = 0LL;
  FxObjectHandleGetPtr((_FX_DRIVER_GLOBALS *)&DriverGlobals[-8], (unsigned __int64)Device, 0x1002u, (void **)&pDevice);
  v8 = Key;
  m_Globals = pDevice->m_Globals;
  if ( !Key )
    FxVerifierNullBugCheck(m_Globals, retaddr);
  *Key = 0LL;
  result = FxValidateUnicodeString(m_Globals, KeyName);
  if ( (int)result >= 0 )
  {
    if ( !KeyName->Length )
    {
      _a1 = -1073741811;
      v12 = 20;
LABEL_17:
      WPP_IFR_SF_d(m_Globals, 2u, 0x12u, v12, WPP_FxDeviceApi_cpp_Traceguids, _a1);
      return (unsigned int)_a1;
    }
    _a1 = FxVerifierCheckIrqlLevel(m_Globals, 0);
    if ( _a1 < 0 )
    {
      FxVerifierDbgBreakPoint(m_Globals);
      return (unsigned int)_a1;
    }
    v13 = KeyAttributes;
    result = FxValidateObjectAttributes(m_Globals, KeyAttributes, 1);
    if ( (int)result < 0 )
      return result;
    *(_QWORD *)&v20.UsePoolType = 0LL;
    v20.u.PoolFlags = 64LL;
    v14 = (FxRegKey *)FxObjectHandleAllocCommon(m_Globals, &v20, 0x78uLL, 0, v13, 0, FxObjectTypeExternal);
    if ( !v14 || (FxRegKey::FxRegKey(v14, m_Globals), (v16 = (FxRegKey *)v15) == 0LL) )
    {
      _a1 = -1073741670;
      v12 = 21;
      goto LABEL_17;
    }
    v15->m_DeviceBase = pDevice;
    v18 = FxObject::Commit(v15, (_FX_DRIVER_GLOBALS *)v13, (void **)&keyHandle, 0LL, 1u);
    if ( v18 < 0 || (v18 = FxDevice::OpenDevicemapKeyWorker(v17, m_Globals, KeyName, DesiredAccess, v16), v18 < 0) )
    {
      FxObject::ClearEvtCallbacks(v16);
      v16->DeleteObject(v16);
    }
    else
    {
      *v8 = keyHandle;
    }
    return (unsigned int)v18;
  }
  return result;
}
