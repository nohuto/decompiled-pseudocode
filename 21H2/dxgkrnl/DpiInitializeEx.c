/*
 * XREFs of DpiInitializeEx @ 0x1C02146B0
 * Callers:
 *     DpiKmdDodInitialize @ 0x1C0029A80 (DpiKmdDodInitialize.c)
 *     DpiInitializeInternal @ 0x1C0029B28 (DpiInitializeInternal.c)
 * Callees:
 *     ?wil_details_FeatureReporting_ReportUsageToService@@YAXPEAUwil_details_FeatureReportingCache@@IHHPEBUFEATURE_LOGGED_TRAITS@@HW4wil_ReportingKind@@_K@Z @ 0x1C000BD74 (-wil_details_FeatureReporting_ReportUsageToService@@YAXPEAUwil_details_FeatureReportingCache@@IH.c)
 *     ?AcquireMiniportListMutex@@YAXXZ @ 0x1C001C320 (-AcquireMiniportListMutex@@YAXXZ.c)
 *     __security_check_cookie @ 0x1C002B170 (__security_check_cookie.c)
 *     memmove @ 0x1C002CD00 (memmove.c)
 *     memset @ 0x1C002CFC0 (memset.c)
 *     DpiGetDriverDataSizeFromVersion @ 0x1C0214F04 (DpiGetDriverDataSizeFromVersion.c)
 *     ?DxgCreateLiveDumpWithWdLogs@@YAJK_K000T_WD_LIVEREPORT_FLAGS@@@Z @ 0x1C02CEAA0 (-DxgCreateLiveDumpWithWdLogs@@YAJK_K000T_WD_LIVEREPORT_FLAGS@@@Z.c)
 */

