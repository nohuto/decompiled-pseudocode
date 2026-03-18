/*
 * XREFs of imp_WdfDriverCreate @ 0x1C004B560
 * Callers:
 *     <none>
 * Callees:
 *     ??$Write@U?$_tlgWrapperByRef@$0BA@@@U?$_tlgWrapSz@D@@U?$_tlgWrapSz@G@@U3@U?$_tlgWrapperByVal@$03@@U4@U?$_tlgWrapperByVal@$00@@U5@U5@U4@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByRef@$0BA@@@AEBU?$_tlgWrapSz@D@@AEBU?$_tlgWrapSz@G@@5AEBU?$_tlgWrapperByVal@$03@@6AEBU?$_tlgWrapperByVal@$00@@776@Z @ 0x1C00010AC (--$Write@U-$_tlgWrapperByRef@$0BA@@@U-$_tlgWrapSz@D@@U-$_tlgWrapSz@G@@U3@U-$_tlgWrapperByVal@$03.c)
 *     ?FxValidateUnicodeString@@YAJPEAU_FX_DRIVER_GLOBALS@@PEBU_UNICODE_STRING@@@Z @ 0x1C000A094 (-FxValidateUnicodeString@@YAJPEAU_FX_DRIVER_GLOBALS@@PEBU_UNICODE_STRING@@@Z.c)
 *     ?FxValidateObjectAttributes@@YAJPEAU_FX_DRIVER_GLOBALS@@PEAU_WDF_OBJECT_ATTRIBUTES@@K@Z @ 0x1C000A0E0 (-FxValidateObjectAttributes@@YAJPEAU_FX_DRIVER_GLOBALS@@PEAU_WDF_OBJECT_ATTRIBUTES@@K@Z.c)
 *     WPP_IFR_SF_qL @ 0x1C000B0E4 (WPP_IFR_SF_qL.c)
 *     ?Commit@FxObject@@QEAAJPEAU_WDF_OBJECT_ATTRIBUTES@@PEAPEAXPEAV1@E@Z @ 0x1C000B520 (-Commit@FxObject@@QEAAJPEAU_WDF_OBJECT_ATTRIBUTES@@PEAPEAXPEAV1@E@Z.c)
 *     ?FxObjectHandleAlloc@@YAPEAXPEAU_FX_DRIVER_GLOBALS@@W4_POOL_TYPE@@_KKPEAU_WDF_OBJECT_ATTRIBUTES@@GW4FxObjectType@@@Z @ 0x1C000BF84 (-FxObjectHandleAlloc@@YAPEAXPEAU_FX_DRIVER_GLOBALS@@W4_POOL_TYPE@@_KKPEAU_WDF_OBJECT_ATTRIBUTES@.c)
 *     ?FxVerifierCheckIrqlLevel@@YAJPEAU_FX_DRIVER_GLOBALS@@E@Z @ 0x1C000CF7C (-FxVerifierCheckIrqlLevel@@YAJPEAU_FX_DRIVER_GLOBALS@@E@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C001CA60 (_guard_dispatch_icall_nop.c)
 *     WPP_IFR_SF_DDd @ 0x1C002DD8C (WPP_IFR_SF_DDd.c)
 *     WPP_IFR_SF_ @ 0x1C0031C84 (WPP_IFR_SF_.c)
 *     _tlgKeywordOn @ 0x1C0041AD0 (_tlgKeywordOn.c)
 *     ??1FxAutoString@@QEAA@XZ @ 0x1C00461B0 (--1FxAutoString@@QEAA@XZ.c)
 *     WPP_IFR_SF_dddd @ 0x1C004B0C8 (WPP_IFR_SF_dddd.c)
 *     ??0FxDriver@@QEAA@PEAU_DRIVER_OBJECT@@PEAU_WDF_DRIVER_CONFIG@@PEAU_FX_DRIVER_GLOBALS@@@Z @ 0x1C0052FF8 (--0FxDriver@@QEAA@PEAU_DRIVER_OBJECT@@PEAU_WDF_DRIVER_CONFIG@@PEAU_FX_DRIVER_GLOBALS@@@Z.c)
 *     ?Initialize@FxDriver@@QEAAJPEBU_UNICODE_STRING@@PEAU_WDF_DRIVER_CONFIG@@PEAU_WDF_OBJECT_ATTRIBUTES@@@Z @ 0x1C0053350 (-Initialize@FxDriver@@QEAAJPEBU_UNICODE_STRING@@PEAU_WDF_DRIVER_CONFIG@@PEAU_WDF_OBJECT_ATTRIBUT.c)
 *     ?_InitializeDriverName@FxDriver@@SAXPEAU_FX_DRIVER_GLOBALS@@PEBU_UNICODE_STRING@@@Z @ 0x1C0053704 (-_InitializeDriverName@FxDriver@@SAXPEAU_FX_DRIVER_GLOBALS@@PEBU_UNICODE_STRING@@@Z.c)
 *     ?_InitializeTag@FxDriver@@SAXPEAU_FX_DRIVER_GLOBALS@@PEAU_WDF_DRIVER_CONFIG@@@Z @ 0x1C00537A0 (-_InitializeTag@FxDriver@@SAXPEAU_FX_DRIVER_GLOBALS@@PEAU_WDF_DRIVER_CONFIG@@@Z.c)
 *     FxDestroy @ 0x1C005644C (FxDestroy.c)
 *     FxInitialize @ 0x1C0056768 (FxInitialize.c)
 *     ?FxVerifierNullBugCheck@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAX@Z @ 0x1C0058968 (-FxVerifierNullBugCheck@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAX@Z.c)
 *     ?ClearEvtCallbacks@FxObject@@QEAAXXZ @ 0x1C00595BC (-ClearEvtCallbacks@FxObject@@QEAAXXZ.c)
 *     GetImageName @ 0x1C005F478 (GetImageName.c)
 */

