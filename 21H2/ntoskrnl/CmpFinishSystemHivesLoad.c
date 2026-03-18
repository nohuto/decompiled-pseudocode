/*
 * XREFs of CmpFinishSystemHivesLoad @ 0x140833B80
 * Callers:
 *     <none>
 * Callees:
 *     KeStackAttachProcess @ 0x140203630 (KeStackAttachProcess.c)
 *     KeUnstackDetachProcess @ 0x1402037B0 (KeUnstackDetachProcess.c)
 *     CmSiFreeMemory @ 0x140208AC0 (CmSiFreeMemory.c)
 *     CmpRecheckHiveVolumePolicy @ 0x14020B1F8 (CmpRecheckHiveVolumePolicy.c)
 *     CmCleanupThreadInfo @ 0x14022EA30 (CmCleanupThreadInfo.c)
 *     CmpAllocateTransientPoolWithTag @ 0x14024AC60 (CmpAllocateTransientPoolWithTag.c)
 *     ExAcquirePushLockExclusiveEx @ 0x1402AC910 (ExAcquirePushLockExclusiveEx.c)
 *     ExReleasePushLockEx @ 0x1402AD0A0 (ExReleasePushLockEx.c)
 *     KeWaitForSingleObject @ 0x1402AF080 (KeWaitForSingleObject.c)
 *     KeSetEvent @ 0x1402AFD30 (KeSetEvent.c)
 *     RtlAppendUnicodeToString @ 0x1402DFAC0 (RtlAppendUnicodeToString.c)
 *     KeWaitForMultipleObjects @ 0x1402F13C0 (KeWaitForMultipleObjects.c)
 *     CmpInitializeThreadInfo @ 0x140347770 (CmpInitializeThreadInfo.c)
 *     RtlUnicodeStringCopyString @ 0x1403C752C (RtlUnicodeStringCopyString.c)
 *     CmpNotifyMachineHiveLoaded @ 0x1403C7A8C (CmpNotifyMachineHiveLoaded.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     ZwClose @ 0x14041B940 (ZwClose.c)
 *     ZwCreateKey @ 0x14041BB00 (ZwCreateKey.c)
 *     KeBugCheckEx @ 0x14041F3D0 (KeBugCheckEx.c)
 *     memset @ 0x140435E00 (memset.c)
 *     CmpLinkHiveToMaster @ 0x14067C9E8 (CmpLinkHiveToMaster.c)
 *     CmpFlushHive @ 0x1406885A4 (CmpFlushHive.c)
 *     CmpUnlockHiveList @ 0x1406DEFDC (CmpUnlockHiveList.c)
 *     CmpLockHiveListExclusive @ 0x1406DEFFC (CmpLockHiveListExclusive.c)
 *     CmpAddToHiveFileList @ 0x1406E36C4 (CmpAddToHiveFileList.c)
 *     CmRmFinalizeRecovery @ 0x1406E7AC4 (CmRmFinalizeRecovery.c)
 *     CmpLockRegistryExclusive @ 0x14071B6EC (CmpLockRegistryExclusive.c)
 *     CmpInitCmRM @ 0x140742E3C (CmpInitCmRM.c)
 *     CmpMountPreloadedHives @ 0x14083200C (CmpMountPreloadedHives.c)
 *     CmpInterlockedFunction @ 0x140832128 (CmpInterlockedFunction.c)
 *     CmpLinkKeyToHive @ 0x140834318 (CmpLinkKeyToHive.c)
 *     CmpInitVirtualEngine @ 0x140834430 (CmpInitVirtualEngine.c)
 *     CmpCreatePerfKeys @ 0x140834454 (CmpCreatePerfKeys.c)
 *     CmpSetVersionData @ 0x140834684 (CmpSetVersionData.c)
 *     CmpHiveRootSecurityDescriptor @ 0x140834D0C (CmpHiveRootSecurityDescriptor.c)
 *     PsBootPhaseComplete @ 0x1408351BC (PsBootPhaseComplete.c)
 *     ExpRefreshSystemTime @ 0x1408357A0 (ExpRefreshSystemTime.c)
 *     CmpLoadSystemVersionData @ 0x140836AA4 (CmpLoadSystemVersionData.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 *     CmpIsHiveLoadUnloadRundownActive @ 0x140AB419C (CmpIsHiveLoadUnloadRundownActive.c)
 *     CmpUnlockRegistry @ 0x140AB4260 (CmpUnlockRegistry.c)
 */

