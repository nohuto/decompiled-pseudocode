/*
 * XREFs of MiCreatePagingFile @ 0x1407B6B3C
 * Callers:
 *     NtManagePartition @ 0x14067CAC0 (NtManagePartition.c)
 *     NtCreatePagingFile @ 0x1407B6B00 (NtCreatePagingFile.c)
 * Callees:
 *     HalPutDmaAdapter @ 0x14023FBE0 (HalPutDmaAdapter.c)
 *     RtlLengthSid @ 0x14026CA10 (RtlLengthSid.c)
 *     MiAllocatePool @ 0x14027C2E0 (MiAllocatePool.c)
 *     MiChargeCommit @ 0x1402BF3D0 (MiChargeCommit.c)
 *     ExfTryToWakePushLock @ 0x1402FC2C0 (ExfTryToWakePushLock.c)
 *     MiReturnCommit @ 0x140322FF0 (MiReturnCommit.c)
 *     KeAbPostRelease @ 0x1403539D0 (KeAbPostRelease.c)
 *     ExAcquirePushLockExclusiveEx @ 0x1403556E0 (ExAcquirePushLockExclusiveEx.c)
 *     KiLeaveGuardedRegionUnsafe @ 0x140355AE0 (KiLeaveGuardedRegionUnsafe.c)
 *     PsIsCurrentThreadInServerSilo @ 0x14035BF80 (PsIsCurrentThreadInServerSilo.c)
 *     IoGetRelatedDeviceObject @ 0x14035C670 (IoGetRelatedDeviceObject.c)
 *     MiIncreaseCommitLimits @ 0x1403BFBD8 (MiIncreaseCommitLimits.c)
 *     MiReservePageHash @ 0x1403C0128 (MiReservePageHash.c)
 *     MiCheckPageFileMapping @ 0x1403C01B8 (MiCheckPageFileMapping.c)
 *     ZwSetInformationFile @ 0x1403FAA60 (ZwSetInformationFile.c)
 *     ZwSetSecurityObject @ 0x1403FDAA0 (ZwSetSecurityObject.c)
 *     memmove @ 0x140414040 (memmove.c)
 *     MiCheckAndUpdatePagingFileMinimum @ 0x140543208 (MiCheckAndUpdatePagingFileMinimum.c)
 *     MiExtendPagingFileMaximum @ 0x1405432D0 (MiExtendPagingFileMaximum.c)
 *     MiIssuePageExtendRequest @ 0x140543B84 (MiIssuePageExtendRequest.c)
 *     MiReduceCommitLimits @ 0x14055087C (MiReduceCommitLimits.c)
 *     RtlSetDaclSecurityDescriptor @ 0x140655320 (RtlSetDaclSecurityDescriptor.c)
 *     RtlCreateAcl @ 0x140655390 (RtlCreateAcl.c)
 *     RtlAddAccessAllowedAce @ 0x14066A2B0 (RtlAddAccessAllowedAce.c)
 *     IoQueryVolumeInformation @ 0x140674610 (IoQueryVolumeInformation.c)
 *     ObCloseHandle @ 0x1406847E0 (ObCloseHandle.c)
 *     SeSinglePrivilegeCheck @ 0x140693750 (SeSinglePrivilegeCheck.c)
 *     IoCreateFile @ 0x14069AC80 (IoCreateFile.c)
 *     MiEnablePartitionMappedWrites @ 0x1406AA564 (MiEnablePartitionMappedWrites.c)
 *     RtlCreateSecurityDescriptor @ 0x1406F2C90 (RtlCreateSecurityDescriptor.c)
 *     ObReferenceObjectByHandle @ 0x140707FA0 (ObReferenceObjectByHandle.c)
 *     ExRaiseDatatypeMisalignment @ 0x14077BFB0 (ExRaiseDatatypeMisalignment.c)
 *     FsRtlIssueFileNotificationFsctl @ 0x14078D874 (FsRtlIssueFileNotificationFsctl.c)
 *     MiInsertPageFileInList @ 0x1407B74F0 (MiInsertPageFileInList.c)
 *     MiCreatePagefile @ 0x1407B7770 (MiCreatePagefile.c)
 *     MiCreatePageFileSpaceBitmaps @ 0x1407B7AB4 (MiCreatePageFileSpaceBitmaps.c)
 *     MiZeroPageFileFirstPage @ 0x1407B7B28 (MiZeroPageFileFirstPage.c)
 *     IoInitializeCrashDump @ 0x1407B7C74 (IoInitializeCrashDump.c)
 *     SmpSystemStoreCreate @ 0x1407CEC30 (SmpSystemStoreCreate.c)
 *     PpPagePathAssign @ 0x1408A1100 (PpPagePathAssign.c)
 *     PpPagePathRelease @ 0x1408A1118 (PpPagePathRelease.c)
 *     MiDeletePagefile @ 0x1408D05EC (MiDeletePagefile.c)
 *     ExFreePoolWithTag @ 0x1409B5010 (ExFreePoolWithTag.c)
 */

