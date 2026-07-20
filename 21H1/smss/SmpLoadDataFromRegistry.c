/*
 * XREFs of SmpLoadDataFromRegistry @ 0x1400094D0
 * Callers:
 *     SmpInit @ 0x14000C620 (SmpInit.c)
 * Callees:
 *     SmpOpenKnownDllsHandles @ 0x1400012B0 (SmpOpenKnownDllsHandles.c)
 *     RtlStringCbPrintfW @ 0x14000202C (RtlStringCbPrintfW.c)
 *     SmpExecuteCommand @ 0x140004558 (SmpExecuteCommand.c)
 *     SmpFreeSavedRegistryEntry @ 0x140005A00 (SmpFreeSavedRegistryEntry.c)
 *     SmpReadSafeBootOption @ 0x140005A50 (SmpReadSafeBootOption.c)
 *     SmpFinalizePathStrings @ 0x140005AF0 (SmpFinalizePathStrings.c)
 *     SmpCreateProtectedPrefixes @ 0x140005BF0 (SmpCreateProtectedPrefixes.c)
 *     SmpGetPlatformBinary @ 0x140006768 (SmpGetPlatformBinary.c)
 *     SmpInitializeKnownDlls @ 0x140007950 (SmpInitializeKnownDlls.c)
 *     SmpInitializeDosDevices @ 0x140009150 (SmpInitializeDosDevices.c)
 *     SmpProcessFileRenames @ 0x140009348 (SmpProcessFileRenames.c)
 *     SmpNtSerializeBoot @ 0x140009490 (SmpNtSerializeBoot.c)
 *     SmpEventWrite @ 0x140009F80 (SmpEventWrite.c)
 *     SmpCreateDynamicEnvironmentVariables @ 0x14000A0E0 (SmpCreateDynamicEnvironmentVariables.c)
 *     SmpInitializeSessionManagement @ 0x14000A770 (SmpInitializeSessionManagement.c)
 *     SmpConfigureSharedSessionData @ 0x14000A7D0 (SmpConfigureSharedSessionData.c)
 *     SmpTranslateSystemPartitionInformation @ 0x14000B020 (SmpTranslateSystemPartitionInformation.c)
 *     __security_check_cookie @ 0x14000E4B0 (__security_check_cookie.c)
 *     SmpInitializeKnownDllsAsync @ 0x14000E8F8 (SmpInitializeKnownDllsAsync.c)
 *     SmpReplaceSystemHiveOnSoftReboot @ 0x14000EA88 (SmpReplaceSystemHiveOnSoftReboot.c)
 *     SmpSuffixUnicodeString @ 0x14000EBE0 (SmpSuffixUnicodeString.c)
 *     SmpPlatformBinaryTableExists @ 0x140014AC8 (SmpPlatformBinaryTableExists.c)
 *     SmpSendPlatformBinaryStatus @ 0x140014C2C (SmpSendPlatformBinaryStatus.c)
 */

