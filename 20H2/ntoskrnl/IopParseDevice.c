/*
 * XREFs of IopParseDevice @ 0x1405FE3D0
 * Callers:
 *     IopParseFile @ 0x1405FE010 (IopParseFile.c)
 * Callees:
 *     PsReleaseSiloHardReference @ 0x140200940 (PsReleaseSiloHardReference.c)
 *     PsAcquireSiloHardReference @ 0x1402009F0 (PsAcquireSiloHardReference.c)
 *     ObfReferenceObjectWithTag @ 0x1402089E0 (ObfReferenceObjectWithTag.c)
 *     SeAccessCheck @ 0x140209C20 (SeAccessCheck.c)
 *     IopVerifierExAllocatePool @ 0x14020AC94 (IopVerifierExAllocatePool.c)
 *     IopIncrementVpbRefCount @ 0x14020B07C (IopIncrementVpbRefCount.c)
 *     IopSymlinkGetECP @ 0x14020B134 (IopSymlinkGetECP.c)
 *     IopDeleteFileObjectExtension @ 0x14020B5C0 (IopDeleteFileObjectExtension.c)
 *     IopDecrementDeviceObjectRef @ 0x14020D560 (IopDecrementDeviceObjectRef.c)
 *     IopCheckDeviceAndDriver @ 0x14020D6F0 (IopCheckDeviceAndDriver.c)
 *     RtlCopyUnicodeString @ 0x14020D870 (RtlCopyUnicodeString.c)
 *     IoGetAttachedDevice @ 0x14020D8F0 (IoGetAttachedDevice.c)
 *     IoCallDriverWithTracing @ 0x14020D910 (IoCallDriverWithTracing.c)
 *     KeInitializeEvent @ 0x14020D960 (KeInitializeEvent.c)
 *     IopCheckVpbMounted @ 0x14020D990 (IopCheckVpbMounted.c)
 *     IopDoFullTraverseCheck @ 0x14020DBB0 (IopDoFullTraverseCheck.c)
 *     PsIsHostSilo @ 0x14020DC00 (PsIsHostSilo.c)
 *     IopDereferenceVpbAndFree @ 0x14020DE80 (IopDereferenceVpbAndFree.c)
 *     RtlInitUnicodeString @ 0x140210D50 (RtlInitUnicodeString.c)
 *     IoGetRelatedDeviceObject @ 0x140211290 (IoGetRelatedDeviceObject.c)
 *     IopAllocateIrpExReturn @ 0x1402113B0 (IopAllocateIrpExReturn.c)
 *     IoFreeIrp @ 0x140218F40 (IoFreeIrp.c)
 *     IopDequeueIrpFromThread @ 0x14021B3A0 (IopDequeueIrpFromThread.c)
 *     KeWaitForSingleObject @ 0x14021B560 (KeWaitForSingleObject.c)
 *     KeLeaveCriticalRegionThread @ 0x14021EB00 (KeLeaveCriticalRegionThread.c)
 *     HalPutDmaAdapter @ 0x1402211F0 (HalPutDmaAdapter.c)
 *     ObfReferenceObject @ 0x140221300 (ObfReferenceObject.c)
 *     IopQueueThreadIrp @ 0x140221360 (IopQueueThreadIrp.c)
 *     ExReleaseResourceLite @ 0x1402214C0 (ExReleaseResourceLite.c)
 *     ExAcquireResourceSharedLite @ 0x140222030 (ExAcquireResourceSharedLite.c)
 *     KeEnterCriticalRegionThread @ 0x14022C1A0 (KeEnterCriticalRegionThread.c)
 *     IopSetFileObjectExtensionFlag @ 0x14023CDD0 (IopSetFileObjectExtensionFlag.c)
 *     IoGetSilo @ 0x14023CE10 (IoGetSilo.c)
 *     PsIsServerSilo @ 0x14023CE40 (PsIsServerSilo.c)
 *     PsGetCurrentServerSilo @ 0x14023F0F0 (PsGetCurrentServerSilo.c)
 *     PsGetServerSiloServiceSessionId @ 0x14023F2F0 (PsGetServerSiloServiceSessionId.c)
 *     KeReadStateSemaphore @ 0x140240420 (KeReadStateSemaphore.c)
 *     PsGetCurrentProcessSessionId @ 0x140245DF0 (PsGetCurrentProcessSessionId.c)
 *     CmSiFreeMemory @ 0x140267C30 (CmSiFreeMemory.c)
 *     IopGetSetSpecificExtension @ 0x14029F8F4 (IopGetSetSpecificExtension.c)
 *     PsIsThreadTerminating @ 0x1402E55A0 (PsIsThreadTerminating.c)
 *     IopSymlinkGetMostRecentlyUsedName @ 0x14031B9E8 (IopSymlinkGetMostRecentlyUsedName.c)
 *     IopCreateSecurityCheck @ 0x140323A1C (IopCreateSecurityCheck.c)
 *     IopGetDevicePDO @ 0x1403618D8 (IopGetDevicePDO.c)
 *     RtlGetActiveConsoleId @ 0x1403637A0 (RtlGetActiveConsoleId.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403F1DD4 (KiRemoveSystemWorkPriorityKick.c)
 *     KeBugCheckEx @ 0x1403FBCA0 (KeBugCheckEx.c)
 *     _guard_dispatch_icall @ 0x140405F40 (_guard_dispatch_icall.c)
 *     memmove @ 0x140411040 (memmove.c)
 *     memset @ 0x140411300 (memset.c)
 *     IopCheckSessionDeviceAccess @ 0x140504BDC (IopCheckSessionDeviceAccess.c)
 *     IopAllowRemoteDASD @ 0x140505E90 (IopAllowRemoteDASD.c)
 *     IopIsSecurityContextAppContainer @ 0x140505F4C (IopIsSecurityContextAppContainer.c)
 *     SeFastTraverseCheck @ 0x140594360 (SeFastTraverseCheck.c)
 *     FeatureServicing_40524482_EnableKey @ 0x1405CBC40 (FeatureServicing_40524482_EnableKey.c)
 *     SeTokenIsAdmin @ 0x1405E34A0 (SeTokenIsAdmin.c)
 *     SeOpenObjectAuditAlarm @ 0x1405F74E0 (SeOpenObjectAuditAlarm.c)
 *     RtlMapGenericMask @ 0x1406002F0 (RtlMapGenericMask.c)
 *     IoGetIrpExtraCreateParameter @ 0x140600340 (IoGetIrpExtraCreateParameter.c)
 *     IopCheckBackupRestorePrivilege @ 0x140600360 (IopCheckBackupRestorePrivilege.c)
 *     SeSetAccessStateGenericMapping @ 0x140600530 (SeSetAccessStateGenericMapping.c)
 *     IopAllocRealFileObject @ 0x140600550 (IopAllocRealFileObject.c)
 *     IopSymlinkPropagateToExtensionIfNeeded @ 0x140600990 (IopSymlinkPropagateToExtensionIfNeeded.c)
 *     IopRetrieveTransactionParameters @ 0x140600C60 (IopRetrieveTransactionParameters.c)
 *     IopQueryInformation @ 0x140600E10 (IopQueryInformation.c)
 *     IopCloseFile @ 0x14060E6B0 (IopCloseFile.c)
 *     SeLockSubjectContext @ 0x1406168B0 (SeLockSubjectContext.c)
 *     SeUnlockSubjectContext @ 0x140616910 (SeUnlockSubjectContext.c)
 *     RtlEqualUnicodeString @ 0x14061FE70 (RtlEqualUnicodeString.c)
 *     SeAppendPrivileges @ 0x1406B71B0 (SeAppendPrivileges.c)
 *     IopCheckTopDeviceHint @ 0x1406BC8A0 (IopCheckTopDeviceHint.c)
 *     IopSymlinkUpdateECP @ 0x1406C6884 (IopSymlinkUpdateECP.c)
 *     IopSymlinkCreateECP @ 0x1406C6C0C (IopSymlinkCreateECP.c)
 *     IopSymlinkProcessReparse @ 0x1406C6EE4 (IopSymlinkProcessReparse.c)
 *     IoQueryFileInformation @ 0x1406E2780 (IoQueryFileInformation.c)
 *     IopSymlinkEnforceEnabledTypes @ 0x1406E3EB4 (IopSymlinkEnforceEnabledTypes.c)
 *     IopCancelAlertedRequest @ 0x140893ABC (IopCancelAlertedRequest.c)
 *     IoCancelFileOpen @ 0x140896050 (IoCancelFileOpen.c)
 *     IopCheckAndUpdateStopOnSymlinkEcp @ 0x140896AF4 (IopCheckAndUpdateStopOnSymlinkEcp.c)
 *     IopGetNetworkOpenInformation @ 0x1408972C4 (IopGetNetworkOpenInformation.c)
 *     PsGetParentSilo @ 0x140908340 (PsGetParentSilo.c)
 *     ExAllocatePoolWithTag @ 0x1409B7010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x1409B70B0 (ExFreePoolWithTag.c)
 *     VfFastIoCheckState @ 0x1409CC9C4 (VfFastIoCheckState.c)
 *     VfFastIoSnapState @ 0x1409CCA9C (VfFastIoSnapState.c)
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
  int v11; // r14d
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
  __int64 CurrentServerSilo; // rax
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
  __int64 v35; // rax
  int v36; // ebx
  bool v37; // bl
  struct _SECURITY_SUBJECT_CONTEXT *p_SubjectSecurityContext; // rdi
  char v39; // r14
  PACCESS_TOKEN ClientToken; // rcx
  ACCESS_MASK v41; // eax
  UNICODE_STRING *v42; // rsi
  char v43; // al
  char v44; // r14
  unsigned __int16 Length; // r8
  __int64 v46; // rdx
  __int64 v47; // r15
  PDEVICE_OBJECT AttachedDevice; // r14
  int v49; // esi
  __int64 v50; // rax
  int v51; // ecx
  _BOOL8 v52; // r8
  PCUNICODE_STRING v53; // rsi
  int v54; // eax
  struct _ACCESS_STATE *v55; // rsi
  __int64 Irp; // rax
  __int64 v57; // r13
  char v58; // dl
  __int64 v59; // rsi
  int v60; // eax
  int v61; // r8d
  char v62; // al
  ULONG_PTR v63; // rbx
  __int64 v64; // r8
  __int64 v65; // r9
  PFILE_OBJECT v66; // rdi
  _QWORD *v67; // rbx
  unsigned __int64 v68; // rax
  __int64 v69; // rcx
  __int64 v70; // rcx
  __int64 v71; // rax
  __int64 v72; // rdx
  _DWORD *Silo; // rbx
  __int64 v74; // r9
  NTSTATUS SetSpecificExtension; // eax
  _DWORD *v76; // rsi
  __int64 v77; // rax
  int v78; // edx
  unsigned __int16 v79; // ax
  wchar_t *PoolWithTag; // rax
  wchar_t *Buffer; // rcx
  unsigned __int16 v82; // ax
  wchar_t *v83; // rax
  ULONG_PTR v84; // rdi
  __int16 *MostRecentlyUsedName; // rdx
  NTSTATUS updated; // eax
  struct _KSEMAPHORE *p_Event; // rsi
  char v88; // dl
  NTSTATUS v89; // eax
  unsigned __int8 v90; // al
  int v91; // edx
  BOOLEAN v92; // di
  unsigned __int8 CurrentIrql; // bl
  unsigned __int8 v94; // al
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  int v97; // eax
  bool v98; // zf
  unsigned __int8 v99; // al
  struct _KPRCB *v100; // r10
  _DWORD *v101; // r9
  int v102; // eax
  int v103; // esi
  unsigned __int8 v104; // r15
  struct _ECP_LIST *v105; // r14
  PVOID v106; // rbx
  unsigned __int64 v107; // rcx
  __int64 v108; // rax
  PVOID v109; // r9
  __int64 v110; // rcx
  char v111; // al
  int v112; // r8d
  int v113; // ecx
  int v114; // ecx
  PDEVICE_OBJECT v115; // rbx
  ULONG_PTR v116; // rax
  unsigned __int64 v117; // rcx
  __int64 v118; // rax
  PUNICODE_STRING v119; // r13
  wchar_t *v120; // rsi
  wchar_t *v121; // rcx
  __int64 v122; // rax
  ULONG_PTR v123; // rdi
  ULONG_PTR v124; // rdx
  struct _DMA_ADAPTER *v125; // rcx
  ULONG_PTR v126; // rcx
  PFILE_OBJECT v127; // rbx
  ULONG_PTR v128; // rcx
  int v129; // ecx
  void *v130; // rcx
  __int64 v131; // r8
  int v132; // ecx
  unsigned __int64 v133; // rax
  __int64 v134; // r10
  unsigned int v135; // ecx
  struct _ACCESS_STATE *v136; // rcx
  __int64 v137; // rbx
  __int64 v138; // rdx
  PDEVICE_OBJECT RelatedDeviceObject; // r14
  ULONG_PTR Vpb; // rcx
  __int64 v141; // rbx
  struct _FILE_OBJECT *RelatedFileObject; // rax
  unsigned __int64 DeviceType; // rax
  __int64 v144; // rcx
  NTSTATUS FileInformation; // eax
  char v146; // si
  PFAST_IO_DISPATCH FastIoDispatch; // rcx
  __int64 v148; // rdx
  __int64 (__fastcall *FastIoQueryBasicInfo)(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD); // rbx
  void *v150; // r15
  PVOID Pool; // rbx
  __int64 (__fastcall *FastIoQueryNetworkOpenInfo)(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD); // r15
  void *v153; // rbx
  NTSTATUS v154; // eax
  ACCESS_MASK GrantedAccess; // [rsp+40h] [rbp-128h]
  NTSTATUS AccessStatus; // [rsp+60h] [rbp-108h] BYREF
  int v157; // [rsp+64h] [rbp-104h]
  int v158; // [rsp+68h] [rbp-100h]
  ACCESS_MASK v159; // [rsp+6Ch] [rbp-FCh] BYREF
  ULONG_PTR BugCheckParameter1; // [rsp+70h] [rbp-F8h]
  PPRIVILEGE_SET Privileges; // [rsp+78h] [rbp-F0h] BYREF
  ACCESS_MASK DesiredAccess; // [rsp+80h] [rbp-E8h]
  PDEVICE_OBJECT DeviceObject; // [rsp+88h] [rbp-E0h] BYREF
  struct _KTHREAD *CurrentThread; // [rsp+90h] [rbp-D8h]
  PFILE_OBJECT FileObject; // [rsp+98h] [rbp-D0h] BYREF
  char v166; // [rsp+A0h] [rbp-C8h]
  ULONG ReturnedLength; // [rsp+A4h] [rbp-C4h] BYREF
  PVOID P; // [rsp+A8h] [rbp-C0h]
  PVOID v169; // [rsp+B0h] [rbp-B8h] BYREF
  int v170; // [rsp+B8h] [rbp-B0h]
  struct _ECP_LIST *v171; // [rsp+C0h] [rbp-A8h] BYREF
  __int64 v172; // [rsp+C8h] [rbp-A0h]
  ULONG_PTR BugCheckParameter4[2]; // [rsp+D0h] [rbp-98h] BYREF
  _DWORD *v174; // [rsp+E0h] [rbp-88h] BYREF
  _BYTE *v175; // [rsp+E8h] [rbp-80h]
  UNICODE_STRING ObjectTypeName; // [rsp+F0h] [rbp-78h] BYREF
  struct _ECP_LIST *ExtraCreateParameter; // [rsp+100h] [rbp-68h] BYREF
  __int128 v178; // [rsp+108h] [rbp-60h] BYREF
  __int64 v179; // [rsp+118h] [rbp-50h]
  void *v180; // [rsp+120h] [rbp-48h]
  __int64 retaddr; // [rsp+168h] [rbp+0h]
  __int64 (__fastcall *v183)(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD); // [rsp+178h] [rbp+10h] BYREF
  struct _ACCESS_STATE *v184; // [rsp+180h] [rbp+18h]
  char v185; // [rsp+188h] [rbp+20h]

  v185 = a4;
  v184 = a3;
  v12 = a3;
  v13 = (unsigned int *)BugCheckParameter2;
  v14 = a8;
  v159 = 0;
  AccessStatus = 0;
  *(_OWORD *)BugCheckParameter4 = 0LL;
  v178 = 0LL;
  v179 = 0LL;
  v170 = 0;
  LOBYTE(v158) = 0;
  ReturnedLength = 0;
  ObjectTypeName = 0LL;
  Privileges = 0LL;
  P = 0LL;
  v171 = 0LL;
  v169 = 0LL;
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
    if ( *(_WORD *)v14 != 8 || *(_WORD *)(v14 + 2) != 224 )
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
          goto LABEL_431;
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
      goto LABEL_431;
    if ( (*(_DWORD *)(*(_QWORD *)(v17 + 312) + 32LL) & 0x400) != 0 && !*(_QWORD *)(v14 + 40) )
    {
      CurrentServerSilo = PsGetCurrentServerSilo();
      ServerSiloServiceSessionId = PsGetServerSiloServiceSessionId(CurrentServerSilo);
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
            IopDecrementDeviceObjectRef(v17, 0, 0);
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
    LOBYTE(v31) = v158;
    if ( v30 && (*(_DWORD *)(v30 + 80) & 0x400000) != 0 )
    {
      v31 = (unsigned __int8)v158;
      if ( !SourceString->Length )
        v31 = 1;
      v158 = v31;
    }
    if ( ((v32 = v185) != 0 || (*(_DWORD *)(v14 + 84) & 1) != 0) && (!v30 || (_BYTE)v31) && !v29 )
    {
      v33 = v11 & 0xDF;
      if ( SourceString->Length )
      {
        p_SubjectSecurityContext = &v12->SubjectSecurityContext;
        if ( IopDoFullTraverseCheck(v17, v185, &v12->SubjectSecurityContext) )
        {
          v42 = AbsoluteObjectName;
          LOBYTE(v11) = (v33 ^ IopCreateSecurityCheck(
                                 v17,
                                 0LL,
                                 v12,
                                 RemainingDesiredAccess | 0x20,
                                 1,
                                 Privileges,
                                 &v159,
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
                                              &v159,
                                              &AccessStatus)) & 1 ^ (v11 | 0x20);
              if ( Privileges )
              {
                SeAppendPrivileges(v12, Privileges);
                CmSiFreeMemory(Privileges);
              }
            }
            ExReleaseResourceLite(&IopSecurityResource);
            KeLeaveCriticalRegionThread((__int64)CurrentThread);
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
            v36 = PsGetServerSiloServiceSessionId(v35);
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
                                 &v159,
                                 &AccessStatus)) & 1 ^ v39;
          if ( Privileges )
          {
            SeAppendPrivileges(v12, Privileges);
            CmSiFreeMemory(Privileges);
          }
          if ( (v11 & 1) != 0 )
          {
            v41 = v159;
            v12->PreviouslyGrantedAccess |= v159;
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
        KeLeaveCriticalRegionThread((__int64)CurrentThread);
      }
      if ( (v11 & 0x20) != 0 )
        SeUnlockSubjectContext(p_SubjectSecurityContext);
      if ( (v11 & 1) == 0 )
        goto LABEL_317;
      v32 = v185;
    }
    else
    {
      v42 = AbsoluteObjectName;
    }
    if ( *(_BYTE *)(v14 + 137) || *(_BYTE *)(v14 + 138) )
      v43 = 64;
    else
      v43 = 0;
    v44 = v43 | v11 & 0xBF;
    Length = SourceString->Length;
    if ( SourceString->Length
      || (v46 = *(_QWORD *)(v14 + 40)) != 0
      || (RemainingDesiredAccess & 0xFEE1FF7F) != 0
      || (v44 & 0x40) != 0 )
    {
      LOBYTE(v11) = v44 & 0xF7;
      v46 = *(_QWORD *)(v14 + 40);
    }
    else
    {
      LOBYTE(v11) = v44 | 8;
    }
    v157 = v11;
    v47 = 0LL;
    v172 = 0LL;
    if ( !v46 || (*(_DWORD *)(v46 + 80) & 0x800) != 0 )
    {
      AttachedDevice = (PDEVICE_OBJECT)v17;
      DeviceObject = (PDEVICE_OBJECT)v17;
      v49 = v157;
      if ( *(_QWORD *)(v17 + 56) && (v157 & 8) == 0 )
      {
        if ( (*(_DWORD *)(v17 + 52) & 0x100) != 0
          && (*(_DWORD *)(*(_QWORD *)(v17 + 312) + 32LL) & 0x800) == 0
          && (v32 || (*(_DWORD *)(v14 + 84) & 1) != 0)
          && (v46 || Length)
          && !(_BYTE)v158 )
        {
          Privileges = 0LL;
          if ( !IopCreateSecurityCheck(
                  v17,
                  (void *)v17,
                  v184,
                  RemainingDesiredAccess,
                  *(_DWORD *)(v14 + 88),
                  0LL,
                  &v159,
                  AbsoluteObjectName,
                  &ObjectTypeName,
                  (__int64)CurrentThread,
                  0) )
            goto LABEL_317;
        }
        v50 = IopCheckVpbMounted(v14, v17, (__int64)SourceString, &AccessStatus);
        v47 = v50;
        v172 = v50;
        if ( !v50 )
          return (unsigned int)AccessStatus;
        AttachedDevice = *(PDEVICE_OBJECT *)(v50 + 8);
        DeviceObject = AttachedDevice;
      }
      if ( (*(_DWORD *)(v14 + 152) & 1) != 0 )
      {
        LOBYTE(v49) = v49 | 2;
        v157 = v49;
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
      if ( *(_QWORD *)(v46 + 16) )
      {
        v47 = *(_QWORD *)(v46 + 16);
        v172 = v47;
        if ( (*(_DWORD *)(v17 + 52) & 0x100) != 0
          && (*(_DWORD *)(*(_QWORD *)(v17 + 312) + 32LL) & 0x800) == 0
          && (v32 || (*(_DWORD *)(v14 + 84) & 1) != 0)
          && !(_BYTE)v158 )
        {
          Privileges = 0LL;
          if ( !IopCreateSecurityCheck(
                  v17,
                  (void *)v17,
                  v184,
                  RemainingDesiredAccess,
                  *(_DWORD *)(v14 + 88),
                  0LL,
                  &v159,
                  v42,
                  &ObjectTypeName,
                  (__int64)CurrentThread,
                  0) )
            goto LABEL_317;
        }
        IopIncrementVpbRefCount(v47, 1);
      }
      if ( (*(_DWORD *)(v14 + 152) & 1) != 0 )
      {
        if ( v47 )
        {
          AttachedDevice = *(PDEVICE_OBJECT *)(v47 + 8);
          DeviceObject = AttachedDevice;
        }
        v49 = v157;
        LOBYTE(v49) = v157 | 2;
        v157 = v49;
      }
      else
      {
        LOBYTE(v49) = v157;
      }
    }
    v51 = *(_DWORD *)(v17 + 52);
    if ( (v51 & 0x40001) != 0
      && (*(_DWORD *)(v17 + 48) & 0x600100) == 0
      && (v51 & 0x100) == 0
      && IopIsSecurityContextAppContainer(&v184->SubjectSecurityContext) )
    {
      if ( !v47 )
        goto LABEL_317;
      if ( (*(_DWORD *)(*(_QWORD *)(v47 + 8) + 48LL) & 0x20000) == 0 )
      {
        IopDereferenceVpbAndFree(v47);
LABEL_317:
        IopDecrementDeviceObjectRef(v17, 0, 0);
        return 3221225506LL;
      }
    }
    if ( (v49 & 2) != 0 )
    {
      v52 = (v49 & 8) != 0;
      v53 = SourceString;
      AccessStatus = IopCheckTopDeviceHint(&DeviceObject, v14, v52, SourceString);
      if ( AccessStatus < 0 )
      {
        if ( v47 )
          IopDereferenceVpbAndFree(v47);
        IopDecrementDeviceObjectRef(v17, 0, 0);
        return (unsigned int)AccessStatus;
      }
      AttachedDevice = DeviceObject;
    }
    else
    {
      v53 = SourceString;
    }
    v54 = *(_DWORD *)(v14 + 152);
    if ( (v54 & 0x10) != 0 )
      *(_DWORD *)(v14 + 152) = v54 & 0xFFFFFFEF;
    if ( ((AttachedDevice->Characteristics & 0x100) != 0
       || IopRequireDeviceAccessCheck && (*(_DWORD *)(v17 + 52) & 0x100000) != 0)
      && (v185 || (*(_DWORD *)(v14 + 84) & 1) != 0)
      && (*(_QWORD *)(v14 + 40) || v53->Length) )
    {
      v55 = v184;
      if ( !(_BYTE)v158 )
      {
        Privileges = 0LL;
        if ( !IopCreateSecurityCheck(
                v17,
                AttachedDevice,
                v184,
                RemainingDesiredAccess,
                *(_DWORD *)(v14 + 88),
                0LL,
                &v159,
                AbsoluteObjectName,
                &ObjectTypeName,
                (__int64)CurrentThread,
                1) )
        {
          IopDecrementDeviceObjectRef(v17, 0, 0);
          if ( v47 )
            IopDereferenceVpbAndFree(v47);
          return 3221225506LL;
        }
      }
    }
    else
    {
      v55 = v184;
    }
    Irp = IopAllocateIrpExReturn((__int64)AttachedDevice, (unsigned __int8)AttachedDevice->StackSize, 0LL, retaddr);
    v57 = Irp;
    if ( !Irp )
    {
      IopDecrementDeviceObjectRef(BugCheckParameter1, 0, 0);
      if ( v47 )
        IopDereferenceVpbAndFree(v47);
      return 3221225626LL;
    }
    *(_QWORD *)(Irp + 152) = CurrentThread;
    v58 = v185;
    *(_BYTE *)(Irp + 64) = v185;
    *(_DWORD *)(Irp + 16) = 2180;
    *(_QWORD *)&v178 = a9;
    *((_QWORD *)&v178 + 1) = v55;
    LODWORD(v179) = RemainingDesiredAccess;
    HIDWORD(v179) = *(_DWORD *)(v14 + 64);
    v59 = *(_QWORD *)(Irp + 184) - 72LL;
    v175 = (_BYTE *)v59;
    *(_BYTE *)(v59 + 3) = 0;
    v60 = *(_DWORD *)(v14 + 120);
    v61 = a5;
    if ( v60 )
    {
      *(_BYTE *)v59 = v60 == 1 ? 1 : 19;
      *(_QWORD *)(v59 + 32) = *(_QWORD *)(v14 + 128);
    }
    else
    {
      *(_BYTE *)v59 = 0;
      *(_DWORD *)(v59 + 32) = *(_DWORD *)(v14 + 80);
      v62 = *(_BYTE *)(v14 + 84);
      *(_BYTE *)(v59 + 2) = v62;
      if ( (v61 & 0x40) == 0 )
        *(_BYTE *)(v59 + 2) = v62 | 0x80;
    }
    *(_QWORD *)(v57 + 88) = *(_QWORD *)(v14 + 56);
    *(_QWORD *)(v57 + 24) = *(_QWORD *)(v14 + 72);
    *(_DWORD *)(v59 + 16) = *(_DWORD *)(v14 + 64) & 0xFFFFFF | (*(_DWORD *)(v14 + 88) << 24);
    *(_WORD *)(v59 + 24) = *(_WORD *)(v14 + 68);
    *(_WORD *)(v59 + 26) = *(_WORD *)(v14 + 70);
    *(_QWORD *)(v59 + 8) = &v178;
    *(_QWORD *)(v57 + 112) = *(_QWORD *)(v14 + 168);
    *(_QWORD *)(v57 + 72) = BugCheckParameter4;
    *(_QWORD *)(v57 + 8) = 0LL;
    *(_BYTE *)(v57 + 65) = 0;
    *(_BYTE *)(v57 + 68) = 0;
    *(_QWORD *)(v57 + 80) = 0LL;
    *(_QWORD *)(v57 + 104) = 0LL;
    *(_QWORD *)(v57 + 160) = 0LL;
    if ( *(_BYTE *)(v14 + 137) )
      break;
    GrantedAccess = RemainingDesiredAccess;
    v63 = BugCheckParameter1;
    AccessStatus = IopAllocRealFileObject(
                     (unsigned int)&FileObject,
                     (_DWORD)AttachedDevice,
                     BugCheckParameter1,
                     v61,
                     v58,
                     v14,
                     a10,
                     0,
                     GrantedAccess);
    if ( AccessStatus < 0 )
    {
      IoFreeIrp((PIRP)v57);
      IopDecrementDeviceObjectRef(v63, 0, 0);
      if ( v47 )
        IopDereferenceVpbAndFree(v47);
      v125 = (struct _DMA_ADAPTER *)FileObject;
      if ( FileObject )
      {
        FileObject->DeviceObject = 0LL;
        HalPutDmaAdapter(v125);
        result = (unsigned int)AccessStatus;
        *(_DWORD *)(v14 + 16) = AccessStatus;
        return result;
      }
      goto LABEL_430;
    }
    v66 = FileObject;
LABEL_185:
    if ( (v157 & 8) != 0 )
      v66->Flags |= 0x800u;
    if ( EnableFeatureServicing_40524482 == 1
      || EnableFeatureServicing_40524482 && FeatureServicing_40524482_EnableKey() )
    {
      v77 = *(_QWORD *)(v14 + 216);
      if ( (v77 & 1) != 0 )
      {
        v78 = 32;
LABEL_194:
        LOBYTE(v64) = 1;
        IopSetFileObjectExtensionFlag((__int64)v66, v78, v64, v65);
        goto LABEL_195;
      }
      if ( (v77 & 2) != 0 )
      {
        v78 = 64;
        goto LABEL_194;
      }
    }
LABEL_195:
    *(_QWORD *)(v57 + 192) = v66;
    *(_QWORD *)(v59 + 48) = v66;
    v79 = SourceString->Length;
    if ( SourceString->Length )
    {
      if ( v79 >= 0x38u )
      {
        if ( v79 >= 0x78u )
        {
          if ( v79 < 0xF8u )
            v79 = 248;
        }
        else
        {
          v79 = 120;
        }
      }
      else
      {
        v79 = 56;
      }
      v66->FileName.MaximumLength = v79;
      PoolWithTag = (wchar_t *)ExAllocatePoolWithTag(PagedPool, v79, 0x6D4E6F49u);
      v66->FileName.Buffer = PoolWithTag;
      if ( !PoolWithTag )
      {
        IoFreeIrp((PIRP)v57);
        IopDecrementDeviceObjectRef(v63, 0, 0);
        if ( v47 )
          IopDereferenceVpbAndFree(v47);
        v66->DeviceObject = 0LL;
        if ( !*(_BYTE *)(v14 + 137) )
        {
          HalPutDmaAdapter((PADAPTER_OBJECT)v66);
          return 3221225626LL;
        }
        return 3221225626LL;
      }
    }
    RtlCopyUnicodeString(&v66->FileName, SourceString);
    if ( *(_BYTE *)(v14 + 137) )
    {
      LOBYTE(v183) = 0;
      AccessStatus = IopQueryInformation(v14, AttachedDevice, v57, v59, &v183);
      if ( AccessStatus < 0 || (_BYTE)v183 )
      {
        v129 = *(_DWORD *)(v57 + 48);
        *(_DWORD *)(v14 + 16) = v129;
        *(_QWORD *)(v14 + 24) = *(_QWORD *)(v57 + 56);
        if ( v129 == 260 )
        {
          v130 = *(void **)(v57 + 160);
          if ( v130 )
          {
            ExFreePoolWithTag(v130, 0);
            *(_QWORD *)(v57 + 160) = 0LL;
            *(_QWORD *)(v14 + 40) = 0LL;
          }
        }
        if ( v66->FileName.Length )
          ExFreePoolWithTag(v66->FileName.Buffer, 0);
        if ( v66->FileObjectExtension )
          IopDeleteFileObjectExtension((__int64)v66);
        v128 = BugCheckParameter1;
        goto LABEL_352;
      }
      if ( !RtlEqualUnicodeString(&v66->FileName, SourceString, 0) )
      {
        Buffer = v66->FileName.Buffer;
        if ( Buffer )
        {
          ExFreePoolWithTag(Buffer, 0);
          RtlInitUnicodeString(&v66->FileName, 0LL);
        }
        v82 = SourceString->Length;
        if ( SourceString->Length )
        {
          if ( v82 >= 0x38u )
          {
            if ( v82 >= 0x78u )
            {
              if ( v82 < 0xF8u )
                v82 = 248;
            }
            else
            {
              v82 = 120;
            }
          }
          else
          {
            v82 = 56;
          }
          v66->FileName.MaximumLength = v82;
          v83 = (wchar_t *)ExAllocatePoolWithTag(PagedPool, v82, 0x6D4E6F49u);
          v66->FileName.Buffer = v83;
          if ( !v83 )
          {
            if ( v66->FileObjectExtension )
              IopDeleteFileObjectExtension((__int64)v66);
            IopDecrementDeviceObjectRef(BugCheckParameter1, 0, 0);
            if ( v47 )
              IopDereferenceVpbAndFree(v47);
            IoFreeIrp((PIRP)v57);
            return 3221225626LL;
          }
          RtlCopyUnicodeString(&v66->FileName, SourceString);
        }
      }
      v84 = BugCheckParameter1;
      AccessStatus = IopAllocRealFileObject(
                       (unsigned int)&FileObject,
                       (_DWORD)AttachedDevice,
                       BugCheckParameter1,
                       a5,
                       v185,
                       v14,
                       a10,
                       1,
                       DesiredAccess);
      if ( AccessStatus < 0 )
      {
        v127 = FileObject;
        if ( FileObject->FileName.Length )
          ExFreePoolWithTag(FileObject->FileName.Buffer, 0);
        if ( v127->FileObjectExtension )
          IopDeleteFileObjectExtension((__int64)v127);
        v128 = v84;
LABEL_352:
        IopDecrementDeviceObjectRef(v128, 0, 0);
        if ( v47 )
          IopDereferenceVpbAndFree(v47);
        IoFreeIrp((PIRP)v57);
        return (unsigned int)AccessStatus;
      }
      v66 = FileObject;
      *(_QWORD *)(v59 + 48) = FileObject;
      *(_QWORD *)(v57 + 192) = v66;
    }
    if ( !*(_DWORD *)(v14 + 120) )
    {
      ExtraCreateParameter = 0LL;
      AccessStatus = IoGetIrpExtraCreateParameter((PIRP)v57, &ExtraCreateParameter);
      if ( ExtraCreateParameter )
      {
        if ( IopSymlinkGetECP(ExtraCreateParameter, &v169) != -1073741275 )
        {
          MostRecentlyUsedName = (__int16 *)IopSymlinkGetMostRecentlyUsedName((__int64)v169);
          if ( !MostRecentlyUsedName[2] )
          {
            updated = IopSymlinkUpdateECP(
                        (PIRP)v57,
                        MostRecentlyUsedName,
                        AbsoluteObjectName->Length - SourceString->Length,
                        MostRecentlyUsedName[1]);
            AccessStatus = updated;
            if ( updated < 0 )
            {
              *(_DWORD *)(v57 + 48) = updated;
              *(_QWORD *)(v57 + 56) = 0LL;
              LOBYTE(v157) = v157 & 0xFB;
            }
          }
        }
      }
    }
    p_Event = (struct _KSEMAPHORE *)&v66->Event;
    KeInitializeEvent(&v66->Event, NotificationEvent, 0);
    *(_QWORD *)(v14 + 8) = v66;
    v88 = v157;
    if ( (v157 & 4) != 0 )
    {
      IopQueueThreadIrp(v57);
      v89 = IoCallDriverWithTracing(AttachedDevice, v57);
      AccessStatus = v89;
      v88 = v157;
    }
    else
    {
      v89 = AccessStatus;
    }
    if ( v89 == 259 )
    {
      v90 = v88 | 0x80;
      v91 = v88 & 0x7F;
      if ( (KeGetCurrentThread()->MiscFlags & 0x400) == 0 )
        v91 = v90;
      v157 = v91;
      v92 = (unsigned __int8)v91 >> 7;
      AccessStatus = KeWaitForSingleObject(p_Event, Executive, 0, (unsigned __int8)v91 >> 7, 0LL);
      if ( AccessStatus == 257 )
      {
        while ( 1 )
        {
          CurrentIrql = KeGetCurrentIrql();
          __writecr8(1uLL);
          if ( PsIsThreadTerminating(KeGetCurrentThread()) || !KeReadStateSemaphore(p_Event) && *(_BYTE *)(v57 + 68) )
            break;
          if ( KiIrqlFlags )
          {
            if ( (KiIrqlFlags & 1) != 0 )
            {
              v94 = KeGetCurrentIrql();
              if ( v94 <= 0xFu && CurrentIrql <= 0xFu && v94 >= 2u )
              {
                CurrentPrcb = KeGetCurrentPrcb();
                SchedulerAssist = CurrentPrcb->SchedulerAssist;
                v97 = ~(unsigned __int16)(-1LL << (CurrentIrql + 1));
                v98 = (v97 & SchedulerAssist[5]) == 0;
                SchedulerAssist[5] &= v97;
                if ( v98 )
                  KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
              }
            }
          }
          __writecr8(CurrentIrql);
          AccessStatus = KeWaitForSingleObject(p_Event, Executive, 0, v92, 0LL);
          if ( AccessStatus != 257 )
            goto LABEL_253;
        }
        if ( KiIrqlFlags )
        {
          if ( (KiIrqlFlags & 1) != 0 )
          {
            v99 = KeGetCurrentIrql();
            if ( v99 <= 0xFu && CurrentIrql <= 0xFu && v99 >= 2u )
            {
              v100 = KeGetCurrentPrcb();
              v101 = v100->SchedulerAssist;
              v102 = ~(unsigned __int16)(-1LL << (CurrentIrql + 1));
              v98 = (v102 & v101[5]) == 0;
              v101[5] &= v102;
              if ( v98 )
                KiRemoveSystemWorkPriorityKick((__int64)v100);
            }
          }
        }
        __writecr8(CurrentIrql);
        IopCancelAlertedRequest(p_Event, (PIRP)v57);
      }
LABEL_253:
      AccessStatus = BugCheckParameter4[0];
      v66 = FileObject;
    }
    AccessStatus = IoGetIrpExtraCreateParameter((PIRP)v57, &v171);
    v103 = *(_DWORD *)(v14 + 84) & 8;
    v104 = v103 != 0;
    v105 = v171;
    if ( *(_DWORD *)(v57 + 48) == 260 )
    {
      P = *(PVOID *)(v57 + 160);
      if ( !v171 || IopSymlinkGetECP(v171, &v169) == -1073741275 )
      {
        AccessStatus = IopSymlinkCreateECP((PIRP)v57, (__int64)&v169);
        if ( AccessStatus >= 0 )
        {
          if ( !v105 )
          {
            AccessStatus = IoGetIrpExtraCreateParameter((PIRP)v57, &v171);
            v105 = v171;
          }
        }
        else
        {
          *(_QWORD *)(v57 + 56) = 0LL;
          *(_DWORD *)(v57 + 48) = AccessStatus;
        }
      }
      if ( *(_DWORD *)(v57 + 48) == 260 )
      {
        v106 = P;
        if ( v103 && v105 )
          v104 = IopCheckAndUpdateStopOnSymlinkEcp(v105, *(unsigned int *)(v57 + 56), P);
        IopSymlinkProcessReparse(v57, v66, v106, v104);
        v107 = *(_QWORD *)(v57 + 56) - 2684354563LL;
        if ( v107 <= 0x16 )
        {
          v108 = 4194817LL;
          if ( _bittest64(&v108, v107) )
          {
            v109 = P;
            v110 = *((unsigned __int16 *)P + 3);
            v111 = 0;
            if ( !(_WORD)v110 )
              v111 = 16;
            v112 = v157;
            LOBYTE(v112) = v111 | v157 & 0xEF;
            v157 = v112;
            if ( (v112 & 0x10) == 0 && *(wchar_t *)((char *)SourceString->Buffer + SourceString->Length - v110) != 58 )
              goto LABEL_280;
            v113 = *(_DWORD *)(v14 + 64);
            if ( (v113 & 0x41) != 0 || *v175 )
              goto LABEL_280;
            if ( *(_DWORD *)P == -1610612733 )
              goto LABEL_278;
            if ( *(_DWORD *)P != -1610612724 )
              goto LABEL_280;
            if ( *((int *)P + 4) < 0 )
            {
LABEL_278:
              v114 = v113 | 1;
LABEL_279:
              *(_DWORD *)(v14 + 64) = v114;
            }
            else if ( (*((_DWORD *)P + 4) & 0x40000000) != 0 )
            {
              v114 = v113 | 0x40;
              goto LABEL_279;
            }
LABEL_280:
            if ( !v104 )
            {
              ExFreePoolWithTag(v109, 0);
              P = 0LL;
            }
          }
        }
      }
    }
    if ( *(_DWORD *)(v57 + 48) || *(_DWORD *)(v14 + 120) )
    {
      v115 = DeviceObject;
    }
    else
    {
      AccessStatus = IopSymlinkPropagateToExtensionIfNeeded(v66, v105, AbsoluteObjectName);
      v115 = DeviceObject;
      if ( AccessStatus < 0 )
      {
        IoCancelFileOpen(DeviceObject, v66);
        *(_QWORD *)(v57 + 56) = 0LL;
        *(_DWORD *)(v57 + 48) = AccessStatus;
      }
    }
    if ( v105 )
      *(_QWORD *)(v14 + 168) = v105;
    *(_OWORD *)BugCheckParameter4 = *(_OWORD *)(v57 + 48);
    AccessStatus = _mm_cvtsi128_si32(*(__m128i *)BugCheckParameter4);
    v66->Event.Header.SignalState = 1;
    v11 = v157;
    if ( (v157 & 4) != 0 )
    {
      *(_QWORD *)(v57 + 152) = CurrentThread;
      IopDequeueIrpFromThread((_QWORD *)v57);
    }
    if ( (*(_BYTE *)(v57 + 16) & 0x30) == 0x30 )
      ExFreePoolWithTag(*(PVOID *)(v57 + 24), 0);
    IoFreeIrp((PIRP)v57);
    v116 = BugCheckParameter4[1];
    *(_QWORD *)(v14 + 24) = BugCheckParameter4[1];
    if ( AccessStatus < 0 )
    {
      if ( (v66->Flags & 0x200000) != 0 )
      {
        HalPutDmaAdapter((PADAPTER_OBJECT)v66);
        *(_QWORD *)(v14 + 8) = 0LL;
        result = (unsigned int)AccessStatus;
        *(_DWORD *)(v14 + 16) = AccessStatus;
        return result;
      }
      if ( v66->FileName.Length )
      {
        ExFreePoolWithTag(v66->FileName.Buffer, 0);
        v66->FileName.Length = 0;
      }
      v66->DeviceObject = 0LL;
      HalPutDmaAdapter((PADAPTER_OBJECT)v66);
      IopDecrementDeviceObjectRef(BugCheckParameter1, 0, 0);
      if ( v172 )
        IopDereferenceVpbAndFree(v172);
      *(_QWORD *)(v14 + 8) = 0LL;
      goto LABEL_430;
    }
    if ( AccessStatus != 260 )
    {
      RelatedDeviceObject = IoGetRelatedDeviceObject(v66);
      if ( v115 != RelatedDeviceObject )
      {
        Vpb = (ULONG_PTR)v66->Vpb;
        v141 = v172;
        if ( Vpb != v172 )
        {
          if ( Vpb )
            IopIncrementVpbRefCount(Vpb, 1);
          if ( v141 )
            IopDereferenceVpbAndFree(v141);
        }
      }
      if ( (v157 & 0x40) == 0 )
      {
        *a11 = v66;
        *(_DWORD *)(v14 + 32) = -1096154543;
        ObfReferenceObject(v66);
        RelatedFileObject = v66->RelatedFileObject;
        if ( (!RelatedFileObject || (RelatedFileObject->Flags & 0x400000) != 0) && !v66->FileName.Length )
        {
          DeviceType = RelatedDeviceObject->DeviceType;
          if ( (unsigned int)DeviceType <= 0x20 )
          {
            v144 = 0x100000308LL;
            if ( _bittest64(&v144, DeviceType) )
              v66->Flags |= 0x400000u;
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
                              v66,
                              *(FILE_INFORMATION_CLASS *)(v14 + 200),
                              *(_DWORD *)(v14 + 204),
                              *(PVOID *)(v14 + 112),
                              (PULONG)(v14 + 204));
          goto LABEL_421;
        }
        v146 = 0;
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
                v153 = (MmVerifierData & 0x10) != 0 ? (void *)VfFastIoSnapState() : 0LL;
                LOBYTE(v138) = 1;
                v146 = FastIoQueryNetworkOpenInfo(
                         v66,
                         v138,
                         *(_QWORD *)(v14 + 104),
                         BugCheckParameter4,
                         RelatedDeviceObject);
                if ( v153 )
                  VfFastIoCheckState(v153);
              }
            }
          }
          if ( !v146 )
          {
            v154 = IoQueryFileInformation(
                     v66,
                     FileNetworkOpenInformation,
                     0x38u,
                     *(PVOID *)(v14 + 104),
                     &ReturnedLength);
            AccessStatus = v154;
            if ( v154 == -1073741811 || v154 == -1073741822 )
            {
              FileInformation = IopGetNetworkOpenInformation((PADAPTER_OBJECT)v66);
LABEL_421:
              AccessStatus = FileInformation;
            }
          }
        }
        else
        {
          v148 = 0LL;
          v169 = 0LL;
          if ( FastIoDispatch )
            FastIoQueryBasicInfo = (__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD))FastIoDispatch->FastIoQueryBasicInfo;
          else
            FastIoQueryBasicInfo = 0LL;
          v183 = FastIoQueryBasicInfo;
          if ( FastIoQueryBasicInfo )
          {
            v150 = (MmVerifierData & 0x10) != 0 ? (void *)VfFastIoSnapState() : 0LL;
            v180 = v150;
            LOBYTE(v148) = 1;
            v146 = FastIoQueryBasicInfo(v66, v148, *(_QWORD *)(v14 + 96), BugCheckParameter4, RelatedDeviceObject);
            v166 = v146;
            if ( v150 )
              VfFastIoCheckState(v150);
          }
          if ( v146 )
          {
            AccessStatus = BugCheckParameter4[0];
          }
          else
          {
            Pool = IopVerifierExAllocatePool(NonPagedPoolNx, 0x28uLL);
            v169 = Pool;
            if ( Pool )
            {
              AccessStatus = IoQueryFileInformation(v66, FileBasicInformation, 0x28u, Pool, &ReturnedLength);
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
      IopCloseFile(0LL, v66, 1LL);
      HalPutDmaAdapter((PADAPTER_OBJECT)v66);
      *(_QWORD *)(v14 + 8) = 0LL;
      result = (unsigned int)AccessStatus;
      *(_DWORD *)(v14 + 16) = AccessStatus;
      return result;
    }
    if ( (v116 & 0xFFFFFFFFFFFFFFFDuLL) != 0
      && ((v117 = v116 - 2684354563u, v116 - 2684354563u > 0x16) || (v118 = 4194817LL, !_bittest64(&v118, v117)) || v104) )
    {
      v119 = AbsoluteObjectName;
    }
    else
    {
      v119 = AbsoluteObjectName;
      if ( AbsoluteObjectName->MaximumLength < v66->FileName.Length )
      {
        v120 = (wchar_t *)ExAllocatePoolWithTag(PagedPool, v66->FileName.Length, 0x63466F49u);
        if ( !v120 )
        {
          *(_DWORD *)(v14 + 16) = -1073741670;
          return 3221225626LL;
        }
        v121 = v119->Buffer;
        if ( v121 )
          ExFreePoolWithTag(v121, 0);
        v119->Buffer = v120;
        v119->MaximumLength = v66->FileName.Length;
      }
      RtlCopyUnicodeString(v119, &v66->FileName);
      if ( BugCheckParameter4[1] - 2684354563u <= 0x16 )
      {
        v122 = 4194817LL;
        if ( _bittest64(&v122, BugCheckParameter4[1] - 2684354563u) )
          *(_QWORD *)(v14 + 40) = 0LL;
      }
    }
    if ( v66->FileName.Length )
    {
      ExFreePoolWithTag(v66->FileName.Buffer, 0);
      v66->FileName.Length = 0;
    }
    v66->DeviceObject = 0LL;
    HalPutDmaAdapter((PADAPTER_OBJECT)v66);
    *(_QWORD *)(v14 + 8) = 0LL;
    v123 = BugCheckParameter1;
    IopDecrementDeviceObjectRef(BugCheckParameter1, 0, 0);
    if ( v172 )
      IopDereferenceVpbAndFree(v172);
    v124 = BugCheckParameter4[1];
    if ( BugCheckParameter4[1] != 1 )
    {
      *(_QWORD *)(v14 + 40) = 0LL;
      v131 = 4194817LL;
      if ( v124 - 2684354563u <= 0x16 && _bittest64(&v131, v124 - 2684354563u) )
      {
        *(_DWORD *)(v14 + 152) |= 0x10u;
        v132 = *(_DWORD *)(v14 + 152);
        v133 = *(unsigned int *)(v123 + 72);
        if ( (unsigned int)v133 <= 0x24 && (v134 = 0x1080020084LL, _bittest64(&v134, v133)) )
          v135 = v132 | 8;
        else
          v135 = v132 & 0xFFFFFFF7;
        *(_DWORD *)(v14 + 152) = v135;
      }
      if ( *(_BYTE *)(v14 + 136) )
        KeBugCheckEx(0xF9u, v123, (ULONG_PTR)DeviceObject, (ULONG_PTR)v119, v124);
      if ( (*(_DWORD *)(*(_QWORD *)(v123 + 312) + 32LL) & 0x800) == 0 )
      {
        v136 = v184;
        *(_QWORD *)&v184->RemainingDesiredAccess = v184->OriginalDesiredAccess;
        v136->Flags &= ~0x100u;
      }
      if ( v124 - 2684354563u <= 0x16 && _bittest64(&v131, v124 - 2684354563u) && v104 )
      {
        *(_QWORD *)(v14 + 24) = P;
        *(_DWORD *)(v14 + 16) = -2147483603;
        return 2147483693LL;
      }
      else if ( v124 == 2684354585 || v124 == 2 )
      {
        v137 = a10;
        *(_QWORD *)(v137 + 8) = PsGetParentSilo(*(_QWORD *)(a10 + 8));
        return 872LL;
      }
      else
      {
        return 260LL;
      }
    }
    if ( (unsigned int)++v170 > 0x20 )
      return 3221225473LL;
    *a11 = 0LL;
    FileObject = 0LL;
    v12 = v184;
    v13 = (unsigned int *)BugCheckParameter2;
  }
  v67 = *(_QWORD **)(v14 + 144);
  memset(v67, 0, 0x110uLL);
  v66 = (PFILE_OBJECT)(v67 + 6);
  FileObject = (PFILE_OBJECT)(v67 + 6);
  *((_BYTE *)v67 + 24) = ObHeaderCookie ^ *((_BYTE *)IoFileObjectType + 40) ^ BYTE1(v67);
  *v67 = 1LL;
  if ( (a5 & 0x40) == 0 )
    *((_DWORD *)v67 + 32) |= 0x20000u;
  *(_DWORD *)&v66->Type = 14155781;
  v67[14] = *(_QWORD *)(v14 + 40);
  v63 = BugCheckParameter1;
  v66->DeviceObject = (PDEVICE_OBJECT)BugCheckParameter1;
  if ( (*(_DWORD *)(v14 + 152) & 0x20) == 0
    || !v185
    || (AttachedDevice->Flags & 0x40000) == 0
    && ((v68 = AttachedDevice->DeviceType, (unsigned int)v68 > 0x35)
     || (v69 = 0x20000100100108LL, !_bittest64(&v69, v68)))
    || (AccessStatus = IopRetrieveTransactionParameters(AttachedDevice, v14, DesiredAccess, v66), AccessStatus >= 0) )
  {
    if ( !PsIsHostSilo(*(_QWORD *)(a10 + 8))
      || (v70 = (__int64)v66->RelatedFileObject) != 0 && (v71 = IoGetSilo(v70), !PsIsHostSilo(v71)) )
    {
      v174 = 0LL;
      if ( v66->RelatedFileObject && PsIsServerSilo(*(_QWORD *)(a10 + 8)) )
        Silo = (_DWORD *)IoGetSilo(v72);
      else
        Silo = *(_DWORD **)(a10 + 8);
      if ( !PsIsHostSilo((__int64)Silo) )
      {
        AccessStatus = PsAcquireSiloHardReference(Silo);
        if ( AccessStatus < 0 )
          goto LABEL_329;
        LOBYTE(v74) = 1;
        SetSpecificExtension = IopGetSetSpecificExtension((__int64)v66, 7u, 16LL, v74, &v174, 0LL);
        AccessStatus = SetSpecificExtension;
        if ( SetSpecificExtension < 0 )
        {
          PsReleaseSiloHardReference(Silo);
          SetSpecificExtension = AccessStatus;
        }
        v76 = v174;
        if ( SetSpecificExtension < 0 )
        {
LABEL_329:
          IoFreeIrp((PIRP)v57);
          v126 = BugCheckParameter1;
          goto LABEL_327;
        }
        *v174 = 16;
        *((_QWORD *)v76 + 1) = Silo;
        v76[1] |= 1u;
        ObfReferenceObjectWithTag(Silo, 0x70536F49u);
      }
      v63 = BugCheckParameter1;
      v59 = (__int64)v175;
    }
    goto LABEL_185;
  }
  IoFreeIrp((PIRP)v57);
  v126 = v63;
LABEL_327:
  IopDecrementDeviceObjectRef(v126, 0, 0);
  if ( v47 )
  {
    IopDereferenceVpbAndFree(v47);
    result = (unsigned int)AccessStatus;
    *(_DWORD *)(v14 + 16) = AccessStatus;
    return result;
  }
LABEL_430:
  result = (unsigned int)AccessStatus;
LABEL_431:
  *(_DWORD *)(v14 + 16) = result;
  return result;
}