__int64 __fastcall CmpFinishSystemHivesLoad(PRKEVENT Event)
{
  char v2; // r15
  PLOOKASIDE_LIST_EX v3; // r9
  struct _LOOKASIDE_LIST_EX *v4; // r9
  struct _KWAIT_BLOCK *WaitBlockArray; // rdi
  PVOID *TransientPoolWithTag; // r12
  PVOID v7; // rbx
  PVOID *v8; // rcx
  char *v9; // rdx
  __int64 v10; // r8
  char v11; // r13
  char *v12; // rdi
  unsigned int i; // esi
  const WCHAR *v14; // rdx
  __int64 v15; // rdx
  __int64 v16; // r8
  struct _LOOKASIDE_LIST_EX *v17; // r9
  __int64 v18; // rcx
  int v19; // eax
  _QWORD *v20; // rcx
  _QWORD *v21; // rax
  struct _KTHREAD *CurrentThread; // rcx
  PVOID v23; // rcx
  __int64 v24; // rdx
  __int64 v25; // rcx
  __int64 v26; // r8
  __int64 v27; // r9
  char v28; // bl
  const WCHAR *v29; // rdx
  const WCHAR *v30; // rcx
  __int64 v31; // rdx
  ULONG_PTR v32; // rcx
  __int64 v33; // r8
  __int64 v34; // r9
  unsigned int v35; // esi
  char *v36; // rdi
  __int64 v37; // rdx
  __int64 v38; // rcx
  __int64 v39; // r8
  __int64 v40; // r9
  __int64 v41; // rdx
  __int64 v42; // rcx
  __int64 v43; // r8
  __int64 v44; // r9
  unsigned int v45; // edi
  ULONG_PTR *v46; // rbx
  UNICODE_STRING DestinationString; // [rsp+68h] [rbp-A0h] BYREF
  char *v49; // [rsp+78h] [rbp-90h]
  PVOID P; // [rsp+80h] [rbp-88h]
  HANDLE KeyHandle; // [rsp+88h] [rbp-80h] BYREF
  PPRIVILEGE_SET Privileges; // [rsp+90h] [rbp-78h]
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+98h] [rbp-70h] BYREF
  __int128 v54; // [rsp+C8h] [rbp-40h] BYREF
  struct _KAPC_STATE ApcState; // [rsp+D8h] [rbp-30h] BYREF
  _OWORD v56[27]; // [rsp+108h] [rbp+0h] BYREF
  char v57; // [rsp+2B8h] [rbp+1B0h] BYREF

  v2 = 0;
  KeyHandle = 0LL;
  memset(&ObjectAttributes, 0, 44);
  memset(&ApcState, 0, sizeof(ApcState));
  v54 = 0LL;
  CmpInitializeThreadInfo((__int64)&v54);
  memset(v56, 0, sizeof(v56));
  CmpMountThread = (__int64)KeGetCurrentThread();
  BYTE1(NlsMbOemCodePageTag) = 0;
  DestinationString.Buffer = (wchar_t *)0x800000;
  v49 = &v57;
  RtlUnicodeStringCopyString((PUNICODE_STRING)&DestinationString.Buffer, L"\\REGISTRY\\");
  DestinationString.Length = (unsigned __int16)DestinationString.Buffer;
  Privileges = (PPRIVILEGE_SET)CmpAllocateTransientPoolWithTag(NonPagedPoolNx, 0x150uLL, 0x20204D43u, v3);
  WaitBlockArray = (struct _KWAIT_BLOCK *)Privileges;
  if ( !Privileges )
    KeBugCheckEx(0x74u, 2uLL, 4uLL, 0LL, 0xFFFFFFFFC000009AuLL);
  TransientPoolWithTag = (PVOID *)CmpAllocateTransientPoolWithTag(NonPagedPoolNx, 0x38uLL, 0x20204D43u, v4);
  if ( !TransientPoolWithTag )
    KeBugCheckEx(0x74u, 2uLL, 6uLL, 0LL, 0xFFFFFFFFC000009AuLL);
  v7 = (PVOID)CmpHiveRootSecurityDescriptor();
  P = v7;
  v8 = TransientPoolWithTag;
  v9 = (char *)&unk_140C02588;
  v10 = 7LL;
  do
  {
    *v8 = v9;
    v9 += 184;
    ++v8;
    --v10;
  }
  while ( v10 );
  if ( !Event )
  {
    KeWaitForSingleObject(&stru_140C027B0, Executive, 0, 0, 0LL);
    KeSetEvent(&stru_140C027B0, 0, 0);
    KeStackAttachProcess(PsInitialSystemProcess, &ApcState);
    CmpInitCmRM(0LL, CmpInitRmLogOnLoad);
    KeUnstackDetachProcess(&ApcState);
    if ( CmRmSystem )
    {
      TmEnableCallbacks(*((PKRESOURCEMANAGER *)CmRmSystem + 7), (PTM_RM_NOTIFICATION)CmKtmNotification, CmRmSystem);
      CmRmFinalizeRecovery((__int64)CmRmSystem);
    }
  }
  while ( 2 )
  {
    KeWaitForMultipleObjects(7u, TransientPoolWithTag, WaitAny, Executive, 0, 0, 0LL, WaitBlockArray);
    v11 = 0;
    v12 = (char *)&unk_140C02560;
    for ( i = 0; i < 7; ++i )
    {
      if ( v12[8] )
        goto LABEL_48;
      if ( !v12[9] )
      {
        v11 = 1;
        goto LABEL_48;
      }
      v14 = (const WCHAR *)*((_QWORD *)v12 - 5);
      LOWORD(DestinationString.Buffer) = DestinationString.Length;
      RtlAppendUnicodeToString((PUNICODE_STRING)&DestinationString.Buffer, v14);
      RtlAppendUnicodeToString((PUNICODE_STRING)&DestinationString.Buffer, *((PCWSTR *)v12 - 4));
      CmpLockRegistryExclusive();
      v18 = 0LL;
      if ( !*((_QWORD *)v12 - 3) )
      {
        v16 = *(_QWORD *)v12;
        if ( !*(_QWORD *)v12 )
          goto LABEL_24;
        v19 = CmpLinkHiveToMaster(
                (__int64)&DestinationString.Buffer,
                0LL,
                v16,
                v12[11],
                *((_DWORD *)v12 - 2),
                0,
                0LL,
                (__int64)v7,
                0LL,
                0LL,
                1,
                v56);
        if ( v19 < 0 )
        {
          if ( !(unsigned __int8)CmpIsHiveLoadUnloadRundownActive(v19) )
            KeBugCheckEx(0x73u, 1uLL, v32, i, (ULONG_PTR)&DestinationString.Buffer);
          CmpLoadingSystemHivesActive = 0;
          CmpMountThread = 0LL;
          CmpUnlockRegistry(v32, v31, v33, v34);
          v35 = 0;
          v36 = (char *)&unk_140C02568;
          do
          {
            if ( *((_DWORD *)v36 + 3) && !*v36 )
            {
              if ( !v36[1] )
                KeWaitForSingleObject(v36 + 32, Executive, 0, 0, 0LL);
              ExAcquirePushLockExclusiveEx((ULONG_PTR)(v36 + 80), 0LL);
              KeSetEvent((PRKEVENT)(v36 + 56), 0, 0);
              CmpNotifyMachineHiveLoaded(v35);
              ExReleasePushLockEx((ULONG_PTR)(v36 + 80), 0LL);
            }
            ++v35;
            v36 += 184;
          }
          while ( v35 < 7 );
          goto LABEL_71;
        }
        CmpLockHiveListExclusive();
        v20 = (_QWORD *)qword_140D3CC98;
        v21 = (_QWORD *)(*(_QWORD *)v12 + 1608LL);
        if ( *(__int64 **)qword_140D3CC98 != &CmpHiveListHead )
          __fastfail(3u);
        *v21 = &CmpHiveListHead;
        v21[1] = v20;
        *v20 = v21;
        qword_140D3CC98 = (__int64)v21;
        CmpUnlockHiveList();
        CmpRecheckHiveVolumePolicy(*(_QWORD *)v12);
        if ( v12[11] )
        {
          *(_DWORD *)(*(_QWORD *)v12 + 160LL) |= 0x20u;
          CurrentThread = KeGetCurrentThread();
          *(_QWORD *)(*(_QWORD *)v12 + 4168LL) = CurrentThread;
          CmpUnlockRegistry(CurrentThread, v15, v16, v17);
          CmpFlushHive(*(_QWORD *)v12, 4u);
          CmpLockRegistryExclusive();
          *(_DWORD *)(*(_QWORD *)v12 + 160LL) &= ~0x20u;
          *(_QWORD *)(*(_QWORD *)v12 + 4168LL) = 0LL;
        }
        v23 = CmRmSystem;
        if ( CmRmSystem )
        {
          v15 = *(_QWORD *)v12;
          if ( (*(_DWORD *)(*(_QWORD *)v12 + 160LL) & 2) == 0 && !*(_QWORD *)(v15 + 4152) )
          {
            ++*((_DWORD *)CmRmSystem + 16);
            *(_QWORD *)(*(_QWORD *)v12 + 4152LL) = v23;
          }
        }
      }
      v18 = *(_QWORD *)v12;
      if ( *(_QWORD *)v12 )
        CmpAddToHiveFileList(v18, v15, v16, v17);
LABEL_24:
      v12[8] = 1;
      switch ( i )
      {
        case 3u:
          if ( !Event )
          {
            CmpMountPreloadedHives();
            CmpInterlockedFunction();
            ExAcquirePushLockExclusiveEx((ULONG_PTR)(v12 + 88), 0LL);
            KeSetEvent((PRKEVENT)(v12 + 64), 0, 0);
            CmpNotifyMachineHiveLoaded(3u);
            ExReleasePushLockEx((ULONG_PTR)(v12 + 88), 0LL);
            v28 = 1;
            if ( byte_140C026D8 && CmFastBoot )
            {
              CmpUnlockRegistry(v25, v24, v26, v27);
              v28 = 0;
              ExpRefreshSystemTime();
              PsBootPhaseComplete();
            }
            CmpLoadSystemVersionData();
            v2 = 1;
            if ( !v28 )
              goto LABEL_47;
          }
          break;
        case 2u:
          CmpUnlockRegistry(v18, v15, v16, v17);
          if ( !Event )
          {
            ExAcquirePushLockExclusiveEx((ULONG_PTR)(v12 + 88), 0LL);
            KeSetEvent((PRKEVENT)(v12 + 64), 0, 0);
            v2 = 1;
            CmpNotifyMachineHiveLoaded(2u);
            ExReleasePushLockEx((ULONG_PTR)(v12 + 88), 0LL);
            if ( byte_140C02790 && CmFastBoot )
            {
              ExpRefreshSystemTime();
              PsBootPhaseComplete();
            }
            CmpSetVersionData();
          }
          CmpCreatePerfKeys();
          goto LABEL_44;
        case 1u:
          v29 = L"\\Registry\\Machine\\SAM\\SAM";
          v30 = L"\\Registry\\Machine\\Security\\SAM";
LABEL_42:
          CmpLinkKeyToHive(v30, v29);
          break;
        case 4u:
          v29 = L"\\Registry\\User\\.Default";
          v30 = L"\\Registry\\User\\S-1-5-18";
          goto LABEL_42;
      }
      CmpUnlockRegistry(v18, v15, v16, v17);
LABEL_44:
      if ( !Event && !v2 )
      {
        ExAcquirePushLockExclusiveEx((ULONG_PTR)(v12 + 88), 0LL);
        KeSetEvent((PRKEVENT)(v12 + 64), 0, 0);
        CmpNotifyMachineHiveLoaded(i);
        ExReleasePushLockEx((ULONG_PTR)(v12 + 88), 0LL);
      }
LABEL_47:
      v2 = 0;
LABEL_48:
      v7 = P;
      v12 += 184;
    }
    if ( v11 )
    {
      WaitBlockArray = (struct _KWAIT_BLOCK *)Privileges;
      continue;
    }
    break;
  }
  CmpLockRegistryExclusive();
  CmpSpecialBootCondition = 0;
  CmpInitVirtualEngine();
  CmpUnlockRegistry(v38, v37, v39, v40);
  if ( Event )
  {
    KeStackAttachProcess(PsInitialSystemProcess, &ApcState);
    CmpInitCmRM(0LL, CmpInitRmLogOnLoad);
    KeUnstackDetachProcess(&ApcState);
    if ( CmRmSystem )
    {
      TmEnableCallbacks(*((PKRESOURCEMANAGER *)CmRmSystem + 7), (PTM_RM_NOTIFICATION)CmKtmNotification, CmRmSystem);
      CmRmFinalizeRecovery((__int64)CmRmSystem);
    }
    CmpLockRegistryExclusive();
    CmpMountPreloadedHives();
    CmpInterlockedFunction();
    CmpUnlockRegistry(v42, v41, v43, v44);
    v45 = 0;
    v46 = &qword_140C025B8;
    do
    {
      ExAcquirePushLockExclusiveEx((ULONG_PTR)v46, 0LL);
      KeSetEvent((PRKEVENT)v46 - 1, 0, 0);
      CmpNotifyMachineHiveLoaded(v45);
      ExReleasePushLockEx((ULONG_PTR)v46, 0LL);
      ++v45;
      v46 += 23;
    }
    while ( v45 < 7 );
    if ( CmFastBoot )
    {
      ExpRefreshSystemTime();
      PsBootPhaseComplete();
    }
    CmpSetVersionData();
  }
  ObjectAttributes.Length = 48;
  ObjectAttributes.RootDirectory = 0LL;
  ObjectAttributes.Attributes = 576;
  ObjectAttributes.ObjectName = (PUNICODE_STRING)&CmpConfigurationManagerKeyName;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  if ( ZwCreateKey(&KeyHandle, 2u, &ObjectAttributes, 0, 0LL, 0, 0LL) >= 0 )
    ZwClose(KeyHandle);
LABEL_71:
  CmpSpecialBootCondition = 0;
  CmpLoadingSystemHivesActive = 0;
  CmpMountThread = 0LL;
  if ( Event )
    KeSetEvent(Event, 0, 0);
  if ( P )
    ExFreePoolWithTag(P, 0);
  CmSiFreeMemory(Privileges);
  CmSiFreeMemory((PPRIVILEGE_SET)TransientPoolWithTag);
  return CmCleanupThreadInfo((__int64 *)&v54);
}
