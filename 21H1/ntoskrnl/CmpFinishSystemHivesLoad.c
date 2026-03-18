/*
 * XREFs of CmpFinishSystemHivesLoad @ 0x14078E760
 * Callers:
 *     <none>
 * Callees:
 *     KeWaitForMultipleObjects @ 0x140243AA0 (KeWaitForMultipleObjects.c)
 *     KeSetEvent @ 0x14024A230 (KeSetEvent.c)
 *     RtlAppendUnicodeToString @ 0x14025BA90 (RtlAppendUnicodeToString.c)
 *     CmpAllocateTransientPoolWithTag @ 0x14025C5C0 (CmpAllocateTransientPoolWithTag.c)
 *     KiUnstackDetachProcess @ 0x14025E290 (KiUnstackDetachProcess.c)
 *     ExAcquirePushLockExclusiveEx @ 0x1402609E0 (ExAcquirePushLockExclusiveEx.c)
 *     ExReleasePushLockEx @ 0x140260EE0 (ExReleasePushLockEx.c)
 *     KeWaitForSingleObject @ 0x1402643F0 (KeWaitForSingleObject.c)
 *     KiStackAttachProcess @ 0x1402A88C0 (KiStackAttachProcess.c)
 *     CmpRecheckHiveVolumePolicy @ 0x1402E0F40 (CmpRecheckHiveVolumePolicy.c)
 *     CmSiFreeMemory @ 0x1402E2170 (CmSiFreeMemory.c)
 *     RtlUnicodeStringValidateDestWorker @ 0x14036A950 (RtlUnicodeStringValidateDestWorker.c)
 *     CmpNotifyMachineHiveLoaded @ 0x1403B3080 (CmpNotifyMachineHiveLoaded.c)
 *     __security_check_cookie @ 0x1403CC020 (__security_check_cookie.c)
 *     ZwClose @ 0x1403F2510 (ZwClose.c)
 *     ZwCreateKey @ 0x1403F26D0 (ZwCreateKey.c)
 *     KeBugCheckEx @ 0x1403F5E40 (KeBugCheckEx.c)
 *     memset @ 0x140408F80 (memset.c)
 *     CmpUnlockRegistry @ 0x140629290 (CmpUnlockRegistry.c)
 *     CmpInitCmRM @ 0x14065A51C (CmpInitCmRM.c)
 *     CmpFlushHive @ 0x140664FA8 (CmpFlushHive.c)
 *     CmpLinkHiveToMaster @ 0x14068C2C8 (CmpLinkHiveToMaster.c)
 *     CmpLockRegistryExclusive @ 0x14069120C (CmpLockRegistryExclusive.c)
 *     CmpAddToHiveFileList @ 0x1406E8D3C (CmpAddToHiveFileList.c)
 *     CmRmFinalizeRecovery @ 0x1406E9558 (CmRmFinalizeRecovery.c)
 *     CmpLinkKeyToHive @ 0x14078ED60 (CmpLinkKeyToHive.c)
 *     CmpCreatePerfKeys @ 0x14078EE60 (CmpCreatePerfKeys.c)
 *     CmpSetVersionData @ 0x14078F0CC (CmpSetVersionData.c)
 *     CmpHiveRootSecurityDescriptor @ 0x14078F6BC (CmpHiveRootSecurityDescriptor.c)
 *     PsBootPhaseComplete @ 0x14078FB6C (PsBootPhaseComplete.c)
 *     ExpRefreshSystemTime @ 0x14079014C (ExpRefreshSystemTime.c)
 *     CmpInterlockedFunction @ 0x140791714 (CmpInterlockedFunction.c)
 *     CmpMountPreloadedHives @ 0x140791858 (CmpMountPreloadedHives.c)
 *     CmpAdminSystemSecurityDescriptor @ 0x140791974 (CmpAdminSystemSecurityDescriptor.c)
 *     ExFreePoolWithTag @ 0x1409B1010 (ExFreePoolWithTag.c)
 */