__int64 __fastcall imp_WdfDriverCreate(
        _WDF_DRIVER_GLOBALS *DriverGlobals,
        _DRIVER_OBJECT *DriverObject,
        const _UNICODE_STRING *RegistryPath,
        _WDF_OBJECT_ATTRIBUTES *DriverAttributes,
        _WDF_DRIVER_CONFIG *DriverConfig,
        WDFDRIVER__ **Driver)
{
  _FX_DRIVER_GLOBALS *DriverName; // rbx
  WDFDRIVER__ *v11; // r12
  _WDF_DRIVER_CONFIG *v12; // rdi
  unsigned int v13; // edi
  unsigned int DriverInitFlags; // eax
  __int64 result; // rax
  WDFDRIVER__ **v16; // r15
  _WDF_DRIVER_CONFIG *v17; // rdx
  int (__fastcall *v18)(WDFDRIVER__ *, WDFDEVICE_INIT *); // r11
  unsigned int DriverPoolTag; // eax
  _WDF_DRIVER_CONFIG *v20; // r9
  FxDriver *v21; // rax
  FxDriver *v22; // rax
  FxDriver *v23; // rsi
  int v24; // r14d
  int v25; // eax
  _WDF_DRIVER_GLOBALS *v26; // rax
  bool v27; // al
  const _GUID *v28; // r9
  _WDF_BIND_INFO *WdfBindInfo; // rax
  const _tlgProvider_t *DriverFlags; // rcx
  unsigned int Minor; // edx
  const _GUID *Major; // r8
  _tlgWrapperByVal<1> v33; // [rsp+70h] [rbp-29h] BYREF
  _tlgWrapperByVal<4> v34; // [rsp+74h] [rbp-25h] BYREF
  _tlgWrapperByVal<4> v35; // [rsp+78h] [rbp-21h] BYREF
  _tlgWrapperByVal<4> v36; // [rsp+7Ch] [rbp-1Dh] BYREF
  _tlgWrapSz<unsigned short> v37; // [rsp+80h] [rbp-19h] BYREF
  _tlgWrapSz<unsigned short> v38; // [rsp+88h] [rbp-11h] BYREF
  _tlgWrapSz<char> v39; // [rsp+90h] [rbp-9h] BYREF
  _tlgWrapperByRef<16> v40; // [rsp+98h] [rbp-1h] BYREF
  FxAutoString imageName; // [rsp+A0h] [rbp+7h] BYREF
  void *retaddr; // [rsp+E8h] [rbp+4Fh]
  _WDF_DRIVER_GLOBALS *v43; // [rsp+F0h] [rbp+57h] BYREF
  WDFDRIVER__ *hDriver; // [rsp+F8h] [rbp+5Fh] BYREF

  v43 = DriverGlobals;
  DriverName = (_FX_DRIVER_GLOBALS *)DriverGlobals[-8].DriverName;
  hDriver = 0LL;
  v11 = 0LL;
  if ( !DriverObject )
    FxVerifierNullBugCheck((_FX_DRIVER_GLOBALS *)DriverGlobals[-8].DriverName, retaddr);
  DriverName->IsDriverCompanion = 0;
  if ( !RegistryPath )
    FxVerifierNullBugCheck((_FX_DRIVER_GLOBALS *)DriverGlobals[-8].DriverName, retaddr);
  v12 = DriverConfig;
  if ( !DriverConfig )
    FxVerifierNullBugCheck((_FX_DRIVER_GLOBALS *)DriverGlobals[-8].DriverName, retaddr);
  if ( DriverConfig->Size != 32 )
  {
    v13 = -1073741820;
    WPP_IFR_SF_dddd(
      DriverName,
      2u,
      0x11u,
      0xAu,
      WPP_FxDriverApi_cpp_Traceguids,
      DriverConfig->Size,
      32,
      32,
      -1073741820);
    return v13;
  }
  DriverInitFlags = DriverConfig->DriverInitFlags;
  if ( (DriverInitFlags & 0xFFFFFFEC) != 0 )
  {
    WPP_IFR_SF_DDd(
      DriverName,
      (unsigned __int8)DriverObject,
      0x11u,
      0xBu,
      WPP_FxDriverApi_cpp_Traceguids,
      DriverInitFlags,
      19,
      -1073741811);
    return 3221225485LL;
  }
  result = FxVerifierCheckIrqlLevel(DriverName, 0);
  if ( (int)result >= 0 )
  {
    if ( DriverName->IsDriverCompanion || (result = FxValidateUnicodeString(DriverName, RegistryPath), (int)result >= 0) )
    {
      if ( DriverName->Driver || DriverGlobals->Driver )
      {
        v13 = -1073741437;
        WPP_IFR_SF_qL(DriverName, 2u, 0x11u, 0xDu, WPP_FxDriverApi_cpp_Traceguids, DriverObject, 0xC0000183);
        return v13;
      }
      v16 = Driver;
      if ( Driver )
        *Driver = 0LL;
      FxDriver::_InitializeDriverName(DriverName, RegistryPath);
      if ( v12->Size == 32 && (DriverPoolTag = v12->DriverPoolTag) != 0 && DriverPoolTag != 543908932 )
      {
        DriverName->Tag = DriverPoolTag;
        DriverName->Public.DriverTag = v12->DriverPoolTag;
      }
      else
      {
        FxDriver::_InitializeTag(DriverName, v17);
        v18 = 0LL;
      }
      if ( (v12->DriverInitFlags & 3) == 1 && v12->EvtDriverDeviceAdd != v18 )
      {
        WPP_IFR_SF_(DriverName, 2u, 0x11u, 0xEu, WPP_FxDriverApi_cpp_Traceguids);
        return 3221225485LL;
      }
      result = FxValidateObjectAttributes(DriverName, DriverAttributes, 7);
      if ( (int)result < 0 )
        return result;
      FxInitialize(DriverName, DriverObject, RegistryPath, v20);
      v21 = (FxDriver *)FxObjectHandleAlloc(
                          DriverName,
                          ExDefaultNonPagedPoolType,
                          0x168uLL,
                          0,
                          DriverAttributes,
                          0,
                          FxObjectTypeExternal);
      if ( v21 )
      {
        FxDriver::FxDriver(v21, DriverObject, v12, DriverName);
        v23 = v22;
      }
      else
      {
        v23 = 0LL;
      }
      if ( v23 )
      {
        v24 = FxDriver::Initialize(v23, RegistryPath, v12, DriverAttributes);
        if ( v24 < 0 )
          goto LABEL_46;
        v25 = FxObject::Commit(v23, (_FX_DRIVER_GLOBALS *)DriverAttributes, (void **)&hDriver, 0LL, 1u);
        v11 = hDriver;
        v24 = v25;
      }
      else
      {
        v24 = -1073741670;
      }
      if ( v24 >= 0 )
      {
        v26 = v43;
        DriverName->Driver = v23;
        v26->Driver = v11;
        DriverName->Public.DriverFlags |= v12->DriverInitFlags;
        v27 = (v12->DriverInitFlags & 3) == 0 || v12->EvtDriverUnload != 0LL;
        DriverName->Public.DisplaceDriverUnload = v27;
        if ( v16 )
          *v16 = v11;
        if ( DriverName->TelemetryContext )
        {
          imageName = 0LL;
          GetImageName(DriverName, &imageName.m_UnicodeString);
          if ( Tlgg_TelemetryProviderProv.LevelPlus1 > 5 )
          {
            if ( tlgKeywordOn(&Tlgg_TelemetryProviderProv, 0x200000000000uLL) )
            {
              WdfBindInfo = DriverName->WdfBindInfo;
              DriverFlags = (const _tlgProvider_t *)DriverName->Public.DriverFlags;
              Minor = WdfBindInfo->Version.Minor;
              Major = (const _GUID *)WdfBindInfo->Version.Major;
              v34.Value = DriverName->FxEnhancedVerifierOptions;
              LODWORD(WdfBindInfo) = (unsigned int)DriverFlags >> 1;
              LOBYTE(DriverFlags) = (unsigned __int8)DriverFlags & 1;
              v35.Value = Minor;
              LOBYTE(v43) = (unsigned __int8)WdfBindInfo & 1;
              v33.Value = DriverName->FxVerifierOn;
              v37.Psz = L"01.031.0";
              v38.Psz = imageName.m_UnicodeString.Buffer;
              v39.Psz = DriverName->Public.DriverName;
              v40.Ptr = DriverName->TelemetryContext;
              LOBYTE(hDriver) = (_BYTE)DriverFlags;
              v36.Value = (unsigned int)Major;
              _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByRef<16>,_tlgWrapSz<char>,_tlgWrapSz<unsigned short>,_tlgWrapSz<unsigned short>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<1>,_tlgWrapperByVal<1>,_tlgWrapperByVal<1>,_tlgWrapperByVal<4>>(
                DriverFlags,
                &tlgEvent_0._tlgChannel,
                Major,
                v28,
                &v40,
                &v39,
                &v38,
                &v37,
                &v36,
                &v35,
                &v33,
                (const _tlgWrapperByVal<1> *)&hDriver,
                (const _tlgWrapperByVal<1> *)&v43,
                &v34);
            }
          }
          FxAutoString::~FxAutoString(&imageName);
        }
        return (unsigned int)v24;
      }
LABEL_46:
      if ( v23 )
      {
        FxObject::ClearEvtCallbacks(v23);
        v23->DeleteObject(v23);
      }
      FxDestroy(DriverName);
      return (unsigned int)v24;
    }
  }
  return result;
}
