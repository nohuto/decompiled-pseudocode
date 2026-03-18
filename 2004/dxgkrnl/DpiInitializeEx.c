/*
 * XREFs of DpiInitializeEx @ 0x1C019314C
 * Callers:
 *     DpiKmdDodInitialize @ 0x1C00235D0 (DpiKmdDodInitialize.c)
 *     DpiInitializeInternal @ 0x1C0023668 (DpiInitializeInternal.c)
 * Callees:
 *     ?wil_details_FeatureReporting_ReportUsageToService@@YAXPEAUwil_details_FeatureReportingCache@@IHHPEBUFEATURE_LOGGED_TRAITS@@HW4wil_ReportingKind@@_K@Z @ 0x1C000B428 (-wil_details_FeatureReporting_ReportUsageToService@@YAXPEAUwil_details_FeatureReportingCache@@IH.c)
 *     ?AcquireMiniportListMutex@@YAXXZ @ 0x1C0018650 (-AcquireMiniportListMutex@@YAXXZ.c)
 *     __security_check_cookie @ 0x1C0024350 (__security_check_cookie.c)
 *     memmove @ 0x1C0027200 (memmove.c)
 *     memset @ 0x1C00274C0 (memset.c)
 *     DpiGetDriverDataSizeFromVersion @ 0x1C0193960 (DpiGetDriverDataSizeFromVersion.c)
 *     ?DxgCreateLiveDumpWithWdLogs@@YAJK_K000E@Z @ 0x1C02210A0 (-DxgCreateLiveDumpWithWdLogs@@YAJK_K000E@Z.c)
 */

__int64 __fastcall DpiInitializeEx(
        struct _DRIVER_OBJECT *ClientIdentificationAddress,
        PCUNICODE_STRING SourceString,
        unsigned int *Src,
        __int64 a4,
        char a5)
{
  char v9; // r12
  NTSTATUS v10; // eax
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // rdi
  __int64 v14; // rdx
  int DriverDataSizeFromVersion; // eax
  _WORD *v16; // rcx
  __int64 v17; // rdx
  __int64 v18; // r8
  __int64 v19; // r9
  void *v20; // rcx
  _QWORD *v21; // rax
  _QWORD *v22; // rcx
  _QWORD *v23; // rax
  __int64 v24; // rdx
  __int64 v25; // rcx
  __int64 v26; // rax
  unsigned int v28; // eax
  __int64 v29; // rax
  __int64 v30; // rax
  __int64 v31; // rdx
  __int64 v32; // rcx
  _QWORD *v33; // rcx
  PVOID *v34; // rdx
  int v35; // [rsp+30h] [rbp-91h]
  PVOID DriverObjectExtension; // [rsp+40h] [rbp-81h] BYREF
  size_t Size; // [rsp+48h] [rbp-79h] BYREF
  PCALLBACK_OBJECT CallbackObject; // [rsp+50h] [rbp-71h] BYREF
  UNICODE_STRING String1; // [rsp+58h] [rbp-69h] BYREF
  __int64 v40; // [rsp+68h] [rbp-59h] BYREF
  struct _UNICODE_STRING DestinationString; // [rsp+70h] [rbp-51h] BYREF
  struct _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+80h] [rbp-41h] BYREF
  _OWORD v43[2]; // [rsp+B0h] [rbp-11h] BYREF
  __int64 v44; // [rsp+D0h] [rbp+Fh]

  v43[0] = *(_OWORD *)L"\\Driver\\IndirectKmd";
  v44 = *(_QWORD *)L"Kmd";
  DriverObjectExtension = 0LL;
  LODWORD(Size) = 0;
  v9 = 0;
  v43[1] = *(_OWORD *)L"IndirectKmd";
  *(_QWORD *)&String1.Length = 2621478LL;
  String1.Buffer = (wchar_t *)v43;
  v10 = IoAllocateDriverObjectExtension(
          ClientIdentificationAddress,
          ClientIdentificationAddress,
          0x560u,
          &DriverObjectExtension);
  v13 = v10;
  if ( v10 < 0 )
    goto LABEL_22;
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
    v14 = *Src;
    *((_DWORD *)DriverObjectExtension + 7) = v14;
    DriverDataSizeFromVersion = DpiGetDriverDataSizeFromVersion(0LL, v14, 1232LL, &Size);
    v13 = DriverDataSizeFromVersion;
    if ( DriverDataSizeFromVersion >= 0 )
    {
      memmove((char *)DriverObjectExtension + 136, Src, (unsigned int)Size);
      *((_QWORD *)DriverObjectExtension + 171) = 0LL;
LABEL_7:
      v16 = DriverObjectExtension;
      goto LABEL_8;
    }
LABEL_22:
    v29 = WdLogNewEntry5_WdError(v12, v11);
    *(_QWORD *)(v29 + 24) = v13;
