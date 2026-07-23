/*
 * XREFs of ObpCreateHandle @ 0x14070D930
 * Callers:
 *     ObOpenObjectByNameEx @ 0x14064AAF0 (ObOpenObjectByNameEx.c)
 *     ObInsertObjectEx @ 0x14071BE00 (ObInsertObjectEx.c)
 *     ObOpenObjectByPointer @ 0x14071DC60 (ObOpenObjectByPointer.c)
 * Callees:
 *     OBJECT_HEADER_TO_HANDLE_REVOCATION_INFO @ 0x14021471C (OBJECT_HEADER_TO_HANDLE_REVOCATION_INFO.c)
 *     ObReferenceObjectExWithTag @ 0x14021B6A0 (ObReferenceObjectExWithTag.c)
 *     CmSiFreeMemory @ 0x1402253C0 (CmSiFreeMemory.c)
 *     HalPutDmaAdapter @ 0x14023FBE0 (HalPutDmaAdapter.c)
 *     ExReleaseRundownProtection @ 0x14026A490 (ExReleaseRundownProtection.c)
 *     RtlEqualSid @ 0x14026A980 (RtlEqualSid.c)
 *     SepSidInTokenSidHash @ 0x14026C7E4 (SepSidInTokenSidHash.c)
 *     PsGetCurrentThreadProcessId @ 0x14029E930 (PsGetCurrentThreadProcessId.c)
 *     SeAccessCheck @ 0x1402AB090 (SeAccessCheck.c)
 *     KeLeaveCriticalRegionThread @ 0x1402AB8C0 (KeLeaveCriticalRegionThread.c)
 *     ExfReleasePushLockShared @ 0x1402FC1C0 (ExfReleasePushLockShared.c)
 *     ExfTryToWakePushLock @ 0x1402FC2C0 (ExfTryToWakePushLock.c)
 *     KeAbPostRelease @ 0x1403539D0 (KeAbPostRelease.c)
 *     ExAcquirePushLockExclusiveEx @ 0x1403556E0 (ExAcquirePushLockExclusiveEx.c)
 *     ExAcquirePushLockSharedEx @ 0x1403558A0 (ExAcquirePushLockSharedEx.c)
 *     KeLeaveCriticalRegion @ 0x140356100 (KeLeaveCriticalRegion.c)
 *     ExReleaseResourceLite @ 0x140356140 (ExReleaseResourceLite.c)
 *     ExAcquireResourceSharedLite @ 0x140356CB0 (ExAcquireResourceSharedLite.c)
 *     SeComputeCreatorDeniedRights @ 0x14035A9E0 (SeComputeCreatorDeniedRights.c)
 *     __security_check_cookie @ 0x1403D05D0 (__security_check_cookie.c)
 *     ZwClose @ 0x1403FA760 (ZwClose.c)
 *     ZwDuplicateObject @ 0x1403FAD00 (ZwDuplicateObject.c)
 *     KeBugCheckEx @ 0x1403FE0D0 (KeBugCheckEx.c)
 *     _guard_dispatch_icall @ 0x140408790 (_guard_dispatch_icall.c)
 *     SeAppendPrivileges @ 0x1405EA7C0 (SeAppendPrivileges.c)
 *     ObpAllocateAndQuerySecurityDescriptorInfo @ 0x1405F8810 (ObpAllocateAndQuerySecurityDescriptorInfo.c)
 *     ObpCreateSymbolicLinkName @ 0x140618538 (ObpCreateSymbolicLinkName.c)
 *     SePrivilegeCheck @ 0x140649D60 (SePrivilegeCheck.c)
 *     ObDereferenceSecurityDescriptor @ 0x1406544C0 (ObDereferenceSecurityDescriptor.c)
 *     ObpInsertOrLocateNamedObject @ 0x140657720 (ObpInsertOrLocateNamedObject.c)
 *     ObpDecrementHandleCount @ 0x140663B94 (ObpDecrementHandleCount.c)
 *     ExpFreeHandleTableEntry @ 0x140683A3C (ExpFreeHandleTableEntry.c)
 *     SePrivilegedServiceAuditAlarm @ 0x14069382C (SePrivilegedServiceAuditAlarm.c)
 *     SePrivilegeObjectAuditAlarm @ 0x1406939E0 (SePrivilegeObjectAuditAlarm.c)
 *     SepAdtPrivilegeObjectAuditAlarm @ 0x140693A3C (SepAdtPrivilegeObjectAuditAlarm.c)
 *     ExpAllocateHandleTableEntrySlow @ 0x140695888 (ExpAllocateHandleTableEntrySlow.c)
 *     ObpPreInterceptHandleCreate @ 0x1406D9090 (ObpPreInterceptHandleCreate.c)
 *     SeOpenObjectAuditAlarmWithTransaction @ 0x1406DC580 (SeOpenObjectAuditAlarmWithTransaction.c)
 *     ObReferenceProcessHandleTable @ 0x1406E4F14 (ObReferenceProcessHandleTable.c)
 *     ObReferenceObjectByHandle @ 0x140707FA0 (ObReferenceObjectByHandle.c)
 *     ObpIncrementHandleCountEx @ 0x14070D340 (ObpIncrementHandleCountEx.c)
 *     RtlMapGenericMask @ 0x14071A280 (RtlMapGenericMask.c)
 *     ObHandleRevocationBlockAddObject @ 0x1408DCA80 (ObHandleRevocationBlockAddObject.c)
 *     ObpSetObjectAuditInfo @ 0x1408DD3B8 (ObpSetObjectAuditInfo.c)
 *     ObpPostInterceptHandleCreate @ 0x1408DDF08 (ObpPostInterceptHandleCreate.c)
 *     SepAdtOpenObjectAuditAlarm @ 0x14091F5F8 (SepAdtOpenObjectAuditAlarm.c)
 *     SepAdtStagingEvent @ 0x140920360 (SepAdtStagingEvent.c)
 *     SepAdtClassifyObjectIntoSubCategory @ 0x140920AE0 (SepAdtClassifyObjectIntoSubCategory.c)
 *     EtwpTraceHandle @ 0x14093784C (EtwpTraceHandle.c)
 *     ExpSetHandleExtraInfo @ 0x14094CD48 (ExpSetHandleExtraInfo.c)
 *     ExpUpdateDebugInfo @ 0x14094CFD4 (ExpUpdateDebugInfo.c)
 *     ExFreePoolWithTag @ 0x1409B5010 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x1409B5160 (ExAllocatePoolWithTag.c)
 */

