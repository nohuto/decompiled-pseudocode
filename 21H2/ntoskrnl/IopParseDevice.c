/*
 * XREFs of IopParseDevice @ 0x140700F60
 * Callers:
 *     IopParseFile @ 0x140697270 (IopParseFile.c)
 * Callees:
 *     PsReleaseSiloHardReference @ 0x140200960 (PsReleaseSiloHardReference.c)
 *     PsAcquireSiloHardReference @ 0x140200A10 (PsAcquireSiloHardReference.c)
 *     IopCreateSecurityCheck @ 0x140201880 (IopCreateSecurityCheck.c)
 *     CmSiFreeMemory @ 0x140201A30 (CmSiFreeMemory.c)
 *     ObfReferenceObjectWithTag @ 0x1402056A0 (ObfReferenceObjectWithTag.c)
 *     SeAccessCheck @ 0x140206760 (SeAccessCheck.c)
 *     KeLeaveCriticalRegionThread @ 0x140206FC0 (KeLeaveCriticalRegionThread.c)
 *     IopVerifierExAllocatePool @ 0x14022C9E0 (IopVerifierExAllocatePool.c)
 *     IopDeleteFileObjectExtension @ 0x140252C8C (IopDeleteFileObjectExtension.c)
 *     KeEnterCriticalRegionThread @ 0x14025B380 (KeEnterCriticalRegionThread.c)
 *     PsGetCurrentServerSilo @ 0x14025C9C0 (PsGetCurrentServerSilo.c)
 *     PsGetCurrentProcessSessionId @ 0x14025F5C0 (PsGetCurrentProcessSessionId.c)
 *     PsGetServerSiloServiceSessionId @ 0x140264460 (PsGetServerSiloServiceSessionId.c)
 *     PsIsThreadTerminating @ 0x1402754A0 (PsIsThreadTerminating.c)
 *     RtlInitUnicodeString @ 0x14027C520 (RtlInitUnicodeString.c)
 *     RtlGetActiveConsoleId @ 0x140281DB0 (RtlGetActiveConsoleId.c)
 *     IopGetDevicePDO @ 0x1402835A8 (IopGetDevicePDO.c)
 *     IopDereferenceVpbAndFree @ 0x14029CB60 (IopDereferenceVpbAndFree.c)
 *     KeReadStateSemaphore @ 0x1402B9E60 (KeReadStateSemaphore.c)
 *     IopSymlinkGetMostRecentlyUsedName @ 0x1402BB470 (IopSymlinkGetMostRecentlyUsedName.c)
 *     IopSymlinkGetECP @ 0x1402BB490 (IopSymlinkGetECP.c)
 *     HalPutDmaAdapter @ 0x1402C1740 (HalPutDmaAdapter.c)
 *     IopIncrementVpbRefCount @ 0x14030F0A8 (IopIncrementVpbRefCount.c)
 *     KeWaitForSingleObject @ 0x140345770 (KeWaitForSingleObject.c)
 *     ObfReferenceObject @ 0x14034B230 (ObfReferenceObject.c)
 *     IopQueueThreadIrp @ 0x14034B290 (IopQueueThreadIrp.c)
 *     ExReleaseResourceLite @ 0x14034B3F0 (ExReleaseResourceLite.c)
 *     ExAcquireResourceSharedLite @ 0x14034BF60 (ExAcquireResourceSharedLite.c)
 *     IoGetRelatedDeviceObject @ 0x140351920 (IoGetRelatedDeviceObject.c)
 *     IopAllocateIrpExReturn @ 0x140351A40 (IopAllocateIrpExReturn.c)
 *     IopCheckDeviceAndDriver @ 0x140353340 (IopCheckDeviceAndDriver.c)
 *     RtlCopyUnicodeString @ 0x1403534C0 (RtlCopyUnicodeString.c)
 *     IoFreeIrp @ 0x140353540 (IoFreeIrp.c)
 *     IoGetAttachedDevice @ 0x140353740 (IoGetAttachedDevice.c)
 *     IopDequeueIrpFromThread @ 0x140353760 (IopDequeueIrpFromThread.c)
 *     IoCallDriverWithTracing @ 0x1403538A0 (IoCallDriverWithTracing.c)
 *     KeInitializeEvent @ 0x1403538F0 (KeInitializeEvent.c)
 *     IopCheckVpbMounted @ 0x140353920 (IopCheckVpbMounted.c)
 *     IopDoFullTraverseCheck @ 0x140353B40 (IopDoFullTraverseCheck.c)
 *     IopDecrementDeviceObjectRef @ 0x140353B90 (IopDecrementDeviceObjectRef.c)
 *     PsIsHostSilo @ 0x140354A80 (PsIsHostSilo.c)
 *     IopGetSetSpecificExtension @ 0x140356AE8 (IopGetSetSpecificExtension.c)
 *     IopSetFileObjectExtensionFlag @ 0x1403621E0 (IopSetFileObjectExtensionFlag.c)
 *     IoGetSilo @ 0x140362220 (IoGetSilo.c)
 *     PsIsServerSilo @ 0x140362250 (PsIsServerSilo.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403F3684 (KiRemoveSystemWorkPriorityKick.c)
 *     KeBugCheckEx @ 0x1403FDEF0 (KeBugCheckEx.c)
 *     _guard_dispatch_icall @ 0x1404085B0 (_guard_dispatch_icall.c)
 *     memmove @ 0x140413F40 (memmove.c)
 *     memset @ 0x140414200 (memset.c)
 *     IopCheckSessionDeviceAccess @ 0x14050675C (IopCheckSessionDeviceAccess.c)
 *     IopAllowRemoteDASD @ 0x140507A10 (IopAllowRemoteDASD.c)
 *     IopIsSecurityContextAppContainer @ 0x140507ACC (IopIsSecurityContextAppContainer.c)
 *     SeFastTraverseCheck @ 0x140595D90 (SeFastTraverseCheck.c)
 *     SeOpenObjectAuditAlarm @ 0x1405D99E0 (SeOpenObjectAuditAlarm.c)
 *     SeAppendPrivileges @ 0x1405D9A40 (SeAppendPrivileges.c)
 *     RtlEqualUnicodeString @ 0x140601410 (RtlEqualUnicodeString.c)
 *     IoGetIrpExtraCreateParameter @ 0x140683F20 (IoGetIrpExtraCreateParameter.c)
 *     IopQueryInformation @ 0x1406886C0 (IopQueryInformation.c)
 *     IopCheckTopDeviceHint @ 0x140697C8C (IopCheckTopDeviceHint.c)
 *     IopSymlinkUpdateECP @ 0x14069E24C (IopSymlinkUpdateECP.c)
 *     IopSymlinkCreateECP @ 0x14069E570 (IopSymlinkCreateECP.c)
 *     IopSymlinkProcessReparse @ 0x14069E848 (IopSymlinkProcessReparse.c)
 *     IopSymlinkEnforceEnabledTypes @ 0x1406C3BA4 (IopSymlinkEnforceEnabledTypes.c)
 *     IoQueryFileInformation @ 0x1406C5CF0 (IoQueryFileInformation.c)
 *     SeLockSubjectContext @ 0x1406F5E30 (SeLockSubjectContext.c)
 *     SeUnlockSubjectContext @ 0x1406F5E90 (SeUnlockSubjectContext.c)
 *     IopCloseFile @ 0x1406FCA20 (IopCloseFile.c)
 *     RtlMapGenericMask @ 0x140702EA0 (RtlMapGenericMask.c)
 *     IopCheckBackupRestorePrivilege @ 0x140702EF0 (IopCheckBackupRestorePrivilege.c)
 *     SeSetAccessStateGenericMapping @ 0x1407030C0 (SeSetAccessStateGenericMapping.c)
 *     IopAllocRealFileObject @ 0x1407030E0 (IopAllocRealFileObject.c)
 *     IopSymlinkPropagateToExtensionIfNeeded @ 0x1407035D0 (IopSymlinkPropagateToExtensionIfNeeded.c)
 *     IopRetrieveTransactionParameters @ 0x140703B20 (IopRetrieveTransactionParameters.c)
 *     SeTokenIsAdmin @ 0x140717530 (SeTokenIsAdmin.c)
 *     IopCancelAlertedRequest @ 0x14089108C (IopCancelAlertedRequest.c)
 *     IoCancelFileOpen @ 0x140893620 (IoCancelFileOpen.c)
 *     IopCheckAndUpdateStopOnSymlinkEcp @ 0x1408940C4 (IopCheckAndUpdateStopOnSymlinkEcp.c)
 *     IopGetNetworkOpenInformation @ 0x140894894 (IopGetNetworkOpenInformation.c)
 *     PsGetParentSilo @ 0x140905AF0 (PsGetParentSilo.c)
 *     ExFreePoolWithTag @ 0x1409B4010 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x1409B4160 (ExAllocatePoolWithTag.c)
 *     VfFastIoCheckState @ 0x1409C99B4 (VfFastIoCheckState.c)
 *     VfFastIoSnapState @ 0x1409C9A8C (VfFastIoSnapState.c)
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
  __int64 v16; // r8
  __int64 v17; // rdx
  ULONG_PTR v18; // r13
  unsigned __int64 v19; // rcx
  int result; // eax
  char v21; // dl
  bool v22; // al
  __int64 v23; // rax
  ULONG_PTR v24; // rax
  ULONG_PTR v25; // rcx
  __int64 v26; // rdx
  __int64 v27; // rcx
  __int64 CurrentServerSilo; // rax
  int ServerSiloServiceSessionId; // ebx
  struct _DMA_ADAPTER *DevicePDO; // rax
  struct _DMA_ADAPTER *v31; // rbx
  ACCESS_MASK *p_RemainingDesiredAccess; // rsi
  ACCESS_MASK RemainingDesiredAccess; // r15d
  char v34; // dl
  __int64 v35; // rcx
  int v36; // r10d
  char v37; // r9
  char v38; // r14
  int ActiveConsoleId; // ebx
  __int64 v40; // rdx
  __int64 v41; // rcx
  __int64 v42; // rax
  int v43; // ebx
  bool v44; // bl
  SECURITY_SUBJECT_CONTEXT *p_SubjectSecurityContext; // rdi
  char v46; // r14
  PACCESS_TOKEN ClientToken; // rcx
  PACCESS_STATE v48; // rbx
  ACCESS_MASK v49; // eax
  UNICODE_STRING *v50; // rsi
  _DWORD *v51; // r9
  struct _KTHREAD *v52; // rsi
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
  _DWORD *v64; // r9
  int v65; // eax
  PACCESS_STATE v66; // rsi
  _DWORD *v67; // r9
  __int64 Irp; // rax
  _DWORD *v69; // r9
  __int64 v70; // r13
  char v71; // dl
  __int64 v72; // rsi
  int v73; // eax
  int v74; // r8d
  char v75; // al
  ULONG_PTR v76; // rdi
  PADAPTER_OBJECT v77; // rdi
  struct _DMA_ADAPTER *v78; // rbx
  ULONG_PTR v79; // rbx
  unsigned __int64 DeviceType; // rax
  __int64 v81; // rcx
  __int64 v82; // rcx
  __int64 v83; // rax
  __int64 v84; // rdx
  _DWORD *Silo; // rbx
  NTSTATUS SetSpecificExtension; // eax
  _DWORD *v87; // rsi
  __int64 v88; // rax
  int v89; // edx
  unsigned __int16 v90; // ax
  PVOID PoolWithTag; // rax
  _DWORD *v92; // r9
  void *v93; // rcx
  unsigned __int16 v94; // ax
  PVOID v95; // rax
  _DWORD *v96; // r9
  ULONG_PTR v97; // rdi
  __int64 MostRecentlyUsedName; // rdx
  NTSTATUS updated; // eax
  struct _KSEMAPHORE *p_DmaOperations; // rsi
  char v101; // dl
  NTSTATUS v102; // eax
  unsigned __int8 v103; // al
  int v104; // edx
  BOOLEAN v105; // di
  unsigned __int8 CurrentIrql; // bl
  unsigned __int8 v107; // al
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  int v110; // eax
  bool v111; // zf
  unsigned __int8 v112; // al
  struct _KPRCB *v113; // r10
  _DWORD *v114; // r9
  int v115; // eax
  int v116; // esi
  char v117; // r15
  struct _ECP_LIST *v118; // r14
  _DWORD *v119; // rbx
  unsigned __int64 v120; // rcx
  __int64 v121; // rax
  __int64 v122; // rcx
  char v123; // al
  int v124; // r8d
  int v125; // ecx
  int v126; // ecx
  PDEVICE_OBJECT v127; // rbx
  ULONG_PTR v128; // rax
  unsigned __int64 v129; // rcx
  __int64 v130; // rax
  PUNICODE_STRING v131; // r13
  wchar_t *v132; // rsi
  wchar_t *Buffer; // rcx
  __int64 v134; // rax
  ULONG_PTR v135; // rdi
  _DWORD *v136; // r9
  ULONG_PTR v137; // rdx
  _DWORD *v138; // r9
  _DWORD *v139; // r9
  struct _DMA_ADAPTER *v140; // rcx
  _DWORD *v141; // r9
  ULONG_PTR v142; // rcx
  _DWORD *v143; // r9
  PADAPTER_OBJECT v144; // rbx
  ULONG_PTR v145; // rcx
  int v146; // ecx
  void *v147; // rcx
  __int64 v148; // r8
  int v149; // ecx
  unsigned __int64 v150; // rax
  __int64 v151; // r10
  unsigned int v152; // ecx
  PACCESS_STATE v153; // rcx
  __int64 v154; // rbx
  __int64 v155; // rdx
  PDEVICE_OBJECT RelatedDeviceObject; // r14
  ULONG_PTR v157; // rcx
  __int64 v158; // rbx
  __int64 v159; // rax
  unsigned __int64 v160; // rax
  __int64 v161; // rcx
  NTSTATUS FileInformation; // eax
  char v163; // si
  PFAST_IO_DISPATCH FastIoDispatch; // rcx
  __int64 v165; // rdx
  __int64 (__fastcall *FastIoQueryBasicInfo)(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD); // rbx
  void *v167; // r15
  PVOID Pool; // rbx
  __int64 (__fastcall *FastIoQueryNetworkOpenInfo)(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD); // r15
  void *v170; // rbx
  NTSTATUS v171; // eax
  _DWORD *v172; // r9
  NTSTATUS AccessStatus; // [rsp+60h] [rbp-F8h] BYREF
  int v174; // [rsp+64h] [rbp-F4h]
  int v175; // [rsp+68h] [rbp-F0h]
  ACCESS_MASK GrantedAccess; // [rsp+6Ch] [rbp-ECh] BYREF
  ULONG_PTR BugCheckParameter1; // [rsp+70h] [rbp-E8h]
  PPRIVILEGE_SET Privileges; // [rsp+78h] [rbp-E0h] BYREF
  PDEVICE_OBJECT DeviceObject; // [rsp+80h] [rbp-D8h] BYREF
  __int64 v180; // [rsp+88h] [rbp-D0h]
  PADAPTER_OBJECT DmaAdapter; // [rsp+90h] [rbp-C8h] BYREF
  struct _KTHREAD *CurrentThread; // [rsp+98h] [rbp-C0h]
  char v183; // [rsp+A0h] [rbp-B8h]
  ULONG ReturnedLength; // [rsp+A4h] [rbp-B4h] BYREF
  PVOID v185; // [rsp+A8h] [rbp-B0h] BYREF
  PVOID P; // [rsp+B0h] [rbp-A8h]
  int v187; // [rsp+B8h] [rbp-A0h]
  struct _ECP_LIST *v188; // [rsp+C0h] [rbp-98h] BYREF
  ULONG_PTR BugCheckParameter4[2]; // [rsp+C8h] [rbp-90h] BYREF
  _DWORD *v190; // [rsp+D8h] [rbp-80h] BYREF
  _BYTE *v191; // [rsp+E0h] [rbp-78h]
  UNICODE_STRING ObjectTypeName; // [rsp+E8h] [rbp-70h] BYREF
  struct _ECP_LIST *ExtraCreateParameter; // [rsp+F8h] [rbp-60h] BYREF
  __int128 v194; // [rsp+100h] [rbp-58h] BYREF
  __int64 v195; // [rsp+110h] [rbp-48h]
  void *v196; // [rsp+118h] [rbp-40h]
  __int64 retaddr; // [rsp+158h] [rbp+0h]
  __int64 (__fastcall *v199)(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD); // [rsp+168h] [rbp+10h] BYREF
  PACCESS_STATE AccessState; // [rsp+170h] [rbp+18h]
  char v201; // [rsp+178h] [rbp+20h]

  v201 = a4;
  AccessState = a3;
  v12 = a3;
  v13 = (unsigned int *)BugCheckParameter2;
  v14 = a8;
  GrantedAccess = 0;
  AccessStatus = 0;
  *(_OWORD *)BugCheckParameter4 = 0LL;
  v194 = 0LL;
  v195 = 0LL;
  v187 = 0;
  LOBYTE(v175) = 0;
  ReturnedLength = 0;
  ObjectTypeName = 0LL;
  Privileges = 0LL;
  P = 0LL;
  v188 = 0LL;
  v185 = 0LL;
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
    v16 = 2684354563LL;
    v17 = 0x1080020084LL;
    if ( *(_WORD *)v14 != 8 || *(_WORD *)(v14 + 2) != 224 )
      return -1073741788;
    v18 = (ULONG_PTR)v13;
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
      v19 = v13[18];
      if ( *(_QWORD *)(v14 + 24) == 2684354563LL )
      {
        if ( (unsigned int)v19 > 0x24 || !_bittest64(&v17, v19) )
          goto LABEL_10;
      }
      else
      {
        v21 = (unsigned int)v19 <= 0x24 && _bittest64(&v17, v19);
        v22 = (unsigned int)v19 <= 0x36 && _bittest64(&v15, v19);
        if ( !v21 && !v22 )
        {
LABEL_10:
          *(_DWORD *)(v14 + 16) = -1073741192;
          return -1073741192;
        }
        result = IopSymlinkEnforceEnabledTypes(*(_BYTE *)(v14 + 152) & 8, v21, *(struct _ECP_LIST **)(v14 + 168));
        AccessStatus = result;
        if ( result < 0 )
          goto LABEL_431;
      }
    }
    v23 = *(_QWORD *)(v14 + 40);
    if ( v23 )
    {
      v18 = *(_QWORD *)(v23 + 8);
      BugCheckParameter1 = v18;
    }
    if ( *(_DWORD *)(v18 + 72) == 7 )
    {
      v24 = v18;
      v25 = v18;
      do
      {
        if ( *(_QWORD *)(v24 + 56) )
          break;
        v24 = *(_QWORD *)(v24 + 24);
        v25 = v24;
      }
      while ( v24 );
      if ( v25 && v25 != v18 )
      {
        *(_DWORD *)(v14 + 152) |= 2u;
        v18 = v25;
        BugCheckParameter1 = v25;
      }
    }
    result = IopCheckDeviceAndDriver(v14, v18, v16, (_DWORD *)v15);
    AccessStatus = result;
    if ( result < 0 )
      goto LABEL_431;
    if ( (*(_DWORD *)(*(_QWORD *)(v18 + 312) + 32LL) & 0x400) != 0 && !*(_QWORD *)(v14 + 40) )
    {
      CurrentServerSilo = PsGetCurrentServerSilo(v27, v26);
      ServerSiloServiceSessionId = PsGetServerSiloServiceSessionId(CurrentServerSilo);
      if ( ServerSiloServiceSessionId != (unsigned int)PsGetCurrentProcessSessionId()
        || IopSessionZeroAccessCheckEnabled && (*(_DWORD *)(v14 + 64) & 0x40000) == 0 )
      {
        DevicePDO = (struct _DMA_ADAPTER *)IopGetDevicePDO(v18);
        v31 = DevicePDO;
        if ( DevicePDO )
        {
          if ( !IopCheckSessionDeviceAccess((__int64)DevicePDO) )
          {
            HalPutDmaAdapter(v31);
            IopDecrementDeviceObjectRef(v18, 0, 0LL, v138);
            *(_DWORD *)(v14 + 16) = -1073741790;
            return -1073741790;
          }
          HalPutDmaAdapter(v31);
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
    v34 = *(_BYTE *)(v14 + 136);
    if ( v34 && !SourceString->Length || (v12->Flags & 0x100) != 0 )
      RemainingDesiredAccess |= v12->PreviouslyGrantedAccess;
    v35 = *(_QWORD *)(v14 + 40);
    LOBYTE(v36) = v175;
    if ( v35 && (*(_DWORD *)(v35 + 80) & 0x400000) != 0 )
    {
      v36 = (unsigned __int8)v175;
      if ( !SourceString->Length )
        v36 = 1;
      v175 = v36;
    }
    v37 = v201;
    if ( (v201 || (*(_DWORD *)(v14 + 84) & 1) != 0) && (!v35 || (_BYTE)v36) && !v34 )
    {
      v38 = v11 & 0xDF;
      if ( SourceString->Length )
      {
        p_SubjectSecurityContext = &v12->SubjectSecurityContext;
        if ( IopDoFullTraverseCheck(v18, v201, &v12->SubjectSecurityContext) )
        {
          v50 = AbsoluteObjectName;
          LOBYTE(v11) = (v38 ^ IopCreateSecurityCheck(
                                 v18,
                                 0LL,
                                 v12,
                                 RemainingDesiredAccess | 0x20,
                                 1,
                                 Privileges,
                                 &GrantedAccess,
                                 AbsoluteObjectName,
                                 &ObjectTypeName,
                                 (__int64)CurrentThread,
                                 0)) & 1 ^ v38;
        }
        else
        {
          if ( (v12->Flags & 1) != 0 )
          {
            LOBYTE(v11) = v38 | 1;
          }
          else
          {
            v52 = CurrentThread;
            KeEnterCriticalRegionThread((__int64)CurrentThread);
            ExAcquireResourceSharedLite(&IopSecurityResource, 1u);
            LOBYTE(v11) = (v38 ^ SeFastTraverseCheck(*(_QWORD *)(v18 + 272), (__int64)v12, 32)) & 1 ^ v38;
            if ( (v11 & 1) == 0 )
            {
              Privileges = 0LL;
              SeLockSubjectContext(p_SubjectSecurityContext);
              LOBYTE(v11) = ((v11 | 0x20) ^ SeAccessCheck(
                                              *(PSECURITY_DESCRIPTOR *)(v18 + 272),
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
            KeLeaveCriticalRegionThread((__int64)v52);
          }
          v50 = AbsoluteObjectName;
        }
      }
      else
      {
        v44 = 0;
        if ( (*(_DWORD *)(v18 + 52) & 0x40001) != 0 && (RemainingDesiredAccess & 0xFFEDFF7F) != 0 )
        {
          ActiveConsoleId = RtlGetActiveConsoleId();
          if ( ActiveConsoleId != (unsigned int)PsGetCurrentProcessSessionId() )
          {
            v42 = PsGetCurrentServerSilo(v41, v40);
            v43 = PsGetServerSiloServiceSessionId(v42);
            if ( v43 != (unsigned int)PsGetCurrentProcessSessionId() && !IopAllowRemoteDASD() )
              v44 = 1;
          }
        }
        Privileges = 0LL;
        KeEnterCriticalRegionThread((__int64)CurrentThread);
        ExAcquireResourceSharedLite(&IopSecurityResource, 1u);
        p_SubjectSecurityContext = &AccessState->SubjectSecurityContext;
        SeLockSubjectContext(&AccessState->SubjectSecurityContext);
        v46 = v38 | 0x20;
        if ( !v44 )
          goto LABEL_68;
        ClientToken = p_SubjectSecurityContext->ClientToken;
        if ( !p_SubjectSecurityContext->ClientToken )
          ClientToken = AccessState->SubjectSecurityContext.PrimaryToken;
        if ( SeTokenIsAdmin(ClientToken) )
        {
LABEL_68:
          LOBYTE(v11) = (v46 ^ SeAccessCheck(
                                 *(PSECURITY_DESCRIPTOR *)(v18 + 272),
                                 p_SubjectSecurityContext,
                                 (v46 & 0x20) != 0,
                                 RemainingDesiredAccess,
                                 0,
                                 &Privileges,
                                 (PGENERIC_MAPPING)((char *)IoFileObjectType + 76),
                                 1,
                                 &GrantedAccess,
                                 &AccessStatus)) & 1 ^ v46;
          v48 = AccessState;
          if ( Privileges )
          {
            SeAppendPrivileges(AccessState, Privileges);
            CmSiFreeMemory(Privileges);
          }
          if ( (v11 & 1) != 0 )
          {
            v49 = GrantedAccess;
            v48->PreviouslyGrantedAccess |= GrantedAccess;
            *p_RemainingDesiredAccess &= ~(v49 | 0x2000000);
            *(_BYTE *)(v14 + 136) = 1;
          }
        }
        else
        {
          LOBYTE(v11) = v46 & 0xFE;
          AccessStatus = -1073741790;
        }
        v50 = AbsoluteObjectName;
        SeOpenObjectAuditAlarm(
          &ObjectTypeName,
          (PVOID)v18,
          AbsoluteObjectName,
          *(PSECURITY_DESCRIPTOR *)(v18 + 272),
          AccessState,
          0,
          v11 & 1,
          1,
          &AccessState->GenerateOnClose);
        ExReleaseResourceLite(&IopSecurityResource);
        KeLeaveCriticalRegionThread((__int64)CurrentThread);
      }
      if ( (v11 & 0x20) != 0 )
        SeUnlockSubjectContext(p_SubjectSecurityContext);
      if ( (v11 & 1) == 0 )
        goto LABEL_317;
      v37 = v201;
    }
    else
    {
      v50 = AbsoluteObjectName;
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
    v174 = v11;
    v57 = 0LL;
    v180 = 0LL;
    if ( !v56 || (*(_DWORD *)(v56 + 80) & 0x800) != 0 )
    {
      AttachedDevice = (PDEVICE_OBJECT)v18;
      DeviceObject = (PDEVICE_OBJECT)v18;
      v59 = v174;
      if ( *(_QWORD *)(v18 + 56) && (v174 & 8) == 0 )
      {
        if ( (*(_DWORD *)(v18 + 52) & 0x100) != 0
          && (*(_DWORD *)(*(_QWORD *)(v18 + 312) + 32LL) & 0x800) == 0
          && (v37 || (*(_DWORD *)(v14 + 84) & 1) != 0)
          && (v56 || Length)
          && !(_BYTE)v175 )
        {
          Privileges = 0LL;
          if ( !IopCreateSecurityCheck(
                  v18,
                  (void *)v18,
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
        v60 = IopCheckVpbMounted(v14, v18, (__int64)SourceString, &AccessStatus);
        v57 = v60;
        v180 = v60;
        if ( !v60 )
          return AccessStatus;
        AttachedDevice = *(PDEVICE_OBJECT *)(v60 + 8);
        DeviceObject = AttachedDevice;
      }
      if ( (*(_DWORD *)(v14 + 152) & 1) != 0 )
      {
        LOBYTE(v59) = v59 | 2;
        v174 = v59;
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
        v180 = v57;
        if ( (*(_DWORD *)(v18 + 52) & 0x100) != 0
          && (*(_DWORD *)(*(_QWORD *)(v18 + 312) + 32LL) & 0x800) == 0
          && (v37 || (*(_DWORD *)(v14 + 84) & 1) != 0)
          && !(_BYTE)v175 )
        {
          Privileges = 0LL;
          if ( !IopCreateSecurityCheck(
                  v18,
                  (void *)v18,
                  AccessState,
                  RemainingDesiredAccess,
                  *(_DWORD *)(v14 + 88),
                  0LL,
                  &GrantedAccess,
                  v50,
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
        v59 = v174;
        LOBYTE(v59) = v174 | 2;
        v174 = v59;
      }
      else
      {
        LOBYTE(v59) = v174;
      }
    }
    v61 = *(_DWORD *)(v18 + 52);
    if ( (v61 & 0x40001) != 0
      && (*(_DWORD *)(v18 + 48) & 0x600100) == 0
      && (v61 & 0x100) == 0
      && IopIsSecurityContextAppContainer(&AccessState->SubjectSecurityContext) )
    {
      if ( !v57 )
        goto LABEL_317;
      if ( (*(_DWORD *)(*(_QWORD *)(v57 + 8) + 48LL) & 0x20000) == 0 )
      {
        IopDereferenceVpbAndFree(v57);
LABEL_317:
        IopDecrementDeviceObjectRef(v18, 0, 0LL, v51);
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
        IopDecrementDeviceObjectRef(v18, 0, 0LL, v64);
        return AccessStatus;
      }
      AttachedDevice = DeviceObject;
    }
    else
    {
      v63 = SourceString;
    }
    v65 = *(_DWORD *)(v14 + 152);
    if ( (v65 & 0x10) != 0 )
      *(_DWORD *)(v14 + 152) = v65 & 0xFFFFFFEF;
    if ( ((AttachedDevice->Characteristics & 0x100) != 0
       || IopRequireDeviceAccessCheck && (*(_DWORD *)(v18 + 52) & 0x100000) != 0)
      && (v201 || (*(_DWORD *)(v14 + 84) & 1) != 0)
      && (*(_QWORD *)(v14 + 40) || v63->Length) )
    {
      v66 = AccessState;
      if ( !(_BYTE)v175 )
      {
        Privileges = 0LL;
        if ( !IopCreateSecurityCheck(
                v18,
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
          IopDecrementDeviceObjectRef(v18, 0, 0LL, v67);
          if ( v57 )
            IopDereferenceVpbAndFree(v57);
          return -1073741790;
        }
      }
    }
    else
    {
      v66 = AccessState;
    }
    Irp = IopAllocateIrpExReturn((__int64)AttachedDevice, (unsigned __int8)AttachedDevice->StackSize, 0LL, retaddr);
    v70 = Irp;
    if ( !Irp )
    {
      IopDecrementDeviceObjectRef(BugCheckParameter1, 0, 0LL, v69);
      if ( v57 )
        IopDereferenceVpbAndFree(v57);
      return -1073741670;
    }
    *(_QWORD *)(Irp + 152) = CurrentThread;
    v71 = v201;
    *(_BYTE *)(Irp + 64) = v201;
    *(_DWORD *)(Irp + 16) = 2180;
    *(_QWORD *)&v194 = a9;
    *((_QWORD *)&v194 + 1) = v66;
    LODWORD(v195) = RemainingDesiredAccess;
    HIDWORD(v195) = *(_DWORD *)(v14 + 64);
    v72 = *(_QWORD *)(Irp + 184) - 72LL;
    v191 = (_BYTE *)v72;
    *(_BYTE *)(v72 + 3) = 0;
    v73 = *(_DWORD *)(v14 + 120);
    v74 = a5;
    if ( v73 )
    {
      if ( v73 == 1 )
        *(_BYTE *)v72 = 1;
      else
        *(_BYTE *)v72 = 19;
      *(_QWORD *)(v72 + 32) = *(_QWORD *)(v14 + 128);
    }
    else
    {
      *(_BYTE *)v72 = 0;
      *(_DWORD *)(v72 + 32) = *(_DWORD *)(v14 + 80);
      v75 = *(_BYTE *)(v14 + 84);
      *(_BYTE *)(v72 + 2) = v75;
      if ( (v74 & 0x40) == 0 )
        *(_BYTE *)(v72 + 2) = v75 | 0x80;
    }
    *(_QWORD *)(v70 + 88) = *(_QWORD *)(v14 + 56);
    *(_QWORD *)(v70 + 24) = *(_QWORD *)(v14 + 72);
    *(_DWORD *)(v72 + 16) = (*(_DWORD *)(v14 + 88) << 24) | *(_DWORD *)(v14 + 64) & 0xFFFFFF;
    *(_WORD *)(v72 + 24) = *(_WORD *)(v14 + 68);
    *(_WORD *)(v72 + 26) = *(_WORD *)(v14 + 70);
    *(_QWORD *)(v72 + 8) = &v194;
    *(_QWORD *)(v70 + 112) = *(_QWORD *)(v14 + 168);
    *(_QWORD *)(v70 + 72) = BugCheckParameter4;
    *(_QWORD *)(v70 + 8) = 0LL;
    *(_BYTE *)(v70 + 65) = 0;
    *(_BYTE *)(v70 + 68) = 0;
    *(_QWORD *)(v70 + 80) = 0LL;
    *(_QWORD *)(v70 + 104) = 0LL;
    *(_QWORD *)(v70 + 160) = 0LL;
    if ( !*(_BYTE *)(v14 + 137) )
    {
      v76 = BugCheckParameter1;
      AccessStatus = IopAllocRealFileObject(
                       (unsigned int)&DmaAdapter,
                       (_DWORD)AttachedDevice,
                       BugCheckParameter1,
                       v74,
                       v71,
                       v14,
                       a10,
                       0,
                       RemainingDesiredAccess);
      if ( AccessStatus < 0 )
      {
        IoFreeIrp((PIRP)v70);
        IopDecrementDeviceObjectRef(v76, 0, 0LL, v139);
        if ( v57 )
          IopDereferenceVpbAndFree(v57);
        v140 = DmaAdapter;
        if ( DmaAdapter )
        {
          DmaAdapter->DmaOperations = 0LL;
          HalPutDmaAdapter(v140);
          result = AccessStatus;
          *(_DWORD *)(v14 + 16) = AccessStatus;
          return result;
        }
        goto LABEL_430;
      }
      v77 = DmaAdapter;
      goto LABEL_186;
    }
    v78 = *(struct _DMA_ADAPTER **)(v14 + 144);
    memset(v78, 0, 0x110uLL);
    v77 = v78 + 3;
    DmaAdapter = v78 + 3;
    LOBYTE(v78[1].DmaOperations) = ObHeaderCookie ^ *((_BYTE *)IoFileObjectType + 40) ^ BYTE1(v78);
    *(_QWORD *)&v78->Version = 1LL;
    if ( (a5 & 0x40) == 0 )
      *(_DWORD *)&v78[8].Version |= 0x20000u;
    *(_DWORD *)&v77->Version = 14155781;
    *(_QWORD *)&v78[7].Version = *(_QWORD *)(v14 + 40);
    v79 = BugCheckParameter1;
    v77->DmaOperations = (_DMA_OPERATIONS *)BugCheckParameter1;
    if ( (*(_DWORD *)(v14 + 152) & 0x20) != 0 )
    {
      if ( v201 )
      {
        if ( (AttachedDevice->Flags & 0x40000) != 0
          || (DeviceType = AttachedDevice->DeviceType, (unsigned int)DeviceType <= 0x35)
          && (v81 = 0x20000100100108LL, _bittest64(&v81, DeviceType)) )
        {
          AccessStatus = IopRetrieveTransactionParameters(AttachedDevice, v14, RemainingDesiredAccess, v77);
          if ( AccessStatus < 0 )
            break;
        }
      }
    }
    if ( !PsIsHostSilo(*(_QWORD *)(a10 + 8))
      || (v82 = *(_QWORD *)&v77[4].Version) != 0 && (v83 = IoGetSilo(v82), !PsIsHostSilo(v83)) )
    {
      v190 = 0LL;
      if ( *(_QWORD *)&v77[4].Version && PsIsServerSilo(*(_QWORD *)(a10 + 8)) )
        Silo = (_DWORD *)IoGetSilo(v84);
      else
        Silo = *(_DWORD **)(a10 + 8);
      if ( !PsIsHostSilo((__int64)Silo) )
      {
        AccessStatus = PsAcquireSiloHardReference(Silo);
        if ( AccessStatus < 0 )
          goto LABEL_329;
        SetSpecificExtension = IopGetSetSpecificExtension((__int64)v77, 7u, 0x10u, 1, &v190, 0LL);
        AccessStatus = SetSpecificExtension;
        if ( SetSpecificExtension < 0 )
        {
          PsReleaseSiloHardReference(Silo);
          SetSpecificExtension = AccessStatus;
        }
        v87 = v190;
        if ( SetSpecificExtension < 0 )
        {
LABEL_329:
          IoFreeIrp((PIRP)v70);
          v142 = BugCheckParameter1;
          goto LABEL_327;
        }
        *v190 = 16;
        *((_QWORD *)v87 + 1) = Silo;
        v87[1] |= 1u;
        ObfReferenceObjectWithTag(Silo, 0x70536F49u);
      }
      v72 = (__int64)v191;
LABEL_186:
      v79 = BugCheckParameter1;
    }
    if ( (v174 & 8) != 0 )
      *(_DWORD *)&v77[5].Version |= 0x800u;
    v88 = *(_QWORD *)(v14 + 216);
    if ( (v88 & 1) != 0 )
    {
      v89 = 32;
LABEL_193:
      IopSetFileObjectExtensionFlag((__int64)v77, v89, 1);
      goto LABEL_194;
    }
    if ( (v88 & 2) != 0 )
    {
      v89 = 64;
      goto LABEL_193;
    }
LABEL_194:
    *(_QWORD *)(v70 + 192) = v77;
    *(_QWORD *)(v72 + 48) = v77;
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
      WORD1(v77[5].DmaOperations) = v90;
      PoolWithTag = ExAllocatePoolWithTag(PagedPool, v90, 0x6D4E6F49u);
      *(_QWORD *)&v77[6].Version = PoolWithTag;
      if ( !PoolWithTag )
      {
        IoFreeIrp((PIRP)v70);
        IopDecrementDeviceObjectRef(v79, 0, 0LL, v143);
        if ( v180 )
          IopDereferenceVpbAndFree(v180);
        v77->DmaOperations = 0LL;
        if ( !*(_BYTE *)(v14 + 137) )
        {
          HalPutDmaAdapter(v77);
          return -1073741670;
        }
        return -1073741670;
      }
    }
    RtlCopyUnicodeString((PUNICODE_STRING)&v77[5].DmaOperations, SourceString);
    if ( *(_BYTE *)(v14 + 137) )
    {
      LOBYTE(v199) = 0;
      AccessStatus = IopQueryInformation(v14, AttachedDevice, v70, v72, &v199);
      if ( AccessStatus < 0 || (_BYTE)v199 )
      {
        v146 = *(_DWORD *)(v70 + 48);
        *(_DWORD *)(v14 + 16) = v146;
        *(_QWORD *)(v14 + 24) = *(_QWORD *)(v70 + 56);
        if ( v146 == 260 )
        {
          v147 = *(void **)(v70 + 160);
          if ( v147 )
          {
            ExFreePoolWithTag(v147, 0);
            *(_QWORD *)(v70 + 160) = 0LL;
            *(_QWORD *)(v14 + 40) = 0LL;
          }
        }
        if ( LOWORD(v77[5].DmaOperations) )
          ExFreePoolWithTag(*(PVOID *)&v77[6].Version, 0);
        if ( *(_QWORD *)&v77[13].Version )
          IopDeleteFileObjectExtension((__int64)v77);
        v145 = BugCheckParameter1;
        goto LABEL_352;
      }
      if ( !RtlEqualUnicodeString((PCUNICODE_STRING)&v77[5].DmaOperations, SourceString, 0) )
      {
        v93 = *(void **)&v77[6].Version;
        if ( v93 )
        {
          ExFreePoolWithTag(v93, 0);
          RtlInitUnicodeString((PUNICODE_STRING)&v77[5].DmaOperations, 0LL);
        }
        v94 = SourceString->Length;
        if ( SourceString->Length )
        {
          if ( v94 >= 0x38u )
          {
            if ( v94 >= 0x78u )
            {
              if ( v94 < 0xF8u )
                v94 = 248;
            }
            else
            {
              v94 = 120;
            }
          }
          else
          {
            v94 = 56;
          }
          WORD1(v77[5].DmaOperations) = v94;
          v95 = ExAllocatePoolWithTag(PagedPool, v94, 0x6D4E6F49u);
          *(_QWORD *)&v77[6].Version = v95;
          if ( !v95 )
          {
            if ( *(_QWORD *)&v77[13].Version )
              IopDeleteFileObjectExtension((__int64)v77);
            IopDecrementDeviceObjectRef(BugCheckParameter1, 0, 0LL, v96);
            if ( v180 )
              IopDereferenceVpbAndFree(v180);
            IoFreeIrp((PIRP)v70);
            return -1073741670;
          }
          RtlCopyUnicodeString((PUNICODE_STRING)&v77[5].DmaOperations, SourceString);
        }
      }
      v97 = BugCheckParameter1;
      AccessStatus = IopAllocRealFileObject(
                       (unsigned int)&DmaAdapter,
                       (_DWORD)AttachedDevice,
                       BugCheckParameter1,
                       a5,
                       v201,
                       v14,
                       a10,
                       1,
                       RemainingDesiredAccess);
      if ( AccessStatus < 0 )
      {
        v144 = DmaAdapter;
        if ( LOWORD(DmaAdapter[5].DmaOperations) )
          ExFreePoolWithTag(*(PVOID *)&DmaAdapter[6].Version, 0);
        if ( *(_QWORD *)&v144[13].Version )
          IopDeleteFileObjectExtension((__int64)v144);
        v145 = v97;
LABEL_352:
        IopDecrementDeviceObjectRef(v145, 0, 0LL, v92);
        if ( v180 )
          IopDereferenceVpbAndFree(v180);
        IoFreeIrp((PIRP)v70);
        return AccessStatus;
      }
      v77 = DmaAdapter;
      *(_QWORD *)(v72 + 48) = DmaAdapter;
      *(_QWORD *)(v70 + 192) = v77;
    }
    if ( !*(_DWORD *)(v14 + 120) )
    {
      ExtraCreateParameter = 0LL;
      AccessStatus = IoGetIrpExtraCreateParameter((PIRP)v70, &ExtraCreateParameter);
      if ( ExtraCreateParameter )
      {
        if ( IopSymlinkGetECP(ExtraCreateParameter, &v185) != -1073741275 )
        {
          MostRecentlyUsedName = IopSymlinkGetMostRecentlyUsedName((__int64)v185);
          if ( !*(_WORD *)(MostRecentlyUsedName + 4) )
          {
            updated = IopSymlinkUpdateECP(
                        (PIRP)v70,
                        (UNICODE_STRING *)MostRecentlyUsedName,
                        *(_WORD *)MostRecentlyUsedName,
                        AbsoluteObjectName,
                        AbsoluteObjectName->Length - SourceString->Length,
                        *(_WORD *)(MostRecentlyUsedName + 2));
            AccessStatus = updated;
            if ( updated < 0 )
            {
              *(_DWORD *)(v70 + 48) = updated;
              *(_QWORD *)(v70 + 56) = 0LL;
              LOBYTE(v174) = v174 & 0xFB;
            }
          }
        }
      }
    }
    p_DmaOperations = (struct _KSEMAPHORE *)&v77[9].DmaOperations;
    KeInitializeEvent((PRKEVENT)&v77[9].DmaOperations, NotificationEvent, 0);
    *(_QWORD *)(v14 + 8) = v77;
    v101 = v174;
    if ( (v174 & 4) != 0 )
    {
      IopQueueThreadIrp(v70);
      v102 = IoCallDriverWithTracing(AttachedDevice, v70);
      AccessStatus = v102;
      v101 = v174;
    }
    else
    {
      v102 = AccessStatus;
    }
    if ( v102 == 259 )
    {
      v103 = v101 | 0x80;
      v104 = v101 & 0x7F;
      if ( (KeGetCurrentThread()->MiscFlags & 0x400) == 0 )
        v104 = v103;
      v174 = v104;
      v105 = (unsigned __int8)v104 >> 7;
      AccessStatus = KeWaitForSingleObject(p_DmaOperations, Executive, 0, (unsigned __int8)v104 >> 7, 0LL);
      if ( AccessStatus == 257 )
      {
        while ( 1 )
        {
          CurrentIrql = KeGetCurrentIrql();
          __writecr8(1uLL);
          if ( PsIsThreadTerminating(KeGetCurrentThread())
            || !KeReadStateSemaphore(p_DmaOperations) && *(_BYTE *)(v70 + 68) )
          {
            break;
          }
          if ( KiIrqlFlags )
          {
            if ( (KiIrqlFlags & 1) != 0 )
            {
              v107 = KeGetCurrentIrql();
              if ( v107 <= 0xFu && CurrentIrql <= 0xFu && v107 >= 2u )
              {
                CurrentPrcb = KeGetCurrentPrcb();
                SchedulerAssist = CurrentPrcb->SchedulerAssist;
                v110 = ~(unsigned __int16)(-1LL << (CurrentIrql + 1));
                v111 = (v110 & SchedulerAssist[5]) == 0;
                SchedulerAssist[5] &= v110;
                if ( v111 )
                  KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
              }
            }
          }
          __writecr8(CurrentIrql);
          AccessStatus = KeWaitForSingleObject(p_DmaOperations, Executive, 0, v105, 0LL);
          if ( AccessStatus != 257 )
            goto LABEL_252;
        }
        if ( KiIrqlFlags )
        {
          if ( (KiIrqlFlags & 1) != 0 )
          {
            v112 = KeGetCurrentIrql();
            if ( v112 <= 0xFu && CurrentIrql <= 0xFu && v112 >= 2u )
            {
              v113 = KeGetCurrentPrcb();
              v114 = v113->SchedulerAssist;
              v115 = ~(unsigned __int16)(-1LL << (CurrentIrql + 1));
              v111 = (v115 & v114[5]) == 0;
              v114[5] &= v115;
              if ( v111 )
                KiRemoveSystemWorkPriorityKick((__int64)v113);
            }
          }
        }
        __writecr8(CurrentIrql);
        IopCancelAlertedRequest(p_DmaOperations, (PIRP)v70);
      }
LABEL_252:
      AccessStatus = BugCheckParameter4[0];
      v77 = DmaAdapter;
    }
    AccessStatus = IoGetIrpExtraCreateParameter((PIRP)v70, &v188);
    v116 = *(_DWORD *)(v14 + 84) & 8;
    v117 = v116 != 0;
    v118 = v188;
    if ( *(_DWORD *)(v70 + 48) == 260 )
    {
      P = *(PVOID *)(v70 + 160);
      if ( !v188 || IopSymlinkGetECP(v188, &v185) == -1073741275 )
      {
        AccessStatus = IopSymlinkCreateECP(
                         (PIRP)v70,
                         (__int64)v77,
                         &AbsoluteObjectName->Length,
                         AbsoluteObjectName->Length - SourceString->Length,
                         &v185);
        if ( AccessStatus >= 0 )
        {
          if ( !v118 )
          {
            AccessStatus = IoGetIrpExtraCreateParameter((PIRP)v70, &v188);
            v118 = v188;
          }
        }
        else
        {
          *(_QWORD *)(v70 + 56) = 0LL;
          *(_DWORD *)(v70 + 48) = AccessStatus;
        }
      }
      if ( *(_DWORD *)(v70 + 48) == 260 )
      {
        v119 = P;
        if ( v116 && v118 )
          v117 = IopCheckAndUpdateStopOnSymlinkEcp(v118, *(unsigned int *)(v70 + 56), P);
        IopSymlinkProcessReparse(v70, (__int64)v77, (__int64)v119, v117);
        v120 = *(_QWORD *)(v70 + 56) - 2684354563LL;
        if ( v120 <= 0x16 )
        {
          v121 = 4194817LL;
          if ( _bittest64(&v121, v120) )
          {
            if ( *(int *)(v70 + 48) < 0 )
              goto LABEL_280;
            v122 = *((unsigned __int16 *)v119 + 3);
            v123 = 0;
            if ( !(_WORD)v122 )
              v123 = 16;
            v124 = v174;
            LOBYTE(v124) = v123 | v174 & 0xEF;
            v174 = v124;
            if ( (v124 & 0x10) == 0 && *(wchar_t *)((char *)SourceString->Buffer + SourceString->Length - v122) != 58 )
              goto LABEL_280;
            v125 = *(_DWORD *)(v14 + 64);
            if ( (v125 & 0x41) != 0 || *v191 )
              goto LABEL_280;
            if ( *v119 == -1610612733 )
              goto LABEL_278;
            if ( *v119 != -1610612724 )
              goto LABEL_280;
            if ( (int)v119[4] < 0 )
            {
LABEL_278:
              v126 = v125 | 1;
LABEL_279:
              *(_DWORD *)(v14 + 64) = v126;
            }
            else if ( (v119[4] & 0x40000000) != 0 )
            {
              v126 = v125 | 0x40;
              goto LABEL_279;
            }
LABEL_280:
            if ( !v117 )
            {
              ExFreePoolWithTag(v119, 0);
              P = 0LL;
            }
          }
        }
      }
    }
    if ( *(_DWORD *)(v70 + 48) || *(_DWORD *)(v14 + 120) )
    {
      v127 = DeviceObject;
    }
    else
    {
      AccessStatus = IopSymlinkPropagateToExtensionIfNeeded(v77, v118, AbsoluteObjectName);
      v127 = DeviceObject;
      if ( AccessStatus < 0 )
      {
        IoCancelFileOpen(DeviceObject, (PFILE_OBJECT)v77);
        *(_QWORD *)(v70 + 56) = 0LL;
        *(_DWORD *)(v70 + 48) = AccessStatus;
      }
    }
    if ( v118 )
      *(_QWORD *)(v14 + 168) = v118;
    *(_OWORD *)BugCheckParameter4 = *(_OWORD *)(v70 + 48);
    AccessStatus = _mm_cvtsi128_si32(*(__m128i *)BugCheckParameter4);
    HIDWORD(v77[9].DmaOperations) = 1;
    v11 = v174;
    if ( (v174 & 4) != 0 )
    {
      *(_QWORD *)(v70 + 152) = CurrentThread;
      IopDequeueIrpFromThread((_QWORD *)v70);
    }
    if ( (*(_BYTE *)(v70 + 16) & 0x30) == 0x30 )
      ExFreePoolWithTag(*(PVOID *)(v70 + 24), 0);
    IoFreeIrp((PIRP)v70);
    v128 = BugCheckParameter4[1];
    *(_QWORD *)(v14 + 24) = BugCheckParameter4[1];
    if ( AccessStatus < 0 )
    {
      if ( (*(_DWORD *)&v77[5].Version & 0x200000) != 0 )
      {
        HalPutDmaAdapter(v77);
        *(_QWORD *)(v14 + 8) = 0LL;
        result = AccessStatus;
        *(_DWORD *)(v14 + 16) = AccessStatus;
        return result;
      }
      if ( LOWORD(v77[5].DmaOperations) )
      {
        ExFreePoolWithTag(*(PVOID *)&v77[6].Version, 0);
        LOWORD(v77[5].DmaOperations) = 0;
      }
      v77->DmaOperations = 0LL;
      HalPutDmaAdapter(v77);
      IopDecrementDeviceObjectRef(BugCheckParameter1, 0, 0LL, v172);
      if ( v180 )
        IopDereferenceVpbAndFree(v180);
      *(_QWORD *)(v14 + 8) = 0LL;
      goto LABEL_430;
    }
    if ( AccessStatus != 260 )
    {
      RelatedDeviceObject = IoGetRelatedDeviceObject((PFILE_OBJECT)v77);
      if ( v127 != RelatedDeviceObject )
      {
        v157 = *(_QWORD *)&v77[1].Version;
        v158 = v180;
        if ( v157 != v180 )
        {
          if ( v157 )
            IopIncrementVpbRefCount(v157, 1);
          if ( v158 )
            IopDereferenceVpbAndFree(v158);
        }
      }
      if ( (v174 & 0x40) == 0 )
      {
        *a11 = v77;
        *(_DWORD *)(v14 + 32) = -1096154543;
        ObfReferenceObject(v77);
        v159 = *(_QWORD *)&v77[4].Version;
        if ( (!v159 || (*(_DWORD *)(v159 + 80) & 0x400000) != 0) && !LOWORD(v77[5].DmaOperations) )
        {
          v160 = RelatedDeviceObject->DeviceType;
          if ( (unsigned int)v160 <= 0x20 )
          {
            v161 = 0x100000308LL;
            if ( _bittest64(&v161, v160) )
              *(_DWORD *)&v77[5].Version |= 0x400000u;
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
                              (PFILE_OBJECT)v77,
                              *(FILE_INFORMATION_CLASS *)(v14 + 200),
                              *(_DWORD *)(v14 + 204),
                              *(PVOID *)(v14 + 112),
                              (PULONG)(v14 + 204));
          goto LABEL_421;
        }
        v163 = 0;
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
                v170 = (MmVerifierData & 0x10) != 0 ? (void *)VfFastIoSnapState() : 0LL;
                LOBYTE(v155) = 1;
                v163 = FastIoQueryNetworkOpenInfo(
                         v77,
                         v155,
                         *(_QWORD *)(v14 + 104),
                         BugCheckParameter4,
                         RelatedDeviceObject);
                if ( v170 )
                  VfFastIoCheckState(v170);
              }
            }
          }
          if ( !v163 )
          {
            v171 = IoQueryFileInformation(
                     (PFILE_OBJECT)v77,
                     FileNetworkOpenInformation,
                     0x38u,
                     *(PVOID *)(v14 + 104),
                     &ReturnedLength);
            AccessStatus = v171;
            if ( v171 == -1073741811 || v171 == -1073741822 )
            {
              FileInformation = IopGetNetworkOpenInformation(v77);
LABEL_421:
              AccessStatus = FileInformation;
            }
          }
        }
        else
        {
          v165 = 0LL;
          v185 = 0LL;
          if ( FastIoDispatch )
            FastIoQueryBasicInfo = (__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD))FastIoDispatch->FastIoQueryBasicInfo;
          else
            FastIoQueryBasicInfo = 0LL;
          v199 = FastIoQueryBasicInfo;
          if ( FastIoQueryBasicInfo )
          {
            v167 = (MmVerifierData & 0x10) != 0 ? (void *)VfFastIoSnapState() : 0LL;
            v196 = v167;
            LOBYTE(v165) = 1;
            v163 = FastIoQueryBasicInfo(v77, v165, *(_QWORD *)(v14 + 96), BugCheckParameter4, RelatedDeviceObject);
            v183 = v163;
            if ( v167 )
              VfFastIoCheckState(v167);
          }
          if ( v163 )
          {
            AccessStatus = BugCheckParameter4[0];
          }
          else
          {
            Pool = IopVerifierExAllocatePool(NonPagedPoolNx, 0x28uLL);
            v185 = Pool;
            if ( Pool )
            {
              AccessStatus = IoQueryFileInformation(
                               (PFILE_OBJECT)v77,
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
      IopCloseFile(0LL, (struct _FILE_OBJECT *)v77, 1LL, 1LL);
      HalPutDmaAdapter(v77);
      *(_QWORD *)(v14 + 8) = 0LL;
      result = AccessStatus;
      *(_DWORD *)(v14 + 16) = AccessStatus;
      return result;
    }
    if ( (v128 & 0xFFFFFFFFFFFFFFFDuLL) != 0
      && ((v129 = v128 - 2684354563u, v128 - 2684354563u > 0x16) || (v130 = 4194817LL, !_bittest64(&v130, v129)) || v117) )
    {
      v131 = AbsoluteObjectName;
    }
    else
    {
      v131 = AbsoluteObjectName;
      if ( AbsoluteObjectName->MaximumLength < LOWORD(v77[5].DmaOperations) )
      {
        v132 = (wchar_t *)ExAllocatePoolWithTag(PagedPool, LOWORD(v77[5].DmaOperations), 0x63466F49u);
        if ( !v132 )
        {
          *(_DWORD *)(v14 + 16) = -1073741670;
          return -1073741670;
        }
        Buffer = v131->Buffer;
        if ( Buffer )
          ExFreePoolWithTag(Buffer, 0);
        v131->Buffer = v132;
        v131->MaximumLength = (unsigned __int16)v77[5].DmaOperations;
      }
      RtlCopyUnicodeString(v131, (PCUNICODE_STRING)&v77[5].DmaOperations);
      if ( BugCheckParameter4[1] - 2684354563u <= 0x16 )
      {
        v134 = 4194817LL;
        if ( _bittest64(&v134, BugCheckParameter4[1] - 2684354563u) )
          *(_QWORD *)(v14 + 40) = 0LL;
      }
    }
    if ( LOWORD(v77[5].DmaOperations) )
    {
      ExFreePoolWithTag(*(PVOID *)&v77[6].Version, 0);
      LOWORD(v77[5].DmaOperations) = 0;
    }
    v77->DmaOperations = 0LL;
    HalPutDmaAdapter(v77);
    *(_QWORD *)(v14 + 8) = 0LL;
    v135 = BugCheckParameter1;
    IopDecrementDeviceObjectRef(BugCheckParameter1, 0, 0LL, v136);
    if ( v180 )
      IopDereferenceVpbAndFree(v180);
    v137 = BugCheckParameter4[1];
    if ( BugCheckParameter4[1] != 1 )
    {
      *(_QWORD *)(v14 + 40) = 0LL;
      v148 = 4194817LL;
      if ( v137 - 2684354563u <= 0x16 && _bittest64(&v148, v137 - 2684354563u) )
      {
        *(_DWORD *)(v14 + 152) |= 0x10u;
        v149 = *(_DWORD *)(v14 + 152);
        v150 = *(unsigned int *)(v135 + 72);
        if ( (unsigned int)v150 <= 0x24 && (v151 = 0x1080020084LL, _bittest64(&v151, v150)) )
          v152 = v149 | 8;
        else
          v152 = v149 & 0xFFFFFFF7;
        *(_DWORD *)(v14 + 152) = v152;
      }
      if ( *(_BYTE *)(v14 + 136) )
        KeBugCheckEx(0xF9u, v135, (ULONG_PTR)DeviceObject, (ULONG_PTR)v131, v137);
      if ( (*(_DWORD *)(*(_QWORD *)(v135 + 312) + 32LL) & 0x800) == 0 )
      {
        v153 = AccessState;
        *(_QWORD *)&AccessState->RemainingDesiredAccess = AccessState->OriginalDesiredAccess;
        v153->Flags &= ~0x100u;
      }
      if ( v137 - 2684354563u <= 0x16 && _bittest64(&v148, v137 - 2684354563u) && v117 )
      {
        *(_QWORD *)(v14 + 24) = P;
        *(_DWORD *)(v14 + 16) = -2147483603;
        return -2147483603;
      }
      else if ( v137 == 2684354585 || v137 == 2 )
      {
        v154 = a10;
        *(_QWORD *)(v154 + 8) = PsGetParentSilo(*(_QWORD *)(a10 + 8));
        return 872;
      }
      else
      {
        return 260;
      }
    }
    if ( (unsigned int)++v187 > 0x20 )
      return -1073741823;
    *a11 = 0LL;
    DmaAdapter = 0LL;
    v12 = AccessState;
    v13 = (unsigned int *)BugCheckParameter2;
  }
  IoFreeIrp((PIRP)v70);
  v142 = v79;
LABEL_327:
  IopDecrementDeviceObjectRef(v142, 0, 0LL, v141);
  if ( v180 )
  {
    IopDereferenceVpbAndFree(v180);
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
