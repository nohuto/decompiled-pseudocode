/*
 * XREFs of CmInitSystem1 @ 0x140A582D4
 * Callers:
 *     Phase1InitializationDiscard @ 0x140A37B24 (Phase1InitializationDiscard.c)
 * Callees:
 *     ExInitializeResourceLite @ 0x140213470 (ExInitializeResourceLite.c)
 *     ExInitializePushLock @ 0x140267800 (ExInitializePushLock.c)
 *     HalSystemVectorDispatchEntry @ 0x14026BA30 (HalSystemVectorDispatchEntry.c)
 *     KeInitializeGuardedMutex @ 0x140273520 (KeInitializeGuardedMutex.c)
 *     RtlInitUnicodeString @ 0x140298F60 (RtlInitUnicodeString.c)
 *     CmpInitializeLoadOptions @ 0x1403B55DC (CmpInitializeLoadOptions.c)
 *     __security_check_cookie @ 0x1403CCE60 (__security_check_cookie.c)
 *     ZwClose @ 0x1403F37A0 (ZwClose.c)
 *     ZwCreateKey @ 0x1403F3960 (ZwCreateKey.c)
 *     KeBugCheckEx @ 0x1403F70D0 (KeBugCheckEx.c)
 *     memset @ 0x14040A280 (memset.c)
 *     CmpAttachToRegistryProcess @ 0x1405EA8E0 (CmpAttachToRegistryProcess.c)
 *     CmpDetachFromRegistryProcess @ 0x1405EC100 (CmpDetachFromRegistryProcess.c)
 *     CmpUnlockRegistry @ 0x1405F3D20 (CmpUnlockRegistry.c)
 *     CmpCreateHive @ 0x14063ACD0 (CmpCreateHive.c)
 *     CmpLockRegistryExclusive @ 0x1406400FC (CmpLockRegistryExclusive.c)
 *     CmpHashUnicodeComponent @ 0x140641348 (CmpHashUnicodeComponent.c)
 *     CmpLinkHiveToMaster @ 0x140650940 (CmpLinkHiveToMaster.c)
 *     CmpInitializeKcbCache @ 0x140650D28 (CmpInitializeKcbCache.c)
 *     CmpInitializeParseContext @ 0x1406524D8 (CmpInitializeParseContext.c)
 *     CmpCleanupParseContext @ 0x140694400 (CmpCleanupParseContext.c)
 *     ObOpenObjectByName @ 0x1406945D0 (ObOpenObjectByName.c)
 *     CmpAddToHiveFileList @ 0x14070CBDC (CmpAddToHiveFileList.c)
 *     CmpInitializeRegistryProcess @ 0x140781E8C (CmpInitializeRegistryProcess.c)
 *     CmpInitializeFreezeThaw @ 0x14078EAD8 (CmpInitializeFreezeThaw.c)
 *     HvInitializeHashLibrary @ 0x14078EB10 (HvInitializeHashLibrary.c)
 *     CmpValidateGlobalFlushControlFlags @ 0x14078EB54 (CmpValidateGlobalFlushControlFlags.c)
 *     CmpInitializeGlobalKeyLockTracker @ 0x14078EB74 (CmpInitializeGlobalKeyLockTracker.c)
 *     CmpVolumeManagerInitialize @ 0x14078EB9C (CmpVolumeManagerInitialize.c)
 *     CmpInitializeLightWeightTransactionType @ 0x14078EBC4 (CmpInitializeLightWeightTransactionType.c)
 *     CmpInitSiloSupport @ 0x14078EC88 (CmpInitSiloSupport.c)
 *     CmpMarkCurrentProfileDirty @ 0x14078ED4C (CmpMarkCurrentProfileDirty.c)
 *     CmpAdminSystemSecurityDescriptor @ 0x140790630 (CmpAdminSystemSecurityDescriptor.c)
 *     CmpHiveRootSecurityDescriptor @ 0x140791ABC (CmpHiveRootSecurityDescriptor.c)
 *     CmpInitializeNameCache @ 0x1407A519C (CmpInitializeNameCache.c)
 *     CmpInitializeMachineHiveLoadedCallbacks @ 0x1407B8A38 (CmpInitializeMachineHiveLoadedCallbacks.c)
 *     CmpInitializeDelayedCloseTable @ 0x1407C0674 (CmpInitializeDelayedCloseTable.c)
 *     CmpInitCallbacks @ 0x1407C0EF0 (CmpInitCallbacks.c)
 *     CmpInitSIDToHiveMapping @ 0x1407C2994 (CmpInitSIDToHiveMapping.c)
 *     ExFreePoolWithTag @ 0x1409B1140 (ExFreePoolWithTag.c)
 *     CmFcInitSystem2 @ 0x140A35394 (CmFcInitSystem2.c)
 *     CmpInitializeTransactions @ 0x140A55FF8 (CmpInitializeTransactions.c)
 *     CmpCreateObjectTypes @ 0x140A562F4 (CmpCreateObjectTypes.c)
 *     CmpCreateControlSet @ 0x140A563DC (CmpCreateControlSet.c)
 *     CmpInitializeDriverStores @ 0x140A56678 (CmpInitializeDriverStores.c)
 *     CmpCreateExtendedControlSets @ 0x140A5682C (CmpCreateExtendedControlSets.c)
 *     CmpCreateHardwareProfiles @ 0x140A5689C (CmpCreateHardwareProfiles.c)
 *     CmpInitializeHardwareConfiguration @ 0x140A56E0C (CmpInitializeHardwareConfiguration.c)
 *     CmpInitializeMachineDependentConfiguration @ 0x140A56F60 (CmpInitializeMachineDependentConfiguration.c)
 *     CmpSetSystemValues @ 0x140A5800C (CmpSetSystemValues.c)
 *     CmpMigrateOOBELanguageToInstallationLanguage @ 0x140A58248 (CmpMigrateOOBELanguageToInstallationLanguage.c)
 *     CmpInitializePreloadedHives @ 0x140A58C78 (CmpInitializePreloadedHives.c)
 *     CmpCreateRegistryRoot @ 0x140A59228 (CmpCreateRegistryRoot.c)
 *     CmpInitializeRegistryNames @ 0x140A68B64 (CmpInitializeRegistryNames.c)
 *     CmpInitializeTrustedInstallerSid @ 0x140A6E23C (CmpInitializeTrustedInstallerSid.c)
 *     CmpInitGlobalQuotaAllowed @ 0x140A6EC64 (CmpInitGlobalQuotaAllowed.c)
 *     CmpSetNetworkValue @ 0x140A8BEC0 (CmpSetNetworkValue.c)
 *     CmpUpdateStateSeparationHiveOptions @ 0x140A8BFAC (CmpUpdateStateSeparationHiveOptions.c)
 *     CmpInitCmPrivateAlloc @ 0x140A8C00C (CmpInitCmPrivateAlloc.c)
 */

