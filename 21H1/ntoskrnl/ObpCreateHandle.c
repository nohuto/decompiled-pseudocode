/*
 * XREFs of ObpCreateHandle @ 0x14062B8A0
 * Callers:
 *     ObOpenObjectByPointer @ 0x1405E0F20 (ObOpenObjectByPointer.c)
 *     ObOpenObjectByNameEx @ 0x1405EB110 (ObOpenObjectByNameEx.c)
 *     ObInsertObjectEx @ 0x140602150 (ObInsertObjectEx.c)
 * Callees:
 *     SepSidInTokenSidHash @ 0x140204C5C (SepSidInTokenSidHash.c)
 *     RtlEqualSid @ 0x140206340 (RtlEqualSid.c)
 *     ExReleaseRundownProtection_0 @ 0x140206420 (ExReleaseRundownProtection_0.c)
 *     SeAccessCheck @ 0x140207F80 (SeAccessCheck.c)
 *     OBJECT_HEADER_TO_HANDLE_REVOCATION_INFO @ 0x14023EF84 (OBJECT_HEADER_TO_HANDLE_REVOCATION_INFO.c)
 *     KeLeaveCriticalRegionThread @ 0x1402486B0 (KeLeaveCriticalRegionThread.c)
 *     PsGetCurrentThreadProcessId @ 0x14025ECF0 (PsGetCurrentThreadProcessId.c)
 *     ExAcquirePushLockExclusiveEx @ 0x1402609E0 (ExAcquirePushLockExclusiveEx.c)
 *     ExAcquirePushLockSharedEx @ 0x140260BA0 (ExAcquirePushLockSharedEx.c)
 *     HalPutDmaAdapter @ 0x140261190 (HalPutDmaAdapter.c)
 *     KeLeaveCriticalRegion @ 0x140261420 (KeLeaveCriticalRegion.c)
 *     ExReleaseResourceLite @ 0x140261460 (ExReleaseResourceLite.c)
 *     ExAcquireResourceSharedLite @ 0x140261FD0 (ExAcquireResourceSharedLite.c)
 *     KeAbPostRelease @ 0x140263C10 (KeAbPostRelease.c)
 *     SeComputeCreatorDeniedRights @ 0x140263F30 (SeComputeCreatorDeniedRights.c)
 *     CmSiFreeMemory @ 0x1402E2170 (CmSiFreeMemory.c)
 *     ObReferenceObjectExWithTag @ 0x1402F3250 (ObReferenceObjectExWithTag.c)
 *     ExfReleasePushLockShared @ 0x14035A580 (ExfReleasePushLockShared.c)
 *     ExfTryToWakePushLock @ 0x14035A680 (ExfTryToWakePushLock.c)
 *     __security_check_cookie @ 0x1403CC020 (__security_check_cookie.c)
 *     ZwClose @ 0x1403F2510 (ZwClose.c)
 *     ZwDuplicateObject @ 0x1403F2AB0 (ZwDuplicateObject.c)
 *     KeBugCheckEx @ 0x1403F5E40 (KeBugCheckEx.c)
 *     _guard_dispatch_icall @ 0x1403FE9E0 (_guard_dispatch_icall.c)
 *     SePrivilegeObjectAuditAlarm @ 0x1405E3210 (SePrivilegeObjectAuditAlarm.c)
 *     SepAdtPrivilegeObjectAuditAlarm @ 0x1405E326C (SepAdtPrivilegeObjectAuditAlarm.c)
 *     SePrivilegedServiceAuditAlarm @ 0x1405E5240 (SePrivilegedServiceAuditAlarm.c)
 *     SePrivilegeCheck @ 0x1405E9C20 (SePrivilegeCheck.c)
 *     ExpFreeHandleTableEntry @ 0x1405F1ADC (ExpFreeHandleTableEntry.c)
 *     RtlMapGenericMask @ 0x1405FFDA0 (RtlMapGenericMask.c)
 *     ObpPreInterceptHandleCreate @ 0x14060FD90 (ObpPreInterceptHandleCreate.c)
 *     ObDereferenceSecurityDescriptor @ 0x140613D20 (ObDereferenceSecurityDescriptor.c)
 *     ObpInsertOrLocateNamedObject @ 0x140616B1C (ObpInsertOrLocateNamedObject.c)
 *     ObReferenceProcessHandleTable @ 0x14061F2E4 (ObReferenceProcessHandleTable.c)
 *     SeOpenObjectAuditAlarmWithTransaction @ 0x140622140 (SeOpenObjectAuditAlarmWithTransaction.c)
 *     ObpIncrementHandleCountEx @ 0x140629320 (ObpIncrementHandleCountEx.c)
 *     ObReferenceObjectByHandle @ 0x14062B200 (ObReferenceObjectByHandle.c)
 *     ExpAllocateHandleTableEntrySlow @ 0x140671724 (ExpAllocateHandleTableEntrySlow.c)
 *     ObpDecrementHandleCount @ 0x14068AA54 (ObpDecrementHandleCount.c)
 *     SeAppendPrivileges @ 0x1406BBD90 (SeAppendPrivileges.c)
 *     ObpAllocateAndQuerySecurityDescriptorInfo @ 0x1406C660C (ObpAllocateAndQuerySecurityDescriptorInfo.c)
 *     ObHandleRevocationBlockAddObject @ 0x1408D7FB0 (ObHandleRevocationBlockAddObject.c)
 *     ObpSetObjectAuditInfo @ 0x1408D88E8 (ObpSetObjectAuditInfo.c)
 *     ObpPostInterceptHandleCreate @ 0x1408D9438 (ObpPostInterceptHandleCreate.c)
 *     SepAdtOpenObjectAuditAlarm @ 0x14091ADA8 (SepAdtOpenObjectAuditAlarm.c)
 *     SepAdtStagingEvent @ 0x14091BB10 (SepAdtStagingEvent.c)
 *     SepAdtClassifyObjectIntoSubCategory @ 0x14091C290 (SepAdtClassifyObjectIntoSubCategory.c)
 *     EtwpTraceHandle @ 0x140932DDC (EtwpTraceHandle.c)
 *     ExpSetHandleExtraInfo @ 0x140948248 (ExpSetHandleExtraInfo.c)
 *     ExpUpdateDebugInfo @ 0x1409484D4 (ExpUpdateDebugInfo.c)
 *     ExFreePoolWithTag @ 0x1409B1010 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x1409B1030 (ExAllocatePoolWithTag.c)
 */