__int64 __fastcall ObpCreateHandle(
        unsigned int a1,
        char *a2,
        ACCESS_MASK a3,
        struct _ACCESS_STATE *a4,
        unsigned int a5,
        unsigned int a6,
        char a7,
        struct _KTHREAD *a8,
        int a9,
        PVOID *a10,
        unsigned __int64 *a11)
{
  __int16 v11; // r13
  char *v12; // r12
  __int64 v13; // r15
  PACCESS_STATE v14; // rsi
  unsigned int v15; // r10d
  _KPROCESS *Process; // rdx
  unsigned int *v17; // rdi
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
  __int64 v60; // rdx
  __int64 v61; // r8
  __int64 v62; // r9
  volatile signed __int64 *i; // rax
  __int64 v64; // rdx
  __int64 v65; // r8
  __int64 v66; // r9
  ACCESS_MASK PreviouslyGrantedAccess; // eax
  unsigned __int64 v68; // rax
  __int64 v69; // r8
  __int64 v70; // r9
  struct _EX_RUNDOWN_REF *v71; // rdi
  struct _DMA_ADAPTER *v72; // rbx
  unsigned __int64 v73; // rcx
  __int64 v74; // r12
  signed __int64 v75; // rdx
  signed __int64 v76; // rax
  signed __int64 v77; // rbx
  unsigned int v78; // edx
  unsigned __int64 v79; // rbx
  struct _KTHREAD *v80; // rax
  signed __int64 v81; // rax
  signed __int64 v82; // rtt
  int v83; // r15d
  volatile signed __int64 *v84; // rbx
  signed __int64 v85; // rax
  signed __int64 v86; // rcx
  bool v87; // zf
  signed __int64 v88; // rtt
  struct _KTHREAD *v89; // r14
  volatile signed __int64 *v90; // rsi
  volatile signed __int64 *v91; // rdi
  signed __int64 v92; // rax
  signed __int64 v93; // rax
  __int64 v94; // rdx
  __int64 v95; // r8
  __int64 v96; // r9
  ACCESS_MASK v97; // eax
  unsigned int v98; // edi
  struct _DMA_ADAPTER *v99; // r14
  struct _OBJECT_TYPE *v100; // rbx
  volatile signed __int64 *j; // rax
  __int64 v102; // rdx
  __int64 v103; // r8
  __int64 v104; // r9
  unsigned int v105; // r15d
  __int64 v106; // rdx
  unsigned int *v107; // rcx
  __int64 v108; // rbx
  char v109; // al
  unsigned int Number; // eax
  unsigned int v111; // r12d
  unsigned int v112; // r13d
  unsigned int v113; // r14d
  ULONG_PTR v114; // rdi
  __int64 v115; // rsi
  __int64 v116; // rax
  int v117; // eax
  unsigned int v118; // eax
  volatile signed __int64 *v119; // rsi
  char HandleTableEntrySlow; // r14
  __int64 v121; // rdi
  unsigned int *v122; // rdi
  __int64 v123; // r14
  unsigned __int8 v124; // cl
  unsigned __int64 *v125; // rsi
  PVOID SecurityDescriptor; // r14
  __int64 v127; // rax
  PVOID *v128; // rcx
  _QWORD *AuxData; // r8
  unsigned __int8 v130; // di
  void *v131; // r8
  BOOLEAN v132; // r13
  struct _DMA_ADAPTER *v133; // rdi
  _QWORD *v134; // r15
  __int64 v135; // r8
  UNICODE_STRING *p_ObjectTypeName; // r12
  unsigned __int16 v137; // r13
  __int64 p_ObjectName; // rsi
  unsigned __int64 CurrentThreadProcessId; // rax
  PACCESS_STATE v140; // rdi
  unsigned __int64 v141; // rax
  __int64 v142; // rdx
  unsigned int v143; // edi
  _DWORD *v144; // r9
  char *v145; // rdi
  struct _KTHREAD *v146; // rax
  char *PrimaryToken; // rsi
  struct _KTHREAD *v148; // rax
  struct _ERESOURCE *v149; // rcx
  struct _KTHREAD *v150; // rax
  unsigned __int64 v151; // rax
  PVOID v152; // rdi
  int GrantedAccess; // [rsp+40h] [rbp-E0h]
  int AccessStatus; // [rsp+48h] [rbp-D8h]
  char v156; // [rsp+A0h] [rbp-80h]
  char v157; // [rsp+A1h] [rbp-7Fh]
  int v158; // [rsp+A4h] [rbp-7Ch] BYREF
  char v159; // [rsp+A8h] [rbp-78h]
  PVOID Object; // [rsp+B0h] [rbp-70h]
  PACCESS_STATE AccessState; // [rsp+B8h] [rbp-68h]
  SIZE_T NumberOfBytes; // [rsp+C0h] [rbp-60h] BYREF
  ULONG_PTR BugCheckParameter1; // [rsp+C8h] [rbp-58h]
  NTSTATUS v164; // [rsp+D0h] [rbp-50h] BYREF
  ACCESS_MASK AccessMask; // [rsp+D8h] [rbp-48h] BYREF
  struct _KTHREAD *v166; // [rsp+E0h] [rbp-40h]
  unsigned int v167; // [rsp+E8h] [rbp-38h]
  unsigned int *v168; // [rsp+F0h] [rbp-30h]
  int v169; // [rsp+F8h] [rbp-28h] BYREF
  int v170; // [rsp+FCh] [rbp-24h] BYREF
  unsigned int v171; // [rsp+100h] [rbp-20h]
  char *v172; // [rsp+108h] [rbp-18h] BYREF
  ACCESS_MASK v173; // [rsp+110h] [rbp-10h] BYREF
  struct _OBJECT_TYPE *v174; // [rsp+118h] [rbp-8h]
  int v175; // [rsp+120h] [rbp+0h]
  int v176; // [rsp+124h] [rbp+4h]
  void *v177; // [rsp+128h] [rbp+8h] BYREF
  HANDLE TargetHandle; // [rsp+130h] [rbp+10h] BYREF
  __int64 v179; // [rsp+138h] [rbp+18h]
  PVOID P; // [rsp+140h] [rbp+20h] BYREF
  __int128 v181; // [rsp+148h] [rbp+28h] BYREF
  PPRIVILEGE_SET Privileges; // [rsp+158h] [rbp+38h] BYREF
  __int64 v183; // [rsp+160h] [rbp+40h]
  PVOID v184; // [rsp+168h] [rbp+48h] BYREF
  int v185[2]; // [rsp+170h] [rbp+50h] BYREF
  unsigned __int64 *v186; // [rsp+178h] [rbp+58h]
  unsigned __int64 v187; // [rsp+180h] [rbp+60h]
  __int64 v188; // [rsp+188h] [rbp+68h]
  PVOID *v189; // [rsp+190h] [rbp+70h]
  struct _PRIVILEGE_SET RequiredPrivileges; // [rsp+198h] [rbp+78h] BYREF

  v11 = a6;
  v12 = a2;
  v13 = (__int64)a8;
  v14 = a4;
  v189 = a10;
  v15 = a1;
  v186 = a11;
  v181 = 0LL;
  AccessMask = a3;
  v158 = 0;
  v175 = 0;
  v176 = a9;
  Object = a2;
  AccessState = a4;
  v171 = a1;
  Process = KeGetCurrentThread()->ApcState.Process;
  BugCheckParameter1 = (ULONG_PTR)Process;
  v167 = a6;
  v166 = a8;
  v170 = 0;
  v172 = 0LL;
  v156 = 0;
  P = 0LL;
  v159 = 0;
  if ( (a6 & 0x200) != 0 )
  {
    v17 = (unsigned int *)ObpKernelHandleTable;
    BugCheckParameter1 = (ULONG_PTR)PsInitialSystemProcess;
LABEL_8:
    v168 = v17;
    goto LABEL_9;
  }
  if ( KeGetCurrentThread()->ApcStateIndex != 1 )
  {
    v17 = (unsigned int *)KeGetCurrentThread()->ApcState.Process[1].AffinityPadding[8];
    goto LABEL_8;
  }
  v168 = (unsigned int *)ObReferenceProcessHandleTable((struct _EX_RUNDOWN_REF *)Process);
  v17 = v168;
  if ( !v168 )
    return (unsigned int)-1073741558;
  v15 = v171;
  v159 = 1;
LABEL_9:
  v157 = v17 == (unsigned int *)ObpKernelHandleTable;
  if ( !v14 || v17 == (unsigned int *)ObpKernelHandleTable && !v14->OriginalDesiredAccess )
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
  v164 = 0;
  v20 = (_WORD)v12 - 48;
  AccessMode = 1;
  v22 = ObTypeIndexTable[(unsigned __int8)ObHeaderCookie ^ *(unsigned __int8 *)(v19 + 24) ^ (unsigned __int64)HIBYTE(v20)];
  if ( (v167 & 0x400) == 0 )
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
        SePrivilegedServiceAuditAlarm(0, (__int64 *)&v14->SubjectSecurityContext, (__int64)&RequiredPrivileges, 0);
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
  v173 = 0;
  Privileges = 0LL;
  LODWORD(NumberOfBytes) = 0;
  v169 = 0;
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
    v169 = 447;
    LODWORD(NumberOfBytes) = ObpDefaultSecurityDescriptorLength;
    PoolWithTag = (volatile signed __int64 *)ExAllocatePoolWithTag(
                                               PagedPool,
                                               (unsigned int)ObpDefaultSecurityDescriptorLength,
                                               0x7153624Fu);
    if ( !PoolWithTag )
    {
      NamedObject = -1073741670;
      v164 = -1073741670;
      goto LABEL_101;
    }
    v42 = v19 + 40;
    NamedObject = (*(__int64 (__fastcall **)(PVOID, __int64, int *, volatile signed __int64 *, SIZE_T *, ULONG_PTR, _DWORD, ULONG_PTR, KPROCESSOR_MODE))(v22 + 152))(
                    Object,
                    1LL,
                    &v169,
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
        v164 = -1073741670;
        goto LABEL_101;
      }
      LOBYTE(GrantedAccess) = AccessMode;
      NamedObject = (*(__int64 (__fastcall **)(PVOID, __int64, int *, volatile signed __int64 *, SIZE_T *, ULONG_PTR, _DWORD, ULONG_PTR, int))(v22 + 152))(
                      Object,
                      1LL,
                      &v169,
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
      v164 = NamedObject;
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
            &v173,
            &v164);
    if ( Privileges )
    {
      SeAppendPrivileges(v44, Privileges);
      CmSiFreeMemory(Privileges);
    }
    if ( v46 )
    {
      v47 = v173;
      v44->PreviouslyGrantedAccess |= v173;
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
          KeLeaveCriticalRegionThread((__int64)v54, v64, v65, v66);
          ExFreePoolWithTag((PVOID)v49, 0x6353624Fu);
        }
        else
        {
          if ( (_InterlockedExchangeAdd64(v55, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
            ExfTryToWakePushLock(v55);
          KeAbPostRelease((ULONG_PTR)v55);
          KeLeaveCriticalRegionThread((__int64)v54, v60, v61, v62);
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
    v13 = (__int64)v166;
    if ( !v52 )
    {
      v14 = AccessState;
      goto LABEL_109;
    }
    NamedObject = v164;
LABEL_101:
    if ( NamedObject < 0 )
      goto LABEL_290;
    v14 = AccessState;
    v11 = v167;
    v12 = (char *)Object;
    goto LABEL_115;
  }
  v14 = AccessState;
  v164 = NamedObject;
  AccessState->PreviouslyGrantedAccess |= AccessState->RemainingDesiredAccess;
  v14->RemainingDesiredAccess = 0;
LABEL_109:
  PreviouslyGrantedAccess = v14->PreviouslyGrantedAccess;
  v11 = v167;
  v12 = (char *)Object;
LABEL_114:
  v158 = PreviouslyGrantedAccess;
LABEL_115:
  v68 = 0LL;
  v177 = 0LL;
  if ( v13 )
  {
    v68 = *(_QWORD *)(v13 + 32);
    v177 = (void *)v68;
  }
  NamedObject = ObpIncrementHandleCountEx(
                  v171,
                  (__int64)&v158,
                  (struct _KPROCESS *)BugCheckParameter1,
                  (__int64)v12,
                  a7,
                  v11,
                  v68);
  if ( NamedObject < 0 )
    goto LABEL_290;
  if ( v14 )
  {
    if ( v13 )
    {
      v71 = (struct _EX_RUNDOWN_REF *)BugCheckParameter1;
      NamedObject = ObpInsertOrLocateNamedObject(
                      BugCheckParameter1,
                      v12,
                      (ACCESS_MASK *)&v158,
                      (__int64)v14,
                      a7,
                      v13,
                      (PADAPTER_OBJECT *)&v172);
      if ( NamedObject < 0 )
        goto LABEL_291;
      v72 = (struct _DMA_ADAPTER *)v172;
      if ( v172 == v12 )
      {
        v72 = 0LL;
        v172 = 0LL;
      }
      else
      {
        v12 = v172;
        Object = v172;
        v156 = 1;
      }
    }
    else
    {
      v72 = (struct _DMA_ADAPTER *)v172;
    }
    if ( v14->GenerateOnClose )
      LOBYTE(v11) = v11 | 4;
  }
  else
  {
    v72 = (struct _DMA_ADAPTER *)v172;
  }
  v73 = (unsigned __int8)*(v12 - 24);
  v74 = (__int64)(v12 - 48);
  v179 = v74;
  v183 = BYTE1(v74);
  v174 = (struct _OBJECT_TYPE *)ObTypeIndexTable[(unsigned __int8)ObHeaderCookie ^ BYTE1(v74) ^ v73];
  v158 &= v174->TypeInfo.ValidAccessMask | 0x1000000;
  if ( v14 )
  {
    _m_prefetchw((const void *)(v74 + 40));
    v75 = *(_QWORD *)(v74 + 40);
    if ( (v75 & 0xF) != 0 )
    {
      do
      {
        v76 = _InterlockedCompareExchange64((volatile signed __int64 *)(v74 + 40), v75 - 1, v75);
        if ( v75 == v76 )
          break;
        v75 = v76;
      }
      while ( (v76 & 0xF) != 0 );
    }
    v77 = v75;
    v78 = v75 & 0xF;
    v79 = v77 & 0xFFFFFFFFFFFFFFF0uLL;
    if ( v78 <= 1 && v79 )
    {
      if ( v78 == 1 )
      {
        if ( _InterlockedExchangeAdd64((volatile signed __int64 *)(v79 - 24), 0xFuLL) <= 0 )
          __fastfail(0xEu);
      }
      else
      {
        v80 = KeGetCurrentThread();
        --v80->KernelApcDisable;
        ExAcquirePushLockSharedEx(v74 + 16, 0LL);
        v79 = *(_QWORD *)(v74 + 40) & 0xFFFFFFFFFFFFFFF0uLL;
        if ( _InterlockedExchangeAdd64((volatile signed __int64 *)(v79 - 24), 0x10uLL) <= 0 )
          __fastfail(0xEu);
        if ( _InterlockedCompareExchange64((volatile signed __int64 *)(v74 + 16), 0LL, 17LL) != 17 )
          ExfReleasePushLockShared((signed __int64 *)(v74 + 16));
        KeAbPostRelease(v74 + 16);
        KeLeaveCriticalRegion();
      }
      _m_prefetchw((const void *)(v74 + 40));
      v81 = *(_QWORD *)(v74 + 40);
      while ( (v81 & 0xF) == 0 )
      {
        if ( v79 != (v81 & 0xFFFFFFFFFFFFFFF0uLL) )
          break;
        v82 = v81;
        v81 = _InterlockedCompareExchange64((volatile signed __int64 *)(v74 + 40), v81 + 15, v81);
        if ( v82 == v81 )
          goto LABEL_147;
      }
      ObDereferenceSecurityDescriptor(v79, 0xFu);
    }
LABEL_147:
    v83 = SeComputeCreatorDeniedRights(&v14->SubjectSecurityContext, (__int64)v14, v158, v79);
    if ( v79 )
    {
      v84 = (volatile signed __int64 *)(v79 - 32);
      _m_prefetchw((const void *)(v84 + 1));
      v85 = *((_QWORD *)v84 + 1);
      v86 = v85 - 1;
      v87 = v85 == 1;
      if ( v85 - 1 <= 0 )
      {
LABEL_151:
        if ( !v87 )
          __fastfail(0xEu);
        v89 = KeGetCurrentThread();
        v90 = (volatile signed __int64 *)((char *)&ObsSecurityDescriptorCache
                                        + 16 * (unsigned __int8)*((_DWORD *)v84 + 4));
        --v89->KernelApcDisable;
        v91 = v90 + 1;
        ExAcquirePushLockExclusiveEx((ULONG_PTR)v90, 0LL);
        v92 = _InterlockedExchangeAdd64(v84 + 1, 0xFFFFFFFFFFFFFFFFuLL);
        v58 = v92 <= 1;
        v93 = v92 - 1;
        if ( v58 )
        {
          if ( v93 )
            __fastfail(0xEu);
          for ( j = (volatile signed __int64 *)*v91; j != v84; j = (volatile signed __int64 *)*j )
            v91 = j;
          *v91 = *v84;
          if ( (_InterlockedExchangeAdd64(v90, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
            ExfTryToWakePushLock(v90);
          KeAbPostRelease((ULONG_PTR)v90);
          KeLeaveCriticalRegionThread((__int64)v89, v102, v103, v104);
          ExFreePoolWithTag((PVOID)v84, 0x6353624Fu);
        }
        else
        {
          if ( (_InterlockedExchangeAdd64(v90, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
            ExfTryToWakePushLock(v90);
          KeAbPostRelease((ULONG_PTR)v90);
          KeLeaveCriticalRegionThread((__int64)v89, v94, v95, v96);
        }
        v14 = AccessState;
      }
      else
      {
        while ( 1 )
        {
          v88 = v85;
          v85 = _InterlockedCompareExchange64(v84 + 1, v86, v85);
          if ( v88 == v85 )
            break;
          v86 = v85 - 1;
          v87 = v85 == 1;
          if ( v85 - 1 <= 0 )
            goto LABEL_151;
        }
      }
    }
    v72 = (struct _DMA_ADAPTER *)v172;
    v97 = ~v83 & v158;
    v13 = (__int64)v166;
    v158 = v97;
    v14->PreviouslyGrantedAccess = v97;
    v175 = *((_DWORD *)v14->AuxData + 7);
  }
  v98 = a5;
  v99 = (struct _DMA_ADAPTER *)Object;
  if ( a5 )
    ObReferenceObjectExWithTag((ULONG_PTR)Object, a5);
  if ( v72 )
    HalPutDmaAdapter(v72);
  v100 = v174;
  if ( v13 && !v156 && v174 == ObpSymbolicLinkObjectType )
    ObpCreateSymbolicLinkName((__int64)v99);
  *((_QWORD *)&v181 + 1) = &v181;
  *(_QWORD *)&v181 = &v181;
  if ( (v100->TypeInfo.ObjectTypeFlags & 0x40) != 0 && v100->CallbackList.Flink != &v100->CallbackList )
  {
    v170 = v158;
    NamedObject = ObpPreInterceptHandleCreate((__int64)v99, v157, &v170, &v181);
    if ( NamedObject < 0 )
    {
      ObpDecrementHandleCount((_KPROCESS *)BugCheckParameter1, v74);
      if ( a5 )
      {
        if ( a5 > 1 )
          _InterlockedExchangeAdd64((volatile signed __int64 *)v74, (int)(1 - a5));
        HalPutDmaAdapter(v99);
      }
      goto LABEL_290;
    }
    if ( !v157 )
    {
      v158 = v170;
      if ( v14 )
        v14->PreviouslyGrantedAccess = v170;
    }
  }
  v105 = 0;
  v188 = 0LL;
  v106 = v158 & 0x1FFFFFF;
  if ( (v11 & 8) != 0 )
    LODWORD(v106) = v106 | 0x2000000;
  LODWORD(v188) = v106;
  v187 = ((v74 & 0xFFFFFFFFFFFFFFF1uLL) << 16) | ((unsigned __int64)(v11 & 7) << 17) | 1;
  v166 = KeGetCurrentThread();
  --v166->KernelApcDisable;
  v107 = v168;
  v108 = 0LL;
  v109 = *((_BYTE *)v168 + 44);
  if ( (v109 & 4) != 0 )
  {
LABEL_216:
    v123 = (__int64)v166;
    goto LABEL_217;
  }
  if ( (v109 & 1) != 0 )
    Number = 0;
  else
    Number = KeGetPcr()->Prcb.Number;
  v111 = ExpFreeListCount;
  v167 = Number;
LABEL_191:
  v112 = *v107;
  v113 = Number;
  while ( 1 )
  {
    v114 = (ULONG_PTR)&v107[16 * v113 + 16];
    if ( *(_QWORD *)(v114 + 8) )
      break;
LABEL_202:
    v118 = v113 + 1;
    ++v105;
    v113 = 0;
    if ( v118 != v111 )
      v113 = v118;
    if ( v105 >= v111 )
    {
      v119 = (volatile signed __int64 *)(v107 + 14);
      HandleTableEntrySlow = 1;
      v121 = (__int64)&v107[16 * v167 + 16];
      ExAcquirePushLockExclusiveEx((ULONG_PTR)(v107 + 14), 0LL);
      if ( v112 == *v168 )
        HandleTableEntrySlow = ExpAllocateHandleTableEntrySlow(v168, v121);
      if ( (_InterlockedExchangeAdd64(v119, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
        ExfTryToWakePushLock(v119);
      KeAbPostRelease((ULONG_PTR)v119);
      v105 = 0;
      if ( HandleTableEntrySlow )
      {
        Number = v167;
        v107 = v168;
        goto LABEL_191;
      }
      goto LABEL_215;
    }
  }
  ExAcquirePushLockExclusiveEx((ULONG_PTR)&v107[16 * v113 + 16], 0LL);
  v115 = *(_QWORD *)(v114 + 8);
  if ( v115 )
  {
    v116 = *(_QWORD *)(v115 + 8);
    *(_QWORD *)(v114 + 8) = v116;
    if ( !v116 )
      *(_QWORD *)(v114 + 16) = 0LL;
    v117 = ++*(_DWORD *)(v114 + 24);
    if ( v117 > *(_DWORD *)(v114 + 28) )
      *(_DWORD *)(v114 + 28) = v117;
  }
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)v114, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock(v114);
  KeAbPostRelease(v114);
  if ( !v115 )
  {
    v107 = v168;
    goto LABEL_202;
  }
  v108 = *(_QWORD *)((v115 & 0xFFFFFFFFFFFFF000uLL) + 8) + 4 * ((__int64)(v115 - (v115 & 0xFFFFFFFFFFFFF000uLL)) >> 4);
  if ( v175 || a9 )
  {
    v122 = v168;
    if ( (unsigned int)ExpSetHandleExtraInfo(v168, v108) )
    {
      ExpFreeHandleTableEntry((__int64)v122, v108, v115);
      v108 = 0LL;
LABEL_215:
      v98 = a5;
      v14 = AccessState;
      v74 = v179;
      goto LABEL_216;
    }
  }
  else
  {
    v122 = v168;
  }
  v123 = (__int64)v166;
  if ( *((_QWORD *)v122 + 12) )
    ExpUpdateDebugInfo(v122, v166, v108, 1LL);
  v74 = v179;
  v98 = a5;
  *(_QWORD *)(v115 + 8) = v188;
  *(_QWORD *)v115 = v187;
  v14 = AccessState;
LABEL_217:
  KeLeaveCriticalRegionThread(v123, v106, v69, v70);
  if ( !v108 )
  {
    ObpDecrementHandleCount((_KPROCESS *)BugCheckParameter1, v74);
    if ( v98 )
    {
      if ( v98 > 1 )
        _InterlockedExchangeAdd64((volatile signed __int64 *)v74, (int)(1 - v98));
      HalPutDmaAdapter((PADAPTER_OBJECT)Object);
    }
    v124 = v157;
    NamedObject = -1073741670;
    v125 = v186;
    goto LABEL_285;
  }
  if ( v14 )
  {
    SecurityDescriptor = 0LL;
    if ( (*(_BYTE *)(v74 + 26) & 0x20) == 0
      || (v127 = ObpInfoMaskToOffset[*(_BYTE *)(v74 + 26) & 0x3F], v128 = (PVOID *)(v74 - v127), v74 == v127) )
    {
      if ( v177 )
        SecurityDescriptor = v177;
    }
    else if ( *v128 )
    {
      SecurityDescriptor = *v128;
    }
    else if ( v177 )
    {
      ObpSetObjectAuditInfo(v74, &v177, 0LL);
    }
    else if ( (POBJECT_TYPE *)ObTypeIndexTable[(unsigned __int8)ObHeaderCookie ^ (unsigned __int8)v183 ^ (unsigned __int64)*(unsigned __int8 *)(v74 + 24)] != IoFileObjectType
           || (*(_DWORD *)(*((_QWORD *)Object + 1) + 52LL) & 0x10) == 0 )
    {
      AuxData = v14->AuxData;
      v130 = 0;
      if ( AuxData && (v131 = (void *)AuxData[7]) != 0LL )
        v130 = 1;
      else
        v131 = 0LL;
      if ( (int)ObpAllocateAndQuerySecurityDescriptorInfo((__int64)Object, 0x20u, v131, &P) >= 0 )
      {
        SecurityDescriptor = P;
        ObpSetObjectAuditInfo(v74, &P, v130);
      }
    }
    v132 = 0;
    TargetHandle = 0LL;
    *(_QWORD *)v185 = v108;
    v133 = 0LL;
    v134 = v14->AuxData;
    if ( !SecurityDescriptor )
    {
      SecurityDescriptor = (PVOID)v134[7];
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
          v108,
          (__int64)v14->SubjectSecurityContext.ClientToken,
          (__int64)v14->SubjectSecurityContext.PrimaryToken,
          (__int64)v14->SubjectSecurityContext.ProcessAuditId,
          v14->PreviouslyGrantedAccess,
          (int *)*v134,
          1);
        goto LABEL_259;
      }
    }
    else if ( !*((_BYTE *)v134 + 216) )
    {
      goto LABEL_259;
    }
    if ( ZwDuplicateObject(
           (HANDLE)0xFFFFFFFFFFFFFFFFLL,
           (HANDLE)v108,
           (HANDLE)0xFFFFFFFFFFFFFFFFLL,
           &TargetHandle,
           0,
           0x200u,
           2u) >= 0 )
    {
      v184 = 0LL;
      ObReferenceObjectByHandle(TargetHandle, 0, 0LL, 0, &v184, 0LL);
      v133 = (struct _DMA_ADAPTER *)v184;
    }
    p_ObjectTypeName = &v14->ObjectTypeName;
    LOBYTE(v135) = 1;
    LOWORD(NumberOfBytes) = SepAdtClassifyObjectIntoSubCategory(v133, &v14->ObjectTypeName, v135, 0LL);
    v137 = NumberOfBytes;
    if ( v133 )
      HalPutDmaAdapter(v133);
    if ( TargetHandle )
    {
      ZwClose(TargetHandle);
      TargetHandle = 0LL;
    }
    p_ObjectName = (__int64)&v14->ObjectName;
    CurrentThreadProcessId = PsGetCurrentThreadProcessId();
    v140 = AccessState;
    v132 = SepAdtOpenObjectAuditAlarm(
             v137,
             (int)&SeSubsystemName,
             (int)v185,
             (int)p_ObjectTypeName,
             p_ObjectName,
             SecurityDescriptor,
             (__int64)AccessState->SubjectSecurityContext.ClientToken,
             (__int64)AccessState->SubjectSecurityContext.PrimaryToken,
             AccessState->OriginalDesiredAccess,
             AccessState->PreviouslyGrantedAccess,
             *v134,
             1,
             CurrentThreadProcessId,
             2,
             0LL,
             0,
             0LL,
             (__int64)(v134 + 4),
             (__int64)AccessState);
    v141 = PsGetCurrentThreadProcessId();
    LOBYTE(AccessStatus) = 1;
    SepAdtStagingEvent(
      (unsigned __int16)NumberOfBytes,
      v142,
      v185,
      p_ObjectTypeName,
      p_ObjectName,
      v140->SubjectSecurityContext.ClientToken,
      v140->SubjectSecurityContext.PrimaryToken,
      v140->OriginalDesiredAccess,
      v140->PreviouslyGrantedAccess,
      AccessStatus,
      v141,
      v140);
    v74 = v179;
    v14 = v140;
LABEL_259:
    v143 = v171;
    v14->GenerateOnClose = v132;
    if ( !v143 )
    {
      v144 = *(_DWORD **)v14->AuxData;
      if ( v144 )
      {
        if ( *v144 )
          SePrivilegeObjectAuditAlarm(
            v108,
            (__int64 *)&v14->SubjectSecurityContext,
            v14->PreviouslyGrantedAccess,
            (__int64)v144,
            1,
            KeGetCurrentThread()->PreviousMode);
      }
    }
    if ( P )
      ExFreePoolWithTag(P, 0);
    if ( !v143 && (v174 == (struct _OBJECT_TYPE *)CmKeyObjectType || v174 == (struct _OBJECT_TYPE *)IoFileObjectType) )
    {
      v145 = (char *)v14->SubjectSecurityContext.ClientToken;
      if ( v145 )
      {
        v146 = KeGetCurrentThread();
        PrimaryToken = (char *)v14->SubjectSecurityContext.PrimaryToken;
        --v146->KernelApcDisable;
        if ( PrimaryToken >= v145 )
        {
          ExAcquireResourceSharedLite(*((PERESOURCE *)v145 + 6), 1u);
          v150 = KeGetCurrentThread();
          --v150->KernelApcDisable;
          v149 = (struct _ERESOURCE *)*((_QWORD *)PrimaryToken + 6);
        }
        else
        {
          ExAcquireResourceSharedLite(*((PERESOURCE *)PrimaryToken + 6), 1u);
          v148 = KeGetCurrentThread();
          --v148->KernelApcDisable;
          v149 = (struct _ERESOURCE *)*((_QWORD *)v145 + 6);
        }
        ExAcquireResourceSharedLite(v149, 1u);
        if ( (*((_DWORD *)v145 + 50) & 0x4000) != 0
          && *((int *)v145 + 49) >= 2
          && !RtlEqualSid(**((PSID **)PrimaryToken + 19), **((PSID **)v145 + 19))
          && OBJECT_HEADER_TO_HANDLE_REVOCATION_INFO(v74)
          && SepSidInTokenSidHash(
               (PSID_AND_ATTRIBUTES_HASH)(PrimaryToken + 808),
               0LL,
               SeConstrainedImpersonationCapabilitySid,
               0,
               1,
               0,
               0) )
        {
          ObHandleRevocationBlockAddObject(*((_QWORD *)v145 + 27) + 128LL, Object);
        }
        ExReleaseResourceLite(*((PERESOURCE *)PrimaryToken + 6));
        KeLeaveCriticalRegion();
        ExReleaseResourceLite(*((PERESOURCE *)v145 + 6));
        KeLeaveCriticalRegion();
      }
    }
  }
  if ( a5 && v189 )
    *v189 = Object;
  v124 = v157;
  v125 = v186;
  v151 = v108 | 0xFFFFFFFF80000000uLL;
  if ( !v157 )
    v151 = v108;
  *v186 = v151;
  NamedObject = v156 != 0 ? 0x40000000 : 0;
LABEL_285:
  v152 = Object;
  if ( (__int128 *)v181 != &v181 )
    ObpPostInterceptHandleCreate((_DWORD)Object, v124, NamedObject, v158, (__int64)&v181);
  if ( (xmmword_140CFC490 & 0x40) != 0 && NamedObject >= 0 )
    EtwpTraceHandle(4384LL, *v125, v152, v174);
LABEL_290:
  v71 = (struct _EX_RUNDOWN_REF *)BugCheckParameter1;
LABEL_291:
  if ( v159 )
    ExReleaseRundownProtection(v71 + 139);
  return (unsigned int)NamedObject;
}