__int64 __fastcall DpiInitializeEx(
        struct _DRIVER_OBJECT *ClientIdentificationAddress,
        PCUNICODE_STRING SourceString,
        unsigned int *Src,
        __int64 a4,
        char a5)
{
  NTSTATUS v9; // eax
  __int64 v10; // rbx
  __int64 v11; // rdx
  int DriverDataSizeFromVersion; // eax
  _WORD *v13; // rcx
  void *v14; // rcx
  _QWORD *v15; // rax
  _QWORD *v16; // rcx
  _QWORD *v17; // rax
  __int64 v18; // r8
  __int64 v19; // r9
  unsigned int v21; // eax
  __int64 v22; // rcx
  _QWORD *v23; // rcx
  PVOID *v24; // rdx
  PVOID DriverObjectExtension; // [rsp+40h] [rbp-81h] BYREF
  size_t Size; // [rsp+48h] [rbp-79h] BYREF
  PCALLBACK_OBJECT CallbackObject; // [rsp+50h] [rbp-71h] BYREF
  UNICODE_STRING String1; // [rsp+58h] [rbp-69h] BYREF
  __int64 v29; // [rsp+68h] [rbp-59h] BYREF
  struct _UNICODE_STRING DestinationString; // [rsp+70h] [rbp-51h] BYREF
  struct _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+80h] [rbp-41h] BYREF
  _OWORD v32[2]; // [rsp+B0h] [rbp-11h] BYREF
  __int64 v33; // [rsp+D0h] [rbp+Fh]

  v32[0] = *(_OWORD *)L"\\Driver\\IndirectKmd";
  v33 = *(_QWORD *)L"Kmd";
  DriverObjectExtension = 0LL;
  LODWORD(Size) = 0;
  v32[1] = *(_OWORD *)L"IndirectKmd";
  *(_QWORD *)&String1.Length = 2621478LL;
  String1.Buffer = (wchar_t *)v32;
  v9 = IoAllocateDriverObjectExtension(
         ClientIdentificationAddress,
         ClientIdentificationAddress,
         0x5A0u,
         &DriverObjectExtension);
  v10 = v9;
  if ( v9 < 0 )
  {
    v22 = 2LL;
    goto LABEL_25;
  }
  *((_DWORD *)DriverObjectExtension + 4) = 1953656900;
  *((_DWORD *)DriverObjectExtension + 5) = 1;
  *((_DWORD *)DriverObjectExtension + 6) = 2;
  *((_QWORD *)DriverObjectExtension + 4) = ClientIdentificationAddress;
  *((_BYTE *)DriverObjectExtension + 132) = a5;
  *((_BYTE *)DriverObjectExtension + 134) = 0;
  if ( !RtlCompareUnicodeString(&String1, &ClientIdentificationAddress->DriverName, 1u) )
    *((_BYTE *)DriverObjectExtension + 134) = 1;
  if ( Src )
  {
    *((_BYTE *)DriverObjectExtension + 133) = 0;
    v11 = *Src;
    *((_DWORD *)DriverObjectExtension + 7) = v11;
    DriverDataSizeFromVersion = DpiGetDriverDataSizeFromVersion(0LL, v11, 1296LL, &Size);
    v10 = DriverDataSizeFromVersion;
    if ( DriverDataSizeFromVersion >= 0 )
    {
      memmove((char *)DriverObjectExtension + 136, Src, (unsigned int)Size);
      *((_QWORD *)DriverObjectExtension + 179) = 0LL;
LABEL_7:
      v13 = DriverObjectExtension;
      goto LABEL_8;
    }
    v22 = 2LL;
LABEL_25:
    WdLogSingleEntry1(v22, v10);
LABEL_35:
    if ( DriverObjectExtension && *((_QWORD *)DriverObjectExtension + 6) )
      RtlFreeUnicodeString((PUNICODE_STRING)((char *)DriverObjectExtension + 40));
    goto LABEL_38;
  }
  *((_BYTE *)DriverObjectExtension + 133) = 1;
  memset((char *)DriverObjectExtension + 136, 0, 0x518uLL);
  *((_DWORD *)DriverObjectExtension + 7) = *(_DWORD *)a4;
  *((_DWORD *)DriverObjectExtension + 34) = *(_DWORD *)a4;
  *((_QWORD *)DriverObjectExtension + 18) = *(_QWORD *)(a4 + 8);
  *((_QWORD *)DriverObjectExtension + 19) = *(_QWORD *)(a4 + 16);
  *((_QWORD *)DriverObjectExtension + 20) = *(_QWORD *)(a4 + 24);
  *((_QWORD *)DriverObjectExtension + 21) = *(_QWORD *)(a4 + 32);
  *((_QWORD *)DriverObjectExtension + 22) = *(_QWORD *)(a4 + 40);
  *((_QWORD *)DriverObjectExtension + 23) = *(_QWORD *)(a4 + 48);
  *((_QWORD *)DriverObjectExtension + 24) = *(_QWORD *)(a4 + 56);
  *((_QWORD *)DriverObjectExtension + 25) = *(_QWORD *)(a4 + 64);
  *((_QWORD *)DriverObjectExtension + 26) = *(_QWORD *)(a4 + 72);
  *((_QWORD *)DriverObjectExtension + 27) = *(_QWORD *)(a4 + 80);
  *((_QWORD *)DriverObjectExtension + 28) = *(_QWORD *)(a4 + 88);
  *((_QWORD *)DriverObjectExtension + 29) = *(_QWORD *)(a4 + 96);
  *((_QWORD *)DriverObjectExtension + 30) = *(_QWORD *)(a4 + 104);
  *((_QWORD *)DriverObjectExtension + 31) = *(_QWORD *)(a4 + 112);
  *((_QWORD *)DriverObjectExtension + 32) = *(_QWORD *)(a4 + 120);
  *((_QWORD *)DriverObjectExtension + 33) = *(_QWORD *)(a4 + 128);
  *((_QWORD *)DriverObjectExtension + 34) = *(_QWORD *)(a4 + 136);
  *((_QWORD *)DriverObjectExtension + 46) = *(_QWORD *)(a4 + 144);
  *((_QWORD *)DriverObjectExtension + 47) = *(_QWORD *)(a4 + 152);
  *((_QWORD *)DriverObjectExtension + 48) = *(_QWORD *)(a4 + 160);
  *((_QWORD *)DriverObjectExtension + 51) = *(_QWORD *)(a4 + 168);
  *((_QWORD *)DriverObjectExtension + 52) = *(_QWORD *)(a4 + 176);
  *((_QWORD *)DriverObjectExtension + 54) = *(_QWORD *)(a4 + 184);
  *((_QWORD *)DriverObjectExtension + 55) = *(_QWORD *)(a4 + 192);
  *((_QWORD *)DriverObjectExtension + 56) = *(_QWORD *)(a4 + 200);
  *((_QWORD *)DriverObjectExtension + 58) = *(_QWORD *)(a4 + 208);
  *((_QWORD *)DriverObjectExtension + 59) = *(_QWORD *)(a4 + 216);
  *((_QWORD *)DriverObjectExtension + 60) = *(_QWORD *)(a4 + 224);
  *((_QWORD *)DriverObjectExtension + 61) = *(_QWORD *)(a4 + 232);
  *((_QWORD *)DriverObjectExtension + 63) = *(_QWORD *)(a4 + 240);
  *((_QWORD *)DriverObjectExtension + 87) = *(_QWORD *)(a4 + 248);
  *((_QWORD *)DriverObjectExtension + 179) = *(_QWORD *)(a4 + 256);
  *((_QWORD *)DriverObjectExtension + 92) = *(_QWORD *)(a4 + 264);
  *((_QWORD *)DriverObjectExtension + 93) = *(_QWORD *)(a4 + 272);
  *((_QWORD *)DriverObjectExtension + 94) = *(_QWORD *)(a4 + 280);
  v21 = *(_DWORD *)a4;
  if ( *(_DWORD *)a4 >= 0x3005u )
  {
    *((_QWORD *)DriverObjectExtension + 96) = *(_QWORD *)(a4 + 288);
    v21 = *(_DWORD *)a4;
  }
  if ( v21 < 0x3007 )
    *((_QWORD *)DriverObjectExtension + 63) = 0LL;
  else
    *((_QWORD *)DriverObjectExtension + 65) = *(_QWORD *)(a4 + 296);
  if ( *(_DWORD *)a4 >= 0x3009u )
  {
    *((_QWORD *)DriverObjectExtension + 88) = *(_QWORD *)(a4 + 304);
    *((_QWORD *)DriverObjectExtension + 97) = *(_QWORD *)(a4 + 312);
  }
  v13 = DriverObjectExtension;
  if ( *((_DWORD *)DriverObjectExtension + 7) >= 0x5006u )
  {
    *((_QWORD *)DriverObjectExtension + 118) = *(_QWORD *)(a4 + 328);
    goto LABEL_7;
  }
