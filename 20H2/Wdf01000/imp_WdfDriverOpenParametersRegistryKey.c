/*
 * XREFs of imp_WdfDriverOpenParametersRegistryKey @ 0x1C0017120
 * Callers:
 *     <none>
 * Callees:
 *     ?FxValidateObjectAttributes@@YAJPEAU_FX_DRIVER_GLOBALS@@PEAU_WDF_OBJECT_ATTRIBUTES@@K@Z @ 0x1C000A0E0 (-FxValidateObjectAttributes@@YAJPEAU_FX_DRIVER_GLOBALS@@PEAU_WDF_OBJECT_ATTRIBUTES@@K@Z.c)
 *     ?Commit@FxObject@@QEAAJPEAU_WDF_OBJECT_ATTRIBUTES@@PEAPEAXPEAV1@E@Z @ 0x1C000B520 (-Commit@FxObject@@QEAAJPEAU_WDF_OBJECT_ATTRIBUTES@@PEAPEAXPEAV1@E@Z.c)
 *     ?FxObjectHandleGetPtr@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAXGPEAPEAX@Z @ 0x1C000BE90 (-FxObjectHandleGetPtr@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAXGPEAPEAX@Z.c)
 *     ?FxObjectHandleAlloc@@YAPEAXPEAU_FX_DRIVER_GLOBALS@@W4_POOL_TYPE@@_KKPEAU_WDF_OBJECT_ATTRIBUTES@@GW4FxObjectType@@@Z @ 0x1C000BF84 (-FxObjectHandleAlloc@@YAPEAXPEAU_FX_DRIVER_GLOBALS@@W4_POOL_TYPE@@_KKPEAU_WDF_OBJECT_ATTRIBUTES@.c)
 *     ?FxVerifierCheckIrqlLevel@@YAJPEAU_FX_DRIVER_GLOBALS@@E@Z @ 0x1C000CF7C (-FxVerifierCheckIrqlLevel@@YAJPEAU_FX_DRIVER_GLOBALS@@E@Z.c)
 *     ??0FxRegKey@@QEAA@PEAU_FX_DRIVER_GLOBALS@@@Z @ 0x1C001733C (--0FxRegKey@@QEAA@PEAU_FX_DRIVER_GLOBALS@@@Z.c)
 *     __security_check_cookie @ 0x1C001A350 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C001CA60 (_guard_dispatch_icall_nop.c)
 *     ?FxVerifierNullBugCheck@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAX@Z @ 0x1C0058968 (-FxVerifierNullBugCheck@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAX@Z.c)
 *     ?ClearEvtCallbacks@FxObject@@QEAAXXZ @ 0x1C00595BC (-ClearEvtCallbacks@FxObject@@QEAAXXZ.c)
 */

__int64 __fastcall imp_WdfDriverOpenParametersRegistryKey(
        _WDF_DRIVER_GLOBALS *DriverGlobals,
        WDFDRIVER__ *Driver,
        ACCESS_MASK DesiredAccess,
        _WDF_OBJECT_ATTRIBUTES *KeyAttributes,
        WDFKEY__ **Key)
{
  _FX_DRIVER_GLOBALS *DriverName; // rbx
  _FX_DRIVER_GLOBALS *v9; // rcx
  int v10; // edi
  FxRegKey *v11; // rax
  __int64 v12; // rax
  __int64 v13; // rbx
  FxAutoRegKey hKey; // [rsp+40h] [rbp-71h] BYREF
  FxDriver *pDriver; // [rsp+48h] [rbp-69h] BYREF
  WDFKEY__ *keyHandle; // [rsp+50h] [rbp-61h] BYREF
  _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+58h] [rbp-59h] BYREF
  _UNICODE_STRING parameters; // [rsp+88h] [rbp-29h] BYREF
  wchar_t parameters_buffer[12]; // [rsp+98h] [rbp-19h] BYREF
  void *retaddr; // [rsp+108h] [rbp+57h]

  DriverName = (_FX_DRIVER_GLOBALS *)DriverGlobals[-8].DriverName;
  pDriver = 0LL;
  hKey.m_Key = 0LL;
  keyHandle = 0LL;
  v9 = (_FX_DRIVER_GLOBALS *)DriverGlobals[-8].DriverName;
  if ( !Key )
    FxVerifierNullBugCheck(v9, retaddr);
  *Key = 0LL;
  v10 = FxVerifierCheckIrqlLevel(v9, 0);
  if ( v10 < 0 )
    goto LABEL_11;
  v10 = FxValidateObjectAttributes(DriverName, KeyAttributes, 0);
  if ( v10 < 0 )
    goto LABEL_11;
  FxObjectHandleGetPtr(DriverName, (unsigned __int64)Driver, 0x1001u, (void **)&pDriver);
  v11 = (FxRegKey *)FxObjectHandleAlloc(
                      DriverName,
                      ExDefaultNonPagedPoolType,
                      0x78uLL,
                      0,
                      KeyAttributes,
                      0,
                      FxObjectTypeExternal);
  if ( v11 )
  {
    FxRegKey::FxRegKey(v11, DriverName);
    v13 = v12;
  }
  else
  {
    v13 = 0LL;
  }
  if ( v13 )
  {
    v10 = FxObject::Commit((FxObject *)v13, (_FX_DRIVER_GLOBALS *)KeyAttributes, (void **)&keyHandle, 0LL, 1u);
    if ( v10 < 0 )
      goto LABEL_19;
    *(_QWORD *)&ObjectAttributes.Length = 48LL;
    ObjectAttributes.ObjectName = &pDriver->m_RegistryPath;
    *(_QWORD *)&ObjectAttributes.Attributes = 576LL;
    ObjectAttributes.RootDirectory = 0LL;
    *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
    v10 = ZwOpenKey(&hKey.m_Key, 0xF003Fu, &ObjectAttributes);
    if ( v10 < 0 )
      goto LABEL_19;
    parameters.Buffer = parameters_buffer;
    ObjectAttributes.RootDirectory = hKey.m_Key;
    wcscpy(parameters_buffer, L"Parameters");
    ObjectAttributes.ObjectName = &parameters;
    *(_QWORD *)&parameters.Length = 1441812LL;
    *(_QWORD *)&ObjectAttributes.Length = 48LL;
    *(_QWORD *)&ObjectAttributes.Attributes = 576LL;
    *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
    v10 = ZwCreateKey((PHANDLE)(v13 + 112), DesiredAccess, &ObjectAttributes, 0, 0LL, 0, 0LL);
    if ( v10 < 0 )
    {
LABEL_19:
      FxObject::ClearEvtCallbacks((FxObject *)v13);
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v13 + 48LL))(v13);
    }
    else
    {
      *Key = keyHandle;
    }
LABEL_11:
    if ( hKey.m_Key )
      ZwClose(hKey.m_Key);
    return (unsigned int)v10;
  }
  if ( hKey.m_Key )
    ZwClose(hKey.m_Key);
  return 3221225626LL;
}