__int64 __fastcall ObpCreateHandle(
        unsigned int a1,
        char *a2,
        ACCESS_MASK a3,
        __int64 a4,
        unsigned int a5,
        unsigned int a6,
        KPROCESSOR_MODE a7,
        POBJECT_TYPE *a8,
        int a9,
        PVOID *a10,
        unsigned __int64 *a11)
{
  unsigned int v11; // r15d
  char *v12; // r13
  POBJECT_TYPE *v13; // r12
  unsigned int v15; // ebx
  _KPROCESS *Process; // rdx
  unsigned __int64 v17; // rax
  bool v18; // al
  ULONG_PTR v19; // rdi
  KPROCESSOR_MODE AccessMode; // r15
  ULONG_PTR v21; // r13
  unsigned int v22; // eax
  signed __int64 v23; // rdx
  signed __int64 v24; // rbx
  unsigned int v25; // edx
  unsigned __int64 v26; // rbx
  int v27; // eax
  unsigned __int64 v28; // rax
  struct _EX_RUNDOWN_REF *v29; // rsi
  int v30; // ebx
  struct _DMA_ADAPTER *v31; // rbx
  unsigned __int64 v32; // rcx
  __int64 v33; // rsi
  unsigned __int8 v34; // r12
  __int64 v35; // r13
  int v36; // edx
  signed __int64 v37; // rdx
  signed __int64 v38; // rbx
  unsigned int v39; // edx
  unsigned __int64 v40; // rbx
  int v41; // edi
  __int64 v42; // rax
  unsigned int v43; // edi
  __int64 v44; // r9
  __int64 v45; // rdx
  struct _KTHREAD *v46; // r13
  _DWORD *v47; // r8
  __int64 v48; // rbx
  char v49; // al
  unsigned int Number; // edx
  unsigned int v51; // ecx
  unsigned int v52; // r12d
  unsigned int v53; // r15d
  ULONG_PTR v54; // rdi
  __int64 v55; // rsi
  __int64 v56; // rax
  int v57; // eax
  __int64 v58; // r12
  PVOID v59; // r15
  void *v60; // rax
  PVOID v61; // r13
  __int64 v62; // r12
  char v63; // di
  struct _DMA_ADAPTER *v64; // rsi
  unsigned int v65; // edi
  _DWORD *v66; // r9
  POBJECT_TYPE *v67; // r15
  unsigned __int64 v68; // rdi
  PVOID v69; // r10
  int v70; // edx
  unsigned __int64 *v71; // rdi
  unsigned __int64 v72; // rax
  volatile signed __int64 *v74; // rbx
  signed __int64 v75; // rax
  signed __int64 v76; // rcx
  bool v77; // zf
  signed __int64 v78; // rtt
  signed __int64 v79; // rax
  unsigned int v80; // eax
  volatile signed __int64 *v81; // rsi
  _DWORD *v82; // rdi
  char HandleTableEntrySlow; // r15
  _DWORD *v84; // r12
  signed __int64 v85; // rdx
  signed __int64 v86; // rax
  signed __int64 v87; // rsi
  unsigned int v88; // edx
  char *PoolWithTag; // rsi
  char v90; // r12
  struct _KTHREAD *v91; // rax
  BOOLEAN v92; // di
  ACCESS_MASK v93; // eax
  __int64 v94; // rcx
  volatile signed __int64 *v95; // rsi
  signed __int64 v96; // rax
  signed __int64 v97; // rcx
  bool v98; // zf
  signed __int64 v99; // rtt
  struct _KTHREAD *v100; // rax
  unsigned __int64 v101; // rsi
  struct _KTHREAD *v102; // rax
  struct _ERESOURCE *v103; // rcx
  signed __int64 v104; // rax
  struct _KTHREAD *v105; // rax
  ULONG_PTR v106; // rdi
  signed __int64 v107; // rax
  signed __int64 v108; // rtt
  signed __int64 v109; // rax
  signed __int64 v110; // rtt
  struct _KTHREAD *v111; // rax
  __int64 v112; // rax
  struct _KTHREAD *v113; // rax
  struct _KTHREAD *v114; // rax
  __int64 v115; // rax
  void **v116; // rcx
  struct _KTHREAD *CurrentThread; // rax
  signed __int64 v118; // rax
  signed __int64 v119; // rtt
  struct _KTHREAD *v120; // r12
  volatile signed __int64 *v121; // rbx
  volatile signed __int64 *v122; // r15
  signed __int64 v123; // rax
  bool v124; // cc
  signed __int64 v125; // rax
  __int64 v126; // rdx
  __int64 v127; // r8
  __int64 v128; // r9
  volatile signed __int64 *i; // rax
  __int64 v130; // rdx
  __int64 v131; // r8
  __int64 v132; // r9
  struct _KTHREAD *v133; // r12
  volatile signed __int64 *v134; // rsi
  volatile signed __int64 *v135; // r15
  signed __int64 v136; // rax
  signed __int64 v137; // rax
  __int64 v138; // rdx
  __int64 v139; // r8
  __int64 v140; // r9
  volatile signed __int64 *j; // rax
  __int64 v142; // rdx
  __int64 v143; // r8
  __int64 v144; // r9
  __int64 v145; // r8
  unsigned __int8 v146; // di
  __int64 v147; // r8
  __int64 v148; // r8
  unsigned __int64 CurrentThreadProcessId; // rax
  unsigned __int64 v150; // rax
  __int64 v151; // rdx
  int GrantedAccess; // [rsp+40h] [rbp-E0h]
  int AccessStatus; // [rsp+48h] [rbp-D8h]
  unsigned __int8 v154; // [rsp+A0h] [rbp-80h]
  char v155; // [rsp+A1h] [rbp-7Fh]
  int v156; // [rsp+A4h] [rbp-7Ch] BYREF
  char v157; // [rsp+A8h] [rbp-78h]
  unsigned int v158; // [rsp+ACh] [rbp-74h]
  PVOID Object; // [rsp+B0h] [rbp-70h]
  ULONG_PTR BugCheckParameter1; // [rsp+B8h] [rbp-68h]
  unsigned int NumberOfBytes; // [rsp+C0h] [rbp-60h] BYREF
  NTSTATUS NumberOfBytes_4; // [rsp+C4h] [rbp-5Ch] BYREF
  ACCESS_MASK AccessMask; // [rsp+C8h] [rbp-58h] BYREF
  POBJECT_TYPE *v164; // [rsp+D0h] [rbp-50h]
  unsigned __int64 v165; // [rsp+D8h] [rbp-48h]
  int v166; // [rsp+E0h] [rbp-40h] BYREF
  int v167; // [rsp+E4h] [rbp-3Ch] BYREF
  unsigned int v168; // [rsp+E8h] [rbp-38h]
  PADAPTER_OBJECT DmaAdapter; // [rsp+F0h] [rbp-30h] BYREF
  char *v170; // [rsp+F8h] [rbp-28h]
  __int64 v171; // [rsp+100h] [rbp-20h]
  ACCESS_MASK v172; // [rsp+108h] [rbp-18h] BYREF
  int v173; // [rsp+10Ch] [rbp-14h]
  int v174; // [rsp+110h] [rbp-10h]
  int v175; // [rsp+114h] [rbp-Ch]
  unsigned __int64 v176; // [rsp+118h] [rbp-8h] BYREF
  HANDLE TargetHandle; // [rsp+120h] [rbp+0h] BYREF
  PVOID P; // [rsp+128h] [rbp+8h] BYREF
  __int128 v179; // [rsp+130h] [rbp+10h] BYREF
  PPRIVILEGE_SET Privileges; // [rsp+140h] [rbp+20h] BYREF
  int v181; // [rsp+148h] [rbp+28h]
  PVOID v182; // [rsp+150h] [rbp+30h] BYREF
  int v183[2]; // [rsp+158h] [rbp+38h] BYREF
  unsigned __int64 *v184; // [rsp+160h] [rbp+40h]
  unsigned __int64 v185; // [rsp+168h] [rbp+48h]
  __int64 v186; // [rsp+170h] [rbp+50h]
  PVOID *v187; // [rsp+178h] [rbp+58h]
  struct _PRIVILEGE_SET RequiredPrivileges; // [rsp+180h] [rbp+60h] BYREF

  v11 = a6;
  v12 = a2;
  v13 = a8;
  v187 = a10;
  v15 = a1;
  v184 = a11;
  v179 = 0LL;
  AccessMask = a3;
  v156 = 0;
  v174 = 0;
  v175 = a9;
  Object = a2;
  v168 = a1;
  v158 = a6;
  Process = KeGetCurrentThread()->ApcState.Process;
  BugCheckParameter1 = (ULONG_PTR)Process;
  v164 = a8;
  v167 = 0;
  DmaAdapter = 0LL;
  v155 = 0;
  P = 0LL;
  v157 = 0;
  if ( (a6 & 0x200) != 0 )
  {
    v17 = ObpKernelHandleTable;
    BugCheckParameter1 = (ULONG_PTR)PsInitialSystemProcess;
    goto LABEL_4;
  }
  if ( KeGetCurrentThread()->ApcStateIndex != 1 )
  {
    v17 = KeGetCurrentThread()->ApcState.Process[1].AffinityPadding[8];
LABEL_4:
    v165 = v17;
    goto LABEL_5;
  }
  v17 = ObReferenceProcessHandleTable((struct _EX_RUNDOWN_REF *)Process);
  v165 = v17;
  if ( !v17 )
    return (unsigned int)-1073741558;
  v157 = 1;
LABEL_5:
  v18 = v17 == ObpKernelHandleTable;
  v154 = v18;
  if ( !a4 || v18 && !*(_DWORD *)(a4 + 24) )
  {
    v27 = AccessMask;
    if ( (AccessMask & 0x2000000) != 0 )
    {
      v27 = AccessMask & 0xEDFFFFFF | 0x10000000;
      AccessMask = v27;
    }
    if ( (v27 & 0xF0000000) != 0 )
    {
      RtlMapGenericMask(
        &AccessMask,
        (PGENERIC_MAPPING)(ObTypeIndexTable[(unsigned __int8)ObHeaderCookie ^ (unsigned __int8)*(v12 - 24) ^ (unsigned __int64)(unsigned __int8)((unsigned __int16)((_WORD)v12 - 48) >> 8)]
                         + 76));
      v27 = AccessMask;
    }
    goto LABEL_21;
  }
  v19 = (ULONG_PTR)(v12 - 48);
  NumberOfBytes_4 = 0;
  AccessMode = 1;
  v21 = ObTypeIndexTable[(unsigned __int8)ObHeaderCookie ^ (unsigned __int8)*(v12 - 24) ^ (unsigned __int64)(unsigned __int8)((unsigned __int16)((_WORD)v12 - 48) >> 8)];
  if ( (a6 & 0x400) == 0 )
    AccessMode = a7;
  if ( v15 - 1 > 1 )
  {
    v22 = *(_DWORD *)(a4 + 16);
    memset(&RequiredPrivileges, 0, sizeof(RequiredPrivileges));
    if ( (v22 & 0x2000000) != 0 )
    {
      v22 = v22 & 0xEDFFFFFF | 0x10000000;
      *(_DWORD *)(a4 + 16) = v22;
    }
    if ( (v22 & 0xF0000000) != 0 )
    {
      RtlMapGenericMask((PACCESS_MASK)(a4 + 16), (PGENERIC_MAPPING)(v21 + 76));
      v22 = *(_DWORD *)(a4 + 16);
    }
    if ( (v22 & 0x1000000) != 0 )
    {
      RequiredPrivileges.Privilege[0].Attributes = 0;
      RequiredPrivileges.Privilege[0].Luid = SeSecurityPrivilege;
      RequiredPrivileges.PrivilegeCount = 1;
      RequiredPrivileges.Control = 1;
      if ( !SePrivilegeCheck(&RequiredPrivileges, (PSECURITY_SUBJECT_CONTEXT)(a4 + 32), AccessMode) )
      {
        SePrivilegedServiceAuditAlarm(0LL, (__int64 *)(a4 + 32), (int *)&RequiredPrivileges, 0);
        v30 = -1073741727;
        goto LABEL_91;
      }
      *(_DWORD *)(a4 + 16) &= ~0x1000000u;
      *(_DWORD *)(a4 + 20) |= 0x1000000u;
      SeAppendPrivileges((PACCESS_STATE)a4, &RequiredPrivileges);
    }
    *(_DWORD *)(a4 + 20) |= *(_DWORD *)(a4 + 16);
    *(_DWORD *)(a4 + 16) = 0;
    *(_DWORD *)(a4 + 20) &= *(_DWORD *)(v21 + 92) | 0x1000000;
    _m_prefetchw((const void *)(v19 + 40));
    v23 = *(_QWORD *)(v19 + 40);
    if ( (v23 & 0xF) != 0 )
    {
      do
      {
        v104 = _InterlockedCompareExchange64((volatile signed __int64 *)(v19 + 40), v23 - 1, v23);
        if ( v23 == v104 )
          break;
        v23 = v104;
      }
      while ( (v104 & 0xF) != 0 );
    }
    v24 = v23;
    v25 = v23 & 0xF;
    v26 = v24 & 0xFFFFFFFFFFFFFFF0uLL;
    if ( v25 <= 1 && v26 )
    {
      if ( v25 == 1 )
      {
        if ( _InterlockedExchangeAdd64((volatile signed __int64 *)(v26 - 24), 0xFuLL) <= 0 )
          __fastfail(0xEu);
      }
      else
      {
        CurrentThread = KeGetCurrentThread();
        --CurrentThread->KernelApcDisable;
        ExAcquirePushLockSharedEx(v19 + 16, 0LL);
        v26 = *(_QWORD *)(v19 + 40) & 0xFFFFFFFFFFFFFFF0uLL;
        if ( _InterlockedExchangeAdd64((volatile signed __int64 *)(v26 - 24), 0x10uLL) <= 0 )
          __fastfail(0xEu);
        if ( _InterlockedCompareExchange64((volatile signed __int64 *)(v19 + 16), 0LL, 17LL) != 17 )
          ExfReleasePushLockShared((signed __int64 *)(v19 + 16));
        KeAbPostRelease(v19 + 16);
        KeLeaveCriticalRegion();
      }
      _m_prefetchw((const void *)(v19 + 40));
      v118 = *(_QWORD *)(v19 + 40);
      while ( (v118 & 0xF) == 0 )
      {
        if ( v26 != (v118 & 0xFFFFFFFFFFFFFFF0uLL) )
          break;
        v119 = v118;
        v118 = _InterlockedCompareExchange64((volatile signed __int64 *)(v19 + 40), v118 + 15, v118);
        if ( v119 == v118 )
          goto LABEL_18;
      }
      ObDereferenceSecurityDescriptor(v26, 0xFu);
    }
LABEL_18:
    *(_DWORD *)(a4 + 20) &= ~(unsigned int)SeComputeCreatorDeniedRights(
                                             (PSECURITY_SUBJECT_CONTEXT)(a4 + 32),
                                             a4,
                                             *(_DWORD *)(a4 + 20),
                                             v26);
    if ( v26 )
      ObDereferenceSecurityDescriptor(v26, 1u);
    goto LABEL_20;
  }
  v172 = 0;
  Privileges = 0LL;
  NumberOfBytes = 0;
  v166 = 0;
  if ( *(__int64 (__fastcall **)(_QWORD *, int, DWORD *, void *, __int64, __int64 *, POOL_TYPE, GENERIC_MAPPING *))(v21 + 152) != SeDefaultObjectMethod )
  {
    v166 = 447;
    NumberOfBytes = ObpDefaultSecurityDescriptorLength;
    PoolWithTag = (char *)ExAllocatePoolWithTag(
                            PagedPool,
                            (unsigned int)ObpDefaultSecurityDescriptorLength,
                            0x7153624Fu);
    if ( PoolWithTag )
    {
      v106 = v19 + 40;
      v30 = (*(__int64 (__fastcall **)(PVOID, __int64, int *, char *, unsigned int *, ULONG_PTR, _DWORD, ULONG_PTR, KPROCESSOR_MODE))(v21 + 152))(
              Object,
              1LL,
              &v166,
              PoolWithTag,
              &NumberOfBytes,
              v106,
              *(_DWORD *)(v21 + 100),
              v21 + 76,
              AccessMode);
      if ( v30 == -1073741789 )
      {
        ExFreePoolWithTag(PoolWithTag, 0);
        LODWORD(ObpDefaultSecurityDescriptorLength) = NumberOfBytes;
        PoolWithTag = (char *)ExAllocatePoolWithTag(PagedPool, NumberOfBytes, 0x7153624Fu);
        if ( !PoolWithTag )
        {
          v30 = -1073741670;
          goto LABEL_221;
        }
        LOBYTE(GrantedAccess) = AccessMode;
        v30 = (*(__int64 (__fastcall **)(PVOID, __int64, int *, char *, unsigned int *, ULONG_PTR, _DWORD, ULONG_PTR, int))(v21 + 152))(
                Object,
                1LL,
                &v166,
                PoolWithTag,
                &NumberOfBytes,
                v106,
                *(_DWORD *)(v21 + 100),
                v21 + 76,
                GrantedAccess);
      }
      v90 = 1;
      if ( v30 >= 0 )
        goto LABEL_120;
      ExFreePoolWithTag(PoolWithTag, 0);
    }
    else
    {
      v30 = -1073741670;
    }
LABEL_221:
    NumberOfBytes_4 = v30;
    goto LABEL_191;
  }
  _m_prefetchw((const void *)(v19 + 40));
  v85 = *(_QWORD *)(v19 + 40);
  if ( (v85 & 0xF) != 0 )
  {
    do
    {
      v86 = _InterlockedCompareExchange64((volatile signed __int64 *)(v19 + 40), v85 - 1, v85);
      if ( v85 == v86 )
        break;
      v85 = v86;
    }
    while ( (v86 & 0xF) != 0 );
  }
  v87 = v85;
  v88 = v85 & 0xF;
  PoolWithTag = (char *)(v87 & 0xFFFFFFFFFFFFFFF0uLL);
  if ( v88 <= 1 && PoolWithTag )
  {
    if ( v88 == 1 )
    {
      if ( _InterlockedExchangeAdd64((volatile signed __int64 *)PoolWithTag - 3, 0xFuLL) <= 0 )
        __fastfail(0xEu);
    }
    else
    {
      v113 = KeGetCurrentThread();
      --v113->KernelApcDisable;
      ExAcquirePushLockSharedEx(v19 + 16, 0LL);
      PoolWithTag = (char *)(*(_QWORD *)(v19 + 40) & 0xFFFFFFFFFFFFFFF0uLL);
      if ( _InterlockedExchangeAdd64((volatile signed __int64 *)PoolWithTag - 3, 0x10uLL) <= 0 )
        __fastfail(0xEu);
      if ( _InterlockedCompareExchange64((volatile signed __int64 *)(v19 + 16), 0LL, 17LL) != 17 )
        ExfReleasePushLockShared((signed __int64 *)(v19 + 16));
      KeAbPostRelease(v19 + 16);
      KeLeaveCriticalRegion();
    }
    _m_prefetchw((const void *)(v19 + 40));
    v107 = *(_QWORD *)(v19 + 40);
    while ( (v107 & 0xF) == 0 )
    {
      if ( PoolWithTag != (char *)(v107 & 0xFFFFFFFFFFFFFFF0uLL) )
        break;
      v108 = v107;
      v107 = _InterlockedCompareExchange64((volatile signed __int64 *)(v19 + 40), v107 + 15, v107);
      if ( v108 == v107 )
        goto LABEL_118;
    }
    ObDereferenceSecurityDescriptor((__int64)PoolWithTag, 0xFu);
  }
LABEL_118:
  v90 = 0;
  if ( !PoolWithTag && ((*(_BYTE *)(v21 + 66) & 8) != 0 || (*(_BYTE *)(v19 + 26) & 2) != 0) )
    KeBugCheckEx(0x189u, v19, v21, 1uLL, 0LL);
  v30 = 0;
LABEL_120:
  if ( !PoolWithTag )
  {
    *(_DWORD *)(a4 + 20) |= *(_DWORD *)(a4 + 16);
    v13 = v164;
    *(_DWORD *)(a4 + 16) = 0;
    NumberOfBytes_4 = v30;
    goto LABEL_20;
  }
  v91 = KeGetCurrentThread();
  --v91->KernelApcDisable;
  ExAcquireResourceSharedLite(*(PERESOURCE *)(*(_QWORD *)(a4 + 48) + 48LL), 1u);
  if ( *(_QWORD *)(a4 + 32) )
  {
    v111 = KeGetCurrentThread();
    --v111->KernelApcDisable;
    ExAcquireResourceSharedLite(*(PERESOURCE *)(*(_QWORD *)(a4 + 32) + 48LL), 1u);
  }
  v92 = SeAccessCheck(
          PoolWithTag,
          (PSECURITY_SUBJECT_CONTEXT)(a4 + 32),
          1u,
          *(_DWORD *)(a4 + 16),
          *(_DWORD *)(a4 + 20),
          &Privileges,
          (PGENERIC_MAPPING)(v21 + 76),
          AccessMode,
          &v172,
          &NumberOfBytes_4);
  if ( Privileges )
  {
    SeAppendPrivileges((PACCESS_STATE)a4, Privileges);
    CmSiFreeMemory(Privileges);
  }
  if ( v92 )
  {
    v93 = v172;
    *(_DWORD *)(a4 + 20) |= v172;
    *(_DWORD *)(a4 + 16) &= ~(v93 | 0x2000000);
  }
  if ( AccessMode )
    SeOpenObjectAuditAlarmWithTransaction(
      (PUNICODE_STRING)(v21 + 16),
      Object,
      0LL,
      PoolWithTag,
      (PACCESS_STATE)a4,
      0,
      v92,
      AccessMode,
      0LL,
      (PBOOLEAN)(a4 + 10));
  ExReleaseResourceLite(*(PERESOURCE *)(*(_QWORD *)(a4 + 48) + 48LL));
  KeLeaveCriticalRegion();
  v94 = *(_QWORD *)(a4 + 32);
  if ( v94 )
  {
    ExReleaseResourceLite(*(PERESOURCE *)(v94 + 48));
    KeLeaveCriticalRegion();
  }
  if ( v90 )
  {
    ExFreePoolWithTag(PoolWithTag, 0);
  }
  else
  {
    v95 = (volatile signed __int64 *)(PoolWithTag - 32);
    _m_prefetchw((const void *)(v95 + 1));
    v96 = *((_QWORD *)v95 + 1);
    v97 = v96 - 1;
    v98 = v96 == 1;
    if ( v96 - 1 <= 0 )
    {
LABEL_246:
      if ( !v98 )
        __fastfail(0xEu);
      v120 = KeGetCurrentThread();
      v121 = (volatile signed __int64 *)((char *)&ObsSecurityDescriptorCache + 16
                                                                             * (unsigned __int8)*((_DWORD *)v95 + 4));
      --v120->KernelApcDisable;
      v122 = v121 + 1;
      ExAcquirePushLockExclusiveEx((ULONG_PTR)v121, 0LL);
      v123 = _InterlockedExchangeAdd64(v95 + 1, 0xFFFFFFFFFFFFFFFFuLL);
      v124 = v123 <= 1;
      v125 = v123 - 1;
      if ( v124 )
      {
        if ( v125 )
          __fastfail(0xEu);
        for ( i = (volatile signed __int64 *)*v122; i != v95; i = (volatile signed __int64 *)*i )
          v122 = i;
        *v122 = *v95;
        if ( (_InterlockedExchangeAdd64(v121, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
          ExfTryToWakePushLock(v121);
        KeAbPostRelease((ULONG_PTR)v121);
        KeLeaveCriticalRegionThread((__int64)v120, v130, v131, v132);
        ExFreePoolWithTag((PVOID)v95, 0x6353624Fu);
      }
      else
      {
        if ( (_InterlockedExchangeAdd64(v121, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
          ExfTryToWakePushLock(v121);
        KeAbPostRelease((ULONG_PTR)v121);
        KeLeaveCriticalRegionThread((__int64)v120, v126, v127, v128);
      }
    }
    else
    {
      while ( 1 )
      {
        v99 = v96;
        v96 = _InterlockedCompareExchange64(v95 + 1, v97, v96);
        if ( v99 == v96 )
          break;
        v97 = v96 - 1;
        v98 = v96 == 1;
        if ( v96 - 1 <= 0 )
          goto LABEL_246;
      }
    }
  }
  if ( !v92 )
  {
    v30 = NumberOfBytes_4;
LABEL_191:
    if ( v30 < 0 )
      goto LABEL_91;
    v13 = v164;
    v11 = v158;
    v15 = v168;
    v12 = (char *)Object;
    goto LABEL_22;
  }
  v13 = v164;
LABEL_20:
  v27 = *(_DWORD *)(a4 + 20);
  v11 = v158;
  v15 = v168;
  v12 = (char *)Object;
LABEL_21:
  v156 = v27;
LABEL_22:
  v28 = 0LL;
  v176 = 0LL;
  if ( v13 )
  {
    v28 = (unsigned __int64)v13[4];
    v176 = v28;
  }
  v29 = (struct _EX_RUNDOWN_REF *)BugCheckParameter1;
  v30 = ObpIncrementHandleCountEx(
          v15,
          (__int64)&v156,
          (struct _KPROCESS *)BugCheckParameter1,
          (__int64)v12,
          a7,
          v11,
          v28);
  if ( v30 < 0 )
    goto LABEL_92;
  if ( a4 )
  {
    if ( v13 )
    {
      v30 = ObpInsertOrLocateNamedObject((ULONG_PTR)v29, v12, (__int64)&v156, a4, a7, v13, &DmaAdapter);
      if ( v30 < 0 )
        goto LABEL_92;
      v31 = DmaAdapter;
      if ( DmaAdapter == (PADAPTER_OBJECT)v12 )
      {
        v31 = 0LL;
        DmaAdapter = 0LL;
      }
      else
      {
        v12 = (char *)DmaAdapter;
        Object = DmaAdapter;
        v155 = 1;
      }
    }
    else
    {
      v31 = DmaAdapter;
    }
    if ( *(_BYTE *)(a4 + 10) )
    {
      v11 |= 4u;
      v158 = v11;
    }
  }
  else
  {
    v31 = DmaAdapter;
  }
  v32 = (unsigned __int8)*(v12 - 24);
  v33 = (__int64)(v12 - 48);
  v170 = v12 - 48;
  v34 = (unsigned __int16)((_WORD)v12 - 48) >> 8;
  v171 = v34;
  v35 = ObTypeIndexTable[(unsigned __int8)ObHeaderCookie ^ v34 ^ v32];
  v164 = (POBJECT_TYPE *)v35;
  v36 = (*(_DWORD *)(v35 + 92) | 0x1000000) & v156;
  v156 = v36;
  if ( a4 )
  {
    _m_prefetchw((const void *)(v33 + 40));
    v37 = *(_QWORD *)(v33 + 40);
    if ( (v37 & 0xF) != 0 )
    {
      do
      {
        v79 = _InterlockedCompareExchange64((volatile signed __int64 *)(v33 + 40), v37 - 1, v37);
        if ( v37 == v79 )
          break;
        v37 = v79;
      }
      while ( (v79 & 0xF) != 0 );
    }
    v38 = v37;
    v39 = v37 & 0xF;
    v40 = v38 & 0xFFFFFFFFFFFFFFF0uLL;
    if ( v39 <= 1 && v40 )
    {
      if ( v39 == 1 )
      {
        if ( _InterlockedExchangeAdd64((volatile signed __int64 *)(v40 - 24), 0xFuLL) <= 0 )
          __fastfail(0xEu);
      }
      else
      {
        v114 = KeGetCurrentThread();
        --v114->KernelApcDisable;
        ExAcquirePushLockSharedEx(v33 + 16, 0LL);
        v40 = *(_QWORD *)(v33 + 40) & 0xFFFFFFFFFFFFFFF0uLL;
        if ( _InterlockedExchangeAdd64((volatile signed __int64 *)(v40 - 24), 0x10uLL) <= 0 )
          __fastfail(0xEu);
        if ( _InterlockedCompareExchange64((volatile signed __int64 *)(v33 + 16), 0LL, 17LL) != 17 )
          ExfReleasePushLockShared((signed __int64 *)(v33 + 16));
        KeAbPostRelease(v33 + 16);
        KeLeaveCriticalRegion();
      }
      _m_prefetchw((const void *)(v33 + 40));
      v109 = *(_QWORD *)(v33 + 40);
      while ( (v109 & 0xF) == 0 )
      {
        if ( v40 != (v109 & 0xFFFFFFFFFFFFFFF0uLL) )
          break;
        v110 = v109;
        v109 = _InterlockedCompareExchange64((volatile signed __int64 *)(v33 + 40), v109 + 15, v109);
        if ( v110 == v109 )
          goto LABEL_34;
      }
      ObDereferenceSecurityDescriptor(v40, 0xFu);
    }
LABEL_34:
    v41 = SeComputeCreatorDeniedRights((PSECURITY_SUBJECT_CONTEXT)(a4 + 32), a4, v156, v40);
    if ( v40 )
    {
      v74 = (volatile signed __int64 *)(v40 - 32);
      _m_prefetchw((const void *)(v74 + 1));
      v75 = *((_QWORD *)v74 + 1);
      v76 = v75 - 1;
      v77 = v75 == 1;
      if ( v75 - 1 <= 0 )
      {
LABEL_261:
        if ( !v77 )
          __fastfail(0xEu);
        v133 = KeGetCurrentThread();
        v134 = (volatile signed __int64 *)((char *)&ObsSecurityDescriptorCache
                                         + 16 * (unsigned __int8)*((_DWORD *)v74 + 4));
        --v133->KernelApcDisable;
        v135 = v134 + 1;
        ExAcquirePushLockExclusiveEx((ULONG_PTR)v134, 0LL);
        v136 = _InterlockedExchangeAdd64(v74 + 1, 0xFFFFFFFFFFFFFFFFuLL);
        v124 = v136 <= 1;
        v137 = v136 - 1;
        if ( v124 )
        {
          if ( v137 )
            __fastfail(0xEu);
          for ( j = (volatile signed __int64 *)*v135; j != v74; j = (volatile signed __int64 *)*j )
            v135 = j;
          *v135 = *v74;
          if ( (_InterlockedExchangeAdd64(v134, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
            ExfTryToWakePushLock(v134);
          KeAbPostRelease((ULONG_PTR)v134);
          KeLeaveCriticalRegionThread((__int64)v133, v142, v143, v144);
          ExFreePoolWithTag((PVOID)v74, 0x6353624Fu);
        }
        else
        {
          if ( (_InterlockedExchangeAdd64(v134, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
            ExfTryToWakePushLock(v134);
          KeAbPostRelease((ULONG_PTR)v134);
          KeLeaveCriticalRegionThread((__int64)v133, v138, v139, v140);
        }
        v34 = v171;
        LOBYTE(v11) = v158;
        v33 = (__int64)v170;
      }
      else
      {
        while ( 1 )
        {
          v78 = v75;
          v75 = _InterlockedCompareExchange64(v74 + 1, v76, v75);
          if ( v78 == v75 )
            break;
          v76 = v75 - 1;
          v77 = v75 == 1;
          if ( v75 - 1 <= 0 )
            goto LABEL_261;
        }
      }
    }
    v42 = *(_QWORD *)(a4 + 72);
    v36 = ~v41 & v156;
    v31 = DmaAdapter;
    v156 = v36;
    *(_DWORD *)(a4 + 20) = v36;
    v174 = *(_DWORD *)(v42 + 28);
  }
  v43 = a5;
  if ( a5 )
  {
    ObReferenceObjectExWithTag((ULONG_PTR)Object, a5);
    v36 = v156;
  }
  if ( v31 )
  {
    HalPutDmaAdapter(v31);
    v36 = v156;
  }
  *((_QWORD *)&v179 + 1) = &v179;
  *(_QWORD *)&v179 = &v179;
  if ( (*(_BYTE *)(v35 + 66) & 0x40) != 0 && *(_QWORD *)(v35 + 200) != v35 + 200 )
  {
    v167 = v36;
    v30 = ObpPreInterceptHandleCreate((__int64)Object, v154, &v167, &v179);
    if ( v30 < 0 )
    {
      ObpDecrementHandleCount(BugCheckParameter1);
      if ( a5 )
      {
        if ( a5 > 1 )
          _InterlockedExchangeAdd64((volatile signed __int64 *)v33, (int)(1 - a5));
        HalPutDmaAdapter((PADAPTER_OBJECT)Object);
      }
      goto LABEL_91;
    }
    if ( v154 )
    {
      v36 = v156;
    }
    else
    {
      v36 = v167;
      v156 = v167;
      if ( a4 )
        *(_DWORD *)(a4 + 20) = v167;
    }
  }
  v44 = 0LL;
  v186 = 0LL;
  v45 = v36 & 0x1FFFFFF;
  if ( (v11 & 8) != 0 )
    LODWORD(v45) = v45 | 0x2000000;
  v46 = KeGetCurrentThread();
  LODWORD(v186) = v45;
  v185 = ((v33 & 0xFFFFFFFFFFFFFFF1uLL) << 16) | ((unsigned __int64)(v11 & 7) << 17) | 1;
  --v46->KernelApcDisable;
  v47 = (_DWORD *)v165;
  v48 = 0LL;
  v49 = *(_BYTE *)(v165 + 44);
  if ( (v49 & 4) != 0 )
  {
LABEL_64:
    v59 = 0LL;
    goto LABEL_65;
  }
  if ( (v49 & 1) != 0 )
    Number = 0;
  else
    Number = KeGetPcr()->Prcb.Number;
  v51 = ExpFreeListCount;
  v173 = ExpFreeListCount;
  v158 = Number;
LABEL_47:
  v52 = 0;
  v181 = *v47;
  v53 = Number;
  while ( 1 )
  {
    v54 = (ULONG_PTR)&v47[16 * v53 + 16];
    if ( *(_QWORD *)(v54 + 8) )
      break;
LABEL_103:
    v80 = v53 + 1;
    ++v52;
    v53 = 0;
    if ( v80 != v51 )
      v53 = v80;
    if ( v52 >= v51 )
    {
      v81 = (volatile signed __int64 *)(v47 + 14);
      v82 = &v47[16 * v158 + 16];
      HandleTableEntrySlow = 1;
      ExAcquirePushLockExclusiveEx((ULONG_PTR)(v47 + 14), 0LL);
      v84 = (_DWORD *)v165;
      if ( v181 == *(_DWORD *)v165 )
        HandleTableEntrySlow = ExpAllocateHandleTableEntrySlow(v165, v82);
      if ( (_InterlockedExchangeAdd64(v81, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
        ExfTryToWakePushLock(v81);
      KeAbPostRelease((ULONG_PTR)v81);
      if ( !HandleTableEntrySlow )
        goto LABEL_63;
      v51 = v173;
      v47 = v84;
      Number = v158;
      goto LABEL_47;
    }
  }
  ExAcquirePushLockExclusiveEx((ULONG_PTR)&v47[16 * v53 + 16], 0LL);
  v55 = *(_QWORD *)(v54 + 8);
  if ( v55 )
  {
    v56 = *(_QWORD *)(v55 + 8);
    *(_QWORD *)(v54 + 8) = v56;
    if ( !v56 )
      *(_QWORD *)(v54 + 16) = 0LL;
    v57 = ++*(_DWORD *)(v54 + 24);
    if ( v57 > *(_DWORD *)(v54 + 28) )
      *(_DWORD *)(v54 + 28) = v57;
  }
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)v54, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock(v54);
  KeAbPostRelease(v54);
  if ( !v55 )
  {
    v51 = v173;
    v47 = (_DWORD *)v165;
    goto LABEL_103;
  }
  v48 = *(_QWORD *)((v55 & 0xFFFFFFFFFFFFF000uLL) + 8) + 4 * ((__int64)(v55 - (v55 & 0xFFFFFFFFFFFFF000uLL)) >> 4);
  if ( !v174 && !a9 )
  {
    v58 = v165;
    goto LABEL_60;
  }
  v58 = v165;
  if ( !(unsigned int)ExpSetHandleExtraInfo(v165, v48) )
  {
LABEL_60:
    if ( *(_QWORD *)(v58 + 96) )
      ExpUpdateDebugInfo(v58, v46, v48, 1LL);
    *(_QWORD *)(v55 + 8) = v186;
    *(_QWORD *)v55 = v185;
LABEL_63:
    v34 = v171;
    v43 = a5;
    v33 = (__int64)v170;
    goto LABEL_64;
  }
  ExpFreeHandleTableEntry(v58, v48, v55);
  v33 = (__int64)v170;
  v59 = 0LL;
  v43 = a5;
  v48 = 0LL;
  v34 = v171;
LABEL_65:
  KeLeaveCriticalRegionThread((__int64)v46, v45, (__int64)v47, v44);
  if ( !v48 )
  {
    ObpDecrementHandleCount(BugCheckParameter1);
    if ( v43 )
    {
      if ( v43 > 1 )
        _InterlockedExchangeAdd64((volatile signed __int64 *)v33, (int)(1 - v43));
      HalPutDmaAdapter((PADAPTER_OBJECT)Object);
    }
    v67 = v164;
    v30 = -1073741670;
    v70 = v154;
    v69 = Object;
    v71 = v184;
    goto LABEL_88;
  }
  if ( !a4 )
  {
    v67 = v164;
    goto LABEL_84;
  }
  if ( (*(_BYTE *)(v33 + 26) & 0x20) == 0
    || (v115 = ObpInfoMaskToOffset[*(_BYTE *)(v33 + 26) & 0x3F], v116 = (void **)(v33 - v115), v33 == v115) )
  {
    v60 = (void *)v176;
    if ( !v176 )
      goto LABEL_69;
    goto LABEL_182;
  }
  v60 = *v116;
  if ( *v116 )
  {
LABEL_182:
    v59 = v60;
    goto LABEL_69;
  }
  if ( v176 )
  {
    ObpSetObjectAuditInfo(v33, &v176, 0LL);
LABEL_69:
    v61 = Object;
  }
  else
  {
    v61 = Object;
    if ( (POBJECT_TYPE *)ObTypeIndexTable[(unsigned __int8)ObHeaderCookie ^ v34 ^ (unsigned __int64)*(unsigned __int8 *)(v33 + 24)] != IoFileObjectType
      || (*(_DWORD *)(*((_QWORD *)Object + 1) + 52LL) & 0x10) == 0 )
    {
      v145 = *(_QWORD *)(a4 + 72);
      v146 = 0;
      if ( v145 && (v147 = *(_QWORD *)(v145 + 56)) != 0 )
        v146 = 1;
      else
        v147 = 0LL;
      if ( (int)ObpAllocateAndQuerySecurityDescriptorInfo(Object, 32LL, v147, &P) >= 0 )
      {
        v59 = P;
        ObpSetObjectAuditInfo(v33, &P, v146);
      }
    }
  }
  v62 = *(_QWORD *)(a4 + 72);
  v63 = 0;
  *(_QWORD *)v183 = v48;
  TargetHandle = 0LL;
  v64 = 0LL;
  if ( !v59 )
  {
    v59 = *(PVOID *)(v62 + 56);
    if ( !v59 )
      v59 = *(PVOID *)(a4 + 64);
  }
  if ( *(_BYTE *)(a4 + 9) )
  {
    if ( *(_BYTE *)(a4 + 124) )
    {
      SepAdtPrivilegeObjectAuditAlarm(
        &SeSubsystemName,
        (unsigned __int16 *)(a4 + 144),
        (unsigned __int16 *)(a4 + 128),
        v48,
        *(_QWORD *)(a4 + 32),
        *(_QWORD *)(a4 + 48),
        *(_QWORD *)(a4 + 56),
        *(_DWORD *)(a4 + 20),
        *(int **)v62,
        1);
      goto LABEL_75;
    }
  }
  else if ( !*(_BYTE *)(v62 + 216) )
  {
    goto LABEL_75;
  }
  if ( ZwDuplicateObject(
         (HANDLE)0xFFFFFFFFFFFFFFFFLL,
         (HANDLE)v48,
         (HANDLE)0xFFFFFFFFFFFFFFFFLL,
         &TargetHandle,
         0,
         0x200u,
         2u) >= 0 )
  {
    v182 = 0LL;
    ObReferenceObjectByHandle(TargetHandle, 0, 0LL, 0, &v182, 0LL);
    v64 = (struct _DMA_ADAPTER *)v182;
  }
  LOBYTE(v148) = 1;
  LOWORD(v158) = SepAdtClassifyObjectIntoSubCategory(v64, a4 + 144, v148, 0LL);
  if ( v64 )
    HalPutDmaAdapter(v64);
  if ( TargetHandle )
  {
    ZwClose(TargetHandle);
    TargetHandle = 0LL;
  }
  CurrentThreadProcessId = PsGetCurrentThreadProcessId();
  v63 = SepAdtOpenObjectAuditAlarm(
          (unsigned __int16)v158,
          (int)&SeSubsystemName,
          (int)v183,
          (int)a4 + 144,
          a4 + 128,
          v59,
          *(_QWORD *)(a4 + 32),
          *(_QWORD *)(a4 + 48),
          *(_DWORD *)(a4 + 24),
          *(_DWORD *)(a4 + 20),
          *(_QWORD *)v62,
          1,
          CurrentThreadProcessId,
          2,
          0LL,
          0,
          0LL,
          v62 + 32,
          a4);
  v150 = PsGetCurrentThreadProcessId();
  LOBYTE(AccessStatus) = 1;
  SepAdtStagingEvent(
    (unsigned __int16)v158,
    v151,
    v183,
    a4 + 144,
    a4 + 128,
    *(_QWORD *)(a4 + 32),
    *(_QWORD *)(a4 + 48),
    *(_DWORD *)(a4 + 24),
    *(_DWORD *)(a4 + 20),
    AccessStatus,
    v150,
    a4);
  v61 = Object;
LABEL_75:
  *(_BYTE *)(a4 + 10) = v63;
  v65 = v168;
  if ( !v168 )
  {
    v66 = **(_DWORD ***)(a4 + 72);
    if ( v66 )
    {
      if ( *v66 )
        SePrivilegeObjectAuditAlarm(
          v48,
          (__int64 *)(a4 + 32),
          *(_DWORD *)(a4 + 20),
          (__int64)v66,
          1,
          KeGetCurrentThread()->PreviousMode);
    }
  }
  if ( P )
    ExFreePoolWithTag(P, 0);
  v67 = v164;
  if ( !v65 && (v164 == CmKeyObjectType || v164 == IoFileObjectType) )
  {
    v68 = *(_QWORD *)(a4 + 32);
    if ( v68 )
    {
      v100 = KeGetCurrentThread();
      v101 = *(_QWORD *)(a4 + 48);
      --v100->KernelApcDisable;
      if ( v101 >= v68 )
      {
        ExAcquireResourceSharedLite(*(PERESOURCE *)(v68 + 48), 1u);
        v105 = KeGetCurrentThread();
        --v105->KernelApcDisable;
        v103 = *(struct _ERESOURCE **)(v101 + 48);
      }
      else
      {
        ExAcquireResourceSharedLite(*(PERESOURCE *)(v101 + 48), 1u);
        v102 = KeGetCurrentThread();
        --v102->KernelApcDisable;
        v103 = *(struct _ERESOURCE **)(v68 + 48);
      }
      ExAcquireResourceSharedLite(v103, 1u);
      if ( (*(_DWORD *)(v68 + 200) & 0x4000) != 0
        && *(int *)(v68 + 196) >= 2
        && !RtlEqualSid(**(PSID **)(v101 + 152), **(PSID **)(v68 + 152)) )
      {
        v112 = OBJECT_HEADER_TO_HANDLE_REVOCATION_INFO((__int64)v170);
        if ( v112 )
          LOBYTE(v112) = 1;
        if ( (_BYTE)v112
          && SepSidInTokenSidHash(
               (PSID_AND_ATTRIBUTES_HASH)(v101 + 808),
               0LL,
               SeConstrainedImpersonationCapabilitySid,
               0,
               1,
               0,
               0) )
        {
          ObHandleRevocationBlockAddObject(*(_QWORD *)(v68 + 216) + 128LL, v61);
        }
      }
      ExReleaseResourceLite(*(PERESOURCE *)(v101 + 48));
      KeLeaveCriticalRegion();
      ExReleaseResourceLite(*(PERESOURCE *)(v68 + 48));
      KeLeaveCriticalRegion();
    }
  }
LABEL_84:
  v69 = Object;
  if ( a5 && v187 )
    *v187 = Object;
  v70 = v154;
  v71 = v184;
  v72 = v48 | 0xFFFFFFFF80000000uLL;
  if ( !v154 )
    v72 = v48;
  *v184 = v72;
  v30 = v155 != 0 ? 0x40000000 : 0;
LABEL_88:
  if ( (__int128 *)v179 != &v179 )
  {
    ObpPostInterceptHandleCreate((_DWORD)v69, v70, v30, v156, (__int64)&v179);
    v69 = Object;
  }
  if ( (xmmword_140CFC490 & 0x40) != 0 && v30 >= 0 )
    EtwpTraceHandle(4384LL, *v71, v69, v67);
LABEL_91:
  v29 = (struct _EX_RUNDOWN_REF *)BugCheckParameter1;
LABEL_92:
  if ( v157 )
    ExReleaseRundownProtection_0(v29 + 139);
  return (unsigned int)v30;
}
