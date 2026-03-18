/*
 * XREFs of ?IsCompanionRequiredForDevice@FxCompanionLibrary@@QEAAEPEAVFxDevice@@PEAPEBG@Z @ 0x1C00291F4
 * Callers:
 *     ?PostCreateDeviceInitialize@FxPkgPnp@@QEAAJXZ @ 0x1C00290A4 (-PostCreateDeviceInitialize@FxPkgPnp@@QEAAJXZ.c)
 * Callees:
 *     ?FxPoolFree@@YAXPEAX@Z @ 0x1C0005F0C (-FxPoolFree@@YAXPEAX@Z.c)
 *     ?FxPoolAllocator@@YAPEAXPEAU_FX_DRIVER_GLOBALS@@PEAUFX_POOL@@UFxPoolTypeOrPoolFlags@@_KKPEAX@Z @ 0x1C0006DE0 (-FxPoolAllocator@@YAPEAXPEAU_FX_DRIVER_GLOBALS@@PEAUFX_POOL@@UFxPoolTypeOrPoolFlags@@_KKPEAX@Z.c)
 *     ?GetSafePhysicalDevice@FxDevice@@QEAAPEAU_DEVICE_OBJECT@@XZ @ 0x1C0015030 (-GetSafePhysicalDevice@FxDevice@@QEAAPEAU_DEVICE_OBJECT@@XZ.c)
 *     ?_QueryValue@FxRegKey@@SAJPEAU_FX_DRIVER_GLOBALS@@PEAXPEBU_UNICODE_STRING@@K1PEAK3@Z @ 0x1C0015510 (-_QueryValue@FxRegKey@@SAJPEAU_FX_DRIVER_GLOBALS@@PEAXPEBU_UNICODE_STRING@@K1PEAK3@Z.c)
 *     GetNameFromPath @ 0x1C00275B8 (GetNameFromPath.c)
 *     WPP_IFR_SF_ @ 0x1C0028B14 (WPP_IFR_SF_.c)
 *     ??1CUmdfSvcConfig@@QEAA@XZ @ 0x1C0029680 (--1CUmdfSvcConfig@@QEAA@XZ.c)
 *     ?_QueryPropertyEx@FxDevice@@SAJPEAU_FX_DRIVER_GLOBALS@@PEAUWDFDEVICE_INIT@@PEAV1@PEAXW4FxPropertyType@@K3PEAK5@Z @ 0x1C002A928 (-_QueryPropertyEx@FxDevice@@SAJPEAU_FX_DRIVER_GLOBALS@@PEAUWDFDEVICE_INIT@@PEAV1@PEAXW4FxPropert.c)
 *     ?_VerifyMultiSzString@FxRegKey@@SAJPEAU_FX_DRIVER_GLOBALS@@PEBU_UNICODE_STRING@@PEAGK@Z @ 0x1C002D58C (-_VerifyMultiSzString@FxRegKey@@SAJPEAU_FX_DRIVER_GLOBALS@@PEBU_UNICODE_STRING@@PEAGK@Z.c)
 *     WPP_IFR_SF_d @ 0x1C00306F4 (WPP_IFR_SF_d.c)
 *     ?OpenServiceKey@CUmdfSvcConfig@@QEAAJPEBGKPEAPEAX@Z @ 0x1C0031A0C (-OpenServiceKey@CUmdfSvcConfig@@QEAAJPEBGKPEAPEAX@Z.c)
 *     ?IsCompanionSecure@CUmdfSvcConfig@@SAJPEAXPEAE@Z @ 0x1C0031B7C (-IsCompanionSecure@CUmdfSvcConfig@@SAJPEAXPEAE@Z.c)
 *     ?GetSecureSoftwareDeviceTag@CUmdfSvcConfig@@QEAAJPEAXPEAK@Z @ 0x1C0031C00 (-GetSecureSoftwareDeviceTag@CUmdfSvcConfig@@QEAAJPEAXPEAK@Z.c)
 *     __security_check_cookie @ 0x1C0035840 (__security_check_cookie.c)
 *     WPP_IFR_SF_Zd @ 0x1C0060DBC (WPP_IFR_SF_Zd.c)
 */

