/*
 * XREFs of IopParseDevice @ 0x140718340
 * Callers:
 *     IopParseFile @ 0x1405F67C0 (IopParseFile.c)
 * Callees:
 *     PsReleaseSiloHardReference @ 0x140200960 (PsReleaseSiloHardReference.c)
 *     PsAcquireSiloHardReference @ 0x140200A10 (PsAcquireSiloHardReference.c)
 *     IopDereferenceVpbAndFree @ 0x140214CE0 (IopDereferenceVpbAndFree.c)
 *     IopCreateSecurityCheck @ 0x140225208 (IopCreateSecurityCheck.c)
 *     CmSiFreeMemory @ 0x1402253C0 (CmSiFreeMemory.c)
 *     IopVerifierExAllocatePool @ 0x1402336E0 (IopVerifierExAllocatePool.c)
 *     KeReadStateSemaphore @ 0x140238070 (KeReadStateSemaphore.c)
 *     IopSymlinkGetMostRecentlyUsedName @ 0x140239680 (IopSymlinkGetMostRecentlyUsedName.c)
 *     IopSymlinkGetECP @ 0x1402396A0 (IopSymlinkGetECP.c)
 *     HalPutDmaAdapter @ 0x14023FBE0 (HalPutDmaAdapter.c)
 *     PsIsThreadTerminating @ 0x140263440 (PsIsThreadTerminating.c)
 *     RtlInitUnicodeString @ 0x14026A4C0 (RtlInitUnicodeString.c)
 *     RtlGetActiveConsoleId @ 0x14026FFF0 (RtlGetActiveConsoleId.c)
 *     IopGetDevicePDO @ 0x1402717B8 (IopGetDevicePDO.c)
 *     KeEnterCriticalRegionThread @ 0x14027C8F0 (KeEnterCriticalRegionThread.c)
 *     PsGetCurrentServerSilo @ 0x14027DF30 (PsGetCurrentServerSilo.c)
 *     PsGetServerSiloServiceSessionId @ 0x14027E130 (PsGetServerSiloServiceSessionId.c)
 *     PsGetCurrentProcessSessionId @ 0x14027E740 (PsGetCurrentProcessSessionId.c)
 *     IopDeleteFileObjectExtension @ 0x140285B3C (IopDeleteFileObjectExtension.c)
 *     ObfReferenceObjectWithTag @ 0x1402A9FE0 (ObfReferenceObjectWithTag.c)
 *     SeAccessCheck @ 0x1402AB090 (SeAccessCheck.c)
 *     KeLeaveCriticalRegionThread @ 0x1402AB8C0 (KeLeaveCriticalRegionThread.c)
 *     IopSetFileObjectExtensionFlag @ 0x1402F7040 (IopSetFileObjectExtensionFlag.c)
 *     IoGetSilo @ 0x1402F7080 (IoGetSilo.c)
 *     PsIsServerSilo @ 0x1402F70B0 (PsIsServerSilo.c)
 *     IopIncrementVpbRefCount @ 0x140319DF8 (IopIncrementVpbRefCount.c)
 *     KeWaitForSingleObject @ 0x1403504C0 (KeWaitForSingleObject.c)
 *     ObfReferenceObject @ 0x140355F80 (ObfReferenceObject.c)
 *     IopQueueThreadIrp @ 0x140355FE0 (IopQueueThreadIrp.c)
 *     ExReleaseResourceLite @ 0x140356140 (ExReleaseResourceLite.c)
 *     ExAcquireResourceSharedLite @ 0x140356CB0 (ExAcquireResourceSharedLite.c)
 *     IoGetRelatedDeviceObject @ 0x14035C670 (IoGetRelatedDeviceObject.c)
 *     IopAllocateIrpExReturn @ 0x14035C790 (IopAllocateIrpExReturn.c)
 *     IopCheckDeviceAndDriver @ 0x14035E090 (IopCheckDeviceAndDriver.c)
 *     RtlCopyUnicodeString @ 0x14035E210 (RtlCopyUnicodeString.c)
 *     IoFreeIrp @ 0x14035E290 (IoFreeIrp.c)
 *     IoGetAttachedDevice @ 0x14035E490 (IoGetAttachedDevice.c)
 *     IopDequeueIrpFromThread @ 0x14035E4B0 (IopDequeueIrpFromThread.c)
 *     IoCallDriverWithTracing @ 0x14035E5F0 (IoCallDriverWithTracing.c)
 *     KeInitializeEvent @ 0x14035E640 (KeInitializeEvent.c)
 *     IopCheckVpbMounted @ 0x14035E670 (IopCheckVpbMounted.c)
 *     IopDoFullTraverseCheck @ 0x14035E890 (IopDoFullTraverseCheck.c)
 *     IopDecrementDeviceObjectRef @ 0x14035E8E0 (IopDecrementDeviceObjectRef.c)
 *     PsIsHostSilo @ 0x14035F7D0 (PsIsHostSilo.c)
 *     IopGetSetSpecificExtension @ 0x140361838 (IopGetSetSpecificExtension.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403F3684 (KiRemoveSystemWorkPriorityKick.c)
 *     KeBugCheckEx @ 0x1403FE0D0 (KeBugCheckEx.c)
 *     _guard_dispatch_icall @ 0x140408790 (_guard_dispatch_icall.c)
 *     memmove @ 0x140414040 (memmove.c)
 *     memset @ 0x140414300 (memset.c)
 *     IopCheckSessionDeviceAccess @ 0x1405066DC (IopCheckSessionDeviceAccess.c)
 *     IopAllowRemoteDASD @ 0x140507990 (IopAllowRemoteDASD.c)
 *     IopIsSecurityContextAppContainer @ 0x140507A4C (IopIsSecurityContextAppContainer.c)
 *     SeFastTraverseCheck @ 0x140595FC0 (SeFastTraverseCheck.c)
 *     IoGetIrpExtraCreateParameter @ 0x1405DDD60 (IoGetIrpExtraCreateParameter.c)
 *     IopQueryInformation @ 0x1405E7B50 (IopQueryInformation.c)
 *     SeOpenObjectAuditAlarm @ 0x1405EA760 (SeOpenObjectAuditAlarm.c)
 *     SeAppendPrivileges @ 0x1405EA7C0 (SeAppendPrivileges.c)
 *     IopCheckTopDeviceHint @ 0x1405F6984 (IopCheckTopDeviceHint.c)
 *     IopSymlinkUpdateECP @ 0x1405FD41C (IopSymlinkUpdateECP.c)
 *     IopSymlinkCreateECP @ 0x1405FD740 (IopSymlinkCreateECP.c)
 *     IopSymlinkProcessReparse @ 0x1405FDA18 (IopSymlinkProcessReparse.c)
 *     IopSymlinkEnforceEnabledTypes @ 0x140622784 (IopSymlinkEnforceEnabledTypes.c)
 *     IoQueryFileInformation @ 0x1406745E0 (IoQueryFileInformation.c)
 *     SeTokenIsAdmin @ 0x1406C5B80 (SeTokenIsAdmin.c)
 *     RtlEqualUnicodeString @ 0x1406F0B70 (RtlEqualUnicodeString.c)
 *     SeLockSubjectContext @ 0x14070D210 (SeLockSubjectContext.c)
 *     SeUnlockSubjectContext @ 0x14070D270 (SeUnlockSubjectContext.c)
 *     IopCloseFile @ 0x140713E00 (IopCloseFile.c)
 *     RtlMapGenericMask @ 0x14071A280 (RtlMapGenericMask.c)
 *     IopCheckBackupRestorePrivilege @ 0x14071A2D0 (IopCheckBackupRestorePrivilege.c)
 *     SeSetAccessStateGenericMapping @ 0x14071A4A0 (SeSetAccessStateGenericMapping.c)
 *     IopAllocRealFileObject @ 0x14071A4C0 (IopAllocRealFileObject.c)
 *     IopSymlinkPropagateToExtensionIfNeeded @ 0x14071A9B0 (IopSymlinkPropagateToExtensionIfNeeded.c)
 *     IopRetrieveTransactionParameters @ 0x14071AF00 (IopRetrieveTransactionParameters.c)
 *     IopCancelAlertedRequest @ 0x1408911EC (IopCancelAlertedRequest.c)
 *     IoCancelFileOpen @ 0x140893780 (IoCancelFileOpen.c)
 *     IopCheckAndUpdateStopOnSymlinkEcp @ 0x140894224 (IopCheckAndUpdateStopOnSymlinkEcp.c)
 *     IopGetNetworkOpenInformation @ 0x1408949F4 (IopGetNetworkOpenInformation.c)
 *     PsGetParentSilo @ 0x140905C50 (PsGetParentSilo.c)
 *     ExFreePoolWithTag @ 0x1409B5010 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x1409B5160 (ExAllocatePoolWithTag.c)
 *     VfFastIoCheckState @ 0x1409CA9B4 (VfFastIoCheckState.c)
 *     VfFastIoSnapState @ 0x1409CAA8C (VfFastIoSnapState.c)
 */

