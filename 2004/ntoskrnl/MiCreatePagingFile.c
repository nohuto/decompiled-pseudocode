/*
 * XREFs of MiCreatePagingFile @ 0x1407A267C
 * Callers:
 *     NtManagePartition @ 0x14061CA20 (NtManagePartition.c)
 *     NtCreatePagingFile @ 0x1407A2640 (NtCreatePagingFile.c)
 * Callees:
 *     PsIsCurrentThreadInServerSilo @ 0x140205DF0 (PsIsCurrentThreadInServerSilo.c)
 *     ExAcquirePushLockExclusiveEx @ 0x140207AC0 (ExAcquirePushLockExclusiveEx.c)
 *     KiLeaveGuardedRegionUnsafe @ 0x140207EC0 (KiLeaveGuardedRegionUnsafe.c)
 *     HalPutDmaAdapter @ 0x140208270 (HalPutDmaAdapter.c)
 *     KeAbPostRelease @ 0x14020ACF0 (KeAbPostRelease.c)
 *     MiReturnCommit @ 0x140224390 (MiReturnCommit.c)
 *     MiAllocatePool @ 0x140247F80 (MiAllocatePool.c)
 *     ExfTryToWakePushLock @ 0x1402749E0 (ExfTryToWakePushLock.c)
 *     RtlLengthSid @ 0x14027DBB0 (RtlLengthSid.c)
 *     IoGetRelatedDeviceObject @ 0x14028F6E0 (IoGetRelatedDeviceObject.c)
 *     MiChargeCommit @ 0x1402ACF70 (MiChargeCommit.c)
 *     MiIncreaseCommitLimits @ 0x1403BCAD8 (MiIncreaseCommitLimits.c)
 *     MiReservePageHash @ 0x1403BD028 (MiReservePageHash.c)
 *     MiCheckPageFileMapping @ 0x1403BD0B8 (MiCheckPageFileMapping.c)
 *     ZwSetInformationFile @ 0x1403F3AA0 (ZwSetInformationFile.c)
 *     ZwSetSecurityObject @ 0x1403F6AA0 (ZwSetSecurityObject.c)
 *     memmove @ 0x140409FC0 (memmove.c)
 *     MiCheckAndUpdatePagingFileMinimum @ 0x14053DAF8 (MiCheckAndUpdatePagingFileMinimum.c)
 *     MiExtendPagingFileMaximum @ 0x14053DBC0 (MiExtendPagingFileMaximum.c)
 *     MiIssuePageExtendRequest @ 0x14053E474 (MiIssuePageExtendRequest.c)
 *     MiReduceCommitLimits @ 0x14054B19C (MiReduceCommitLimits.c)
 *     ObReferenceObjectByHandle @ 0x1405F5C90 (ObReferenceObjectByHandle.c)
 *     ObCloseHandle @ 0x140602510 (ObCloseHandle.c)
 *     MiEnablePartitionMappedWrites @ 0x14060E570 (MiEnablePartitionMappedWrites.c)
 *     IoCreateFile @ 0x140615990 (IoCreateFile.c)
 *     RtlCreateSecurityDescriptor @ 0x14065E650 (RtlCreateSecurityDescriptor.c)
 *     SeSinglePrivilegeCheck @ 0x140667BA0 (SeSinglePrivilegeCheck.c)
 *     RtlSetDaclSecurityDescriptor @ 0x14066A940 (RtlSetDaclSecurityDescriptor.c)
 *     RtlCreateAcl @ 0x14066AAE0 (RtlCreateAcl.c)
 *     RtlAddAccessAllowedAce @ 0x1406BB620 (RtlAddAccessAllowedAce.c)
 *     IoQueryVolumeInformation @ 0x14070F520 (IoQueryVolumeInformation.c)
 *     ExRaiseDatatypeMisalignment @ 0x140769830 (ExRaiseDatatypeMisalignment.c)
 *     FsRtlIssueFileNotificationFsctl @ 0x14077B2D4 (FsRtlIssueFileNotificationFsctl.c)
 *     MiInsertPageFileInList @ 0x1407A3030 (MiInsertPageFileInList.c)
 *     MiCreatePagefile @ 0x1407A32B0 (MiCreatePagefile.c)
 *     MiCreatePageFileSpaceBitmaps @ 0x1407A35F4 (MiCreatePageFileSpaceBitmaps.c)
 *     MiZeroPageFileFirstPage @ 0x1407A3668 (MiZeroPageFileFirstPage.c)
 *     IoInitializeCrashDump @ 0x1407A37B4 (IoInitializeCrashDump.c)
 *     SmpSystemStoreCreate @ 0x1407BBF70 (SmpSystemStoreCreate.c)
 *     PpPagePathAssign @ 0x14089DEA0 (PpPagePathAssign.c)
 *     PpPagePathRelease @ 0x14089DEB8 (PpPagePathRelease.c)
 *     MiDeletePagefile @ 0x1408CCE8C (MiDeletePagefile.c)
 *     ExFreePoolWithTag @ 0x1409B1140 (ExFreePoolWithTag.c)
 */

