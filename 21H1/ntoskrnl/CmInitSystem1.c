/*
 * XREFs of CmInitSystem1 @ 0x140A525D4
 * Callers:
 *     Phase1InitializationDiscard @ 0x140A382A8 (Phase1InitializationDiscard.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x140206450 (RtlInitUnicodeString.c)
 *     ExInitializeResourceLite @ 0x14026C4C0 (ExInitializeResourceLite.c)
 *     ExInitializePushLock @ 0x1402C0830 (ExInitializePushLock.c)
 *     ExInitializeLookasideListExInternal @ 0x1402C1D70 (ExInitializeLookasideListExInternal.c)
 *     CmpInitializeLoadOptions @ 0x1403B2EE0 (CmpInitializeLoadOptions.c)
 *     __security_check_cookie @ 0x1403CC020 (__security_check_cookie.c)
 *     ZwClose @ 0x1403F2510 (ZwClose.c)
 *     ZwCreateKey @ 0x1403F26D0 (ZwCreateKey.c)
 *     KeBugCheckEx @ 0x1403F5E40 (KeBugCheckEx.c)
 *     memset @ 0x140408F80 (memset.c)
 *     CmpCleanupParseContext @ 0x1405EAEC0 (CmpCleanupParseContext.c)
 *     ObOpenObjectByName @ 0x1405EB090 (ObOpenObjectByName.c)
 *     CmpAttachToRegistryProcess @ 0x14061FF00 (CmpAttachToRegistryProcess.c)
 *     CmpDetachFromRegistryProcess @ 0x140621720 (CmpDetachFromRegistryProcess.c)
 *     CmpUnlockRegistry @ 0x140629290 (CmpUnlockRegistry.c)
 *     CmpCreateHive @ 0x140688850 (CmpCreateHive.c)
 *     CmpLinkHiveToMaster @ 0x14068C2C8 (CmpLinkHiveToMaster.c)
 *     CmpInitializeKcbCache @ 0x14068C6B0 (CmpInitializeKcbCache.c)
 *     CmpInitializeParseContext @ 0x14068DE68 (CmpInitializeParseContext.c)
 *     CmpLockRegistryExclusive @ 0x14069120C (CmpLockRegistryExclusive.c)
 *     CmpHashUnicodeComponent @ 0x1406937F4 (CmpHashUnicodeComponent.c)
 *     CmpAddToHiveFileList @ 0x1406E8D3C (CmpAddToHiveFileList.c)
 *     CmpInitializeRegistryProcess @ 0x1407878AC (CmpInitializeRegistryProcess.c)
 *     CmpInitializeFreezeThaw @ 0x14078CC08 (CmpInitializeFreezeThaw.c)
 *     HvInitializeHashLibrary @ 0x14078CC40 (HvInitializeHashLibrary.c)
 *     CmpValidateGlobalFlushControlFlags @ 0x14078CC84 (CmpValidateGlobalFlushControlFlags.c)
 *     CmpInitializeGlobalKeyLockTracker @ 0x14078CCA4 (CmpInitializeGlobalKeyLockTracker.c)
 *     CmpVolumeManagerInitialize @ 0x14078CCCC (CmpVolumeManagerInitialize.c)
 *     CmpInitializeLightWeightTransactionType @ 0x14078CCF4 (CmpInitializeLightWeightTransactionType.c)
 *     CmpInitSiloSupport @ 0x14078CDB8 (CmpInitSiloSupport.c)
 *     CmpMarkCurrentProfileDirty @ 0x14078CE7C (CmpMarkCurrentProfileDirty.c)
 *     CmpHiveRootSecurityDescriptor @ 0x14078F6BC (CmpHiveRootSecurityDescriptor.c)
 *     CmpInitializeNameCache @ 0x1407A2950 (CmpInitializeNameCache.c)
 *     CmpInitializeMachineHiveLoadedCallbacks @ 0x1407B58C8 (CmpInitializeMachineHiveLoadedCallbacks.c)
 *     CmpInitializeDelayedCloseTable @ 0x1407BD504 (CmpInitializeDelayedCloseTable.c)
 *     CmpInitCallbacks @ 0x1407BDCD0 (CmpInitCallbacks.c)
 *     CmpInitSIDToHiveMapping @ 0x1407BF434 (CmpInitSIDToHiveMapping.c)
 *     ExFreePoolWithTag @ 0x1409B1010 (ExFreePoolWithTag.c)
 *     CmFcInitSystem2 @ 0x140A35394 (CmFcInitSystem2.c)
 *     CmpInitializeTransactions @ 0x140A502F8 (CmpInitializeTransactions.c)
 *     CmpCreateObjectTypes @ 0x140A505F4 (CmpCreateObjectTypes.c)
 *     CmpCreateControlSet @ 0x140A506DC (CmpCreateControlSet.c)
 *     CmpInitializeDriverStores @ 0x140A50978 (CmpInitializeDriverStores.c)
 *     CmpCreateExtendedControlSets @ 0x140A50B2C (CmpCreateExtendedControlSets.c)
 *     CmpCreateHardwareProfiles @ 0x140A50B9C (CmpCreateHardwareProfiles.c)
 *     CmpInitializeHardwareConfiguration @ 0x140A5110C (CmpInitializeHardwareConfiguration.c)
 *     CmpInitializeMachineDependentConfiguration @ 0x140A51260 (CmpInitializeMachineDependentConfiguration.c)
 *     CmpSetSystemValues @ 0x140A5230C (CmpSetSystemValues.c)
 *     CmpMigrateOOBELanguageToInstallationLanguage @ 0x140A52548 (CmpMigrateOOBELanguageToInstallationLanguage.c)
 *     CmpInitializePreloadedHives @ 0x140A52D0C (CmpInitializePreloadedHives.c)
 *     CmpCreateRegistryRoot @ 0x140A532BC (CmpCreateRegistryRoot.c)
 *     CmpInitializeRegistryNames @ 0x140A686E4 (CmpInitializeRegistryNames.c)
 *     CmpInitializeTrustedInstallerSid @ 0x140A6DB44 (CmpInitializeTrustedInstallerSid.c)
 *     CmpInitGlobalQuotaAllowed @ 0x140A6E56C (CmpInitGlobalQuotaAllowed.c)
 *     CmpSetNetworkValue @ 0x140A8C928 (CmpSetNetworkValue.c)
 *     CmpUpdateStateSeparationHiveOptions @ 0x140A8CA14 (CmpUpdateStateSeparationHiveOptions.c)
 */