int __fastcall IopParseDevice(
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
        PADAPTER_OBJECT *a11)
{
  int v11; // r14d
  PACCESS_STATE v12; // rbx
  unsigned int *v13; // rsi
  __int64 v14; // r12
  __int64 v15; // r9
  __int64 v16; // rdx
  ULONG_PTR v17; // r13
  unsigned __int64 v18; // rcx
  int result; // eax
  char v20; // dl
  bool v21; // al
  __int64 v22; // rax
  ULONG_PTR v23; // rax
  ULONG_PTR v24; // rcx
  __int64 CurrentServerSilo; // rax
  int ServerSiloServiceSessionId; // ebx
  struct _DMA_ADAPTER *DevicePDO; // rax
  struct _DMA_ADAPTER *v28; // rbx
  ACCESS_MASK *p_RemainingDesiredAccess; // rsi
  ACCESS_MASK RemainingDesiredAccess; // r15d
  char v31; // dl
  __int64 v32; // rcx
  int v33; // r10d
  char v34; // r9
  char v35; // r14
  ULONG ActiveConsoleId; // ebx
  __int64 v37; // rax
  int v38; // ebx
  bool v39; // bl
  SECURITY_SUBJECT_CONTEXT *p_SubjectSecurityContext; // rdi
  char v41; // r14
  PACCESS_TOKEN ClientToken; // rcx
  PACCESS_STATE v43; // rbx
  ACCESS_MASK v44; // eax
  UNICODE_STRING *v45; // rsi
  __int64 v46; // rdx
  __int64 v47; // r8
  __int64 v48; // r9
  struct _KTHREAD *v49; // rsi
  __int64 v50; // rdx
  __int64 v51; // r8
  __int64 v52; // r9
  char v53; // al
  char v54; // r14
  unsigned __int16 Length; // r8
  __int64 v56; // rdx
  __int64 v57; // rbx
  PDEVICE_OBJECT AttachedDevice; // r14
  int v59; // esi
  __int64 v60; // rax
  int v61; // ecx
  char v62; // r8
  PCUNICODE_STRING v63; // rsi
  int v64; // eax
  PACCESS_STATE v65; // rsi
  __int64 Irp; // rax
  __int64 v67; // r13
  char v68; // dl
  __int64 v69; // rsi
  int v70; // eax
  int v71; // r8d
  char v72; // al
  ULONG_PTR v73; // rdi
  PADAPTER_OBJECT v74; // rdi
  struct _DMA_ADAPTER *v75; // rbx
  ULONG_PTR v76; // rbx
  unsigned __int64 DeviceType; // rax
  __int64 v78; // rcx
  __int64 v79; // rcx
  __int64 v80; // rax
  __int64 v81; // rdx
  _DWORD *Silo; // rbx
  NTSTATUS SetSpecificExtension; // eax
  _DWORD *v84; // rsi
  __int64 v85; // rax
  int v86; // edx
  unsigned __int16 v87; // ax
  PVOID PoolWithTag; // rax
  void *v89; // rcx
  unsigned __int16 v90; // ax
  PVOID v91; // rax
  ULONG_PTR v92; // rdi
  __int64 MostRecentlyUsedName; // rdx
  NTSTATUS updated; // eax
  struct _KSEMAPHORE *p_DmaOperations; // rsi
  char v96; // dl
  NTSTATUS v97; // eax
  unsigned __int8 v98; // al
  int v99; // edx
  BOOLEAN v100; // di
  unsigned __int8 CurrentIrql; // bl
  unsigned __int8 v102; // al
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  int v105; // eax
  bool v106; // zf
  unsigned __int8 v107; // al
  struct _KPRCB *v108; // r10
  _DWORD *v109; // r9
  int v110; // eax
  int v111; // esi
  char v112; // r15
  struct _ECP_LIST *v113; // r14
  _DWORD *v114; // rbx
  unsigned __int64 v115; // rcx
  __int64 v116; // rax
  __int64 v117; // rcx
  char v118; // al
  int v119; // r8d
  int v120; // ecx
  int v121; // ecx
  PDEVICE_OBJECT v122; // rbx
  ULONG_PTR v123; // rax
  unsigned __int64 v124; // rcx
  __int64 v125; // rax
  PUNICODE_STRING v126; // r13
  wchar_t *v127; // rsi
  wchar_t *Buffer; // rcx
  __int64 v129; // rax
  ULONG_PTR v130; // rdi
  ULONG_PTR v131; // rdx
  struct _DMA_ADAPTER *v132; // rcx
  ULONG_PTR v133; // rcx
  PADAPTER_OBJECT v134; // rbx
  ULONG_PTR v135; // rcx
  int v136; // ecx
  void *v137; // rcx
  __int64 v138; // r8
  int v139; // ecx
  unsigned __int64 v140; // rax
  __int64 v141; // r10
  unsigned int v142; // ecx
  PACCESS_STATE v143; // rcx
  __int64 v144; // rbx
  __int64 v145; // rdx
  PDEVICE_OBJECT RelatedDeviceObject; // r14
  ULONG_PTR v147; // rcx
  __int64 v148; // rbx
  __int64 v149; // rax
  unsigned __int64 v150; // rax
  __int64 v151; // rcx
  NTSTATUS FileInformation; // eax
  char v153; // si
  PFAST_IO_DISPATCH FastIoDispatch; // rcx
  __int64 v155; // rdx
  __int64 (__fastcall *FastIoQueryBasicInfo)(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD); // rbx
  void *v157; // r15
  PVOID Pool; // rbx
  __int64 (__fastcall *FastIoQueryNetworkOpenInfo)(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD); // r15
  void *v160; // rbx
  NTSTATUS v161; // eax
  NTSTATUS AccessStatus; // [rsp+60h] [rbp-F8h] BYREF
  int v163; // [rsp+64h] [rbp-F4h]
  int v164; // [rsp+68h] [rbp-F0h]
  ACCESS_MASK GrantedAccess; // [rsp+6Ch] [rbp-ECh] BYREF
  ULONG_PTR BugCheckParameter1; // [rsp+70h] [rbp-E8h]
  PPRIVILEGE_SET Privileges; // [rsp+78h] [rbp-E0h] BYREF
  PDEVICE_OBJECT DeviceObject; // [rsp+80h] [rbp-D8h] BYREF
  __int64 v169; // [rsp+88h] [rbp-D0h]
  PADAPTER_OBJECT DmaAdapter; // [rsp+90h] [rbp-C8h] BYREF
  struct _KTHREAD *CurrentThread; // [rsp+98h] [rbp-C0h]
  char v172; // [rsp+A0h] [rbp-B8h]
  ULONG ReturnedLength; // [rsp+A4h] [rbp-B4h] BYREF
  PVOID v174; // [rsp+A8h] [rbp-B0h] BYREF
  PVOID P; // [rsp+B0h] [rbp-A8h]
  int v176; // [rsp+B8h] [rbp-A0h]
  struct _ECP_LIST *v177; // [rsp+C0h] [rbp-98h] BYREF
  ULONG_PTR BugCheckParameter4[2]; // [rsp+C8h] [rbp-90h] BYREF
  _DWORD *v179; // [rsp+D8h] [rbp-80h] BYREF
  _BYTE *v180; // [rsp+E0h] [rbp-78h]
  UNICODE_STRING ObjectTypeName; // [rsp+E8h] [rbp-70h] BYREF
  struct _ECP_LIST *ExtraCreateParameter; // [rsp+F8h] [rbp-60h] BYREF
  __int128 v183; // [rsp+100h] [rbp-58h] BYREF
  __int64 v184; // [rsp+110h] [rbp-48h]
  void *v185; // [rsp+118h] [rbp-40h]
  __int64 retaddr; // [rsp+158h] [rbp+0h]
  __int64 (__fastcall *v188)(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD); // [rsp+168h] [rbp+10h] BYREF
  PACCESS_STATE AccessState; // [rsp+170h] [rbp+18h]
  char v190; // [rsp+178h] [rbp+20h]

  v190 = a4;
  AccessState = a3;
  v12 = a3;
  v13 = (unsigned int *)BugCheckParameter2;
  v14 = a8;
  GrantedAccess = 0;
  AccessStatus = 0;
  *(_OWORD *)BugCheckParameter4 = 0LL;
  v183 = 0LL;
  v184 = 0LL;
  v176 = 0;
  LOBYTE(v164) = 0;
  ReturnedLength = 0;
  ObjectTypeName = 0LL;
  Privileges = 0LL;
  P = 0LL;
  v177 = 0LL;
  v174 = 0LL;
  if ( a2 != IoFileObjectType )
    return -1073741788;
  CurrentThread = KeGetCurrentThread();
  LOBYTE(v11) = 4;
  RtlInitUnicodeString(&ObjectTypeName, L"File");
  *a11 = 0LL;
  DmaAdapter = 0LL;
  if ( !v14 )
    return -1073741788;
  while ( 1 )
  {
    v15 = 0x60010000110040LL;
    v16 = 0x1080020084LL;
    if ( *(_WORD *)v14 != 8 || *(_WORD *)(v14 + 2) != 224 )
      return -1073741788;
    v17 = (ULONG_PTR)v13;
    BugCheckParameter1 = (ULONG_PTR)v13;
    if ( *(_DWORD *)(v14 + 32) == 1 )
    {
      *(_DWORD *)(v14 + 32) = -1096154543;
      *(_QWORD *)(v14 + 40) = v13;
      *(_DWORD *)(v14 + 16) = 0;
      ObfReferenceObject(v13);
      return 0;
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
        v20 = (unsigned int)v18 <= 0x24 && _bittest64(&v16, v18);
        v21 = (unsigned int)v18 <= 0x36 && _bittest64(&v15, v18);
        if ( !v20 && !v21 )
        {
LABEL_10:
          *(_DWORD *)(v14 + 16) = -1073741192;
          return -1073741192;
        }
        result = IopSymlinkEnforceEnabledTypes(*(_BYTE *)(v14 + 152) & 8, v20, *(struct _ECP_LIST **)(v14 + 168));
        AccessStatus = result;
        if ( result < 0 )
          goto LABEL_431;
      }
    }
    v22 = *(_QWORD *)(v14 + 40);
    if ( v22 )
    {
      v17 = *(_QWORD *)(v22 + 8);
      BugCheckParameter1 = v17;
    }
    if ( *(_DWORD *)(v17 + 72) == 7 )
    {
      v23 = v17;
      v24 = v17;
      do
      {
        if ( *(_QWORD *)(v23 + 56) )
          break;
        v23 = *(_QWORD *)(v23 + 24);
        v24 = v23;
      }
      while ( v23 );
      if ( v24 && v24 != v17 )
      {
        *(_DWORD *)(v14 + 152) |= 2u;
        v17 = v24;
        BugCheckParameter1 = v24;
      }
    }
    result = IopCheckDeviceAndDriver(v14, v17);
    AccessStatus = result;
    if ( result < 0 )
      goto LABEL_431;
    if ( (*(_DWORD *)(*(_QWORD *)(v17 + 312) + 32LL) & 0x400) != 0 && !*(_QWORD *)(v14 + 40) )
    {
      CurrentServerSilo = PsGetCurrentServerSilo();
      ServerSiloServiceSessionId = PsGetServerSiloServiceSessionId(CurrentServerSilo);
      if ( ServerSiloServiceSessionId != (unsigned int)PsGetCurrentProcessSessionId()
        || IopSessionZeroAccessCheckEnabled && (*(_DWORD *)(v14 + 64) & 0x40000) == 0 )
      {
        DevicePDO = (struct _DMA_ADAPTER *)IopGetDevicePDO(v17);
        v28 = DevicePDO;
        if ( DevicePDO )
        {
          if ( !IopCheckSessionDeviceAccess((__int64)DevicePDO) )
          {
            HalPutDmaAdapter(v28);
            IopDecrementDeviceObjectRef(v17, 0, 0);
            *(_DWORD *)(v14 + 16) = -1073741790;
            return -1073741790;
          }
          HalPutDmaAdapter(v28);
        }
      }
      v12 = AccessState;
    }
    p_RemainingDesiredAccess = &v12->RemainingDesiredAccess;
    RtlMapGenericMask(&v12->RemainingDesiredAccess, (PGENERIC_MAPPING)((char *)IoFileObjectType + 76));
    RtlMapGenericMask(&v12->OriginalDesiredAccess, (PGENERIC_MAPPING)((char *)IoFileObjectType + 76));
    SeSetAccessStateGenericMapping(v12, (PGENERIC_MAPPING)((char *)IoFileObjectType + 76));
    RemainingDesiredAccess = v12->RemainingDesiredAccess;
    IopCheckBackupRestorePrivilege(v12);
    v31 = *(_BYTE *)(v14 + 136);
    if ( v31 && !SourceString->Length || (v12->Flags & 0x100) != 0 )
      RemainingDesiredAccess |= v12->PreviouslyGrantedAccess;
    v32 = *(_QWORD *)(v14 + 40);
    LOBYTE(v33) = v164;
    if ( v32 && (*(_DWORD *)(v32 + 80) & 0x400000) != 0 )
    {
      v33 = (unsigned __int8)v164;
      if ( !SourceString->Length )
        v33 = 1;
      v164 = v33;
    }
    v34 = v190;
    if ( (v190 || (*(_DWORD *)(v14 + 84) & 1) != 0) && (!v32 || (_BYTE)v33) && !v31 )
    {
      v35 = v11 & 0xDF;
      if ( SourceString->Length )
      {
        p_SubjectSecurityContext = &v12->SubjectSecurityContext;
        if ( IopDoFullTraverseCheck(v17, v190, &v12->SubjectSecurityContext) )
        {
          v45 = AbsoluteObjectName;
          LOBYTE(v11) = (v35 ^ IopCreateSecurityCheck(
                                 v17,
                                 0LL,
                                 v12,
                                 RemainingDesiredAccess | 0x20,
                                 1,
                                 Privileges,
                                 &GrantedAccess,
                                 AbsoluteObjectName,
                                 &ObjectTypeName,
                                 (__int64)CurrentThread,
                                 0)) & 1 ^ v35;
        }
        else
        {
          if ( (v12->Flags & 1) != 0 )
          {
            LOBYTE(v11) = v35 | 1;
          }
          else
          {
            v49 = CurrentThread;
            KeEnterCriticalRegionThread((__int64)CurrentThread);
            ExAcquireResourceSharedLite(&IopSecurityResource, 1u);
            LOBYTE(v11) = (v35 ^ SeFastTraverseCheck(*(_QWORD *)(v17 + 272), (__int64)v12, 32)) & 1 ^ v35;
            if ( (v11 & 1) == 0 )
            {
              Privileges = 0LL;
              SeLockSubjectContext(p_SubjectSecurityContext);
              LOBYTE(v11) = ((v11 | 0x20) ^ SeAccessCheck(
                                              *(PSECURITY_DESCRIPTOR *)(v17 + 272),
                                              p_SubjectSecurityContext,
                                              1u,
                                              0x20u,
                                              0,
                                              &Privileges,
                                              (PGENERIC_MAPPING)((char *)IoFileObjectType + 76),
                                              1,
                                              &GrantedAccess,
                                              &AccessStatus)) & 1 ^ (v11 | 0x20);
              if ( Privileges )
              {
                SeAppendPrivileges(AccessState, Privileges);
                CmSiFreeMemory(Privileges);
              }
            }
            ExReleaseResourceLite(&IopSecurityResource);
            KeLeaveCriticalRegionThread((__int64)v49, v50, v51, v52);
          }
          v45 = AbsoluteObjectName;
        }
      }
      else
      {
        v39 = 0;
        if ( (*(_DWORD *)(v17 + 52) & 0x40001) != 0 && (RemainingDesiredAccess & 0xFFEDFF7F) != 0 )
        {
          ActiveConsoleId = RtlGetActiveConsoleId();
          if ( ActiveConsoleId != (unsigned int)PsGetCurrentProcessSessionId() )
          {
            v37 = PsGetCurrentServerSilo();
            v38 = PsGetServerSiloServiceSessionId(v37);
            if ( v38 != (unsigned int)PsGetCurrentProcessSessionId() && !IopAllowRemoteDASD() )
              v39 = 1;
          }
        }
        Privileges = 0LL;
        KeEnterCriticalRegionThread((__int64)CurrentThread);
        ExAcquireResourceSharedLite(&IopSecurityResource, 1u);
        p_SubjectSecurityContext = &AccessState->SubjectSecurityContext;
        SeLockSubjectContext(&AccessState->SubjectSecurityContext);
        v41 = v35 | 0x20;
        if ( !v39 )
          goto LABEL_68;
        ClientToken = p_SubjectSecurityContext->ClientToken;
        if ( !p_SubjectSecurityContext->ClientToken )
          ClientToken = AccessState->SubjectSecurityContext.PrimaryToken;
        if ( SeTokenIsAdmin(ClientToken) )
        {
LABEL_68:
          LOBYTE(v11) = (v41 ^ SeAccessCheck(
                                 *(PSECURITY_DESCRIPTOR *)(v17 + 272),
                                 p_SubjectSecurityContext,
                                 (v41 & 0x20) != 0,
                                 RemainingDesiredAccess,
                                 0,
                                 &Privileges,
                                 (PGENERIC_MAPPING)((char *)IoFileObjectType + 76),
                                 1,
                                 &GrantedAccess,
                                 &AccessStatus)) & 1 ^ v41;
          v43 = AccessState;
          if ( Privileges )
          {
            SeAppendPrivileges(AccessState, Privileges);
            CmSiFreeMemory(Privileges);
          }
          if ( (v11 & 1) != 0 )
          {
            v44 = GrantedAccess;
            v43->PreviouslyGrantedAccess |= GrantedAccess;
            *p_RemainingDesiredAccess &= ~(v44 | 0x2000000);
            *(_BYTE *)(v14 + 136) = 1;
          }
        }
        else
        {
          LOBYTE(v11) = v41 & 0xFE;
          AccessStatus = -1073741790;
        }
        v45 = AbsoluteObjectName;
        SeOpenObjectAuditAlarm(
          &ObjectTypeName,
          (PVOID)v17,
          AbsoluteObjectName,
          *(PSECURITY_DESCRIPTOR *)(v17 + 272),
          AccessState,
          0,
          v11 & 1,
          1,
          &AccessState->GenerateOnClose);
        ExReleaseResourceLite(&IopSecurityResource);
        KeLeaveCriticalRegionThread((__int64)CurrentThread, v46, v47, v48);
      }
      if ( (v11 & 0x20) != 0 )
        SeUnlockSubjectContext(p_SubjectSecurityContext);
      if ( (v11 & 1) == 0 )
        goto LABEL_317;
      v34 = v190;
    }
    else
    {
      v45 = AbsoluteObjectName;
    }
    if ( *(_BYTE *)(v14 + 137) || *(_BYTE *)(v14 + 138) )
      v53 = 64;
    else
      v53 = 0;
    v54 = v53 | v11 & 0xBF;
    Length = SourceString->Length;
    if ( SourceString->Length
      || (v56 = *(_QWORD *)(v14 + 40)) != 0
      || (RemainingDesiredAccess & 0xFEE1FF7F) != 0
      || (v54 & 0x40) != 0 )
    {
      LOBYTE(v11) = v54 & 0xF7;
      v56 = *(_QWORD *)(v14 + 40);
    }
    else
    {
      LOBYTE(v11) = v54 | 8;
    }
    v163 = v11;
    v57 = 0LL;
    v169 = 0LL;
    if ( !v56 || (*(_DWORD *)(v56 + 80) & 0x800) != 0 )
    {
      AttachedDevice = (PDEVICE_OBJECT)v17;
      DeviceObject = (PDEVICE_OBJECT)v17;
      v59 = v163;
      if ( *(_QWORD *)(v17 + 56) && (v163 & 8) == 0 )
      {
        if ( (*(_DWORD *)(v17 + 52) & 0x100) != 0
          && (*(_DWORD *)(*(_QWORD *)(v17 + 312) + 32LL) & 0x800) == 0
          && (v34 || (*(_DWORD *)(v14 + 84) & 1) != 0)
          && (v56 || Length)
          && !(_BYTE)v164 )
        {
          Privileges = 0LL;
          if ( !IopCreateSecurityCheck(
                  v17,
                  (void *)v17,
                  AccessState,
                  RemainingDesiredAccess,
                  *(_DWORD *)(v14 + 88),
                  0LL,
                  &GrantedAccess,
                  AbsoluteObjectName,
                  &ObjectTypeName,
                  (__int64)CurrentThread,
                  0) )
            goto LABEL_317;
        }
        v60 = IopCheckVpbMounted(v14, v17, (__int64)SourceString, &AccessStatus);
        v57 = v60;
        v169 = v60;
        if ( !v60 )
          return AccessStatus;
        AttachedDevice = *(PDEVICE_OBJECT *)(v60 + 8);
        DeviceObject = AttachedDevice;
      }
      if ( (*(_DWORD *)(v14 + 152) & 1) != 0 )
      {
        LOBYTE(v59) = v59 | 2;
        v163 = v59;
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
      if ( *(_QWORD *)(v56 + 16) )
      {
        v57 = *(_QWORD *)(v56 + 16);
        v169 = v57;
        if ( (*(_DWORD *)(v17 + 52) & 0x100) != 0
          && (*(_DWORD *)(*(_QWORD *)(v17 + 312) + 32LL) & 0x800) == 0
          && (v34 || (*(_DWORD *)(v14 + 84) & 1) != 0)
          && !(_BYTE)v164 )
        {
          Privileges = 0LL;
          if ( !IopCreateSecurityCheck(
                  v17,
                  (void *)v17,
                  AccessState,
                  RemainingDesiredAccess,
                  *(_DWORD *)(v14 + 88),
                  0LL,
                  &GrantedAccess,
                  v45,
                  &ObjectTypeName,
                  (__int64)CurrentThread,
                  0) )
            goto LABEL_317;
        }
        IopIncrementVpbRefCount(v57, 1);
      }
      if ( (*(_DWORD *)(v14 + 152) & 1) != 0 )
      {
        if ( v57 )
        {
          AttachedDevice = *(PDEVICE_OBJECT *)(v57 + 8);
          DeviceObject = AttachedDevice;
        }
        v59 = v163;
        LOBYTE(v59) = v163 | 2;
        v163 = v59;
      }
      else
      {
        LOBYTE(v59) = v163;
      }
    }
    v61 = *(_DWORD *)(v17 + 52);
    if ( (v61 & 0x40001) != 0
      && (*(_DWORD *)(v17 + 48) & 0x600100) == 0
      && (v61 & 0x100) == 0
      && IopIsSecurityContextAppContainer(&AccessState->SubjectSecurityContext) )
    {
      if ( !v57 )
        goto LABEL_317;
      if ( (*(_DWORD *)(*(_QWORD *)(v57 + 8) + 48LL) & 0x20000) == 0 )
      {
        IopDereferenceVpbAndFree(v57);
LABEL_317:
        IopDecrementDeviceObjectRef(v17, 0, 0);
        return -1073741790;
      }
    }
    if ( (v59 & 2) != 0 )
    {
      v62 = (v59 & 8) != 0;
      v63 = SourceString;
      AccessStatus = IopCheckTopDeviceHint((unsigned int **)&DeviceObject, v14, v62, SourceString);
      if ( AccessStatus < 0 )
      {
        if ( v57 )
          IopDereferenceVpbAndFree(v57);
        IopDecrementDeviceObjectRef(v17, 0, 0);
        return AccessStatus;
      }
      AttachedDevice = DeviceObject;
    }
    else
    {
      v63 = SourceString;
    }
    v64 = *(_DWORD *)(v14 + 152);
    if ( (v64 & 0x10) != 0 )
      *(_DWORD *)(v14 + 152) = v64 & 0xFFFFFFEF;
    if ( ((AttachedDevice->Characteristics & 0x100) != 0
       || IopRequireDeviceAccessCheck && (*(_DWORD *)(v17 + 52) & 0x100000) != 0)
      && (v190 || (*(_DWORD *)(v14 + 84) & 1) != 0)
      && (*(_QWORD *)(v14 + 40) || v63->Length) )
    {
      v65 = AccessState;
      if ( !(_BYTE)v164 )
      {
        Privileges = 0LL;
        if ( !IopCreateSecurityCheck(
                v17,
                AttachedDevice,
                AccessState,
                RemainingDesiredAccess,
                *(_DWORD *)(v14 + 88),
                0LL,
                &GrantedAccess,
                AbsoluteObjectName,
                &ObjectTypeName,
                (__int64)CurrentThread,
                1) )
        {
          IopDecrementDeviceObjectRef(v17, 0, 0);
          if ( v57 )
            IopDereferenceVpbAndFree(v57);
          return -1073741790;
        }
      }
    }
    else
    {
      v65 = AccessState;
    }
    Irp = IopAllocateIrpExReturn((__int64)AttachedDevice, (unsigned __int8)AttachedDevice->StackSize, 0LL, retaddr);
    v67 = Irp;
    if ( !Irp )
    {
      IopDecrementDeviceObjectRef(BugCheckParameter1, 0, 0);
      if ( v57 )
        IopDereferenceVpbAndFree(v57);
      return -1073741670;
    }
    *(_QWORD *)(Irp + 152) = CurrentThread;
    v68 = v190;
    *(_BYTE *)(Irp + 64) = v190;
    *(_DWORD *)(Irp + 16) = 2180;
    *(_QWORD *)&v183 = a9;
    *((_QWORD *)&v183 + 1) = v65;
    LODWORD(v184) = RemainingDesiredAccess;
    HIDWORD(v184) = *(_DWORD *)(v14 + 64);
    v69 = *(_QWORD *)(Irp + 184) - 72LL;
    v180 = (_BYTE *)v69;
    *(_BYTE *)(v69 + 3) = 0;
    v70 = *(_DWORD *)(v14 + 120);
    v71 = a5;
    if ( v70 )
    {
      if ( v70 == 1 )
        *(_BYTE *)v69 = 1;
      else
        *(_BYTE *)v69 = 19;
      *(_QWORD *)(v69 + 32) = *(_QWORD *)(v14 + 128);
    }
    else
    {
      *(_BYTE *)v69 = 0;
      *(_DWORD *)(v69 + 32) = *(_DWORD *)(v14 + 80);
      v72 = *(_BYTE *)(v14 + 84);
      *(_BYTE *)(v69 + 2) = v72;
      if ( (v71 & 0x40) == 0 )
        *(_BYTE *)(v69 + 2) = v72 | 0x80;
    }
    *(_QWORD *)(v67 + 88) = *(_QWORD *)(v14 + 56);
    *(_QWORD *)(v67 + 24) = *(_QWORD *)(v14 + 72);
    *(_DWORD *)(v69 + 16) = (*(_DWORD *)(v14 + 88) << 24) | *(_DWORD *)(v14 + 64) & 0xFFFFFF;
    *(_WORD *)(v69 + 24) = *(_WORD *)(v14 + 68);
    *(_WORD *)(v69 + 26) = *(_WORD *)(v14 + 70);
    *(_QWORD *)(v69 + 8) = &v183;
    *(_QWORD *)(v67 + 112) = *(_QWORD *)(v14 + 168);
    *(_QWORD *)(v67 + 72) = BugCheckParameter4;
    *(_QWORD *)(v67 + 8) = 0LL;
    *(_BYTE *)(v67 + 65) = 0;
    *(_BYTE *)(v67 + 68) = 0;
    *(_QWORD *)(v67 + 80) = 0LL;
    *(_QWORD *)(v67 + 104) = 0LL;
    *(_QWORD *)(v67 + 160) = 0LL;
    if ( !*(_BYTE *)(v14 + 137) )
    {
      v73 = BugCheckParameter1;
      AccessStatus = IopAllocRealFileObject(
                       (unsigned int)&DmaAdapter,
                       (_DWORD)AttachedDevice,
                       BugCheckParameter1,
                       v71,
                       v68,
                       v14,
                       a10,
                       0,
                       RemainingDesiredAccess);
      if ( AccessStatus < 0 )
      {
        IoFreeIrp((PIRP)v67);
        IopDecrementDeviceObjectRef(v73, 0, 0);
        if ( v57 )
          IopDereferenceVpbAndFree(v57);
        v132 = DmaAdapter;
        if ( DmaAdapter )
        {
          DmaAdapter->DmaOperations = 0LL;
          HalPutDmaAdapter(v132);
          result = AccessStatus;
          *(_DWORD *)(v14 + 16) = AccessStatus;
          return result;
        }
        goto LABEL_430;
      }
      v74 = DmaAdapter;
      goto LABEL_186;
    }
    v75 = *(struct _DMA_ADAPTER **)(v14 + 144);
    memset(v75, 0, 0x110uLL);
    v74 = v75 + 3;
    DmaAdapter = v75 + 3;
    LOBYTE(v75[1].DmaOperations) = ObHeaderCookie ^ *((_BYTE *)IoFileObjectType + 40) ^ BYTE1(v75);
    *(_QWORD *)&v75->Version = 1LL;
    if ( (a5 & 0x40) == 0 )
      *(_DWORD *)&v75[8].Version |= 0x20000u;
    *(_DWORD *)&v74->Version = 14155781;
    *(_QWORD *)&v75[7].Version = *(_QWORD *)(v14 + 40);
    v76 = BugCheckParameter1;
    v74->DmaOperations = (_DMA_OPERATIONS *)BugCheckParameter1;
    if ( (*(_DWORD *)(v14 + 152) & 0x20) != 0 )
    {
      if ( v190 )
      {
        if ( (AttachedDevice->Flags & 0x40000) != 0
          || (DeviceType = AttachedDevice->DeviceType, (unsigned int)DeviceType <= 0x35)
          && (v78 = 0x20000100100108LL, _bittest64(&v78, DeviceType)) )
        {
          AccessStatus = IopRetrieveTransactionParameters(AttachedDevice, v14, RemainingDesiredAccess, v74);
          if ( AccessStatus < 0 )
            break;
        }
      }
    }
    if ( !PsIsHostSilo(*(_QWORD *)(a10 + 8))
      || (v79 = *(_QWORD *)&v74[4].Version) != 0 && (v80 = IoGetSilo(v79), !PsIsHostSilo(v80)) )
    {
      v179 = 0LL;
      if ( *(_QWORD *)&v74[4].Version && PsIsServerSilo(*(_QWORD *)(a10 + 8)) )
        Silo = (_DWORD *)IoGetSilo(v81);
      else
        Silo = *(_DWORD **)(a10 + 8);
      if ( !PsIsHostSilo((__int64)Silo) )
      {
        AccessStatus = PsAcquireSiloHardReference(Silo);
        if ( AccessStatus < 0 )
          goto LABEL_329;
        SetSpecificExtension = IopGetSetSpecificExtension((__int64)v74, 7u, 0x10u, 1, &v179, 0LL);
        AccessStatus = SetSpecificExtension;
        if ( SetSpecificExtension < 0 )
        {
          PsReleaseSiloHardReference(Silo);
          SetSpecificExtension = AccessStatus;
        }
        v84 = v179;
        if ( SetSpecificExtension < 0 )
        {
LABEL_329:
          IoFreeIrp((PIRP)v67);
          v133 = BugCheckParameter1;
          goto LABEL_327;
        }
        *v179 = 16;
        *((_QWORD *)v84 + 1) = Silo;
        v84[1] |= 1u;
        ObfReferenceObjectWithTag(Silo, 0x70536F49u);
      }
      v69 = (__int64)v180;
LABEL_186:
      v76 = BugCheckParameter1;
    }
    if ( (v163 & 8) != 0 )
      *(_DWORD *)&v74[5].Version |= 0x800u;
    v85 = *(_QWORD *)(v14 + 216);
    if ( (v85 & 1) != 0 )
    {
      v86 = 32;
LABEL_193:
      IopSetFileObjectExtensionFlag((__int64)v74, v86, 1);
      goto LABEL_194;
    }
    if ( (v85 & 2) != 0 )
    {
      v86 = 64;
      goto LABEL_193;
    }
LABEL_194:
    *(_QWORD *)(v67 + 192) = v74;
    *(_QWORD *)(v69 + 48) = v74;
    v87 = SourceString->Length;
    if ( SourceString->Length )
    {
      if ( v87 >= 0x38u )
      {
        if ( v87 >= 0x78u )
        {
          if ( v87 < 0xF8u )
            v87 = 248;
        }
        else
        {
          v87 = 120;
        }
      }
      else
      {
        v87 = 56;
      }
      WORD1(v74[5].DmaOperations) = v87;
      PoolWithTag = ExAllocatePoolWithTag(PagedPool, v87, 0x6D4E6F49u);
      *(_QWORD *)&v74[6].Version = PoolWithTag;
      if ( !PoolWithTag )
      {
        IoFreeIrp((PIRP)v67);
        IopDecrementDeviceObjectRef(v76, 0, 0);
        if ( v169 )
          IopDereferenceVpbAndFree(v169);
        v74->DmaOperations = 0LL;
        if ( !*(_BYTE *)(v14 + 137) )
        {
          HalPutDmaAdapter(v74);
          return -1073741670;
        }
        return -1073741670;
      }
    }
    RtlCopyUnicodeString((PUNICODE_STRING)&v74[5].DmaOperations, SourceString);
    if ( *(_BYTE *)(v14 + 137) )
    {
      LOBYTE(v188) = 0;
      AccessStatus = IopQueryInformation(v14, AttachedDevice, v67, v69, &v188);
      if ( AccessStatus < 0 || (_BYTE)v188 )
      {
        v136 = *(_DWORD *)(v67 + 48);
        *(_DWORD *)(v14 + 16) = v136;
        *(_QWORD *)(v14 + 24) = *(_QWORD *)(v67 + 56);
        if ( v136 == 260 )
        {
          v137 = *(void **)(v67 + 160);
          if ( v137 )
          {
            ExFreePoolWithTag(v137, 0);
            *(_QWORD *)(v67 + 160) = 0LL;
            *(_QWORD *)(v14 + 40) = 0LL;
          }
        }
        if ( LOWORD(v74[5].DmaOperations) )
          ExFreePoolWithTag(*(PVOID *)&v74[6].Version, 0);
        if ( *(_QWORD *)&v74[13].Version )
          IopDeleteFileObjectExtension((__int64)v74);
        v135 = BugCheckParameter1;
        goto LABEL_352;
      }
      if ( !RtlEqualUnicodeString((PCUNICODE_STRING)&v74[5].DmaOperations, SourceString, 0) )
      {
        v89 = *(void **)&v74[6].Version;
        if ( v89 )
        {
          ExFreePoolWithTag(v89, 0);
          RtlInitUnicodeString((PUNICODE_STRING)&v74[5].DmaOperations, 0LL);
        }
        v90 = SourceString->Length;
        if ( SourceString->Length )
        {
          if ( v90 >= 0x38u )
          {
            if ( v90 >= 0x78u )
            {
              if ( v90 < 0xF8u )
                v90 = 248;
            }
            else
            {
              v90 = 120;
            }
          }
          else
          {
            v90 = 56;
          }
          WORD1(v74[5].DmaOperations) = v90;
          v91 = ExAllocatePoolWithTag(PagedPool, v90, 0x6D4E6F49u);
          *(_QWORD *)&v74[6].Version = v91;
          if ( !v91 )
          {
            if ( *(_QWORD *)&v74[13].Version )
              IopDeleteFileObjectExtension((__int64)v74);
            IopDecrementDeviceObjectRef(BugCheckParameter1, 0, 0);
            if ( v169 )
              IopDereferenceVpbAndFree(v169);
            IoFreeIrp((PIRP)v67);
            return -1073741670;
          }
          RtlCopyUnicodeString((PUNICODE_STRING)&v74[5].DmaOperations, SourceString);
        }
      }
      v92 = BugCheckParameter1;
      AccessStatus = IopAllocRealFileObject(
                       (unsigned int)&DmaAdapter,
                       (_DWORD)AttachedDevice,
                       BugCheckParameter1,
                       a5,
                       v190,
                       v14,
                       a10,
                       1,
                       RemainingDesiredAccess);
      if ( AccessStatus < 0 )
      {
        v134 = DmaAdapter;
        if ( LOWORD(DmaAdapter[5].DmaOperations) )
          ExFreePoolWithTag(*(PVOID *)&DmaAdapter[6].Version, 0);
        if ( *(_QWORD *)&v134[13].Version )
          IopDeleteFileObjectExtension((__int64)v134);
        v135 = v92;
LABEL_352:
        IopDecrementDeviceObjectRef(v135, 0, 0);
        if ( v169 )
          IopDereferenceVpbAndFree(v169);
        IoFreeIrp((PIRP)v67);
        return AccessStatus;
      }
      v74 = DmaAdapter;
      *(_QWORD *)(v69 + 48) = DmaAdapter;
      *(_QWORD *)(v67 + 192) = v74;
    }
    if ( !*(_DWORD *)(v14 + 120) )
    {
      ExtraCreateParameter = 0LL;
      AccessStatus = IoGetIrpExtraCreateParameter((PIRP)v67, &ExtraCreateParameter);
      if ( ExtraCreateParameter )
      {
        if ( IopSymlinkGetECP(ExtraCreateParameter, &v174) != -1073741275 )
        {
          MostRecentlyUsedName = IopSymlinkGetMostRecentlyUsedName((__int64)v174);
          if ( !*(_WORD *)(MostRecentlyUsedName + 4) )
          {
            updated = IopSymlinkUpdateECP(
                        (PIRP)v67,
                        (UNICODE_STRING *)MostRecentlyUsedName,
                        *(_WORD *)MostRecentlyUsedName,
                        AbsoluteObjectName,
                        AbsoluteObjectName->Length - SourceString->Length,
                        *(_WORD *)(MostRecentlyUsedName + 2));
            AccessStatus = updated;
            if ( updated < 0 )
            {
              *(_DWORD *)(v67 + 48) = updated;
              *(_QWORD *)(v67 + 56) = 0LL;
              LOBYTE(v163) = v163 & 0xFB;
            }
          }
        }
      }
    }
    p_DmaOperations = (struct _KSEMAPHORE *)&v74[9].DmaOperations;
    KeInitializeEvent((PRKEVENT)&v74[9].DmaOperations, NotificationEvent, 0);
    *(_QWORD *)(v14 + 8) = v74;
    v96 = v163;
    if ( (v163 & 4) != 0 )
    {
      IopQueueThreadIrp(v67);
      v97 = IoCallDriverWithTracing(AttachedDevice, v67);
      AccessStatus = v97;
      v96 = v163;
    }
    else
    {
      v97 = AccessStatus;
    }
    if ( v97 == 259 )
    {
      v98 = v96 | 0x80;
      v99 = v96 & 0x7F;
      if ( (KeGetCurrentThread()->MiscFlags & 0x400) == 0 )
        v99 = v98;
      v163 = v99;
      v100 = (unsigned __int8)v99 >> 7;
      AccessStatus = KeWaitForSingleObject(p_DmaOperations, Executive, 0, (unsigned __int8)v99 >> 7, 0LL);
      if ( AccessStatus == 257 )
      {
        while ( 1 )
        {
          CurrentIrql = KeGetCurrentIrql();
          __writecr8(1uLL);
          if ( PsIsThreadTerminating(KeGetCurrentThread())
            || !KeReadStateSemaphore(p_DmaOperations) && *(_BYTE *)(v67 + 68) )
          {
            break;
          }
          if ( KiIrqlFlags )
          {
            if ( (KiIrqlFlags & 1) != 0 )
            {
              v102 = KeGetCurrentIrql();
              if ( v102 <= 0xFu && CurrentIrql <= 0xFu && v102 >= 2u )
              {
                CurrentPrcb = KeGetCurrentPrcb();
                SchedulerAssist = CurrentPrcb->SchedulerAssist;
                v105 = ~(unsigned __int16)(-1LL << (CurrentIrql + 1));
                v106 = (v105 & SchedulerAssist[5]) == 0;
                SchedulerAssist[5] &= v105;
                if ( v106 )
                  KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
              }
            }
          }
          __writecr8(CurrentIrql);
          AccessStatus = KeWaitForSingleObject(p_DmaOperations, Executive, 0, v100, 0LL);
          if ( AccessStatus != 257 )
            goto LABEL_252;
        }
        if ( KiIrqlFlags )
        {
          if ( (KiIrqlFlags & 1) != 0 )
          {
            v107 = KeGetCurrentIrql();
            if ( v107 <= 0xFu && CurrentIrql <= 0xFu && v107 >= 2u )
            {
              v108 = KeGetCurrentPrcb();
              v109 = v108->SchedulerAssist;
              v110 = ~(unsigned __int16)(-1LL << (CurrentIrql + 1));
              v106 = (v110 & v109[5]) == 0;
              v109[5] &= v110;
              if ( v106 )
                KiRemoveSystemWorkPriorityKick((__int64)v108);
            }
          }
        }
        __writecr8(CurrentIrql);
        IopCancelAlertedRequest(p_DmaOperations, (PIRP)v67);
      }
LABEL_252:
      AccessStatus = BugCheckParameter4[0];
      v74 = DmaAdapter;
    }
    AccessStatus = IoGetIrpExtraCreateParameter((PIRP)v67, &v177);
    v111 = *(_DWORD *)(v14 + 84) & 8;
    v112 = v111 != 0;
    v113 = v177;
    if ( *(_DWORD *)(v67 + 48) == 260 )
    {
      P = *(PVOID *)(v67 + 160);
      if ( !v177 || IopSymlinkGetECP(v177, &v174) == -1073741275 )
      {
        AccessStatus = IopSymlinkCreateECP(
                         (PIRP)v67,
                         (__int64)v74,
                         &AbsoluteObjectName->Length,
                         AbsoluteObjectName->Length - SourceString->Length,
                         &v174);
        if ( AccessStatus >= 0 )
        {
          if ( !v113 )
          {
            AccessStatus = IoGetIrpExtraCreateParameter((PIRP)v67, &v177);
            v113 = v177;
          }
        }
        else
        {
          *(_QWORD *)(v67 + 56) = 0LL;
          *(_DWORD *)(v67 + 48) = AccessStatus;
        }
      }
      if ( *(_DWORD *)(v67 + 48) == 260 )
      {
        v114 = P;
        if ( v111 && v113 )
          v112 = IopCheckAndUpdateStopOnSymlinkEcp(v113, *(unsigned int *)(v67 + 56), P);
        IopSymlinkProcessReparse(v67, (__int64)v74, (__int64)v114, v112);
        v115 = *(_QWORD *)(v67 + 56) - 2684354563LL;
        if ( v115 <= 0x16 )
        {
          v116 = 4194817LL;
          if ( _bittest64(&v116, v115) )
          {
            if ( *(int *)(v67 + 48) < 0 )
              goto LABEL_280;
            v117 = *((unsigned __int16 *)v114 + 3);
            v118 = 0;
            if ( !(_WORD)v117 )
              v118 = 16;
            v119 = v163;
            LOBYTE(v119) = v118 | v163 & 0xEF;
            v163 = v119;
            if ( (v119 & 0x10) == 0 && *(wchar_t *)((char *)SourceString->Buffer + SourceString->Length - v117) != 58 )
              goto LABEL_280;
            v120 = *(_DWORD *)(v14 + 64);
            if ( (v120 & 0x41) != 0 || *v180 )
              goto LABEL_280;
            if ( *v114 == -1610612733 )
              goto LABEL_278;
            if ( *v114 != -1610612724 )
              goto LABEL_280;
            if ( (int)v114[4] < 0 )
            {
LABEL_278:
              v121 = v120 | 1;
LABEL_279:
              *(_DWORD *)(v14 + 64) = v121;
            }
            else if ( (v114[4] & 0x40000000) != 0 )
            {
              v121 = v120 | 0x40;
              goto LABEL_279;
            }
LABEL_280:
            if ( !v112 )
            {
              ExFreePoolWithTag(v114, 0);
              P = 0LL;
            }
          }
        }
      }
    }
    if ( *(_DWORD *)(v67 + 48) || *(_DWORD *)(v14 + 120) )
    {
      v122 = DeviceObject;
    }
    else
    {
      AccessStatus = IopSymlinkPropagateToExtensionIfNeeded(v74, v113, AbsoluteObjectName);
      v122 = DeviceObject;
      if ( AccessStatus < 0 )
      {
        IoCancelFileOpen(DeviceObject, (PFILE_OBJECT)v74);
        *(_QWORD *)(v67 + 56) = 0LL;
        *(_DWORD *)(v67 + 48) = AccessStatus;
      }
    }
    if ( v113 )
      *(_QWORD *)(v14 + 168) = v113;
    *(_OWORD *)BugCheckParameter4 = *(_OWORD *)(v67 + 48);
    AccessStatus = _mm_cvtsi128_si32(*(__m128i *)BugCheckParameter4);
    HIDWORD(v74[9].DmaOperations) = 1;
    v11 = v163;
    if ( (v163 & 4) != 0 )
    {
      *(_QWORD *)(v67 + 152) = CurrentThread;
      IopDequeueIrpFromThread((_QWORD *)v67);
    }
    if ( (*(_BYTE *)(v67 + 16) & 0x30) == 0x30 )
      ExFreePoolWithTag(*(PVOID *)(v67 + 24), 0);
    IoFreeIrp((PIRP)v67);
    v123 = BugCheckParameter4[1];
    *(_QWORD *)(v14 + 24) = BugCheckParameter4[1];
    if ( AccessStatus < 0 )
    {
      if ( (*(_DWORD *)&v74[5].Version & 0x200000) != 0 )
      {
        HalPutDmaAdapter(v74);
        *(_QWORD *)(v14 + 8) = 0LL;
        result = AccessStatus;
        *(_DWORD *)(v14 + 16) = AccessStatus;
        return result;
      }
      if ( LOWORD(v74[5].DmaOperations) )
      {
        ExFreePoolWithTag(*(PVOID *)&v74[6].Version, 0);
        LOWORD(v74[5].DmaOperations) = 0;
      }
      v74->DmaOperations = 0LL;
      HalPutDmaAdapter(v74);
      IopDecrementDeviceObjectRef(BugCheckParameter1, 0, 0);
      if ( v169 )
        IopDereferenceVpbAndFree(v169);
      *(_QWORD *)(v14 + 8) = 0LL;
      goto LABEL_430;
    }
    if ( AccessStatus != 260 )
    {
      RelatedDeviceObject = IoGetRelatedDeviceObject((PFILE_OBJECT)v74);
      if ( v122 != RelatedDeviceObject )
      {
        v147 = *(_QWORD *)&v74[1].Version;
        v148 = v169;
        if ( v147 != v169 )
        {
          if ( v147 )
            IopIncrementVpbRefCount(v147, 1);
          if ( v148 )
            IopDereferenceVpbAndFree(v148);
        }
      }
      if ( (v163 & 0x40) == 0 )
      {
        *a11 = v74;
        *(_DWORD *)(v14 + 32) = -1096154543;
        ObfReferenceObject(v74);
        v149 = *(_QWORD *)&v74[4].Version;
        if ( (!v149 || (*(_DWORD *)(v149 + 80) & 0x400000) != 0) && !LOWORD(v74[5].DmaOperations) )
        {
          v150 = RelatedDeviceObject->DeviceType;
          if ( (unsigned int)v150 <= 0x20 )
          {
            v151 = 0x100000308LL;
            if ( _bittest64(&v151, v150) )
              *(_DWORD *)&v74[5].Version |= 0x400000u;
          }
        }
        result = BugCheckParameter4[0];
        *(_DWORD *)(v14 + 16) = BugCheckParameter4[0];
        return result;
      }
      if ( *(_BYTE *)(v14 + 137) )
      {
        if ( *(_BYTE *)(v14 + 208) )
        {
          FileInformation = IoQueryFileInformation(
                              (PFILE_OBJECT)v74,
                              *(FILE_INFORMATION_CLASS *)(v14 + 200),
                              *(_DWORD *)(v14 + 204),
                              *(PVOID *)(v14 + 112),
                              (PULONG)(v14 + 204));
          goto LABEL_421;
        }
        v153 = 0;
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
                v160 = (MmVerifierData & 0x10) != 0 ? (void *)VfFastIoSnapState() : 0LL;
                LOBYTE(v145) = 1;
                v153 = FastIoQueryNetworkOpenInfo(
                         v74,
                         v145,
                         *(_QWORD *)(v14 + 104),
                         BugCheckParameter4,
                         RelatedDeviceObject);
                if ( v160 )
                  VfFastIoCheckState(v160);
              }
            }
          }
          if ( !v153 )
          {
            v161 = IoQueryFileInformation(
                     (PFILE_OBJECT)v74,
                     FileNetworkOpenInformation,
                     0x38u,
                     *(PVOID *)(v14 + 104),
                     &ReturnedLength);
            AccessStatus = v161;
            if ( v161 == -1073741811 || v161 == -1073741822 )
            {
              FileInformation = IopGetNetworkOpenInformation(v74);
LABEL_421:
              AccessStatus = FileInformation;
            }
          }
        }
        else
        {
          v155 = 0LL;
          v174 = 0LL;
          if ( FastIoDispatch )
            FastIoQueryBasicInfo = (__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD))FastIoDispatch->FastIoQueryBasicInfo;
          else
            FastIoQueryBasicInfo = 0LL;
          v188 = FastIoQueryBasicInfo;
          if ( FastIoQueryBasicInfo )
          {
            v157 = (MmVerifierData & 0x10) != 0 ? (void *)VfFastIoSnapState() : 0LL;
            v185 = v157;
            LOBYTE(v155) = 1;
            v153 = FastIoQueryBasicInfo(v74, v155, *(_QWORD *)(v14 + 96), BugCheckParameter4, RelatedDeviceObject);
            v172 = v153;
            if ( v157 )
              VfFastIoCheckState(v157);
          }
          if ( v153 )
          {
            AccessStatus = BugCheckParameter4[0];
          }
          else
          {
            Pool = IopVerifierExAllocatePool(NonPagedPoolNx, 0x28uLL);
            v174 = Pool;
            if ( Pool )
            {
              AccessStatus = IoQueryFileInformation(
                               (PFILE_OBJECT)v74,
                               FileBasicInformation,
                               0x28u,
                               Pool,
                               &ReturnedLength);
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
      IopCloseFile(0LL, (struct _FILE_OBJECT *)v74, 1LL, 1LL);
      HalPutDmaAdapter(v74);
      *(_QWORD *)(v14 + 8) = 0LL;
      result = AccessStatus;
      *(_DWORD *)(v14 + 16) = AccessStatus;
      return result;
    }
    if ( (v123 & 0xFFFFFFFFFFFFFFFDuLL) != 0
      && ((v124 = v123 - 2684354563u, v123 - 2684354563u > 0x16) || (v125 = 4194817LL, !_bittest64(&v125, v124)) || v112) )
    {
      v126 = AbsoluteObjectName;
    }
    else
    {
      v126 = AbsoluteObjectName;
      if ( AbsoluteObjectName->MaximumLength < LOWORD(v74[5].DmaOperations) )
      {
        v127 = (wchar_t *)ExAllocatePoolWithTag(PagedPool, LOWORD(v74[5].DmaOperations), 0x63466F49u);
        if ( !v127 )
        {
          *(_DWORD *)(v14 + 16) = -1073741670;
          return -1073741670;
        }
        Buffer = v126->Buffer;
        if ( Buffer )
          ExFreePoolWithTag(Buffer, 0);
        v126->Buffer = v127;
        v126->MaximumLength = (unsigned __int16)v74[5].DmaOperations;
      }
      RtlCopyUnicodeString(v126, (PCUNICODE_STRING)&v74[5].DmaOperations);
      if ( BugCheckParameter4[1] - 2684354563u <= 0x16 )
      {
        v129 = 4194817LL;
        if ( _bittest64(&v129, BugCheckParameter4[1] - 2684354563u) )
          *(_QWORD *)(v14 + 40) = 0LL;
      }
    }
    if ( LOWORD(v74[5].DmaOperations) )
    {
      ExFreePoolWithTag(*(PVOID *)&v74[6].Version, 0);
      LOWORD(v74[5].DmaOperations) = 0;
    }
    v74->DmaOperations = 0LL;
    HalPutDmaAdapter(v74);
    *(_QWORD *)(v14 + 8) = 0LL;
    v130 = BugCheckParameter1;
    IopDecrementDeviceObjectRef(BugCheckParameter1, 0, 0);
    if ( v169 )
      IopDereferenceVpbAndFree(v169);
    v131 = BugCheckParameter4[1];
    if ( BugCheckParameter4[1] != 1 )
    {
      *(_QWORD *)(v14 + 40) = 0LL;
      v138 = 4194817LL;
      if ( v131 - 2684354563u <= 0x16 && _bittest64(&v138, v131 - 2684354563u) )
      {
        *(_DWORD *)(v14 + 152) |= 0x10u;
        v139 = *(_DWORD *)(v14 + 152);
        v140 = *(unsigned int *)(v130 + 72);
        if ( (unsigned int)v140 <= 0x24 && (v141 = 0x1080020084LL, _bittest64(&v141, v140)) )
          v142 = v139 | 8;
        else
          v142 = v139 & 0xFFFFFFF7;
        *(_DWORD *)(v14 + 152) = v142;
      }
      if ( *(_BYTE *)(v14 + 136) )
        KeBugCheckEx(0xF9u, v130, (ULONG_PTR)DeviceObject, (ULONG_PTR)v126, v131);
      if ( (*(_DWORD *)(*(_QWORD *)(v130 + 312) + 32LL) & 0x800) == 0 )
      {
        v143 = AccessState;
        *(_QWORD *)&AccessState->RemainingDesiredAccess = AccessState->OriginalDesiredAccess;
        v143->Flags &= ~0x100u;
      }
      if ( v131 - 2684354563u <= 0x16 && _bittest64(&v138, v131 - 2684354563u) && v112 )
      {
        *(_QWORD *)(v14 + 24) = P;
        *(_DWORD *)(v14 + 16) = -2147483603;
        return -2147483603;
      }
      else if ( v131 == 2684354585 || v131 == 2 )
      {
        v144 = a10;
        *(_QWORD *)(v144 + 8) = PsGetParentSilo(*(_QWORD *)(a10 + 8));
        return 872;
      }
      else
      {
        return 260;
      }
    }
    if ( (unsigned int)++v176 > 0x20 )
      return -1073741823;
    *a11 = 0LL;
    DmaAdapter = 0LL;
    v12 = AccessState;
    v13 = (unsigned int *)BugCheckParameter2;
  }
  IoFreeIrp((PIRP)v67);
  v133 = v76;
LABEL_327:
  IopDecrementDeviceObjectRef(v133, 0, 0);
  if ( v169 )
  {
    IopDereferenceVpbAndFree(v169);
    result = AccessStatus;
    *(_DWORD *)(v14 + 16) = AccessStatus;
    return result;
  }
LABEL_430:
  result = AccessStatus;
LABEL_431:
  *(_DWORD *)(v14 + 16) = result;
  return result;
}