__int64 __fastcall MiCreatePagingFile(
        _OWORD *a1,
        LARGE_INTEGER *a2,
        unsigned __int64 *a3,
        KPROCESSOR_MODE a4,
        int a5,
        __int64 a6)
{
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 QuadPart; // rax
  unsigned __int64 v13; // rbx
  PVOID Pool; // rax
  PVOID v15; // r12
  unsigned __int16 v16; // cx
  ACL *v17; // rdi
  int Acl; // r15d
  ULONG v19; // edi
  ULONG v20; // edi
  ACL *v21; // rax
  ULONG v22; // edx
  unsigned int v23; // esi
  struct _FILE_OBJECT *v24; // rdi
  unsigned __int64 DeviceType; // rcx
  __int64 v26; // rax
  __int64 v27; // rdx
  __int64 Pagefile; // rax
  __int64 v29; // rbx
  int inserted; // edi
  __int64 v32; // r12
  __int64 v33; // r8
  __int64 v34; // rcx
  unsigned __int64 v35; // r9
  unsigned int v36; // r13d
  __int64 v37; // rdx
  unsigned __int64 v38; // rbx
  unsigned __int64 v39; // r14
  unsigned __int64 v40; // rdx
  unsigned __int64 v41; // rbx
  __int64 v42; // r14
  ULONG_PTR v43; // rsi
  ULONG_PTR v44; // r13
  __int64 PageFileSpaceBitmaps; // rax
  int v46; // eax
  HANDLE FileHandle; // [rsp+70h] [rbp-118h] BYREF
  unsigned int v48; // [rsp+78h] [rbp-110h]
  __int64 v49; // [rsp+80h] [rbp-108h]
  ACL *v50; // [rsp+88h] [rbp-100h]
  LARGE_INTEGER AllocationSize; // [rsp+90h] [rbp-F8h] BYREF
  void *Src[2]; // [rsp+98h] [rbp-F0h] BYREF
  ULONG ReturnedLength; // [rsp+A8h] [rbp-E0h] BYREF
  PVOID v54; // [rsp+B0h] [rbp-D8h] BYREF
  PVOID P; // [rsp+B8h] [rbp-D0h]
  struct _IO_STATUS_BLOCK IoStatusBlock; // [rsp+C0h] [rbp-C8h] BYREF
  unsigned __int64 FileInformation; // [rsp+D0h] [rbp-B8h] BYREF
  PVOID Object; // [rsp+D8h] [rbp-B0h] BYREF
  __int64 FsInformation; // [rsp+E0h] [rbp-A8h] BYREF
  unsigned __int64 v60; // [rsp+E8h] [rbp-A0h]
  PADAPTER_OBJECT DmaAdapter; // [rsp+F0h] [rbp-98h]
  unsigned __int64 v62; // [rsp+F8h] [rbp-90h]
  struct _KTHREAD *CurrentThread; // [rsp+100h] [rbp-88h]
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+108h] [rbp-80h] BYREF
  _BYTE SecurityDescriptor[32]; // [rsp+138h] [rbp-50h] BYREF
  __int64 v66; // [rsp+158h] [rbp-30h]
  __int128 v67; // [rsp+160h] [rbp-28h]

  memset(&ObjectAttributes, 0, sizeof(ObjectAttributes));
  IoStatusBlock = 0LL;
  *(_OWORD *)Src = 0LL;
  AllocationSize.QuadPart = 0LL;
  FileInformation = 0LL;
  FsInformation = 0LL;
  ReturnedLength = 0;
  memset(SecurityDescriptor, 0, sizeof(SecurityDescriptor));
  v66 = 0LL;
  if ( (ULONG_PTR *)a6 != &MiSystemPartition && a5
    || (a5 & 0x7FFFFF) != 0
    || a5 < 0 && (a5 & 0x42000000) != 0
    || (a5 & 0xFF7FFFFF) != 0 && (a5 & 0x800000) != 0 )
  {
    return 3221225714LL;
  }
  if ( a4 )
  {
    if ( !SeSinglePrivilegeCheck(SeCreatePagefilePrivilege, a4) || PsIsCurrentThreadInServerSilo(v11, v10) )
      return 3221225569LL;
    if ( ((unsigned __int8)a1 & 3) != 0 || ((unsigned __int8)a3 & 3) != 0 || ((unsigned __int8)a2 & 3) != 0 )
      ExRaiseDatatypeMisalignment();
    QuadPart = a2->QuadPart;
    AllocationSize = *a2;
  }
  else
  {
    QuadPart = a2->QuadPart;
    AllocationSize = *a2;
  }
  if ( (unsigned __int64)QuadPart > 0xFFFFFFFE000LL || QuadPart < 0x100000 )
    return 3221225712LL;
  v60 = *a3;
  v13 = v60;
  if ( v60 > 0xFFFFFFFE000LL || QuadPart > (__int64)v60 )
    return 3221225713LL;
  *(_OWORD *)Src = *a1;
  WORD1(Src[0]) = Src[0];
  if ( (unsigned __int16)(LOWORD(Src[0]) - 1) > 0xFFu )
    return 3221225523LL;
  Pool = MiAllocatePool(256, LOWORD(Src[0]), 0x20206D4Du);
  v15 = Pool;
  P = Pool;
  if ( !Pool )
    return 3221225626LL;
  if ( a4 )
  {
    v16 = (unsigned __int16)Src[0];
    if ( LOWORD(Src[0])
      && ((char *)Src[1] + LOWORD(Src[0]) > (void *)0x7FFFFFFF0000LL || (char *)Src[1] + LOWORD(Src[0]) < Src[1]) )
    {
      MEMORY[0x7FFFFFFF0000] = 0;
      v16 = (unsigned __int16)Src[0];
    }
    memmove(Pool, Src[1], v16);
  }
  else
  {
    memmove(Pool, Src[1], LOWORD(Src[0]));
  }
  Src[1] = v15;
  if ( (a5 & 0x800000) != 0 )
  {
    ExFreePoolWithTag(v15, 0);
    return 3221225659LL;
  }
  v17 = 0LL;
  v49 = 0LL;
  FileHandle = 0LL;
  Acl = RtlCreateSecurityDescriptor(SecurityDescriptor, 1u);
  if ( Acl < 0 )
    goto LABEL_86;
  v19 = RtlLengthSid(SeAliasAdminsSid);
  v20 = RtlLengthSid(SeLocalSystemSid) + 32 + v19;
  v21 = (ACL *)MiAllocatePool(256, v20, 0x6C636144u);
  v50 = v21;
  if ( !v21 )
  {
    Acl = -1073741670;
    v17 = 0LL;
    goto LABEL_86;
  }
  v22 = v20;
  v17 = v21;
  Acl = RtlCreateAcl(v21, v22, 2u);
  if ( Acl < 0
    || (Acl = RtlAddAccessAllowedAce(v17, 2u, 0x1F01FFu, SeAliasAdminsSid), Acl < 0)
    || (Acl = RtlAddAccessAllowedAce(v17, 2u, 0x1F01FFu, SeLocalSystemSid), Acl < 0)
    || (Acl = RtlSetDaclSecurityDescriptor(SecurityDescriptor, 1u, v17, 0), Acl < 0) )
  {
LABEL_86:
    if ( FileHandle )
      ObCloseHandle(FileHandle, 0);
    goto LABEL_88;
  }
  if ( a5 < 0 )
  {
    v23 = 3;
  }
  else
  {
    v23 = 0;
    if ( (a5 & 0x2000000) != 0 )
      v23 = 2;
  }
  ObjectAttributes.Length = 48;
  ObjectAttributes.RootDirectory = 0LL;
  ObjectAttributes.Attributes = 576;
  ObjectAttributes.ObjectName = (PUNICODE_STRING)Src;
  ObjectAttributes.SecurityDescriptor = SecurityDescriptor;
  ObjectAttributes.SecurityQualityOfService = 0LL;
  FileInformation = (AllocationSize.QuadPart + 4095) & 0xFFFFFFFFFFFFF000uLL;
  if ( IoCreateFile(
         &FileHandle,
         0x140003u,
         &ObjectAttributes,
         &IoStatusBlock,
         &AllocationSize,
         6u,
         2u,
         0,
         0x9008u,
         0LL,
         0,
         CreateFileTypeNone,
         0LL,
         0x112u) >= 0 )
  {
    Acl = MiEnablePartitionMappedWrites((_QWORD *)a6);
    if ( Acl >= 0 )
    {
      if ( IoStatusBlock.Status < 0 || (Acl = ZwSetSecurityObject(FileHandle, 4u, SecurityDescriptor), Acl >= 0) )
      {
        ExFreePoolWithTag(v17, 0);
        v17 = 0LL;
        v50 = 0LL;
        Acl = IoStatusBlock.Status;
        if ( IoStatusBlock.Status >= 0 )
        {
          Acl = ZwSetInformationFile(FileHandle, &IoStatusBlock, &FileInformation, 8u, FileEndOfFileInformation);
          if ( Acl >= 0 )
          {
            Acl = IoStatusBlock.Status;
            if ( IoStatusBlock.Status >= 0 )
            {
              Object = 0LL;
              Acl = ObReferenceObjectByHandle(FileHandle, 3u, (POBJECT_TYPE)IoFileObjectType, 0, &Object, 0LL);
              v24 = (struct _FILE_OBJECT *)Object;
              DmaAdapter = (PADAPTER_OBJECT)Object;
              if ( Acl < 0 )
              {
                v17 = 0LL;
              }
              else
              {
                DeviceType = IoGetRelatedDeviceObject((PFILE_OBJECT)Object)->DeviceType;
                if ( (unsigned int)DeviceType > 0x36 || (v26 = 0x60000000100100LL, !_bittest64(&v26, DeviceType)) )
                {
                  Acl = -1073741489;
                  goto LABEL_83;
                }
                Acl = MiCheckPageFileMapping((__int64)v24);
                if ( Acl >= 0 )
                {
                  Acl = IoQueryVolumeInformation(v24, FileFsDeviceInformation, 8u, &FsInformation, &ReturnedLength);
                  if ( Acl >= 0 )
                  {
                    if ( (FsInformation & 0x400000000LL) != 0 )
                    {
                      Acl = -1073741468;
                      goto LABEL_83;
                    }
                    Acl = PpPagePathAssign(v24);
                    if ( Acl < 0 )
                      goto LABEL_83;
                    FsRtlIssueFileNotificationFsctl(v24, v27, (__int128 *)&FILE_TYPE_NOTIFICATION_GUID_PAGE_FILE);
                    if ( (ULONG_PTR *)a6 == &MiSystemPartition )
                    {
                      Acl = MiZeroPageFileFirstPage(v24);
                      if ( Acl < 0 )
                      {
                        PpPagePathRelease(v24);
                        goto LABEL_83;
                      }
                    }
                    Pagefile = MiCreatePagefile(
                                 a6,
                                 (_DWORD)v24,
                                 (_DWORD)FileHandle,
                                 (unsigned __int64)AllocationSize.QuadPart >> 12,
                                 v13 >> 12,
                                 (__int64)Src,
                                 a5,
                                 1);
                    v29 = Pagefile;
                    if ( Pagefile )
                    {
                      inserted = MiInsertPageFileInList(Pagefile);
                      if ( inserted < 0 )
                      {
                        MiDeletePagefile((PVOID)v29);
                        return (unsigned int)inserted;
                      }
                      else
                      {
                        if ( (ULONG_PTR *)a6 == &MiSystemPartition )
                        {
                          if ( (*(_BYTE *)(v29 + 204) & 0xF) == 0 && (dword_140D24180 & 3) != 0 )
                            SmpSystemStoreCreate();
                          if ( !byte_140C4E700 && (*(_BYTE *)(v29 + 204) & 0x10) == 0 )
                          {
                            v67 = *(_OWORD *)(v29 + 96);
                            byte_140C4E700 = IoInitializeCrashDump(FileHandle);
                          }
                        }
                        return 0LL;
                      }
                    }
                    return 3221225626LL;
                  }
                }
LABEL_83:
                if ( DmaAdapter )
                  HalPutDmaAdapter(DmaAdapter);
                v17 = v50;
              }
            }
          }
        }
      }
    }
    goto LABEL_86;
  }
  Acl = IoCreateFile(
          &FileHandle,
          0x100002u,
          &ObjectAttributes,
          &IoStatusBlock,
          &AllocationSize,
          6u,
          3u,
          1u,
          0x8008u,
          0LL,
          0,
          CreateFileTypeNone,
          0LL,
          0x112u);
  if ( Acl >= 0 )
  {
    v54 = 0LL;
    Acl = ObReferenceObjectByHandle(FileHandle, 3u, (POBJECT_TYPE)IoFileObjectType, 0, &v54, 0LL);
    DmaAdapter = (PADAPTER_OBJECT)v54;
    if ( Acl >= 0 )
    {
      v32 = 0LL;
      CurrentThread = KeGetCurrentThread();
      --CurrentThread->SpecialApcDisable;
      ExAcquirePushLockExclusiveEx(a6 + 1040, 0LL);
      v34 = a6;
      v35 = *(unsigned int *)(a6 + 6936);
      v36 = 0;
      v48 = 0;
      if ( !(_DWORD)v35 )
        goto LABEL_70;
      while ( 1 )
      {
        v37 = *(_QWORD *)(v34 + 8LL * v36 + 6944);
        v33 = *(unsigned __int16 *)(v37 + 204);
        if ( (v33 & 0x840) == 0 )
        {
          if ( *(_QWORD *)(*(_QWORD *)(v37 + 56) + 40LL) == *((_QWORD *)v54 + 5) )
          {
            if ( ((~(_WORD)v33 & 0x10) != 0) == ((v23 & 1) == 0) )
            {
              v32 = *(_QWORD *)(v34 + 8LL * v36 + 6944);
LABEL_70:
              if ( v32 )
              {
                v38 = v60 >> 12;
                v39 = (unsigned __int64)AllocationSize.QuadPart >> 12;
                v62 = (unsigned int)((unsigned __int64)AllocationSize.QuadPart >> 12);
                if ( *(_QWORD *)(v32 + 16) > v62 )
                {
                  Acl = -1073741584;
                }
                else
                {
                  v40 = *(_QWORD *)(v32 + 8);
                  if ( v40 <= (unsigned int)v38 )
                  {
                    if ( v40 >= (unsigned int)v38 )
                      goto LABEL_74;
                    if ( (*(_BYTE *)(v32 + 204) & 0x10) != 0
                      || (v49 = (unsigned int)v38 - v40, (unsigned int)MiIncreaseCommitLimits(a6, 0LL, v49, 0, 0LL)) )
                    {
                      v44 = 0LL;
                      if ( (!*(_QWORD *)(v32 + 216) || (v44 = MiReservePageHash(v38, v40, v33, v35)) != 0)
                        && (PageFileSpaceBitmaps = MiCreatePageFileSpaceBitmaps((unsigned int)v38)) != 0 )
                      {
                        MiExtendPagingFileMaximum(v32, PageFileSpaceBitmaps, v44);
                        if ( (unsigned __int64)(*(_QWORD *)(a6 + 7464) + 100LL) > *(_QWORD *)(a6 + 7592)
                          && (unsigned int)MiChargeCommit(a6, 0xC8uLL, 0) == 1 )
                        {
                          MiReturnCommit(a6, 200LL);
                        }
                        v36 = v48;
LABEL_74:
                        v41 = v62;
                        if ( v62 > *(_QWORD *)(v32 + 16) )
                        {
                          while ( v41 <= *(_QWORD *)v32 )
                          {
                            if ( (unsigned int)MiCheckAndUpdatePagingFileMinimum(v32, v39) == 1 )
                              goto LABEL_75;
                          }
                          MiIssuePageExtendRequest(a6, v41 - *(_QWORD *)v32, 1, v36);
                          v46 = Acl;
                          if ( *(_QWORD *)(v32 + 16) < v41 )
                            v46 = -1073741670;
                          Acl = v46;
                        }
LABEL_75:
                        if ( v23 >= 2 )
                          *(_WORD *)(v32 + 204) |= 0x80u;
                      }
                      else
                      {
                        Acl = -1073741670;
                      }
                      v42 = v49;
                    }
                    else
                    {
                      v42 = 0LL;
                      Acl = -1073741583;
                    }
LABEL_78:
                    v43 = a6 + 1040;
                    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)(a6 + 1040), 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
                      ExfTryToWakePushLock(v43);
                    KeAbPostRelease(v43);
                    KiLeaveGuardedRegionUnsafe((__int64)CurrentThread);
                    if ( v42 )
                      MiReduceCommitLimits((_QWORD *)a6, 0LL, v42);
                    v15 = P;
                    goto LABEL_83;
                  }
                  Acl = -1073741583;
                }
              }
              else
              {
                Acl = -1073741275;
              }
            }
            else
            {
              Acl = -1073741811;
            }
            v42 = 0LL;
            goto LABEL_78;
          }
          v34 = a6;
        }
        v48 = ++v36;
        if ( v36 >= (unsigned int)v35 )
          goto LABEL_70;
      }
    }
    goto LABEL_86;
  }
  FileHandle = 0LL;
LABEL_88:
  if ( v17 )
    ExFreePoolWithTag(v17, 0);
  ExFreePoolWithTag(v15, 0);
  return (unsigned int)Acl;
}
