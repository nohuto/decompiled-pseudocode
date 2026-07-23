/*
 * XREFs of IopParseDevice @ 0x140675FA0
 * Callers:
 *     IopParseFile @ 0x1406E6E50 (IopParseFile.c)
 * Callees:
 *     PsReleaseSiloHardReference @ 0x140200940 (PsReleaseSiloHardReference.c)
 *     PsAcquireSiloHardReference @ 0x1402009F0 (PsAcquireSiloHardReference.c)
 *     PsGetServerSiloServiceSessionId @ 0x140202160 (PsGetServerSiloServiceSessionId.c)
 *     CmSiFreeMemory @ 0x1402029C0 (CmSiFreeMemory.c)
 *     HalPutDmaAdapter @ 0x140208270 (HalPutDmaAdapter.c)
 *     ObfReferenceObject @ 0x140208380 (ObfReferenceObject.c)
 *     IopQueueThreadIrp @ 0x1402083E0 (IopQueueThreadIrp.c)
 *     ExReleaseResourceLite @ 0x140208540 (ExReleaseResourceLite.c)
 *     ExAcquireResourceSharedLite @ 0x1402090B0 (ExAcquireResourceSharedLite.c)
 *     KeLeaveCriticalRegionThread @ 0x14020B010 (KeLeaveCriticalRegionThread.c)
 *     KeWaitForSingleObject @ 0x14020B3A0 (KeWaitForSingleObject.c)
 *     IopGetSetSpecificExtension @ 0x1402289D4 (IopGetSetSpecificExtension.c)
 *     KeEnterCriticalRegionThread @ 0x14024B6A0 (KeEnterCriticalRegionThread.c)
 *     IopDeleteFileObjectExtension @ 0x140269E64 (IopDeleteFileObjectExtension.c)
 *     PsGetCurrentProcessSessionId @ 0x14026D6D0 (PsGetCurrentProcessSessionId.c)
 *     IopIncrementVpbRefCount @ 0x14026FFD4 (IopIncrementVpbRefCount.c)
 *     KeReadStateSemaphore @ 0x1402736C0 (KeReadStateSemaphore.c)
 *     IopGetDevicePDO @ 0x140277508 (IopGetDevicePDO.c)
 *     IoGetSilo @ 0x14027B350 (IoGetSilo.c)
 *     PsIsServerSilo @ 0x14027B380 (PsIsServerSilo.c)
 *     IopVerifierExAllocatePool_0 @ 0x14027C6F4 (IopVerifierExAllocatePool_0.c)
 *     PsGetCurrentServerSilo @ 0x14027D7E0 (PsGetCurrentServerSilo.c)
 *     IoGetRelatedDeviceObject @ 0x14028F6E0 (IoGetRelatedDeviceObject.c)
 *     IopAllocateIrpExReturn @ 0x14028F800 (IopAllocateIrpExReturn.c)
 *     IopCheckDeviceAndDriver @ 0x140290830 (IopCheckDeviceAndDriver.c)
 *     RtlCopyUnicodeString @ 0x1402909B0 (RtlCopyUnicodeString.c)
 *     IoFreeIrp @ 0x140290A30 (IoFreeIrp.c)
 *     IoGetAttachedDevice @ 0x140290C30 (IoGetAttachedDevice.c)
 *     IopDequeueIrpFromThread @ 0x140290C50 (IopDequeueIrpFromThread.c)
 *     IoCallDriverWithTracing @ 0x140290D90 (IoCallDriverWithTracing.c)
 *     KeInitializeEvent @ 0x140290DE0 (KeInitializeEvent.c)
 *     IopCheckVpbMounted @ 0x140290E10 (IopCheckVpbMounted.c)
 *     IopDoFullTraverseCheck @ 0x140291030 (IopDoFullTraverseCheck.c)
 *     IopDecrementDeviceObjectRef @ 0x140291080 (IopDecrementDeviceObjectRef.c)
 *     PsIsHostSilo @ 0x140291F70 (PsIsHostSilo.c)
 *     ObfReferenceObjectWithTag @ 0x140296B50 (ObfReferenceObjectWithTag.c)
 *     RtlInitUnicodeString @ 0x140298F60 (RtlInitUnicodeString.c)
 *     SeAccessCheck @ 0x14029AA90 (SeAccessCheck.c)
 *     RtlGetActiveConsoleId @ 0x1402DCC00 (RtlGetActiveConsoleId.c)
 *     PsIsThreadTerminating @ 0x1402FDDE0 (PsIsThreadTerminating.c)
 *     IopDereferenceVpbAndFree @ 0x14032BD40 (IopDereferenceVpbAndFree.c)
 *     IopCreateSecurityCheck @ 0x140333A14 (IopCreateSecurityCheck.c)
 *     IopSymlinkGetMostRecentlyUsedName @ 0x1403476AC (IopSymlinkGetMostRecentlyUsedName.c)
 *     IopSymlinkGetECP @ 0x1403476CC (IopSymlinkGetECP.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403EDAA4 (KiRemoveSystemWorkPriorityKick.c)
 *     KeBugCheckEx @ 0x1403F70D0 (KeBugCheckEx.c)
 *     _guard_dispatch_icall @ 0x1403FFC70 (_guard_dispatch_icall.c)
 *     memmove @ 0x140409FC0 (memmove.c)
 *     memset @ 0x14040A280 (memset.c)
 *     IopCheckSessionDeviceAccess @ 0x14050130C (IopCheckSessionDeviceAccess.c)
 *     IopAllowRemoteDASD @ 0x140505860 (IopAllowRemoteDASD.c)
 *     IopIsSecurityContextAppContainer @ 0x14050591C (IopIsSecurityContextAppContainer.c)
 *     SeFastTraverseCheck @ 0x1405908C0 (SeFastTraverseCheck.c)
 *     SeLockSubjectContext @ 0x1405F3C80 (SeLockSubjectContext.c)
 *     SeUnlockSubjectContext @ 0x1405F3CE0 (SeUnlockSubjectContext.c)
 *     SeTokenIsAdmin @ 0x140626CB0 (SeTokenIsAdmin.c)
 *     IopCloseFile @ 0x140675CE0 (IopCloseFile.c)
 *     RtlMapGenericMask @ 0x140677E80 (RtlMapGenericMask.c)
 *     IoGetIrpExtraCreateParameter @ 0x140677ED0 (IoGetIrpExtraCreateParameter.c)
 *     IopCheckBackupRestorePrivilege @ 0x140677EF0 (IopCheckBackupRestorePrivilege.c)
 *     SeSetAccessStateGenericMapping @ 0x1406780C0 (SeSetAccessStateGenericMapping.c)
 *     IopAllocRealFileObject @ 0x140678970 (IopAllocRealFileObject.c)
 *     IopSymlinkPropagateToExtensionIfNeeded @ 0x140678DB0 (IopSymlinkPropagateToExtensionIfNeeded.c)
 *     IopRetrieveTransactionParameters @ 0x1406792E0 (IopRetrieveTransactionParameters.c)
 *     RtlEqualUnicodeString @ 0x140681E80 (RtlEqualUnicodeString.c)
 *     IopQueryInformation @ 0x1406DABE0 (IopQueryInformation.c)
 *     SeOpenObjectAuditAlarm @ 0x1406DCF70 (SeOpenObjectAuditAlarm.c)
 *     SeAppendPrivileges @ 0x1406DCFD0 (SeAppendPrivileges.c)
 *     IopCheckTopDeviceHint @ 0x1406E7014 (IopCheckTopDeviceHint.c)
 *     IopSymlinkUpdateECP @ 0x1406EECE8 (IopSymlinkUpdateECP.c)
 *     IopSymlinkCreateECP @ 0x1406EF00C (IopSymlinkCreateECP.c)
 *     IopSymlinkProcessReparse @ 0x1406EF2E4 (IopSymlinkProcessReparse.c)
 *     IoQueryFileInformation @ 0x1407104D0 (IoQueryFileInformation.c)
 *     IopSymlinkEnforceEnabledTypes @ 0x1407113C4 (IopSymlinkEnforceEnabledTypes.c)
 *     IopCancelAlertedRequest @ 0x14088DF6C (IopCancelAlertedRequest.c)
 *     IoCancelFileOpen @ 0x140890560 (IoCancelFileOpen.c)
 *     IopCheckAndUpdateStopOnSymlinkEcp @ 0x140891004 (IopCheckAndUpdateStopOnSymlinkEcp.c)
 *     IopGetNetworkOpenInformation @ 0x140897EB0 (IopGetNetworkOpenInformation.c)
 *     PsGetParentSilo @ 0x140902730 (PsGetParentSilo.c)
 *     ExFreePoolWithTag @ 0x1409B1140 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x1409B1160 (ExAllocatePoolWithTag.c)
 *     VfFastIoCheckState @ 0x1409C69A4 (VfFastIoCheckState.c)
 *     VfFastIoSnapState @ 0x1409C6A7C (VfFastIoSnapState.c)
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
  __int64 v16; // r8
  __int64 v17; // rdx
  ULONG_PTR v18; // r13
  unsigned __int64 v19; // rcx
  __int64 result; // rax
  bool v21; // al
  __int64 v22; // rax
  ULONG_PTR v23; // rax
  ULONG_PTR v24; // rcx
  __int64 CurrentServerSilo; // rax
  int ServerSiloServiceSessionId; // ebx
  struct _DMA_ADAPTER *DevicePDO; // rax
  struct _DMA_ADAPTER *v28; // rbx
  ACCESS_MASK RemainingDesiredAccess; // ebx
  char v30; // dl
  __int64 v31; // rcx
  int v32; // r10d
  char v33; // r9
  char v34; // r14
  ULONG ActiveConsoleId; // ebx
  __int64 v36; // rax
  int v37; // ebx
  bool v38; // bl
  struct _SECURITY_SUBJECT_CONTEXT *p_SubjectSecurityContext; // rdi
  char v40; // r14
  PACCESS_TOKEN ClientToken; // rcx
  ACCESS_MASK v42; // eax
  UNICODE_STRING *v43; // rsi
  _DWORD *v44; // r9
  char v45; // al
  char v46; // r14
  unsigned __int16 Length; // r8
  __int64 v48; // rdx
  __int64 v49; // r15
  PDEVICE_OBJECT AttachedDevice; // r14
  int v51; // esi
  __int64 v52; // rax
  int v53; // ecx
  __int64 v54; // rdx
  __int64 v55; // r8
  _BOOL8 v56; // r8
  PCUNICODE_STRING v57; // rsi
  __int64 v58; // rdx
  __int64 v59; // r8
  _DWORD *v60; // r9
  int v61; // eax
  struct _ACCESS_STATE *v62; // rsi
  _DWORD *v63; // r9
  __int64 v64; // rdx
  __int64 v65; // r8
  _DWORD *v66; // r9
  __int64 Irp; // rax
  _DWORD *v68; // r9
  __int64 v69; // r13
  char v70; // dl
  __int64 v71; // rsi
  int v72; // eax
  int v73; // r8d
  char v74; // al
  ULONG_PTR v75; // rbx
  PFILE_OBJECT v76; // rdi
  _QWORD *v77; // rbx
  unsigned __int64 v78; // rax
  __int64 v79; // rcx
  __int64 v80; // rcx
  __int64 v81; // rax
  __int64 v82; // rdx
  _DWORD *Silo; // rbx
  NTSTATUS SetSpecificExtension; // eax
  _DWORD *v85; // rsi
  unsigned __int16 v86; // ax
  wchar_t *PoolWithTag; // rax
  _DWORD *v88; // r9
  wchar_t *Buffer; // rcx
  unsigned __int16 v90; // ax
  wchar_t *v91; // rax
  _DWORD *v92; // r9
  ULONG_PTR v93; // rdi
  __int16 *MostRecentlyUsedName; // rdx
  NTSTATUS updated; // eax
  struct _KSEMAPHORE *p_Event; // rsi
  char v97; // dl
  NTSTATUS v98; // eax
  unsigned __int8 v99; // al
  int v100; // edx
  BOOLEAN v101; // di
  unsigned __int8 CurrentIrql; // bl
  unsigned __int8 v103; // al
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  int v106; // eax
  bool v107; // zf
  unsigned __int8 v108; // al
  struct _KPRCB *v109; // r10
  _DWORD *v110; // r9
  int v111; // eax
  int v112; // esi
  char v113; // r15
  struct _ECP_LIST *v114; // r14
  unsigned __int64 v115; // rcx
  __int64 v116; // rax
  PVOID v117; // r9
  __int64 v118; // rcx
  char v119; // al
  int v120; // r8d
  int v121; // ecx
  int v122; // ecx
  PDEVICE_OBJECT v123; // rbx
  ULONG_PTR v124; // rax
  unsigned __int64 v125; // rcx
  __int64 v126; // rax
  PUNICODE_STRING v127; // r13
  wchar_t *v128; // rsi
  wchar_t *v129; // rcx
  __int64 v130; // rax
  ULONG_PTR v131; // rdi
  _DWORD *v132; // r9
  __int64 v133; // rdx
  __int64 v134; // r8
  _DWORD *v135; // r9
  ULONG_PTR v136; // rdx
  _DWORD *v137; // r9
  _DWORD *v138; // r9
  __int64 v139; // rdx
  __int64 v140; // r8
  _DWORD *v141; // r9
  struct _DMA_ADAPTER *v142; // rcx
  _DWORD *v143; // r9
  ULONG_PTR v144; // rcx
  __int64 v145; // rdx
  __int64 v146; // r8
  _DWORD *v147; // r9
  _DWORD *v148; // r9
  __int64 v149; // rdx
  __int64 v150; // r8
  _DWORD *v151; // r9
  __int64 v152; // rdx
  __int64 v153; // r8
  _DWORD *v154; // r9
  PFILE_OBJECT v155; // rbx
  ULONG_PTR v156; // rcx
  int v157; // ecx
  void *v158; // rcx
  __int64 v159; // rdx
  __int64 v160; // r8
  _DWORD *v161; // r9
  __int64 v162; // r8
  int v163; // ecx
  unsigned __int64 v164; // rax
  __int64 v165; // r10
  unsigned int v166; // ecx
  struct _ACCESS_STATE *v167; // rcx
  __int64 v168; // rbx
  __int64 v169; // rdx
  __int64 v170; // r8
  _DWORD *v171; // r9
  PDEVICE_OBJECT RelatedDeviceObject; // r14
  ULONG_PTR Vpb; // rcx
  __int64 v174; // rbx
  struct _FILE_OBJECT *RelatedFileObject; // rax
  unsigned __int64 DeviceType; // rax
  __int64 v177; // rcx
  NTSTATUS FileInformation; // eax
  char v179; // si
  PFAST_IO_DISPATCH FastIoDispatch; // rcx
  __int64 v181; // rdx
  __int64 (__fastcall *FastIoQueryBasicInfo)(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD); // rbx
  void *v183; // r15
  PVOID Pool_0; // rbx
  __int64 (__fastcall *FastIoQueryNetworkOpenInfo)(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD); // r15
  void *v186; // rbx
  NTSTATUS v187; // eax
  _DWORD *v188; // r9
  __int64 v189; // rdx
  __int64 v190; // r8
  _DWORD *v191; // r9
  __int64 v192; // rdx
  __int64 v193; // r8
  _DWORD *v194; // r9
  ACCESS_MASK GrantedAccess; // [rsp+40h] [rbp-128h]
  NTSTATUS AccessStatus; // [rsp+60h] [rbp-108h] BYREF
  int v197; // [rsp+64h] [rbp-104h]
  int v198; // [rsp+68h] [rbp-100h]
  ACCESS_MASK v199; // [rsp+6Ch] [rbp-FCh] BYREF
  ULONG_PTR BugCheckParameter1; // [rsp+70h] [rbp-F8h]
  PPRIVILEGE_SET Privileges; // [rsp+78h] [rbp-F0h] BYREF
  ACCESS_MASK DesiredAccess; // [rsp+80h] [rbp-E8h]
  PDEVICE_OBJECT DeviceObject; // [rsp+88h] [rbp-E0h] BYREF
  struct _KTHREAD *CurrentThread; // [rsp+90h] [rbp-D8h]
  PFILE_OBJECT FileObject; // [rsp+98h] [rbp-D0h] BYREF
  char v206; // [rsp+A0h] [rbp-C8h]
  ULONG ReturnedLength; // [rsp+A4h] [rbp-C4h] BYREF
  PVOID P; // [rsp+A8h] [rbp-C0h]
  PVOID v209; // [rsp+B0h] [rbp-B8h] BYREF
  int v210; // [rsp+B8h] [rbp-B0h]
  struct _ECP_LIST *v211; // [rsp+C0h] [rbp-A8h] BYREF
  __int64 v212; // [rsp+C8h] [rbp-A0h]
  ULONG_PTR BugCheckParameter4[2]; // [rsp+D0h] [rbp-98h] BYREF
  _DWORD *v214; // [rsp+E0h] [rbp-88h] BYREF
  _BYTE *v215; // [rsp+E8h] [rbp-80h]
  UNICODE_STRING ObjectTypeName; // [rsp+F0h] [rbp-78h] BYREF
  struct _ECP_LIST *ExtraCreateParameter; // [rsp+100h] [rbp-68h] BYREF
  __int128 v218; // [rsp+108h] [rbp-60h] BYREF
  __int64 v219; // [rsp+118h] [rbp-50h]
  void *v220; // [rsp+120h] [rbp-48h]
  __int64 retaddr; // [rsp+168h] [rbp+0h]
  __int64 (__fastcall *v223)(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD); // [rsp+178h] [rbp+10h] BYREF
  struct _ACCESS_STATE *v224; // [rsp+180h] [rbp+18h]
  char v225; // [rsp+188h] [rbp+20h]

  v225 = a4;
  v224 = a3;
  v12 = a3;
  v13 = (unsigned int *)BugCheckParameter2;
  v14 = a8;
  v199 = 0;
  AccessStatus = 0;
  *(_OWORD *)BugCheckParameter4 = 0LL;
  v218 = 0LL;
  v219 = 0LL;
  v210 = 0;
  LOBYTE(v198) = 0;
  ReturnedLength = 0;
  ObjectTypeName = 0LL;
  Privileges = 0LL;
  P = 0LL;
  v211 = 0LL;
  v209 = 0LL;
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
    v16 = 2684354563LL;
    v17 = 0x1080020084LL;
    if ( *(_WORD *)v14 != 8 || *(_WORD *)(v14 + 2) != 216 )
      return 3221225508LL;
    v18 = (ULONG_PTR)v13;
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
      v19 = v13[18];
      if ( *(_QWORD *)(v14 + 24) == 2684354563LL )
      {
        if ( (unsigned int)v19 > 0x24 || !_bittest64(&v17, v19) )
          goto LABEL_10;
      }
      else
      {
        LOBYTE(v17) = (unsigned int)v19 <= 0x24 && _bittest64(&v17, v19);
        v21 = (unsigned int)v19 <= 0x36 && _bittest64(&v15, v19);
        if ( !(_BYTE)v17 && !v21 )
        {
LABEL_10:
          *(_DWORD *)(v14 + 16) = -1073741192;
          return 3221226104LL;
        }
        result = IopSymlinkEnforceEnabledTypes(*(_BYTE *)(v14 + 152) & 8, v17, *(_QWORD *)(v14 + 168));
        AccessStatus = result;
        if ( (int)result < 0 )
          goto LABEL_423;
      }
    }
    v22 = *(_QWORD *)(v14 + 40);
    if ( v22 )
    {
      v18 = *(_QWORD *)(v22 + 8);
      BugCheckParameter1 = v18;
    }
    if ( *(_DWORD *)(v18 + 72) == 7 )
    {
      v23 = v18;
      v24 = v18;
      do
      {
        if ( *(_QWORD *)(v23 + 56) )
          break;
        v23 = *(_QWORD *)(v23 + 24);
        v24 = v23;
      }
      while ( v23 );
      if ( v24 && v24 != v18 )
      {
        *(_DWORD *)(v14 + 152) |= 2u;
        v18 = v24;
        BugCheckParameter1 = v24;
      }
    }
    result = IopCheckDeviceAndDriver(v14, v18, v16, (_DWORD *)v15);
    AccessStatus = result;
    if ( (int)result < 0 )
      goto LABEL_423;
    if ( (*(_DWORD *)(*(_QWORD *)(v18 + 312) + 32LL) & 0x400) != 0 && !*(_QWORD *)(v14 + 40) )
    {
      CurrentServerSilo = PsGetCurrentServerSilo();
      ServerSiloServiceSessionId = PsGetServerSiloServiceSessionId(CurrentServerSilo);
      if ( ServerSiloServiceSessionId != (unsigned int)PsGetCurrentProcessSessionId()
        || IopSessionZeroAccessCheckEnabled && (*(_DWORD *)(v14 + 64) & 0x40000) == 0 )
      {
        DevicePDO = (struct _DMA_ADAPTER *)IopGetDevicePDO(v18);
        v28 = DevicePDO;
        if ( DevicePDO )
        {
          if ( !IopCheckSessionDeviceAccess((__int64)DevicePDO) )
          {
            HalPutDmaAdapter(v28);
            IopDecrementDeviceObjectRef(v18, 0, 0LL, v137);
            *(_DWORD *)(v14 + 16) = -1073741790;
            return 3221225506LL;
          }
          HalPutDmaAdapter(v28);
        }
      }
    }
    RtlMapGenericMask(&v12->RemainingDesiredAccess, (PGENERIC_MAPPING)((char *)IoFileObjectType + 76));
    RtlMapGenericMask(&v12->OriginalDesiredAccess, (PGENERIC_MAPPING)((char *)IoFileObjectType + 76));
    SeSetAccessStateGenericMapping(v12, (PGENERIC_MAPPING)((char *)IoFileObjectType + 76));
    RemainingDesiredAccess = v12->RemainingDesiredAccess;
    DesiredAccess = RemainingDesiredAccess;
    IopCheckBackupRestorePrivilege(v12);
    v30 = *(_BYTE *)(v14 + 136);
    if ( v30 && !SourceString->Length || (v12->Flags & 0x100) != 0 )
    {
      RemainingDesiredAccess |= v12->PreviouslyGrantedAccess;
      DesiredAccess = RemainingDesiredAccess;
    }
    v31 = *(_QWORD *)(v14 + 40);
    LOBYTE(v32) = v198;
    if ( v31 && (*(_DWORD *)(v31 + 80) & 0x400000) != 0 )
    {
      v32 = (unsigned __int8)v198;
      if ( !SourceString->Length )
        v32 = 1;
      v198 = v32;
    }
    if ( ((v33 = v225) != 0 || (*(_DWORD *)(v14 + 84) & 1) != 0) && (!v31 || (_BYTE)v32) && !v30 )
    {
      v34 = v11 & 0xDF;
      if ( SourceString->Length )
      {
        p_SubjectSecurityContext = &v12->SubjectSecurityContext;
        if ( IopDoFullTraverseCheck(v18, v225, &v12->SubjectSecurityContext) )
        {
          v43 = AbsoluteObjectName;
          LOBYTE(v11) = (v34 ^ IopCreateSecurityCheck(
                                 v18,
                                 0LL,
                                 v12,
                                 RemainingDesiredAccess | 0x20,
                                 1,
                                 Privileges,
                                 &v199,
                                 AbsoluteObjectName,
                                 &ObjectTypeName,
                                 (__int64)CurrentThread,
                                 0)) & 1 ^ v34;
        }
        else
        {
          if ( (v12->Flags & 1) != 0 )
          {
            LOBYTE(v11) = v34 | 1;
          }
          else
          {
            KeEnterCriticalRegionThread((__int64)CurrentThread);
            ExAcquireResourceSharedLite(&IopSecurityResource, 1u);
            LOBYTE(v11) = (v34 ^ SeFastTraverseCheck(*(_QWORD *)(v18 + 272), (__int64)v12, 32)) & 1 ^ v34;
            if ( (v11 & 1) == 0 )
            {
              Privileges = 0LL;
              SeLockSubjectContext(&v12->SubjectSecurityContext);
              LOBYTE(v11) = ((v11 | 0x20) ^ SeAccessCheck(
                                              *(PSECURITY_DESCRIPTOR *)(v18 + 272),
                                              &v12->SubjectSecurityContext,
                                              1u,
                                              0x20u,
                                              0,
                                              &Privileges,
                                              (PGENERIC_MAPPING)((char *)IoFileObjectType + 76),
                                              1,
                                              &v199,
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
          v43 = AbsoluteObjectName;
        }
      }
      else
      {
        v38 = 0;
        if ( (*(_DWORD *)(v18 + 52) & 0x40001) != 0 && (RemainingDesiredAccess & 0xFFEDFF7F) != 0 )
        {
          ActiveConsoleId = RtlGetActiveConsoleId();
          if ( ActiveConsoleId != (unsigned int)PsGetCurrentProcessSessionId() )
          {
            v36 = PsGetCurrentServerSilo();
            v37 = PsGetServerSiloServiceSessionId(v36);
            if ( v37 != (unsigned int)PsGetCurrentProcessSessionId() && !IopAllowRemoteDASD() )
              v38 = 1;
          }
        }
        Privileges = 0LL;
        KeEnterCriticalRegionThread((__int64)CurrentThread);
        ExAcquireResourceSharedLite(&IopSecurityResource, 1u);
        p_SubjectSecurityContext = &v12->SubjectSecurityContext;
        SeLockSubjectContext(&v12->SubjectSecurityContext);
        v40 = v34 | 0x20;
        if ( !v38 )
          goto LABEL_67;
        ClientToken = p_SubjectSecurityContext->ClientToken;
        if ( !p_SubjectSecurityContext->ClientToken )
          ClientToken = v12->SubjectSecurityContext.PrimaryToken;
        if ( SeTokenIsAdmin(ClientToken) )
        {
LABEL_67:
          RemainingDesiredAccess = DesiredAccess;
          LOBYTE(v11) = (v40 ^ SeAccessCheck(
                                 *(PSECURITY_DESCRIPTOR *)(v18 + 272),
                                 &v12->SubjectSecurityContext,
                                 (v40 & 0x20) != 0,
                                 DesiredAccess,
                                 0,
                                 &Privileges,
                                 (PGENERIC_MAPPING)((char *)IoFileObjectType + 76),
                                 1,
                                 &v199,
                                 &AccessStatus)) & 1 ^ v40;
          if ( Privileges )
          {
            SeAppendPrivileges(v12, Privileges);
            CmSiFreeMemory(Privileges);
          }
          if ( (v11 & 1) != 0 )
          {
            v42 = v199;
            v12->PreviouslyGrantedAccess |= v199;
            v12->RemainingDesiredAccess &= ~(v42 | 0x2000000);
            *(_BYTE *)(v14 + 136) = 1;
          }
        }
        else
        {
          LOBYTE(v11) = v40 & 0xFE;
          AccessStatus = -1073741790;
          RemainingDesiredAccess = DesiredAccess;
        }
        v43 = AbsoluteObjectName;
        SeOpenObjectAuditAlarm(
          &ObjectTypeName,
          (PVOID)v18,
          AbsoluteObjectName,
          *(PSECURITY_DESCRIPTOR *)(v18 + 272),
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
        goto LABEL_309;
      v33 = v225;
    }
    else
    {
      v43 = AbsoluteObjectName;
    }
    if ( *(_BYTE *)(v14 + 137) || *(_BYTE *)(v14 + 138) )
      v45 = 64;
    else
      v45 = 0;
    v46 = v45 | v11 & 0xBF;
    Length = SourceString->Length;
    if ( SourceString->Length
      || (v48 = *(_QWORD *)(v14 + 40)) != 0
      || (RemainingDesiredAccess & 0xFEE1FF7F) != 0
      || (v46 & 0x40) != 0 )
    {
      LOBYTE(v11) = v46 & 0xF7;
      v48 = *(_QWORD *)(v14 + 40);
    }
    else
    {
      LOBYTE(v11) = v46 | 8;
    }
    v197 = v11;
    v49 = 0LL;
    v212 = 0LL;
    if ( !v48 || (*(_DWORD *)(v48 + 80) & 0x800) != 0 )
    {
      AttachedDevice = (PDEVICE_OBJECT)v18;
      DeviceObject = (PDEVICE_OBJECT)v18;
      v51 = v197;
      if ( *(_QWORD *)(v18 + 56) && (v197 & 8) == 0 )
      {
        if ( (*(_DWORD *)(v18 + 52) & 0x100) != 0
          && (*(_DWORD *)(*(_QWORD *)(v18 + 312) + 32LL) & 0x800) == 0
          && (v33 || (*(_DWORD *)(v14 + 84) & 1) != 0)
          && (v48 || Length)
          && !(_BYTE)v198 )
        {
          Privileges = 0LL;
          if ( !IopCreateSecurityCheck(
                  v18,
                  (void *)v18,
                  v224,
                  RemainingDesiredAccess,
                  *(_DWORD *)(v14 + 88),
                  0LL,
                  &v199,
                  AbsoluteObjectName,
                  &ObjectTypeName,
                  (__int64)CurrentThread,
                  0) )
            goto LABEL_309;
        }
        v52 = IopCheckVpbMounted(v14, v18, (__int64)SourceString, &AccessStatus);
        v49 = v52;
        v212 = v52;
        if ( !v52 )
          return (unsigned int)AccessStatus;
        AttachedDevice = *(PDEVICE_OBJECT *)(v52 + 8);
        DeviceObject = AttachedDevice;
      }
      if ( (*(_DWORD *)(v14 + 152) & 1) != 0 )
      {
        LOBYTE(v51) = v51 | 2;
        v197 = v51;
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
      if ( *(_QWORD *)(v48 + 16) )
      {
        v49 = *(_QWORD *)(v48 + 16);
        v212 = v49;
        if ( (*(_DWORD *)(v18 + 52) & 0x100) != 0
          && (*(_DWORD *)(*(_QWORD *)(v18 + 312) + 32LL) & 0x800) == 0
          && (v33 || (*(_DWORD *)(v14 + 84) & 1) != 0)
          && !(_BYTE)v198 )
        {
          Privileges = 0LL;
          if ( !IopCreateSecurityCheck(
                  v18,
                  (void *)v18,
                  v224,
                  RemainingDesiredAccess,
                  *(_DWORD *)(v14 + 88),
                  0LL,
                  &v199,
                  v43,
                  &ObjectTypeName,
                  (__int64)CurrentThread,
                  0) )
            goto LABEL_309;
        }
        IopIncrementVpbRefCount(v49, 1);
      }
      if ( (*(_DWORD *)(v14 + 152) & 1) != 0 )
      {
        if ( v49 )
        {
          AttachedDevice = *(PDEVICE_OBJECT *)(v49 + 8);
          DeviceObject = AttachedDevice;
        }
        v51 = v197;
        LOBYTE(v51) = v197 | 2;
        v197 = v51;
      }
      else
      {
        LOBYTE(v51) = v197;
      }
    }
    v53 = *(_DWORD *)(v18 + 52);
    if ( (v53 & 0x40001) != 0
      && (*(_DWORD *)(v18 + 48) & 0x600100) == 0
      && (v53 & 0x100) == 0
      && IopIsSecurityContextAppContainer(&v224->SubjectSecurityContext) )
    {
      if ( !v49 )
        goto LABEL_309;
      if ( (*(_DWORD *)(*(_QWORD *)(v49 + 8) + 48LL) & 0x20000) == 0 )
      {
        IopDereferenceVpbAndFree(v49, v54, v55, v44);
LABEL_309:
        IopDecrementDeviceObjectRef(v18, 0, 0LL, v44);
        return 3221225506LL;
      }
    }
    if ( (v51 & 2) != 0 )
    {
      v56 = (v51 & 8) != 0;
      v57 = SourceString;
      AccessStatus = IopCheckTopDeviceHint(&DeviceObject, v14, v56, SourceString);
      if ( AccessStatus < 0 )
      {
        if ( v49 )
          IopDereferenceVpbAndFree(v49, v58, v59, v60);
        IopDecrementDeviceObjectRef(v18, 0, 0LL, v60);
        return (unsigned int)AccessStatus;
      }
      AttachedDevice = DeviceObject;
    }
    else
    {
      v57 = SourceString;
    }
    v61 = *(_DWORD *)(v14 + 152);
    if ( (v61 & 0x10) != 0 )
      *(_DWORD *)(v14 + 152) = v61 & 0xFFFFFFEF;
    if ( ((AttachedDevice->Characteristics & 0x100) != 0
       || IopRequireDeviceAccessCheck && (*(_DWORD *)(v18 + 52) & 0x100000) != 0)
      && (v225 || (*(_DWORD *)(v14 + 84) & 1) != 0)
      && (*(_QWORD *)(v14 + 40) || v57->Length) )
    {
      v62 = v224;
      if ( !(_BYTE)v198 )
      {
        Privileges = 0LL;
        if ( !IopCreateSecurityCheck(
                v18,
                AttachedDevice,
                v224,
                RemainingDesiredAccess,
                *(_DWORD *)(v14 + 88),
                0LL,
                &v199,
                AbsoluteObjectName,
                &ObjectTypeName,
                (__int64)CurrentThread,
                1) )
        {
          IopDecrementDeviceObjectRef(v18, 0, 0LL, v63);
          if ( v49 )
            IopDereferenceVpbAndFree(v49, v64, v65, v66);
          return 3221225506LL;
        }
      }
    }
    else
    {
      v62 = v224;
    }
    Irp = IopAllocateIrpExReturn((__int64)AttachedDevice, (unsigned __int8)AttachedDevice->StackSize, 0LL, retaddr);
    v69 = Irp;
    if ( !Irp )
    {
      IopDecrementDeviceObjectRef(BugCheckParameter1, 0, 0LL, v68);
      if ( v49 )
        IopDereferenceVpbAndFree(v49, v192, v193, v194);
      return 3221225626LL;
    }
    *(_QWORD *)(Irp + 152) = CurrentThread;
    v70 = v225;
    *(_BYTE *)(Irp + 64) = v225;
    *(_DWORD *)(Irp + 16) = 2180;
    *(_QWORD *)&v218 = a9;
    *((_QWORD *)&v218 + 1) = v62;
    LODWORD(v219) = RemainingDesiredAccess;
    HIDWORD(v219) = *(_DWORD *)(v14 + 64);
    v71 = *(_QWORD *)(Irp + 184) - 72LL;
    v215 = (_BYTE *)v71;
    *(_BYTE *)(v71 + 3) = 0;
    v72 = *(_DWORD *)(v14 + 120);
    v73 = a5;
    if ( v72 )
    {
      *(_BYTE *)v71 = v72 == 1 ? 1 : 19;
      *(_QWORD *)(v71 + 32) = *(_QWORD *)(v14 + 128);
    }
    else
    {
      *(_BYTE *)v71 = 0;
      *(_DWORD *)(v71 + 32) = *(_DWORD *)(v14 + 80);
      v74 = *(_BYTE *)(v14 + 84);
      *(_BYTE *)(v71 + 2) = v74;
      if ( (v73 & 0x40) == 0 )
        *(_BYTE *)(v71 + 2) = v74 | 0x80;
    }
    *(_QWORD *)(v69 + 88) = *(_QWORD *)(v14 + 56);
    *(_QWORD *)(v69 + 24) = *(_QWORD *)(v14 + 72);
    *(_DWORD *)(v71 + 16) = (*(_DWORD *)(v14 + 88) << 24) | *(_DWORD *)(v14 + 64) & 0xFFFFFF;
    *(_WORD *)(v71 + 24) = *(_WORD *)(v14 + 68);
    *(_WORD *)(v71 + 26) = *(_WORD *)(v14 + 70);
    *(_QWORD *)(v71 + 8) = &v218;
    *(_QWORD *)(v69 + 112) = *(_QWORD *)(v14 + 168);
    *(_QWORD *)(v69 + 72) = BugCheckParameter4;
    *(_QWORD *)(v69 + 8) = 0LL;
    *(_BYTE *)(v69 + 65) = 0;
    *(_BYTE *)(v69 + 68) = 0;
    *(_QWORD *)(v69 + 80) = 0LL;
    *(_QWORD *)(v69 + 104) = 0LL;
    *(_QWORD *)(v69 + 160) = 0LL;
    if ( *(_BYTE *)(v14 + 137) )
      break;
    GrantedAccess = RemainingDesiredAccess;
    v75 = BugCheckParameter1;
    AccessStatus = IopAllocRealFileObject(
                     (unsigned int)&FileObject,
                     (_DWORD)AttachedDevice,
                     BugCheckParameter1,
                     v73,
                     v70,
                     v14,
                     a10,
                     0,
                     GrantedAccess);
    if ( AccessStatus < 0 )
    {
      IoFreeIrp((PIRP)v69);
      IopDecrementDeviceObjectRef(v75, 0, 0LL, v138);
      if ( v49 )
        IopDereferenceVpbAndFree(v49, v139, v140, v141);
      v142 = (struct _DMA_ADAPTER *)FileObject;
      if ( FileObject )
      {
        FileObject->DeviceObject = 0LL;
        HalPutDmaAdapter(v142);
        result = (unsigned int)AccessStatus;
        *(_DWORD *)(v14 + 16) = AccessStatus;
        return result;
      }
      goto LABEL_422;
    }
    v76 = FileObject;
LABEL_185:
    if ( (v197 & 8) != 0 )
      v76->Flags |= 0x800u;
    *(_QWORD *)(v69 + 192) = v76;
    *(_QWORD *)(v71 + 48) = v76;
    v86 = SourceString->Length;
    if ( SourceString->Length )
    {
      if ( v86 >= 0x38u )
      {
        if ( v86 >= 0x78u )
        {
          if ( v86 < 0xF8u )
            v86 = 248;
        }
        else
        {
          v86 = 120;
        }
      }
      else
      {
        v86 = 56;
      }
      v76->FileName.MaximumLength = v86;
      PoolWithTag = (wchar_t *)ExAllocatePoolWithTag(PagedPool, v86, 0x6D4E6F49u);
      v76->FileName.Buffer = PoolWithTag;
      if ( !PoolWithTag )
      {
        IoFreeIrp((PIRP)v69);
        IopDecrementDeviceObjectRef(v75, 0, 0LL, v148);
        if ( v49 )
          IopDereferenceVpbAndFree(v49, v149, v150, v151);
        v76->DeviceObject = 0LL;
        if ( !*(_BYTE *)(v14 + 137) )
        {
          HalPutDmaAdapter((PADAPTER_OBJECT)v76);
          return 3221225626LL;
        }
        return 3221225626LL;
      }
    }
    RtlCopyUnicodeString(&v76->FileName, SourceString);
    if ( *(_BYTE *)(v14 + 137) )
    {
      LOBYTE(v223) = 0;
      AccessStatus = IopQueryInformation(v14, AttachedDevice, v69, v71, &v223);
      if ( AccessStatus < 0 || (_BYTE)v223 )
      {
        v157 = *(_DWORD *)(v69 + 48);
        *(_DWORD *)(v14 + 16) = v157;
        *(_QWORD *)(v14 + 24) = *(_QWORD *)(v69 + 56);
        if ( v157 == 260 )
        {
          v158 = *(void **)(v69 + 160);
          if ( v158 )
          {
            ExFreePoolWithTag(v158, 0);
            *(_QWORD *)(v69 + 160) = 0LL;
            *(_QWORD *)(v14 + 40) = 0LL;
          }
        }
        if ( v76->FileName.Length )
          ExFreePoolWithTag(v76->FileName.Buffer, 0);
        if ( v76->FileObjectExtension )
          IopDeleteFileObjectExtension((__int64)v76);
        v156 = BugCheckParameter1;
        goto LABEL_344;
      }
      if ( !RtlEqualUnicodeString(&v76->FileName, SourceString, 0) )
      {
        Buffer = v76->FileName.Buffer;
        if ( Buffer )
        {
          ExFreePoolWithTag(Buffer, 0);
          RtlInitUnicodeString(&v76->FileName, 0LL);
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
          v76->FileName.MaximumLength = v90;
          v91 = (wchar_t *)ExAllocatePoolWithTag(PagedPool, v90, 0x6D4E6F49u);
          v76->FileName.Buffer = v91;
          if ( !v91 )
          {
            if ( v76->FileObjectExtension )
              IopDeleteFileObjectExtension((__int64)v76);
            IopDecrementDeviceObjectRef(BugCheckParameter1, 0, 0LL, v92);
            if ( v49 )
              IopDereferenceVpbAndFree(v49, v152, v153, v154);
            IoFreeIrp((PIRP)v69);
            return 3221225626LL;
          }
          RtlCopyUnicodeString(&v76->FileName, SourceString);
        }
      }
      v93 = BugCheckParameter1;
      AccessStatus = IopAllocRealFileObject(
                       (unsigned int)&FileObject,
                       (_DWORD)AttachedDevice,
                       BugCheckParameter1,
                       a5,
                       v225,
                       v14,
                       a10,
                       1,
                       DesiredAccess);
      if ( AccessStatus < 0 )
      {
        v155 = FileObject;
        if ( FileObject->FileName.Length )
          ExFreePoolWithTag(FileObject->FileName.Buffer, 0);
        if ( v155->FileObjectExtension )
          IopDeleteFileObjectExtension((__int64)v155);
        v156 = v93;
LABEL_344:
        IopDecrementDeviceObjectRef(v156, 0, 0LL, v88);
        if ( v49 )
          IopDereferenceVpbAndFree(v49, v159, v160, v161);
        IoFreeIrp((PIRP)v69);
        return (unsigned int)AccessStatus;
      }
      v76 = FileObject;
      *(_QWORD *)(v71 + 48) = FileObject;
      *(_QWORD *)(v69 + 192) = v76;
    }
    if ( !*(_DWORD *)(v14 + 120) )
    {
      ExtraCreateParameter = 0LL;
      AccessStatus = IoGetIrpExtraCreateParameter((PIRP)v69, &ExtraCreateParameter);
      if ( ExtraCreateParameter )
      {
        if ( IopSymlinkGetECP(ExtraCreateParameter, &v209) != -1073741275 )
        {
          MostRecentlyUsedName = (__int16 *)IopSymlinkGetMostRecentlyUsedName((__int64)v209);
          if ( !MostRecentlyUsedName[2] )
          {
            updated = IopSymlinkUpdateECP(
                        (PIRP)v69,
                        MostRecentlyUsedName,
                        AbsoluteObjectName->Length - SourceString->Length,
                        MostRecentlyUsedName[1]);
            AccessStatus = updated;
            if ( updated < 0 )
            {
              *(_DWORD *)(v69 + 48) = updated;
              *(_QWORD *)(v69 + 56) = 0LL;
              LOBYTE(v197) = v197 & 0xFB;
            }
          }
        }
      }
    }
    p_Event = (struct _KSEMAPHORE *)&v76->Event;
    KeInitializeEvent(&v76->Event, NotificationEvent, 0);
    *(_QWORD *)(v14 + 8) = v76;
    v97 = v197;
    if ( (v197 & 4) != 0 )
    {
      IopQueueThreadIrp(v69);
      v98 = IoCallDriverWithTracing(AttachedDevice, v69);
      AccessStatus = v98;
      v97 = v197;
    }
    else
    {
      v98 = AccessStatus;
    }
    if ( v98 == 259 )
    {
      v99 = v97 | 0x80;
      v100 = v97 & 0x7F;
      if ( (KeGetCurrentThread()->MiscFlags & 0x400) == 0 )
        v100 = v99;
      v197 = v100;
      v101 = (unsigned __int8)v100 >> 7;
      AccessStatus = KeWaitForSingleObject(p_Event, Executive, 0, (unsigned __int8)v100 >> 7, 0LL);
      if ( AccessStatus == 257 )
      {
        while ( 1 )
        {
          CurrentIrql = KeGetCurrentIrql();
          __writecr8(1uLL);
          if ( PsIsThreadTerminating(KeGetCurrentThread()) || !KeReadStateSemaphore(p_Event) && *(_BYTE *)(v69 + 68) )
            break;
          if ( KiIrqlFlags )
          {
            if ( (KiIrqlFlags & 1) != 0 )
            {
              v103 = KeGetCurrentIrql();
              if ( v103 <= 0xFu && CurrentIrql <= 0xFu && v103 >= 2u )
              {
                CurrentPrcb = KeGetCurrentPrcb();
                SchedulerAssist = CurrentPrcb->SchedulerAssist;
                v106 = ~(unsigned __int16)(-1LL << (CurrentIrql + 1));
                v107 = (v106 & SchedulerAssist[5]) == 0;
                SchedulerAssist[5] &= v106;
                if ( v107 )
                  KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
              }
            }
          }
          __writecr8(CurrentIrql);
          AccessStatus = KeWaitForSingleObject(p_Event, Executive, 0, v101, 0LL);
          if ( AccessStatus != 257 )
            goto LABEL_245;
        }
        if ( KiIrqlFlags )
        {
          if ( (KiIrqlFlags & 1) != 0 )
          {
            v108 = KeGetCurrentIrql();
            if ( v108 <= 0xFu && CurrentIrql <= 0xFu && v108 >= 2u )
            {
              v109 = KeGetCurrentPrcb();
              v110 = v109->SchedulerAssist;
              v111 = ~(unsigned __int16)(-1LL << (CurrentIrql + 1));
              v107 = (v111 & v110[5]) == 0;
              v110[5] &= v111;
              if ( v107 )
                KiRemoveSystemWorkPriorityKick((__int64)v109);
            }
          }
        }
        __writecr8(CurrentIrql);
        IopCancelAlertedRequest(p_Event, (PIRP)v69);
      }
LABEL_245:
      AccessStatus = BugCheckParameter4[0];
      v76 = FileObject;
    }
    AccessStatus = IoGetIrpExtraCreateParameter((PIRP)v69, &v211);
    v112 = *(_DWORD *)(v14 + 84) & 8;
    v113 = v112 != 0;
    v114 = v211;
    if ( *(_DWORD *)(v69 + 48) == 260 )
    {
      P = *(PVOID *)(v69 + 160);
      if ( !v211 || IopSymlinkGetECP(v211, &v209) == -1073741275 )
      {
        AccessStatus = IopSymlinkCreateECP((PIRP)v69, (__int64)&v209);
        if ( AccessStatus >= 0 )
        {
          if ( !v114 )
          {
            AccessStatus = IoGetIrpExtraCreateParameter((PIRP)v69, &v211);
            v114 = v211;
          }
        }
        else
        {
          *(_QWORD *)(v69 + 56) = 0LL;
          *(_DWORD *)(v69 + 48) = AccessStatus;
        }
      }
      if ( *(_DWORD *)(v69 + 48) == 260 )
      {
        if ( v112 && v114 )
          v113 = IopCheckAndUpdateStopOnSymlinkEcp(v114, *(unsigned int *)(v69 + 56), P);
        IopSymlinkProcessReparse((PIRP)v69);
        v115 = *(_QWORD *)(v69 + 56) - 2684354563LL;
        if ( v115 <= 0x16 )
        {
          v116 = 4194817LL;
          if ( _bittest64(&v116, v115) )
          {
            v117 = P;
            v118 = *((unsigned __int16 *)P + 3);
            v119 = 0;
            if ( !(_WORD)v118 )
              v119 = 16;
            v120 = v197;
            LOBYTE(v120) = v119 | v197 & 0xEF;
            v197 = v120;
            if ( (v120 & 0x10) == 0 && *(wchar_t *)((char *)SourceString->Buffer + SourceString->Length - v118) != 58 )
              goto LABEL_272;
            v121 = *(_DWORD *)(v14 + 64);
            if ( (v121 & 0x41) != 0 || *v215 )
              goto LABEL_272;
            if ( *(_DWORD *)P == -1610612733 )
              goto LABEL_270;
            if ( *(_DWORD *)P != -1610612724 )
              goto LABEL_272;
            if ( *((int *)P + 4) < 0 )
            {
LABEL_270:
              v122 = v121 | 1;
LABEL_271:
              *(_DWORD *)(v14 + 64) = v122;
            }
            else if ( (*((_DWORD *)P + 4) & 0x40000000) != 0 )
            {
              v122 = v121 | 0x40;
              goto LABEL_271;
            }
LABEL_272:
            if ( !v113 )
            {
              ExFreePoolWithTag(v117, 0);
              P = 0LL;
            }
          }
        }
      }
    }
    if ( *(_DWORD *)(v69 + 48) || *(_DWORD *)(v14 + 120) )
    {
      v123 = DeviceObject;
    }
    else
    {
      AccessStatus = IopSymlinkPropagateToExtensionIfNeeded(v76, v114, AbsoluteObjectName);
      v123 = DeviceObject;
      if ( AccessStatus < 0 )
      {
        IoCancelFileOpen(DeviceObject, v76);
        *(_QWORD *)(v69 + 56) = 0LL;
        *(_DWORD *)(v69 + 48) = AccessStatus;
      }
    }
    if ( v114 )
      *(_QWORD *)(v14 + 168) = v114;
    *(_OWORD *)BugCheckParameter4 = *(_OWORD *)(v69 + 48);
    AccessStatus = _mm_cvtsi128_si32(*(__m128i *)BugCheckParameter4);
    v76->Event.Header.SignalState = 1;
    v11 = v197;
    if ( (v197 & 4) != 0 )
    {
      *(_QWORD *)(v69 + 152) = CurrentThread;
      IopDequeueIrpFromThread((_QWORD *)v69);
    }
    if ( (*(_BYTE *)(v69 + 16) & 0x30) == 0x30 )
      ExFreePoolWithTag(*(PVOID *)(v69 + 24), 0);
    IoFreeIrp((PIRP)v69);
    v124 = BugCheckParameter4[1];
    *(_QWORD *)(v14 + 24) = BugCheckParameter4[1];
    if ( AccessStatus < 0 )
    {
      if ( (v76->Flags & 0x200000) != 0 )
      {
        HalPutDmaAdapter((PADAPTER_OBJECT)v76);
        *(_QWORD *)(v14 + 8) = 0LL;
        result = (unsigned int)AccessStatus;
        *(_DWORD *)(v14 + 16) = AccessStatus;
        return result;
      }
      if ( v76->FileName.Length )
      {
        ExFreePoolWithTag(v76->FileName.Buffer, 0);
        v76->FileName.Length = 0;
      }
      v76->DeviceObject = 0LL;
      HalPutDmaAdapter((PADAPTER_OBJECT)v76);
      IopDecrementDeviceObjectRef(BugCheckParameter1, 0, 0LL, v188);
      if ( v212 )
        IopDereferenceVpbAndFree(v212, v189, v190, v191);
      *(_QWORD *)(v14 + 8) = 0LL;
      goto LABEL_422;
    }
    if ( AccessStatus != 260 )
    {
      RelatedDeviceObject = IoGetRelatedDeviceObject(v76);
      if ( v123 != RelatedDeviceObject )
      {
        Vpb = (ULONG_PTR)v76->Vpb;
        v174 = v212;
        if ( Vpb != v212 )
        {
          if ( Vpb )
            IopIncrementVpbRefCount(Vpb, 1);
          if ( v174 )
            IopDereferenceVpbAndFree(v174, v169, v170, v171);
        }
      }
      if ( (v197 & 0x40) == 0 )
      {
        *a11 = v76;
        *(_DWORD *)(v14 + 32) = -1096154543;
        ObfReferenceObject(v76);
        RelatedFileObject = v76->RelatedFileObject;
        if ( (!RelatedFileObject || (RelatedFileObject->Flags & 0x400000) != 0) && !v76->FileName.Length )
        {
          DeviceType = RelatedDeviceObject->DeviceType;
          if ( (unsigned int)DeviceType <= 0x20 )
          {
            v177 = 0x100000308LL;
            if ( _bittest64(&v177, DeviceType) )
              v76->Flags |= 0x400000u;
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
                              v76,
                              *(FILE_INFORMATION_CLASS *)(v14 + 200),
                              *(_DWORD *)(v14 + 204),
                              *(PVOID *)(v14 + 112),
                              (PULONG)(v14 + 204));
          goto LABEL_413;
        }
        v179 = 0;
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
                v186 = (MmVerifierData & 0x10) != 0 ? (void *)VfFastIoSnapState() : 0LL;
                LOBYTE(v169) = 1;
                v179 = FastIoQueryNetworkOpenInfo(
                         v76,
                         v169,
                         *(_QWORD *)(v14 + 104),
                         BugCheckParameter4,
                         RelatedDeviceObject);
                if ( v186 )
                  VfFastIoCheckState(v186);
              }
            }
          }
          if ( !v179 )
          {
            v187 = IoQueryFileInformation(
                     v76,
                     FileNetworkOpenInformation,
                     0x38u,
                     *(PVOID *)(v14 + 104),
                     &ReturnedLength);
            AccessStatus = v187;
            if ( v187 == -1073741811 || v187 == -1073741822 )
            {
              FileInformation = IopGetNetworkOpenInformation((PADAPTER_OBJECT)v76);
LABEL_413:
              AccessStatus = FileInformation;
            }
          }
        }
        else
        {
          v181 = 0LL;
          v209 = 0LL;
          if ( FastIoDispatch )
            FastIoQueryBasicInfo = (__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD))FastIoDispatch->FastIoQueryBasicInfo;
          else
            FastIoQueryBasicInfo = 0LL;
          v223 = FastIoQueryBasicInfo;
          if ( FastIoQueryBasicInfo )
          {
            v183 = (MmVerifierData & 0x10) != 0 ? (void *)VfFastIoSnapState() : 0LL;
            v220 = v183;
            LOBYTE(v181) = 1;
            v179 = FastIoQueryBasicInfo(v76, v181, *(_QWORD *)(v14 + 96), BugCheckParameter4, RelatedDeviceObject);
            v206 = v179;
            if ( v183 )
              VfFastIoCheckState(v183);
          }
          if ( v179 )
          {
            AccessStatus = BugCheckParameter4[0];
          }
          else
          {
            Pool_0 = IopVerifierExAllocatePool_0(NonPagedPoolNx, 0x28uLL);
            v209 = Pool_0;
            if ( Pool_0 )
            {
              AccessStatus = IoQueryFileInformation(v76, FileBasicInformation, 0x28u, Pool_0, &ReturnedLength);
              if ( AccessStatus >= 0 )
                memmove(*(void **)(v14 + 96), Pool_0, ReturnedLength);
              ExFreePoolWithTag(Pool_0, 0);
            }
            else
            {
              AccessStatus = -1073741670;
            }
          }
        }
      }
      *(_DWORD *)(v14 + 32) = -1096154543;
      IopCloseFile(0LL, v76, 1LL, 1LL);
      HalPutDmaAdapter((PADAPTER_OBJECT)v76);
      *(_QWORD *)(v14 + 8) = 0LL;
      result = (unsigned int)AccessStatus;
      *(_DWORD *)(v14 + 16) = AccessStatus;
      return result;
    }
    if ( (v124 & 0xFFFFFFFFFFFFFFFDuLL) != 0
      && ((v125 = v124 - 2684354563u, v124 - 2684354563u > 0x16) || (v126 = 4194817LL, !_bittest64(&v126, v125)) || v113) )
    {
      v127 = AbsoluteObjectName;
    }
    else
    {
      v127 = AbsoluteObjectName;
      if ( AbsoluteObjectName->MaximumLength < v76->FileName.Length )
      {
        v128 = (wchar_t *)ExAllocatePoolWithTag(PagedPool, v76->FileName.Length, 0x63466F49u);
        if ( !v128 )
        {
          *(_DWORD *)(v14 + 16) = -1073741670;
          return 3221225626LL;
        }
        v129 = v127->Buffer;
        if ( v129 )
          ExFreePoolWithTag(v129, 0);
        v127->Buffer = v128;
        v127->MaximumLength = v76->FileName.Length;
      }
      RtlCopyUnicodeString(v127, &v76->FileName);
      if ( BugCheckParameter4[1] - 2684354563u <= 0x16 )
      {
        v130 = 4194817LL;
        if ( _bittest64(&v130, BugCheckParameter4[1] - 2684354563u) )
          *(_QWORD *)(v14 + 40) = 0LL;
      }
    }
    if ( v76->FileName.Length )
    {
      ExFreePoolWithTag(v76->FileName.Buffer, 0);
      v76->FileName.Length = 0;
    }
    v76->DeviceObject = 0LL;
    HalPutDmaAdapter((PADAPTER_OBJECT)v76);
    *(_QWORD *)(v14 + 8) = 0LL;
    v131 = BugCheckParameter1;
    IopDecrementDeviceObjectRef(BugCheckParameter1, 0, 0LL, v132);
    if ( v212 )
      IopDereferenceVpbAndFree(v212, v133, v134, v135);
    v136 = BugCheckParameter4[1];
    if ( BugCheckParameter4[1] != 1 )
    {
      *(_QWORD *)(v14 + 40) = 0LL;
      v162 = 4194817LL;
      if ( v136 - 2684354563u <= 0x16 && _bittest64(&v162, v136 - 2684354563u) )
      {
        *(_DWORD *)(v14 + 152) |= 0x10u;
        v163 = *(_DWORD *)(v14 + 152);
        v164 = *(unsigned int *)(v131 + 72);
        if ( (unsigned int)v164 <= 0x24 && (v165 = 0x1080020084LL, _bittest64(&v165, v164)) )
          v166 = v163 | 8;
        else
          v166 = v163 & 0xFFFFFFF7;
        *(_DWORD *)(v14 + 152) = v166;
      }
      if ( *(_BYTE *)(v14 + 136) )
        KeBugCheckEx(0xF9u, v131, (ULONG_PTR)DeviceObject, (ULONG_PTR)v127, v136);
      if ( (*(_DWORD *)(*(_QWORD *)(v131 + 312) + 32LL) & 0x800) == 0 )
      {
        v167 = v224;
        *(_QWORD *)&v224->RemainingDesiredAccess = v224->OriginalDesiredAccess;
        v167->Flags &= ~0x100u;
      }
      if ( v136 - 2684354563u <= 0x16 && _bittest64(&v162, v136 - 2684354563u) && v113 )
      {
        *(_QWORD *)(v14 + 24) = P;
        *(_DWORD *)(v14 + 16) = -2147483603;
        return 2147483693LL;
      }
      else if ( v136 == 2684354585 || v136 == 2 )
      {
        v168 = a10;
        *(_QWORD *)(v168 + 8) = PsGetParentSilo(*(_QWORD *)(a10 + 8));
        return 872LL;
      }
      else
      {
        return 260LL;
      }
    }
    if ( (unsigned int)++v210 > 0x20 )
      return 3221225473LL;
    *a11 = 0LL;
    FileObject = 0LL;
    v12 = v224;
    v13 = (unsigned int *)BugCheckParameter2;
  }
  v77 = *(_QWORD **)(v14 + 144);
  memset(v77, 0, 0x110uLL);
  v76 = (PFILE_OBJECT)(v77 + 6);
  FileObject = (PFILE_OBJECT)(v77 + 6);
  *((_BYTE *)v77 + 24) = ObHeaderCookie ^ *((_BYTE *)IoFileObjectType + 40) ^ BYTE1(v77);
  *v77 = 1LL;
  if ( (a5 & 0x40) == 0 )
    *((_DWORD *)v77 + 32) |= 0x20000u;
  *(_DWORD *)&v76->Type = 14155781;
  v77[14] = *(_QWORD *)(v14 + 40);
  v75 = BugCheckParameter1;
  v76->DeviceObject = (PDEVICE_OBJECT)BugCheckParameter1;
  if ( (*(_DWORD *)(v14 + 152) & 0x20) == 0
    || !v225
    || (AttachedDevice->Flags & 0x40000) == 0
    && ((v78 = AttachedDevice->DeviceType, (unsigned int)v78 > 0x35)
     || (v79 = 0x20000100100108LL, !_bittest64(&v79, v78)))
    || (AccessStatus = IopRetrieveTransactionParameters(AttachedDevice, v14, DesiredAccess, v76), AccessStatus >= 0) )
  {
    if ( !PsIsHostSilo(*(_QWORD *)(a10 + 8))
      || (v80 = (__int64)v76->RelatedFileObject) != 0 && (v81 = IoGetSilo(v80), !PsIsHostSilo(v81)) )
    {
      v214 = 0LL;
      if ( v76->RelatedFileObject && PsIsServerSilo(*(_QWORD *)(a10 + 8)) )
        Silo = (_DWORD *)IoGetSilo(v82);
      else
        Silo = *(_DWORD **)(a10 + 8);
      if ( !PsIsHostSilo((__int64)Silo) )
      {
        AccessStatus = PsAcquireSiloHardReference(Silo);
        if ( AccessStatus < 0 )
          goto LABEL_321;
        SetSpecificExtension = IopGetSetSpecificExtension((__int64)v76, 7u, 0x10u, 1, &v214, 0LL);
        AccessStatus = SetSpecificExtension;
        if ( SetSpecificExtension < 0 )
        {
          PsReleaseSiloHardReference(Silo);
          SetSpecificExtension = AccessStatus;
        }
        v85 = v214;
        if ( SetSpecificExtension < 0 )
        {
LABEL_321:
          IoFreeIrp((PIRP)v69);
          v144 = BugCheckParameter1;
          goto LABEL_319;
        }
        *v214 = 16;
        *((_QWORD *)v85 + 1) = Silo;
        v85[1] |= 1u;
        ObfReferenceObjectWithTag(Silo, 0x70536F49u);
      }
      v75 = BugCheckParameter1;
      v71 = (__int64)v215;
    }
    goto LABEL_185;
  }
  IoFreeIrp((PIRP)v69);
  v144 = v75;
LABEL_319:
  IopDecrementDeviceObjectRef(v144, 0, 0LL, v143);
  if ( v49 )
  {
    IopDereferenceVpbAndFree(v49, v145, v146, v147);
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
