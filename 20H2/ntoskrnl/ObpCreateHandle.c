/*
 * XREFs of ObpCreateHandle @ 0x140616FD0
 * Callers:
 *     ObInsertObjectEx @ 0x140601DC0 (ObInsertObjectEx.c)
 *     ObOpenObjectByNameEx @ 0x14060CAF0 (ObOpenObjectByNameEx.c)
 *     ObOpenObjectByPointer @ 0x14067EA30 (ObOpenObjectByPointer.c)
 * Callees:
 *     SepSidInTokenSidHash @ 0x1402057EC (SepSidInTokenSidHash.c)
 *     SeAccessCheck @ 0x140209C20 (SeAccessCheck.c)
 *     RtlEqualSid @ 0x140210C40 (RtlEqualSid.c)
 *     ExReleaseRundownProtection_0 @ 0x140210D20 (ExReleaseRundownProtection_0.c)
 *     PsGetCurrentThreadProcessId @ 0x140211210 (PsGetCurrentThreadProcessId.c)
 *     KeLeaveCriticalRegionThread @ 0x14021EB00 (KeLeaveCriticalRegionThread.c)
 *     KeAbPostRelease @ 0x14021ED30 (KeAbPostRelease.c)
 *     ExAcquirePushLockExclusiveEx @ 0x140220A40 (ExAcquirePushLockExclusiveEx.c)
 *     ExAcquirePushLockSharedEx @ 0x140220C00 (ExAcquirePushLockSharedEx.c)
 *     HalPutDmaAdapter @ 0x1402211F0 (HalPutDmaAdapter.c)
 *     KeLeaveCriticalRegion @ 0x140221480 (KeLeaveCriticalRegion.c)
 *     ExReleaseResourceLite @ 0x1402214C0 (ExReleaseResourceLite.c)
 *     ExAcquireResourceSharedLite @ 0x140222030 (ExAcquireResourceSharedLite.c)
 *     SeComputeCreatorDeniedRights @ 0x140225DE0 (SeComputeCreatorDeniedRights.c)
 *     ExfReleasePushLockShared @ 0x140242A40 (ExfReleasePushLockShared.c)
 *     ExfTryToWakePushLock @ 0x140242B40 (ExfTryToWakePushLock.c)
 *     CmSiFreeMemory @ 0x140267C30 (CmSiFreeMemory.c)
 *     OBJECT_HEADER_TO_HANDLE_REVOCATION_INFO @ 0x140300270 (OBJECT_HEADER_TO_HANDLE_REVOCATION_INFO.c)
 *     ObReferenceObjectExWithTag @ 0x140302C00 (ObReferenceObjectExWithTag.c)
 *     __security_check_cookie @ 0x1403CFAF0 (__security_check_cookie.c)
 *     ZwClose @ 0x1403F8350 (ZwClose.c)
 *     ZwDuplicateObject @ 0x1403F88F0 (ZwDuplicateObject.c)
 *     KeBugCheckEx @ 0x1403FBCA0 (KeBugCheckEx.c)
 *     _guard_dispatch_icall @ 0x140405F40 (_guard_dispatch_icall.c)
 *     ObpInsertOrLocateNamedObject @ 0x1405DFEC4 (ObpInsertOrLocateNamedObject.c)
 *     ObpDecrementHandleCount @ 0x1405E04F8 (ObpDecrementHandleCount.c)
 *     ObpAllocateAndQuerySecurityDescriptorInfo @ 0x1405E2FD0 (ObpAllocateAndQuerySecurityDescriptorInfo.c)
 *     SePrivilegeObjectAuditAlarm @ 0x1405E4F60 (SePrivilegeObjectAuditAlarm.c)
 *     SepAdtPrivilegeObjectAuditAlarm @ 0x1405E4FBC (SepAdtPrivilegeObjectAuditAlarm.c)
 *     ObpPreInterceptHandleCreate @ 0x1405F0F70 (ObpPreInterceptHandleCreate.c)
 *     SeOpenObjectAuditAlarmWithTransaction @ 0x1405F44C0 (SeOpenObjectAuditAlarmWithTransaction.c)
 *     ObDereferenceSecurityDescriptor @ 0x1405F5900 (ObDereferenceSecurityDescriptor.c)
 *     RtlMapGenericMask @ 0x1406002F0 (RtlMapGenericMask.c)
 *     SePrivilegedServiceAuditAlarm @ 0x140606DA0 (SePrivilegedServiceAuditAlarm.c)
 *     SePrivilegeCheck @ 0x14060BF30 (SePrivilegeCheck.c)
 *     ObReferenceObjectByHandle @ 0x1406118C0 (ObReferenceObjectByHandle.c)
 *     ObpIncrementHandleCountEx @ 0x1406169E0 (ObpIncrementHandleCountEx.c)
 *     ExpFreeHandleTableEntry @ 0x14066735C (ExpFreeHandleTableEntry.c)
 *     ObReferenceProcessHandleTable @ 0x140678474 (ObReferenceProcessHandleTable.c)
 *     SeAppendPrivileges @ 0x1406B71B0 (SeAppendPrivileges.c)
 *     ObpCreateSymbolicLinkName @ 0x1406DA1E4 (ObpCreateSymbolicLinkName.c)
 *     ExpAllocateHandleTableEntrySlow @ 0x1406F56D4 (ExpAllocateHandleTableEntrySlow.c)
 *     ObHandleRevocationBlockAddObject @ 0x1408DF160 (ObHandleRevocationBlockAddObject.c)
 *     ObpSetObjectAuditInfo @ 0x1408DFA98 (ObpSetObjectAuditInfo.c)
 *     ObpPostInterceptHandleCreate @ 0x1408E05E8 (ObpPostInterceptHandleCreate.c)
 *     SepAdtOpenObjectAuditAlarm @ 0x140921CD8 (SepAdtOpenObjectAuditAlarm.c)
 *     SepAdtStagingEvent @ 0x140922A40 (SepAdtStagingEvent.c)
 *     SepAdtClassifyObjectIntoSubCategory @ 0x1409231C0 (SepAdtClassifyObjectIntoSubCategory.c)
 *     EtwpTraceHandle @ 0x140939EAC (EtwpTraceHandle.c)
 *     ExpSetHandleExtraInfo @ 0x14094F3A8 (ExpSetHandleExtraInfo.c)
 *     ExpUpdateDebugInfo @ 0x14094F634 (ExpUpdateDebugInfo.c)
 *     ExAllocatePoolWithTag @ 0x1409B7010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x1409B70B0 (ExFreePoolWithTag.c)
 */

