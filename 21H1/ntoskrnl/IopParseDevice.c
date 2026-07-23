/*
 * XREFs of IopParseDevice @ 0x1405FDEC0
 * Callers:
 *     IopParseFile @ 0x1406C5D00 (IopParseFile.c)
 * Callees:
 *     PsReleaseSiloHardReference @ 0x140200940 (PsReleaseSiloHardReference.c)
 *     PsAcquireSiloHardReference @ 0x1402009F0 (PsAcquireSiloHardReference.c)
 *     IopVerifierExAllocatePool @ 0x1402033E4 (IopVerifierExAllocatePool.c)
 *     PsGetCurrentServerSilo @ 0x1402044D0 (PsGetCurrentServerSilo.c)
 *     RtlInitUnicodeString @ 0x140206450 (RtlInitUnicodeString.c)
 *     SeAccessCheck @ 0x140207F80 (SeAccessCheck.c)
 *     KeLeaveCriticalRegionThread @ 0x1402486B0 (KeLeaveCriticalRegionThread.c)
 *     IoGetRelatedDeviceObject @ 0x140252E60 (IoGetRelatedDeviceObject.c)
 *     IopAllocateIrpExReturn @ 0x140252F80 (IopAllocateIrpExReturn.c)
 *     IopCheckDeviceAndDriver @ 0x140253FB0 (IopCheckDeviceAndDriver.c)
 *     RtlCopyUnicodeString @ 0x140254130 (RtlCopyUnicodeString.c)
 *     IoFreeIrp @ 0x1402541B0 (IoFreeIrp.c)
 *     IoGetAttachedDevice @ 0x1402543B0 (IoGetAttachedDevice.c)
 *     IopDequeueIrpFromThread @ 0x1402543D0 (IopDequeueIrpFromThread.c)
 *     IoCallDriverWithTracing @ 0x140254510 (IoCallDriverWithTracing.c)
 *     KeInitializeEvent @ 0x140254560 (KeInitializeEvent.c)
 *     IopCheckVpbMounted @ 0x140254590 (IopCheckVpbMounted.c)
 *     IopDoFullTraverseCheck @ 0x1402547B0 (IopDoFullTraverseCheck.c)
 *     IopDecrementDeviceObjectRef @ 0x140254800 (IopDecrementDeviceObjectRef.c)
 *     PsIsHostSilo @ 0x1402556F0 (PsIsHostSilo.c)
 *     ObfReferenceObjectWithTag @ 0x14025A2D0 (ObfReferenceObjectWithTag.c)
 *     HalPutDmaAdapter @ 0x140261190 (HalPutDmaAdapter.c)
 *     ObfReferenceObject @ 0x1402612A0 (ObfReferenceObject.c)
 *     IopQueueThreadIrp @ 0x140261300 (IopQueueThreadIrp.c)
 *     ExReleaseResourceLite @ 0x140261460 (ExReleaseResourceLite.c)
 *     ExAcquireResourceSharedLite @ 0x140261FD0 (ExAcquireResourceSharedLite.c)
 *     KeWaitForSingleObject @ 0x1402643F0 (KeWaitForSingleObject.c)
 *     IopGetSetSpecificExtension @ 0x140281A24 (IopGetSetSpecificExtension.c)
 *     KeEnterCriticalRegionThread @ 0x1402A46D0 (KeEnterCriticalRegionThread.c)
 *     PsIsThreadTerminating @ 0x1402C1300 (PsIsThreadTerminating.c)
 *     PsGetCurrentProcessSessionId @ 0x1402D7070 (PsGetCurrentProcessSessionId.c)
 *     IopDeleteFileObjectExtension @ 0x1402D7140 (IopDeleteFileObjectExtension.c)
 *     IoGetSilo @ 0x1402D9620 (IoGetSilo.c)
 *     PsIsServerSilo @ 0x1402D9650 (PsIsServerSilo.c)
 *     CmSiFreeMemory @ 0x1402E2170 (CmSiFreeMemory.c)
 *     PsGetServerSiloServiceSessionId @ 0x1402E5A50 (PsGetServerSiloServiceSessionId.c)
 *     IopDereferenceVpbAndFree @ 0x1402F01C0 (IopDereferenceVpbAndFree.c)
 *     KeReadStateSemaphore @ 0x1402F4820 (KeReadStateSemaphore.c)
 *     IopCreateSecurityCheck @ 0x1402F6C58 (IopCreateSecurityCheck.c)
 *     IopSymlinkGetMostRecentlyUsedName @ 0x14030ADAC (IopSymlinkGetMostRecentlyUsedName.c)
 *     IopSymlinkGetECP @ 0x14030ADCC (IopSymlinkGetECP.c)
 *     IopGetDevicePDO @ 0x14033DEB8 (IopGetDevicePDO.c)
 *     IopIncrementVpbRefCount @ 0x14033F614 (IopIncrementVpbRefCount.c)
 *     RtlGetActiveConsoleId @ 0x14035DBC0 (RtlGetActiveConsoleId.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403EC9E4 (KiRemoveSystemWorkPriorityKick.c)
 *     KeBugCheckEx @ 0x1403F5E40 (KeBugCheckEx.c)
 *     _guard_dispatch_icall @ 0x1403FE9E0 (_guard_dispatch_icall.c)
 *     memmove @ 0x140408CC0 (memmove.c)
 *     memset @ 0x140408F80 (memset.c)
 *     IopCheckSessionDeviceAccess @ 0x140500CBC (IopCheckSessionDeviceAccess.c)
 *     IopAllowRemoteDASD @ 0x140505210 (IopAllowRemoteDASD.c)
 *     IopIsSecurityContextAppContainer @ 0x1405052CC (IopIsSecurityContextAppContainer.c)
 *     SeFastTraverseCheck @ 0x1405901D0 (SeFastTraverseCheck.c)
 *     IopCloseFile @ 0x1405FDC00 (IopCloseFile.c)
 *     RtlMapGenericMask @ 0x1405FFDA0 (RtlMapGenericMask.c)
 *     IoGetIrpExtraCreateParameter @ 0x1405FFDF0 (IoGetIrpExtraCreateParameter.c)
 *     IopCheckBackupRestorePrivilege @ 0x1405FFE10 (IopCheckBackupRestorePrivilege.c)
 *     SeSetAccessStateGenericMapping @ 0x1405FFFE0 (SeSetAccessStateGenericMapping.c)
 *     IopAllocRealFileObject @ 0x140600890 (IopAllocRealFileObject.c)
 *     IopSymlinkPropagateToExtensionIfNeeded @ 0x140600CD0 (IopSymlinkPropagateToExtensionIfNeeded.c)
 *     IopRetrieveTransactionParameters @ 0x140601200 (IopRetrieveTransactionParameters.c)
 *     RtlEqualUnicodeString @ 0x140609D30 (RtlEqualUnicodeString.c)
 *     SeLockSubjectContext @ 0x1406291F0 (SeLockSubjectContext.c)
 *     SeUnlockSubjectContext @ 0x140629250 (SeUnlockSubjectContext.c)
 *     SeTokenIsAdmin @ 0x14064BC20 (SeTokenIsAdmin.c)
 *     IopQueryInformation @ 0x1406B98D0 (IopQueryInformation.c)
 *     SeOpenObjectAuditAlarm @ 0x1406BBD30 (SeOpenObjectAuditAlarm.c)
 *     SeAppendPrivileges @ 0x1406BBD90 (SeAppendPrivileges.c)
 *     IopCheckTopDeviceHint @ 0x1406C671C (IopCheckTopDeviceHint.c)
 *     IopSymlinkUpdateECP @ 0x1406CD9E8 (IopSymlinkUpdateECP.c)
 *     IopSymlinkCreateECP @ 0x1406CDD0C (IopSymlinkCreateECP.c)
 *     IopSymlinkProcessReparse @ 0x1406CDFE4 (IopSymlinkProcessReparse.c)
 *     IoQueryFileInformation @ 0x1406EC9F0 (IoQueryFileInformation.c)
 *     IopSymlinkEnforceEnabledTypes @ 0x1406ED9E4 (IopSymlinkEnforceEnabledTypes.c)
 *     IopCancelAlertedRequest @ 0x14088CC4C (IopCancelAlertedRequest.c)
 *     IoCancelFileOpen @ 0x14088F240 (IoCancelFileOpen.c)
 *     IopCheckAndUpdateStopOnSymlinkEcp @ 0x14088FCE4 (IopCheckAndUpdateStopOnSymlinkEcp.c)
 *     IopGetNetworkOpenInformation @ 0x140896B90 (IopGetNetworkOpenInformation.c)
 *     PsGetParentSilo @ 0x1409018D0 (PsGetParentSilo.c)
 *     ExFreePoolWithTag @ 0x1409B1010 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x1409B1030 (ExAllocatePoolWithTag.c)
 *     VfFastIoCheckState @ 0x1409C6994 (VfFastIoCheckState.c)
 *     VfFastIoSnapState @ 0x1409C6A6C (VfFastIoSnapState.c)
 */