LABEL_29:
    WdLogEvent5_WdError(v29);
    goto LABEL_11;
  }
  *((_BYTE *)DriverObjectExtension + 133) = 1;
  memset((char *)DriverObjectExtension + 136, 0, 0x4D8uLL);
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
  *((_QWORD *)DriverObjectExtension + 171) = *(_QWORD *)(a4 + 256);
  *((_QWORD *)DriverObjectExtension + 92) = *(_QWORD *)(a4 + 264);
  *((_QWORD *)DriverObjectExtension + 93) = *(_QWORD *)(a4 + 272);
  *((_QWORD *)DriverObjectExtension + 94) = *(_QWORD *)(a4 + 280);
  v28 = *(_DWORD *)a4;
  if ( *(_DWORD *)a4 >= 0x3005u )
  {
    *((_QWORD *)DriverObjectExtension + 96) = *(_QWORD *)(a4 + 288);
    v28 = *(_DWORD *)a4;
  }
  if ( v28 < 0x3007 )
    *((_QWORD *)DriverObjectExtension + 63) = 0LL;
  else
    *((_QWORD *)DriverObjectExtension + 65) = *(_QWORD *)(a4 + 296);
  if ( *(_DWORD *)a4 >= 0x3009u )
  {
    *((_QWORD *)DriverObjectExtension + 88) = *(_QWORD *)(a4 + 304);
    *((_QWORD *)DriverObjectExtension + 97) = *(_QWORD *)(a4 + 312);
  }
  v16 = DriverObjectExtension;
  if ( *((_DWORD *)DriverObjectExtension + 7) >= 0x5006u )
  {
    *((_QWORD *)DriverObjectExtension + 118) = *(_QWORD *)(a4 + 328);
    goto LABEL_7;
  }
LABEL_8:
  v16[21] = SourceString->Length + 2;
  *((_WORD *)DriverObjectExtension + 20) = SourceString->Length;
  *((_QWORD *)DriverObjectExtension + 6) = ExAllocatePoolWithTag(
                                             PagedPool,
                                             *((unsigned __int16 *)DriverObjectExtension + 21),
                                             0x74727044u);
  v20 = (void *)*((_QWORD *)DriverObjectExtension + 6);
  if ( !v20 )
  {
    LODWORD(v13) = -1073741801;
    v30 = WdLogNewEntry5_WdLowResource(0LL, v17, v18, v19);
    *(_QWORD *)(v30 + 24) = -1073741801LL;
    WdLogEvent5_WdLowResource(v30);
    goto LABEL_35;
  }
  memset(v20, 0, *((unsigned __int16 *)DriverObjectExtension + 21));
  RtlCopyUnicodeString((PUNICODE_STRING)((char *)DriverObjectExtension + 40), SourceString);
  KeInitializeMutex((PRKMUTEX)((char *)DriverObjectExtension + 72), 0);
  v21 = (char *)DriverObjectExtension + 56;
  *((_QWORD *)DriverObjectExtension + 8) = (char *)DriverObjectExtension + 56;
  *v21 = v21;
  AcquireMiniportListMutex();
  v22 = (_QWORD *)qword_1C00B1B48;
  v23 = DriverObjectExtension;
  if ( *(__int64 **)qword_1C00B1B48 != &qword_1C00B1B40 )
    goto LABEL_39;
  *(_QWORD *)DriverObjectExtension = &qword_1C00B1B40;
  v23[1] = v22;
  *v22 = v23;
  qword_1C00B1B48 = (__int64)v23;
  _InterlockedExchange64(&qword_1C00B1B50, 0LL);
  KeReleaseMutex(Mutex, 0);
  v9 = 1;
  v26 = WdLogNewEntry5_WdEvent(v25, v24);
  *(_QWORD *)(v26 + 24) = DriverObjectExtension;
  WdLogEvent5_WdEvent(v26);
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
  v40 = 0LL;
  if ( (int)KsrGetFirmwareInformation(&v40) >= 0 && !qword_1C00B2008 )
  {
    wil_details_FeatureReporting_ReportUsageToService(
      (__int64)&Feature_KsrDisplay__private_reporting,
      0xB841E8u,
      0LL,
      0LL,
      (const struct FEATURE_LOGGED_TRAITS *)&Feature_SupportComputeOnlyAdapters_logged_traits,
      1,
      v35);
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
      qword_1C00B2008 = (__int64)ExRegisterCallback(CallbackObject, DpiKsrCallback, &DpGlobals);
      ObfDereferenceObject(CallbackObject);
      word_1C00B2010 = 0;
    }
    if ( !qword_1C00B2008 )
    {
      v29 = WdLogNewEntry5_WdError(v32, v31);
      *(_QWORD *)(v29 + 24) = -1073741823LL;
      goto LABEL_29;
    }
  }
LABEL_11:
  if ( (int)v13 < 0 )
  {
    if ( v9 == 1 )
    {
      if ( !DriverObjectExtension )
      {
LABEL_38:
        DxgCreateLiveDumpWithWdLogs(0x193u, 0x800uLL, (int)v13, 0LL, 0LL, 0);
        return (unsigned int)v13;
      }
      AcquireMiniportListMutex();
      v33 = *(_QWORD **)DriverObjectExtension;
      if ( *(PVOID *)(*(_QWORD *)DriverObjectExtension + 8LL) == DriverObjectExtension )
      {
        v34 = (PVOID *)*((_QWORD *)DriverObjectExtension + 1);
        if ( *v34 == DriverObjectExtension )
        {
          *v34 = v33;
          v33[1] = v34;
          _InterlockedExchange64(&qword_1C00B1B50, 0LL);
          KeReleaseMutex(Mutex, 0);
          goto LABEL_35;
        }
      }
LABEL_39:
      __fastfail(3u);
    }
LABEL_35:
    if ( DriverObjectExtension && *((_QWORD *)DriverObjectExtension + 6) )
      RtlFreeUnicodeString((PUNICODE_STRING)((char *)DriverObjectExtension + 40));
    goto LABEL_38;
  }
  return (unsigned int)v13;
}