char __fastcall CmInitSystem1(ULONG_PTR BugCheckParameter3)
{
  int *v2; // rdi
  __int64 v3; // rsi
  int ObjectTypes; // eax
  int v5; // eax
  int v6; // eax
  int Hive; // eax
  int v8; // eax
  __int64 v9; // rax
  int inited; // eax
  ACL *v11; // rdi
  NTSTATUS v12; // eax
  ULONG_PTR v13; // rsi
  NTSTATUS v14; // eax
  ULONG_PTR v15; // rsi
  int v16; // eax
  ULONG_PTR v17; // rsi
  NTSTATUS v18; // eax
  ULONG_PTR v19; // rsi
  int v20; // eax
  int ControlSet; // eax
  int v22; // eax
  ULONG_PTR v23; // rsi
  int v24; // eax
  __int64 v25; // rdx
  __int64 v26; // r8
  struct _LOOKASIDE_LIST_EX *v27; // r9
  NTSTATUS v28; // eax
  int v29; // eax
  int ExtendedControlSets; // eax
  __int64 v31; // rcx
  NTSTATUS v32; // eax
  int v33; // eax
  __int64 v34; // rcx
  int v35; // eax
  int v36; // eax
  HANDLE KeyHandle; // [rsp+68h] [rbp-A0h] BYREF
  __int64 v39; // [rsp+70h] [rbp-98h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+78h] [rbp-90h] BYREF
  UNICODE_STRING DestinationString; // [rsp+A8h] [rbp-60h] BYREF
  _OWORD v42[3]; // [rsp+B8h] [rbp-50h] BYREF
  _DWORD v43[76]; // [rsp+E8h] [rbp-20h] BYREF
  _OWORD BugCheckParameter4[27]; // [rsp+218h] [rbp+110h] BYREF

  KeyHandle = 0LL;
  *(&ObjectAttributes.Length + 1) = 0;
  *(&ObjectAttributes.Attributes + 1) = 0;
  v39 = 0LL;
  memset(v43, 0, 0x128uLL);
  DestinationString = 0LL;
  memset(BugCheckParameter4, 0, sizeof(BugCheckParameter4));
  memset(v42, 0, sizeof(v42));
  CmpInitializeParseContext((__int64)v43);
  CmIoFileObjectType = (__int64)&IoFileObjectType;
  if ( InitIsWinPEMode )
  {
    CmpMiniNTBoot = InitIsWinPEMode;
    BYTE4(NlsMbCodePageTag) = 1;
    CmpForceSynchronousMachineHiveLoad = 1;
  }
  if ( CmpVolatileBoot )
    BYTE4(NlsMbCodePageTag) = 1;
  CmpInitializeRegistryNames();
  CmpInitGlobalQuotaAllowed();
  CmpHiveListHeadLock = 0LL;
  qword_140D2E918 = (__int64)&CmpHiveListHead;
  CmpHiveListHead = (__int64)&CmpHiveListHead;
  CmpLoadHiveLock = 0LL;
  CmpShutdownLock = 0LL;
  ExInitializePushLock(&CmpShutdownRundown);
  CmpActiveHiveRundownEvent = 0LL;
  qword_140C47E88 = (__int64)&CmpAppHiveLoadList;
  CmpAppHiveLoadList = (__int64)&CmpAppHiveLoadList;
  CmpActiveAppHiveUnloadEvent = 0LL;
  CmpAppHiveLoadListLock = 0LL;
  ExInitializeResourceLite((PERESOURCE)&CmpRegistryLock);
  CmpPostLock.Count = 1;
  CmpPostLock.Event.Header.WaitListHead.Blink = &CmpPostLock.Event.Header.WaitListHead;
  CmpPostLock.Event.Header.WaitListHead.Flink = &CmpPostLock.Event.Header.WaitListHead;
  qword_140D2D6B0 = (__int64)&CmpAsyncKernelPostList;
  CmpAsyncKernelPostList = (__int64)&CmpAsyncKernelPostList;
  CmpWorkerEngineWorkItem.WorkerRoutine = (void (__fastcall *)(void *))CmpWorkerEngineWorker;
  CmpPostLock.Owner = 0LL;
  CmpPostLock.Contention = 0;
  LOWORD(CmpPostLock.Event.Header.Lock) = 1;
  CmpPostLock.Event.Header.Size = 6;
  CmpPostLock.Event.Header.SignalState = 0;
  CmpWorkerEngineWorkItem.Parameter = 0LL;
  CmpWorkerEngineWorkItem.List.Flink = 0LL;
  KeInitializeGuardedMutex(&CmpWorkerEngineLock);
  CmpWorkerEngineFinishedEvent = 0LL;
  qword_140C47EC8 = (__int64)&CmpWorkerEngineListHead;
  CmpWorkerEngineListHead = &CmpWorkerEngineListHead;
  CmpInitializeNameCache();
  CmpInitCmPrivateAlloc();
  CmpInitSIDToHiveMapping();
  CmpAdminSystemFileSecurityDescriptor = CmpAdminSystemSecurityDescriptor();
  CmpInitializeTrustedInstallerSid();
  CmpInitializeDelayedCloseTable();
  CmpInitCallbacks();
  CmpInitializeMachineHiveLoadedCallbacks();
  CmpInitializeFreezeThaw();
  HvInitializeHashLibrary();
  CmpValidateGlobalFlushControlFlags();
  CmpInitializeGlobalKeyLockTracker();
  CmpInitializeTransactions();
  CmpVolumeManagerInitialize();
  v2 = dword_140C0154C;
  v3 = 8LL;
  do
  {
    RtlInitUnicodeString(&DestinationString, *(PCWSTR *)(v2 - 3));
    *v2 = CmpHashUnicodeComponent((__m128i *)&DestinationString);
    v2 += 6;
    --v3;
  }
  while ( v3 );
  ObjectTypes = CmpCreateObjectTypes();
  if ( ObjectTypes < 0 )
    KeBugCheckEx(0x67u, 1uLL, 1uLL, ObjectTypes, 0LL);
  v5 = CmpInitializeLightWeightTransactionType();
  if ( v5 < 0 )
    KeBugCheckEx(0x67u, 1uLL, 0x18uLL, v5, 0LL);
  v6 = CmpInitializeRegistryProcess();
  if ( v6 < 0 )
    KeBugCheckEx(0x67u, 1uLL, 0x19uLL, v6, 0LL);
  CmpAttachToRegistryProcess((__int64)v42);
  CmpLockRegistryExclusive();
  CmpInitializePreloadedHives(BugCheckParameter3, 0LL);
  Hive = CmpCreateHive(
           (ULONG_PTR *)&CmpMasterHive,
           0,
           1u,
           0,
           0LL,
           0LL,
           0LL,
           0,
           0LL,
           0LL,
           0LL,
           (__int64)BugCheckParameter4);
  if ( Hive < 0 )
    KeBugCheckEx(0x67u, 1uLL, 2uLL, Hive, (ULONG_PTR)BugCheckParameter4);
  v8 = CmpInitializeKcbCache(CmpMasterHive, 0x80u);
  if ( v8 < 0 )
    KeBugCheckEx(0x67u, 1uLL, 3uLL, v8, 0LL);
  if ( !(unsigned __int8)CmpCreateRegistryRoot() )
    KeBugCheckEx(0x67u, 1uLL, 4uLL, 0LL, 0LL);
  v9 = HalSystemVectorDispatchEntry();
  inited = CmpInitSiloSupport(v9);
  if ( inited < 0 )
    KeBugCheckEx(0x67u, 1uLL, 0x1AuLL, inited, 0LL);
  v11 = CmpHiveRootSecurityDescriptor();
  ObjectAttributes.ObjectName = &CmRegistryMachineName;
  ObjectAttributes.Length = 48;
  ObjectAttributes.RootDirectory = 0LL;
  ObjectAttributes.Attributes = 576;
  ObjectAttributes.SecurityDescriptor = v11;
  ObjectAttributes.SecurityQualityOfService = 0LL;
  v12 = ZwCreateKey(&KeyHandle, 0x2001Fu, &ObjectAttributes, 0, (PUNICODE_STRING)&nullclass, 0, 0LL);
  v13 = v12;
  if ( v12 < 0 )
  {
    ExFreePoolWithTag(v11, 0);
    KeBugCheckEx(0x67u, 1uLL, 5uLL, v13, 0LL);
  }
  ZwClose(KeyHandle);
  ObjectAttributes.ObjectName = &CmRegistryUserName;
  ObjectAttributes.Length = 48;
  ObjectAttributes.RootDirectory = 0LL;
  ObjectAttributes.Attributes = 576;
  ObjectAttributes.SecurityDescriptor = v11;
  ObjectAttributes.SecurityQualityOfService = 0LL;
  v14 = ZwCreateKey(&KeyHandle, 0x2001Fu, &ObjectAttributes, 0, (PUNICODE_STRING)&nullclass, 0, 0LL);
  v15 = v14;
  if ( v14 < 0 )
  {
    ExFreePoolWithTag(v11, 0);
    KeBugCheckEx(0x67u, 1uLL, 6uLL, v15, 0LL);
  }
  ZwClose(KeyHandle);
  ObjectAttributes.ObjectName = &CmRegistryAppName;
  ObjectAttributes.Length = 48;
  ObjectAttributes.RootDirectory = 0LL;
  ObjectAttributes.Attributes = 576;
  ObjectAttributes.SecurityDescriptor = v11;
  ObjectAttributes.SecurityQualityOfService = 0LL;
  v43[0] = 65;
  v16 = ObOpenObjectByName(
          (__int64)&ObjectAttributes,
          (__int64)CmKeyObjectType,
          0,
          0LL,
          131103,
          (__int64)v43,
          (__int64)&KeyHandle);
  v17 = v16;
  if ( v16 < 0 )
  {
    ExFreePoolWithTag(v11, 0);
    CmpCleanupParseContext((__int64)v43, 0);
    KeBugCheckEx(0x67u, 1uLL, 7uLL, v17, 0LL);
  }
  CmpCleanupParseContext((__int64)v43, 0);
  ZwClose(KeyHandle);
  ObjectAttributes.ObjectName = &CmRegistryContainersName;
  ObjectAttributes.Length = 48;
  ObjectAttributes.RootDirectory = 0LL;
  ObjectAttributes.Attributes = 576;
  ObjectAttributes.SecurityDescriptor = v11;
  ObjectAttributes.SecurityQualityOfService = 0LL;
  v18 = ZwCreateKey(&KeyHandle, 0x2001Fu, &ObjectAttributes, 0, (PUNICODE_STRING)&nullclass, 0, 0LL);
  v19 = v18;
  if ( v18 < 0 )
  {
    ExFreePoolWithTag(v11, 0);
    KeBugCheckEx(0x67u, 1uLL, 8uLL, v19, 0LL);
  }
  ZwClose(KeyHandle);
  CmpNoMasterCreates = 1;
  CmpInitializeLoadOptions(BugCheckParameter3);
  v20 = CmpInitializePreloadedHives(BugCheckParameter3, 1LL);
  if ( v20 < 0 )
    KeBugCheckEx(0x67u, 1uLL, 0x14uLL, v20, 0LL);
  ControlSet = CmpCreateControlSet((__int64)L"SYSTEM", 0);
  if ( ControlSet < 0 )
    KeBugCheckEx(0x67u, 1uLL, 0xDuLL, ControlSet, 0LL);
  if ( CmpLKGEnabled )
    MEMORY[0xFFFFF780000002F0] |= 0x10u;
  if ( CmStateSeparationEnabled )
    CmpUpdateStateSeparationHiveOptions();
  memset(BugCheckParameter4, 0, sizeof(BugCheckParameter4));
  v22 = CmpCreateHive((ULONG_PTR *)&v39, 0, 1u, 0, 0LL, 0LL, 0LL, 0, 0LL, 0LL, 0LL, (__int64)BugCheckParameter4);
  v23 = v22;
  if ( v22 < 0 )
  {
    ExFreePoolWithTag(v11, 0);
    KeBugCheckEx(0x67u, 1uLL, 0x10uLL, v23, (ULONG_PTR)BugCheckParameter4);
  }
  v24 = CmpLinkHiveToMaster(
          (__int64)&CmRegistryMachineHardwareName,
          0LL,
          v39,
          1,
          dword_140C00F28,
          0,
          0LL,
          (__int64)v11,
          0LL,
          0LL,
          1,
          BugCheckParameter4);
  if ( v24 )
    KeBugCheckEx(0x67u, 1uLL, 0x11uLL, v24, 0LL);
  CmpAddToHiveFileList(v39, v25, v26, v27);
  ExFreePoolWithTag(v11, 0);
  qword_140C00F18 = v39;
  v28 = CmpInitializeHardwareConfiguration(BugCheckParameter3);
  if ( v28 < 0 )
    KeBugCheckEx(0x67u, 1uLL, 0x12uLL, v28, 0LL);
  v29 = CmpInitializeDriverStores(BugCheckParameter3);
  if ( v29 < 0 )
    KeBugCheckEx(0x67u, 1uLL, 0x13uLL, v29, 0LL);
  ExtendedControlSets = CmpCreateExtendedControlSets(BugCheckParameter3);
  if ( ExtendedControlSets < 0 )
    KeBugCheckEx(0x67u, 1uLL, 0x1BuLL, ExtendedControlSets, 0LL);
  CmpCreateHardwareProfiles(BugCheckParameter3);
  CmSetInitMachineConfig(BugCheckParameter3);
  CmpUnlockRegistry();
  CmpMarkCurrentProfileDirty(v31);
  v32 = CmpInitializeMachineDependentConfiguration(BugCheckParameter3);
  if ( v32 < 0 )
    KeBugCheckEx(0x67u, 1uLL, 0x15uLL, v32, 0LL);
  v33 = CmpSetSystemValues(BugCheckParameter3);
  if ( v33 < 0 )
    KeBugCheckEx(0x67u, 1uLL, 0x16uLL, v33, 0LL);
  CmpMigrateOOBELanguageToInstallationLanguage();
  ExFreePoolWithTag(CmpLoadOptions.Buffer, 0);
  v34 = *(_QWORD *)(BugCheckParameter3 + 240);
  if ( *(_DWORD *)v34 >= 0x68u )
  {
    if ( *(_QWORD *)(v34 + 96) )
    {
      v35 = CmpSetNetworkValue();
      if ( v35 < 0 )
        KeBugCheckEx(0x67u, 1uLL, 0x17uLL, v35, 0LL);
    }
  }
  v36 = CmFcInitSystem2();
  if ( v36 < 0 )
    KeBugCheckEx(0x67u, 1uLL, 0x1AuLL, v36, 0LL);
  CmpDetachFromRegistryProcess((__int64)v42);
  return 1;
}
