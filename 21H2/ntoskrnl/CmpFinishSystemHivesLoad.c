/*
 * XREFs of CmpFinishSystemHivesLoad @ 0x1407A74B0
 * Callers:
 *     <none>
 * Callees:
 *     CmSiFreeMemory @ 0x1402253C0 (CmSiFreeMemory.c)
 *     CmpAllocateTransientPoolWithTag @ 0x14023EDD0 (CmpAllocateTransientPoolWithTag.c)
 *     RtlAppendUnicodeToString @ 0x1402539E0 (RtlAppendUnicodeToString.c)
 *     KiStackAttachProcess @ 0x14027D850 (KiStackAttachProcess.c)
 *     KiUnstackDetachProcess @ 0x1402AB900 (KiUnstackDetachProcess.c)
 *     KeWaitForMultipleObjects @ 0x1402F03E0 (KeWaitForMultipleObjects.c)
 *     CmpRecheckHiveVolumePolicy @ 0x1402F73C0 (CmpRecheckHiveVolumePolicy.c)
 *     KeSetEvent @ 0x14034E2F0 (KeSetEvent.c)
 *     KeWaitForSingleObject @ 0x1403504C0 (KeWaitForSingleObject.c)
 *     ExAcquirePushLockExclusiveEx @ 0x1403556E0 (ExAcquirePushLockExclusiveEx.c)
 *     ExReleasePushLockEx @ 0x140355BE0 (ExReleasePushLockEx.c)
 *     RtlUnicodeStringValidateDestWorker @ 0x14036F1D0 (RtlUnicodeStringValidateDestWorker.c)
 *     CmpNotifyMachineHiveLoaded @ 0x1403B7FF0 (CmpNotifyMachineHiveLoaded.c)
 *     __security_check_cookie @ 0x1403D05D0 (__security_check_cookie.c)
 *     ZwClose @ 0x1403FA760 (ZwClose.c)
 *     ZwCreateKey @ 0x1403FA920 (ZwCreateKey.c)
 *     KeBugCheckEx @ 0x1403FE0D0 (KeBugCheckEx.c)
 *     memset @ 0x140414300 (memset.c)
 *     CmpAddToHiveFileList @ 0x14061E11C (CmpAddToHiveFileList.c)
 *     CmRmFinalizeRecovery @ 0x14061E72C (CmRmFinalizeRecovery.c)
 *     CmpLockRegistryExclusive @ 0x1406679BC (CmpLockRegistryExclusive.c)
 *     CmpFlushHive @ 0x1406A48D8 (CmpFlushHive.c)
 *     CmpInitCmRM @ 0x1406C46C8 (CmpInitCmRM.c)
 *     CmpLinkHiveToMaster @ 0x1406F8338 (CmpLinkHiveToMaster.c)
 *     CmpUnlockRegistry @ 0x14070D2B0 (CmpUnlockRegistry.c)
 *     CmpLinkKeyToHive @ 0x1407A7CC0 (CmpLinkKeyToHive.c)
 *     CmpCreatePerfKeys @ 0x1407A7DC0 (CmpCreatePerfKeys.c)
 *     CmpSetVersionData @ 0x1407A802C (CmpSetVersionData.c)
 *     CmpHiveRootSecurityDescriptor @ 0x1407A861C (CmpHiveRootSecurityDescriptor.c)
 *     PsBootPhaseComplete @ 0x1407A8ACC (PsBootPhaseComplete.c)
 *     ExpRefreshSystemTime @ 0x1407A929C (ExpRefreshSystemTime.c)
 *     CmpInterlockedFunction @ 0x1407AACB0 (CmpInterlockedFunction.c)
 *     CmpMountPreloadedHives @ 0x1407AADF4 (CmpMountPreloadedHives.c)
 *     ExFreePoolWithTag @ 0x1409B5010 (ExFreePoolWithTag.c)
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
  char v16; // r13
  char *v17; // rdi
  unsigned int i; // esi
  const WCHAR *v19; // rdx
  __int64 v20; // rdx
  __int64 v21; // r8
  struct _LOOKASIDE_LIST_EX *v22; // r9
  int v23; // eax
  _QWORD *v24; // rcx
  _QWORD *v25; // rax
  PVOID v26; // rcx
  const WCHAR *v27; // rdx
  const WCHAR *v28; // rcx
  unsigned int v29; // esi
  char *v30; // rdi
  char v31; // al
  unsigned int v32; // edi
  ULONG_PTR *v33; // rbx
  PLARGE_INTEGER Timeout; // [rsp+28h] [rbp-E0h]
  ULONG Alertable; // [rsp+30h] [rbp-D8h]
  UNICODE_STRING DestinationString; // [rsp+60h] [rbp-A8h] BYREF
  char *v37; // [rsp+70h] [rbp-98h]
  size_t pcchDest; // [rsp+78h] [rbp-90h] BYREF
  wchar_t *ppszDest; // [rsp+80h] [rbp-88h] BYREF
  HANDLE KeyHandle; // [rsp+88h] [rbp-80h] BYREF
  PVOID P; // [rsp+90h] [rbp-78h]
  PPRIVILEGE_SET Privileges; // [rsp+98h] [rbp-70h]
  PPRIVILEGE_SET TransientPoolWithTag; // [rsp+A0h] [rbp-68h]
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+A8h] [rbp-60h] BYREF
  _OWORD v45[3]; // [rsp+D8h] [rbp-30h] BYREF
  _OWORD v46[27]; // [rsp+108h] [rbp+0h] BYREF
  char v47; // [rsp+2B8h] [rbp+1B0h] BYREF

  v2 = 0;
  KeyHandle = 0LL;
  memset(&ObjectAttributes, 0, sizeof(ObjectAttributes));
  memset(v45, 0, sizeof(v45));
  memset(v46, 0, sizeof(v46));
  CmpMountThread = (__int64)KeGetCurrentThread();
  BYTE1(NlsMbCodePageTag) = 0;
  DestinationString.Buffer = (wchar_t *)0x800000;
  ppszDest = 0LL;
  pcchDest = 0LL;
  v37 = &v47;
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
    KiStackAttachProcess(PsInitialSystemProcess, 0, (__int64)v45);
    CmpInitCmRM(0LL, CmpInitRmLogOnLoad);
    KiUnstackDetachProcess((__int64)v45, 0LL);
    if ( CmRmSystem )
    {
      TmEnableCallbacks(*((PKRESOURCEMANAGER *)CmRmSystem + 7), (PTM_RM_NOTIFICATION)CmKtmNotification, CmRmSystem);
      CmRmFinalizeRecovery((__int64)CmRmSystem);
    }
  }
  while ( 2 )
  {
    KeWaitForMultipleObjects(7u, v12, WaitAny, Executive, 0, 0, 0LL, WaitBlockArray);
    v16 = 0;
    v17 = (char *)&unk_140C00F30;
    for ( i = 0; i < 7; ++i )
    {
      if ( v17[8] )
        goto LABEL_54;
      if ( !v17[9] )
      {
        v16 = 1;
        goto LABEL_54;
      }
      v19 = (const WCHAR *)*((_QWORD *)v17 - 5);
      LOWORD(DestinationString.Buffer) = Buffer;
      RtlAppendUnicodeToString((PUNICODE_STRING)&DestinationString.Buffer, v19);
      RtlAppendUnicodeToString((PUNICODE_STRING)&DestinationString.Buffer, *((PCWSTR *)v17 - 4));
      CmpLockRegistryExclusive();
      if ( !*((_QWORD *)v17 - 3) )
      {
        if ( !*(_QWORD *)v17 )
          goto LABEL_32;
        v23 = CmpLinkHiveToMaster(
                (__int64)&DestinationString.Buffer,
                0LL,
                *(_QWORD *)v17,
                v17[11],
                *((_DWORD *)v17 - 2),
                0,
                0LL,
                (__int64)P,
                0LL,
                0LL,
                1,
                v46);
        if ( v23 < 0 )
        {
          if ( (CmpShutdownRundown & 1) == 0 )
            KeBugCheckEx(0x73u, 1uLL, v23, i, (ULONG_PTR)&DestinationString.Buffer);
          CmpLoadingSystemHivesActive = 0;
          CmpMountThread = 0LL;
          CmpUnlockRegistry();
          v29 = 0;
          v30 = (char *)&unk_140C00F38;
          do
          {
            if ( *((_DWORD *)v30 + 3) && !*v30 )
            {
              if ( !v30[1] )
                KeWaitForSingleObject(v30 + 32, Executive, 0, 0, 0LL);
              ExAcquirePushLockExclusiveEx((ULONG_PTR)(v30 + 80), 0LL);
              KeSetEvent((PRKEVENT)(v30 + 56), 0, 0);
              CmpNotifyMachineHiveLoaded(v29);
              ExReleasePushLockEx((ULONG_PTR)(v30 + 80), 0LL);
            }
            ++v29;
            v30 += 200;
          }
          while ( v29 < 7 );
          goto LABEL_80;
        }
        ExAcquirePushLockExclusiveEx((ULONG_PTR)&CmpHiveListHeadLock, 0LL);
        v24 = (_QWORD *)qword_140D2E918;
        v25 = (_QWORD *)(*(_QWORD *)v17 + 1600LL);
        if ( *(__int64 **)qword_140D2E918 != &CmpHiveListHead )
          __fastfail(3u);
        *v25 = &CmpHiveListHead;
        v25[1] = v24;
        *v24 = v25;
        qword_140D2E918 = (__int64)v25;
        ExReleasePushLockEx((ULONG_PTR)&CmpHiveListHeadLock, 0LL);
        CmpRecheckHiveVolumePolicy(*(_QWORD *)v17);
        if ( v17[11] )
        {
          *(_DWORD *)(*(_QWORD *)v17 + 160LL) |= 0x20u;
          *(_QWORD *)(*(_QWORD *)v17 + 4208LL) = KeGetCurrentThread();
          CmpUnlockRegistry();
          CmpFlushHive(*(_QWORD *)v17, 4u);
          CmpLockRegistryExclusive();
          *(_DWORD *)(*(_QWORD *)v17 + 160LL) &= ~0x20u;
          *(_QWORD *)(*(_QWORD *)v17 + 4208LL) = 0LL;
        }
        v26 = CmRmSystem;
        if ( CmRmSystem )
        {
          v20 = *(_QWORD *)v17;
          if ( (*(_DWORD *)(*(_QWORD *)v17 + 160LL) & 2) == 0 && !*(_QWORD *)(v20 + 4192) )
          {
            ++*((_DWORD *)CmRmSystem + 16);
            *(_QWORD *)(*(_QWORD *)v17 + 4192LL) = v26;
          }
        }
      }
      if ( *(_QWORD *)v17 )
        CmpAddToHiveFileList(*(_QWORD *)v17, v20, v21, v22);
LABEL_32:
      v17[8] = 1;
      if ( i != 3 )
      {
        switch ( i )
        {
          case 2u:
            CmpUnlockRegistry();
            if ( !Event )
            {
              ExAcquirePushLockExclusiveEx((ULONG_PTR)(v17 + 88), 0LL);
              KeSetEvent((PRKEVENT)(v17 + 64), 0, 0);
              v2 = 1;
              CmpNotifyMachineHiveLoaded(2u);
              ExReleasePushLockEx((ULONG_PTR)(v17 + 88), 0LL);
              if ( byte_140C01190 && CmFastBoot )
              {
                ExpRefreshSystemTime();
                PsBootPhaseComplete();
              }
              CmpSetVersionData();
            }
            CmpCreatePerfKeys();
            goto LABEL_50;
          case 1u:
            v27 = L"\\Registry\\Machine\\SAM\\SAM";
            v28 = L"\\Registry\\Machine\\Security\\SAM";
            break;
          case 4u:
            v27 = L"\\Registry\\User\\.Default";
            v28 = L"\\Registry\\User\\S-1-5-18";
            break;
          default:
LABEL_49:
            CmpUnlockRegistry();
LABEL_50:
            if ( !Event && !v2 )
            {
              ExAcquirePushLockExclusiveEx((ULONG_PTR)(v17 + 88), 0LL);
              KeSetEvent((PRKEVENT)(v17 + 64), 0, 0);
              CmpNotifyMachineHiveLoaded(i);
              ExReleasePushLockEx((ULONG_PTR)(v17 + 88), 0LL);
            }
            goto LABEL_53;
        }
        CmpLinkKeyToHive(v28, v27);
        goto LABEL_49;
      }
      if ( Event )
        goto LABEL_49;
      CmpMountPreloadedHives();
      CmpInterlockedFunction();
      ExAcquirePushLockExclusiveEx((ULONG_PTR)(v17 + 88), 0LL);
      KeSetEvent((PRKEVENT)(v17 + 64), 0, 0);
      v2 = 1;
      CmpNotifyMachineHiveLoaded(3u);
      ExReleasePushLockEx((ULONG_PTR)(v17 + 88), 0LL);
      if ( !byte_140C010C8 || !CmFastBoot )
        goto LABEL_49;
      CmpUnlockRegistry();
      ExpRefreshSystemTime();
      PsBootPhaseComplete();
LABEL_53:
      v2 = 0;
LABEL_54:
      v17 += 200;
    }
    if ( v16 )
    {
      v12 = (PVOID *)TransientPoolWithTag;
      WaitBlockArray = (struct _KWAIT_BLOCK *)Privileges;
      continue;
    }
    break;
  }
  CmpLockRegistryExclusive();
  CmpSpecialBootCondition = 0;
  if ( BYTE4(NlsMbCodePageTag) || (v31 = 1, CmVEEnabled != 1) )
    v31 = 0;
  CmpVEEnabled = v31;
  CmpUnlockRegistry();
  if ( Event )
  {
    KiStackAttachProcess(PsInitialSystemProcess, 0, (__int64)v45);
    CmpInitCmRM(0LL, CmpInitRmLogOnLoad);
    KiUnstackDetachProcess((__int64)v45, 0LL);
    if ( CmRmSystem )
    {
      TmEnableCallbacks(*((PKRESOURCEMANAGER *)CmRmSystem + 7), (PTM_RM_NOTIFICATION)CmKtmNotification, CmRmSystem);
      CmRmFinalizeRecovery((__int64)CmRmSystem);
    }
    CmpLockRegistryExclusive();
    CmpMountPreloadedHives();
    CmpInterlockedFunction();
    CmpUnlockRegistry();
    v32 = 0;
    v33 = &qword_140C00F88;
    do
    {
      ExAcquirePushLockExclusiveEx((ULONG_PTR)v33, 0LL);
      KeSetEvent((PRKEVENT)v33 - 1, 0, 0);
      CmpNotifyMachineHiveLoaded(v32);
      ExReleasePushLockEx((ULONG_PTR)v33, 0LL);
      ++v32;
      v33 += 25;
    }
    while ( v32 < 7 );
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
LABEL_80:
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