__int64 __fastcall IopParseDevice(
        struct _DEVICE_OBJECT *BugCheckParameter2,
        POBJECT_TYPE *a2,
        struct _ACCESS_STATE *a3,
        char a4,
        int a5,
        PUNICODE_STRING AbsoluteObjectName,
        PCUNICODE_STRING SourceString,
        __int64 a8,
        __int64 a9,
        __int64 a10,
        PFILE_OBJECT *a11)
{
  unsigned int v11; // r14d
  struct _ACCESS_STATE *v12; // r15
  unsigned int *v13; // rbx
  __int64 v14; // r12
  __int64 v15; // r9
  __int64 v16; // rdx
  ULONG_PTR v17; // r13
  unsigned __int64 v18; // rcx
  __int64 result; // rax
  bool v20; // al
  __int64 v21; // rax
  ULONG_PTR v22; // rax
  ULONG_PTR v23; // rcx
  struct _LIST_ENTRY *CurrentServerSilo; // rax
  int ServerSiloServiceSessionId; // ebx
  struct _DMA_ADAPTER *DevicePDO; // rax
  struct _DMA_ADAPTER *v27; // rbx
  ACCESS_MASK RemainingDesiredAccess; // ebx
  char v29; // dl
  __int64 v30; // rcx
  int v31; // r10d
  char v32; // r9
  char v33; // r14
  ULONG ActiveConsoleId; // ebx
  struct _LIST_ENTRY *v35; // rax
  int v36; // ebx
  bool v37; // bl
  struct _SECURITY_SUBJECT_CONTEXT *p_SubjectSecurityContext; // rdi
  char v39; // r14
  PACCESS_TOKEN ClientToken; // rcx
  ACCESS_MASK v41; // eax
  UNICODE_STRING *v42; // rsi
  __int64 v43; // rdx
  __int64 v44; // r8
  __int64 v45; // r9
  __int64 v46; // rdx
  __int64 v47; // r8
  __int64 v48; // r9
  char v49; // al
  char v50; // r14
  unsigned __int16 Length; // r8
  __int64 v52; // rdx
  __int64 v53; // r15
  PDEVICE_OBJECT AttachedDevice; // r14
  unsigned int v55; // esi
  __int64 v56; // rax
  int v57; // ecx
  _BOOL8 v58; // r8
  PCUNICODE_STRING v59; // rsi
  int v60; // eax
  struct _ACCESS_STATE *v61; // rsi
  __int64 Irp; // rax
  __int64 v63; // r13
  char v64; // dl
  __int64 v65; // rsi
  int v66; // eax
  int v67; // r8d
  char v68; // al
  ULONG_PTR v69; // rbx
  PFILE_OBJECT v70; // rdi
  _QWORD *v71; // rbx
  unsigned __int64 v72; // rax
  __int64 v73; // rcx
  __int64 v74; // rcx
  __int64 v75; // rax
  __int64 v76; // rdx
  _DWORD *Silo; // rbx
  NTSTATUS SetSpecificExtension; // eax
  _DWORD *v79; // rsi
  unsigned __int16 v80; // ax
  wchar_t *PoolWithTag; // rax
  wchar_t *Buffer; // rcx
  unsigned __int16 v83; // ax
  wchar_t *v84; // rax
  ULONG_PTR v85; // rdi
  __int16 *MostRecentlyUsedName; // rdx
  NTSTATUS updated; // eax
  struct _KSEMAPHORE *p_Event; // rsi
  __int64 v89; // r8
  char v90; // dl
  NTSTATUS v91; // eax
  unsigned __int8 v92; // al
  int v93; // edx
  BOOLEAN v94; // di
  unsigned __int8 CurrentIrql; // bl
  unsigned __int8 v96; // al
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  int v99; // eax
  bool v100; // zf
  unsigned __int8 v101; // al
  struct _KPRCB *v102; // r10
  _DWORD *v103; // r9
  int v104; // eax
  __int64 v105; // rdx
  __int64 v106; // r8
  int v107; // esi
  char v108; // r15
  struct _ECP_LIST *v109; // r14
  unsigned __int64 v110; // rcx
  __int64 v111; // rax
  PVOID v112; // r9
  __int64 v113; // rcx
  char v114; // al
  int v115; // ecx
  int v116; // ecx
  PDEVICE_OBJECT v117; // rbx
  ULONG_PTR v118; // rax
  unsigned __int64 v119; // rcx
  __int64 v120; // rax
  PUNICODE_STRING v121; // r13
  wchar_t *v122; // rsi
  wchar_t *v123; // rcx
  __int64 v124; // rax
  ULONG_PTR v125; // rdi
  ULONG_PTR v126; // rdx
  struct _DMA_ADAPTER *v127; // rcx
  ULONG_PTR v128; // rcx
  PFILE_OBJECT v129; // rbx
  ULONG_PTR v130; // rcx
  int v131; // ecx
  void *v132; // rcx
  __int64 v133; // r8
  int v134; // ecx
  unsigned __int64 v135; // rax
  __int64 v136; // r10
  unsigned int v137; // ecx
  struct _ACCESS_STATE *v138; // rcx
  __int64 v139; // rbx
  __int64 v140; // rdx
  PDEVICE_OBJECT RelatedDeviceObject; // r14
  ULONG_PTR Vpb; // rcx
  __int64 v143; // rbx
  struct _FILE_OBJECT *RelatedFileObject; // rax
  unsigned __int64 DeviceType; // rax
  __int64 v146; // rcx
  NTSTATUS FileInformation; // eax
  char v148; // si
  PFAST_IO_DISPATCH FastIoDispatch; // rcx
  __int64 v150; // rdx
  __int64 (__fastcall *FastIoQueryBasicInfo)(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD); // rbx
  void *v152; // r15
  PVOID Pool; // rbx
  __int64 (__fastcall *FastIoQueryNetworkOpenInfo)(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD); // r15
  void *v155; // rbx
  NTSTATUS v156; // eax
  ACCESS_MASK GrantedAccess; // [rsp+40h] [rbp-128h]
  NTSTATUS AccessStatus; // [rsp+60h] [rbp-108h] BYREF
  unsigned int v159; // [rsp+64h] [rbp-104h]
  int v160; // [rsp+68h] [rbp-100h]
  ACCESS_MASK v161; // [rsp+6Ch] [rbp-FCh] BYREF
  ULONG_PTR BugCheckParameter1; // [rsp+70h] [rbp-F8h]
  PPRIVILEGE_SET Privileges; // [rsp+78h] [rbp-F0h] BYREF
  ACCESS_MASK DesiredAccess; // [rsp+80h] [rbp-E8h]
  PDEVICE_OBJECT DeviceObject; // [rsp+88h] [rbp-E0h] BYREF
  struct _KTHREAD *CurrentThread; // [rsp+90h] [rbp-D8h]
  PFILE_OBJECT FileObject; // [rsp+98h] [rbp-D0h] BYREF
  char v168; // [rsp+A0h] [rbp-C8h]
  ULONG ReturnedLength; // [rsp+A4h] [rbp-C4h] BYREF
  PVOID P; // [rsp+A8h] [rbp-C0h]
  PVOID v171; // [rsp+B0h] [rbp-B8h] BYREF
  int v172; // [rsp+B8h] [rbp-B0h]
  struct _ECP_LIST *v173; // [rsp+C0h] [rbp-A8h] BYREF
  __int64 v174; // [rsp+C8h] [rbp-A0h]
  ULONG_PTR BugCheckParameter4[2]; // [rsp+D0h] [rbp-98h] BYREF
  _DWORD *v176; // [rsp+E0h] [rbp-88h] BYREF
  _BYTE *v177; // [rsp+E8h] [rbp-80h]
  UNICODE_STRING ObjectTypeName; // [rsp+F0h] [rbp-78h] BYREF
  struct _ECP_LIST *ExtraCreateParameter; // [rsp+100h] [rbp-68h] BYREF
  __int128 v180; // [rsp+108h] [rbp-60h] BYREF
  __int64 v181; // [rsp+118h] [rbp-50h]
  void *v182; // [rsp+120h] [rbp-48h]
  __int64 (__fastcall *v184)(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD); // [rsp+178h] [rbp+10h] BYREF
  struct _ACCESS_STATE *v185; // [rsp+180h] [rbp+18h]
  char v186; // [rsp+188h] [rbp+20h]

  v186 = a4;
  v185 = a3;
  v12 = a3;
  v13 = (unsigned int *)BugCheckParameter2;
  v14 = a8;
  v161 = 0;
  AccessStatus = 0;
  *(_OWORD *)BugCheckParameter4 = 0LL;
  v180 = 0LL;
  v181 = 0LL;
  v172 = 0;
  LOBYTE(v160) = 0;
  ReturnedLength = 0;
  ObjectTypeName = 0LL;
  Privileges = 0LL;
  P = 0LL;
  v173 = 0LL;
  v171 = 0LL;
  if ( a2 != IoFileObjectType )
    return 3221225508LL;
  CurrentThread = KeGetCurrentThread();
  LOBYTE(v11) = 4;
  RtlInitUnicodeString(&ObjectTypeName, L"File");
  *a11 = 0LL;
  FileObject = 0LL;
  if ( !v14 )
    return 3221225508LL;
  while ( 1 )
  {
    v15 = 0x60010000110040LL;
    v16 = 0x1080020084LL;
    if ( *(_WORD *)v14 != 8 || *(_WORD *)(v14 + 2) != 216 )
      return 3221225508LL;
    v17 = (ULONG_PTR)v13;
    BugCheckParameter1 = (ULONG_PTR)v13;
    if ( *(_DWORD *)(v14 + 32) == 1 )
    {
      *(_DWORD *)(v14 + 32) = -1096154543;
      *(_QWORD *)(v14 + 40) = v13;
      *(_DWORD *)(v14 + 16) = 0;
      ObfReferenceObject(v13);
      return 0LL;
    }
    if ( (*(_DWORD *)(v14 + 152) & 0x10) != 0 )
    {
      v18 = v13[18];
      if ( *(_QWORD *)(v14 + 24) == 2684354563LL )
      {
        if ( (unsigned int)v18 > 0x24 || !_bittest64(&v16, v18) )
          goto LABEL_10;
      }
      else
      {
        LOBYTE(v16) = (unsigned int)v18 <= 0x24 && _bittest64(&v16, v18);
        v20 = (unsigned int)v18 <= 0x36 && _bittest64(&v15, v18);
        if ( !(_BYTE)v16 && !v20 )
        {
LABEL_10:
          *(_DWORD *)(v14 + 16) = -1073741192;
          return 3221226104LL;
        }
        result = IopSymlinkEnforceEnabledTypes(*(_BYTE *)(v14 + 152) & 8, v16, *(_QWORD *)(v14 + 168));
        AccessStatus = result;
        if ( (int)result < 0 )
          goto LABEL_423;
      }
    }
    v21 = *(_QWORD *)(v14 + 40);
    if ( v21 )
    {
      v17 = *(_QWORD *)(v21 + 8);
      BugCheckParameter1 = v17;
    }
    if ( *(_DWORD *)(v17 + 72) == 7 )
    {
      v22 = v17;
      v23 = v17;
      do
      {
        if ( *(_QWORD *)(v22 + 56) )
          break;
        v22 = *(_QWORD *)(v22 + 24);
        v23 = v22;
      }
      while ( v22 );
      if ( v23 && v23 != v17 )
      {
        *(_DWORD *)(v14 + 152) |= 2u;
        v17 = v23;
        BugCheckParameter1 = v23;
      }
    }
    result = IopCheckDeviceAndDriver(v14, v17);
    AccessStatus = result;
    if ( (int)result < 0 )
      goto LABEL_423;
    if ( (*(_DWORD *)(*(_QWORD *)(v17 + 312) + 32LL) & 0x400) != 0 && !*(_QWORD *)(v14 + 40) )
    {
      CurrentServerSilo = PsGetCurrentServerSilo();
      ServerSiloServiceSessionId = PsGetServerSiloServiceSessionId((__int64)CurrentServerSilo);
      if ( ServerSiloServiceSessionId != (unsigned int)PsGetCurrentProcessSessionId()
        || IopSessionZeroAccessCheckEnabled && (*(_DWORD *)(v14 + 64) & 0x40000) == 0 )
      {
        DevicePDO = (struct _DMA_ADAPTER *)IopGetDevicePDO(v17);
        v27 = DevicePDO;
        if ( DevicePDO )
        {
          if ( !IopCheckSessionDeviceAccess((__int64)DevicePDO) )
          {
            HalPutDmaAdapter(v27);
            IopDecrementDeviceObjectRef(v17, 0);
            *(_DWORD *)(v14 + 16) = -1073741790;
            return 3221225506LL;
          }
          HalPutDmaAdapter(v27);
        }
      }
    }
    RtlMapGenericMask(&v12->RemainingDesiredAccess, (PGENERIC_MAPPING)((char *)IoFileObjectType + 76));
    RtlMapGenericMask(&v12->OriginalDesiredAccess, (PGENERIC_MAPPING)((char *)IoFileObjectType + 76));
    SeSetAccessStateGenericMapping(v12, (PGENERIC_MAPPING)((char *)IoFileObjectType + 76));
    RemainingDesiredAccess = v12->RemainingDesiredAccess;
    DesiredAccess = RemainingDesiredAccess;
    IopCheckBackupRestorePrivilege(v12);
    v29 = *(_BYTE *)(v14 + 136);
    if ( v29 && !SourceString->Length || (v12->Flags & 0x100) != 0 )
    {
      RemainingDesiredAccess |= v12->PreviouslyGrantedAccess;
      DesiredAccess = RemainingDesiredAccess;
    }
    v30 = *(_QWORD *)(v14 + 40);
    LOBYTE(v31) = v160;
    if ( v30 && (*(_DWORD *)(v30 + 80) & 0x400000) != 0 )
    {
      v31 = (unsigned __int8)v160;
      if ( !SourceString->Length )
        v31 = 1;
      v160 = v31;
    }
    if ( ((v32 = v186) != 0 || (*(_DWORD *)(v14 + 84) & 1) != 0) && (!v30 || (_BYTE)v31) && !v29 )
    {
      v33 = v11 & 0xDF;
      if ( SourceString->Length )
      {
        p_SubjectSecurityContext = &v12->SubjectSecurityContext;
        if ( IopDoFullTraverseCheck(v17, v186, &v12->SubjectSecurityContext) )
        {
          v42 = AbsoluteObjectName;
          LOBYTE(v11) = (v33 ^ IopCreateSecurityCheck(
                                 v17,
                                 0LL,
                                 v12,
                                 RemainingDesiredAccess | 0x20,
                                 1,
                                 Privileges,
                                 &v161,
                                 AbsoluteObjectName,
                                 &ObjectTypeName,
                                 (__int64)CurrentThread,
                                 0)) & 1 ^ v33;
        }
        else
        {
          if ( (v12->Flags & 1) != 0 )
          {
            LOBYTE(v11) = v33 | 1;
          }
          else
          {
            KeEnterCriticalRegionThread((__int64)CurrentThread);
            ExAcquireResourceSharedLite(&IopSecurityResource, 1u);
            LOBYTE(v11) = (v33 ^ SeFastTraverseCheck(*(_QWORD *)(v17 + 272), (__int64)v12, 32)) & 1 ^ v33;
            if ( (v11 & 1) == 0 )
            {
              Privileges = 0LL;
              SeLockSubjectContext(&v12->SubjectSecurityContext);
              LOBYTE(v11) = ((v11 | 0x20) ^ SeAccessCheck(
                                              *(PSECURITY_DESCRIPTOR *)(v17 + 272),
                                              &v12->SubjectSecurityContext,
                                              1u,
                                              0x20u,
                                              0,
                                              &Privileges,
                                              (PGENERIC_MAPPING)((char *)IoFileObjectType + 76),
                                              1,
                                              &v161,
                                              &AccessStatus)) & 1 ^ (v11 | 0x20);
              if ( Privileges )
              {
                SeAppendPrivileges(v12, Privileges);
                CmSiFreeMemory(Privileges);
              }
            }
            ExReleaseResourceLite(&IopSecurityResource);
            KeLeaveCriticalRegionThread((__int64)CurrentThread, v46, v47, v48);
          }
          v42 = AbsoluteObjectName;
        }
      }
      else
      {
        v37 = 0;
        if ( (*(_DWORD *)(v17 + 52) & 0x40001) != 0 && (RemainingDesiredAccess & 0xFFEDFF7F) != 0 )
        {
          ActiveConsoleId = RtlGetActiveConsoleId();
          if ( ActiveConsoleId != (unsigned int)PsGetCurrentProcessSessionId() )
          {
            v35 = PsGetCurrentServerSilo();
            v36 = PsGetServerSiloServiceSessionId((__int64)v35);
            if ( v36 != (unsigned int)PsGetCurrentProcessSessionId() && !IopAllowRemoteDASD() )
              v37 = 1;
          }
        }
        Privileges = 0LL;
        KeEnterCriticalRegionThread((__int64)CurrentThread);
        ExAcquireResourceSharedLite(&IopSecurityResource, 1u);
        p_SubjectSecurityContext = &v12->SubjectSecurityContext;
        SeLockSubjectContext(&v12->SubjectSecurityContext);
        v39 = v33 | 0x20;
        if ( !v37 )
          goto LABEL_67;
        ClientToken = p_SubjectSecurityContext->ClientToken;
        if ( !p_SubjectSecurityContext->ClientToken )
          ClientToken = v12->SubjectSecurityContext.PrimaryToken;
        if ( SeTokenIsAdmin(ClientToken) )
        {
LABEL_67:
          RemainingDesiredAccess = DesiredAccess;
          LOBYTE(v11) = (v39 ^ SeAccessCheck(
                                 *(PSECURITY_DESCRIPTOR *)(v17 + 272),
                                 &v12->SubjectSecurityContext,
                                 (v39 & 0x20) != 0,
                                 DesiredAccess,
                                 0,
                                 &Privileges,
                                 (PGENERIC_MAPPING)((char *)IoFileObjectType + 76),
                                 1,
                                 &v161,
                                 &AccessStatus)) & 1 ^ v39;
          if ( Privileges )
          {
            SeAppendPrivileges(v12, Privileges);
            CmSiFreeMemory(Privileges);
          }
          if ( (v11 & 1) != 0 )
          {
            v41 = v161;
            v12->PreviouslyGrantedAccess |= v161;
            v12->RemainingDesiredAccess &= ~(v41 | 0x2000000);
            *(_BYTE *)(v14 + 136) = 1;
          }
        }
        else
        {
          LOBYTE(v11) = v39 & 0xFE;
          AccessStatus = -1073741790;
          RemainingDesiredAccess = DesiredAccess;
        }
        v42 = AbsoluteObjectName;
        SeOpenObjectAuditAlarm(
          &ObjectTypeName,
          (PVOID)v17,
          AbsoluteObjectName,
          *(PSECURITY_DESCRIPTOR *)(v17 + 272),
          v12,
          0,
          v11 & 1,
          1,
          &v12->GenerateOnClose);
        ExReleaseResourceLite(&IopSecurityResource);
        KeLeaveCriticalRegionThread((__int64)CurrentThread, v43, v44, v45);
      }
      if ( (v11 & 0x20) != 0 )
        SeUnlockSubjectContext(p_SubjectSecurityContext);
      if ( (v11 & 1) == 0 )
        goto LABEL_309;
      v32 = v186;
    }
    else
    {
      v42 = AbsoluteObjectName;
    }
    if ( *(_BYTE *)(v14 + 137) || *(_BYTE *)(v14 + 138) )
      v49 = 64;
    else
      v49 = 0;
    v50 = v49 | v11 & 0xBF;
    Length = SourceString->Length;
    if ( SourceString->Length
      || (v52 = *(_QWORD *)(v14 + 40)) != 0
      || (RemainingDesiredAccess & 0xFEE1FF7F) != 0
      || (v50 & 0x40) != 0 )
    {
      LOBYTE(v11) = v50 & 0xF7;
      v52 = *(_QWORD *)(v14 + 40);
    }
    else
    {
      LOBYTE(v11) = v50 | 8;
    }
    v159 = v11;
    v53 = 0LL;
    v174 = 0LL;
    if ( !v52 || (*(_DWORD *)(v52 + 80) & 0x800) != 0 )
    {
      AttachedDevice = (PDEVICE_OBJECT)v17;
      DeviceObject = (PDEVICE_OBJECT)v17;
      v55 = v159;
      if ( *(_QWORD *)(v17 + 56) && (v159 & 8) == 0 )
      {
        if ( (*(_DWORD *)(v17 + 52) & 0x100) != 0
          && (*(_DWORD *)(*(_QWORD *)(v17 + 312) + 32LL) & 0x800) == 0
          && (v32 || (*(_DWORD *)(v14 + 84) & 1) != 0)
          && (v52 || Length)
          && !(_BYTE)v160 )
        {
          Privileges = 0LL;
          if ( !IopCreateSecurityCheck(
                  v17,
                  (void *)v17,
                  v185,
                  RemainingDesiredAccess,
                  *(_DWORD *)(v14 + 88),
                  0LL,
                  &v161,
                  AbsoluteObjectName,
                  &ObjectTypeName,
                  (__int64)CurrentThread,
                  0) )
            goto LABEL_309;
        }
        v56 = IopCheckVpbMounted(v14, v17, (__int64)SourceString, &AccessStatus);
        v53 = v56;
        v174 = v56;
        if ( !v56 )
          return (unsigned int)AccessStatus;
        AttachedDevice = *(PDEVICE_OBJECT *)(v56 + 8);
        DeviceObject = AttachedDevice;
      }
      if ( (*(_DWORD *)(v14 + 152) & 1) != 0 )
      {
        LOBYTE(v55) = v55 | 2;
        v159 = v55;
      }
      else if ( AttachedDevice->AttachedDevice )
      {
        AttachedDevice = IoGetAttachedDevice(AttachedDevice);
        DeviceObject = AttachedDevice;
      }
    }
    else
    {
      AttachedDevice = BugCheckParameter2;
      DeviceObject = BugCheckParameter2;
      if ( *(_QWORD *)(v52 + 16) )
      {
        v53 = *(_QWORD *)(v52 + 16);
        v174 = v53;
        if ( (*(_DWORD *)(v17 + 52) & 0x100) != 0
          && (*(_DWORD *)(*(_QWORD *)(v17 + 312) + 32LL) & 0x800) == 0
          && (v32 || (*(_DWORD *)(v14 + 84) & 1) != 0)
          && !(_BYTE)v160 )
        {
          Privileges = 0LL;
          if ( !IopCreateSecurityCheck(
                  v17,
                  (void *)v17,
                  v185,
                  RemainingDesiredAccess,
                  *(_DWORD *)(v14 + 88),
                  0LL,
                  &v161,
                  v42,
                  &ObjectTypeName,
                  (__int64)CurrentThread,
                  0) )
            goto LABEL_309;
        }
        IopIncrementVpbRefCount(v53, 1);
      }
      if ( (*(_DWORD *)(v14 + 152) & 1) != 0 )
      {
        if ( v53 )
        {
          AttachedDevice = *(PDEVICE_OBJECT *)(v53 + 8);
          DeviceObject = AttachedDevice;
        }
        v55 = v159;
        LOBYTE(v55) = v159 | 2;
        v159 = v55;
      }
      else
      {
        LOBYTE(v55) = v159;
      }
    }
    v57 = *(_DWORD *)(v17 + 52);
    if ( (v57 & 0x40001) != 0
      && (*(_DWORD *)(v17 + 48) & 0x600100) == 0
      && (v57 & 0x100) == 0
      && IopIsSecurityContextAppContainer(&v185->SubjectSecurityContext) )
    {
      if ( !v53 )
        goto LABEL_309;
      if ( (*(_DWORD *)(*(_QWORD *)(v53 + 8) + 48LL) & 0x20000) == 0 )
      {
        IopDereferenceVpbAndFree(v53);
LABEL_309:
        IopDecrementDeviceObjectRef(v17, 0);
        return 3221225506LL;
      }
    }
    if ( (v55 & 2) != 0 )
    {
      v58 = (v55 & 8) != 0;
      v59 = SourceString;
      AccessStatus = IopCheckTopDeviceHint(&DeviceObject, v14, v58, SourceString);
      if ( AccessStatus < 0 )
      {
        if ( v53 )
          IopDereferenceVpbAndFree(v53);
        IopDecrementDeviceObjectRef(v17, 0);
        return (unsigned int)AccessStatus;
      }
      AttachedDevice = DeviceObject;
    }
    else
    {
      v59 = SourceString;
    }
    v60 = *(_DWORD *)(v14 + 152);
    if ( (v60 & 0x10) != 0 )
      *(_DWORD *)(v14 + 152) = v60 & 0xFFFFFFEF;
    if ( ((AttachedDevice->Characteristics & 0x100) != 0
       || IopRequireDeviceAccessCheck && (*(_DWORD *)(v17 + 52) & 0x100000) != 0)
      && (v186 || (*(_DWORD *)(v14 + 84) & 1) != 0)
      && (*(_QWORD *)(v14 + 40) || v59->Length) )
    {
      v61 = v185;
      if ( !(_BYTE)v160 )
      {
        Privileges = 0LL;
        if ( !IopCreateSecurityCheck(
                v17,
                AttachedDevice,
                v185,
                RemainingDesiredAccess,
                *(_DWORD *)(v14 + 88),
                0LL,
                &v161,
                AbsoluteObjectName,
                &ObjectTypeName,
                (__int64)CurrentThread,
                1) )
        {
          IopDecrementDeviceObjectRef(v17, 0);
          if ( v53 )
            IopDereferenceVpbAndFree(v53);
          return 3221225506LL;
        }
      }
    }
    else
    {
      v61 = v185;
    }
    Irp = IopAllocateIrpExReturn();
    v63 = Irp;
    if ( !Irp )
    {
      IopDecrementDeviceObjectRef(BugCheckParameter1, 0);
      if ( v53 )
        IopDereferenceVpbAndFree(v53);
      return 3221225626LL;
    }
    *(_QWORD *)(Irp + 152) = CurrentThread;
    v64 = v186;
    *(_BYTE *)(Irp + 64) = v186;
    *(_DWORD *)(Irp + 16) = 2180;
    *(_QWORD *)&v180 = a9;
    *((_QWORD *)&v180 + 1) = v61;
    LODWORD(v181) = RemainingDesiredAccess;
    HIDWORD(v181) = *(_DWORD *)(v14 + 64);
    v65 = *(_QWORD *)(Irp + 184) - 72LL;
    v177 = (_BYTE *)v65;
    *(_BYTE *)(v65 + 3) = 0;
    v66 = *(_DWORD *)(v14 + 120);
    v67 = a5;
    if ( v66 )
    {
      *(_BYTE *)v65 = v66 == 1 ? 1 : 19;
      *(_QWORD *)(v65 + 32) = *(_QWORD *)(v14 + 128);
    }
    else
    {
      *(_BYTE *)v65 = 0;
      *(_DWORD *)(v65 + 32) = *(_DWORD *)(v14 + 80);
      v68 = *(_BYTE *)(v14 + 84);
      *(_BYTE *)(v65 + 2) = v68;
      if ( (v67 & 0x40) == 0 )
        *(_BYTE *)(v65 + 2) = v68 | 0x80;
    }
    *(_QWORD *)(v63 + 88) = *(_QWORD *)(v14 + 56);
    *(_QWORD *)(v63 + 24) = *(_QWORD *)(v14 + 72);
    *(_DWORD *)(v65 + 16) = (*(_DWORD *)(v14 + 88) << 24) | *(_DWORD *)(v14 + 64) & 0xFFFFFF;
    *(_WORD *)(v65 + 24) = *(_WORD *)(v14 + 68);
    *(_WORD *)(v65 + 26) = *(_WORD *)(v14 + 70);
    *(_QWORD *)(v65 + 8) = &v180;
    *(_QWORD *)(v63 + 112) = *(_QWORD *)(v14 + 168);
    *(_QWORD *)(v63 + 72) = BugCheckParameter4;
    *(_QWORD *)(v63 + 8) = 0LL;
    *(_BYTE *)(v63 + 65) = 0;
    *(_BYTE *)(v63 + 68) = 0;
    *(_QWORD *)(v63 + 80) = 0LL;
    *(_QWORD *)(v63 + 104) = 0LL;
    *(_QWORD *)(v63 + 160) = 0LL;
    if ( *(_BYTE *)(v14 + 137) )
      break;
    GrantedAccess = RemainingDesiredAccess;
    v69 = BugCheckParameter1;
    AccessStatus = IopAllocRealFileObject(
                     (unsigned int)&FileObject,
                     (_DWORD)AttachedDevice,
                     BugCheckParameter1,
                     v67,
                     v64,
                     v14,
                     a10,
                     0,
                     GrantedAccess);
    if ( AccessStatus < 0 )
    {
      IoFreeIrp((PIRP)v63);
      IopDecrementDeviceObjectRef(v69, 0);
      if ( v53 )
        IopDereferenceVpbAndFree(v53);
      v127 = (struct _DMA_ADAPTER *)FileObject;
      if ( FileObject )
      {
        FileObject->DeviceObject = 0LL;
        HalPutDmaAdapter(v127);
        result = (unsigned int)AccessStatus;
        *(_DWORD *)(v14 + 16) = AccessStatus;
        return result;
      }
      goto LABEL_422;
    }
    v70 = FileObject;
LABEL_185:
    if ( (v159 & 8) != 0 )
      v70->Flags |= 0x800u;
    *(_QWORD *)(v63 + 192) = v70;
    *(_QWORD *)(v65 + 48) = v70;
    v80 = SourceString->Length;
    if ( SourceString->Length )
    {
      if ( v80 >= 0x38u )
      {
        if ( v80 >= 0x78u )
        {
          if ( v80 < 0xF8u )
            v80 = 248;
        }
        else
        {
          v80 = 120;
        }
      }
      else
      {
        v80 = 56;
      }
      v70->FileName.MaximumLength = v80;
      PoolWithTag = (wchar_t *)ExAllocatePoolWithTag(PagedPool, v80, 0x6D4E6F49u);
      v70->FileName.Buffer = PoolWithTag;
      if ( !PoolWithTag )
      {
        IoFreeIrp((PIRP)v63);
        IopDecrementDeviceObjectRef(v69, 0);
        if ( v53 )
          IopDereferenceVpbAndFree(v53);
        v70->DeviceObject = 0LL;
        if ( !*(_BYTE *)(v14 + 137) )
        {
          HalPutDmaAdapter((PADAPTER_OBJECT)v70);
          return 3221225626LL;
        }
        return 3221225626LL;
      }
    }
    RtlCopyUnicodeString(&v70->FileName, SourceString);
    if ( *(_BYTE *)(v14 + 137) )
    {
      LOBYTE(v184) = 0;
      AccessStatus = IopQueryInformation(v14, AttachedDevice, v63, v65, &v184);
      if ( AccessStatus < 0 || (_BYTE)v184 )
      {
        v131 = *(_DWORD *)(v63 + 48);
        *(_DWORD *)(v14 + 16) = v131;
        *(_QWORD *)(v14 + 24) = *(_QWORD *)(v63 + 56);
        if ( v131 == 260 )
        {
          v132 = *(void **)(v63 + 160);
          if ( v132 )
          {
            ExFreePoolWithTag(v132, 0);
            *(_QWORD *)(v63 + 160) = 0LL;
            *(_QWORD *)(v14 + 40) = 0LL;
          }
        }
        if ( v70->FileName.Length )
          ExFreePoolWithTag(v70->FileName.Buffer, 0);
        if ( v70->FileObjectExtension )
          IopDeleteFileObjectExtension((__int64)v70);
        v130 = BugCheckParameter1;
        goto LABEL_344;
      }
      if ( !RtlEqualUnicodeString(&v70->FileName, SourceString, 0) )
      {
        Buffer = v70->FileName.Buffer;
        if ( Buffer )
        {
          ExFreePoolWithTag(Buffer, 0);
          RtlInitUnicodeString(&v70->FileName, 0LL);
        }
        v83 = SourceString->Length;
        if ( SourceString->Length )
        {
          if ( v83 >= 0x38u )
          {
            if ( v83 >= 0x78u )
            {
              if ( v83 < 0xF8u )
                v83 = 248;
            }
            else
            {
              v83 = 120;
            }
          }
          else
          {
            v83 = 56;
          }
          v70->FileName.MaximumLength = v83;
          v84 = (wchar_t *)ExAllocatePoolWithTag(PagedPool, v83, 0x6D4E6F49u);
          v70->FileName.Buffer = v84;
          if ( !v84 )
          {
            if ( v70->FileObjectExtension )
              IopDeleteFileObjectExtension((__int64)v70);
            IopDecrementDeviceObjectRef(BugCheckParameter1, 0);
            if ( v53 )
              IopDereferenceVpbAndFree(v53);
            IoFreeIrp((PIRP)v63);
            return 3221225626LL;
          }
          RtlCopyUnicodeString(&v70->FileName, SourceString);
        }
      }
      v85 = BugCheckParameter1;
      AccessStatus = IopAllocRealFileObject(
                       (unsigned int)&FileObject,
                       (_DWORD)AttachedDevice,
                       BugCheckParameter1,
                       a5,
                       v186,
                       v14,
                       a10,
                       1,
                       DesiredAccess);
      if ( AccessStatus < 0 )
      {
        v129 = FileObject;
        if ( FileObject->FileName.Length )
          ExFreePoolWithTag(FileObject->FileName.Buffer, 0);
        if ( v129->FileObjectExtension )
          IopDeleteFileObjectExtension((__int64)v129);
        v130 = v85;
LABEL_344:
        IopDecrementDeviceObjectRef(v130, 0);
        if ( v53 )
          IopDereferenceVpbAndFree(v53);
        IoFreeIrp((PIRP)v63);
        return (unsigned int)AccessStatus;
      }
      v70 = FileObject;
      *(_QWORD *)(v65 + 48) = FileObject;
      *(_QWORD *)(v63 + 192) = v70;
    }
    if ( !*(_DWORD *)(v14 + 120) )
    {
      ExtraCreateParameter = 0LL;
      AccessStatus = IoGetIrpExtraCreateParameter((PIRP)v63, &ExtraCreateParameter);
      if ( ExtraCreateParameter )
      {
        if ( IopSymlinkGetECP(ExtraCreateParameter, &v171) != -1073741275 )
        {
          MostRecentlyUsedName = (__int16 *)IopSymlinkGetMostRecentlyUsedName((__int64)v171);
          if ( !MostRecentlyUsedName[2] )
          {
            updated = IopSymlinkUpdateECP(
                        (PIRP)v63,
                        MostRecentlyUsedName,
                        AbsoluteObjectName->Length - SourceString->Length,
                        MostRecentlyUsedName[1]);
            AccessStatus = updated;
            if ( updated < 0 )
            {
              *(_DWORD *)(v63 + 48) = updated;
              *(_QWORD *)(v63 + 56) = 0LL;
              LOBYTE(v159) = v159 & 0xFB;
            }
          }
        }
      }
    }
    p_Event = (struct _KSEMAPHORE *)&v70->Event;
    KeInitializeEvent(&v70->Event, NotificationEvent, 0);
    *(_QWORD *)(v14 + 8) = v70;
    v90 = v159;
    if ( (v159 & 4) != 0 )
    {
      IopQueueThreadIrp(v63, v159, v89);
      v91 = IoCallDriverWithTracing(AttachedDevice, v63);
      AccessStatus = v91;
      v90 = v159;
    }
    else
    {
      v91 = AccessStatus;
    }
    if ( v91 == 259 )
    {
      v92 = v90 | 0x80;
      v93 = v90 & 0x7F;
      if ( (KeGetCurrentThread()->MiscFlags & 0x400) == 0 )
        v93 = v92;
      v159 = v93;
      v94 = (unsigned __int8)v93 >> 7;
      AccessStatus = KeWaitForSingleObject(p_Event, Executive, 0, (unsigned __int8)v93 >> 7, 0LL);
      if ( AccessStatus == 257 )
      {
        while ( 1 )
        {
          CurrentIrql = KeGetCurrentIrql();
          __writecr8(1uLL);
          if ( PsIsThreadTerminating(KeGetCurrentThread()) || !KeReadStateSemaphore(p_Event) && *(_BYTE *)(v63 + 68) )
            break;
          if ( KiIrqlFlags )
          {
            if ( (KiIrqlFlags & 1) != 0 )
            {
              v96 = KeGetCurrentIrql();
              if ( v96 <= 0xFu && CurrentIrql <= 0xFu && v96 >= 2u )
              {
                CurrentPrcb = KeGetCurrentPrcb();
                SchedulerAssist = CurrentPrcb->SchedulerAssist;
                v99 = ~(unsigned __int16)(-1LL << (CurrentIrql + 1));
                v100 = (v99 & SchedulerAssist[5]) == 0;
                SchedulerAssist[5] &= v99;
                if ( v100 )
                  KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
              }
            }
          }
          __writecr8(CurrentIrql);
          AccessStatus = KeWaitForSingleObject(p_Event, Executive, 0, v94, 0LL);
          if ( AccessStatus != 257 )
            goto LABEL_245;
        }
        if ( KiIrqlFlags )
        {
          if ( (KiIrqlFlags & 1) != 0 )
          {
            v101 = KeGetCurrentIrql();
            if ( v101 <= 0xFu && CurrentIrql <= 0xFu && v101 >= 2u )
            {
              v102 = KeGetCurrentPrcb();
              v103 = v102->SchedulerAssist;
              v104 = ~(unsigned __int16)(-1LL << (CurrentIrql + 1));
              v100 = (v104 & v103[5]) == 0;
              v103[5] &= v104;
              if ( v100 )
                KiRemoveSystemWorkPriorityKick((__int64)v102);
            }
          }
        }
        __writecr8(CurrentIrql);
        IopCancelAlertedRequest(p_Event, (PIRP)v63);
      }
LABEL_245:
      AccessStatus = BugCheckParameter4[0];
      v70 = FileObject;
    }
    AccessStatus = IoGetIrpExtraCreateParameter((PIRP)v63, &v173);
    v107 = *(_DWORD *)(v14 + 84) & 8;
    v108 = v107 != 0;
    v109 = v173;
    if ( *(_DWORD *)(v63 + 48) == 260 )
    {
      P = *(PVOID *)(v63 + 160);
      if ( !v173 || IopSymlinkGetECP(v173, &v171) == -1073741275 )
      {
        AccessStatus = IopSymlinkCreateECP((PIRP)v63, (__int64)&v171);
        if ( AccessStatus >= 0 )
        {
          if ( !v109 )
          {
            AccessStatus = IoGetIrpExtraCreateParameter((PIRP)v63, &v173);
            v109 = v173;
          }
        }
        else
        {
          *(_QWORD *)(v63 + 56) = 0LL;
          *(_DWORD *)(v63 + 48) = AccessStatus;
        }
      }
      if ( *(_DWORD *)(v63 + 48) == 260 )
      {
        if ( v107 && v109 )
          v108 = IopCheckAndUpdateStopOnSymlinkEcp(v109, *(unsigned int *)(v63 + 56), P);
        IopSymlinkProcessReparse((PIRP)v63);
        v110 = *(_QWORD *)(v63 + 56) - 2684354563LL;
        if ( v110 <= 0x16 )
        {
          v111 = 4194817LL;
          if ( _bittest64(&v111, v110) )
          {
            v112 = P;
            v113 = *((unsigned __int16 *)P + 3);
            v114 = 0;
            if ( !(_WORD)v113 )
              v114 = 16;
            v106 = v159;
            LOBYTE(v106) = v114 | v159 & 0xEF;
            v159 = v106;
            v105 = (__int64)SourceString->Buffer - v113;
            if ( (v106 & 0x10) == 0 && *(_WORD *)(v105 + SourceString->Length) != 58 )
              goto LABEL_272;
            v115 = *(_DWORD *)(v14 + 64);
            if ( (v115 & 0x41) != 0 || *v177 )
              goto LABEL_272;
            v105 = 2684354563LL;
            if ( *(_DWORD *)P == -1610612733 )
              goto LABEL_270;
            if ( *(_DWORD *)P != -1610612724 )
              goto LABEL_272;
            if ( *((int *)P + 4) < 0 )
            {
LABEL_270:
              v116 = v115 | 1;
LABEL_271:
              *(_DWORD *)(v14 + 64) = v116;
            }
            else if ( (*((_DWORD *)P + 4) & 0x40000000) != 0 )
            {
              v116 = v115 | 0x40;
              goto LABEL_271;
            }
LABEL_272:
            if ( !v108 )
            {
              ExFreePoolWithTag(v112, 0);
              P = 0LL;
            }
          }
        }
      }
    }
    if ( *(_DWORD *)(v63 + 48) || *(_DWORD *)(v14 + 120) )
    {
      v117 = DeviceObject;
    }
    else
    {
      AccessStatus = IopSymlinkPropagateToExtensionIfNeeded(v70, v109, AbsoluteObjectName);
      v117 = DeviceObject;
      if ( AccessStatus < 0 )
      {
        IoCancelFileOpen(DeviceObject, v70);
        *(_QWORD *)(v63 + 56) = 0LL;
        *(_DWORD *)(v63 + 48) = AccessStatus;
      }
    }
    if ( v109 )
      *(_QWORD *)(v14 + 168) = v109;
    *(_OWORD *)BugCheckParameter4 = *(_OWORD *)(v63 + 48);
    AccessStatus = _mm_cvtsi128_si32(*(__m128i *)BugCheckParameter4);
    v70->Event.Header.SignalState = 1;
    v11 = v159;
    if ( (v159 & 4) != 0 )
    {
      *(_QWORD *)(v63 + 152) = CurrentThread;
      IopDequeueIrpFromThread((_QWORD *)v63, v105, v106);
    }
    if ( (*(_BYTE *)(v63 + 16) & 0x30) == 0x30 )
      ExFreePoolWithTag(*(PVOID *)(v63 + 24), 0);
    IoFreeIrp((PIRP)v63);
    v118 = BugCheckParameter4[1];
    *(_QWORD *)(v14 + 24) = BugCheckParameter4[1];
    if ( AccessStatus < 0 )
    {
      if ( (v70->Flags & 0x200000) != 0 )
      {
        HalPutDmaAdapter((PADAPTER_OBJECT)v70);
        *(_QWORD *)(v14 + 8) = 0LL;
        result = (unsigned int)AccessStatus;
        *(_DWORD *)(v14 + 16) = AccessStatus;
        return result;
      }
      if ( v70->FileName.Length )
      {
        ExFreePoolWithTag(v70->FileName.Buffer, 0);
        v70->FileName.Length = 0;
      }
      v70->DeviceObject = 0LL;
      HalPutDmaAdapter((PADAPTER_OBJECT)v70);
      IopDecrementDeviceObjectRef(BugCheckParameter1, 0);
      if ( v174 )
        IopDereferenceVpbAndFree(v174);
      *(_QWORD *)(v14 + 8) = 0LL;
      goto LABEL_422;
    }
    if ( AccessStatus != 260 )
    {
      RelatedDeviceObject = IoGetRelatedDeviceObject(v70);
      if ( v117 != RelatedDeviceObject )
      {
        Vpb = (ULONG_PTR)v70->Vpb;
        v143 = v174;
        if ( Vpb != v174 )
        {
          if ( Vpb )
            IopIncrementVpbRefCount(Vpb, 1);
          if ( v143 )
            IopDereferenceVpbAndFree(v143);
        }
      }
      if ( (v159 & 0x40) == 0 )
      {
        *a11 = v70;
        *(_DWORD *)(v14 + 32) = -1096154543;
        ObfReferenceObject(v70);
        RelatedFileObject = v70->RelatedFileObject;
        if ( (!RelatedFileObject || (RelatedFileObject->Flags & 0x400000) != 0) && !v70->FileName.Length )
        {
          DeviceType = RelatedDeviceObject->DeviceType;
          if ( (unsigned int)DeviceType <= 0x20 )
          {
            v146 = 0x100000308LL;
            if ( _bittest64(&v146, DeviceType) )
              v70->Flags |= 0x400000u;
          }
        }
        result = LODWORD(BugCheckParameter4[0]);
        *(_DWORD *)(v14 + 16) = BugCheckParameter4[0];
        return result;
      }
      if ( *(_BYTE *)(v14 + 137) )
      {
        if ( *(_BYTE *)(v14 + 208) )
        {
          FileInformation = IoQueryFileInformation(
                              v70,
                              *(FILE_INFORMATION_CLASS *)(v14 + 200),
                              *(_DWORD *)(v14 + 204),
                              *(PVOID *)(v14 + 112),
                              (PULONG)(v14 + 204));
          goto LABEL_413;
        }
        v148 = 0;
        FastIoDispatch = RelatedDeviceObject->DriverObject->FastIoDispatch;
        if ( *(_BYTE *)(v14 + 139) )
        {
          if ( FastIoDispatch )
          {
            if ( FastIoDispatch->SizeOfFastIoDispatch > 0x70 )
            {
              FastIoQueryNetworkOpenInfo = (__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD))FastIoDispatch->FastIoQueryNetworkOpenInfo;
              if ( FastIoQueryNetworkOpenInfo )
              {
                v155 = (MmVerifierData & 0x10) != 0 ? (void *)VfFastIoSnapState() : 0LL;
                LOBYTE(v140) = 1;
                v148 = FastIoQueryNetworkOpenInfo(
                         v70,
                         v140,
                         *(_QWORD *)(v14 + 104),
                         BugCheckParameter4,
                         RelatedDeviceObject);
                if ( v155 )
                  VfFastIoCheckState(v155);
              }
            }
          }
          if ( !v148 )
          {
            v156 = IoQueryFileInformation(
                     v70,
                     FileNetworkOpenInformation,
                     0x38u,
                     *(PVOID *)(v14 + 104),
                     &ReturnedLength);
            AccessStatus = v156;
            if ( v156 == -1073741811 || v156 == -1073741822 )
            {
              FileInformation = IopGetNetworkOpenInformation((PADAPTER_OBJECT)v70);
LABEL_413:
              AccessStatus = FileInformation;
            }
          }
        }
        else
        {
          v150 = 0LL;
          v171 = 0LL;
          if ( FastIoDispatch )
            FastIoQueryBasicInfo = (__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD))FastIoDispatch->FastIoQueryBasicInfo;
          else
            FastIoQueryBasicInfo = 0LL;
          v184 = FastIoQueryBasicInfo;
          if ( FastIoQueryBasicInfo )
          {
            v152 = (MmVerifierData & 0x10) != 0 ? (void *)VfFastIoSnapState() : 0LL;
            v182 = v152;
            LOBYTE(v150) = 1;
            v148 = FastIoQueryBasicInfo(v70, v150, *(_QWORD *)(v14 + 96), BugCheckParameter4, RelatedDeviceObject);
            v168 = v148;
            if ( v152 )
              VfFastIoCheckState(v152);
          }
          if ( v148 )
          {
            AccessStatus = BugCheckParameter4[0];
          }
          else
          {
            Pool = IopVerifierExAllocatePool(NonPagedPoolNx, 0x28uLL);
            v171 = Pool;
            if ( Pool )
            {
              AccessStatus = IoQueryFileInformation(v70, FileBasicInformation, 0x28u, Pool, &ReturnedLength);
              if ( AccessStatus >= 0 )
                memmove(*(void **)(v14 + 96), Pool, ReturnedLength);
              ExFreePoolWithTag(Pool, 0);
            }
            else
            {
              AccessStatus = -1073741670;
            }
          }
        }
      }
      *(_DWORD *)(v14 + 32) = -1096154543;
      IopCloseFile(0LL, v70, 1LL, 1LL);
      HalPutDmaAdapter((PADAPTER_OBJECT)v70);
      *(_QWORD *)(v14 + 8) = 0LL;
      result = (unsigned int)AccessStatus;
      *(_DWORD *)(v14 + 16) = AccessStatus;
      return result;
    }
    if ( (v118 & 0xFFFFFFFFFFFFFFFDuLL) != 0
      && ((v119 = v118 - 2684354563u, v118 - 2684354563u > 0x16) || (v120 = 4194817LL, !_bittest64(&v120, v119)) || v108) )
    {
      v121 = AbsoluteObjectName;
    }
    else
    {
      v121 = AbsoluteObjectName;
      if ( AbsoluteObjectName->MaximumLength < v70->FileName.Length )
      {
        v122 = (wchar_t *)ExAllocatePoolWithTag(PagedPool, v70->FileName.Length, 0x63466F49u);
        if ( !v122 )
        {
          *(_DWORD *)(v14 + 16) = -1073741670;
          return 3221225626LL;
        }
        v123 = v121->Buffer;
        if ( v123 )
          ExFreePoolWithTag(v123, 0);
        v121->Buffer = v122;
        v121->MaximumLength = v70->FileName.Length;
      }
      RtlCopyUnicodeString(v121, &v70->FileName);
      if ( BugCheckParameter4[1] - 2684354563u <= 0x16 )
      {
        v124 = 4194817LL;
        if ( _bittest64(&v124, BugCheckParameter4[1] - 2684354563u) )
          *(_QWORD *)(v14 + 40) = 0LL;
      }
    }
    if ( v70->FileName.Length )
    {
      ExFreePoolWithTag(v70->FileName.Buffer, 0);
      v70->FileName.Length = 0;
    }
    v70->DeviceObject = 0LL;
    HalPutDmaAdapter((PADAPTER_OBJECT)v70);
    *(_QWORD *)(v14 + 8) = 0LL;
    v125 = BugCheckParameter1;
    IopDecrementDeviceObjectRef(BugCheckParameter1, 0);
    if ( v174 )
      IopDereferenceVpbAndFree(v174);
    v126 = BugCheckParameter4[1];
    if ( BugCheckParameter4[1] != 1 )
    {
      *(_QWORD *)(v14 + 40) = 0LL;
      v133 = 4194817LL;
      if ( v126 - 2684354563u <= 0x16 && _bittest64(&v133, v126 - 2684354563u) )
      {
        *(_DWORD *)(v14 + 152) |= 0x10u;
        v134 = *(_DWORD *)(v14 + 152);
        v135 = *(unsigned int *)(v125 + 72);
        if ( (unsigned int)v135 <= 0x24 && (v136 = 0x1080020084LL, _bittest64(&v136, v135)) )
          v137 = v134 | 8;
        else
          v137 = v134 & 0xFFFFFFF7;
        *(_DWORD *)(v14 + 152) = v137;
      }
      if ( *(_BYTE *)(v14 + 136) )
        KeBugCheckEx(0xF9u, v125, (ULONG_PTR)DeviceObject, (ULONG_PTR)v121, v126);
      if ( (*(_DWORD *)(*(_QWORD *)(v125 + 312) + 32LL) & 0x800) == 0 )
      {
        v138 = v185;
        *(_QWORD *)&v185->RemainingDesiredAccess = v185->OriginalDesiredAccess;
        v138->Flags &= ~0x100u;
      }
      if ( v126 - 2684354563u <= 0x16 && _bittest64(&v133, v126 - 2684354563u) && v108 )
      {
        *(_QWORD *)(v14 + 24) = P;
        *(_DWORD *)(v14 + 16) = -2147483603;
        return 2147483693LL;
      }
      else if ( v126 == 2684354585 || v126 == 2 )
      {
        v139 = a10;
        *(_QWORD *)(v139 + 8) = PsGetParentSilo(*(_QWORD *)(a10 + 8));
        return 872LL;
      }
      else
      {
        return 260LL;
      }
    }
    if ( (unsigned int)++v172 > 0x20 )
      return 3221225473LL;
    *a11 = 0LL;
    FileObject = 0LL;
    v12 = v185;
    v13 = (unsigned int *)BugCheckParameter2;
  }
  v71 = *(_QWORD **)(v14 + 144);
  memset(v71, 0, 0x110uLL);
  v70 = (PFILE_OBJECT)(v71 + 6);
  FileObject = (PFILE_OBJECT)(v71 + 6);
  *((_BYTE *)v71 + 24) = ObHeaderCookie ^ *((_BYTE *)IoFileObjectType + 40) ^ BYTE1(v71);
  *v71 = 1LL;
  if ( (a5 & 0x40) == 0 )
    *((_DWORD *)v71 + 32) |= 0x20000u;
  *(_DWORD *)&v70->Type = 14155781;
  v71[14] = *(_QWORD *)(v14 + 40);
  v69 = BugCheckParameter1;
  v70->DeviceObject = (PDEVICE_OBJECT)BugCheckParameter1;
  if ( (*(_DWORD *)(v14 + 152) & 0x20) == 0
    || !v186
    || (AttachedDevice->Flags & 0x40000) == 0
    && ((v72 = AttachedDevice->DeviceType, (unsigned int)v72 > 0x35)
     || (v73 = 0x20000100100108LL, !_bittest64(&v73, v72)))
    || (AccessStatus = IopRetrieveTransactionParameters(AttachedDevice, v14, DesiredAccess, v70), AccessStatus >= 0) )
  {
    if ( !PsIsHostSilo(*(_QWORD *)(a10 + 8))
      || (v74 = (__int64)v70->RelatedFileObject) != 0 && (v75 = IoGetSilo(v74), !PsIsHostSilo(v75)) )
    {
      v176 = 0LL;
      if ( v70->RelatedFileObject && PsIsServerSilo(*(_QWORD *)(a10 + 8)) )
        Silo = (_DWORD *)IoGetSilo(v76);
      else
        Silo = *(_DWORD **)(a10 + 8);
      if ( !PsIsHostSilo((__int64)Silo) )
      {
        AccessStatus = PsAcquireSiloHardReference(Silo);
        if ( AccessStatus < 0 )
          goto LABEL_321;
        SetSpecificExtension = IopGetSetSpecificExtension((__int64)v70, 7u, 0x10u, 1, &v176, 0LL);
        AccessStatus = SetSpecificExtension;
        if ( SetSpecificExtension < 0 )
        {
          PsReleaseSiloHardReference(Silo);
          SetSpecificExtension = AccessStatus;
        }
        v79 = v176;
        if ( SetSpecificExtension < 0 )
        {
LABEL_321:
          IoFreeIrp((PIRP)v63);
          v128 = BugCheckParameter1;
          goto LABEL_319;
        }
        *v176 = 16;
        *((_QWORD *)v79 + 1) = Silo;
        v79[1] |= 1u;
        ObfReferenceObjectWithTag(Silo, 0x70536F49u);
      }
      v69 = BugCheckParameter1;
      v65 = (__int64)v177;
    }
    goto LABEL_185;
  }
  IoFreeIrp((PIRP)v63);
  v128 = v69;
LABEL_319:
  IopDecrementDeviceObjectRef(v128, 0);
  if ( v53 )
  {
    IopDereferenceVpbAndFree(v53);
    result = (unsigned int)AccessStatus;
    *(_DWORD *)(v14 + 16) = AccessStatus;
    return result;
  }
LABEL_422:
  result = (unsigned int)AccessStatus;
LABEL_423:
  *(_DWORD *)(v14 + 16) = result;
  return result;
}
