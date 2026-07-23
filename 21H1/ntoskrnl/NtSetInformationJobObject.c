/*
 * XREFs of NtSetInformationJobObject @ 0x140660620
 * Callers:
 *     <none>
 * Callees:
 *     KeInitializeDpc @ 0x140204F10 (KeInitializeDpc.c)
 *     KeResetEvent @ 0x1402055D0 (KeResetEvent.c)
 *     ExAllocatePoolWithQuotaTag @ 0x1402421D0 (ExAllocatePoolWithQuotaTag.c)
 *     ExAcquirePushLockExclusiveEx @ 0x1402609E0 (ExAcquirePushLockExclusiveEx.c)
 *     ExAcquirePushLockSharedEx @ 0x140260BA0 (ExAcquirePushLockSharedEx.c)
 *     KiLeaveGuardedRegionUnsafe @ 0x140260DE0 (KiLeaveGuardedRegionUnsafe.c)
 *     ObfDereferenceObjectWithTag @ 0x1402611B0 (ObfDereferenceObjectWithTag.c)
 *     ExReleaseResourceLite @ 0x140261460 (ExReleaseResourceLite.c)
 *     ExAcquireResourceExclusiveLite @ 0x140261C10 (ExAcquireResourceExclusiveLite.c)
 *     KeIsEmptyAffinityEx @ 0x140276350 (KeIsEmptyAffinityEx.c)
 *     KeQueryActiveGroupCount @ 0x1402C9F20 (KeQueryActiveGroupCount.c)
 *     KeSetSchedulingGroupWeights @ 0x1402DBCC4 (KeSetSchedulingGroupWeights.c)
 *     KeSetSchedulingGroupCpuRates @ 0x1402DBDB4 (KeSetSchedulingGroupCpuRates.c)
 *     KeSetSchedulingGroupRankBias @ 0x1402DC40C (KeSetSchedulingGroupRankBias.c)
 *     KeQuerySchedulingGroupReadyTime @ 0x1403074D4 (KeQuerySchedulingGroupReadyTime.c)
 *     KeSetSchedulingGroupCycleNotification @ 0x1403117E4 (KeSetSchedulingGroupCycleNotification.c)
 *     KeFirstGroupAffinityEx @ 0x1403128B0 (KeFirstGroupAffinityEx.c)
 *     ExfAcquireReleasePushLockExclusive @ 0x140313394 (ExfAcquireReleasePushLockExclusive.c)
 *     __security_check_cookie @ 0x1403CC020 (__security_check_cookie.c)
 *     wcsnlen @ 0x1403CFC90 (wcsnlen.c)
 *     memmove @ 0x140408CC0 (memmove.c)
 *     memset @ 0x140408F80 (memset.c)
 *     KeAddGroupAffinityEx @ 0x14050DA40 (KeAddGroupAffinityEx.c)
 *     PspJobIsAppSilo @ 0x14057B55C (PspJobIsAppSilo.c)
 *     PspLockWorkingSetChangeExclusiveUnsafe @ 0x14057BEA4 (PspLockWorkingSetChangeExclusiveUnsafe.c)
 *     PspSetJobIoRateControl @ 0x1405CD768 (PspSetJobIoRateControl.c)
 *     PspCreateSilo @ 0x1405CE8BC (PspCreateSilo.c)
 *     SeSinglePrivilegeCheck @ 0x1405E3050 (SeSinglePrivilegeCheck.c)
 *     SePrivilegeCheck @ 0x1405E9C20 (SePrivilegeCheck.c)
 *     SeReleaseSubjectContext @ 0x1405EBD30 (SeReleaseSubjectContext.c)
 *     PspUnlockJobConditionally @ 0x1405F0C88 (PspUnlockJobConditionally.c)
 *     SeCaptureSubjectContextEx @ 0x140602DE0 (SeCaptureSubjectContextEx.c)
 *     PspEnumJobsAndProcessesInJobHierarchy @ 0x140612238 (PspEnumJobsAndProcessesInJobHierarchy.c)
 *     PspUnlockJob @ 0x140612970 (PspUnlockJob.c)
 *     PsChargeSharedPoolQuota @ 0x140615490 (PsChargeSharedPoolQuota.c)
 *     PsReturnSharedPoolQuota @ 0x14061551C (PsReturnSharedPoolQuota.c)
 *     PspUnlockJobMemoryLimitsShared @ 0x140615F90 (PspUnlockJobMemoryLimitsShared.c)
 *     PspGetJobMemoryUsageNotificationViolations @ 0x140615FEC (PspGetJobMemoryUsageNotificationViolations.c)
 *     ObReferenceObjectByHandleWithTag @ 0x14062B1C0 (ObReferenceObjectByHandleWithTag.c)
 *     PsInvokeWin32Callout @ 0x140637B10 (PsInvokeWin32Callout.c)
 *     IoAllocateMiniCompletionPacket @ 0x140644030 (IoAllocateMiniCompletionPacket.c)
 *     PspLockJobConditionally @ 0x14065E260 (PspLockJobConditionally.c)
 *     PspNotificationLimitRateControlToleranceIntervalField @ 0x140662074 (PspNotificationLimitRateControlToleranceIntervalField.c)
 *     PspNotificationLimitRateControlToleranceField @ 0x14066209C (PspNotificationLimitRateControlToleranceField.c)
 *     PspUnlockJobMemoryLimitsExclusive @ 0x1406620C4 (PspUnlockJobMemoryLimitsExclusive.c)
 *     PspRateControlLimitFlag @ 0x14066211C (PspRateControlLimitFlag.c)
 *     PspUnlockJobChain @ 0x14066F3F4 (PspUnlockJobChain.c)
 *     PspLockJobChain @ 0x14066F47C (PspLockJobChain.c)
 *     PspBindProcessSessionToJob @ 0x1406724CC (PspBindProcessSessionToJob.c)
 *     PspSetJobIoAttribution @ 0x140675754 (PspSetJobIoAttribution.c)
 *     IoFreeMiniCompletionPacket @ 0x140675F20 (IoFreeMiniCompletionPacket.c)
 *     PspFreeRateControl @ 0x140676188 (PspFreeRateControl.c)
 *     PspAllocateRateControl @ 0x1406761D8 (PspAllocateRateControl.c)
 *     PspAddSchedulingGroupToJobChain @ 0x1406762E0 (PspAddSchedulingGroupToJobChain.c)
 *     PspScheduleEnforcementWorker @ 0x1406B5140 (PspScheduleEnforcementWorker.c)
 *     PspLockRootJobExclusive @ 0x1406CBE4C (PspLockRootJobExclusive.c)
 *     PspFreezeJobTree @ 0x1406CBEB4 (PspFreezeJobTree.c)
 *     PspSetEnergyTrackingStateJobTree @ 0x1406E2038 (PspSetEnergyTrackingStateJobTree.c)
 *     PspIsContextAdmin @ 0x1406E20D8 (PspIsContextAdmin.c)
 *     PspGetJobLimitInformationValidFlags @ 0x1406E2CF8 (PspGetJobLimitInformationValidFlags.c)
 *     PspSetBackgroundJobTree @ 0x1406E6470 (PspSetBackgroundJobTree.c)
 *     PspDoesJobHierarchyPermitUILimits @ 0x1406ECBCC (PspDoesJobHierarchyPermitUILimits.c)
 *     ExRaiseDatatypeMisalignment @ 0x140767450 (ExRaiseDatatypeMisalignment.c)
 *     SeCheckPrivilegedObject @ 0x140779674 (SeCheckPrivilegedObject.c)
 *     PspAssignSiloSystemRootPath @ 0x140901BE0 (PspAssignSiloSystemRootPath.c)
 *     PspBeginSiloTeardown @ 0x140901CC8 (PspBeginSiloTeardown.c)
 *     PspConvertSiloToServerSilo @ 0x140901E34 (PspConvertSiloToServerSilo.c)
 *     PspAddProcessToWorkingSetChangeList @ 0x140904310 (PspAddProcessToWorkingSetChangeList.c)
 *     PspApplyWorkingSetLimits @ 0x1409043D4 (PspApplyWorkingSetLimits.c)
 *     PspSetJobMemoryPartition @ 0x140904E8C (PspSetJobMemoryPartition.c)
 *     PspSetJobSiloThreadImpersonationPolicy @ 0x140905184 (PspSetJobSiloThreadImpersonationPolicy.c)
 *     PspSetNetRateControl @ 0x140905214 (PspSetNetRateControl.c)
 *     PspEnumProcessesInJobHierarchy @ 0x14090A180 (PspEnumProcessesInJobHierarchy.c)
 *     EtwTraceJobSetQuery @ 0x14093182C (EtwTraceJobSetQuery.c)
 *     ObCreateSiloRootDirectory @ 0x14097BC40 (ObCreateSiloRootDirectory.c)
 *     ExFreePoolWithTag @ 0x1409B1010 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x1409B1030 (ExAllocatePoolWithTag.c)
 */