int __fastcall SmpLoadDataFromRegistry(HANDLE EventHandle, __int64 a2, __int64 a3, __int64 a4)
{
  HANDLE v4; // r15
  __int64 v5; // r12
  __int64 NtSystemRoot; // rax
  int Environment; // ecx
  void *v8; // rax
  int result; // eax
  __int64 v10; // rax
  __int64 (*v11)(void); // rcx
  int v12; // eax
  int v13; // eax
  __int64 v14; // r14
  int v15; // esi
  int PlatformBinary; // eax
  __int64 *v17; // rax
  __int64 **v18; // rbx
  const UNICODE_STRING *v19; // rdi
  int v20; // eax
  __int64 v21; // r8
  __int64 *v22; // rbx
  __int64 *v23; // rdi
  __int64 v24; // r8
  __int64 *v25; // rdi
  __int64 *v26; // rbx
  __int64 v27; // r8
  __int64 *v28; // rdi
  __int64 *v29; // rbx
  int v30; // eax
  int v31; // eax
  __int64 v32; // r8
  unsigned int v33; // ebx
  int v34; // eax
  __int64 v35; // r8
  BOOL v36; // ebx
  int DynamicEnvironmentVariables; // ebx
  __int64 v38; // r8
  __int64 *v39; // rdi
  __int64 *v40; // rbx
  __int64 v41; // [rsp+38h] [rbp-D0h] BYREF
  void *KeyHandle; // [rsp+40h] [rbp-C8h] BYREF
  __int64 v43; // [rsp+48h] [rbp-C0h] BYREF
  struct _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+50h] [rbp-B8h] BYREF
  __int64 v45; // [rsp+80h] [rbp-88h] BYREF
  PWSTR OldEnvironment; // [rsp+88h] [rbp-80h] BYREF
  HANDLE v47; // [rsp+90h] [rbp-78h]
  __int64 v48; // [rsp+98h] [rbp-70h] BYREF
  __int64 v49; // [rsp+A0h] [rbp-68h] BYREF
  int v50; // [rsp+A8h] [rbp-60h] BYREF
  const wchar_t *v51; // [rsp+B0h] [rbp-58h]
  int v52; // [rsp+B8h] [rbp-50h] BYREF
  const wchar_t *v53; // [rsp+C0h] [rbp-48h]
  struct _UNICODE_STRING ValueName; // [rsp+C8h] [rbp-40h] BYREF
  int v55; // [rsp+D8h] [rbp-30h] BYREF
  const wchar_t *v56; // [rsp+E0h] [rbp-28h]
  struct _UNICODE_STRING Destination; // [rsp+E8h] [rbp-20h] BYREF
  char v58; // [rsp+F8h] [rbp-10h] BYREF
  HANDLE Object; // [rsp+100h] [rbp-8h]
  HANDLE ThreadHandle; // [rsp+108h] [rbp+0h]
  char v61; // [rsp+14Eh] [rbp+46h]
  wchar_t pszDest[256]; // [rsp+168h] [rbp+60h] BYREF

  v47 = EventHandle;
  v51 = L"\\Registry\\Machine\\System\\CurrentControlSet\\Control\\MiniNT";
  v50 = 7602290;
  v56 = L"\\Sessions";
  v4 = EventHandle;
  v55 = 1310738;
  v53 = L"\\Registry\\Machine\\System\\CurrentControlSet\\Control\\Session Manager\\Environment";
  v5 = 0LL;
  v52 = 10354844;
  ValueName.Buffer = L"NUMBER_OF_PROCESSORS";
  qword_140024228 = (__int64)&SmpBootExecuteList;
  SmpBootExecuteList = (__int64)&SmpBootExecuteList;
  qword_140024238 = (__int64)&SmpBootExecuteNoPnpSyncList;
  SmpBootExecuteNoPnpSyncList = (__int64)&SmpBootExecuteNoPnpSyncList;
  qword_140024248 = (__int64)&SmpPlatformExecuteList;
  SmpPlatformExecuteList = (__int64)&SmpPlatformExecuteList;
  qword_140024258 = (__int64)&SmpSetupExecuteList;
  SmpSetupExecuteList = (__int64)&SmpSetupExecuteList;
  qword_140024368 = (__int64)&SmpPagingFileList;
  SmpPagingFileList = &SmpPagingFileList;
  qword_140024268 = (__int64)&SmpDosDevicesList;
  SmpDosDevicesList = &SmpDosDevicesList;
  qword_140024278 = (__int64)&SmpFileRenameList;
  SmpFileRenameList = &SmpFileRenameList;
  qword_140024288 = (__int64)&SmpKnownDllsList;
  SmpKnownDllsList = &SmpKnownDllsList;
  qword_140024298 = (__int64)&SmpExcludeKnownDllsList;
  SmpExcludeKnownDllsList = &SmpExcludeKnownDllsList;
  qword_1400242A8 = (__int64)&SmpSubSystemsRequired;
  SmpSubSystemsRequired = (__int64)&SmpSubSystemsRequired;
  qword_1400242B8 = (__int64)&SmpSubSystemsToDefer;
  SmpSubSystemsToDefer = (__int64)&SmpSubSystemsToDefer;
  qword_140024358 = (__int64)&SmpExistingPageFilesList;
  SmpExistingPageFilesList = &SmpExistingPageFilesList;
  *(_DWORD *)&ValueName.Length = 2752552;
  SmpClearTempFiles = 0;
  NtSystemRoot = RtlGetNtSystemRoot(EventHandle, a2, a3, a4);
  RtlStringCbPrintfW(SmpTempDirNameBuffer, 0x20AuLL, L"\\??\\%s", NtSystemRoot);
  RtlInitUnicodeString(&SmpTempFilesDir, SmpTempDirNameBuffer);
  Environment = RtlCreateEnvironment(1u, &SmpDefaultEnvironment);
  if ( Environment < 0 )
  {
    v8 = RtlCreateEnvironment;
    SmpInitProgressByLine = 2069;
LABEL_3:
    SmpInitReturnStatus = Environment;
    SmpInitLastCall = (__int64)v8;
    return Environment;
  }
  ObjectAttributes.RootDirectory = 0LL;
  ObjectAttributes.Length = 48;
  ObjectAttributes.ObjectName = (PUNICODE_STRING)&v50;
  ObjectAttributes.Attributes = 64;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  if ( NtOpenKey(&KeyHandle, 0xF003Fu, &ObjectAttributes) >= 0 )
  {
    NtClose(KeyHandle);
    SmpMiniNTBoot = 1;
  }
  SmpReadSafeBootOption();
  ObjectAttributes.Length = 48;
  ObjectAttributes.ObjectName = (PUNICODE_STRING)&v52;
  ObjectAttributes.RootDirectory = 0LL;
  ObjectAttributes.Attributes = 64;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  result = NtOpenKey(&KeyHandle, 0xF003Fu, &ObjectAttributes);
  if ( result < 0 )
    return result;
  NtDeleteValueKey(KeyHandle, (PUNICODE_STRING)&SmpSafeBootEnvironmentValue);
  RtlStringCbPrintfW(pszDest, 0x200uLL, L"%u", (unsigned int)byte_140024338);
  v10 = -1LL;
  do
    ++v10;
  while ( pszDest[v10] );
  result = NtSetValueKey(KeyHandle, &ValueName, 0, 1u, pszDest, 2 * v10 + 2);
  if ( result < 0 )
    return result;
  RtlSetCurrentEnvironment(SmpDefaultEnvironment, &OldEnvironment);
  Environment = RtlQueryRegistryValuesEx(2LL, L"Session Manager", &SmpRegistryConfigurationTable);
  if ( Environment < 0 )
  {
    v8 = RtlQueryRegistryValuesEx;
    SmpInitProgressByLine = 2183;
    goto LABEL_3;
  }
  result = SmpFinalizePathStrings();
  if ( result < 0 )
  {
    SmpInitProgressByLine = 2196;
    v11 = SmpFinalizePathStrings;
LABEL_14:
    SmpInitReturnStatus = result;
    SmpInitLastCall = (__int64)v11;
    return result;
  }
  result = SmpOpenKnownDllsHandles(
             (struct _UNICODE_STRING *)&SmpKnownDllsObjectDirectoryName,
             (const UNICODE_STRING *)&SmpKnownDllsPathSuffix,
             1,
             &SmpKnownDllsObjectDirectory,
             &SmpKnownDllsFileDirectory);
  if ( result < 0 )
  {
    SmpKnownDllsObjectDirectory = 0LL;
    v11 = (__int64 (*)(void))SmpOpenKnownDllsHandles;
    SmpKnownDllsFileDirectory = 0LL;
    SmpInitProgressByLine = 2218;
    goto LABEL_14;
  }
  v12 = SmpBackgroundLoadKnownDlls;
  if ( SmpSoftBoot )
    v12 = 1;
  SmpBackgroundLoadKnownDlls = v12;
  if ( !v12 )
    goto LABEL_23;
  Environment = SmpInitializeKnownDllsAsync();
  v13 = SmpBackgroundLoadKnownDlls;
  if ( Environment < 0 )
    v13 = 0;
  SmpBackgroundLoadKnownDlls = v13;
  if ( !v13 )
