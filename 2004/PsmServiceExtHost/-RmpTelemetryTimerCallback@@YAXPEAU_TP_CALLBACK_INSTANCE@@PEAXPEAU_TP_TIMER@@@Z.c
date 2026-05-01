/*
 * XREFs of ?RmpTelemetryTimerCallback@@YAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_TIMER@@@Z @ 0x180038720
 * Callers:
 *     <none>
 * Callees:
 *     ?HampUtilStartLockTracking@@YAXPEAU_CEM_LOCK_TRACKER@@@Z @ 0x18000B478 (-HampUtilStartLockTracking@@YAXPEAU_CEM_LOCK_TRACKER@@@Z.c)
 *     ?RmpReleaseGlobalLock@@YAXXZ @ 0x18000F120 (-RmpReleaseGlobalLock@@YAXXZ.c)
 *     _tlgKeywordOn @ 0x180010200 (_tlgKeywordOn.c)
 *     ?RmpAcquireGlobalLock@@YAXXZ @ 0x18001E110 (-RmpAcquireGlobalLock@@YAXXZ.c)
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_ResourceManagerLcdCommitSave@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x1800388A8 (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_ResourceManagerLcdCommitSave@@@details@wi.c)
 *     __security_check_cookie @ 0x180044E00 (__security_check_cookie.c)
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U1@U1@U1@U?$_tlgWrapperByVal@$03@@U2@U1@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@333AEBU?$_tlgWrapperByVal@$03@@43@Z @ 0x180063FBC (--$Write@U-$_tlgWrapperByVal@$07@@U1@U1@U1@U-$_tlgWrapperByVal@$03@@U2@U1@@-$_tlgWriteTemplate@$.c)
 */

void __fastcall RmpTelemetryTimerCallback(struct _TP_CALLBACK_INSTANCE *a1, _DWORD *a2, struct _TP_TIMER *a3)
{
  LSTATUS v4; // eax
  bool v5; // sf
  LSTATUS v6; // eax
  bool v7; // sf
  DWORD v8; // ebx
  int v9; // ecx
  int v10; // r8d
  int v11; // r9d
  LSTATUS v12; // eax
  bool v13; // sf
  int v14; // [rsp+60h] [rbp-A0h] BYREF
  int v15; // [rsp+64h] [rbp-9Ch] BYREF
  int v16; // [rsp+68h] [rbp-98h] BYREF
  HKEY hKey; // [rsp+70h] [rbp-90h] BYREF
  HKEY phkResult; // [rsp+78h] [rbp-88h] BYREF
  __int64 v19; // [rsp+80h] [rbp-80h] BYREF
  __int64 v20; // [rsp+88h] [rbp-78h] BYREF
  __int64 v21; // [rsp+90h] [rbp-70h] BYREF
  __int64 v22; // [rsp+98h] [rbp-68h] BYREF
  __int64 v23; // [rsp+A0h] [rbp-60h] BYREF
  _BYTE v24[144]; // [rsp+B0h] [rbp-50h] BYREF

  HampUtilStartLockTracking((struct _CEM_LOCK_TRACKER *)v24);
  hKey = 0LL;
  phkResult = 0LL;
  RmpAcquireGlobalLock();
  if ( a2[77] )
  {
    if ( (unsigned int)dword_1800B31E0 > 4 && tlgKeywordOn((__int64)&dword_1800B31E0, 0x200000000001LL) )
    {
      v15 = a2[76];
      v20 = *((_QWORD *)a2 + 37);
      v21 = *((_QWORD *)a2 + 36);
      v22 = *((_QWORD *)a2 + 35);
      v23 = *((_QWORD *)a2 + 34);
      v19 = 0x1000000LL;
      v14 = v11;
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<8>>(
        v9,
        (unsigned int)&unk_18009AB90,
        v10,
        v11,
        (__int64)&v23,
        (__int64)&v22,
        (__int64)&v21,
        (__int64)&v20,
        (__int64)&v15,
        (__int64)&v14,
        (__int64)&v19);
    }
    *((_QWORD *)a2 + 34) = 0LL;
    *((_QWORD *)a2 + 35) = -1LL;
    *((_QWORD *)a2 + 36) = 0LL;
    *((_QWORD *)a2 + 37) = 0LL;
    a2[76] = 0;
    a2[77] = 0;
  }
  a2[142] = GetTickCount();
  RmpReleaseGlobalLock();
  RtlGetDeviceFamilyInfoEnum(0LL, &v16, 0LL);
  if ( v16 == 3 )
  {
    wil::details::FeatureImpl<__WilFeatureTraits_Feature_ResourceManagerLcdCommitSave>::ReportUsage(
      &`wil::Feature<__WilFeatureTraits_Feature_ResourceManagerLcdCommitSave>::GetImpl'::`2'::impl,
      0LL);
    v4 = RegOpenKeyExW(
           HKEY_LOCAL_MACHINE,
           L"System\\CurrentControlSet\\Control\\Session Manager\\Memory Management",
           0,
           0x20006u,
           &hKey);
    v5 = v4 < 0;
    if ( v4 > 0 )
      v5 = 1;
    if ( !v5 )
    {
      v6 = RegOpenKeyExW(
             HKEY_LOCAL_MACHINE,
             L"Software\\Microsoft\\Windows NT\\ResourceManager",
             0,
             0x20006u,
             &phkResult);
      v7 = v6 < 0;
      if ( v6 > 0 )
        v7 = 1;
      if ( !v7 )
      {
        v12 = RegDeleteValueW(phkResult, L"SimulateCommitSavings");
        v13 = v12 < 0;
        if ( v12 > 0 )
          v13 = 1;
        if ( !v13 )
          RegDeleteValueW(hKey, L"SimulateCommitSavings");
      }
    }
  }
  if ( hKey )
    RegCloseKey(hKey);
  if ( phkResult )
    RegCloseKey(phkResult);
  v8 = HampLockTrackerId;
  if ( HampLockTrackerId != -1 )
  {
    if ( *(_QWORD *)TlsGetValue(HampLockTrackerId) )
      __int2c();
    TlsSetValue(v8, 0LL);
  }
}