char __fastcall FxCompanionLibrary::IsCompanionRequiredForDevice(
        FxCompanionLibrary *this,
        FxDevice *Device,
        FX_POOL ***CompanionName)
{
  FX_POOL **v3; // r15
  _FX_DRIVER_GLOBALS *m_Globals; // rbx
  _DEVICE_OBJECT *SafePhysicalDevice; // rax
  char v7; // r12
  char v8; // r13
  int _a1; // eax
  unsigned __int16 v11; // r9
  unsigned int v12; // r8d
  NTSTATUS v13; // eax
  unsigned __int8 v14; // dl
  int IsCompanionSecure; // eax
  unsigned int v16; // r8d
  ULONG Tag; // ecx
  void *v18; // rax
  unsigned __int16 v19; // r9
  FxPropertyType traceGuid; // [rsp+20h] [rbp-E0h]
  unsigned __int8 secureCompanionFromInf[4]; // [rsp+50h] [rbp-B0h] BYREF
  unsigned int dataLength; // [rsp+54h] [rbp-ACh] BYREF
  unsigned int dataType; // [rsp+58h] [rbp-A8h] BYREF
  unsigned int propertyType; // [rsp+5Ch] [rbp-A4h] BYREF
  unsigned int devCapSecureDevice; // [rsp+60h] [rbp-A0h] BYREF
  unsigned int requiredSize; // [rsp+64h] [rbp-9Ch] BYREF
  FxAutoRegKey kmdfSvcKey; // [rsp+68h] [rbp-98h] BYREF
  FxAutoRegKey deviceRegKey; // [rsp+70h] [rbp-90h] BYREF
  _WDF_DEVICE_PROPERTY_DATA deviceData; // [rsp+80h] [rbp-80h] BYREF
  __int64 v30; // [rsp+98h] [rbp-68h]
  __int128 v31; // [rsp+A0h] [rbp-60h]
  FxAutoRegKey companionRegKey; // [rsp+B0h] [rbp-50h] BYREF
  _UNICODE_STRING companionServiceListKeyName; // [rsp+B8h] [rbp-48h] BYREF
  void *companionSvcKey; // [rsp+C8h] [rbp-38h] BYREF
  _UNICODE_STRING companionKeyName; // [rsp+D0h] [rbp-30h] BYREF
  _UNICODE_STRING serviceNameUnicodeString; // [rsp+E0h] [rbp-20h] BYREF
  CUmdfSvcConfig umdfSvcConfig; // [rsp+F0h] [rbp-10h] BYREF
  FxDevice *v38; // [rsp+100h] [rbp+0h]
  wchar_t companionServiceListKeyName_buffer[24]; // [rsp+108h] [rbp+8h] BYREF
  wchar_t companionKeyName_buffer[32]; // [rsp+138h] [rbp+38h] BYREF
  void *retaddr; // [rsp+1B8h] [rbp+B8h]

  v3 = 0LL;
  m_Globals = Device->m_Globals;
  serviceNameUnicodeString = 0LL;
  companionKeyName.Buffer = companionKeyName_buffer;
  wcscpy(companionKeyName_buffer, L"WUDF\\CompanionConfigurations");
  v38 = Device;
  deviceRegKey.m_Key = 0LL;
  companionRegKey.m_Key = 0LL;
  kmdfSvcKey.m_Key = 0LL;
  companionSvcKey = 0LL;
  wcscpy(companionServiceListKeyName_buffer, L"CompanionServiceList");
  *(_QWORD *)&companionKeyName.Length = 3801144LL;
  *(_QWORD *)&companionServiceListKeyName.Length = 2752552LL;
  companionServiceListKeyName.Buffer = companionServiceListKeyName_buffer;
  requiredSize = 0;
  dataLength = 0;
  dataType = 0;
  umdfSvcConfig.m_Key = 0LL;
  umdfSvcConfig.m_AutoClose = 1;
  SafePhysicalDevice = FxDevice::GetSafePhysicalDevice(Device);
  secureCompanionFromInf[0] = 0;
  devCapSecureDevice = 0;
  propertyType = 0;
  v7 = 0;
  v8 = 0;
  _a1 = IoOpenDeviceRegistryKey(SafePhysicalDevice, 1u, 0x20000u, &deviceRegKey.m_Key);
  if ( _a1 < 0 )
  {
    v11 = 22;
LABEL_13:
    v12 = 12;
LABEL_14:
    WPP_IFR_SF_d(m_Globals, 2u, v12, v11, WPP_FxCompanionLibrary_cpp_Traceguids, _a1);
    goto LABEL_4;
  }
  deviceData.PropertyKey = (const _DEVPROPKEY *)deviceRegKey.m_Key;
  *(_QWORD *)&deviceData.Size = 48LL;
  *(_QWORD *)&deviceData.Lcid = &companionKeyName;
  v30 = 576LL;
  v31 = 0LL;
  _a1 = ZwOpenKey(&companionRegKey.m_Key, 0x80000000, (POBJECT_ATTRIBUTES)&deviceData);
  if ( _a1 < 0 )
  {
    if ( _a1 == -1073741772 )
    {
LABEL_4:
      *CompanionName = v3;
      goto LABEL_5;
    }
    v11 = 23;
    goto LABEL_13;
  }
  GetNameFromPath(&m_Globals->Driver->m_RegistryPath, &serviceNameUnicodeString);
  if ( !serviceNameUnicodeString.Length )
  {
    WPP_IFR_SF_(m_Globals, 2u, 0xCu, 0x18u, WPP_FxCompanionLibrary_cpp_Traceguids);
    goto LABEL_4;
  }
  deviceData.PropertyKey = (const _DEVPROPKEY *)companionRegKey.m_Key;
  *(_QWORD *)&deviceData.Size = 48LL;
  *(_QWORD *)&deviceData.Lcid = &serviceNameUnicodeString;
  v30 = 576LL;
  v31 = 0LL;
  v13 = ZwOpenKey(&kmdfSvcKey.m_Key, 0x80000000, (POBJECT_ATTRIBUTES)&deviceData);
  if ( v13 < 0 )
  {
    if ( v13 != -1073741772 )
      WPP_IFR_SF_Zd(m_Globals, v14, 0xCu, 0x19u, WPP_FxCompanionLibrary_cpp_Traceguids, &serviceNameUnicodeString, v13);
    goto LABEL_4;
  }
  _a1 = CUmdfSvcConfig::GetSecureSoftwareDeviceTag(&umdfSvcConfig, deviceRegKey.m_Key, &requiredSize);
  if ( _a1 >= 0 )
  {
    WPP_IFR_SF_(m_Globals, 4u, 0x11u, 0x1Au, WPP_FxCompanionLibrary_cpp_Traceguids);
    v8 = 1;
  }
  else if ( _a1 != -1073741772 )
  {
    v11 = 27;
LABEL_42:
    v12 = 17;
    goto LABEL_14;
  }
  _a1 = FxRegKey::_QueryValue(m_Globals, kmdfSvcKey.m_Key, &companionServiceListKeyName, 0, 0LL, &dataLength, 0LL);
  if ( (int)(_a1 + 0x80000000) >= 0 && _a1 != -2147483643 )
  {
    v11 = 28;
    goto LABEL_42;
  }
  Tag = m_Globals->Tag;
  v18 = retaddr;
  *(_QWORD *)&deviceData.Size = 0LL;
  deviceData.PropertyKey = (const _DEVPROPKEY *)256;
  if ( !m_Globals->FxPoolTrackingOn )
    v18 = 0LL;
  v3 = FxPoolAllocator(m_Globals, &m_Globals->FxPoolFrameworks, (__m128i *)&deviceData, dataLength, Tag, v18);
  if ( !v3 )
  {
    WPP_IFR_SF_d(m_Globals, 2u, 0x11u, 0x1Du, WPP_FxCompanionLibrary_cpp_Traceguids, -1073741670);
    v3 = 0LL;
    goto LABEL_4;
  }
  IsCompanionSecure = FxRegKey::_QueryValue(
                        m_Globals,
                        kmdfSvcKey.m_Key,
                        &companionServiceListKeyName,
                        dataLength,
                        v3,
                        &dataLength,
                        &dataType);
  v7 = 0;
  if ( IsCompanionSecure < 0 || dataType != 7 )
  {
    v19 = 30;
    goto LABEL_52;
  }
  if ( FxRegKey::_VerifyMultiSzString(m_Globals, &companionServiceListKeyName, (wchar_t *)v3, dataLength) >= 0 )
  {
    IsCompanionSecure = CUmdfSvcConfig::OpenServiceKey(&umdfSvcConfig, (const wchar_t *)v3, v16, &companionSvcKey);
    if ( IsCompanionSecure < 0 )
    {
      v19 = 31;
    }
    else
    {
      IsCompanionSecure = CUmdfSvcConfig::IsCompanionSecure(companionSvcKey, secureCompanionFromInf);
      if ( IsCompanionSecure < 0 )
      {
        v19 = 32;
      }
      else
      {
        if ( v8 || !secureCompanionFromInf[0] )
          goto LABEL_34;
        deviceData.PropertyKey = &DEVPKEY_Device_Capabilities;
        *(_QWORD *)&deviceData.Size = 24LL;
        *(_QWORD *)&deviceData.Lcid = 0LL;
        IsCompanionSecure = FxDevice::_QueryPropertyEx(
                              m_Globals,
                              0LL,
                              v38,
                              &deviceData,
                              traceGuid,
                              4u,
                              &devCapSecureDevice,
                              &requiredSize,
                              &propertyType);
        if ( IsCompanionSecure < 0 )
        {
          v19 = 33;
        }
        else
        {
          IsCompanionSecure = propertyType;
          if ( propertyType == 7 )
          {
            if ( (devCapSecureDevice & 0x400) == 0 )
            {
              WPP_IFR_SF_(m_Globals, 4u, 0x11u, 0x23u, WPP_FxCompanionLibrary_cpp_Traceguids);
              goto $exit_14;
            }
LABEL_34:
            v7 = 1;
            goto LABEL_4;
          }
          v19 = 34;
        }
      }
    }
LABEL_52:
    WPP_IFR_SF_d(m_Globals, 2u, 0x11u, v19, WPP_FxCompanionLibrary_cpp_Traceguids, IsCompanionSecure);
  }
$exit_14:
  *CompanionName = 0LL;
  FxPoolFree((FX_POOL_TRACKER *)v3);
LABEL_5:
  CUmdfSvcConfig::~CUmdfSvcConfig(&umdfSvcConfig);
  if ( kmdfSvcKey.m_Key )
    ZwClose(kmdfSvcKey.m_Key);
  if ( companionRegKey.m_Key )
    ZwClose(companionRegKey.m_Key);
  if ( deviceRegKey.m_Key )
    ZwClose(deviceRegKey.m_Key);
  return v7;
}