NTSTATUS __cdecl NtSetInformationJobObject(
        HANDLE JobHandle,
        JOBOBJECTINFOCLASS JobObjectInformationClass,
        PVOID JobObjectInformation,
        ULONG JobObjectInformationLength)
{
  size_t v4; // r12
  __int64 v5; // r13
  unsigned int v7; // ecx
  KPROCESSOR_MODE PreviousMode; // al
  __int64 *v9; // rdi
  ACCESS_MASK v10; // edx
  NTSTATUS result; // eax
  unsigned __int64 v12; // rdx
  unsigned __int64 v13; // r8
  int *v14; // r9
  int v15; // esi
  _QWORD *v16; // r14
  int v17; // ebx
  void *MiniCompletionPacket; // rbx
  PVOID v19; // rbx
  int v20; // eax
  __int64 v21; // r10
  unsigned __int64 v22; // r11
  unsigned __int64 v23; // rcx
  int v24; // eax
  __int64 j; // rdx
  __int64 v26; // rdx
  __int64 v27; // r8
  __int64 v28; // r9
  int v29; // eax
  int *v30; // r10
  int **v31; // rbx
  struct _ERESOURCE *v32; // rdi
  int *v33; // rdi
  int v34; // esi
  __int64 v35; // rdx
  _DWORD *v36; // r8
  _DWORD *v37; // rax
  __int64 v38; // r8
  _DWORD *v39; // rax
  _DWORD *v40; // r8
  int v41; // edx
  bool v42; // zf
  int *v43; // rax
  __int64 v44; // r8
  int JobMemoryUsageNotificationViolations; // ebx
  __int64 v46; // rsi
  _DWORD *v47; // r9
  __int64 v48; // rdi
  int v49; // eax
  struct _ERESOURCE *v50; // rcx
  int v51; // edi
  KPROCESSOR_MODE v52; // r14
  int v53; // eax
  int v54; // ecx
  unsigned int v55; // ecx
  _DWORD *v56; // rcx
  char *v57; // rdx
  int *v58; // rbx
  int v59; // edi
  char v60; // bl
  char v61; // di
  char v62; // di
  char v63; // bl
  PETHREAD v64; // rdi
  char v65; // bl
  int v66; // esi
  __int64 v67; // r8
  _DWORD *v68; // r9
  int v69; // eax
  __int64 RateControl; // rax
  __int64 v71; // rdx
  PVOID *v72; // rdi
  _DWORD *v73; // rax
  __int64 *v74; // rcx
  struct _ERESOURCE *v75; // rcx
  void *v76; // rdi
  __int64 v77; // r8
  _DWORD *v78; // r9
  unsigned int v79; // edx
  __int64 v80; // rdx
  int v81; // ebx
  __int64 v82; // rcx
  char v83; // bl
  unsigned int *v84; // r11
  unsigned __int16 v85; // cx
  POOL_TYPE v86; // r12d
  _WORD *v87; // rbx
  wchar_t *v88; // rbx
  struct _ERESOURCE *v89; // rbx
  int Silo; // eax
  unsigned int v91; // ecx
  unsigned int v92; // r14d
  unsigned int v93; // ebx
  char v94; // al
  int v95; // ecx
  int v96; // eax
  char v97; // al
  int v98; // ecx
  __int64 v99; // rcx
  struct _ERESOURCE *PoolWithTag; // rdi
  BOOLEAN v101; // al
  ULONG v102; // edx
  unsigned __int16 Group; // ax
  __int64 v104; // rax
  char *v105; // rsi
  char *i; // rbx
  char *v107; // rcx
  unsigned __int16 v108; // cx
  __m128i v109; // xmm0
  unsigned __int16 epi16; // ax
  __int64 v111; // rax
  SECURITY_IMPERSONATION_LEVEL *p_ImpersonationLevel; // rdi
  BOOLEAN v113; // al
  PERESOURCE v114; // r12
  __int64 *v115; // rcx
  __int64 v116; // rax
  BOOLEAN v117; // al
  ULONG v118; // edx
  BOOLEAN v119; // al
  BOOLEAN v120; // al
  unsigned __int64 v121; // xmm0_8
  size_t v122; // rdi
  wchar_t *v123; // rax
  size_t v124; // rdi
  size_t v125; // rax
  PETHREAD v126; // rdx
  __int64 v127; // rcx
  signed __int8 v128; // cf
  signed __int32 v129[8]; // [rsp+0h] [rbp-BC8h] BYREF
  KPROCESSOR_MODE AccessMode; // [rsp+40h] [rbp-B88h]
  PVOID DeferredContext; // [rsp+48h] [rbp-B80h] BYREF
  JOBOBJECTINFOCLASS v132; // [rsp+50h] [rbp-B78h]
  int v133; // [rsp+58h] [rbp-B70h]
  char v134; // [rsp+5Ch] [rbp-B6Ch] BYREF
  _BYTE v135[3]; // [rsp+5Dh] [rbp-B6Bh] BYREF
  int v136; // [rsp+60h] [rbp-B68h]
  PVOID P; // [rsp+68h] [rbp-B60h]
  ULONG_PTR BugCheckParameter2; // [rsp+70h] [rbp-B58h]
  unsigned __int16 v139; // [rsp+78h] [rbp-B50h]
  __int64 v140; // [rsp+80h] [rbp-B48h] BYREF
  PETHREAD Thread; // [rsp+88h] [rbp-B40h]
  PERESOURCE Resource; // [rsp+90h] [rbp-B38h]
  PERESOURCE v143; // [rsp+98h] [rbp-B30h]
  char v144; // [rsp+A0h] [rbp-B28h]
  char v145; // [rsp+A1h] [rbp-B27h]
  char v146; // [rsp+A2h] [rbp-B26h]
  unsigned int v147; // [rsp+A4h] [rbp-B24h]
  int JobLimitInformationValidFlags; // [rsp+A8h] [rbp-B20h]
  unsigned int v149; // [rsp+ACh] [rbp-B1Ch]
  __int64 v150; // [rsp+B0h] [rbp-B18h] BYREF
  unsigned int v151; // [rsp+B8h] [rbp-B10h] BYREF
  unsigned int v152; // [rsp+BCh] [rbp-B0Ch]
  __int64 v153; // [rsp+C0h] [rbp-B08h] BYREF
  void *Src; // [rsp+C8h] [rbp-B00h]
  __int64 v155[2]; // [rsp+D0h] [rbp-AF8h] BYREF
  __int64 v156; // [rsp+E0h] [rbp-AE8h]
  struct _SECURITY_SUBJECT_CONTEXT SubjectContext; // [rsp+E8h] [rbp-AE0h] BYREF
  __int64 v158; // [rsp+108h] [rbp-AC0h]
  __int64 v159; // [rsp+110h] [rbp-AB8h] BYREF
  PSECURITY_SUBJECT_CONTEXT v160; // [rsp+118h] [rbp-AB0h]
  int v161; // [rsp+120h] [rbp-AA8h]
  __int64 v162; // [rsp+128h] [rbp-AA0h] BYREF
  PVOID Object; // [rsp+130h] [rbp-A98h] BYREF
  __m128i v164; // [rsp+138h] [rbp-A90h] BYREF
  __int64 v165; // [rsp+148h] [rbp-A80h] BYREF
  wchar_t *v166; // [rsp+150h] [rbp-A78h]
  __m128i v167; // [rsp+158h] [rbp-A70h] BYREF
  unsigned int v168; // [rsp+168h] [rbp-A60h]
  int v169; // [rsp+16Ch] [rbp-A5Ch]
  int v170; // [rsp+170h] [rbp-A58h]
  HANDLE Handle[2]; // [rsp+178h] [rbp-A50h]
  PVOID v172[2]; // [rsp+188h] [rbp-A40h]
  __int128 v173; // [rsp+198h] [rbp-A30h] BYREF
  __int128 v174; // [rsp+1A8h] [rbp-A20h]
  int v175; // [rsp+1B8h] [rbp-A10h]
  _QWORD *v176; // [rsp+1C0h] [rbp-A08h] BYREF
  int v177; // [rsp+1C8h] [rbp-A00h]
  int v178; // [rsp+1CCh] [rbp-9FCh]
  __int64 v179; // [rsp+1D0h] [rbp-9F8h]
  __m128i v180; // [rsp+1D8h] [rbp-9F0h]
  __int128 v181; // [rsp+1E8h] [rbp-9E0h]
  __int64 v182; // [rsp+1F8h] [rbp-9D0h]
  __int64 v183; // [rsp+200h] [rbp-9C8h]
  __int64 v184; // [rsp+208h] [rbp-9C0h]
  __int64 v185; // [rsp+210h] [rbp-9B8h]
  _OWORD v186[5]; // [rsp+220h] [rbp-9A8h] BYREF
  _QWORD v187[18]; // [rsp+270h] [rbp-958h] BYREF
  struct _PRIVILEGE_SET RequiredPrivileges; // [rsp+300h] [rbp-8C8h] BYREF
  _QWORD v189[10]; // [rsp+320h] [rbp-8A8h] BYREF
  __m128i v190; // [rsp+370h] [rbp-858h] BYREF
  __m128i v191; // [rsp+380h] [rbp-848h]
  __m128i v192; // [rsp+390h] [rbp-838h]
  __m128i v193; // [rsp+3A0h] [rbp-828h]
  __int64 v194; // [rsp+3B0h] [rbp-818h]
  _QWORD v195[20]; // [rsp+3C0h] [rbp-808h] BYREF
  __m128i v196; // [rsp+460h] [rbp-768h]
  __m128i v197; // [rsp+470h] [rbp-758h]
  __m128i v198; // [rsp+480h] [rbp-748h]
  _OWORD v199[111]; // [rsp+490h] [rbp-738h] BYREF

  v4 = JobObjectInformationLength;
  BugCheckParameter2 = (ULONG_PTR)JobObjectInformation;
  v5 = JobObjectInformationClass;
  P = JobHandle;
  v132 = JobObjectInformationClass;
  Src = JobObjectInformation;
  memset((char *)v199 + 8, 0, 0xA0uLL);
  *(_OWORD *)Handle = 0LL;
  v159 = 0LL;
  v162 = 0LL;
  v134 = 0;
  v165 = 0LL;
  memset(v195, 0, 0x98uLL);
  v190 = 0LL;
  v164 = 0LL;
  memset(v186, 0, 0x48uLL);
  Object = 0LL;
  memset(v187, 0, sizeof(v187));
  DeferredContext = 0LL;
  v151 = 0;
  memset(&v199[11], 0, 0x640uLL);
  v173 = 0LL;
  v174 = 0LL;
  memset(&SubjectContext, 0, sizeof(SubjectContext));
  v158 = 0LL;
  memset(v189, 0, 0x48uLL);
  v196 = 0LL;
  v197 = 0LL;
  v198 = 0LL;
  v191 = 0LL;
  v192 = 0LL;
  v193 = 0LL;
  v194 = 0LL;
  v140 = 0LL;
  v135[0] = 0;
  memset(&RequiredPrivileges, 0, sizeof(RequiredPrivileges));
  v150 = 0LL;
  *(_OWORD *)v155 = 0LL;
  v153 = 0LL;
  v180 = 0LL;
  v181 = 0LL;
  v182 = 0LL;
  v167 = 0LL;
  *(_OWORD *)v172 = 0LL;
  if ( (unsigned int)(v5 - 1) > 0x2E )
    return -1073741821;
  switch ( (_DWORD)v5 )
  {
    case 9:
      if ( (_DWORD)v4 == 144 || (_DWORD)v4 == 152 )
        goto LABEL_6;
      return -1073741820;
    case 0xC:
      if ( (_DWORD)v4 == 48 )
        goto LABEL_6;
      v42 = (_DWORD)v4 == 56;
LABEL_99:
      if ( v42 )
        goto LABEL_6;
      return -1073741820;
    case 0x1F:
      if ( (_DWORD)v4 == 48 || (_DWORD)v4 == 96 )
        goto LABEL_6;
      v42 = (_DWORD)v4 == 144;
      goto LABEL_99;
  }
  v7 = dword_14098178C[v5];
  if ( (_DWORD)v4 != v7 && ((_DWORD)v5 != 11 && (_DWORD)v5 != 14 || (unsigned int)v4 < v7) )
    return -1073741820;
LABEL_6:
  Thread = KeGetCurrentThread();
  PreviousMode = Thread->PreviousMode;
  AccessMode = PreviousMode;
  v135[1] = PreviousMode;
  if ( PreviousMode )
  {
    v9 = (__int64 *)Src;
    if ( (_DWORD)v4 )
    {
      if ( ((dword_14098184C[v5] - 1) & (unsigned int)Src) != 0 )
        ExRaiseDatatypeMisalignment();
      if ( (unsigned __int64)Src + v4 > 0x7FFFFFFF0000LL || (char *)Src + v4 < Src )
        MEMORY[0x7FFFFFFF0000] = 0;
    }
    PreviousMode = AccessMode;
  }
  else
  {
    v9 = (__int64 *)Src;
  }
  if ( !JobHandle )
    return -1073741816;
  v10 = 16;
  if ( (_DWORD)v5 != 5 )
    v10 = 2;
  result = ObReferenceObjectByHandleWithTag(
             JobHandle,
             v10,
             (POBJECT_TYPE)PsJobType,
             PreviousMode,
             0x79517350u,
             &DeferredContext,
             0LL);
  if ( result >= 0 )
  {
    v15 = 0;
    v133 = 0;
    LOBYTE(v136) = 0;
    --Thread->SpecialApcDisable;
    if ( (int)v5 <= 24 )
    {
      if ( (_DWORD)v5 == 24 )
      {
        v46 = *v9;
        v183 = *v9;
        v16 = DeferredContext;
        ExAcquireResourceExclusiveLite((PERESOURCE)((char *)DeferredContext + 56), 1u);
        if ( (v16[165] & 0x20) != 0 )
        {
          v48 = v16[126];
          v49 = *(_DWORD *)(v48 + 40);
          if ( (v49 & 0x10) == 0 )
          {
            *(_DWORD *)(v48 + 40) = v49 | 0x10;
            KeInitializeDpc((PRKDPC)(v48 + 48), (PKDEFERRED_ROUTINE)PspJobCycleTimeNotificationDpcRoutine, v16);
          }
          KeSetSchedulingGroupCycleNotification(v48 + 128, v48 + 48, v46, v47);
          goto LABEL_119;
        }
LABEL_380:
        v15 = -1073741811;
        goto LABEL_120;
      }
      if ( (int)v5 > 12 )
      {
        if ( (_DWORD)v5 != 14 )
        {
          if ( (_DWORD)v5 != 15 )
          {
            if ( (_DWORD)v5 != 16 )
            {
              if ( (_DWORD)v5 == 18 )
              {
                v190 = *(__m128i *)v9;
                if ( v190.m128i_i32[0] && (v190.m128i_i32[0] & 0xFFFFFFF8) == 0 )
                {
                  v16 = DeferredContext;
                  v15 = PspFreezeJobTree(DeferredContext, &v190);
                  if ( v15 >= 0 )
                    *(_DWORD *)v9 = v190.m128i_i32[0];
                  goto LABEL_35;
                }
                goto LABEL_384;
              }
              if ( (_DWORD)v5 != 21 )
              {
                if ( (_DWORD)v5 != 22 )
                {
                  if ( (_DWORD)v5 == 23 )
                  {
                    if ( *(_BYTE *)v9 != 1 )
                    {
                      v15 = -1073741811;
                      v133 = -1073741811;
                      v16 = DeferredContext;
                      goto LABEL_35;
                    }
                    v16 = DeferredContext;
                    PspEnumJobsAndProcessesInJobHierarchy(
                      DeferredContext,
                      0,
                      (int)PspEnableTimerVirtualization,
                      (int)PspEnableProcessTimerVirtualization,
                      0LL,
                      0);
LABEL_34:
                    v15 = 0;
LABEL_35:
                    KiLeaveGuardedRegionUnsafe((__int64)Thread, v12, v13, (__int64)v14);
                    if ( v15 )
                    {
                      if ( (PerfGlobalGroupMask & 0x80000) != 0 )
                        EtwTraceJobSetQuery((_DWORD)v16, v5, 0, 0, v15, 1831);
                    }
                    ObfDereferenceObjectWithTag(v16, 0x79517350u);
                    return v15;
                  }
LABEL_459:
                  v15 = -1073741821;
                  goto LABEL_282;
                }
                v134 = *(_BYTE *)v9;
                v16 = DeferredContext;
                ExAcquireResourceExclusiveLite((PERESOURCE)((char *)DeferredContext + 56), 1u);
                if ( (v16[165] & 0x20) != 0 )
                {
                  v78 = (_DWORD *)v16[126];
                  v79 = v78[10];
                  if ( (v79 & 0x40) == 0 )
                  {
                    if ( (v79 & 1) != 0 || (v79 & 0x20) != 0 )
                    {
                      v15 = -1073741637;
                      goto LABEL_120;
                    }
                    if ( ((v79 >> 3) & 1) != (v134 != 0) )
                    {
                      LOBYTE(v77) = -v134;
                      v80 = (v134 != 0 ? 8 : 0) | v79 & 0xFFFFFFF7;
                      v78[10] = v80;
                      LOBYTE(v80) = v134;
                      KeSetSchedulingGroupRankBias(v16[126] + 128LL, v80, v77, v78);
                      PspEnumProcessesInJobHierarchy(v16, PspSetProcessCacheIsolationCallback, &v134, 1LL);
LABEL_119:
                      v15 = 0;
LABEL_120:
                      v50 = (struct _ERESOURCE *)(v16 + 7);
LABEL_121:
                      ExReleaseResourceLite(v50);
                      goto LABEL_35;
                    }
                  }
                }
                goto LABEL_380;
              }
              v144 = *(_BYTE *)v9;
              v16 = DeferredContext;
              v20 = PspSetBackgroundJobTree(DeferredContext);
LABEL_64:
              v15 = v20;
              if ( v20 < 0 )
                goto LABEL_35;
              goto LABEL_34;
            }
            v169 = *(_DWORD *)v9;
            v17 = v169;
            v16 = DeferredContext;
            if ( (v169 & 0xFFFFC001) == 0 )
            {
              ExAcquireResourceExclusiveLite((PERESOURCE)((char *)DeferredContext + 56), 1u);
              if ( v16 )
                ExAcquirePushLockExclusiveEx((ULONG_PTR)(v16 + 129), 0LL);
              *((_DWORD *)v16 + 219) = v17;
              PspUnlockJobMemoryLimitsExclusive(v16, 0LL, 0LL);
              goto LABEL_33;
            }
LABEL_430:
            v15 = -1073741811;
            goto LABEL_35;
          }
          memmove(&v162, v9, v4);
          v65 = v162;
          if ( (v162 & 0xFFFFFFE0) == 0 )
          {
            v66 = HIDWORD(v162);
            LODWORD(v140) = HIDWORD(v162);
            v132 = v162 & 1;
            if ( (v162 & 1) == 0 )
              goto LABEL_181;
            if ( (v162 & 2) != 0 )
            {
              if ( (v162 & 0x10) == 0 && (unsigned __int16)(WORD2(v162) - 1) <= 8u )
                goto LABEL_181;
            }
            else if ( (unsigned __int16)(WORD2(v162) - 1) <= 0x270Fu
                   && ((v162 & 0x10) == 0 || (v162 & 4) == 0 && HIWORD(v162) >= WORD2(v162) && HIWORD(v162) <= 0x2710u) )
            {
LABEL_181:
              v16 = DeferredContext;
              PspLockJobChain(DeferredContext, Thread, 0LL);
              v69 = *((_DWORD *)v16 + 330);
              if ( v132 )
              {
                if ( (v69 & 0x20) == 0 )
                {
                  RateControl = PspAllocateRateControl(2LL);
                  v71 = RateControl;
                  if ( !RateControl )
                  {
                    v15 = -1073741670;
                    goto LABEL_208;
                  }
                  v16[126] = RateControl;
LABEL_193:
                  v72 = (PVOID *)(v16 + 126);
                  *(_DWORD *)(v16[126] + 40LL) = 0;
                  *(_DWORD *)(v16[126] + 44LL) = v66;
                  if ( v132 )
                  {
                    if ( (v65 & 4) != 0 )
                    {
                      *((_DWORD *)*v72 + 10) |= 1u;
                      WORD1(v140) = v66;
                    }
                    if ( (v65 & 2) != 0 )
                    {
                      *((_DWORD *)*v72 + 10) |= 4u;
                      HIDWORD(v140) = 0;
                    }
                    else
                    {
                      HIDWORD(v140) = 1;
                      if ( (v65 & 0x14) == 0 )
                        WORD1(v140) = 10000;
                    }
                    if ( (v65 & 8) != 0 )
                      *((_DWORD *)*v72 + 10) |= 2u;
                    if ( (v65 & 0x10) != 0 )
                      *((_DWORD *)*v72 + 10) |= 0x20u;
                    v73 = *v72;
                    v74 = (__int64 *)((char *)*v72 + 128);
                    if ( *v72 == (PVOID)v71 )
                    {
                      *v74 = v140;
                      v15 = PspAddSchedulingGroupToJobChain(v16[134], v16);
                      v133 = v15;
                      if ( v15 < 0 )
                      {
                        if ( *v72 )
                        {
                          PspFreeRateControl(*v72);
                          *v72 = 0LL;
                        }
                        goto LABEL_208;
                      }
                      _InterlockedOr((volatile signed __int32 *)v16 + 330, 0x20u);
                      v16 = DeferredContext;
                    }
                    else
                    {
                      v153 = (__int64)*v72 + 128;
                      if ( (v73[10] & 4) != 0 )
                        KeSetSchedulingGroupWeights(1u, (__int64)&v153, (__int64)&v140);
                      else
                        KeSetSchedulingGroupCpuRates((__int64)v74, &v153, &v140);
                    }
                    v159 = *((_QWORD *)*v72 + 5);
                  }
                  else
                  {
                    v140 = 0x327102710LL;
                    *((_DWORD *)*v72 + 10) |= 0x40u;
                    v81 = v140;
                    *((_DWORD *)*v72 + 11) = v140;
                    v153 = (__int64)*v72 + 128;
                    v135[0] = (*(_DWORD *)(v153 + 4) & 4) != 0;
                    v16[128] += KeQuerySchedulingGroupReadyTime(v153, v71, v67, v68);
                    KeSetSchedulingGroupCpuRates(v82, &v153, &v140);
                    HIDWORD(v159) = v81;
                    if ( v135[0] )
                    {
                      v135[0] = 0;
                      PspEnumProcessesInJobHierarchy(v16, PspSetProcessCacheIsolationCallback, v135, 1LL);
                    }
                  }
                  v15 = 0;
                  if ( (PerfGlobalGroupMask & 0x80000) != 0 )
                    EtwTraceJobSetQuery((_DWORD)v16, 15, (unsigned int)&v159, 0, 0, 1829);
LABEL_208:
                  v126 = Thread;
                  v127 = (__int64)v16;
LABEL_209:
                  PspUnlockJobChain(v127, v126, 0LL);
                  goto LABEL_35;
                }
              }
              else if ( (v69 & 0x20) == 0 )
              {
                v15 = -1073741811;
                goto LABEL_208;
              }
              v71 = 0LL;
              goto LABEL_193;
            }
          }
LABEL_384:
          v15 = -1073741811;
          goto LABEL_282;
        }
LABEL_296:
        P = 0LL;
        v143 = 0LL;
        v91 = 16;
        if ( (_DWORD)v5 != 14 )
          v91 = 2;
        v149 = v91;
        v12 = (unsigned int)v4 % v91;
        v92 = (unsigned int)v4 / v91;
        if ( (unsigned int)v4 % v91 )
        {
          v15 = -1073741820;
          goto LABEL_282;
        }
        v152 = (unsigned int)v4 / v91;
        LODWORD(v199[0]) = 1310721;
        memset((char *)v199 + 4, 0, 0xA4uLL);
        v108 = KeQueryActiveGroupCount() - 1;
        LOWORD(v136) = v108;
        while ( v92 )
        {
          if ( (_DWORD)v5 == 14 )
          {
            v109 = *(__m128i *)v9;
            v164 = v109;
            epi16 = _mm_extract_epi16(v109, 4);
            v164.m128i_i16[4] = epi16;
            v139 = epi16;
            v156 = v109.m128i_i64[0];
            v12 = 0x140000000uLL;
          }
          else
          {
            v111 = *(unsigned __int16 *)v9;
            v139 = v111;
            if ( (unsigned __int16)v111 > v108 )
              goto LABEL_400;
            v12 = 0x140000000uLL;
            v156 = qword_140CFC838[v111];
            epi16 = v139;
          }
          if ( epi16 > v108 || *((_QWORD *)v199 + epi16 + 1) || (v13 = v156, v156 != (v156 & qword_140CFC838[epi16])) )
          {
LABEL_400:
            v15 = -1073741811;
            v133 = -1073741811;
            break;
          }
          KeAddGroupAffinityEx((unsigned __int16 *)v199, v139, v156);
          v92 = --v152;
          v9 = (__int64 *)((char *)Src + v149);
          Src = v9;
          v15 = v133;
          v108 = v136;
        }
        v16 = DeferredContext;
        if ( v15 < 0 )
          goto LABEL_35;
        BugCheckParameter2 = (ULONG_PTR)DeferredContext + 432;
        if ( *((_QWORD *)DeferredContext + 54) )
          goto LABEL_406;
        PoolWithTag = (struct _ERESOURCE *)ExAllocatePoolWithTag(PagedPool, 0x28uLL, 0x614A7350u);
        P = PoolWithTag;
        if ( PoolWithTag )
        {
          v143 = (PERESOURCE)PsChargeSharedPoolQuota(KeGetCurrentThread()->ApcState.Process, 0x28uLL, 0LL);
          if ( v143 )
          {
            v16 = DeferredContext;
LABEL_406:
            SeCaptureSubjectContextEx(
              Thread,
              Thread->ApcState.Process,
              (PSECURITY_SUBJECT_CONTEXT)&SubjectContext.ImpersonationLevel);
            p_ImpersonationLevel = &SubjectContext.ImpersonationLevel;
            if ( AccessMode )
            {
              RequiredPrivileges.PrivilegeCount = 1;
              RequiredPrivileges.Control = 1;
              RequiredPrivileges.Privilege[0].Luid = SeDebugPrivilege;
              RequiredPrivileges.Privilege[0].Attributes = 0;
              v113 = SePrivilegeCheck(
                       &RequiredPrivileges,
                       (PSECURITY_SUBJECT_CONTEXT)&SubjectContext.ImpersonationLevel,
                       1);
              LODWORD(SubjectContext.ClientToken) ^= (LODWORD(SubjectContext.ClientToken) ^ v113) & 1;
            }
            else
            {
              LODWORD(SubjectContext.ClientToken) |= 1u;
            }
            Resource = (PERESOURCE)(v16 + 7);
            ExAcquireResourceExclusiveLite((PERESOURCE)(v16 + 7), 1u);
            v15 = PspEnumProcessesInJobHierarchy(v16, PspSetAffinityLimitCallback, &SubjectContext, 1LL);
            v133 = v15;
            v114 = v143;
            if ( v15 >= 0 )
            {
              v115 = (__int64 *)BugCheckParameter2;
              v116 = *(_QWORD *)BugCheckParameter2;
              if ( *(_QWORD *)BugCheckParameter2 )
              {
                v173 = *(_OWORD *)(v116 + 8);
                v174 = *(_OWORD *)(v116 + 24);
                p_ImpersonationLevel = (SECURITY_IMPERSONATION_LEVEL *)&v173;
              }
              else
              {
                *(_QWORD *)BugCheckParameter2 = P;
                v16[55] = v114;
                P = 0LL;
                p_ImpersonationLevel = 0LL;
                v116 = *v115;
              }
              *(struct _SECURITY_SUBJECT_CONTEXT *)v116 = SubjectContext;
              *(_QWORD *)(v116 + 32) = v158;
              v155[0] = (__int64)v16;
              HIDWORD(v155[1]) = *((_DWORD *)v16 + 64);
              LODWORD(v155[1]) = -17;
              *(_OWORD *)(v16 + 33) = v199[0];
              *(_OWORD *)(v16 + 35) = v199[1];
              *(_OWORD *)(v16 + 37) = v199[2];
              *(_OWORD *)(v16 + 39) = v199[3];
              *(_OWORD *)(v16 + 41) = v199[4];
              *(_OWORD *)(v16 + 43) = v199[5];
              *(_OWORD *)(v16 + 45) = v199[6];
              *(_OWORD *)(v16 + 47) = v199[7];
              *(_OWORD *)(v16 + 49) = v199[8];
              *(_OWORD *)(v16 + 51) = v199[9];
              v16[53] = *(_QWORD *)&v199[10];
              if ( (_DWORD)v5 == 14 && (unsigned int)KeIsEmptyAffinityEx((_WORD *)v16 + 132) )
              {
                *((_DWORD *)v16 + 64) &= ~0x10u;
                _InterlockedAnd((volatile signed __int32 *)v16 + 330, 0xFFFFFFFD);
              }
              else
              {
                *((_DWORD *)v16 + 64) |= 0x10u;
                _InterlockedOr((volatile signed __int32 *)v16 + 330, 2u);
              }
              v16 = DeferredContext;
              PspEnumJobsAndProcessesInJobHierarchy(
                DeferredContext,
                (int)PspSetJobLimitsJobPreCallback,
                0,
                (int)PspSetJobLimitsProcessCallback,
                (__int64)v155,
                5);
              v15 = v133;
            }
            ExReleaseResourceLite(Resource);
            if ( p_ImpersonationLevel )
              SeReleaseSubjectContext((PSECURITY_SUBJECT_CONTEXT)p_ImpersonationLevel);
            if ( !P )
              goto LABEL_35;
            ExFreePoolWithTag(P, 0x614A7350u);
            v107 = (char *)v114;
            goto LABEL_422;
          }
          goto LABEL_346;
        }
LABEL_345:
        v15 = -1073741670;
        goto LABEL_35;
      }
      if ( (_DWORD)v5 != 12 )
      {
        if ( (_DWORD)v5 == 2 )
          goto LABEL_123;
        if ( (_DWORD)v5 != 4 )
        {
          switch ( (_DWORD)v5 )
          {
            case 5:
              v180 = *(__m128i *)v9;
              v181 = *((_OWORD *)v9 + 1);
              v182 = v9[4];
              v15 = (v180.m128i_i32[0] & 0xFFFFFFF0) != 0 ? -1073741811 : -1073741637;
              goto LABEL_282;
            case 6:
              v168 = *(_DWORD *)v9;
              v93 = v168;
              v16 = DeferredContext;
              if ( v168 <= 1 )
              {
                ExAcquireResourceExclusiveLite((PERESOURCE)((char *)DeferredContext + 56), 1u);
                *((_DWORD *)v16 + 113) = v93;
                goto LABEL_120;
              }
              goto LABEL_430;
            case 7:
              P = 0LL;
              *(_OWORD *)Handle = *(_OWORD *)v9;
              if ( !Handle[1] )
              {
                v16 = DeferredContext;
                ExAcquireResourceExclusiveLite((PERESOURCE)((char *)DeferredContext + 56), 1u);
                if ( v16 )
                  ExAcquirePushLockExclusiveEx((ULONG_PTR)(v16 + 129), 0LL);
                v76 = (void *)v16[57];
                v16[57] = 0LL;
                PspUnlockJobMemoryLimitsExclusive(v16, 0LL, 0LL);
                ExReleaseResourceLite((PERESOURCE)(v16 + 7));
                if ( v76 )
                  ObfDereferenceObjectWithTag(v76, 0x624A7350u);
                goto LABEL_35;
              }
              v15 = ObReferenceObjectByHandleWithTag(
                      Handle[1],
                      2u,
                      IoCompletionObjectType,
                      AccessMode,
                      0x624A7350u,
                      &Object,
                      0LL);
              v16 = DeferredContext;
              if ( v15 < 0 )
              {
                v19 = 0LL;
              }
              else
              {
                if ( *((_QWORD *)DeferredContext + 125) )
                {
                  MiniCompletionPacket = 0LL;
                  goto LABEL_47;
                }
                MiniCompletionPacket = (void *)IoAllocateMiniCompletionPacket(
                                                 (__int64)&PspNotificationPacketCallback,
                                                 (__int64)DeferredContext);
                P = MiniCompletionPacket;
                if ( MiniCompletionPacket )
                {
LABEL_47:
                  ExAcquireResourceExclusiveLite((PERESOURCE)(v16 + 7), 1u);
                  if ( v16[57] || (v16[32] & 0x2000) != 0 && (v16[165] & 1) != 0 )
                  {
                    ExReleaseResourceLite((PERESOURCE)(v16 + 7));
                    ObfDereferenceObjectWithTag(Object, 0x624A7350u);
                    v15 = -1073741811;
                    v19 = P;
                  }
                  else
                  {
                    if ( v16[125] )
                    {
                      v19 = P;
                    }
                    else
                    {
                      v16[125] = MiniCompletionPacket;
                      v19 = 0LL;
                    }
                    ExAcquirePushLockExclusiveEx((ULONG_PTR)(v16 + 129), 0LL);
                    v16[58] = Handle[0];
                    v16[57] = Object;
                    v16[59] = 0LL;
                    PspUnlockJobMemoryLimitsExclusive(v16, 0LL, 0LL);
                    if ( (*((_DWORD *)v16 + 219) & 0x40) != 0 )
                      PspEnumProcessesInJobHierarchy(v16, PspAssociateCompletionPortCallback, v16, 1LL);
                    ExReleaseResourceLite((PERESOURCE)(v16 + 7));
                  }
                  goto LABEL_54;
                }
                v15 = -1073741670;
                v19 = 0LL;
              }
LABEL_54:
              if ( v19 )
                IoFreeMiniCompletionPacket(v19);
              goto LABEL_35;
          }
          if ( (_DWORD)v5 != 9 )
          {
            if ( (_DWORD)v5 != 11 )
              goto LABEL_459;
            goto LABEL_296;
          }
LABEL_123:
          memmove(v195, v9, v4);
          if ( (unsigned int)v4 < 0x98 )
            memset((char *)v195 + v4, 0, 152 - v4);
          JobLimitInformationValidFlags = PspGetJobLimitInformationValidFlags((unsigned int)v5, (unsigned int)v4);
          v51 = ~JobLimitInformationValidFlags;
          LODWORD(v143) = ~JobLimitInformationValidFlags;
          v12 = LODWORD(v195[2]);
          if ( (~JobLimitInformationValidFlags & v195[2]) != 0 )
            goto LABEL_384;
          LODWORD(v199[27]) = v195[2];
          Resource = 0LL;
          BugCheckParameter2 = 0LL;
          v160 = 0LL;
          DWORD1(v199[27]) = (v195[2] & 8) != 0 ? LODWORD(v195[5]) : 0;
          if ( (v195[2] & 0x20) != 0 )
          {
            if ( LODWORD(v195[7]) > 6 )
              goto LABEL_384;
            v52 = AccessMode;
            if ( (unsigned int)(LODWORD(v195[7]) - 3) <= 1 )
            {
              LOBYTE(v14) = AccessMode;
              v94 = ((__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD, _QWORD))SeCheckPrivilegedObject)(
                      SeIncreaseBasePriorityPrivilege,
                      P,
                      2LL,
                      v14) & 1;
              LOBYTE(v95) = 4 * v94;
              v136 = v95;
              if ( !v94 )
                goto LABEL_315;
              v12 = LODWORD(v195[2]);
            }
            BYTE9(v199[65]) = v195[7];
          }
          else
          {
            BYTE9(v199[65]) = 0;
            v52 = AccessMode;
          }
          if ( (v12 & 0x80u) != 0LL )
          {
            v96 = HIDWORD(v195[7]);
            if ( HIDWORD(v195[7]) >= 0xA )
              goto LABEL_384;
            if ( HIDWORD(v195[7]) > 5 )
            {
              LOBYTE(v14) = v52;
              v97 = ((__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD, _QWORD))SeCheckPrivilegedObject)(
                      SeIncreaseBasePriorityPrivilege,
                      P,
                      2LL,
                      v14) & 1;
              LOBYTE(v98) = 4 * v97;
              v136 = v98;
              if ( !v97 )
                goto LABEL_315;
              v12 = LODWORD(v195[2]);
              v96 = HIDWORD(v195[7]);
            }
            DWORD1(v199[41]) = v96;
          }
          else
          {
            DWORD1(v199[41]) = 5;
          }
          if ( (v12 & 2) != 0 )
          {
            if ( !v195[0] )
              goto LABEL_384;
            *(_QWORD *)&v199[25] = v195[0];
          }
          else
          {
            *(_QWORD *)&v199[25] = 0LL;
          }
          v149 = v12 & 4;
          if ( (v12 & 4) != 0 )
          {
            if ( !v195[1] )
              goto LABEL_384;
            *((_QWORD *)&v199[25] + 1) = v195[1];
          }
          if ( (v12 & 1) == 0 )
          {
            v199[26] = 0uLL;
            goto LABEL_135;
          }
          v99 = v195[3];
          if ( !v195[3] && !v195[4] || v195[3] == -1LL && v195[4] == -1LL || v195[3] > v195[4] || v195[3] < 0x14000uLL )
            goto LABEL_384;
          if ( v195[3] <= (unsigned __int64)PspMinimumWorkingSet )
          {
LABEL_334:
            *(_QWORD *)&v199[26] = v99;
            *((_QWORD *)&v199[26] + 1) = v195[4];
LABEL_135:
            if ( (v12 & 0x100) != 0 )
            {
              if ( v195[14] < 0x1000uLL )
                goto LABEL_384;
              *(_QWORD *)&v199[47] = v195[14] >> 12;
            }
            else
            {
              *(_QWORD *)&v199[47] = 0LL;
            }
            if ( (v12 & 0x200) != 0 )
            {
              if ( v195[15] < 0x1000uLL )
                goto LABEL_384;
              *((_QWORD *)&v199[47] + 1) = v195[15] >> 12;
            }
            else
            {
              *((_QWORD *)&v199[47] + 1) = 0LL;
            }
            if ( (v12 & 0x200000) != 0 )
            {
              if ( v195[18] < 0x1000uLL )
                goto LABEL_384;
              *(_QWORD *)&v199[48] = v195[18] >> 12;
            }
            else
            {
              *(_QWORD *)&v199[48] = 0LL;
            }
            DWORD2(v199[27]) = 1310721;
            memset((char *)&v199[27] + 12, 0, 0xA4uLL);
            v132 = v199[27];
            v16 = DeferredContext;
            if ( (v199[27] & 0x10) != 0 )
            {
              if ( (*((_DWORD *)DeferredContext + 330) & 2) != 0 || !v195[6] )
                goto LABEL_430;
              if ( !*((_QWORD *)DeferredContext + 54) )
              {
                PoolWithTag = (struct _ERESOURCE *)ExAllocatePoolWithTag(PagedPool, 0x28uLL, 0x614A7350u);
                Resource = PoolWithTag;
                if ( !PoolWithTag )
                  goto LABEL_345;
                BugCheckParameter2 = PsChargeSharedPoolQuota(KeGetCurrentThread()->ApcState.Process, 0x28uLL, 0LL);
                if ( !BugCheckParameter2 )
                {
LABEL_346:
                  v102 = 1632269136;
                  v75 = PoolWithTag;
LABEL_348:
                  ExFreePoolWithTag(v75, v102);
                  v15 = -1073741670;
                  goto LABEL_282;
                }
                v16 = DeferredContext;
                v132 = v199[27];
                v15 = v133;
              }
              SeCaptureSubjectContextEx(
                Thread,
                Thread->ApcState.Process,
                (PSECURITY_SUBJECT_CONTEXT)&SubjectContext.ImpersonationLevel);
              v160 = (PSECURITY_SUBJECT_CONTEXT)&SubjectContext.ImpersonationLevel;
              if ( AccessMode )
              {
                RequiredPrivileges.PrivilegeCount = 1;
                RequiredPrivileges.Control = 1;
                RequiredPrivileges.Privilege[0].Luid = SeDebugPrivilege;
                RequiredPrivileges.Privilege[0].Attributes = 0;
                v101 = SePrivilegeCheck(
                         &RequiredPrivileges,
                         (PSECURITY_SUBJECT_CONTEXT)&SubjectContext.ImpersonationLevel,
                         1);
                LODWORD(SubjectContext.ClientToken) ^= (LODWORD(SubjectContext.ClientToken) ^ v101) & 1;
              }
              else
              {
                LODWORD(SubjectContext.ClientToken) |= 1u;
              }
              v53 = v136;
              LOBYTE(v53) = v136 | 2;
              v136 = v53;
              v51 = (int)v143;
            }
            else
            {
              LOBYTE(v53) = v136;
            }
            AccessMode = v53;
            v143 = (PERESOURCE)(v16 + 7);
            ExAcquireResourceExclusiveLite((PERESOURCE)(v16 + 7), 1u);
            v54 = v132;
            if ( (v132 & 4) == 0 )
            {
              if ( (v132 & 0x40) != 0 )
              {
                v54 = v16[32] & 4 | v132;
                *((_QWORD *)&v199[25] + 1) = v16[29];
              }
              else
              {
                *((_QWORD *)&v199[25] + 1) = 0LL;
              }
            }
            v55 = v54 & 0xFFFFFFBF;
            LODWORD(v199[27]) = v55;
            if ( (AccessMode & 2) != 0 )
            {
              if ( (v16[165] & 2) == 0 )
              {
                if ( (v16[32] & 0x10) != 0 )
                {
                  KeFirstGroupAffinityEx((__int64)&v164, (_WORD *)v16 + 132);
                  Group = v164.m128i_u16[4];
                }
                else
                {
                  Group = KeGetCurrentPrcb()->Group;
                  v164.m128i_i16[4] = Group;
                }
                if ( v195[6] == (qword_140CFC838[Group] & v195[6]) )
                {
                  if ( WORD4(v199[27]) <= (unsigned int)v164.m128i_i16[4] )
                    WORD4(v199[27]) = v164.m128i_i16[4] + 1;
                  *((_QWORD *)&v199[28] + Group) |= v195[6];
                  v16 = DeferredContext;
                  v15 = PspEnumProcessesInJobHierarchy(
                          DeferredContext,
                          PspSetAffinityLimitCallback,
                          &SubjectContext,
                          1LL);
                  v133 = v15;
                  if ( v15 >= 0 )
                  {
                    v104 = v16[54];
                    if ( v104 )
                    {
                      v173 = *(_OWORD *)(v104 + 8);
                      v174 = *(_OWORD *)(v104 + 24);
                      v160 = (PSECURITY_SUBJECT_CONTEXT)&v173;
                    }
                    else
                    {
                      v16[54] = Resource;
                      v16[55] = BugCheckParameter2;
                      Resource = 0LL;
                      v160 = 0LL;
                      v104 = v16[54];
                    }
                    *(struct _SECURITY_SUBJECT_CONTEXT *)v104 = SubjectContext;
                    *(_QWORD *)(v104 + 32) = v158;
                    goto LABEL_148;
                  }
                }
                else
                {
                  v15 = -1073741811;
                  v133 = -1073741811;
                  v16 = DeferredContext;
                }
LABEL_356:
                v61 = v136;
LABEL_159:
                v62 = v61 & 1;
                if ( v62 )
                {
                  PspLockWorkingSetChangeExclusiveUnsafe();
                  _InterlockedOr((volatile signed __int32 *)v16 + 330, 0x100u);
                  v16 = DeferredContext;
                  v105 = (char *)DeferredContext + 40;
                  for ( i = (char *)*((_QWORD *)DeferredContext + 5); i != v105; i = *(char **)i )
                  {
                    if ( (*((_DWORD *)i - 90) & 1) == 0 )
                      PspAddProcessToWorkingSetChangeList(i - 1480);
                  }
                  v15 = v133;
                }
                ExReleaseResourceLite(v143);
                if ( v62 )
                  PspApplyWorkingSetLimits(v16);
                if ( v160 )
                  SeReleaseSubjectContext(v160);
                if ( !Resource )
                  goto LABEL_35;
                ExFreePoolWithTag(Resource, 0x614A7350u);
                v107 = (char *)BugCheckParameter2;
LABEL_422:
                PsReturnSharedPoolQuota(v107, 0x28uLL, 0LL);
                goto LABEL_35;
              }
            }
            else if ( (v55 & 0x4000) == 0 || (v16[165] & 2) != 0 )
            {
LABEL_148:
              v56 = v16 + 32;
              P = v16 + 32;
              if ( (v16[32] & 1) != 0 && (v199[27] & 1) == 0 )
              {
                _InterlockedOr(v129, 0);
                if ( (qword_140C13070 & 1) != 0 )
                {
                  ExfAcquireReleasePushLockExclusive((ULONG_PTR)&qword_140C13070);
                  v56 = P;
                }
                v15 = v133;
                v16 = DeferredContext;
              }
              v155[0] = (__int64)v16;
              HIDWORD(v155[1]) = *v56;
              *((_OWORD *)v16 + 15) = v199[26];
              *((_DWORD *)v16 + 65) = DWORD1(v199[27]);
              if ( (AccessMode & 2) != 0 )
              {
                *(_OWORD *)(v16 + 33) = *(_OWORD *)((char *)&v199[27] + 8);
                *(_OWORD *)(v16 + 35) = *(_OWORD *)((char *)&v199[28] + 8);
                *(_OWORD *)(v16 + 37) = *(_OWORD *)((char *)&v199[29] + 8);
                *(_OWORD *)(v16 + 39) = *(_OWORD *)((char *)&v199[30] + 8);
                *(_OWORD *)(v16 + 41) = *(_OWORD *)((char *)&v199[31] + 8);
                *(_OWORD *)(v16 + 43) = *(_OWORD *)((char *)&v199[32] + 8);
                *(_OWORD *)(v16 + 45) = *(_OWORD *)((char *)&v199[33] + 8);
                *(_OWORD *)(v16 + 47) = *(_OWORD *)((char *)&v199[34] + 8);
                *(_OWORD *)(v16 + 49) = *(_OWORD *)((char *)&v199[35] + 8);
                *(_OWORD *)(v16 + 51) = *(_OWORD *)((char *)&v199[36] + 8);
                v16[53] = *((_QWORD *)&v199[37] + 1);
                v56 = P;
              }
              *((_BYTE *)v16 + 873) = BYTE9(v199[65]);
              *((_DWORD *)v16 + 121) = DWORD1(v199[41]);
              *((_OWORD *)v16 + 14) = v199[25];
              v57 = (char *)(v16 + 29);
              if ( (_DWORD)v5 == 9 )
              {
                ExAcquirePushLockExclusiveEx((ULONG_PTR)(v16 + 129), 0LL);
                v58 = (int *)P;
                *(_DWORD *)P = LODWORD(v199[27]) | *(_DWORD *)P & v51;
                *((_OWORD *)v16 + 36) = v199[47];
                v16[74] = *(_QWORD *)&v199[48];
                PspUnlockJobMemoryLimitsExclusive(v16, 0LL, 0LL);
                v59 = *v58;
                v57 = (char *)(v16 + 29);
              }
              else
              {
                v59 = LODWORD(v199[27]) | *v56 & v51;
                *v56 = v59;
                v58 = (int *)P;
              }
              LODWORD(v155[1]) = ~(HIDWORD(v155[1]) | v59);
              if ( v149 )
              {
                PspEnumProcessesInJobHierarchy(v16, PspSetJobTimeLimitCallback, v57, 1LL);
                v16[23] = 0LL;
                v16[24] = 0LL;
                KeResetEvent((PRKEVENT)v16);
              }
              if ( (*v58 & 6) != 0 )
              {
                _InterlockedAdd64(&PspJobTimeLimitsRequest, 1uLL);
                v16 = DeferredContext;
                v15 = v133;
              }
              v60 = v155[1];
              PspEnumJobsAndProcessesInJobHierarchy(
                v16,
                (int)PspSetJobLimitsJobPreCallback,
                (int)PspSetJobLimitsJobPostCallback,
                (int)PspSetJobLimitsProcessCallback,
                (__int64)v155,
                5);
              v61 = AccessMode | 1;
              if ( (v60 & 1) != 0 )
                v61 = AccessMode;
              goto LABEL_159;
            }
            v15 = -1073741811;
            v133 = -1073741811;
            goto LABEL_356;
          }
          if ( SeSinglePrivilegeCheck(SeIncreaseBasePriorityPrivilege, v52) )
          {
            v12 = LODWORD(v195[2]);
            v99 = v195[3];
            goto LABEL_334;
          }
LABEL_315:
          v15 = -1073741727;
          goto LABEL_282;
        }
        v147 = *(_DWORD *)v9;
        if ( (v147 & 0xFFFFFF00) != 0 )
          goto LABEL_384;
        v83 = 8;
        v16 = DeferredContext;
        PspLockJobChain(DeferredContext, Thread, 0LL);
        if ( (unsigned __int8)PspDoesJobHierarchyPermitUILimits((__int64)v16) )
        {
          if ( *((_DWORD *)v16 + 120) == -2 )
          {
            v15 = -1073741790;
          }
          else
          {
            v16 = DeferredContext;
            PspBindProcessSessionToJob(DeferredContext, KeGetCurrentThread()->ApcState.Process);
            v151 = *v84;
            if ( v151 > 0xFFFFFFFD )
              goto LABEL_247;
            if ( v147 == *((_DWORD *)v16 + 112) )
              goto LABEL_247;
            v178 = 0;
            PspUnlockJobChain(v16, Thread, 1LL);
            v83 = 0;
            v176 = v16;
            v177 = 0;
            v179 = v147;
            v15 = PsInvokeWin32Callout(6, (__int64)&v176, 1, (__int64)&v151);
            v133 = v15;
            if ( v15 >= 0 )
            {
LABEL_247:
              *((_DWORD *)v16 + 112) = v147;
              _InterlockedOr((volatile signed __int32 *)v16 + 330, 0x10u);
              v16 = DeferredContext;
              v15 = v133;
            }
          }
        }
        else
        {
          v15 = -1073741637;
        }
        v126 = Thread;
        v127 = (__int64)v16;
        if ( (unsigned __int8)v83 >= 8u )
          goto LABEL_209;
LABEL_249:
        PspUnlockJob(v127, (__int64)v126);
        goto LABEL_35;
      }
LABEL_66:
      if ( (_DWORD)v4 == 56 )
      {
        v191 = *(__m128i *)BugCheckParameter2;
        v192 = *(__m128i *)(BugCheckParameter2 + 16);
        v193 = *(__m128i *)(BugCheckParameter2 + 32);
        v194 = *(_QWORD *)(BugCheckParameter2 + 48);
        v13 = (unsigned int)v194;
        LODWORD(v189[5]) = v194;
        v21 = v191.m128i_i64[0];
        v189[0] = v191.m128i_i64[0];
        v22 = _mm_srli_si128(v191, 8).m128i_u64[0];
        v189[1] = v22;
        v14 = (int *)v192.m128i_i64[0];
        v189[2] = v192.m128i_i64[0];
        v23 = _mm_srli_si128(v192, 8).m128i_u64[0];
        v189[6] = v23;
        v12 = v193.m128i_i64[0];
        v189[3] = v193.m128i_i64[0];
        v189[4] = __PAIR64__(_mm_cvtsi128_si32(_mm_srli_si128(v193, 12)), _mm_cvtsi128_si32(_mm_srli_si128(v193, 8)));
        v24 = 2589188;
        JobLimitInformationValidFlags = 2589188;
      }
      else
      {
        if ( (_DWORD)v4 == 48 )
        {
          v196 = *(__m128i *)BugCheckParameter2;
          v197 = *(__m128i *)(BugCheckParameter2 + 16);
          v198 = *(__m128i *)(BugCheckParameter2 + 32);
          v13 = (unsigned int)_mm_cvtsi128_si32(_mm_srli_si128(v198, 8));
          LODWORD(v189[5]) = v13;
          v21 = v196.m128i_i64[0];
          v189[0] = v196.m128i_i64[0];
          v22 = _mm_srli_si128(v196, 8).m128i_u64[0];
          v189[1] = v22;
          v14 = (int *)v197.m128i_i64[0];
          v189[2] = v197.m128i_i64[0];
          v12 = _mm_srli_si128(v197, 8).m128i_u64[0];
          v189[3] = v12;
          v189[4] = __PAIR64__(_mm_cvtsi128_si32(_mm_srli_si128(v198, 4)), _mm_cvtsi128_si32(v198));
          v24 = 459268;
          JobLimitInformationValidFlags = 459268;
        }
        else
        {
          memmove(v189, v9, v4);
          v24 = 2064900;
          JobLimitInformationValidFlags = 2064900;
          v13 = LODWORD(v189[5]);
          v12 = v189[3];
          v14 = (int *)v189[2];
          v22 = v189[1];
          v21 = v189[0];
        }
        v23 = v189[6];
      }
      if ( (~v24 & (unsigned int)v13) != 0 )
        goto LABEL_384;
      if ( (v13 & 0x8000) != 0 )
      {
        if ( v23 < 0x1000 )
          goto LABEL_384;
      }
      else
      {
        v23 = 0LL;
        v189[6] = 0LL;
      }
      if ( (v13 & 0x200) != 0 )
      {
        if ( v12 < 0x1000 || v12 < v23 )
          goto LABEL_384;
      }
      else
      {
        v189[3] = 0LL;
      }
      if ( (v13 & 4) != 0 )
      {
        if ( !v14 )
          goto LABEL_384;
      }
      else
      {
        v189[2] = 0LL;
      }
      if ( (v13 & 0x10000) != 0 )
      {
        if ( !v21 )
          goto LABEL_384;
      }
      else
      {
        v189[0] = 0LL;
      }
      if ( (v13 & 0x20000) != 0 )
      {
        if ( !v22 )
          goto LABEL_384;
      }
      else
      {
        v189[1] = 0LL;
      }
      for ( j = 0LL; (int)j < 3; j = (unsigned int)(v12 + 1) )
      {
        PspNotificationLimitRateControlToleranceField(v189, j, v13);
        PspNotificationLimitRateControlToleranceIntervalField(v189);
        v29 = PspRateControlLimitFlag((unsigned int)v26, v26, v27, v28);
        if ( (v29 & (unsigned int)v13) != 0 )
        {
          if ( !*v14 || *v14 > 3 || !*v30 || *v30 > 3 )
            goto LABEL_384;
        }
        else
        {
          *v14 = 0;
          *v30 = 0;
          v13 = LODWORD(v189[5]);
        }
      }
      v16 = DeferredContext;
      v31 = (int **)((char *)DeferredContext + 984);
      if ( *((_QWORD *)DeferredContext + 123) )
      {
        v32 = 0LL;
        BugCheckParameter2 = 0LL;
      }
      else
      {
        v32 = (struct _ERESOURCE *)ExAllocatePoolWithTag(PagedPool, 0x88uLL, 0x624A7350u);
        if ( !v32 )
          goto LABEL_345;
        BugCheckParameter2 = PsChargeSharedPoolQuota(KeGetCurrentThread()->ApcState.Process, 0x88uLL, 0LL);
        v75 = v32;
        if ( !BugCheckParameter2 )
        {
          v102 = 1649046352;
          goto LABEL_348;
        }
        memset(v32, 0, 0x88uLL);
        v16 = DeferredContext;
      }
      Resource = (PERESOURCE)(v16 + 7);
      ExAcquireResourceExclusiveLite((PERESOURCE)(v16 + 7), 1u);
      if ( *v31 )
      {
        if ( v32 )
        {
          ExFreePoolWithTag(v32, 0x624A7350u);
          PsReturnSharedPoolQuota((char *)BugCheckParameter2, 0x88uLL, 0LL);
        }
      }
      else
      {
        *v31 = (int *)v32;
        v16[124] = BugCheckParameter2;
      }
      v33 = *v31;
      v34 = **v31;
      *((_QWORD *)v33 + 1) = v189[0];
      *((_QWORD *)v33 + 2) = v189[1];
      *((_QWORD *)v33 + 3) = v189[2];
      v35 = 0LL;
      v36 = v33 + 15;
      while ( (int)v35 < 3 )
      {
        v37 = (_DWORD *)PspNotificationLimitRateControlToleranceField(v189, v35, v36);
        *(_DWORD *)(v38 - 12) = *v37;
        v39 = (_DWORD *)PspNotificationLimitRateControlToleranceIntervalField(v189);
        *v40 = *v39;
        v35 = (unsigned int)(v41 + 1);
        v36 = v40 + 1;
      }
      BugCheckParameter2 = (ULONG_PTR)(v16 + 129);
      ExAcquirePushLockExclusiveEx((ULONG_PTR)(v16 + 129), 0LL);
      *((_QWORD *)v33 + 4) = v189[6] >> 12;
      *((_QWORD *)v33 + 5) = v189[3] >> 12;
      **v31 = v189[5];
      PspUnlockJobMemoryLimitsExclusive(v16, 0LL, 0LL);
      if ( (**v31 & 0xFFFF7DFF) != 0 )
      {
        _InterlockedAdd64(&PspJobTimeLimitsRequest, 1uLL);
        v16 = DeferredContext;
      }
      if ( v34 )
      {
        v43 = *v31;
        if ( **v31 )
        {
LABEL_105:
          if ( (PerfGlobalGroupMask & 0x80000) != 0 )
            EtwTraceJobSetQuery((_DWORD)v16, v5, (unsigned int)v189, 0, 0, 1829);
          ExReleaseResourceLite(Resource);
          ExAcquirePushLockSharedEx(BugCheckParameter2, 0LL);
          v44 = v16[167];
          v16 = DeferredContext;
          JobMemoryUsageNotificationViolations = PspGetJobMemoryUsageNotificationViolations(
                                                   (__int64)DeferredContext,
                                                   *((_QWORD *)DeferredContext + 122),
                                                   *((_QWORD *)DeferredContext + 122) + v44,
                                                   33280);
          PspUnlockJobMemoryLimitsShared((__int64)v16, 0LL);
          if ( JobMemoryUsageNotificationViolations )
          {
            PspScheduleEnforcementWorker(v16[135]);
            v16 = DeferredContext;
          }
          goto LABEL_34;
        }
      }
      else
      {
        v43 = *v31;
        if ( !**v31 )
          goto LABEL_105;
      }
      PspEnumJobsAndProcessesInJobHierarchy(v16, (int)PspSetJobNotificationCountCallback, 0, 0, (__int64)v43, 5);
      goto LABEL_105;
    }
    if ( (int)v5 > 40 )
    {
      if ( (_DWORD)v5 == 41 )
      {
        v175 = *(_DWORD *)v9;
        v16 = DeferredContext;
        if ( !PspJobIsAppSilo((__int64)DeferredContext) || (_DWORD)v13 != 2 )
          goto LABEL_430;
        v89 = (struct _ERESOURCE *)(v16 + 7);
        ExAcquireResourceExclusiveLite((PERESOURCE)(v16 + 7), 1u);
        if ( *((_DWORD *)v16 + 306) )
        {
          v15 = -1073740529;
        }
        else
        {
          v128 = _interlockedbittestandset((volatile signed __int32 *)v16 + 330, 0x1Du);
          v16 = DeferredContext;
          if ( v128 )
          {
            v15 = 255;
          }
          else
          {
            PspBeginSiloTeardown(DeferredContext);
            v15 = 0;
          }
        }
        goto LABEL_481;
      }
      if ( (_DWORD)v5 == 42 )
      {
        v63 = 0;
        v186[0] = *(_OWORD *)v9;
        v186[1] = *((_OWORD *)v9 + 1);
        v186[2] = *((_OWORD *)v9 + 2);
        v186[3] = *((_OWORD *)v9 + 3);
        *(_QWORD *)&v186[4] = v9[8];
        if ( (v186[0] & 0xFFFFFFFC) != 0 || (v186[0] & 3) == 0 )
        {
          v15 = -1073741811;
          v16 = DeferredContext;
        }
        else
        {
          v63 = 8;
          v64 = Thread;
          v16 = DeferredContext;
          PspLockRootJobExclusive(DeferredContext, Thread, &v150);
          PspLockJobConditionally((__int64)v16, &v150);
          v15 = PspSetJobIoAttribution(v16);
          if ( v15 >= 0 )
          {
            PspUnlockJobConditionally((__int64)v16, &v150);
            PspUnlockJob(v150, (__int64)v64);
            v63 = 0;
          }
        }
        if ( (unsigned __int8)v63 < 8u )
          goto LABEL_35;
        PspUnlockJobConditionally((__int64)v16, &v150);
        v126 = Thread;
        v127 = v150;
        goto LABEL_249;
      }
      if ( (_DWORD)v5 != 43 )
      {
        if ( (_DWORD)v5 != 44 )
        {
          if ( (_DWORD)v5 != 45 )
          {
            if ( (_DWORD)v5 == 46 )
            {
              v165 = *v9;
              v16 = DeferredContext;
              v20 = PspSetEnergyTrackingStateJobTree(DeferredContext, (__int64)&v165);
              goto LABEL_64;
            }
            if ( (_DWORD)v5 != 47 )
              goto LABEL_459;
            v146 = *(_BYTE *)v9;
            if ( v146 != 1 )
              goto LABEL_384;
            v120 = SeSinglePrivilegeCheck(SeTcbPrivilege, AccessMode);
            v16 = DeferredContext;
            if ( v120 )
            {
              if ( (*((_DWORD *)DeferredContext + 330) & 0x40000000) != 0 )
              {
                v15 = (unsigned __int8)PspSetJobSiloThreadImpersonationPolicy(DeferredContext, 2LL) == 0
                    ? 0xC0000022
                    : 0;
                goto LABEL_35;
              }
              goto LABEL_430;
            }
LABEL_428:
            v15 = -1073741727;
            goto LABEL_35;
          }
          v16 = DeferredContext;
          if ( (*((_DWORD *)DeferredContext + 330) & 0x40000000) != 0 )
          {
            v166 = 0LL;
            v167 = *(__m128i *)v9;
            v121 = _mm_srli_si128(v167, 8).m128i_u64[0];
            if ( !v121
              || (v12 = 518LL, (unsigned __int16)(v167.m128i_i16[0] - 1) > 0x206u)
              || (v167.m128i_i8[0] & 1) != 0 )
            {
              v15 = -1073741811;
              v133 = -1073741811;
              goto LABEL_35;
            }
            if ( AccessMode == 1 )
            {
              if ( (v121 & 1) != 0 )
                ExRaiseDatatypeMisalignment();
              if ( v121 + v167.m128i_u16[0] > 0x7FFFFFFF0000LL || v121 + v167.m128i_u16[0] < v121 )
                MEMORY[0x7FFFFFFF0000] = 0;
            }
            v122 = v167.m128i_u16[0];
            v123 = (wchar_t *)ExAllocatePoolWithTag(PagedPool, v167.m128i_u16[0], 0x72537350u);
            v88 = v123;
            v166 = v123;
            if ( !v123 )
            {
              v15 = -1073741670;
              v133 = -1073741670;
              goto LABEL_35;
            }
            memmove(v123, (const void *)v121, v122);
            v124 = v122 >> 1;
            v125 = wcsnlen(v88, v124);
            if ( v125 == v124 )
            {
              v167.m128i_i64[1] = (__int64)v88;
              v15 = PspAssignSiloSystemRootPath(v16, &v167);
            }
            else
            {
              v15 = -1073741811;
            }
            if ( !v88 )
              goto LABEL_35;
            v118 = 1918071632;
            goto LABEL_446;
          }
LABEL_429:
          v15 = -1073740535;
          goto LABEL_35;
        }
        v16 = DeferredContext;
        v89 = (struct _ERESOURCE *)((char *)DeferredContext + 56);
        ExAcquireResourceExclusiveLite((PERESOURCE)((char *)DeferredContext + 56), 1u);
        if ( *((int *)v16 + 330) >= 0 )
        {
          *(_OWORD *)(v16 + 157) = *(_OWORD *)v9;
          _InterlockedOr((volatile signed __int32 *)v16 + 330, 0x80000000);
          ExReleaseResourceLite(v89);
          v15 = 0;
LABEL_282:
          v16 = DeferredContext;
          goto LABEL_35;
        }
        v15 = -1073741791;
LABEL_481:
        v50 = v89;
        goto LABEL_121;
      }
      v185 = *v9;
      v16 = DeferredContext;
      Silo = PspSetJobMemoryPartition(DeferredContext);
LABEL_287:
      v15 = Silo;
      goto LABEL_35;
    }
    switch ( (_DWORD)v5 )
    {
      case 0x28:
        v119 = SeSinglePrivilegeCheck(SeTcbPrivilege, AccessMode);
        v16 = DeferredContext;
        if ( !v119 )
          goto LABEL_428;
        if ( (*((_DWORD *)DeferredContext + 330) & 0x40000000) == 0 )
          goto LABEL_429;
        if ( !(unsigned __int8)PspSetJobSiloThreadImpersonationPolicy(DeferredContext, 4LL) )
          goto LABEL_430;
        v184 = *v9;
        v145 = *((_BYTE *)v9 + 8);
        LOBYTE(v12) = AccessMode;
        Silo = PspConvertSiloToServerSilo(v16, v12);
        goto LABEL_287;
      case 0x19:
        v16 = DeferredContext;
        ExAcquireResourceExclusiveLite((PERESOURCE)((char *)DeferredContext + 56), 1u);
        KeResetEvent((PRKEVENT)v16);
LABEL_33:
        ExReleaseResourceLite((PERESOURCE)(v16 + 7));
        goto LABEL_34;
      case 0x1B:
        v16 = DeferredContext;
        if ( DeferredContext )
          ExAcquirePushLockExclusiveEx((ULONG_PTR)DeferredContext + 1032, 0LL);
        v16[76] = 0LL;
        v16[75] = 0LL;
        PspUnlockJobMemoryLimitsExclusive(v16, 0LL, 0LL);
        goto LABEL_34;
    }
    if ( (_DWORD)v5 != 31 )
    {
      switch ( (_DWORD)v5 )
      {
        case ' ':
          v16 = DeferredContext;
          Silo = PspSetNetRateControl(v9, (unsigned int)v4, DeferredContext);
          break;
        case '!':
          goto LABEL_66;
        case '#':
          v16 = DeferredContext;
          Silo = PspCreateSilo((__int64)DeferredContext);
          break;
        case '%':
          v117 = SeSinglePrivilegeCheck(SeTcbPrivilege, AccessMode);
          v16 = DeferredContext;
          if ( !v117 )
            goto LABEL_428;
          if ( (*((_DWORD *)DeferredContext + 330) & 0x40000000) == 0 )
            goto LABEL_429;
          if ( !(unsigned __int8)PspSetJobSiloThreadImpersonationPolicy(DeferredContext, 4LL) )
            goto LABEL_430;
          v170 = *(_DWORD *)v9;
          Silo = ObCreateSiloRootDirectory(v16);
          break;
        default:
          goto LABEL_459;
      }
      goto LABEL_287;
    }
    memmove(v187, v9, v4);
    v12 = v187[3];
    if ( v187[3] )
    {
      v85 = v187[5];
      v86 = PagedPool;
      if ( !LOWORD(v187[5]) )
        goto LABEL_267;
      if ( (v187[3] & 1) != 0 )
        ExRaiseDatatypeMisalignment();
      v13 = v187[3] + LOWORD(v187[5]);
      if ( v13 > 0x7FFFFFFF0000LL || v13 < v187[3] )
      {
        MEMORY[0x7FFFFFFF0000] = 0;
        v85 = v187[5];
      }
      if ( !v85 || (v85 & 1) != 0 )
      {
LABEL_267:
        v15 = -1073741811;
        v133 = -1073741811;
        v16 = DeferredContext;
        goto LABEL_278;
      }
      v161 = 1;
      if ( AccessMode == 1 )
        v86 = 9;
      v161 = v86;
      v172[1] = ExAllocatePoolWithQuotaTag(v86, v85 + 2LL, 0x624A7350u);
      if ( !v172[1] )
      {
        v15 = -1073741801;
        v133 = -1073741801;
        v16 = DeferredContext;
LABEL_278:
        v88 = (wchar_t *)v172[1];
        if ( !v172[1] )
          goto LABEL_35;
        v118 = 0;
LABEL_446:
        ExFreePoolWithTag(v88, v118);
        goto LABEL_35;
      }
      v87 = v172[1];
      memmove(v172[1], (const void *)v187[3], LOWORD(v187[5]));
      v87[(unsigned __int64)LOWORD(v187[5]) >> 1] = 0;
      v187[3] = v87;
    }
    if ( (v187[4] & 0xFFFFFFF000000000uLL) != 0 )
    {
      v15 = -1073741811;
    }
    else
    {
      if ( !v187[10] && !v187[7] && !v187[2] || (unsigned __int8)PspIsContextAdmin() )
      {
        v16 = DeferredContext;
        v15 = PspSetJobIoRateControl((volatile signed __int64 *)DeferredContext, (__int64)v187);
        goto LABEL_278;
      }
      v15 = -1073741790;
    }
    v16 = DeferredContext;
    goto LABEL_278;
  }
  return result;
}