LABEL_23:
    Environment = SmpInitializeKnownDlls();
  if ( Environment < 0 )
  {
    SmpInitProgressByLine = 2250;
    v8 = SmpInitializeKnownDlls;
    goto LABEL_3;
  }
  result = SmpInitializeSessionManagement();
  if ( result < 0 )
  {
    SmpInitProgressByLine = 2257;
    v11 = SmpInitializeSessionManagement;
    goto LABEL_14;
  }
  RtlSetCurrentEnvironment(OldEnvironment, &SmpDefaultEnvironment);
  result = SmpInitializeDosDevices();
  if ( result < 0 )
  {
    SmpInitProgressByLine = 2278;
    v11 = (__int64 (*)(void))SmpInitializeDosDevices;
    goto LABEL_14;
  }
  ObjectAttributes.Length = 48;
  ObjectAttributes.ObjectName = (PUNICODE_STRING)&v55;
  ObjectAttributes.SecurityDescriptor = SmpPrimarySecurityDescriptor;
  ObjectAttributes.RootDirectory = 0LL;
  ObjectAttributes.Attributes = 208;
  ObjectAttributes.SecurityQualityOfService = 0LL;
  Environment = NtCreateDirectoryObject(&SmpSessionsObjectDirectory, 0xF000Fu, &ObjectAttributes);
  if ( Environment < 0 )
  {
    v8 = NtCreateDirectoryObject;
    SmpInitProgressByLine = 2310;
    goto LABEL_3;
  }
  result = SmpCreateProtectedPrefixes();
  if ( result < 0 )
  {
    SmpInitProgressByLine = 2327;
    v11 = SmpCreateProtectedPrefixes;
    goto LABEL_14;
  }
  v14 = 0LL;
  v45 = 0LL;
  if ( SmpHostSmss )
  {
    if ( SmpMiniNTBoot || SmpSafeBootOption != -1 || SmpDisableWpbtExecution )
    {
      v15 = -1073741823;
      if ( (unsigned __int8)SmpPlatformBinaryTableExists() )
        SmpSendPlatformBinaryStatus(2LL, 0LL, 0LL, 0LL);
    }
    else
    {
      PlatformBinary = SmpGetPlatformBinary(&Destination, &v45);
      v14 = v45;
      v15 = PlatformBinary;
    }
  }
  else
  {
    v15 = -1073741823;
  }
  v17 = (__int64 *)SmpSetupExecuteList;
  v18 = (__int64 **)SmpSetupExecuteList;
  if ( (__int64 *)SmpBootExecuteList != &SmpBootExecuteList )
  {
    if ( *(__int64 **)SmpBootExecuteList != &SmpBootExecuteList )
      goto LABEL_53;
    v19 = (const UNICODE_STRING *)(SmpBootExecuteList + 16);
    if ( !RtlEqualUnicodeString(&SmpAutoChkDefaultCommand, (PCUNICODE_STRING)(SmpBootExecuteList + 16), 1u)
      && (!SmpSoftBoot || !RtlPrefixUnicodeString(&SmpAutoChkKeyword, v19, 1u)) )
    {
      goto LABEL_53;
    }
    v17 = (__int64 *)SmpSetupExecuteList;
  }
  if ( v17 != &SmpSetupExecuteList
    && (*v18 != &SmpSetupExecuteList
     || !SmpSoftBoot
     || !(unsigned __int8)SmpSuffixUnicodeString(&SmpSetupExecuteList, v18 + 2))
    || v15 >= 0 )
  {
LABEL_53:
    v20 = SmpNtSerializeBoot();
    if ( v20 < 0 )
    {
      SmpInitProgressByLine = 2423;
      SmpInitReturnStatus = v20;
      SmpInitLastCall = (__int64)NtSerializeBoot;
    }
  }
  SmpEventWrite(&SmssEvt_PlatformExecuteList_Start);
  v22 = (__int64 *)SmpPlatformExecuteList;
  while ( v22 != &SmpPlatformExecuteList )
  {
    v23 = v22;
    if ( SmpHostSmss )
      SmpExecuteCommand((__int64)(v22 + 2), 0, v21, 0, 0LL);
    v22 = (__int64 *)*v22;
    SmpFreeSavedRegistryEntry(v23);
  }
  SmpEventWrite(&SmssEvt_PlatformExecuteList_Stop);
  SmpEventWrite(&SmssEvt_BootExecuteList_Start);
  v25 = (__int64 *)SmpBootExecuteList;
  if ( (__int64 *)SmpBootExecuteList != &SmpBootExecuteList )
  {
    do
    {
      v26 = v25;
      SmpExecuteCommand((__int64)(v25 + 2), 0, v24, 0, 0LL);
      v25 = (__int64 *)*v25;
      SmpFreeSavedRegistryEntry(v26);
    }
    while ( v25 != &SmpBootExecuteList );
    v5 = 0LL;
  }
  SmpEventWrite(&SmssEvt_BootExecuteList_Stop);
  SmpEventWrite(&SmssEvt_BootExecuteNoPnpSyncList_Start);
  v28 = (__int64 *)SmpBootExecuteNoPnpSyncList;
  if ( (__int64 *)SmpBootExecuteNoPnpSyncList != &SmpBootExecuteNoPnpSyncList )
  {
    do
    {
      v29 = v28;
      SmpExecuteCommand((__int64)(v28 + 2), 0, v27, 0, 0LL);
      v28 = (__int64 *)*v28;
      SmpFreeSavedRegistryEntry(v29);
    }
    while ( v28 != &SmpBootExecuteNoPnpSyncList );
    v4 = v47;
  }
  SmpEventWrite(&SmssEvt_BootExecuteNoPnpSyncList_Stop);
  if ( v4 )
    NtSetEvent(v4, 0LL);
  SmpEventWrite(&SmssEvt_InitializeRegistry_Start);
  if ( SmpSoftBootSystemHiveReady )
    SmpReplaceSystemHiveOnSoftReboot();
  NtInitializeRegistry(0);
  SmpEventWrite(&SmssEvt_InitializeRegistry_Stop);
  if ( v15 >= 0 )
  {
    v30 = RtlQueryPerformanceFrequency(&v41);
    v41 &= -(__int64)(v30 != 0);
    v31 = RtlQueryPerformanceCounter(&v49);
    v41 &= -(__int64)(v31 != 0);
    if ( (int)SmpExecuteCommand((__int64)&Destination, 0, v32, 32, (PRTL_USER_PROCESS_PARAMETERS)&v58) < 0 )
    {
      v33 = 1;
    }
    else
    {
      if ( v61 >= 0 )
      {
        v33 = 3;
        NtTerminateProcess(Object, -1073740760);
      }
      else
      {
        v33 = 0;
        NtResumeThread(ThreadHandle, 0LL);
        NtWaitForSingleObject(Object, 0, 0LL);
      }
      NtClose(Object);
      NtClose(ThreadHandle);
    }
    v34 = RtlQueryPerformanceCounter(&v48);
    v35 = v41 & -(__int64)(v34 != 0);
    v41 = v35;
    if ( v35 > 0 )
      v5 = 1000 * (v48 - v49) / v35;
    SmpSendPlatformBinaryStatus(v33, v14, v5, &Destination);
    RtlFreeHeap(*(PVOID *)(*(_QWORD *)&KeGetPcr()->MajorVersion + 48LL), 0, Destination.Buffer);
  }
  v36 = 0;
  if ( (unsigned __int8)RtlIsStateSeparationEnabled() )
    v36 = (int)RtlQueryRegistryValuesEx(
                 0LL,
                 L"\\REGISTRY\\MACHINE\\OSDATA\\Session Manager",
                 &SmpRegistryConfigurationTable2) >= 0;
  if ( !SmpMiniNTBoot )
    SmpProcessFileRenames(v36);
  v43 = 0LL;
  result = TpAllocWork(&v43, SmpAsyncMemoryConfiguration, 0LL, &SmpCallbackEnviron);
  if ( result < 0 )
  {
    v11 = (__int64 (*)(void))TpAllocWork;
    SmpInitProgressByLine = 2668;
    goto LABEL_14;
  }
  TpPostWork(v43);
  if ( SmpWaitForPagingFiles )
    TpWaitForWork(v43, 0LL);
  TpReleaseWork(v43);
  DynamicEnvironmentVariables = SmpCreateDynamicEnvironmentVariables(KeyHandle);
  NtClose(KeyHandle);
  if ( DynamicEnvironmentVariables >= 0 )
  {
    SmpEventWrite(&SmssEvt_SetupExecuteList_Start);
    v39 = (__int64 *)SmpSetupExecuteList;
    while ( v39 != &SmpSetupExecuteList )
    {
      v40 = v39;
      SmpExecuteCommand((__int64)(v39 + 2), 0, v38, 0, 0LL);
      v39 = (__int64 *)*v39;
      SmpFreeSavedRegistryEntry(v40);
    }
    SmpEventWrite(&SmssEvt_SetupExecuteList_Stop);
    result = SmpConfigureSharedSessionData();
    if ( result < 0 )
    {
      SmpInitProgressByLine = 2737;
      v11 = SmpConfigureSharedSessionData;
      goto LABEL_14;
    }
    SmpTranslateSystemPartitionInformation();
    return 0;
  }
  else
  {
    SmpInitProgressByLine = 2694;
    SmpInitReturnStatus = DynamicEnvironmentVariables;
    SmpInitLastCall = (__int64)SmpCreateDynamicEnvironmentVariables;
    return DynamicEnvironmentVariables;
  }
}