char __fastcall CmInitSystem1(ULONG_PTR BugCheckParameter3)
{
  int *v2; // rdi
  __int64 v3; // rsi
  int ObjectTypes; // eax
  int v5; // eax
  int v6; // eax
  __int64 v7; // rdx
  __int64 v8; // r8
  _DWORD *v9; // r9
  int Hive; // eax
  int v11; // eax
  int inited; // eax
  ACL *v13; // rdi
  NTSTATUS v14; // eax
  ULONG_PTR v15; // rsi
  NTSTATUS v16; // eax
  ULONG_PTR v17; // rsi
  int v18; // eax
  ULONG_PTR v19; // rsi
  NTSTATUS v20; // eax
  ULONG_PTR v21; // rsi
  int v22; // eax
  int ControlSet; // eax
  int v24; // eax
  ULONG_PTR v25; // rsi
  int v26; // eax
  __int64 v27; // rdx
  __int64 v28; // r8
  struct _LOOKASIDE_LIST_EX *v29; // r9
  NTSTATUS v30; // eax
  int v31; // eax
  int ExtendedControlSets; // eax
  __int64 v33; // rcx
  NTSTATUS v34; // eax
  int v35; // eax
  __int64 v36; // rcx
  int v37; // eax
  __int64 v38; // rdx
  __int64 v39; // r8
  _DWORD *v40; // r9
  int v42; // eax
  HANDLE KeyHandle; // [rsp+68h] [rbp-A0h] BYREF
  __int64 v44; // [rsp+70h] [rbp-98h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+78h] [rbp-90h] BYREF
  UNICODE_STRING DestinationString; // [rsp+A8h] [rbp-60h] BYREF
  _OWORD v47[3]; // [rsp+B8h] [rbp-50h] BYREF
  _DWORD v48[76]; // [rsp+E8h] [rbp-20h] BYREF
  _OWORD BugCheckParameter4[27]; // [rsp+218h] [rbp+110h] BYREF

  KeyHandle = 0LL;
  *(&ObjectAttributes.Length + 1) = 0;
  *(&ObjectAttributes.Attributes + 1) = 0;
  v44 = 0LL;
  memset(v48, 0, 0x128uLL);
  DestinationString = 0LL;
  memset(BugCheckParameter4, 0, sizeof(BugCheckParameter4));
  memset(v47, 0, sizeof(v47));
  CmpInitializeParseContext((__int64)v48);
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
  qword_140D2D920 = (__int64)&CmpHiveListHead;
  CmpHiveListHead = (__int64)&CmpHiveListHead;
  CmpLoadHiveLock = 0LL;
  CmpShutdownLock = 0LL;
  ExInitializePushLock(&CmpShutdownRundown);
  CmpActiveHiveRundownEvent = 0LL;
  qword_140C47FE8 = (__int64)&CmpAppHiveLoadList;
  CmpAppHiveLoadList = (__int64)&CmpAppHiveLoadList;
  CmpActiveAppHiveUnloadEvent = 0LL;
  CmpAppHiveLoadListLock = 0LL;
  ExInitializeResourceLite((PERESOURCE)&CmpRegistryLock);
  CmpPostLock.Count = 1;
  CmpPostLock.Event.Header.WaitListHead.Blink = &CmpPostLock.Event.Header.WaitListHead;
  CmpPostLock.Event.Header.WaitListHead.Flink = &CmpPostLock.Event.Header.WaitListHead;
  qword_140D2C6B8 = (__int64)&CmpAsyncKernelPostList;
  CmpAsyncKernelPostList = (__int64)&CmpAsyncKernelPostList;
  CmpWorkerEngineWorkItem.WorkerRoutine = (void (__fastcall *)(void *))CmpWorkerEngineWorker;
  CmpWorkerEngineLock.Event.Header.WaitListHead.Blink = &CmpWorkerEngineLock.Event.Header.WaitListHead;
  CmpWorkerEngineLock.Event.Header.WaitListHead.Flink = &CmpWorkerEngineLock.Event.Header.WaitListHead;
  qword_140C48098 = (__int64)&CmpWorkerEngineListHead;
  CmpWorkerEngineListHead = &CmpWorkerEngineListHead;
  CmpPostLock.Owner = 0LL;
  CmpPostLock.Contention = 0;
  LOWORD(CmpPostLock.Event.Header.Lock) = 1;
  CmpPostLock.Event.Header.Size = 6;
  CmpPostLock.Event.Header.SignalState = 0;
  CmpWorkerEngineWorkItem.Parameter = 0LL;
  CmpWorkerEngineWorkItem.List.Flink = 0LL;
  CmpWorkerEngineLock.Count = 1;
  CmpWorkerEngineLock.Owner = 0LL;
  CmpWorkerEngineLock.Contention = 0;
  LOWORD(CmpWorkerEngineLock.Event.Header.Lock) = 1;
  CmpWorkerEngineLock.Event.Header.Size = 6;
  CmpWorkerEngineLock.Event.Header.SignalState = 0;
  CmpWorkerEngineFinishedEvent = 0LL;
  CmpInitializeNameCache();
  ExInitializeLookasideListExInternal(
    &CmpKcbLookaside,
    CmpAllocateTransientPoolWithTag,
    (__int64 (__fastcall *)())CmSiFreeMemory,
    1,
    0,
    0x138uLL,
    1651199299,
    0,
    0);
  CmpInitSIDToHiveMapping();
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
  CmpAttachToRegistryProcess((__int64)v47, v7, v8, v9);
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
  v11 = CmpInitializeKcbCache((__int64)CmpMasterHive, 0x80u);
  if ( v11 < 0 )
    KeBugCheckEx(0x67u, 1uLL, 3uLL, v11, 0LL);
  if ( !(unsigned __int8)CmpCreateRegistryRoot() )
    KeBugCheckEx(0x67u, 1uLL, 4uLL, 0LL, 0LL);
  inited = CmpInitSiloSupport(0LL);
  if ( inited < 0 )
    KeBugCheckEx(0x67u, 1uLL, 0x1AuLL, inited, 0LL);
  v13 = CmpHiveRootSecurityDescriptor();
  ObjectAttributes.ObjectName = &CmRegistryMachineName;
  ObjectAttributes.Length = 48;
  ObjectAttributes.RootDirectory = 0LL;
  ObjectAttributes.Attributes = 576;
  ObjectAttributes.SecurityDescriptor = v13;
  ObjectAttributes.SecurityQualityOfService = 0LL;
  v14 = ZwCreateKey(&KeyHandle, 0x2001Fu, &ObjectAttributes, 0, (PUNICODE_STRING)&nullclass, 0, 0LL);
  v15 = v14;
  if ( v14 < 0 )
  {
    ExFreePoolWithTag(v13, 0);
    KeBugCheckEx(0x67u, 1uLL, 5uLL, v15, 0LL);
  }
  ZwClose(KeyHandle);
  ObjectAttributes.ObjectName = &CmRegistryUserName;
  ObjectAttributes.Length = 48;
  ObjectAttributes.RootDirectory = 0LL;
  ObjectAttributes.Attributes = 576;
  ObjectAttributes.SecurityDescriptor = v13;
  ObjectAttributes.SecurityQualityOfService = 0LL;
  v16 = ZwCreateKey(&KeyHandle, 0x2001Fu, &ObjectAttributes, 0, (PUNICODE_STRING)&nullclass, 0, 0LL);
  v17 = v16;
  if ( v16 < 0 )
  {
    ExFreePoolWithTag(v13, 0);
    KeBugCheckEx(0x67u, 1uLL, 6uLL, v17, 0LL);
  }
  ZwClose(KeyHandle);
  ObjectAttributes.ObjectName = &CmRegistryAppName;
  ObjectAttributes.Length = 48;
  ObjectAttributes.RootDirectory = 0LL;
  ObjectAttributes.Attributes = 576;
  ObjectAttributes.SecurityDescriptor = v13;
  ObjectAttributes.SecurityQualityOfService = 0LL;
  v48[0] = 65;
  v18 = ObOpenObjectByName(
          (__int64)&ObjectAttributes,
          (__int64)CmKeyObjectType,
          0,
          0LL,
          131103,
          (__int64)v48,
          (__int64)&KeyHandle);
  v19 = v18;
  if ( v18 < 0 )
  {
    ExFreePoolWithTag(v13, 0);
    CmpCleanupParseContext((__int64)v48, 0);
    KeBugCheckEx(0x67u, 1uLL, 7uLL, v19, 0LL);
  }
  CmpCleanupParseContext((__int64)v48, 0);
  ZwClose(KeyHandle);
  ObjectAttributes.ObjectName = &CmRegistryContainersName;
  ObjectAttributes.Length = 48;
  ObjectAttributes.RootDirectory = 0LL;
  ObjectAttributes.Attributes = 576;
  ObjectAttributes.SecurityDescriptor = v13;
  ObjectAttributes.SecurityQualityOfService = 0LL;
  v20 = ZwCreateKey(&KeyHandle, 0x2001Fu, &ObjectAttributes, 0, (PUNICODE_STRING)&nullclass, 0, 0LL);
  v21 = v20;
  if ( v20 < 0 )
  {
    ExFreePoolWithTag(v13, 0);
    KeBugCheckEx(0x67u, 1uLL, 8uLL, v21, 0LL);
  }
  ZwClose(KeyHandle);
  CmpNoMasterCreates = 1;
  CmpInitializeLoadOptions(BugCheckParameter3);
  v22 = CmpInitializePreloadedHives(BugCheckParameter3, 1LL);
  if ( v22 < 0 )
    KeBugCheckEx(0x67u, 1uLL, 0x14uLL, v22, 0LL);
  ControlSet = CmpCreateControlSet((__int64)L"SYSTEM", 0);
  if ( ControlSet < 0 )
    KeBugCheckEx(0x67u, 1uLL, 0xDuLL, ControlSet, 0LL);
  if ( CmpLKGEnabled )
    MEMORY[0xFFFFF780000002F0] |= 0x10u;
  if ( CmStateSeparationEnabled )
    CmpUpdateStateSeparationHiveOptions();
  memset(BugCheckParameter4, 0, sizeof(BugCheckParameter4));
  v24 = CmpCreateHive((ULONG_PTR *)&v44, 0, 1u, 0, 0LL, 0LL, 0LL, 0, 0LL, 0LL, 0LL, (__int64)BugCheckParameter4);
  v25 = v24;
  if ( v24 < 0 )
  {
    ExFreePoolWithTag(v13, 0);
    KeBugCheckEx(0x67u, 1uLL, 0x10uLL, v25, (ULONG_PTR)BugCheckParameter4);
  }
  v26 = CmpLinkHiveToMaster(
          (__int64)&CmRegistryMachineHardwareName,
          0LL,
          v44,
          1,
          dword_140C00F28,
          0,
          0LL,
          (__int64)v13,
          0LL,
          0LL,
          1,
          BugCheckParameter4);
  if ( v26 )
    KeBugCheckEx(0x67u, 1uLL, 0x11uLL, v26, 0LL);
  CmpAddToHiveFileList(v44, v27, v28, v29);
  ExFreePoolWithTag(v13, 0);
  qword_140C00F18 = v44;
  v30 = CmpInitializeHardwareConfiguration(BugCheckParameter3);
  if ( v30 < 0 )
    KeBugCheckEx(0x67u, 1uLL, 0x12uLL, v30, 0LL);
  v31 = CmpInitializeDriverStores(BugCheckParameter3);
  if ( v31 < 0 )
    KeBugCheckEx(0x67u, 1uLL, 0x13uLL, v31, 0LL);
  ExtendedControlSets = CmpCreateExtendedControlSets(BugCheckParameter3);
  if ( ExtendedControlSets < 0 )
    KeBugCheckEx(0x67u, 1uLL, 0x1BuLL, ExtendedControlSets, 0LL);
  CmpCreateHardwareProfiles(BugCheckParameter3);
  CmSetInitMachineConfig(BugCheckParameter3);
  CmpUnlockRegistry();
  CmpMarkCurrentProfileDirty(v33);
  v34 = CmpInitializeMachineDependentConfiguration(BugCheckParameter3);
  if ( v34 < 0 )
    KeBugCheckEx(0x67u, 1uLL, 0x15uLL, v34, 0LL);
  v35 = CmpSetSystemValues(BugCheckParameter3);
  if ( v35 < 0 )
    KeBugCheckEx(0x67u, 1uLL, 0x16uLL, v35, 0LL);
  CmpMigrateOOBELanguageToInstallationLanguage();
  ExFreePoolWithTag(CmpLoadOptions.Buffer, 0);
  v36 = *(_QWORD *)(BugCheckParameter3 + 240);
  if ( *(_DWORD *)v36 >= 0x68u )
  {
    if ( *(_QWORD *)(v36 + 96) )
    {
      v42 = CmpSetNetworkValue();
      if ( v42 < 0 )
        KeBugCheckEx(0x67u, 1uLL, 0x17uLL, v42, 0LL);
    }
  }
  v37 = CmFcInitSystem2();
  if ( v37 < 0 )
    KeBugCheckEx(0x67u, 1uLL, 0x1AuLL, v37, 0LL);
  CmpDetachFromRegistryProcess((__int64)v47, v38, v39, v40);
  return 1;
}