__int64 __fastcall MiCreatePagingFile(
        _OWORD *a1,
        LARGE_INTEGER *a2,
        unsigned __int64 *a3,
        KPROCESSOR_MODE a4,
        int a5,
        __int64 a6)
{
  __int64 QuadPart; // rax
  unsigned __int64 v11; // rbx
  PVOID Pool; // rax
  PVOID v13; // r12
  unsigned __int16 v14; // cx
  ACL *v15; // rdi
  int Acl; // r15d
  ULONG v17; // edi
  ULONG v18; // edi
  ACL *v19; // rax
  ULONG v20; // edx
  unsigned int v21; // esi
  struct _FILE_OBJECT *v22; // rdi
  unsigned __int64 DeviceType; // rcx
  __int64 v24; // rax
  __int64 v25; // rdx
  __int64 Pagefile; // rax
  __int64 v27; // rbx
  int inserted; // edi
  __int64 v30; // r12
  __int64 v31; // r8
  __int64 v32; // rcx
  unsigned __int64 v33; // r9
  unsigned int v34; // r13d
  __int64 v35; // rdx
  unsigned __int64 v36; // rbx
  unsigned __int64 v37; // r14
  unsigned __int64 v38; // rdx
  unsigned __int64 v39; // rbx
  __int64 v40; // r14
  volatile signed __int64 *v41; // rsi
  ULONG_PTR v42; // r13
  __int64 PageFileSpaceBitmaps; // rax
  int v44; // eax
  HANDLE FileHandle; // [rsp+70h] [rbp-118h] BYREF
  unsigned int v46; // [rsp+78h] [rbp-110h]
  __int64 v47; // [rsp+80h] [rbp-108h]
  ACL *v48; // [rsp+88h] [rbp-100h]
  LARGE_INTEGER AllocationSize; // [rsp+90h] [rbp-F8h] BYREF
  void *Src[2]; // [rsp+98h] [rbp-F0h] BYREF
  ULONG ReturnedLength; // [rsp+A8h] [rbp-E0h] BYREF
  PVOID v52; // [rsp+B0h] [rbp-D8h] BYREF
  PVOID P; // [rsp+B8h] [rbp-D0h]
  struct _IO_STATUS_BLOCK IoStatusBlock; // [rsp+C0h] [rbp-C8h] BYREF
  unsigned __int64 FileInformation; // [rsp+D0h] [rbp-B8h] BYREF
  PVOID Object; // [rsp+D8h] [rbp-B0h] BYREF
  __int64 FsInformation; // [rsp+E0h] [rbp-A8h] BYREF
  unsigned __int64 v58; // [rsp+E8h] [rbp-A0h]
  PADAPTER_OBJECT DmaAdapter; // [rsp+F0h] [rbp-98h]
  unsigned __int64 v60; // [rsp+F8h] [rbp-90h]
  struct _KTHREAD *CurrentThread; // [rsp+100h] [rbp-88h]
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+108h] [rbp-80h] BYREF
  _BYTE SecurityDescriptor[32]; // [rsp+138h] [rbp-50h] BYREF
  __int64 v64; // [rsp+158h] [rbp-30h]
  __int128 v65; // [rsp+160h] [rbp-28h]

  memset(&ObjectAttributes, 0, sizeof(ObjectAttributes));
  IoStatusBlock = 0LL;
  *(_OWORD *)Src = 0LL;
  AllocationSize.QuadPart = 0LL;
  FileInformation = 0LL;
  FsInformation = 0LL;
  ReturnedLength = 0;
  memset(SecurityDescriptor, 0, sizeof(SecurityDescriptor));
  v64 = 0LL;
  if ( (ULONG_PTR *)a6 != &MiSystemPartition && a5
    || (a5 & 0x7FFFFF) != 0
    || a5 < 0 && (a5 & 0x42000000) != 0
    || (a5 & 0xFF7FFFFF) != 0 && (a5 & 0x800000) != 0 )
  {
    return 3221225714LL;
  }
  if ( a4 )
  {
    if ( !SeSinglePrivilegeCheck(SeCreatePagefilePrivilege, a4) || PsIsCurrentThreadInServerSilo() )
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
  v58 = *a3;
  v11 = v58;
  if ( v58 > 0xFFFFFFFE000LL || QuadPart > (__int64)v58 )
    return 3221225713LL;
  *(_OWORD *)Src = *a1;
  WORD1(Src[0]) = Src[0];
  if ( (unsigned __int16)(LOWORD(Src[0]) - 1) > 0xFFu )
    return 3221225523LL;
  Pool = MiAllocatePool(256, LOWORD(Src[0]), 0x20206D4Du);
  v13 = Pool;
  P = Pool;
  if ( !Pool )
    return 3221225626LL;
  if ( a4 )
  {
    v14 = (unsigned __int16)Src[0];
    if ( LOWORD(Src[0])
      && ((char *)Src[1] + LOWORD(Src[0]) > (void *)0x7FFFFFFF0000LL || (char *)Src[1] + LOWORD(Src[0]) < Src[1]) )
    {
      MEMORY[0x7FFFFFFF0000] = 0;
      v14 = (unsigned __int16)Src[0];
    }
    memmove(Pool, Src[1], v14);
  }
  else
  {
    memmove(Pool, Src[1], LOWORD(Src[0]));
  }
  Src[1] = v13;
  if ( (a5 & 0x800000) != 0 )
  {
    ExFreePoolWithTag(v13, 0);
    return 3221225659LL;
  }
  v15 = 0LL;
  v47 = 0LL;
  FileHandle = 0LL;
  Acl = RtlCreateSecurityDescriptor(SecurityDescriptor, 1u);
  if ( Acl < 0 )
    goto LABEL_86;
  v17 = RtlLengthSid(SeAliasAdminsSid);
  v18 = RtlLengthSid(SeLocalSystemSid) + 32 + v17;
  v19 = (ACL *)MiAllocatePool(256, v18, 0x6C636144u);
  v48 = v19;
  if ( !v19 )
  {
    Acl = -1073741670;
    v15 = 0LL;
    goto LABEL_86;
  }
  v20 = v18;
  v15 = v19;
  Acl = RtlCreateAcl(v19, v20, 2u);
  if ( Acl < 0
    || (Acl = RtlAddAccessAllowedAce(v15, 2u, 0x1F01FFu, SeAliasAdminsSid), Acl < 0)
    || (Acl = RtlAddAccessAllowedAce(v15, 2u, 0x1F01FFu, SeLocalSystemSid), Acl < 0)
    || (Acl = RtlSetDaclSecurityDescriptor(SecurityDescriptor, 1u, v15, 0), Acl < 0) )
  {
LABEL_86:
    if ( FileHandle )
      ObCloseHandle(FileHandle, 0);
    goto LABEL_88;
  }
  if ( a5 < 0 )
  {
    v21 = 3;
  }
  else
  {
    v21 = 0;
    if ( (a5 & 0x2000000) != 0 )
      v21 = 2;
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
        ExFreePoolWithTag(v15, 0);
        v15 = 0LL;
        v48 = 0LL;
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
              v22 = (struct _FILE_OBJECT *)Object;
              DmaAdapter = (PADAPTER_OBJECT)Object;
              if ( Acl < 0 )
              {
                v15 = 0LL;
              }
              else
              {
                DeviceType = IoGetRelatedDeviceObject((PFILE_OBJECT)Object)->DeviceType;
                if ( (unsigned int)DeviceType > 0x36 || (v24 = 0x60000000100100LL, !_bittest64(&v24, DeviceType)) )
                {
                  Acl = -1073741489;
                  goto LABEL_83;
                }
                Acl = MiCheckPageFileMapping((__int64)v22);
                if ( Acl >= 0 )
                {
                  Acl = IoQueryVolumeInformation(v22, FileFsDeviceInformation, 8u, &FsInformation, &ReturnedLength);
                  if ( Acl >= 0 )
                  {
                    if ( (FsInformation & 0x400000000LL) != 0 )
                    {
                      Acl = -1073741468;
                      goto LABEL_83;
                    }
                    Acl = PpPagePathAssign(v22);
                    if ( Acl < 0 )
                      goto LABEL_83;
                    FsRtlIssueFileNotificationFsctl(v22, v25, (__int128 *)&FILE_TYPE_NOTIFICATION_GUID_PAGE_FILE);
                    if ( (ULONG_PTR *)a6 == &MiSystemPartition )
                    {
                      Acl = MiZeroPageFileFirstPage(v22);
                      if ( Acl < 0 )
                      {
                        PpPagePathRelease(v22);
                        goto LABEL_83;
                      }
                    }
                    Pagefile = MiCreatePagefile(
                                 a6,
                                 (_DWORD)v22,
                                 (_DWORD)FileHandle,
                                 (unsigned __int64)AllocationSize.QuadPart >> 12,
                                 v11 >> 12,
                                 (__int64)Src,
                                 a5,
                                 1);
                    v27 = Pagefile;
                    if ( Pagefile )
                    {
                      inserted = MiInsertPageFileInList(Pagefile);
                      if ( inserted < 0 )
                      {
                        MiDeletePagefile((PVOID)v27);
                        return (unsigned int)inserted;
                      }
                      else
                      {
                        if ( (ULONG_PTR *)a6 == &MiSystemPartition )
                        {
                          if ( (*(_BYTE *)(v27 + 204) & 0xF) == 0 && (dword_140D24180 & 3) != 0 )
                            SmpSystemStoreCreate();
                          if ( !byte_140C4E4C0 && (*(_BYTE *)(v27 + 204) & 0x10) == 0 )
                          {
                            v65 = *(_OWORD *)(v27 + 96);
                            byte_140C4E4C0 = IoInitializeCrashDump(FileHandle);
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
                v15 = v48;
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
    v52 = 0LL;
    Acl = ObReferenceObjectByHandle(FileHandle, 3u, (POBJECT_TYPE)IoFileObjectType, 0, &v52, 0LL);
    DmaAdapter = (PADAPTER_OBJECT)v52;
    if ( Acl >= 0 )
    {
      v30 = 0LL;
      CurrentThread = KeGetCurrentThread();
      --CurrentThread->SpecialApcDisable;
      ExAcquirePushLockExclusiveEx(a6 + 1040, 0LL);
      v32 = a6;
      v33 = *(unsigned int *)(a6 + 6936);
      v34 = 0;
      v46 = 0;
      if ( !(_DWORD)v33 )
        goto LABEL_70;
      while ( 1 )
      {
        v35 = *(_QWORD *)(v32 + 8LL * v34 + 6944);
        v31 = *(unsigned __int16 *)(v35 + 204);
        if ( (v31 & 0x840) == 0 )
        {
          if ( *(_QWORD *)(*(_QWORD *)(v35 + 56) + 40LL) == *((_QWORD *)v52 + 5) )
          {
            if ( ((~(_WORD)v31 & 0x10) != 0) == ((v21 & 1) == 0) )
            {
              v30 = *(_QWORD *)(v32 + 8LL * v34 + 6944);
LABEL_70:
              if ( v30 )
              {
                v36 = v58 >> 12;
                v37 = (unsigned __int64)AllocationSize.QuadPart >> 12;
                v60 = (unsigned int)((unsigned __int64)AllocationSize.QuadPart >> 12);
                if ( *(_QWORD *)(v30 + 16) > v60 )
                {
                  Acl = -1073741584;
                }
                else
                {
                  v38 = *(_QWORD *)(v30 + 8);
                  if ( v38 <= (unsigned int)v36 )
                  {
                    if ( v38 >= (unsigned int)v36 )
                      goto LABEL_74;
                    if ( (*(_BYTE *)(v30 + 204) & 0x10) != 0
                      || (v47 = (unsigned int)v36 - v38, (unsigned int)MiIncreaseCommitLimits(a6, 0LL, v47, 0, 0LL)) )
                    {
                      v42 = 0LL;
                      if ( (!*(_QWORD *)(v30 + 216) || (v42 = MiReservePageHash(v36, v38, v31, v33)) != 0)
                        && (PageFileSpaceBitmaps = MiCreatePageFileSpaceBitmaps((unsigned int)v36)) != 0 )
                      {
                        MiExtendPagingFileMaximum(v30, PageFileSpaceBitmaps, v42);
                        if ( (unsigned __int64)(*(_QWORD *)(a6 + 7464) + 100LL) > *(_QWORD *)(a6 + 7592)
                          && (unsigned int)MiChargeCommit(a6, 0xC8uLL, 0) == 1 )
                        {
                          MiReturnCommit(a6, 200LL);
                        }
                        v34 = v46;
LABEL_74:
                        v39 = v60;
                        if ( v60 > *(_QWORD *)(v30 + 16) )
                        {
                          while ( v39 <= *(_QWORD *)v30 )
                          {
                            if ( (unsigned int)MiCheckAndUpdatePagingFileMinimum(v30, v37) == 1 )
                              goto LABEL_75;
                          }
                          MiIssuePageExtendRequest(a6, v39 - *(_QWORD *)v30, 1, v34);
                          v44 = Acl;
                          if ( *(_QWORD *)(v30 + 16) < v39 )
                            v44 = -1073741670;
                          Acl = v44;
                        }
LABEL_75:
                        if ( v21 >= 2 )
                          *(_WORD *)(v30 + 204) |= 0x80u;
                      }
                      else
                      {
                        Acl = -1073741670;
                      }
                      v40 = v47;
                    }
                    else
                    {
                      v40 = 0LL;
                      Acl = -1073741583;
                    }
LABEL_78:
                    v41 = (volatile signed __int64 *)(a6 + 1040);
                    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)(a6 + 1040), 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
                      ExfTryToWakePushLock(v41);
                    KeAbPostRelease((ULONG_PTR)v41);
                    KiLeaveGuardedRegionUnsafe((__int64)CurrentThread);
                    if ( v40 )
                      MiReduceCommitLimits((_QWORD *)a6, 0LL, v40);
                    v13 = P;
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
            v40 = 0LL;
            goto LABEL_78;
          }
          v32 = a6;
        }
        v46 = ++v34;
        if ( v34 >= (unsigned int)v33 )
          goto LABEL_70;
      }
    }
    goto LABEL_86;
  }
  FileHandle = 0LL;
LABEL_88:
  if ( v15 )
    ExFreePoolWithTag(v15, 0);
  ExFreePoolWithTag(v13, 0);
  return (unsigned int)Acl;
}
