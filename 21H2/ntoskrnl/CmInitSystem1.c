/*
 * XREFs of CmInitSystem1 @ 0x140B15F88
 * Callers:
 *     Phase1InitializationDiscard @ 0x140AFBDF4 (Phase1InitializationDiscard.c)
 * Callees:
 *     CmCleanupThreadInfo @ 0x14022EA30 (CmCleanupThreadInfo.c)
 *     ExInitializePushLock @ 0x1402A0840 (ExInitializePushLock.c)
 *     ExInitializeResourceLite @ 0x14030F740 (ExInitializeResourceLite.c)
 *     RtlInitUnicodeString @ 0x140347630 (RtlInitUnicodeString.c)
 *     CmpInitializeThreadInfo @ 0x140347770 (CmpInitializeThreadInfo.c)
 *     CmpInitializeLoadOptions @ 0x1403DE020 (CmpInitializeLoadOptions.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     ZwClose @ 0x14041B940 (ZwClose.c)
 *     ZwCreateKey @ 0x14041BB00 (ZwCreateKey.c)
 *     KeBugCheckEx @ 0x14041F3D0 (KeBugCheckEx.c)
 *     memset @ 0x140435E00 (memset.c)
 *     CmpInitializeKcbCache @ 0x14067C560 (CmpInitializeKcbCache.c)
 *     ObOpenObjectByName @ 0x14067C970 (ObOpenObjectByName.c)
 *     CmpLinkHiveToMaster @ 0x14067C9E8 (CmpLinkHiveToMaster.c)
 *     CmpInitializeParseContext @ 0x14067FE50 (CmpInitializeParseContext.c)
 *     CmpCleanupParseContext @ 0x14067FE98 (CmpCleanupParseContext.c)
 *     CmpCreateHive @ 0x14068A7FC (CmpCreateHive.c)
 *     CmpAddToHiveFileList @ 0x1406E36C4 (CmpAddToHiveFileList.c)
 *     CmpHashUnicodeComponent @ 0x140718B68 (CmpHashUnicodeComponent.c)
 *     CmpLockRegistryExclusive @ 0x14071B6EC (CmpLockRegistryExclusive.c)
 *     CmpInitializeRegistryProcess @ 0x140831BF4 (CmpInitializeRegistryProcess.c)
 *     CmpAdminSystemSecurityDescriptor @ 0x140831E08 (CmpAdminSystemSecurityDescriptor.c)
 *     CmpHiveRootSecurityDescriptor @ 0x140834D0C (CmpHiveRootSecurityDescriptor.c)
 *     CmpMarkCurrentProfileDirty @ 0x140837E20 (CmpMarkCurrentProfileDirty.c)
 *     CmpInitializeNameCache @ 0x140844BAC (CmpInitializeNameCache.c)
 *     CmpInitializeMachineHiveLoadedCallbacks @ 0x14085D190 (CmpInitializeMachineHiveLoadedCallbacks.c)
 *     CmpInitSiloSupport @ 0x140861E5C (CmpInitSiloSupport.c)
 *     CmpInitializeLightWeightTransactionType @ 0x140862F14 (CmpInitializeLightWeightTransactionType.c)
 *     CmpInitializeDelayedCloseTable @ 0x1408631AC (CmpInitializeDelayedCloseTable.c)
 *     CmpInitCallbacks @ 0x1408639BC (CmpInitCallbacks.c)
 *     HvInitializeHashLibrary @ 0x140864754 (HvInitializeHashLibrary.c)
 *     CmpVolumeManagerInitialize @ 0x140864A98 (CmpVolumeManagerInitialize.c)
 *     CmpInitializeGlobalKeyLockTracker @ 0x140864B3C (CmpInitializeGlobalKeyLockTracker.c)
 *     CmpInitializeFreezeThaw @ 0x140864B64 (CmpInitializeFreezeThaw.c)
 *     CmpValidateGlobalFlushControlFlags @ 0x140865334 (CmpValidateGlobalFlushControlFlags.c)
 *     CmpInitSIDToHiveMapping @ 0x140865370 (CmpInitSIDToHiveMapping.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 *     CmpUnlockRegistry @ 0x140AB4260 (CmpUnlockRegistry.c)
 *     CmpAttachToRegistryProcess @ 0x140AB4550 (CmpAttachToRegistryProcess.c)
 *     CmpDetachFromRegistryProcess @ 0x140AB4580 (CmpDetachFromRegistryProcess.c)
 *     CmFcInitSystem2 @ 0x140B152D4 (CmFcInitSystem2.c)
 *     CmpCreateRegistryRoot @ 0x140B15C50 (CmpCreateRegistryRoot.c)
 *     CmpInitializePreloadedHives @ 0x140B16904 (CmpInitializePreloadedHives.c)
 *     CmpMigrateOOBELanguageToInstallationLanguage @ 0x140B16EC8 (CmpMigrateOOBELanguageToInstallationLanguage.c)
 *     CmpSetSystemValues @ 0x140B16F3C (CmpSetSystemValues.c)
 *     CmpInitializeHardwareConfiguration @ 0x140B171AC (CmpInitializeHardwareConfiguration.c)
 *     CmpInitializeMachineDependentConfiguration @ 0x140B17304 (CmpInitializeMachineDependentConfiguration.c)
 *     CmpCreateHardwareProfiles @ 0x140B183B4 (CmpCreateHardwareProfiles.c)
 *     CmpInitializeRegistryNames @ 0x140B268C8 (CmpInitializeRegistryNames.c)
 *     CmpInitializeDriverStores @ 0x140B2B730 (CmpInitializeDriverStores.c)
 *     CmpCreateControlSet @ 0x140B2C540 (CmpCreateControlSet.c)
 *     CmpInitializeTransactions @ 0x140B2C7E0 (CmpInitializeTransactions.c)
 *     CmpInitializeTrustedInstallerSid @ 0x140B2DE24 (CmpInitializeTrustedInstallerSid.c)
 *     CmpInitGlobalQuotaAllowed @ 0x140B2F008 (CmpInitGlobalQuotaAllowed.c)
 *     CmpCreateObjectTypes @ 0x140B2F824 (CmpCreateObjectTypes.c)
 *     CmpCreateExtendedControlSets @ 0x140B30CA4 (CmpCreateExtendedControlSets.c)
 *     CmpSetNetworkValue @ 0x140B4E014 (CmpSetNetworkValue.c)
 *     CmpUpdateStateSeparationHiveOptions @ 0x140B4E100 (CmpUpdateStateSeparationHiveOptions.c)
 *     CmpInitCmPrivateAlloc @ 0x140B4E160 (CmpInitCmPrivateAlloc.c)
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
  __int64 v12; // rdx
  __int64 v13; // rcx
  int inited; // eax
  ACL *v15; // rdi
  NTSTATUS v16; // eax
  ULONG_PTR v17; // rsi
  NTSTATUS v18; // eax
  ULONG_PTR v19; // rsi
  int v20; // eax
  ULONG_PTR v21; // rsi
  NTSTATUS v22; // eax
  ULONG_PTR v23; // rsi
  int v24; // eax
  int ControlSet; // eax
  int v26; // eax
  ULONG_PTR v27; // rsi
  int v28; // eax
  __int64 v29; // rdx
  __int64 v30; // r8
  struct _LOOKASIDE_LIST_EX *v31; // r9
  int v32; // eax
  int v33; // eax
  int ExtendedControlSets; // eax
  __int64 v35; // rcx
  int v36; // eax
  int v37; // eax
  __int64 v38; // rcx
  int v39; // eax
  int v40; // eax
  HANDLE KeyHandle; // [rsp+68h] [rbp-A0h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+70h] [rbp-98h] BYREF
  int v44[2]; // [rsp+A0h] [rbp-68h] BYREF
  UNICODE_STRING DestinationString; // [rsp+A8h] [rbp-60h] BYREF
  __int128 v46; // [rsp+B8h] [rbp-50h] BYREF
  _OWORD v47[3]; // [rsp+C8h] [rbp-40h] BYREF
  _DWORD v48[76]; // [rsp+F8h] [rbp-10h] BYREF
  _OWORD BugCheckParameter4[27]; // [rsp+228h] [rbp+120h] BYREF

  KeyHandle = 0LL;
  *(&ObjectAttributes.Length + 1) = 0;
  *(&ObjectAttributes.Attributes + 1) = 0;
  *(_QWORD *)v44 = 0LL;
  v46 = 0LL;
  memset(v48, 0, 0x128uLL);
  DestinationString = 0LL;
  memset(BugCheckParameter4, 0, sizeof(BugCheckParameter4));
  memset(v47, 0, sizeof(v47));
  CmpInitializeThreadInfo((__int64)&v46);
  CmpInitializeParseContext((__int64)v48);
  CmIoFileObjectType = (__int64)&IoFileObjectType;
  if ( InitIsWinPEMode )
  {
    CmpMiniNTBoot = InitIsWinPEMode;
    CmpShareSystemHives = 1;
    CmpForceSynchronousMachineHiveLoad = 1;
  }
  if ( CmpVolatileBoot )
    CmpShareSystemHives = 1;
  CmpInitializeRegistryNames();
  CmpInitGlobalQuotaAllowed();
  CmpHiveListHeadLock = 0LL;
  qword_140D3CC98 = (__int64)&CmpHiveListHead;
  CmpHiveListHead = (__int64)&CmpHiveListHead;
  CmpLoadHiveLock = 0LL;
  ExInitializePushLock(&CmpShutdownRundown);
  ExInitializePushLock(&CmpHiveLoadUnloadRundown);
  CmpActiveHiveRundownEvent = 0LL;
  qword_140C49408 = (__int64)&CmpAppHiveLoadList;
  CmpAppHiveLoadList = (__int64)&CmpAppHiveLoadList;
  CmpActiveAppHiveUnloadEvent = 0LL;
  CmpAppHiveLoadListLock = 0LL;
  ExInitializeResourceLite((PERESOURCE)&CmpRegistryLock);
  CmpPostLock.Count = 1;
  CmpPostLock.Event.Header.WaitListHead.Blink = &CmpPostLock.Event.Header.WaitListHead;
  CmpPostLock.Event.Header.WaitListHead.Flink = &CmpPostLock.Event.Header.WaitListHead;
  qword_140D3B690 = (__int64)&CmpAsyncKernelPostList;
  CmpAsyncKernelPostList = (__int64)&CmpAsyncKernelPostList;
  CmpPostLock.Owner = 0LL;
  CmpPostLock.Contention = 0;
  LOWORD(CmpPostLock.Event.Header.Lock) = 1;
  CmpPostLock.Event.Header.Size = 6;
  CmpPostLock.Event.Header.SignalState = 0;
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
  v2 = dword_140C02AFC;
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
  Hive = CmpCreateHive(&CmpMasterHive, 0, 1, 0, 0LL, 0LL, 0LL, 0x20000, 0LL, 0LL, 0LL, (__int64)BugCheckParameter4);
  if ( Hive < 0 )
    KeBugCheckEx(0x67u, 1uLL, 2uLL, Hive, (ULONG_PTR)BugCheckParameter4);
  v11 = CmpInitializeKcbCache(CmpMasterHive, 0x80u);
  if ( v11 < 0 )
    KeBugCheckEx(0x67u, 1uLL, 3uLL, v11, 0LL);
  if ( (int)CmpCreateRegistryRoot(v13, v12) < 0 )
    KeBugCheckEx(0x67u, 1uLL, 4uLL, 0LL, 0LL);
  inited = CmpInitSiloSupport(0LL);
  if ( inited < 0 )
    KeBugCheckEx(0x67u, 1uLL, 0x1AuLL, inited, 0LL);
  v15 = CmpHiveRootSecurityDescriptor();
  ObjectAttributes.ObjectName = &CmRegistryMachineName;
  ObjectAttributes.Length = 48;
  ObjectAttributes.RootDirectory = 0LL;
  ObjectAttributes.Attributes = 576;
  ObjectAttributes.SecurityDescriptor = v15;
  ObjectAttributes.SecurityQualityOfService = 0LL;
  v16 = ZwCreateKey(&KeyHandle, 0x2001Fu, &ObjectAttributes, 0, (PUNICODE_STRING)&nullclass, 0, 0LL);
  v17 = v16;
  if ( v16 < 0 )
  {
    ExFreePoolWithTag(v15, 0);
    KeBugCheckEx(0x67u, 1uLL, 5uLL, v17, 0LL);
  }
  ZwClose(KeyHandle);
  ObjectAttributes.ObjectName = &CmRegistryUserName;
  ObjectAttributes.Length = 48;
  ObjectAttributes.RootDirectory = 0LL;
  ObjectAttributes.Attributes = 576;
  ObjectAttributes.SecurityDescriptor = v15;
  ObjectAttributes.SecurityQualityOfService = 0LL;
  v18 = ZwCreateKey(&KeyHandle, 0x2001Fu, &ObjectAttributes, 0, (PUNICODE_STRING)&nullclass, 0, 0LL);
  v19 = v18;
  if ( v18 < 0 )
  {
    ExFreePoolWithTag(v15, 0);
    KeBugCheckEx(0x67u, 1uLL, 6uLL, v19, 0LL);
  }
  ZwClose(KeyHandle);
  ObjectAttributes.ObjectName = &CmRegistryAppName;
  ObjectAttributes.Length = 48;
  ObjectAttributes.RootDirectory = 0LL;
  ObjectAttributes.Attributes = 576;
  ObjectAttributes.SecurityDescriptor = v15;
  ObjectAttributes.SecurityQualityOfService = 0LL;
  v48[0] = 65;
  v20 = ObOpenObjectByName(
          (__int64)&ObjectAttributes,
          (__int64)CmKeyObjectType,
          0,
          0LL,
          131103,
          (__int64)v48,
          (__int64)&KeyHandle);
  v21 = v20;
  if ( v20 < 0 )
  {
    ExFreePoolWithTag(v15, 0);
    CmpCleanupParseContext(v48, 0LL);
    KeBugCheckEx(0x67u, 1uLL, 7uLL, v21, 0LL);
  }
  CmpCleanupParseContext(v48, 0LL);
  ZwClose(KeyHandle);
  ObjectAttributes.ObjectName = &CmRegistryContainersName;
  ObjectAttributes.Length = 48;
  ObjectAttributes.RootDirectory = 0LL;
  ObjectAttributes.Attributes = 576;
  ObjectAttributes.SecurityDescriptor = v15;
  ObjectAttributes.SecurityQualityOfService = 0LL;
  v22 = ZwCreateKey(&KeyHandle, 0x2001Fu, &ObjectAttributes, 0, (PUNICODE_STRING)&nullclass, 0, 0LL);
  v23 = v22;
  if ( v22 < 0 )
  {
    ExFreePoolWithTag(v15, 0);
    KeBugCheckEx(0x67u, 1uLL, 8uLL, v23, 0LL);
  }
  ZwClose(KeyHandle);
  CmpNoMasterCreates = 1;
  CmpInitializeLoadOptions(BugCheckParameter3);
  v24 = CmpInitializePreloadedHives(BugCheckParameter3, 1LL);
  if ( v24 < 0 )
    KeBugCheckEx(0x67u, 1uLL, 0x14uLL, v24, 0LL);
  ControlSet = CmpCreateControlSet(L"SYSTEM", 0LL);
  if ( ControlSet < 0 )
    KeBugCheckEx(0x67u, 1uLL, 0xDuLL, ControlSet, 0LL);
  if ( CmpLKGEnabled )
    MEMORY[0xFFFFF780000002F0] |= 0x10u;
  if ( CmStateSeparationEnabled )
    CmpUpdateStateSeparationHiveOptions();
  memset(BugCheckParameter4, 0, sizeof(BugCheckParameter4));
  v26 = CmpCreateHive((ULONG_PTR *)v44, 0, 1, 0, 0LL, 0LL, 0LL, 0x20000, 0LL, 0LL, 0LL, (__int64)BugCheckParameter4);
  v27 = v26;
  if ( v26 < 0 )
  {
    ExFreePoolWithTag(v15, 0);
    KeBugCheckEx(0x67u, 1uLL, 0x10uLL, v27, (ULONG_PTR)BugCheckParameter4);
  }
  v28 = CmpLinkHiveToMaster(
          (__int64)&CmRegistryMachineHardwareName,
          0LL,
          *(__int64 *)v44,
          1,
          dword_140C02558,
          0,
          0LL,
          (__int64)v15,
          0LL,
          0LL,
          1,
          BugCheckParameter4);
  if ( v28 )
    KeBugCheckEx(0x67u, 1uLL, 0x11uLL, v28, 0LL);
  CmpAddToHiveFileList(*(__int64 *)v44, v29, v30, v31);
  ExFreePoolWithTag(v15, 0);
  qword_140C02548 = *(_QWORD *)v44;
  v32 = CmpInitializeHardwareConfiguration(BugCheckParameter3);
  if ( v32 < 0 )
    KeBugCheckEx(0x67u, 1uLL, 0x12uLL, v32, 0LL);
  v33 = CmpInitializeDriverStores(BugCheckParameter3);
  if ( v33 < 0 )
    KeBugCheckEx(0x67u, 1uLL, 0x13uLL, v33, 0LL);
  ExtendedControlSets = CmpCreateExtendedControlSets(BugCheckParameter3);
  if ( ExtendedControlSets < 0 )
    KeBugCheckEx(0x67u, 1uLL, 0x1BuLL, ExtendedControlSets, 0LL);
  CmpCreateHardwareProfiles(BugCheckParameter3);
  CmSetInitMachineConfig(BugCheckParameter3);
  CmpUnlockRegistry();
  CmpMarkCurrentProfileDirty(v35);
  v36 = CmpInitializeMachineDependentConfiguration(BugCheckParameter3);
  if ( v36 < 0 )
    KeBugCheckEx(0x67u, 1uLL, 0x15uLL, v36, 0LL);
  v37 = CmpSetSystemValues(BugCheckParameter3);
  if ( v37 < 0 )
    KeBugCheckEx(0x67u, 1uLL, 0x16uLL, v37, 0LL);
  CmpMigrateOOBELanguageToInstallationLanguage();
  ExFreePoolWithTag(CmpLoadOptions.Buffer, 0);
  v38 = *(_QWORD *)(BugCheckParameter3 + 240);
  if ( *(_DWORD *)v38 >= 0x68u )
  {
    if ( *(_QWORD *)(v38 + 96) )
    {
      v39 = CmpSetNetworkValue();
      if ( v39 < 0 )
        KeBugCheckEx(0x67u, 1uLL, 0x17uLL, v39, 0LL);
    }
  }
  v40 = CmFcInitSystem2();
  if ( v40 < 0 )
    KeBugCheckEx(0x67u, 1uLL, 0x1AuLL, v40, 0LL);
  CmpDetachFromRegistryProcess((__int64)v47);
  CmCleanupThreadInfo((__int64 *)&v46);
  return 1;
}