__int64 __fastcall ObpCreateHandle(
        unsigned int a1,
        char *a2,
        ACCESS_MASK a3,
        struct _ACCESS_STATE *a4,
        unsigned int a5,
        unsigned int a6,
        KPROCESSOR_MODE a7,
        struct _KTHREAD *a8,
        int a9,
        PVOID *a10,
        unsigned __int64 *a11)
{
  __int16 v11; // r13
  char *v12; // r12
  struct _KTHREAD *v13; // r15
  PACCESS_STATE v14; // rsi
  unsigned int v15; // r10d
  _KPROCESS *Process; // rdx
  unsigned __int64 v17; // rdi
  NTSTATUS NamedObject; // ebx
  ULONG_PTR v19; // rbx
  __int16 v20; // ax
  KPROCESSOR_MODE AccessMode; // r12
  ULONG_PTR v22; // r13
  unsigned int *p_RemainingDesiredAccess; // rdi
  unsigned int RemainingDesiredAccess; // eax
  signed __int64 v25; // rdx
  signed __int64 v26; // rax
  signed __int64 v27; // rdi
  unsigned int v28; // edx
  unsigned __int64 v29; // rdi
  struct _KTHREAD *CurrentThread; // rax
  signed __int64 v31; // rax
  signed __int64 v32; // rtt
  signed __int64 v33; // rdx
  signed __int64 v34; // rax
  signed __int64 v35; // rdi
  unsigned int v36; // edx
  volatile signed __int64 *PoolWithTag; // rdi
  struct _KTHREAD *v38; // rax
  signed __int64 v39; // rax
  signed __int64 v40; // rtt
  char v41; // si
  ULONG_PTR v42; // r14
  struct _KTHREAD *v43; // rax
  PACCESS_STATE v44; // r14
  struct _KTHREAD *v45; // rax
  BOOLEAN v46; // r15
  ACCESS_MASK v47; // eax
  PERESOURCE *ClientToken; // rcx
  volatile signed __int64 *v49; // rdi
  signed __int64 v50; // rax
  signed __int64 v51; // rcx
  bool v52; // zf
  signed __int64 v53; // rtt
  struct _KTHREAD *v54; // r14
  volatile signed __int64 *v55; // rsi
  volatile signed __int64 *v56; // rbx
  signed __int64 v57; // rax
  bool v58; // cc
  signed __int64 v59; // rax
  volatile signed __int64 *i; // rax
  int PreviouslyGrantedAccess; // eax
  unsigned __int64 QuantumTarget; // rax
  struct _EX_RUNDOWN_REF *v63; // rdi
  struct _DMA_ADAPTER *v64; // rbx
  unsigned __int64 v65; // rcx
  __int64 v66; // r12
  signed __int64 v67; // rdx
  signed __int64 v68; // rax
  signed __int64 v69; // rbx
  unsigned int v70; // edx
  unsigned __int64 v71; // rbx
  struct _KTHREAD *v72; // rax
  signed __int64 v73; // rax
  signed __int64 v74; // rtt
  int v75; // r15d
  volatile signed __int64 *v76; // rbx
  signed __int64 v77; // rax
  signed __int64 v78; // rcx
  bool v79; // zf
  signed __int64 v80; // rtt
  struct _KTHREAD *v81; // r14
  volatile signed __int64 *v82; // rsi
  volatile signed __int64 *v83; // rdi
  signed __int64 v84; // rax
  signed __int64 v85; // rax
  int v86; // eax
  unsigned int v87; // edi
  struct _DMA_ADAPTER *v88; // r14
  struct _OBJECT_TYPE *v89; // rbx
  volatile signed __int64 *j; // rax
  unsigned int v91; // r15d
  int v92; // edx
  _DWORD *v93; // rcx
  __int64 v94; // rbx
  char v95; // al
  unsigned int Number; // eax
  unsigned int v97; // r12d
  int v98; // r13d
  unsigned int v99; // r14d
  ULONG_PTR v100; // rdi
  unsigned __int64 *v101; // rsi
  unsigned __int64 v102; // rax
  int v103; // eax
  unsigned int v104; // eax
  volatile signed __int64 *v105; // rsi
  char HandleTableEntrySlow; // r14
  _DWORD *v107; // rdi
  __int64 v108; // rdi
  __int64 v109; // r14
  unsigned __int8 v110; // cl
  unsigned __int64 *v111; // rsi
  PVOID SecurityDescriptor; // r14
  __int64 v113; // rax
  PVOID *v114; // rcx
  _QWORD *AuxData; // r8
  unsigned __int8 v116; // di
  void *v117; // r8
  BOOLEAN v118; // r13
  struct _DMA_ADAPTER *v119; // rdi
  _QWORD *v120; // r15
  __int64 v121; // r8
  UNICODE_STRING *p_ObjectTypeName; // r12
  unsigned __int16 v123; // r13
  __int64 p_ObjectName; // rsi
  unsigned __int64 CurrentThreadProcessId; // rax
  PACCESS_STATE v126; // rdi
  unsigned __int64 v127; // rax
  __int64 v128; // rdx
  unsigned int v129; // edi
  _DWORD *v130; // r9
  char *v131; // rdi
  struct _KTHREAD *v132; // rax
  char *PrimaryToken; // rsi
  struct _KTHREAD *v134; // rax
  struct _ERESOURCE *v135; // rcx
  struct _KTHREAD *v136; // rax
  unsigned __int64 v137; // rax
  PVOID v138; // rdi
  int GrantedAccess; // [rsp+40h] [rbp-E0h]
  int AccessStatus; // [rsp+48h] [rbp-D8h]
  char v142; // [rsp+A0h] [rbp-80h]
  char v143; // [rsp+A1h] [rbp-7Fh]
  ACCESS_MASK v144; // [rsp+A4h] [rbp-7Ch] BYREF
  char v145; // [rsp+A8h] [rbp-78h]
  PVOID Object; // [rsp+B0h] [rbp-70h]
  PACCESS_STATE AccessState; // [rsp+B8h] [rbp-68h]
  SIZE_T NumberOfBytes; // [rsp+C0h] [rbp-60h] BYREF
  ULONG_PTR BugCheckParameter1; // [rsp+C8h] [rbp-58h]
  NTSTATUS v150; // [rsp+D0h] [rbp-50h] BYREF
  ACCESS_MASK AccessMask; // [rsp+D8h] [rbp-48h] BYREF
  struct _KTHREAD *v152; // [rsp+E0h] [rbp-40h]
  unsigned int v153; // [rsp+E8h] [rbp-38h]
  __int64 v154; // [rsp+F0h] [rbp-30h]
  int v155; // [rsp+F8h] [rbp-28h] BYREF
  ACCESS_MASK v156; // [rsp+FCh] [rbp-24h] BYREF
  unsigned int v157; // [rsp+100h] [rbp-20h]
  char *v158; // [rsp+108h] [rbp-18h] BYREF
  ACCESS_MASK v159; // [rsp+110h] [rbp-10h] BYREF
  struct _OBJECT_TYPE *v160; // [rsp+118h] [rbp-8h]
  _DWORD v161[2]; // [rsp+120h] [rbp+0h] BYREF
  void *v162; // [rsp+128h] [rbp+8h] BYREF
  HANDLE TargetHandle; // [rsp+130h] [rbp+10h] BYREF
  __int64 v164; // [rsp+138h] [rbp+18h]
  PVOID P; // [rsp+140h] [rbp+20h] BYREF
  __int128 v166; // [rsp+148h] [rbp+28h] BYREF
  PPRIVILEGE_SET Privileges; // [rsp+158h] [rbp+38h] BYREF
  __int64 v168; // [rsp+160h] [rbp+40h]
  PVOID v169; // [rsp+168h] [rbp+48h] BYREF
  int v170[2]; // [rsp+170h] [rbp+50h] BYREF
  unsigned __int64 *v171; // [rsp+178h] [rbp+58h]
  unsigned __int64 v172; // [rsp+180h] [rbp+60h]
  unsigned __int64 v173; // [rsp+188h] [rbp+68h]
  PVOID *v174; // [rsp+190h] [rbp+70h]
  struct _PRIVILEGE_SET RequiredPrivileges; // [rsp+198h] [rbp+78h] BYREF

  v11 = a6;
  v12 = a2;
  v13 = a8;
  v14 = a4;
  v174 = a10;
  v15 = a1;
  v171 = a11;
  v166 = 0LL;
  AccessMask = a3;
  v144 = 0;
  v161[0] = 0;
  v161[1] = a9;
  Object = a2;
  AccessState = a4;
  v157 = a1;
  Process = KeGetCurrentThread()->ApcState.Process;
  BugCheckParameter1 = (ULONG_PTR)Process;
  v153 = a6;
  v152 = a8;
  v156 = 0;
  v158 = 0LL;
  v142 = 0;
  P = 0LL;
  v145 = 0;
  if ( (a6 & 0x200) != 0 )
  {
    v17 = ObpKernelHandleTable;
    BugCheckParameter1 = (ULONG_PTR)PsInitialSystemProcess;
LABEL_8:
    v154 = v17;
    goto LABEL_9;
  }
  if ( KeGetCurrentThread()->ApcStateIndex != 1 )
  {
    v17 = KeGetCurrentThread()->ApcState.Process[1].AffinityPadding[8];
    goto LABEL_8;
  }
  v154 = ObReferenceProcessHandleTable(Process);
  v17 = v154;
  if ( !v154 )
    return (unsigned int)-1073741558;
  v15 = v157;
  v145 = 1;
LABEL_9:
  v143 = v17 == ObpKernelHandleTable;
  if ( !v14 || v17 == ObpKernelHandleTable && !v14->OriginalDesiredAccess )
  {
    PreviouslyGrantedAccess = AccessMask;
    if ( (AccessMask & 0x2000000) != 0 )
    {
      PreviouslyGrantedAccess = AccessMask & 0xEDFFFFFF | 0x10000000;
      AccessMask = PreviouslyGrantedAccess;
    }
    if ( (PreviouslyGrantedAccess & 0xF0000000) != 0 )
    {
      RtlMapGenericMask(
        &AccessMask,
        (PGENERIC_MAPPING)(ObTypeIndexTable[(unsigned __int8)ObHeaderCookie ^ (unsigned __int8)*(v12 - 24) ^ (unsigned __int64)(unsigned __int8)((unsigned __int16)((_WORD)v12 - 48) >> 8)]
                         + 76));
      PreviouslyGrantedAccess = AccessMask;
    }
    goto LABEL_114;
  }
  v19 = (ULONG_PTR)(v12 - 48);
  v150 = 0;
  v20 = (_WORD)v12 - 48;
  AccessMode = 1;
  v22 = ObTypeIndexTable[(unsigned __int8)ObHeaderCookie ^ *(unsigned __int8 *)(v19 + 24) ^ (unsigned __int64)HIBYTE(v20)];
  if ( (v153 & 0x400) == 0 )
    AccessMode = a7;
  if ( v15 - 1 > 1 )
  {
    p_RemainingDesiredAccess = &v14->RemainingDesiredAccess;
    RemainingDesiredAccess = v14->RemainingDesiredAccess;
    memset(&RequiredPrivileges, 0, sizeof(RequiredPrivileges));
    if ( (RemainingDesiredAccess & 0x2000000) != 0 )
    {
      RemainingDesiredAccess = RemainingDesiredAccess & 0xEDFFFFFF | 0x10000000;
      *p_RemainingDesiredAccess = RemainingDesiredAccess;
    }
    if ( (RemainingDesiredAccess & 0xF0000000) != 0 )
    {
      RtlMapGenericMask(&v14->RemainingDesiredAccess, (PGENERIC_MAPPING)(v22 + 76));
      RemainingDesiredAccess = *p_RemainingDesiredAccess;
    }
    if ( (RemainingDesiredAccess & 0x1000000) != 0 )
    {
      RequiredPrivileges.Privilege[0].Attributes = 0;
      RequiredPrivileges.Privilege[0].Luid = SeSecurityPrivilege;
      RequiredPrivileges.PrivilegeCount = 1;
      RequiredPrivileges.Control = 1;
      if ( !SePrivilegeCheck(&RequiredPrivileges, &v14->SubjectSecurityContext, AccessMode) )
      {
        SePrivilegedServiceAuditAlarm(0LL, (__int64 *)&v14->SubjectSecurityContext, (int *)&RequiredPrivileges, 0);
        NamedObject = -1073741727;
        goto LABEL_290;
      }
      *p_RemainingDesiredAccess &= ~0x1000000u;
      v14->PreviouslyGrantedAccess |= 0x1000000u;
      SeAppendPrivileges(v14, &RequiredPrivileges);
    }
    v14->PreviouslyGrantedAccess |= *p_RemainingDesiredAccess;
    *p_RemainingDesiredAccess = 0;
    v14->PreviouslyGrantedAccess &= *(_DWORD *)(v22 + 92) | 0x1000000;
    _m_prefetchw((const void *)(v19 + 40));
    v25 = *(_QWORD *)(v19 + 40);
    if ( (v25 & 0xF) != 0 )
    {
      do
      {
        v26 = _InterlockedCompareExchange64((volatile signed __int64 *)(v19 + 40), v25 - 1, v25);
        if ( v25 == v26 )
          break;
        v25 = v26;
      }
      while ( (v26 & 0xF) != 0 );
    }
    v27 = v25;
    v28 = v25 & 0xF;
    v29 = v27 & 0xFFFFFFFFFFFFFFF0uLL;
    if ( v28 <= 1 && v29 )
    {
      if ( v28 == 1 )
      {
        if ( _InterlockedExchangeAdd64((volatile signed __int64 *)(v29 - 24), 0xFuLL) <= 0 )
          __fastfail(0xEu);
      }
      else
      {
        CurrentThread = KeGetCurrentThread();
        --CurrentThread->KernelApcDisable;
        ExAcquirePushLockSharedEx(v19 + 16, 0LL);
        v29 = *(_QWORD *)(v19 + 40) & 0xFFFFFFFFFFFFFFF0uLL;
        if ( _InterlockedExchangeAdd64((volatile signed __int64 *)(v29 - 24), 0x10uLL) <= 0 )
          __fastfail(0xEu);
        if ( _InterlockedCompareExchange64((volatile signed __int64 *)(v19 + 16), 0LL, 17LL) != 17 )
          ExfReleasePushLockShared((signed __int64 *)(v19 + 16));
        KeAbPostRelease(v19 + 16);
        KeLeaveCriticalRegion();
        v14 = AccessState;
      }
      _m_prefetchw((const void *)(v19 + 40));
      v31 = *(_QWORD *)(v19 + 40);
      while ( (v31 & 0xF) == 0 )
      {
        if ( v29 != (v31 & 0xFFFFFFFFFFFFFFF0uLL) )
          break;
        v32 = v31;
        v31 = _InterlockedCompareExchange64((volatile signed __int64 *)(v19 + 40), v31 + 15, v31);
        if ( v32 == v31 )
          goto LABEL_41;
      }
      ObDereferenceSecurityDescriptor(v29, 0xFu);
    }
LABEL_41:
    v14->PreviouslyGrantedAccess &= ~(unsigned int)SeComputeCreatorDeniedRights(
                                                     &v14->SubjectSecurityContext,
                                                     (__int64)v14,
                                                     v14->PreviouslyGrantedAccess,
                                                     v29);
    if ( v29 )
      ObDereferenceSecurityDescriptor(v29, 1u);
    goto LABEL_109;
  }
  v159 = 0;
  Privileges = 0LL;
  LODWORD(NumberOfBytes) = 0;
  v155 = 0;
  if ( *(__int64 (__fastcall **)(_QWORD *, int, DWORD *, void *, __int64, __int64 *, POOL_TYPE, GENERIC_MAPPING *))(v22 + 152) == SeDefaultObjectMethod )
  {
    _m_prefetchw((const void *)(v19 + 40));
    v33 = *(_QWORD *)(v19 + 40);
    if ( (v33 & 0xF) != 0 )
    {
      do
      {
        v34 = _InterlockedCompareExchange64((volatile signed __int64 *)(v19 + 40), v33 - 1, v33);
        if ( v33 == v34 )
          break;
        v33 = v34;
      }
      while ( (v34 & 0xF) != 0 );
    }
    v35 = v33;
    v36 = v33 & 0xF;
    PoolWithTag = (volatile signed __int64 *)(v35 & 0xFFFFFFFFFFFFFFF0uLL);
    if ( v36 <= 1 && PoolWithTag )
    {
      if ( v36 == 1 )
      {
        if ( _InterlockedExchangeAdd64(PoolWithTag - 3, 0xFuLL) <= 0 )
          __fastfail(0xEu);
      }
      else
      {
        v38 = KeGetCurrentThread();
        --v38->KernelApcDisable;
        ExAcquirePushLockSharedEx(v19 + 16, 0LL);
        PoolWithTag = (volatile signed __int64 *)(*(_QWORD *)(v19 + 40) & 0xFFFFFFFFFFFFFFF0uLL);
        if ( _InterlockedExchangeAdd64(PoolWithTag - 3, 0x10uLL) <= 0 )
          __fastfail(0xEu);
        if ( _InterlockedCompareExchange64((volatile signed __int64 *)(v19 + 16), 0LL, 17LL) != 17 )
          ExfReleasePushLockShared((signed __int64 *)(v19 + 16));
        KeAbPostRelease(v19 + 16);
        KeLeaveCriticalRegion();
      }
      _m_prefetchw((const void *)(v19 + 40));
      v39 = *(_QWORD *)(v19 + 40);
      while ( (v39 & 0xF) == 0 )
      {
        if ( PoolWithTag != (volatile signed __int64 *)(v39 & 0xFFFFFFFFFFFFFFF0uLL) )
          break;
        v40 = v39;
        v39 = _InterlockedCompareExchange64((volatile signed __int64 *)(v19 + 40), v39 + 15, v39);
        if ( v40 == v39 )
          goto LABEL_62;
      }
      ObDereferenceSecurityDescriptor((__int64)PoolWithTag, 0xFu);
    }
LABEL_62:
    v41 = 0;
    if ( !PoolWithTag && ((*(_BYTE *)(v22 + 66) & 8) != 0 || (*(_BYTE *)(v19 + 26) & 2) != 0) )
      KeBugCheckEx(0x189u, v19, v22, 1uLL, 0LL);
    NamedObject = 0;
  }
  else
  {
    v155 = 447;
    LODWORD(NumberOfBytes) = ObpDefaultSecurityDescriptorLength;
    PoolWithTag = (volatile signed __int64 *)ExAllocatePoolWithTag(
                                               PagedPool,
                                               (unsigned int)ObpDefaultSecurityDescriptorLength,
                                               0x7153624Fu);
    if ( !PoolWithTag )
    {
      NamedObject = -1073741670;
      v150 = -1073741670;
      goto LABEL_101;
    }
    v42 = v19 + 40;
    NamedObject = (*(__int64 (__fastcall **)(PVOID, __int64, int *, volatile signed __int64 *, SIZE_T *, ULONG_PTR, _DWORD, ULONG_PTR, KPROCESSOR_MODE))(v22 + 152))(
                    Object,
                    1LL,
                    &v155,
                    PoolWithTag,
                    &NumberOfBytes,
                    v19 + 40,
                    *(_DWORD *)(v22 + 100),
                    v22 + 76,
                    AccessMode);
    if ( NamedObject == -1073741789 )
    {
      ExFreePoolWithTag((PVOID)PoolWithTag, 0);
      LODWORD(ObpDefaultSecurityDescriptorLength) = NumberOfBytes;
      PoolWithTag = (volatile signed __int64 *)ExAllocatePoolWithTag(
                                                 PagedPool,
                                                 (unsigned int)NumberOfBytes,
                                                 0x7153624Fu);
      if ( !PoolWithTag )
      {
        NamedObject = -1073741670;
        v150 = -1073741670;
        goto LABEL_101;
      }
      LOBYTE(GrantedAccess) = AccessMode;
      NamedObject = (*(__int64 (__fastcall **)(PVOID, __int64, int *, volatile signed __int64 *, SIZE_T *, ULONG_PTR, _DWORD, ULONG_PTR, int))(v22 + 152))(
                      Object,
                      1LL,
                      &v155,
                      PoolWithTag,
                      &NumberOfBytes,
                      v42,
                      *(_DWORD *)(v22 + 100),
                      v22 + 76,
                      GrantedAccess);
    }
    v41 = 1;
    if ( NamedObject < 0 )
    {
      ExFreePoolWithTag((PVOID)PoolWithTag, 0);
      v150 = NamedObject;
      goto LABEL_101;
    }
  }
  if ( PoolWithTag )
  {
    v43 = KeGetCurrentThread();
    v44 = AccessState;
    --v43->KernelApcDisable;
    ExAcquireResourceSharedLite(*((PERESOURCE *)v44->SubjectSecurityContext.PrimaryToken + 6), 1u);
    if ( v44->SubjectSecurityContext.ClientToken )
    {
      v45 = KeGetCurrentThread();
      --v45->KernelApcDisable;
      ExAcquireResourceSharedLite(*((PERESOURCE *)v44->SubjectSecurityContext.ClientToken + 6), 1u);
    }
    v46 = SeAccessCheck(
            (PSECURITY_DESCRIPTOR)PoolWithTag,
            &v44->SubjectSecurityContext,
            1u,
            v44->RemainingDesiredAccess,
            v44->PreviouslyGrantedAccess,
            &Privileges,
            (PGENERIC_MAPPING)(v22 + 76),
            AccessMode,
            &v159,
            &v150);
    if ( Privileges )
    {
      SeAppendPrivileges(v44, Privileges);
      CmSiFreeMemory(Privileges);
    }
    if ( v46 )
    {
      v47 = v159;
      v44->PreviouslyGrantedAccess |= v159;
      v44->RemainingDesiredAccess &= ~(v47 | 0x2000000);
    }
    if ( AccessMode )
      SeOpenObjectAuditAlarmWithTransaction(
        (PUNICODE_STRING)(v22 + 16),
        Object,
        0LL,
        (PSECURITY_DESCRIPTOR)PoolWithTag,
        v44,
        0,
        v46,
        AccessMode,
        0LL,
        &v44->GenerateOnClose);
    ExReleaseResourceLite(*((PERESOURCE *)v44->SubjectSecurityContext.PrimaryToken + 6));
    KeLeaveCriticalRegion();
    ClientToken = (PERESOURCE *)v44->SubjectSecurityContext.ClientToken;
    if ( ClientToken )
    {
      ExReleaseResourceLite(ClientToken[6]);
      KeLeaveCriticalRegion();
    }
    if ( v41 )
    {
      ExFreePoolWithTag((PVOID)PoolWithTag, 0);
    }
    else
    {
      v49 = PoolWithTag - 4;
      _m_prefetchw((const void *)(v49 + 1));
      v50 = *((_QWORD *)v49 + 1);
      v51 = v50 - 1;
      v52 = v50 == 1;
      if ( v50 - 1 <= 0 )
      {
LABEL_91:
        if ( !v52 )
          __fastfail(0xEu);
        v54 = KeGetCurrentThread();
        v55 = (volatile signed __int64 *)((char *)&ObsSecurityDescriptorCache
                                        + 16 * (unsigned __int8)*((_DWORD *)v49 + 4));
        --v54->KernelApcDisable;
        v56 = v55 + 1;
        ExAcquirePushLockExclusiveEx((ULONG_PTR)v55, 0LL);
        v57 = _InterlockedExchangeAdd64(v49 + 1, 0xFFFFFFFFFFFFFFFFuLL);
        v58 = v57 <= 1;
        v59 = v57 - 1;
        if ( v58 )
        {
          if ( v59 )
            __fastfail(0xEu);
          for ( i = (volatile signed __int64 *)*v56; i != v49; i = (volatile signed __int64 *)*i )
            v56 = i;
          *v56 = *v49;
          if ( (_InterlockedExchangeAdd64(v55, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
            ExfTryToWakePushLock(v55);
          KeAbPostRelease((ULONG_PTR)v55);
          KeLeaveCriticalRegionThread((__int64)v54);
          ExFreePoolWithTag((PVOID)v49, 0x6353624Fu);
        }
        else
        {
          if ( (_InterlockedExchangeAdd64(v55, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
            ExfTryToWakePushLock(v55);
          KeAbPostRelease((ULONG_PTR)v55);
          KeLeaveCriticalRegionThread((__int64)v54);
        }
      }
      else
      {
        while ( 1 )
        {
          v53 = v50;
          v50 = _InterlockedCompareExchange64(v49 + 1, v51, v50);
          if ( v53 == v50 )
            break;
          v51 = v50 - 1;
          v52 = v50 == 1;
          if ( v50 - 1 <= 0 )
            goto LABEL_91;
        }
      }
    }
    v52 = v46 == 0;
    v13 = v152;
    if ( !v52 )
    {
      v14 = AccessState;
      goto LABEL_109;
    }
    NamedObject = v150;
LABEL_101:
    if ( NamedObject < 0 )
      goto LABEL_290;
    v14 = AccessState;
    v11 = v153;
    v12 = (char *)Object;
    goto LABEL_115;
  }
  v14 = AccessState;
  v150 = NamedObject;
  AccessState->PreviouslyGrantedAccess |= AccessState->RemainingDesiredAccess;
  v14->RemainingDesiredAccess = 0;
LABEL_109:
  PreviouslyGrantedAccess = v14->PreviouslyGrantedAccess;
  v11 = v153;
  v12 = (char *)Object;
LABEL_114:
  v144 = PreviouslyGrantedAccess;
LABEL_115:
  QuantumTarget = 0LL;
  v162 = 0LL;
  if ( v13 )
  {
    QuantumTarget = v13->QuantumTarget;
    v162 = (void *)QuantumTarget;
  }
  NamedObject = ObpIncrementHandleCountEx(
                  v157,
                  (__int64)&v144,
                  (struct _KPROCESS *)BugCheckParameter1,
                  (__int64)v12,
                  a7,
                  v11,
                  QuantumTarget);
  if ( NamedObject < 0 )
    goto LABEL_290;
  if ( v14 )
  {
    if ( v13 )
    {
      v63 = (struct _EX_RUNDOWN_REF *)BugCheckParameter1;
      NamedObject = ObpInsertOrLocateNamedObject(
                      BugCheckParameter1,
                      v12,
                      (__int64)&v144,
                      (__int64)v14,
                      a7,
                      v13,
                      (PADAPTER_OBJECT *)&v158);
      if ( NamedObject < 0 )
        goto LABEL_291;
      v64 = (struct _DMA_ADAPTER *)v158;
      if ( v158 == v12 )
      {
        v64 = 0LL;
        v158 = 0LL;
      }
      else
      {
        v12 = v158;
        Object = v158;
        v142 = 1;
      }
    }
    else
    {
      v64 = (struct _DMA_ADAPTER *)v158;
    }
    if ( v14->GenerateOnClose )
      LOBYTE(v11) = v11 | 4;
  }
  else
  {
    v64 = (struct _DMA_ADAPTER *)v158;
  }
  v65 = (unsigned __int8)*(v12 - 24);
  v66 = (__int64)(v12 - 48);
  v164 = v66;
  v168 = BYTE1(v66);
  v160 = (struct _OBJECT_TYPE *)ObTypeIndexTable[(unsigned __int8)ObHeaderCookie ^ BYTE1(v66) ^ v65];
  v144 &= v160->TypeInfo.ValidAccessMask | 0x1000000;
  if ( v14 )
  {
    _m_prefetchw((const void *)(v66 + 40));
    v67 = *(_QWORD *)(v66 + 40);
    if ( (v67 & 0xF) != 0 )
    {
      do
      {
        v68 = _InterlockedCompareExchange64((volatile signed __int64 *)(v66 + 40), v67 - 1, v67);
        if ( v67 == v68 )
          break;
        v67 = v68;
      }
      while ( (v68 & 0xF) != 0 );
    }
    v69 = v67;
    v70 = v67 & 0xF;
    v71 = v69 & 0xFFFFFFFFFFFFFFF0uLL;
    if ( v70 <= 1 && v71 )
    {
      if ( v70 == 1 )
      {
        if ( _InterlockedExchangeAdd64((volatile signed __int64 *)(v71 - 24), 0xFuLL) <= 0 )
          __fastfail(0xEu);
      }
      else
      {
        v72 = KeGetCurrentThread();
        --v72->KernelApcDisable;
        ExAcquirePushLockSharedEx(v66 + 16, 0LL);
        v71 = *(_QWORD *)(v66 + 40) & 0xFFFFFFFFFFFFFFF0uLL;
        if ( _InterlockedExchangeAdd64((volatile signed __int64 *)(v71 - 24), 0x10uLL) <= 0 )
          __fastfail(0xEu);
        if ( _InterlockedCompareExchange64((volatile signed __int64 *)(v66 + 16), 0LL, 17LL) != 17 )
          ExfReleasePushLockShared((signed __int64 *)(v66 + 16));
        KeAbPostRelease(v66 + 16);
        KeLeaveCriticalRegion();
      }
      _m_prefetchw((const void *)(v66 + 40));
      v73 = *(_QWORD *)(v66 + 40);
      while ( (v73 & 0xF) == 0 )
      {
        if ( v71 != (v73 & 0xFFFFFFFFFFFFFFF0uLL) )
          break;
        v74 = v73;
        v73 = _InterlockedCompareExchange64((volatile signed __int64 *)(v66 + 40), v73 + 15, v73);
        if ( v74 == v73 )
          goto LABEL_147;
      }
      ObDereferenceSecurityDescriptor(v71, 0xFu);
    }
LABEL_147:
    v75 = SeComputeCreatorDeniedRights(&v14->SubjectSecurityContext, (__int64)v14, v144, v71);
    if ( v71 )
    {
      v76 = (volatile signed __int64 *)(v71 - 32);
      _m_prefetchw((const void *)(v76 + 1));
      v77 = *((_QWORD *)v76 + 1);
      v78 = v77 - 1;
      v79 = v77 == 1;
      if ( v77 - 1 <= 0 )
      {
LABEL_151:
        if ( !v79 )
          __fastfail(0xEu);
        v81 = KeGetCurrentThread();
        v82 = (volatile signed __int64 *)((char *)&ObsSecurityDescriptorCache
                                        + 16 * (unsigned __int8)*((_DWORD *)v76 + 4));
        --v81->KernelApcDisable;
        v83 = v82 + 1;
        ExAcquirePushLockExclusiveEx((ULONG_PTR)v82, 0LL);
        v84 = _InterlockedExchangeAdd64(v76 + 1, 0xFFFFFFFFFFFFFFFFuLL);
        v58 = v84 <= 1;
        v85 = v84 - 1;
        if ( v58 )
        {
          if ( v85 )
            __fastfail(0xEu);
          for ( j = (volatile signed __int64 *)*v83; j != v76; j = (volatile signed __int64 *)*j )
            v83 = j;
          *v83 = *v76;
          if ( (_InterlockedExchangeAdd64(v82, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
            ExfTryToWakePushLock(v82);
          KeAbPostRelease((ULONG_PTR)v82);
          KeLeaveCriticalRegionThread((__int64)v81);
          ExFreePoolWithTag((PVOID)v76, 0x6353624Fu);
        }
        else
        {
          if ( (_InterlockedExchangeAdd64(v82, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
            ExfTryToWakePushLock(v82);
          KeAbPostRelease((ULONG_PTR)v82);
          KeLeaveCriticalRegionThread((__int64)v81);
        }
        v14 = AccessState;
      }
      else
      {
        while ( 1 )
        {
          v80 = v77;
          v77 = _InterlockedCompareExchange64(v76 + 1, v78, v77);
          if ( v80 == v77 )
            break;
          v78 = v77 - 1;
          v79 = v77 == 1;
          if ( v77 - 1 <= 0 )
            goto LABEL_151;
        }
      }
    }
    v64 = (struct _DMA_ADAPTER *)v158;
    v86 = ~v75 & v144;
    v13 = v152;
    v144 = v86;
    v14->PreviouslyGrantedAccess = v86;
    v161[0] = *((_DWORD *)v14->AuxData + 7);
  }
  v87 = a5;
  v88 = (struct _DMA_ADAPTER *)Object;
  if ( a5 )
    ObReferenceObjectExWithTag((ULONG_PTR)Object, a5);
  if ( v64 )
    HalPutDmaAdapter(v64);
  v89 = v160;
  if ( v13 && !v142 && v160 == ObpSymbolicLinkObjectType )
    ObpCreateSymbolicLinkName(v88);
  *((_QWORD *)&v166 + 1) = &v166;
  *(_QWORD *)&v166 = &v166;
  if ( (v89->TypeInfo.ObjectTypeFlags & 0x40) != 0 && v89->CallbackList.Flink != &v89->CallbackList )
  {
    v156 = v144;
    NamedObject = ObpPreInterceptHandleCreate((__int64)v88, v143, (int *)&v156, &v166);
    if ( NamedObject < 0 )
    {
      ObpDecrementHandleCount((_KPROCESS *)BugCheckParameter1, v66);
      if ( a5 )
      {
        if ( a5 > 1 )
          _InterlockedExchangeAdd64((volatile signed __int64 *)v66, (int)(1 - a5));
        HalPutDmaAdapter(v88);
      }
      goto LABEL_290;
    }
    if ( !v143 )
    {
      v144 = v156;
      if ( v14 )
        v14->PreviouslyGrantedAccess = v156;
    }
  }
  v91 = 0;
  v173 = 0LL;
  v92 = v144 & 0x1FFFFFF;
  if ( (v11 & 8) != 0 )
    v92 |= 0x2000000u;
  LODWORD(v173) = v92;
  v172 = ((v66 & 0xFFFFFFFFFFFFFFF1uLL) << 16) | ((unsigned __int64)(v11 & 7) << 17) | 1;
  v152 = KeGetCurrentThread();
  --v152->KernelApcDisable;
  v93 = (_DWORD *)v154;
  v94 = 0LL;
  v95 = *(_BYTE *)(v154 + 44);
  if ( (v95 & 4) != 0 )
  {
LABEL_216:
    v109 = (__int64)v152;
    goto LABEL_217;
  }
  if ( (v95 & 1) != 0 )
    Number = 0;
  else
    Number = KeGetPcr()->Prcb.Number;
  v97 = ExpFreeListCount;
  v153 = Number;
LABEL_191:
  v98 = *v93;
  v99 = Number;
  while ( 1 )
  {
    v100 = (ULONG_PTR)&v93[16 * v99 + 16];
    if ( *(_QWORD *)(v100 + 8) )
      break;
LABEL_202:
    v104 = v99 + 1;
    ++v91;
    v99 = 0;
    if ( v104 != v97 )
      v99 = v104;
    if ( v91 >= v97 )
    {
      v105 = (volatile signed __int64 *)(v93 + 14);
      HandleTableEntrySlow = 1;
      v107 = &v93[16 * v153 + 16];
      ExAcquirePushLockExclusiveEx((ULONG_PTR)(v93 + 14), 0LL);
      if ( v98 == *(_DWORD *)v154 )
        HandleTableEntrySlow = ExpAllocateHandleTableEntrySlow(v154, v107);
      if ( (_InterlockedExchangeAdd64(v105, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
        ExfTryToWakePushLock(v105);
      KeAbPostRelease((ULONG_PTR)v105);
      v91 = 0;
      if ( HandleTableEntrySlow )
      {
        Number = v153;
        v93 = (_DWORD *)v154;
        goto LABEL_191;
      }
      goto LABEL_215;
    }
  }
  ExAcquirePushLockExclusiveEx((ULONG_PTR)&v93[16 * v99 + 16], 0LL);
  v101 = *(unsigned __int64 **)(v100 + 8);
  if ( v101 )
  {
    v102 = v101[1];
    *(_QWORD *)(v100 + 8) = v102;
    if ( !v102 )
      *(_QWORD *)(v100 + 16) = 0LL;
    v103 = ++*(_DWORD *)(v100 + 24);
    if ( v103 > *(_DWORD *)(v100 + 28) )
      *(_DWORD *)(v100 + 28) = v103;
  }
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)v100, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)v100);
  KeAbPostRelease(v100);
  if ( !v101 )
  {
    v93 = (_DWORD *)v154;
    goto LABEL_202;
  }
  v94 = *(_QWORD *)(((unsigned __int64)v101 & 0xFFFFFFFFFFFFF000uLL) + 8)
      + 4 * ((__int64)((__int64)v101 - ((unsigned __int64)v101 & 0xFFFFFFFFFFFFF000uLL)) >> 4);
  if ( v161[0] || a9 )
  {
    v108 = v154;
    if ( (unsigned int)ExpSetHandleExtraInfo(v154, v94, v161) )
    {
      ExpFreeHandleTableEntry(v108, v94, v101);
      v94 = 0LL;
LABEL_215:
      v87 = a5;
      v14 = AccessState;
      v66 = v164;
      goto LABEL_216;
    }
  }
  else
  {
    v108 = v154;
  }
  v109 = (__int64)v152;
  if ( *(_QWORD *)(v108 + 96) )
    ExpUpdateDebugInfo(v108, v152, v94, 1LL);
  v66 = v164;
  v87 = a5;
  v101[1] = v173;
  *v101 = v172;
  v14 = AccessState;
LABEL_217:
  KeLeaveCriticalRegionThread(v109);
  if ( !v94 )
  {
    ObpDecrementHandleCount((_KPROCESS *)BugCheckParameter1, v66);
    if ( v87 )
    {
      if ( v87 > 1 )
        _InterlockedExchangeAdd64((volatile signed __int64 *)v66, (int)(1 - v87));
      HalPutDmaAdapter((PADAPTER_OBJECT)Object);
    }
    v110 = v143;
    NamedObject = -1073741670;
    v111 = v171;
    goto LABEL_285;
  }
  if ( v14 )
  {
    SecurityDescriptor = 0LL;
    if ( (*(_BYTE *)(v66 + 26) & 0x20) == 0
      || (v113 = ObpInfoMaskToOffset[*(_BYTE *)(v66 + 26) & 0x3F], v114 = (PVOID *)(v66 - v113), v66 == v113) )
    {
      if ( v162 )
        SecurityDescriptor = v162;
    }
    else if ( *v114 )
    {
      SecurityDescriptor = *v114;
    }
    else if ( v162 )
    {
      ObpSetObjectAuditInfo(v66, &v162, 0LL);
    }
    else if ( (POBJECT_TYPE *)ObTypeIndexTable[(unsigned __int8)ObHeaderCookie ^ (unsigned __int8)v168 ^ (unsigned __int64)*(unsigned __int8 *)(v66 + 24)] != IoFileObjectType
           || (*(_DWORD *)(*((_QWORD *)Object + 1) + 52LL) & 0x10) == 0 )
    {
      AuxData = v14->AuxData;
      v116 = 0;
      if ( AuxData && (v117 = (void *)AuxData[7]) != 0LL )
        v116 = 1;
      else
        v117 = 0LL;
      if ( (int)ObpAllocateAndQuerySecurityDescriptorInfo((__int64)Object, 0x20u, v117, &P) >= 0 )
      {
        SecurityDescriptor = P;
        ObpSetObjectAuditInfo(v66, &P, v116);
      }
    }
    v118 = 0;
    TargetHandle = 0LL;
    *(_QWORD *)v170 = v94;
    v119 = 0LL;
    v120 = v14->AuxData;
    if ( !SecurityDescriptor )
    {
      SecurityDescriptor = (PVOID)v120[7];
      if ( !SecurityDescriptor )
        SecurityDescriptor = v14->SecurityDescriptor;
    }
    if ( v14->GenerateAudit )
    {
      if ( v14->AuditPrivileges )
      {
        SepAdtPrivilegeObjectAuditAlarm(
          &SeSubsystemName,
          &v14->ObjectTypeName.Length,
          &v14->ObjectName.Length,
          v94,
          (__int64)v14->SubjectSecurityContext.ClientToken,
          (__int64)v14->SubjectSecurityContext.PrimaryToken,
          (__int64)v14->SubjectSecurityContext.ProcessAuditId,
          v14->PreviouslyGrantedAccess,
          (int *)*v120,
          1);
        goto LABEL_259;
      }
    }
    else if ( !*((_BYTE *)v120 + 216) )
    {
      goto LABEL_259;
    }
    if ( ZwDuplicateObject(
           (HANDLE)0xFFFFFFFFFFFFFFFFLL,
           (HANDLE)v94,
           (HANDLE)0xFFFFFFFFFFFFFFFFLL,
           &TargetHandle,
           0,
           0x200u,
           2u) >= 0 )
    {
      v169 = 0LL;
      ObReferenceObjectByHandle(TargetHandle, 0, 0LL, 0, &v169, 0LL);
      v119 = (struct _DMA_ADAPTER *)v169;
    }
    p_ObjectTypeName = &v14->ObjectTypeName;
    LOBYTE(v121) = 1;
    LOWORD(NumberOfBytes) = SepAdtClassifyObjectIntoSubCategory(v119, &v14->ObjectTypeName, v121, 0LL);
    v123 = NumberOfBytes;
    if ( v119 )
      HalPutDmaAdapter(v119);
    if ( TargetHandle )
    {
      ZwClose(TargetHandle);
      TargetHandle = 0LL;
    }
    p_ObjectName = (__int64)&v14->ObjectName;
    CurrentThreadProcessId = PsGetCurrentThreadProcessId();
    v126 = AccessState;
    v118 = SepAdtOpenObjectAuditAlarm(
             v123,
             (int)&SeSubsystemName,
             (int)v170,
             (int)p_ObjectTypeName,
             p_ObjectName,
             SecurityDescriptor,
             (__int64)AccessState->SubjectSecurityContext.ClientToken,
             (__int64)AccessState->SubjectSecurityContext.PrimaryToken,
             AccessState->OriginalDesiredAccess,
             AccessState->PreviouslyGrantedAccess,
             *v120,
             1,
             CurrentThreadProcessId,
             2,
             0LL,
             0,
             0LL,
             (__int64)(v120 + 4),
             (__int64)AccessState);
    v127 = PsGetCurrentThreadProcessId();
    LOBYTE(AccessStatus) = 1;
    SepAdtStagingEvent(
      (unsigned __int16)NumberOfBytes,
      v128,
      v170,
      p_ObjectTypeName,
      p_ObjectName,
      v126->SubjectSecurityContext.ClientToken,
      v126->SubjectSecurityContext.PrimaryToken,
      v126->OriginalDesiredAccess,
      v126->PreviouslyGrantedAccess,
      AccessStatus,
      v127,
      v126);
    v66 = v164;
    v14 = v126;
LABEL_259:
    v129 = v157;
    v14->GenerateOnClose = v118;
    if ( !v129 )
    {
      v130 = *(_DWORD **)v14->AuxData;
      if ( v130 )
      {
        if ( *v130 )
          SePrivilegeObjectAuditAlarm(
            v94,
            (__int64 *)&v14->SubjectSecurityContext,
            v14->PreviouslyGrantedAccess,
            (__int64)v130,
            1,
            KeGetCurrentThread()->PreviousMode);
      }
    }
    if ( P )
      ExFreePoolWithTag(P, 0);
    if ( !v129 && (v160 == (struct _OBJECT_TYPE *)CmKeyObjectType || v160 == (struct _OBJECT_TYPE *)IoFileObjectType) )
    {
      v131 = (char *)v14->SubjectSecurityContext.ClientToken;
      if ( v131 )
      {
        v132 = KeGetCurrentThread();
        PrimaryToken = (char *)v14->SubjectSecurityContext.PrimaryToken;
        --v132->KernelApcDisable;
        if ( PrimaryToken >= v131 )
        {
          ExAcquireResourceSharedLite(*((PERESOURCE *)v131 + 6), 1u);
          v136 = KeGetCurrentThread();
          --v136->KernelApcDisable;
          v135 = (struct _ERESOURCE *)*((_QWORD *)PrimaryToken + 6);
        }
        else
        {
          ExAcquireResourceSharedLite(*((PERESOURCE *)PrimaryToken + 6), 1u);
          v134 = KeGetCurrentThread();
          --v134->KernelApcDisable;
          v135 = (struct _ERESOURCE *)*((_QWORD *)v131 + 6);
        }
        ExAcquireResourceSharedLite(v135, 1u);
        if ( (*((_DWORD *)v131 + 50) & 0x4000) != 0
          && *((int *)v131 + 49) >= 2
          && !RtlEqualSid(**((PSID **)PrimaryToken + 19), **((PSID **)v131 + 19))
          && OBJECT_HEADER_TO_HANDLE_REVOCATION_INFO(v66)
          && SepSidInTokenSidHash(
               (PSID_AND_ATTRIBUTES_HASH)(PrimaryToken + 808),
               0LL,
               SeConstrainedImpersonationCapabilitySid,
               0,
               1,
               0,
               0) )
        {
          ObHandleRevocationBlockAddObject(*((_QWORD *)v131 + 27) + 128LL, Object);
        }
        ExReleaseResourceLite(*((PERESOURCE *)PrimaryToken + 6));
        KeLeaveCriticalRegion();
        ExReleaseResourceLite(*((PERESOURCE *)v131 + 6));
        KeLeaveCriticalRegion();
      }
    }
  }
  if ( a5 && v174 )
    *v174 = Object;
  v110 = v143;
  v111 = v171;
  v137 = v94 | 0xFFFFFFFF80000000uLL;
  if ( !v143 )
    v137 = v94;
  *v171 = v137;
  NamedObject = v142 != 0 ? 0x40000000 : 0;
LABEL_285:
  v138 = Object;
  if ( (__int128 *)v166 != &v166 )
    ObpPostInterceptHandleCreate((_DWORD)Object, v110, NamedObject, v144, (__int64)&v166);
  if ( (xmmword_140CFC490 & 0x40) != 0 && NamedObject >= 0 )
    EtwpTraceHandle(4384LL, *v111, v138, v160);
LABEL_290:
  v63 = (struct _EX_RUNDOWN_REF *)BugCheckParameter1;
LABEL_291:
  if ( v145 )
    ExReleaseRundownProtection_0(v63 + 139);
  return (unsigned int)NamedObject;
}
