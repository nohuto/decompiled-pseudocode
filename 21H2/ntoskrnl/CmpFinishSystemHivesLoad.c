/*
 * XREFs of CmpFinishSystemHivesLoad @ 0x1407A72B0
 * Callers:
 *     <none>
 * Callees:
 *     CmSiFreeMemory @ 0x140201A30 (CmSiFreeMemory.c)
 *     CmpAllocateTransientPoolWithTag @ 0x140206F90 (CmpAllocateTransientPoolWithTag.c)
 *     KiUnstackDetachProcess @ 0x140207000 (KiUnstackDetachProcess.c)
 *     KeWaitForMultipleObjects @ 0x14024BB90 (KeWaitForMultipleObjects.c)
 *     KiStackAttachProcess @ 0x14025C2E0 (KiStackAttachProcess.c)
 *     RtlAppendUnicodeToString @ 0x140265A40 (RtlAppendUnicodeToString.c)
 *     KeSetEvent @ 0x1403435A0 (KeSetEvent.c)
 *     KeWaitForSingleObject @ 0x140345770 (KeWaitForSingleObject.c)
 *     ExAcquirePushLockExclusiveEx @ 0x14034A990 (ExAcquirePushLockExclusiveEx.c)
 *     ExReleasePushLockEx @ 0x14034AE90 (ExReleasePushLockEx.c)
 *     CmpRecheckHiveVolumePolicy @ 0x140362080 (CmpRecheckHiveVolumePolicy.c)
 *     RtlUnicodeStringValidateDestWorker @ 0x14036F020 (RtlUnicodeStringValidateDestWorker.c)
 *     CmpNotifyMachineHiveLoaded @ 0x1403B7E80 (CmpNotifyMachineHiveLoaded.c)
 *     __security_check_cookie @ 0x1403D0460 (__security_check_cookie.c)
 *     ZwClose @ 0x1403FA580 (ZwClose.c)
 *     ZwCreateKey @ 0x1403FA740 (ZwCreateKey.c)
 *     KeBugCheckEx @ 0x1403FDEF0 (KeBugCheckEx.c)
 *     memset @ 0x140414200 (memset.c)
 *     CmpFlushHive @ 0x14062A0D8 (CmpFlushHive.c)
 *     CmpLockRegistryExclusive @ 0x14067278C (CmpLockRegistryExclusive.c)
 *     CmpAddToHiveFileList @ 0x1406BF09C (CmpAddToHiveFileList.c)
 *     CmRmFinalizeRecovery @ 0x1406BF8BC (CmRmFinalizeRecovery.c)
 *     CmpUnlockRegistry @ 0x1406F5ED0 (CmpUnlockRegistry.c)
 *     CmpInitCmRM @ 0x140716078 (CmpInitCmRM.c)
 *     CmpLinkHiveToMaster @ 0x14071E230 (CmpLinkHiveToMaster.c)
 *     CmpLinkKeyToHive @ 0x1407A7AC0 (CmpLinkKeyToHive.c)
 *     CmpCreatePerfKeys @ 0x1407A7BC0 (CmpCreatePerfKeys.c)
 *     CmpSetVersionData @ 0x1407A7E2C (CmpSetVersionData.c)
 *     CmpHiveRootSecurityDescriptor @ 0x1407A841C (CmpHiveRootSecurityDescriptor.c)
 *     PsBootPhaseComplete @ 0x1407A88CC (PsBootPhaseComplete.c)
 *     ExpRefreshSystemTime @ 0x1407A909C (ExpRefreshSystemTime.c)
 *     CmpInterlockedFunction @ 0x1407AAAB0 (CmpInterlockedFunction.c)
 *     CmpMountPreloadedHives @ 0x1407AABF4 (CmpMountPreloadedHives.c)
 *     ExFreePoolWithTag @ 0x1409B4010 (ExFreePoolWithTag.c)
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
  char v17; // r13
  char *v18; // rdi
  unsigned int i; // esi
  const WCHAR *v20; // rdx
  __int64 v21; // rdx
  __int64 v22; // r8
  struct _LOOKASIDE_LIST_EX *v23; // r9
  int v24; // eax
  _QWORD *v25; // rcx
  _QWORD *v26; // rax
  PVOID v27; // rcx
  const WCHAR *v28; // rdx
  const WCHAR *v29; // rcx
  unsigned int v30; // esi
  char *v31; // rdi
  char v32; // al
  _DWORD *v33; // r9
  unsigned int v34; // edi
  ULONG_PTR *v35; // rbx
  PLARGE_INTEGER Timeout; // [rsp+28h] [rbp-E0h]
  ULONG Alertable; // [rsp+30h] [rbp-D8h]
  UNICODE_STRING DestinationString; // [rsp+60h] [rbp-A8h] BYREF
  char *v39; // [rsp+70h] [rbp-98h]
  size_t pcchDest; // [rsp+78h] [rbp-90h] BYREF
  wchar_t *ppszDest; // [rsp+80h] [rbp-88h] BYREF
  HANDLE KeyHandle; // [rsp+88h] [rbp-80h] BYREF
  PVOID P; // [rsp+90h] [rbp-78h]
  PPRIVILEGE_SET Privileges; // [rsp+98h] [rbp-70h]
  PPRIVILEGE_SET TransientPoolWithTag; // [rsp+A0h] [rbp-68h]
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+A8h] [rbp-60h] BYREF
  _OWORD v47[3]; // [rsp+D8h] [rbp-30h] BYREF
  _OWORD v48[27]; // [rsp+108h] [rbp+0h] BYREF
  char v49; // [rsp+2B8h] [rbp+1B0h] BYREF

  v2 = 0;
  KeyHandle = 0LL;
  memset(&ObjectAttributes, 0, sizeof(ObjectAttributes));
  memset(v47, 0, sizeof(v47));
  memset(v48, 0, sizeof(v48));
  CmpMountThread = (__int64)KeGetCurrentThread();
  BYTE1(NlsMbCodePageTag) = 0;
  DestinationString.Buffer = (wchar_t *)0x800000;
  ppszDest = 0LL;
  pcchDest = 0LL;
  v39 = &v49;
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
    KiStackAttachProcess(PsInitialSystemProcess, 0LL, (__int64)v47, v16);
    CmpInitCmRM(0LL, CmpInitRmLogOnLoad);
    KiUnstackDetachProcess((__int64)v47, 0);
    if ( CmRmSystem )
    {
      TmEnableCallbacks(*((PKRESOURCEMANAGER *)CmRmSystem + 7), (PTM_RM_NOTIFICATION)CmKtmNotification, CmRmSystem);
      CmRmFinalizeRecovery((__int64)CmRmSystem);
    }
  }
  while ( 2 )
  {
    KeWaitForMultipleObjects(7u, v12, WaitAny, Executive, 0, 0, 0LL, WaitBlockArray);
    v17 = 0;
    v18 = (char *)&unk_140C00F30;
    for ( i = 0; i < 7; ++i )
    {
      if ( v18[8] )
        goto LABEL_54;
      if ( !v18[9] )
      {
        v17 = 1;
        goto LABEL_54;
      }
      v20 = (const WCHAR *)*((_QWORD *)v18 - 5);
      LOWORD(DestinationString.Buffer) = Buffer;
      RtlAppendUnicodeToString((PUNICODE_STRING)&DestinationString.Buffer, v20);
      RtlAppendUnicodeToString((PUNICODE_STRING)&DestinationString.Buffer, *((PCWSTR *)v18 - 4));
      CmpLockRegistryExclusive();
      if ( !*((_QWORD *)v18 - 3) )
      {
        if ( !*(_QWORD *)v18 )
          goto LABEL_32;
        v24 = CmpLinkHiveToMaster(
                (__int64)&DestinationString.Buffer,
                0LL,
                *(_QWORD *)v18,
                v18[11],
                *((_DWORD *)v18 - 2),
                0,
                0LL,
                (__int64)P,
                0LL,
                0LL,
                1,
                v48);
        if ( v24 < 0 )
        {
          if ( (CmpShutdownRundown & 1) == 0 )
            KeBugCheckEx(0x73u, 1uLL, v24, i, (ULONG_PTR)&DestinationString.Buffer);
          CmpLoadingSystemHivesActive = 0;
          CmpMountThread = 0LL;
          CmpUnlockRegistry();
          v30 = 0;
          v31 = (char *)&unk_140C00F38;
          do
          {
            if ( *((_DWORD *)v31 + 3) && !*v31 )
            {
              if ( !v31[1] )
                KeWaitForSingleObject(v31 + 32, Executive, 0, 0, 0LL);
              ExAcquirePushLockExclusiveEx((ULONG_PTR)(v31 + 80), 0LL);
              KeSetEvent((PRKEVENT)(v31 + 56), 0, 0);
              CmpNotifyMachineHiveLoaded(v30);
              ExReleasePushLockEx((ULONG_PTR)(v31 + 80), 0LL);
            }
            ++v30;
            v31 += 200;
          }
          while ( v30 < 7 );
          goto LABEL_80;
        }
        ExAcquirePushLockExclusiveEx((ULONG_PTR)&CmpHiveListHeadLock, 0LL);
        v25 = (_QWORD *)qword_140D2E918;
        v26 = (_QWORD *)(*(_QWORD *)v18 + 1600LL);
        if ( *(__int64 **)qword_140D2E918 != &CmpHiveListHead )
          __fastfail(3u);
        *v26 = &CmpHiveListHead;
        v26[1] = v25;
        *v25 = v26;
        qword_140D2E918 = (__int64)v26;
        ExReleasePushLockEx((ULONG_PTR)&CmpHiveListHeadLock, 0LL);
        CmpRecheckHiveVolumePolicy(*(_QWORD *)v18);
        if ( v18[11] )
        {
          *(_DWORD *)(*(_QWORD *)v18 + 160LL) |= 0x20u;
          *(_QWORD *)(*(_QWORD *)v18 + 4208LL) = KeGetCurrentThread();
          CmpUnlockRegistry();
          CmpFlushHive(*(_QWORD *)v18, 4u);
          CmpLockRegistryExclusive();
          *(_DWORD *)(*(_QWORD *)v18 + 160LL) &= ~0x20u;
          *(_QWORD *)(*(_QWORD *)v18 + 4208LL) = 0LL;
        }
        v27 = CmRmSystem;
        if ( CmRmSystem )
        {
          v21 = *(_QWORD *)v18;
          if ( (*(_DWORD *)(*(_QWORD *)v18 + 160LL) & 2) == 0 && !*(_QWORD *)(v21 + 4192) )
          {
            ++*((_DWORD *)CmRmSystem + 16);
            *(_QWORD *)(*(_QWORD *)v18 + 4192LL) = v27;
          }
        }
      }
      if ( *(_QWORD *)v18 )
        CmpAddToHiveFileList(*(_QWORD *)v18, v21, v22, v23);
LABEL_32:
      v18[8] = 1;
      if ( i != 3 )
      {
        switch ( i )
        {
          case 2u:
            CmpUnlockRegistry();
            if ( !Event )
            {
              ExAcquirePushLockExclusiveEx((ULONG_PTR)(v18 + 88), 0LL);
              KeSetEvent((PRKEVENT)(v18 + 64), 0, 0);
              v2 = 1;
              CmpNotifyMachineHiveLoaded(2u);
              ExReleasePushLockEx((ULONG_PTR)(v18 + 88), 0LL);
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
            v28 = L"\\Registry\\Machine\\SAM\\SAM";
            v29 = L"\\Registry\\Machine\\Security\\SAM";
            break;
          case 4u:
            v28 = L"\\Registry\\User\\.Default";
            v29 = L"\\Registry\\User\\S-1-5-18";
            break;
          default:
LABEL_49:
            CmpUnlockRegistry();
LABEL_50:
            if ( !Event && !v2 )
            {
              ExAcquirePushLockExclusiveEx((ULONG_PTR)(v18 + 88), 0LL);
              KeSetEvent((PRKEVENT)(v18 + 64), 0, 0);
              CmpNotifyMachineHiveLoaded(i);
              ExReleasePushLockEx((ULONG_PTR)(v18 + 88), 0LL);
            }
            goto LABEL_53;
        }
        CmpLinkKeyToHive(v29, v28);
        goto LABEL_49;
      }
      if ( Event )
        goto LABEL_49;
      CmpMountPreloadedHives();
      CmpInterlockedFunction();
      ExAcquirePushLockExclusiveEx((ULONG_PTR)(v18 + 88), 0LL);
      KeSetEvent((PRKEVENT)(v18 + 64), 0, 0);
      v2 = 1;
      CmpNotifyMachineHiveLoaded(3u);
      ExReleasePushLockEx((ULONG_PTR)(v18 + 88), 0LL);
      if ( !byte_140C010C8 || !CmFastBoot )
        goto LABEL_49;
      CmpUnlockRegistry();
      ExpRefreshSystemTime();
      PsBootPhaseComplete();
LABEL_53:
      v2 = 0;
LABEL_54:
      v18 += 200;
    }
    if ( v17 )
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
    KiStackAttachProcess(PsInitialSystemProcess, 0LL, (__int64)v47, v33);
    CmpInitCmRM(0LL, CmpInitRmLogOnLoad);
    KiUnstackDetachProcess((__int64)v47, 0);
    if ( CmRmSystem )
    {
      TmEnableCallbacks(*((PKRESOURCEMANAGER *)CmRmSystem + 7), (PTM_RM_NOTIFICATION)CmKtmNotification, CmRmSystem);
      CmRmFinalizeRecovery((__int64)CmRmSystem);
    }
    CmpLockRegistryExclusive();
    CmpMountPreloadedHives();
    CmpInterlockedFunction();
    CmpUnlockRegistry();
    v34 = 0;
    v35 = &qword_140C00F88;
    do
    {
      ExAcquirePushLockExclusiveEx((ULONG_PTR)v35, 0LL);
      KeSetEvent((PRKEVENT)v35 - 1, 0, 0);
      CmpNotifyMachineHiveLoaded(v34);
      ExReleasePushLockEx((ULONG_PTR)v35, 0LL);
      ++v34;
      v35 += 25;
    }
    while ( v34 < 7 );
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