void __fastcall CmpFinishSystemHivesLoad(PRKEVENT Event)
{
  char v2; // r12
  size_t *v3; // r9
  struct _LOOKASIDE_LIST_EX *v4; // r9
  const WCHAR *v5; // rcx
  __int64 v6; // rdx
  __int16 v7; // r14
  signed __int64 v8; // r8
  __int16 Buffer; // r14
  struct _LOOKASIDE_LIST_EX *v10; // r9
  struct _KWAIT_BLOCK *WaitBlockArray; // rdi
  PVOID *v12; // rbx
  char *v13; // rdx
  PVOID *v14; // rcx
  __int64 v15; // r8
  _DWORD *v16; // r9
  __int64 v17; // r8
  _DWORD *v18; // r9
  char v19; // r13
  char *v20; // rdi
  unsigned int i; // esi
  const WCHAR *v22; // rdx
  __int64 v23; // rdx
  __int64 v24; // r8
  struct _LOOKASIDE_LIST_EX *v25; // r9
  int v26; // eax
  _QWORD *v27; // rcx
  _QWORD *v28; // rax
  PVOID v29; // rcx
  const WCHAR *v30; // rdx
  const WCHAR *v31; // rcx
  char v32; // al
  _DWORD *v33; // r9
  unsigned int v34; // esi
  char *v35; // rdi
  __int64 v36; // r8
  _DWORD *v37; // r9
  unsigned int v38; // edi
  ULONG_PTR *v39; // rbx
  PLARGE_INTEGER Timeout; // [rsp+28h] [rbp-E0h]
  ULONG Alertable; // [rsp+30h] [rbp-D8h]
  UNICODE_STRING DestinationString; // [rsp+60h] [rbp-A8h] BYREF
  char *v43; // [rsp+70h] [rbp-98h]
  size_t pcchDest; // [rsp+78h] [rbp-90h] BYREF
  wchar_t *ppszDest; // [rsp+80h] [rbp-88h] BYREF
  HANDLE KeyHandle; // [rsp+88h] [rbp-80h] BYREF
  PVOID P; // [rsp+90h] [rbp-78h]
  PPRIVILEGE_SET Privileges; // [rsp+98h] [rbp-70h]
  PPRIVILEGE_SET TransientPoolWithTag; // [rsp+A0h] [rbp-68h]
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+A8h] [rbp-60h] BYREF
  _OWORD v51[3]; // [rsp+D8h] [rbp-30h] BYREF
  _OWORD v52[27]; // [rsp+108h] [rbp+0h] BYREF
  char v53; // [rsp+2B8h] [rbp+1B0h] BYREF

  v2 = 0;
  KeyHandle = 0LL;
  memset(&ObjectAttributes, 0, sizeof(ObjectAttributes));
  memset(v51, 0, sizeof(v51));
  memset(v52, 0, sizeof(v52));
  CmpMountThread = (__int64)KeGetCurrentThread();
  BYTE1(NlsMbCodePageTag) = 0;
  DestinationString.Buffer = (wchar_t *)0x800000;
  ppszDest = 0LL;
  pcchDest = 0LL;
  v43 = &v53;
  if ( RtlUnicodeStringValidateDestWorker(
         (PCUNICODE_STRING)&DestinationString.Buffer,
         &ppszDest,
         &pcchDest,
         v3,
         (const size_t)Timeout,
         Alertable) < 0 )
  {
    Buffer = (__int16)DestinationString.Buffer;
  }
  else
  {
    v4 = (struct _LOOKASIDE_LIST_EX *)pcchDest;
    v5 = L"\\REGISTRY\\";
    v6 = 0x7FFFLL;
    v7 = 0;
    if ( pcchDest )
    {
      v8 = (char *)ppszDest - (char *)L"\\REGISTRY\\";
      do
      {
        if ( !v6 )
          break;
        if ( !*v5 )
          break;
        *(const WCHAR *)((char *)v5 + v8) = *v5;
        --v6;
        ++v5;
        ++v7;
      }
      while ( (struct _LIST_ENTRY **)((char *)&v4[-342].L.ListEntry.Flink + v6 + 1) );
    }
    Buffer = 2 * v7;
    LOWORD(DestinationString.Buffer) = Buffer;
  }
  Privileges = (PPRIVILEGE_SET)CmpAllocateTransientPoolWithTag(NonPagedPoolNx, 0x150uLL, 0x20204D43u, v4);
  WaitBlockArray = (struct _KWAIT_BLOCK *)Privileges;
  if ( !Privileges )
    KeBugCheckEx(0x74u, 2uLL, 4uLL, 0LL, 0xFFFFFFFFC000009AuLL);
  TransientPoolWithTag = (PPRIVILEGE_SET)CmpAllocateTransientPoolWithTag(NonPagedPoolNx, 0x38uLL, 0x20204D43u, v10);
  v12 = (PVOID *)TransientPoolWithTag;
  if ( !TransientPoolWithTag )
    KeBugCheckEx(0x74u, 2uLL, 6uLL, 0LL, 0xFFFFFFFFC000009AuLL);
  P = (PVOID)CmpHiveRootSecurityDescriptor();
  CmpAdminSystemFileSecurityDescriptor = (PSECURITY_DESCRIPTOR)CmpAdminSystemSecurityDescriptor();
  v13 = (char *)&unk_140C00F58;
  v14 = v12;
  v15 = 7LL;
  do
  {
    *v14 = v13;
    v13 += 200;
    ++v14;
    --v15;
  }
  while ( v15 );
  if ( !Event )
  {
    KeWaitForSingleObject(&stru_140C011B0, Executive, 0, 0, 0LL);
    KeSetEvent(&stru_140C011B0, 0, 0);
    KiStackAttachProcess(PsInitialSystemProcess, 0LL, (__int64)v51, v16);
    CmpInitCmRM(0LL, CmpInitRmLogOnLoad);
    KiUnstackDetachProcess((__int64)v51, 0LL, v17, v18);
    if ( CmRmSystem )
    {
      TmEnableCallbacks(*((PKRESOURCEMANAGER *)CmRmSystem + 7), (PTM_RM_NOTIFICATION)CmKtmNotification, CmRmSystem);
      CmRmFinalizeRecovery((__int64)CmRmSystem);
    }
  }
  while ( 2 )
  {
    KeWaitForMultipleObjects(7u, v12, WaitAny, Executive, 0, 0, 0LL, WaitBlockArray);
    v19 = 0;
    v20 = (char *)&unk_140C00F30;
    for ( i = 0; i < 7; ++i )
    {
      if ( v20[8] )
        goto LABEL_19;
      if ( !v20[9] )
      {
        v19 = 1;
        goto LABEL_19;
      }
      v22 = (const WCHAR *)*((_QWORD *)v20 - 5);
      LOWORD(DestinationString.Buffer) = Buffer;
      RtlAppendUnicodeToString((PUNICODE_STRING)&DestinationString.Buffer, v22);
      RtlAppendUnicodeToString((PUNICODE_STRING)&DestinationString.Buffer, *((PCWSTR *)v20 - 4));
      CmpLockRegistryExclusive();
      if ( !*((_QWORD *)v20 - 3) )
      {
        if ( !*(_QWORD *)v20 )
          goto LABEL_34;
        v26 = CmpLinkHiveToMaster(
                (__int64)&DestinationString.Buffer,
                0LL,
                *(_QWORD *)v20,
                v20[11],
                *((_DWORD *)v20 - 2),
                0,
                0LL,
                (__int64)P,
                0LL,
                0LL,
                1,
                v52);
        if ( v26 < 0 )
        {
          if ( (CmpShutdownRundown & 1) == 0 )
            KeBugCheckEx(0x73u, 1uLL, v26, i, (ULONG_PTR)&DestinationString.Buffer);
          CmpLoadingSystemHivesActive = 0;
          CmpMountThread = 0LL;
          CmpUnlockRegistry();
          v34 = 0;
          v35 = (char *)&unk_140C00F38;
          do
          {
            if ( *((_DWORD *)v35 + 3) && !*v35 )
            {
              if ( !v35[1] )
                KeWaitForSingleObject(v35 + 32, Executive, 0, 0, 0LL);
              ExAcquirePushLockExclusiveEx((ULONG_PTR)(v35 + 80), 0LL);
              KeSetEvent((PRKEVENT)(v35 + 56), 0, 0);
              CmpNotifyMachineHiveLoaded(v34);
              ExReleasePushLockEx((ULONG_PTR)(v35 + 80), 0LL);
            }
            ++v34;
            v35 += 200;
          }
          while ( v34 < 7 );
          goto LABEL_60;
        }
        ExAcquirePushLockExclusiveEx((ULONG_PTR)&CmpHiveListHeadLock, 0LL);
        v27 = (_QWORD *)qword_140D2D920;
        v28 = (_QWORD *)(*(_QWORD *)v20 + 1600LL);
        if ( *(__int64 **)qword_140D2D920 != &CmpHiveListHead )
          __fastfail(3u);
        *v28 = &CmpHiveListHead;
        v28[1] = v27;
        *v27 = v28;
        qword_140D2D920 = (__int64)v28;
        ExReleasePushLockEx((ULONG_PTR)&CmpHiveListHeadLock, 0LL);
        CmpRecheckHiveVolumePolicy(*(_QWORD *)v20);
        if ( v20[11] )
        {
          *(_DWORD *)(*(_QWORD *)v20 + 160LL) |= 0x20u;
          *(_QWORD *)(*(_QWORD *)v20 + 4208LL) = KeGetCurrentThread();
          CmpUnlockRegistry();
          CmpFlushHive(*(_QWORD *)v20, 4u);
          CmpLockRegistryExclusive();
          *(_DWORD *)(*(_QWORD *)v20 + 160LL) &= ~0x20u;
          *(_QWORD *)(*(_QWORD *)v20 + 4208LL) = 0LL;
        }
        v29 = CmRmSystem;
        if ( CmRmSystem )
        {
          v23 = *(_QWORD *)v20;
          if ( (*(_DWORD *)(*(_QWORD *)v20 + 160LL) & 2) == 0 && !*(_QWORD *)(v23 + 4192) )
          {
            ++*((_DWORD *)CmRmSystem + 16);
            *(_QWORD *)(*(_QWORD *)v20 + 4192LL) = v29;
          }
        }
      }
      if ( *(_QWORD *)v20 )
        CmpAddToHiveFileList(*(_QWORD *)v20, v23, v24, v25);
LABEL_34:
      v20[8] = 1;
      if ( i != 3 )
      {
        switch ( i )
        {
          case 2u:
            CmpUnlockRegistry();
            if ( !Event )
            {
              ExAcquirePushLockExclusiveEx((ULONG_PTR)(v20 + 88), 0LL);
              KeSetEvent((PRKEVENT)(v20 + 64), 0, 0);
              v2 = 1;
              CmpNotifyMachineHiveLoaded(2u);
              ExReleasePushLockEx((ULONG_PTR)(v20 + 88), 0LL);
              if ( byte_140C01190 && CmFastBoot )
              {
                ExpRefreshSystemTime();
                PsBootPhaseComplete();
              }
              CmpSetVersionData();
            }
            CmpCreatePerfKeys();
            goto LABEL_39;
          case 1u:
            v30 = L"\\Registry\\Machine\\SAM\\SAM";
            v31 = L"\\Registry\\Machine\\Security\\SAM";
            break;
          case 4u:
            v30 = L"\\Registry\\User\\.Default";
            v31 = L"\\Registry\\User\\S-1-5-18";
            break;
          default:
LABEL_38:
            CmpUnlockRegistry();
LABEL_39:
            if ( !Event && !v2 )
            {
              ExAcquirePushLockExclusiveEx((ULONG_PTR)(v20 + 88), 0LL);
              KeSetEvent((PRKEVENT)(v20 + 64), 0, 0);
              CmpNotifyMachineHiveLoaded(i);
              ExReleasePushLockEx((ULONG_PTR)(v20 + 88), 0LL);
            }
            goto LABEL_42;
        }
        CmpLinkKeyToHive(v31, v30);
        goto LABEL_38;
      }
      if ( Event )
        goto LABEL_38;
      CmpMountPreloadedHives();
      CmpInterlockedFunction();
      ExAcquirePushLockExclusiveEx((ULONG_PTR)(v20 + 88), 0LL);
      KeSetEvent((PRKEVENT)(v20 + 64), 0, 0);
      v2 = 1;
      CmpNotifyMachineHiveLoaded(3u);
      ExReleasePushLockEx((ULONG_PTR)(v20 + 88), 0LL);
      if ( !byte_140C010C8 || !CmFastBoot )
        goto LABEL_38;
      CmpUnlockRegistry();
      ExpRefreshSystemTime();
      PsBootPhaseComplete();
LABEL_42:
      v2 = 0;
LABEL_19:
      v20 += 200;
    }
    if ( v19 )
    {
      v12 = (PVOID *)TransientPoolWithTag;
      WaitBlockArray = (struct _KWAIT_BLOCK *)Privileges;
      continue;
    }
    break;
  }
  CmpLockRegistryExclusive();
  CmpSpecialBootCondition = 0;
  if ( BYTE4(NlsMbCodePageTag) || (v32 = 1, CmVEEnabled != 1) )
    v32 = 0;
  CmpVEEnabled = v32;
  CmpUnlockRegistry();
  if ( Event )
  {
    KiStackAttachProcess(PsInitialSystemProcess, 0LL, (__int64)v51, v33);
    CmpInitCmRM(0LL, CmpInitRmLogOnLoad);
    KiUnstackDetachProcess((__int64)v51, 0LL, v36, v37);
    if ( CmRmSystem )
    {
      TmEnableCallbacks(*((PKRESOURCEMANAGER *)CmRmSystem + 7), (PTM_RM_NOTIFICATION)CmKtmNotification, CmRmSystem);
      CmRmFinalizeRecovery((__int64)CmRmSystem);
    }
    CmpLockRegistryExclusive();
    CmpMountPreloadedHives();
    CmpInterlockedFunction();
    CmpUnlockRegistry();
    v38 = 0;
    v39 = &qword_140C00F88;
    do
    {
      ExAcquirePushLockExclusiveEx((ULONG_PTR)v39, 0LL);
      KeSetEvent((PRKEVENT)v39 - 1, 0, 0);
      CmpNotifyMachineHiveLoaded(v38);
      ExReleasePushLockEx((ULONG_PTR)v39, 0LL);
      ++v38;
      v39 += 25;
    }
    while ( v38 < 7 );
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
LABEL_60:
  CmpSpecialBootCondition = 0;
  CmpLoadingSystemHivesActive = 0;
  CmpMountThread = 0LL;
  if ( Event )
    KeSetEvent(Event, 0, 0);
  if ( P )
    ExFreePoolWithTag(P, 0);
  CmSiFreeMemory(Privileges);
  CmSiFreeMemory(TransientPoolWithTag);
}