LABEL_8:
  v13[21] = SourceString->Length + 2;
  *((_WORD *)DriverObjectExtension + 20) = SourceString->Length;
  *((_QWORD *)DriverObjectExtension + 6) = ExAllocatePoolWithTag(
                                             PagedPool,
                                             *((unsigned __int16 *)DriverObjectExtension + 21),
                                             0x74727044u);
  v14 = (void *)*((_QWORD *)DriverObjectExtension + 6);
  if ( !v14 )
  {
    v10 = -1073741801LL;
    v22 = 6LL;
    goto LABEL_25;
  }
  memset(v14, 0, *((unsigned __int16 *)DriverObjectExtension + 21));
  RtlCopyUnicodeString((PUNICODE_STRING)((char *)DriverObjectExtension + 40), SourceString);
  KeInitializeMutex((PRKMUTEX)((char *)DriverObjectExtension + 72), 0);
  v15 = (char *)DriverObjectExtension + 56;
  *((_QWORD *)DriverObjectExtension + 8) = (char *)DriverObjectExtension + 56;
  *v15 = v15;
  AcquireMiniportListMutex();
  v16 = (_QWORD *)qword_1C01304D0;
  v17 = DriverObjectExtension;
  if ( *(__int64 **)qword_1C01304D0 != &qword_1C01304C8 )
    goto LABEL_39;
  *(_QWORD *)DriverObjectExtension = &qword_1C01304C8;
  v17[1] = v16;
  *v16 = v17;
  qword_1C01304D0 = (__int64)v17;
  _InterlockedExchange64(&qword_1C01304D8, 0LL);
  KeReleaseMutex(Mutex, 0);
  WdLogSingleEntry1(4LL, DriverObjectExtension);
  ClientIdentificationAddress->MajorFunction[0] = (PDRIVER_DISPATCH)DpiDispatchCreate;
  ClientIdentificationAddress->MajorFunction[27] = (PDRIVER_DISPATCH)DpiDispatchPnp;
  ClientIdentificationAddress->MajorFunction[22] = (PDRIVER_DISPATCH)DpiDispatchPower;
  ClientIdentificationAddress->MajorFunction[14] = (PDRIVER_DISPATCH)DpiDispatchIoctl;
  ClientIdentificationAddress->MajorFunction[15] = (PDRIVER_DISPATCH)DpiDispatchInternalIoctl;
  ClientIdentificationAddress->MajorFunction[23] = (PDRIVER_DISPATCH)&DpiDispatchSystemControl;
  ClientIdentificationAddress->MajorFunction[2] = (PDRIVER_DISPATCH)DpiDispatchCleanupAndClose;
  ClientIdentificationAddress->MajorFunction[18] = (PDRIVER_DISPATCH)DpiDispatchCleanupAndClose;
  ClientIdentificationAddress->DriverExtension->AddDevice = (PDRIVER_ADD_DEVICE)DpiAddDevice;
  ClientIdentificationAddress->DriverUnload = (PDRIVER_UNLOAD)DpiDriverUnload;
  v29 = 0LL;
  if ( (int)KsrGetFirmwareInformation(&v29) >= 0 && !qword_1C0130990 )
  {
    wil_details_FeatureReporting_ReportUsageToService(
      (__int64)&Feature_KsrDisplay__private_reporting,
      0xB841E8u,
      v18,
      v19,
      (const struct FEATURE_LOGGED_TRAITS *)&Feature_SupportComputeOnlyAdapters_logged_traits,
      1);
    CallbackObject = 0LL;
    *(&ObjectAttributes.Length + 1) = 0;
    *(&ObjectAttributes.Attributes + 1) = 0;
    DestinationString = 0LL;
    RtlInitUnicodeString(&DestinationString, L"\\Callback\\SoftRestart");
    ObjectAttributes.Length = 48;
    ObjectAttributes.ObjectName = &DestinationString;
    ObjectAttributes.RootDirectory = 0LL;
    ObjectAttributes.Attributes = 80;
    *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
    if ( ExCreateCallback(&CallbackObject, &ObjectAttributes, 0, 1u) >= 0 )
    {
      qword_1C0130990 = (__int64)ExRegisterCallback(CallbackObject, DpiKsrCallback, &DpGlobals);
      ObfDereferenceObject(CallbackObject);
      word_1C0130998 = 0;
    }
    if ( !qword_1C0130990 )
      WdLogSingleEntry1(2LL, -1073741823LL);
  }
  if ( (int)v10 < 0 )
  {
    if ( !DriverObjectExtension )
    {
LABEL_38:
      DxgCreateLiveDumpWithWdLogs(403LL, 2048LL);
      return (unsigned int)v10;
    }
    AcquireMiniportListMutex();
    v23 = *(_QWORD **)DriverObjectExtension;
    if ( *(PVOID *)(*(_QWORD *)DriverObjectExtension + 8LL) == DriverObjectExtension )
    {
      v24 = (PVOID *)*((_QWORD *)DriverObjectExtension + 1);
      if ( *v24 == DriverObjectExtension )
      {
        *v24 = v23;
        v23[1] = v24;
        _InterlockedExchange64(&qword_1C01304D8, 0LL);
        KeReleaseMutex(Mutex, 0);
        goto LABEL_35;
      }
    }
LABEL_39:
    __fastfail(3u);
  }
  return (unsigned int)v10;
}
