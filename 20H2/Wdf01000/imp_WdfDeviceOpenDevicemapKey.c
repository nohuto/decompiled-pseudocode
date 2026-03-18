/*
 * XREFs of imp_WdfDeviceOpenDevicemapKey @ 0x1C0047520
 * Callers:
 *     <none>
 * Callees:
 *     ?FxValidateUnicodeString@@YAJPEAU_FX_DRIVER_GLOBALS@@PEBU_UNICODE_STRING@@@Z @ 0x1C000A094 (-FxValidateUnicodeString@@YAJPEAU_FX_DRIVER_GLOBALS@@PEBU_UNICODE_STRING@@@Z.c)
 *     ?FxValidateObjectAttributes@@YAJPEAU_FX_DRIVER_GLOBALS@@PEAU_WDF_OBJECT_ATTRIBUTES@@K@Z @ 0x1C000A0E0 (-FxValidateObjectAttributes@@YAJPEAU_FX_DRIVER_GLOBALS@@PEAU_WDF_OBJECT_ATTRIBUTES@@K@Z.c)
 *     WPP_IFR_SF_d @ 0x1C000A9D8 (WPP_IFR_SF_d.c)
 *     ?Commit@FxObject@@QEAAJPEAU_WDF_OBJECT_ATTRIBUTES@@PEAPEAXPEAV1@E@Z @ 0x1C000B520 (-Commit@FxObject@@QEAAJPEAU_WDF_OBJECT_ATTRIBUTES@@PEAPEAXPEAV1@E@Z.c)
 *     ?FxObjectHandleGetPtr@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAXGPEAPEAX@Z @ 0x1C000BE90 (-FxObjectHandleGetPtr@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAXGPEAPEAX@Z.c)
 *     ?FxObjectHandleAlloc@@YAPEAXPEAU_FX_DRIVER_GLOBALS@@W4_POOL_TYPE@@_KKPEAU_WDF_OBJECT_ATTRIBUTES@@GW4FxObjectType@@@Z @ 0x1C000BF84 (-FxObjectHandleAlloc@@YAPEAXPEAU_FX_DRIVER_GLOBALS@@W4_POOL_TYPE@@_KKPEAU_WDF_OBJECT_ATTRIBUTES@.c)
 *     ?FxVerifierCheckIrqlLevel@@YAJPEAU_FX_DRIVER_GLOBALS@@E@Z @ 0x1C000CF7C (-FxVerifierCheckIrqlLevel@@YAJPEAU_FX_DRIVER_GLOBALS@@E@Z.c)
 *     ??0FxRegKey@@QEAA@PEAU_FX_DRIVER_GLOBALS@@@Z @ 0x1C001733C (--0FxRegKey@@QEAA@PEAU_FX_DRIVER_GLOBALS@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C001CA60 (_guard_dispatch_icall_nop.c)
 *     ?FxVerifierDbgBreakPoint@@YAXPEAU_FX_DRIVER_GLOBALS@@@Z @ 0x1C002DD0C (-FxVerifierDbgBreakPoint@@YAXPEAU_FX_DRIVER_GLOBALS@@@Z.c)
 *     ?OpenDevicemapKeyWorker@FxDevice@@QEAAJPEAU_FX_DRIVER_GLOBALS@@PEBU_UNICODE_STRING@@KPEAVFxRegKey@@@Z @ 0x1C00500D8 (-OpenDevicemapKeyWorker@FxDevice@@QEAAJPEAU_FX_DRIVER_GLOBALS@@PEBU_UNICODE_STRING@@KPEAVFxRegKe.c)
 *     ?FxVerifierNullBugCheck@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAX@Z @ 0x1C0058968 (-FxVerifierNullBugCheck@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAX@Z.c)
 *     ?ClearEvtCallbacks@FxObject@@QEAAXXZ @ 0x1C00595BC (-ClearEvtCallbacks@FxObject@@QEAAXXZ.c)
 */

__int64 __fastcall imp_WdfDeviceOpenDevicemapKey(
        _WDF_DRIVER_GLOBALS *DriverGlobals,
        WDFDEVICE__ *Device,
        const _UNICODE_STRING *KeyName,
        unsigned int DesiredAccess,
        _WDF_OBJECT_ATTRIBUTES *KeyAttributes,
        WDFKEY__ **Key)
{
  WDFKEY__ **v8; // r14
  _FX_DRIVER_GLOBALS *m_Globals; // rbx
  __int64 result; // rax
  int _a1; // edi
  unsigned __int16 v12; // r9
  _WDF_OBJECT_ATTRIBUTES *v13; // rsi
  FxRegKey *v14; // rax
  FxRegKey *v15; // rax
  FxRegKey *v16; // rdi
  FxDevice *v17; // rcx
  int v18; // esi
  WDFKEY__ *keyHandle; // [rsp+40h] [rbp-38h] BYREF
  void *retaddr; // [rsp+78h] [rbp+0h]
  FxDevice *pDevice; // [rsp+80h] [rbp+8h] BYREF

  pDevice = 0LL;
  keyHandle = 0LL;
  FxObjectHandleGetPtr(
    (_FX_DRIVER_GLOBALS *)DriverGlobals[-8].DriverName,
    (unsigned __int64)Device,
    0x1002u,
    (void **)&pDevice);
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
LABEL_6:
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
    if ( (int)result >= 0 )
    {
      v14 = (FxRegKey *)FxObjectHandleAlloc(
                          m_Globals,
                          ExDefaultNonPagedPoolType,
                          0x78uLL,
                          0,
                          v13,
                          0,
                          FxObjectTypeExternal);
      if ( v14 )
      {
        FxRegKey::FxRegKey(v14, m_Globals);
        v16 = v15;
      }
      else
      {
        v16 = 0LL;
      }
      if ( !v16 )
      {
        _a1 = -1073741670;
        v12 = 21;
        goto LABEL_6;
      }
      v16->m_DeviceBase = pDevice;
      v18 = FxObject::Commit(v16, (_FX_DRIVER_GLOBALS *)v13, (void **)&keyHandle, 0LL, 1u);
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
  }
  return result;
}
