/*
 * XREFs of NtSetInformationJobObject @ 0x14067DE60
 * Callers:
 *     <none>
 * Callees:
 *     KeSetSchedulingGroupWeights @ 0x140204EE0 (KeSetSchedulingGroupWeights.c)
 *     KeSetSchedulingGroupCpuRates @ 0x140204FD0 (KeSetSchedulingGroupCpuRates.c)
 *     KeSetSchedulingGroupRankBias @ 0x140205628 (KeSetSchedulingGroupRankBias.c)
 *     KeQuerySchedulingGroupReadyTime @ 0x140237934 (KeQuerySchedulingGroupReadyTime.c)
 *     KeSetSchedulingGroupCycleNotification @ 0x14023F818 (KeSetSchedulingGroupCycleNotification.c)
 *     KeFirstGroupAffinityEx @ 0x140240B10 (KeFirstGroupAffinityEx.c)
 *     ExfAcquireReleasePushLockExclusive @ 0x140241564 (ExfAcquireReleasePushLockExclusive.c)
 *     KeInitializeDpc @ 0x140269650 (KeInitializeDpc.c)
 *     KeResetEvent @ 0x140269BE0 (KeResetEvent.c)
 *     KeQueryActiveGroupCount @ 0x1402942A0 (KeQueryActiveGroupCount.c)
 *     KeIsEmptyAffinityEx @ 0x1402CCE60 (KeIsEmptyAffinityEx.c)
 *     ExAcquirePushLockExclusiveEx @ 0x1403556E0 (ExAcquirePushLockExclusiveEx.c)
 *     ExAcquirePushLockSharedEx @ 0x1403558A0 (ExAcquirePushLockSharedEx.c)
 *     KiLeaveGuardedRegionUnsafe @ 0x140355AE0 (KiLeaveGuardedRegionUnsafe.c)
 *     ObfDereferenceObjectWithTag @ 0x140355E90 (ObfDereferenceObjectWithTag.c)
 *     ExReleaseResourceLite @ 0x140356140 (ExReleaseResourceLite.c)
 *     ExAcquireResourceExclusiveLite @ 0x1403568F0 (ExAcquireResourceExclusiveLite.c)
 *     ExAllocatePoolWithQuotaTag @ 0x14035DD70 (ExAllocatePoolWithQuotaTag.c)
 *     __security_check_cookie @ 0x1403D05D0 (__security_check_cookie.c)
 *     wcsnlen @ 0x1403D4240 (wcsnlen.c)
 *     memmove @ 0x140414040 (memmove.c)
 *     memset @ 0x140414300 (memset.c)
 *     KeAddGroupAffinityEx @ 0x140513740 (KeAddGroupAffinityEx.c)
 *     PspJobIsAppSilo @ 0x14058121C (PspJobIsAppSilo.c)
 *     PspLockWorkingSetChangeExclusiveUnsafe @ 0x140581BAC (PspLockWorkingSetChangeExclusiveUnsafe.c)
 *     PspSetJobIoRateControl @ 0x1405D7F68 (PspSetJobIoRateControl.c)
 *     PspCreateSilo @ 0x1405D90DC (PspCreateSilo.c)
 *     PspAddSchedulingGroupToJobChain @ 0x1405D9B0C (PspAddSchedulingGroupToJobChain.c)
 *     IoFreeMiniCompletionPacket @ 0x1405D9F40 (IoFreeMiniCompletionPacket.c)
 *     PspFreeRateControl @ 0x1405D9FBC (PspFreeRateControl.c)
 *     PspAllocateRateControl @ 0x1405DA00C (PspAllocateRateControl.c)
 *     PspLockRootJobExclusive @ 0x1405DA420 (PspLockRootJobExclusive.c)
 *     PspFreezeJobTree @ 0x1405DA488 (PspFreezeJobTree.c)
 *     PspSetJobIoAttribution @ 0x1405DAC90 (PspSetJobIoAttribution.c)
 *     PspScheduleEnforcementWorker @ 0x1405DB440 (PspScheduleEnforcementWorker.c)
 *     PspSetBackgroundJobTree @ 0x14061B560 (PspSetBackgroundJobTree.c)
 *     PspDoesJobHierarchyPermitUILimits @ 0x14062177C (PspDoesJobHierarchyPermitUILimits.c)
 *     SePrivilegeCheck @ 0x140649D60 (SePrivilegeCheck.c)
 *     SeReleaseSubjectContext @ 0x14064B710 (SeReleaseSubjectContext.c)
 *     SeCaptureSubjectContextEx @ 0x14064CA80 (SeCaptureSubjectContextEx.c)
 *     PsChargeSharedPoolQuota @ 0x140655158 (PsChargeSharedPoolQuota.c)
 *     PsReturnSharedPoolQuota @ 0x1406551E4 (PsReturnSharedPoolQuota.c)
 *     PspGetJobLimitInformationValidFlags @ 0x14067DCE0 (PspGetJobLimitInformationValidFlags.c)
 *     PspUnlockJobMemoryLimitsExclusive @ 0x14067DD08 (PspUnlockJobMemoryLimitsExclusive.c)
 *     PspNotificationLimitRateControlToleranceIntervalField @ 0x14067F8B4 (PspNotificationLimitRateControlToleranceIntervalField.c)
 *     PspNotificationLimitRateControlToleranceField @ 0x14067F8DC (PspNotificationLimitRateControlToleranceField.c)
 *     PspUnlockJobChain @ 0x14067FD70 (PspUnlockJobChain.c)
 *     PspLockJobChain @ 0x14067FEA0 (PspLockJobChain.c)
 *     PspLockJobConditionally @ 0x14067FFC8 (PspLockJobConditionally.c)
 *     PspRateControlLimitFlag @ 0x1406802BC (PspRateControlLimitFlag.c)
 *     PspEnumJobsAndProcessesInJobHierarchy @ 0x140681C50 (PspEnumJobsAndProcessesInJobHierarchy.c)
 *     PspUnlockJob @ 0x140682390 (PspUnlockJob.c)
 *     PspUnlockJobMemoryLimitsShared @ 0x14068259C (PspUnlockJobMemoryLimitsShared.c)
 *     PspGetJobMemoryUsageNotificationViolations @ 0x1406825F8 (PspGetJobMemoryUsageNotificationViolations.c)
 *     PspUnlockJobConditionally @ 0x140682BEC (PspUnlockJobConditionally.c)
 *     PsInvokeWin32Callout @ 0x140684DA0 (PsInvokeWin32Callout.c)
 *     SeSinglePrivilegeCheck @ 0x140693750 (SeSinglePrivilegeCheck.c)
 *     IoAllocateMiniCompletionPacket @ 0x1406ABEE0 (IoAllocateMiniCompletionPacket.c)
 *     PspIsContextAdmin @ 0x1406C4530 (PspIsContextAdmin.c)
 *     PspSetEnergyTrackingStateJobTree @ 0x1406C52D4 (PspSetEnergyTrackingStateJobTree.c)
 *     PspBindProcessSessionToJob @ 0x1406F5DFC (PspBindProcessSessionToJob.c)
 *     ObReferenceObjectByHandleWithTag @ 0x140707F60 (ObReferenceObjectByHandleWithTag.c)
 *     ExRaiseDatatypeMisalignment @ 0x14077BFB0 (ExRaiseDatatypeMisalignment.c)
 *     SeCheckPrivilegedObject @ 0x14078E020 (SeCheckPrivilegedObject.c)
 *     PspAssignSiloSystemRootPath @ 0x140905F60 (PspAssignSiloSystemRootPath.c)
 *     PspBeginSiloTeardown @ 0x140906048 (PspBeginSiloTeardown.c)
 *     PspConvertSiloToServerSilo @ 0x1409061B4 (PspConvertSiloToServerSilo.c)
 *     PspAddProcessToWorkingSetChangeList @ 0x140908B20 (PspAddProcessToWorkingSetChangeList.c)
 *     PspApplyWorkingSetLimits @ 0x140908BE4 (PspApplyWorkingSetLimits.c)
 *     PspSetJobMemoryPartition @ 0x14090969C (PspSetJobMemoryPartition.c)
 *     PspSetJobSiloThreadImpersonationPolicy @ 0x140909994 (PspSetJobSiloThreadImpersonationPolicy.c)
 *     PspSetNetRateControl @ 0x140909A24 (PspSetNetRateControl.c)
 *     PspEnumProcessesInJobHierarchy @ 0x14090E97C (PspEnumProcessesInJobHierarchy.c)
 *     EtwTraceJobSetQuery @ 0x1409362AC (EtwTraceJobSetQuery.c)
 *     ObCreateSiloRootDirectory @ 0x1409806B0 (ObCreateSiloRootDirectory.c)
 *     ExFreePoolWithTag @ 0x1409B5010 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x1409B5160 (ExAllocatePoolWithTag.c)
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
  __int64 v12; // rdx
  int v13; // esi
  char *v14; // r14
  int v15; // ebx
  void *MiniCompletionPacket; // rbx
  _QWORD *v17; // rbx
  int v18; // eax
  __int64 v19; // r8
  __int64 v20; // r10
  unsigned __int64 v21; // r11
  __int64 v22; // r9
  unsigned __int64 v23; // rcx
  unsigned __int64 v24; // rdx
  int v25; // eax
  __int64 j; // rdx
  unsigned int v27; // edx
  int v28; // eax
  int v29; // edx
  int *v30; // r9
  int *v31; // r10
  int **v32; // rbx
  struct _ERESOURCE *v33; // rdi
  int *v34; // rdi
  int v35; // esi
  __int64 v36; // rdx
  _DWORD *v37; // r8
  _DWORD *v38; // rax
  __int64 v39; // r8
  _DWORD *v40; // rax
  _DWORD *v41; // r8
  int v42; // edx
  bool v43; // zf
  int *v44; // rax
  __int64 v45; // r8
  int JobMemoryUsageNotificationViolations; // ebx
  __int64 v47; // rsi
  __int64 v48; // rdi
  int v49; // eax
  struct _ERESOURCE *v50; // rcx
  int v51; // edi
  int v52; // edx
  KPROCESSOR_MODE v53; // r14
  int v54; // eax
  int v55; // ecx
  unsigned int v56; // ecx
  _DWORD *v57; // rcx
  char *v58; // rdx
  int *v59; // rbx
  int v60; // edi
  char v61; // bl
  char v62; // di
  char v63; // di
  char v64; // bl
  PETHREAD v65; // rdi
  char v66; // bl
  int v67; // esi
  int v68; // eax
  PVOID *RateControl; // rax
  PVOID *v70; // rdx
  PVOID **v71; // rdi
  PVOID *v72; // rax
  __int64 *v73; // rcx
  struct _ERESOURCE *v74; // rcx
  void *v75; // rdi
  __int64 v76; // r9
  unsigned int v77; // edx
  int v78; // ebx
  __int64 v79; // rcx
  char v80; // bl
  unsigned int *v81; // r11
  unsigned __int16 v82; // cx
  POOL_TYPE v83; // r12d
  _WORD *v84; // rbx
  wchar_t *v85; // rbx
  struct _ERESOURCE *v86; // rbx
  int Silo; // eax
  unsigned int v88; // ecx
  unsigned int v89; // r14d
  unsigned int v90; // ebx
  char v91; // al
  int v92; // ecx
  int v93; // eax
  char v94; // al
  int v95; // ecx
  __int64 v96; // rcx
  struct _ERESOURCE *PoolWithTag; // rdi
  BOOLEAN v98; // al
  ULONG v99; // edx
  unsigned __int16 Group; // ax
  __int64 v101; // rax
  char *v102; // rsi
  char *i; // rbx
  char *v104; // rcx
  unsigned __int16 v105; // cx
  __m128i v106; // xmm0
  unsigned __int16 epi16; // ax
  __int64 v108; // rax
  SECURITY_IMPERSONATION_LEVEL *p_ImpersonationLevel; // rdi
  BOOLEAN v110; // al
  PERESOURCE v111; // r12
  __int64 *v112; // rcx
  __int64 v113; // rax
  BOOLEAN v114; // al
  ULONG v115; // edx
  BOOLEAN v116; // al
  __int64 v117; // rdx
  BOOLEAN v118; // al
  unsigned __int64 v119; // xmm0_8
  size_t v120; // rdi
  wchar_t *v121; // rax
  PETHREAD v122; // rdx
  char *v123; // rcx
  int v124; // r8d
  signed __int8 v125; // cf
  signed __int32 v126[8]; // [rsp+0h] [rbp-BC8h] BYREF
  KPROCESSOR_MODE AccessMode; // [rsp+40h] [rbp-B88h]
  PVOID DeferredContext; // [rsp+48h] [rbp-B80h] BYREF
  JOBOBJECTINFOCLASS v129; // [rsp+50h] [rbp-B78h]
  int v130; // [rsp+58h] [rbp-B70h]
  unsigned __int8 v131; // [rsp+5Ch] [rbp-B6Ch] BYREF
  _BYTE v132[3]; // [rsp+5Dh] [rbp-B6Bh] BYREF
  int v133; // [rsp+60h] [rbp-B68h]
  PVOID P; // [rsp+68h] [rbp-B60h]
  ULONG_PTR BugCheckParameter2; // [rsp+70h] [rbp-B58h]
  unsigned __int16 v136; // [rsp+78h] [rbp-B50h]
  __int64 v137; // [rsp+80h] [rbp-B48h] BYREF
  PETHREAD Thread; // [rsp+88h] [rbp-B40h]
  PERESOURCE Resource; // [rsp+90h] [rbp-B38h]
  PERESOURCE v140; // [rsp+98h] [rbp-B30h]
  char v141; // [rsp+A0h] [rbp-B28h]
  char v142; // [rsp+A1h] [rbp-B27h]
  char v143; // [rsp+A2h] [rbp-B26h]
  unsigned int v144; // [rsp+A4h] [rbp-B24h]
  int JobLimitInformationValidFlags; // [rsp+A8h] [rbp-B20h]
  unsigned int v146; // [rsp+ACh] [rbp-B1Ch]
  char *v147; // [rsp+B0h] [rbp-B18h] BYREF
  unsigned int v148; // [rsp+B8h] [rbp-B10h] BYREF
  unsigned int v149; // [rsp+BCh] [rbp-B0Ch]
  PVOID *v150; // [rsp+C0h] [rbp-B08h] BYREF
  void *Src; // [rsp+C8h] [rbp-B00h]
  __int64 v152[2]; // [rsp+D0h] [rbp-AF8h] BYREF
  __int64 v153; // [rsp+E0h] [rbp-AE8h]
  struct _SECURITY_SUBJECT_CONTEXT SubjectContext; // [rsp+E8h] [rbp-AE0h] BYREF
  __int64 v155; // [rsp+108h] [rbp-AC0h]
  PVOID v156; // [rsp+110h] [rbp-AB8h] BYREF
  PSECURITY_SUBJECT_CONTEXT v157; // [rsp+118h] [rbp-AB0h]
  int v158; // [rsp+120h] [rbp-AA8h]
  __int64 v159; // [rsp+128h] [rbp-AA0h] BYREF
  PVOID Object; // [rsp+130h] [rbp-A98h] BYREF
  __m128i v161; // [rsp+138h] [rbp-A90h] BYREF
  __int64 v162; // [rsp+148h] [rbp-A80h] BYREF
  wchar_t *v163; // [rsp+150h] [rbp-A78h]
  __m128i v164; // [rsp+158h] [rbp-A70h] BYREF
  unsigned int v165; // [rsp+168h] [rbp-A60h]
  int v166; // [rsp+16Ch] [rbp-A5Ch]
  int v167; // [rsp+170h] [rbp-A58h]
  HANDLE Handle[2]; // [rsp+178h] [rbp-A50h]
  PVOID v169[2]; // [rsp+188h] [rbp-A40h]
  __int128 v170; // [rsp+198h] [rbp-A30h] BYREF
  __int128 v171; // [rsp+1A8h] [rbp-A20h]
  int v172; // [rsp+1B8h] [rbp-A10h]
  char *v173; // [rsp+1C0h] [rbp-A08h] BYREF
  int v174; // [rsp+1C8h] [rbp-A00h]
  int v175; // [rsp+1CCh] [rbp-9FCh]
  __int64 v176; // [rsp+1D0h] [rbp-9F8h]
  __m128i v177; // [rsp+1D8h] [rbp-9F0h]
  __int128 v178; // [rsp+1E8h] [rbp-9E0h]
  __int64 v179; // [rsp+1F8h] [rbp-9D0h]
  __int64 v180; // [rsp+200h] [rbp-9C8h]
  __int64 v181; // [rsp+208h] [rbp-9C0h]
  __int64 v182; // [rsp+210h] [rbp-9B8h]
  _OWORD v183[5]; // [rsp+220h] [rbp-9A8h] BYREF
  _QWORD v184[18]; // [rsp+270h] [rbp-958h] BYREF
  struct _PRIVILEGE_SET RequiredPrivileges; // [rsp+300h] [rbp-8C8h] BYREF
  _QWORD v186[10]; // [rsp+320h] [rbp-8A8h] BYREF
  __m128i v187; // [rsp+370h] [rbp-858h] BYREF
  __m128i v188; // [rsp+380h] [rbp-848h]
  __m128i v189; // [rsp+390h] [rbp-838h]
  __m128i v190; // [rsp+3A0h] [rbp-828h]
  __int64 v191; // [rsp+3B0h] [rbp-818h]
  _QWORD v192[20]; // [rsp+3C0h] [rbp-808h] BYREF
  __m128i v193; // [rsp+460h] [rbp-768h]
  __m128i v194; // [rsp+470h] [rbp-758h]
  __m128i v195; // [rsp+480h] [rbp-748h]
  _OWORD v196[111]; // [rsp+490h] [rbp-738h] BYREF

  v4 = JobObjectInformationLength;
  BugCheckParameter2 = (ULONG_PTR)JobObjectInformation;
  v5 = JobObjectInformationClass;
  P = JobHandle;
  v129 = JobObjectInformationClass;
  Src = JobObjectInformation;
  memset((char *)v196 + 8, 0, 0xA0uLL);
  *(_OWORD *)Handle = 0LL;
  v156 = 0LL;
  v159 = 0LL;
  v131 = 0;
  v162 = 0LL;
  memset(v192, 0, 0x98uLL);
  v187 = 0LL;
  v161 = 0LL;
  memset(v183, 0, 0x48uLL);
  Object = 0LL;
  memset(v184, 0, sizeof(v184));
  DeferredContext = 0LL;
  v148 = 0;
  memset(&v196[11], 0, 0x640uLL);
  v170 = 0LL;
  v171 = 0LL;
  memset(&SubjectContext, 0, sizeof(SubjectContext));
  v155 = 0LL;
  memset(v186, 0, 0x48uLL);
  v193 = 0LL;
  v194 = 0LL;
  v195 = 0LL;
  v188 = 0LL;
  v189 = 0LL;
  v190 = 0LL;
  v191 = 0LL;
  v137 = 0LL;
  v132[0] = 0;
  memset(&RequiredPrivileges, 0, sizeof(RequiredPrivileges));
  v147 = 0LL;
  *(_OWORD *)v152 = 0LL;
  v150 = 0LL;
  v177 = 0LL;
  v178 = 0LL;
  v179 = 0LL;
  v164 = 0LL;
  *(_OWORD *)v169 = 0LL;
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
      v43 = (_DWORD)v4 == 56;
LABEL_99:
      if ( v43 )
        goto LABEL_6;
      return -1073741820;
    case 0x1F:
      if ( (_DWORD)v4 == 48 || (_DWORD)v4 == 96 )
        goto LABEL_6;
      v43 = (_DWORD)v4 == 144;
      goto LABEL_99;
  }
  v7 = dword_1409861FC[v5];
  if ( (_DWORD)v4 != v7 && ((_DWORD)v5 != 11 && (_DWORD)v5 != 14 || (unsigned int)v4 < v7) )
    return -1073741820;
LABEL_6:
  Thread = KeGetCurrentThread();
  PreviousMode = Thread->PreviousMode;
  AccessMode = PreviousMode;
  v132[1] = PreviousMode;
  if ( PreviousMode )
  {
    v9 = (__int64 *)Src;
    if ( (_DWORD)v4 )
    {
      if ( ((dword_1409862BC[v5] - 1) & (unsigned int)Src) != 0 )
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
    v13 = 0;
    v130 = 0;
    LOBYTE(v133) = 0;
    --Thread->SpecialApcDisable;
    if ( (int)v5 <= 24 )
    {
      if ( (_DWORD)v5 == 24 )
      {
        v47 = *v9;
        v180 = *v9;
        v14 = (char *)DeferredContext;
        ExAcquireResourceExclusiveLite((PERESOURCE)((char *)DeferredContext + 56), 1u);
        if ( (*((_DWORD *)v14 + 330) & 0x20) != 0 )
        {
          v48 = *((_QWORD *)v14 + 126);
          v49 = *(_DWORD *)(v48 + 40);
          if ( (v49 & 0x10) == 0 )
          {
            *(_DWORD *)(v48 + 40) = v49 | 0x10;
            KeInitializeDpc((PRKDPC)(v48 + 48), (PKDEFERRED_ROUTINE)PspJobCycleTimeNotificationDpcRoutine, v14);
          }
          KeSetSchedulingGroupCycleNotification(v48 + 128, v48 + 48, v47);
          goto LABEL_119;
        }
LABEL_380:
        v13 = -1073741811;
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
                v187 = *(__m128i *)v9;
                if ( v187.m128i_i32[0] && (v187.m128i_i32[0] & 0xFFFFFFF8) == 0 )
                {
                  v14 = (char *)DeferredContext;
                  v13 = PspFreezeJobTree((char *)DeferredContext, (__int64)&v187);
                  if ( v13 >= 0 )
                    *(_DWORD *)v9 = v187.m128i_i32[0];
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
                      v13 = -1073741811;
                      v130 = -1073741811;
                      v14 = (char *)DeferredContext;
                      goto LABEL_35;
                    }
                    v14 = (char *)DeferredContext;
                    PspEnumJobsAndProcessesInJobHierarchy(DeferredContext, 0LL, 0);
LABEL_34:
                    v13 = 0;
LABEL_35:
                    KiLeaveGuardedRegionUnsafe((__int64)Thread);
                    if ( v13 )
                    {
                      if ( (PerfGlobalGroupMask & 0x80000) != 0 )
                        EtwTraceJobSetQuery((_DWORD)v14, v5, 0, 0, v13, 1831);
                    }
                    ObfDereferenceObjectWithTag(v14, 0x79517350u);
                    return v13;
                  }
LABEL_459:
                  v13 = -1073741821;
                  goto LABEL_282;
                }
                v131 = *(_BYTE *)v9;
                v14 = (char *)DeferredContext;
                ExAcquireResourceExclusiveLite((PERESOURCE)((char *)DeferredContext + 56), 1u);
                if ( (*((_DWORD *)v14 + 330) & 0x20) != 0 )
                {
                  v76 = *((_QWORD *)v14 + 126);
                  v77 = *(_DWORD *)(v76 + 40);
                  if ( (v77 & 0x40) == 0 )
                  {
                    if ( (v77 & 1) != 0 || (v77 & 0x20) != 0 )
                    {
                      v13 = -1073741637;
                      goto LABEL_120;
                    }
                    if ( ((v77 >> 3) & 1) != (v131 != 0) )
                    {
                      *(_DWORD *)(v76 + 40) = (v131 != 0 ? 8 : 0) | v77 & 0xFFFFFFF7;
                      KeSetSchedulingGroupRankBias(*((_QWORD *)v14 + 126) + 128LL, v131);
                      PspEnumProcessesInJobHierarchy(v14, PspSetProcessCacheIsolationCallback, &v131, 1LL);
LABEL_119:
                      v13 = 0;
LABEL_120:
                      v50 = (struct _ERESOURCE *)(v14 + 56);
LABEL_121:
                      ExReleaseResourceLite(v50);
                      goto LABEL_35;
                    }
                  }
                }
                goto LABEL_380;
              }
              v141 = *(_BYTE *)v9;
              v14 = (char *)DeferredContext;
              v18 = PspSetBackgroundJobTree((char *)DeferredContext, v141);
LABEL_64:
              v13 = v18;
              if ( v18 < 0 )
                goto LABEL_35;
              goto LABEL_34;
            }
            v166 = *(_DWORD *)v9;
            v15 = v166;
            v14 = (char *)DeferredContext;
            if ( (v166 & 0xFFFFC001) == 0 )
            {
              ExAcquireResourceExclusiveLite((PERESOURCE)((char *)DeferredContext + 56), 1u);
              if ( v14 )
                ExAcquirePushLockExclusiveEx((ULONG_PTR)(v14 + 1032), 0LL);
              *((_DWORD *)v14 + 219) = v15;
              PspUnlockJobMemoryLimitsExclusive((__int64)v14, 0LL, 0LL);
              goto LABEL_33;
            }
LABEL_430:
            v13 = -1073741811;
            goto LABEL_35;
          }
          memmove(&v159, v9, v4);
          v66 = v159;
          if ( (v159 & 0xFFFFFFE0) == 0 )
          {
            v67 = HIDWORD(v159);
            LODWORD(v137) = HIDWORD(v159);
            v129 = v159 & 1;
            if ( (v159 & 1) == 0 )
              goto LABEL_181;
            if ( (v159 & 2) != 0 )
            {
              if ( (v159 & 0x10) == 0 && (unsigned __int16)(WORD2(v159) - 1) <= 8u )
                goto LABEL_181;
            }
            else if ( (unsigned __int16)(WORD2(v159) - 1) <= 0x270Fu
                   && ((v159 & 0x10) == 0 || (v159 & 4) == 0 && HIWORD(v159) >= WORD2(v159) && HIWORD(v159) <= 0x2710u) )
            {
LABEL_181:
              v14 = (char *)DeferredContext;
              PspLockJobChain(DeferredContext, Thread, 0LL);
              v68 = *((_DWORD *)v14 + 330);
              if ( v129 )
              {
                if ( (v68 & 0x20) == 0 )
                {
                  RateControl = (PVOID *)PspAllocateRateControl(2LL);
                  v70 = RateControl;
                  if ( !RateControl )
                  {
                    v13 = -1073741670;
                    goto LABEL_208;
                  }
                  *((_QWORD *)v14 + 126) = RateControl;
LABEL_193:
                  v71 = (PVOID **)(v14 + 1008);
                  *(_DWORD *)(*((_QWORD *)v14 + 126) + 40LL) = 0;
                  *(_DWORD *)(*((_QWORD *)v14 + 126) + 44LL) = v67;
                  if ( v129 )
                  {
                    if ( (v66 & 4) != 0 )
                    {
                      *((_DWORD *)*v71 + 10) |= 1u;
                      WORD1(v137) = v67;
                    }
                    if ( (v66 & 2) != 0 )
                    {
                      *((_DWORD *)*v71 + 10) |= 4u;
                      HIDWORD(v137) = 0;
                    }
                    else
                    {
                      HIDWORD(v137) = 1;
                      if ( (v66 & 0x14) == 0 )
                        WORD1(v137) = 10000;
                    }
                    if ( (v66 & 8) != 0 )
                      *((_DWORD *)*v71 + 10) |= 2u;
                    if ( (v66 & 0x10) != 0 )
                      *((_DWORD *)*v71 + 10) |= 0x20u;
                    v72 = *v71;
                    v73 = (__int64 *)(*v71 + 16);
                    if ( *v71 == v70 )
                    {
                      *v73 = v137;
                      v13 = PspAddSchedulingGroupToJobChain(*((_QWORD *)v14 + 134), (__int64)v14);
                      v130 = v13;
                      if ( v13 < 0 )
                      {
                        if ( *v71 )
                        {
                          PspFreeRateControl(*v71, 2u);
                          *v71 = 0LL;
                        }
                        goto LABEL_208;
                      }
                      _InterlockedOr((volatile signed __int32 *)v14 + 330, 0x20u);
                      v14 = (char *)DeferredContext;
                    }
                    else
                    {
                      v150 = *v71 + 16;
                      if ( ((_DWORD)v72[5] & 4) != 0 )
                        KeSetSchedulingGroupWeights(1u, (__int64)&v150, (__int64)&v137);
                      else
                        KeSetSchedulingGroupCpuRates((__int64)v73, &v150, &v137);
                    }
                    v156 = (*v71)[5];
                  }
                  else
                  {
                    v137 = 0x327102710LL;
                    *((_DWORD *)*v71 + 10) |= 0x40u;
                    v78 = v137;
                    *((_DWORD *)*v71 + 11) = v137;
                    v150 = *v71 + 16;
                    v132[0] = (*((_DWORD *)v150 + 1) & 4) != 0;
                    *((_QWORD *)v14 + 128) += KeQuerySchedulingGroupReadyTime((__int64)v150);
                    KeSetSchedulingGroupCpuRates(v79, &v150, &v137);
                    HIDWORD(v156) = v78;
                    if ( v132[0] )
                    {
                      v132[0] = 0;
                      PspEnumProcessesInJobHierarchy(v14, PspSetProcessCacheIsolationCallback, v132, 1LL);
                    }
                  }
                  v13 = 0;
                  if ( (PerfGlobalGroupMask & 0x80000) != 0 )
                    EtwTraceJobSetQuery((_DWORD)v14, 15, (unsigned int)&v156, 0, 0, 1829);
LABEL_208:
                  v122 = Thread;
                  v123 = v14;
LABEL_209:
                  PspUnlockJobChain(v123, v122, 0LL);
                  goto LABEL_35;
                }
              }
              else if ( (v68 & 0x20) == 0 )
              {
                v13 = -1073741811;
                goto LABEL_208;
              }
              v70 = 0LL;
              goto LABEL_193;
            }
          }
LABEL_384:
          v13 = -1073741811;
          goto LABEL_282;
        }
LABEL_296:
        P = 0LL;
        v140 = 0LL;
        v88 = 16;
        if ( (_DWORD)v5 != 14 )
          v88 = 2;
        v146 = v88;
        v89 = (unsigned int)v4 / v88;
        if ( (unsigned int)v4 % v88 )
        {
          v13 = -1073741820;
          goto LABEL_282;
        }
        v149 = (unsigned int)v4 / v88;
        LODWORD(v196[0]) = 1310721;
        memset((char *)v196 + 4, 0, 0xA4uLL);
        v105 = KeQueryActiveGroupCount() - 1;
        LOWORD(v133) = v105;
        while ( v89 )
        {
          if ( (_DWORD)v5 == 14 )
          {
            v106 = *(__m128i *)v9;
            v161 = v106;
            epi16 = _mm_extract_epi16(v106, 4);
            v161.m128i_i16[4] = epi16;
            v136 = epi16;
            v153 = v106.m128i_i64[0];
          }
          else
          {
            v108 = *(unsigned __int16 *)v9;
            v136 = v108;
            if ( (unsigned __int16)v108 > v105 )
              goto LABEL_400;
            v153 = qword_140CFC848[v108];
            epi16 = v136;
          }
          if ( epi16 > v105 || *((_QWORD *)v196 + epi16 + 1) || v153 != (v153 & qword_140CFC848[epi16]) )
          {
LABEL_400:
            v13 = -1073741811;
            v130 = -1073741811;
            break;
          }
          KeAddGroupAffinityEx((unsigned __int16 *)v196, v136, v153);
          v89 = --v149;
          v9 = (__int64 *)((char *)Src + v146);
          Src = v9;
          v13 = v130;
          v105 = v133;
        }
        v14 = (char *)DeferredContext;
        if ( v13 < 0 )
          goto LABEL_35;
        BugCheckParameter2 = (ULONG_PTR)DeferredContext + 432;
        if ( *((_QWORD *)DeferredContext + 54) )
          goto LABEL_406;
        PoolWithTag = (struct _ERESOURCE *)ExAllocatePoolWithTag(PagedPool, 0x28uLL, 0x614A7350u);
        P = PoolWithTag;
        if ( PoolWithTag )
        {
          v140 = (PERESOURCE)PsChargeSharedPoolQuota(KeGetCurrentThread()->ApcState.Process, 0x28uLL, 0LL);
          if ( v140 )
          {
            v14 = (char *)DeferredContext;
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
              v110 = SePrivilegeCheck(
                       &RequiredPrivileges,
                       (PSECURITY_SUBJECT_CONTEXT)&SubjectContext.ImpersonationLevel,
                       1);
              LODWORD(SubjectContext.ClientToken) ^= (LODWORD(SubjectContext.ClientToken) ^ v110) & 1;
            }
            else
            {
              LODWORD(SubjectContext.ClientToken) |= 1u;
            }
            Resource = (PERESOURCE)(v14 + 56);
            ExAcquireResourceExclusiveLite((PERESOURCE)(v14 + 56), 1u);
            v13 = PspEnumProcessesInJobHierarchy(v14, PspSetAffinityLimitCallback, &SubjectContext, 1LL);
            v130 = v13;
            v111 = v140;
            if ( v13 >= 0 )
            {
              v112 = (__int64 *)BugCheckParameter2;
              v113 = *(_QWORD *)BugCheckParameter2;
              if ( *(_QWORD *)BugCheckParameter2 )
              {
                v170 = *(_OWORD *)(v113 + 8);
                v171 = *(_OWORD *)(v113 + 24);
                p_ImpersonationLevel = (SECURITY_IMPERSONATION_LEVEL *)&v170;
              }
              else
              {
                *(_QWORD *)BugCheckParameter2 = P;
                *((_QWORD *)v14 + 55) = v111;
                P = 0LL;
                p_ImpersonationLevel = 0LL;
                v113 = *v112;
              }
              *(struct _SECURITY_SUBJECT_CONTEXT *)v113 = SubjectContext;
              *(_QWORD *)(v113 + 32) = v155;
              v152[0] = (__int64)v14;
              HIDWORD(v152[1]) = *((_DWORD *)v14 + 64);
              LODWORD(v152[1]) = -17;
              *(_OWORD *)(v14 + 264) = v196[0];
              *(_OWORD *)(v14 + 280) = v196[1];
              *(_OWORD *)(v14 + 296) = v196[2];
              *(_OWORD *)(v14 + 312) = v196[3];
              *(_OWORD *)(v14 + 328) = v196[4];
              *(_OWORD *)(v14 + 344) = v196[5];
              *(_OWORD *)(v14 + 360) = v196[6];
              *(_OWORD *)(v14 + 376) = v196[7];
              *(_OWORD *)(v14 + 392) = v196[8];
              *(_OWORD *)(v14 + 408) = v196[9];
              *((_QWORD *)v14 + 53) = *(_QWORD *)&v196[10];
              if ( (_DWORD)v5 == 14 && (unsigned int)KeIsEmptyAffinityEx((_WORD *)v14 + 132) )
              {
                *((_DWORD *)v14 + 64) &= ~0x10u;
                _InterlockedAnd((volatile signed __int32 *)v14 + 330, 0xFFFFFFFD);
              }
              else
              {
                *((_DWORD *)v14 + 64) |= 0x10u;
                _InterlockedOr((volatile signed __int32 *)v14 + 330, 2u);
              }
              v14 = (char *)DeferredContext;
              PspEnumJobsAndProcessesInJobHierarchy(DeferredContext, (__int64)v152, 5);
              v13 = v130;
            }
            ExReleaseResourceLite(Resource);
            if ( p_ImpersonationLevel )
              SeReleaseSubjectContext((PSECURITY_SUBJECT_CONTEXT)p_ImpersonationLevel);
            if ( !P )
              goto LABEL_35;
            ExFreePoolWithTag(P, 0x614A7350u);
            v104 = (char *)v111;
            goto LABEL_422;
          }
          goto LABEL_346;
        }
LABEL_345:
        v13 = -1073741670;
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
              v177 = *(__m128i *)v9;
              v178 = *((_OWORD *)v9 + 1);
              v179 = v9[4];
              v13 = (v177.m128i_i32[0] & 0xFFFFFFF0) != 0 ? -1073741811 : -1073741637;
              goto LABEL_282;
            case 6:
              v165 = *(_DWORD *)v9;
              v90 = v165;
              v14 = (char *)DeferredContext;
              if ( v165 <= 1 )
              {
                ExAcquireResourceExclusiveLite((PERESOURCE)((char *)DeferredContext + 56), 1u);
                *((_DWORD *)v14 + 113) = v90;
                goto LABEL_120;
              }
              goto LABEL_430;
            case 7:
              P = 0LL;
              *(_OWORD *)Handle = *(_OWORD *)v9;
              if ( !Handle[1] )
              {
                v14 = (char *)DeferredContext;
                ExAcquireResourceExclusiveLite((PERESOURCE)((char *)DeferredContext + 56), 1u);
                if ( v14 )
                  ExAcquirePushLockExclusiveEx((ULONG_PTR)(v14 + 1032), 0LL);
                v75 = (void *)*((_QWORD *)v14 + 57);
                *((_QWORD *)v14 + 57) = 0LL;
                PspUnlockJobMemoryLimitsExclusive((__int64)v14, 0LL, 0LL);
                ExReleaseResourceLite((PERESOURCE)(v14 + 56));
                if ( v75 )
                  ObfDereferenceObjectWithTag(v75, 0x624A7350u);
                goto LABEL_35;
              }
              v13 = ObReferenceObjectByHandleWithTag(
                      Handle[1],
                      2u,
                      IoCompletionObjectType,
                      AccessMode,
                      0x624A7350u,
                      &Object,
                      0LL);
              v14 = (char *)DeferredContext;
              if ( v13 < 0 )
              {
                v17 = 0LL;
              }
              else
              {
                if ( *((_QWORD *)DeferredContext + 125) )
                {
                  MiniCompletionPacket = 0LL;
                  goto LABEL_47;
                }
                MiniCompletionPacket = (void *)IoAllocateMiniCompletionPacket(
                                                 PspNotificationPacketCallback,
                                                 DeferredContext);
                P = MiniCompletionPacket;
                if ( MiniCompletionPacket )
                {
LABEL_47:
                  ExAcquireResourceExclusiveLite((PERESOURCE)(v14 + 56), 1u);
                  if ( *((_QWORD *)v14 + 57)
                    || (*((_DWORD *)v14 + 64) & 0x2000) != 0 && (*((_DWORD *)v14 + 330) & 1) != 0 )
                  {
                    ExReleaseResourceLite((PERESOURCE)(v14 + 56));
                    ObfDereferenceObjectWithTag(Object, 0x624A7350u);
                    v13 = -1073741811;
                    v17 = P;
                  }
                  else
                  {
                    if ( *((_QWORD *)v14 + 125) )
                    {
                      v17 = P;
                    }
                    else
                    {
                      *((_QWORD *)v14 + 125) = MiniCompletionPacket;
                      v17 = 0LL;
                    }
                    ExAcquirePushLockExclusiveEx((ULONG_PTR)(v14 + 1032), 0LL);
                    *((HANDLE *)v14 + 58) = Handle[0];
                    *((_QWORD *)v14 + 57) = Object;
                    *((_QWORD *)v14 + 59) = 0LL;
                    PspUnlockJobMemoryLimitsExclusive((__int64)v14, 0LL, 0LL);
                    if ( (*((_DWORD *)v14 + 219) & 0x40) != 0 )
                      PspEnumProcessesInJobHierarchy(v14, PspAssociateCompletionPortCallback, v14, 1LL);
                    ExReleaseResourceLite((PERESOURCE)(v14 + 56));
                  }
                  goto LABEL_54;
                }
                v13 = -1073741670;
                v17 = 0LL;
              }
LABEL_54:
              if ( v17 )
                IoFreeMiniCompletionPacket(v17);
              goto LABEL_35;
          }
          if ( (_DWORD)v5 != 9 )
          {
            if ( (_DWORD)v5 != 11 )
              goto LABEL_459;
            goto LABEL_296;
          }
LABEL_123:
          memmove(v192, v9, v4);
          if ( (unsigned int)v4 < 0x98 )
            memset((char *)v192 + v4, 0, 152 - v4);
          JobLimitInformationValidFlags = PspGetJobLimitInformationValidFlags(v5, v4);
          v51 = ~JobLimitInformationValidFlags;
          LODWORD(v140) = ~JobLimitInformationValidFlags;
          v52 = v192[2];
          if ( (~JobLimitInformationValidFlags & v192[2]) != 0 )
            goto LABEL_384;
          LODWORD(v196[27]) = v192[2];
          Resource = 0LL;
          BugCheckParameter2 = 0LL;
          v157 = 0LL;
          DWORD1(v196[27]) = (v192[2] & 8) != 0 ? LODWORD(v192[5]) : 0;
          if ( (v192[2] & 0x20) != 0 )
          {
            if ( LODWORD(v192[7]) > 6 )
              goto LABEL_384;
            v53 = AccessMode;
            if ( (unsigned int)(LODWORD(v192[7]) - 3) <= 1 )
            {
              v91 = ((__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD))SeCheckPrivilegedObject)(
                      SeIncreaseBasePriorityPrivilege,
                      P,
                      2LL) & 1;
              LOBYTE(v92) = 4 * v91;
              v133 = v92;
              if ( !v91 )
                goto LABEL_315;
              v52 = v192[2];
            }
            BYTE9(v196[65]) = v192[7];
          }
          else
          {
            BYTE9(v196[65]) = 0;
            v53 = AccessMode;
          }
          if ( (v52 & 0x80u) != 0 )
          {
            v93 = HIDWORD(v192[7]);
            if ( HIDWORD(v192[7]) >= 0xA )
              goto LABEL_384;
            if ( HIDWORD(v192[7]) > 5 )
            {
              v94 = ((__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD))SeCheckPrivilegedObject)(
                      SeIncreaseBasePriorityPrivilege,
                      P,
                      2LL) & 1;
              LOBYTE(v95) = 4 * v94;
              v133 = v95;
              if ( !v94 )
                goto LABEL_315;
              v52 = v192[2];
              v93 = HIDWORD(v192[7]);
            }
            DWORD1(v196[41]) = v93;
          }
          else
          {
            DWORD1(v196[41]) = 5;
          }
          if ( (v52 & 2) != 0 )
          {
            if ( !v192[0] )
              goto LABEL_384;
            *(_QWORD *)&v196[25] = v192[0];
          }
          else
          {
            *(_QWORD *)&v196[25] = 0LL;
          }
          v146 = v52 & 4;
          if ( (v52 & 4) != 0 )
          {
            if ( !v192[1] )
              goto LABEL_384;
            *((_QWORD *)&v196[25] + 1) = v192[1];
          }
          if ( (v52 & 1) == 0 )
          {
            v196[26] = 0uLL;
            goto LABEL_135;
          }
          v96 = v192[3];
          if ( !v192[3] && !v192[4] || v192[3] == -1LL && v192[4] == -1LL || v192[3] > v192[4] || v192[3] < 0x14000uLL )
            goto LABEL_384;
          if ( v192[3] <= (unsigned __int64)PspMinimumWorkingSet )
          {
LABEL_334:
            *(_QWORD *)&v196[26] = v96;
            *((_QWORD *)&v196[26] + 1) = v192[4];
LABEL_135:
            if ( (v52 & 0x100) != 0 )
            {
              if ( v192[14] < 0x1000uLL )
                goto LABEL_384;
              *(_QWORD *)&v196[47] = v192[14] >> 12;
            }
            else
            {
              *(_QWORD *)&v196[47] = 0LL;
            }
            if ( (v52 & 0x200) != 0 )
            {
              if ( v192[15] < 0x1000uLL )
                goto LABEL_384;
              *((_QWORD *)&v196[47] + 1) = v192[15] >> 12;
            }
            else
            {
              *((_QWORD *)&v196[47] + 1) = 0LL;
            }
            if ( (v52 & 0x200000) != 0 )
            {
              if ( v192[18] < 0x1000uLL )
                goto LABEL_384;
              *(_QWORD *)&v196[48] = v192[18] >> 12;
            }
            else
            {
              *(_QWORD *)&v196[48] = 0LL;
            }
            DWORD2(v196[27]) = 1310721;
            memset((char *)&v196[27] + 12, 0, 0xA4uLL);
            v129 = v196[27];
            v14 = (char *)DeferredContext;
            if ( (v196[27] & 0x10) != 0 )
            {
              if ( (*((_DWORD *)DeferredContext + 330) & 2) != 0 || !v192[6] )
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
                  v99 = 1632269136;
                  v74 = PoolWithTag;
LABEL_348:
                  ExFreePoolWithTag(v74, v99);
                  v13 = -1073741670;
                  goto LABEL_282;
                }
                v14 = (char *)DeferredContext;
                v129 = v196[27];
                v13 = v130;
              }
              SeCaptureSubjectContextEx(
                Thread,
                Thread->ApcState.Process,
                (PSECURITY_SUBJECT_CONTEXT)&SubjectContext.ImpersonationLevel);
              v157 = (PSECURITY_SUBJECT_CONTEXT)&SubjectContext.ImpersonationLevel;
              if ( AccessMode )
              {
                RequiredPrivileges.PrivilegeCount = 1;
                RequiredPrivileges.Control = 1;
                RequiredPrivileges.Privilege[0].Luid = SeDebugPrivilege;
                RequiredPrivileges.Privilege[0].Attributes = 0;
                v98 = SePrivilegeCheck(
                        &RequiredPrivileges,
                        (PSECURITY_SUBJECT_CONTEXT)&SubjectContext.ImpersonationLevel,
                        1);
                LODWORD(SubjectContext.ClientToken) ^= (LODWORD(SubjectContext.ClientToken) ^ v98) & 1;
              }
              else
              {
                LODWORD(SubjectContext.ClientToken) |= 1u;
              }
              v54 = v133;
              LOBYTE(v54) = v133 | 2;
              v133 = v54;
              v51 = (int)v140;
            }
            else
            {
              LOBYTE(v54) = v133;
            }
            AccessMode = v54;
            v140 = (PERESOURCE)(v14 + 56);
            ExAcquireResourceExclusiveLite((PERESOURCE)(v14 + 56), 1u);
            v55 = v129;
            if ( (v129 & 4) == 0 )
            {
              if ( (v129 & 0x40) != 0 )
              {
                v55 = *((_DWORD *)v14 + 64) & 4 | v129;
                *((_QWORD *)&v196[25] + 1) = *((_QWORD *)v14 + 29);
              }
              else
              {
                *((_QWORD *)&v196[25] + 1) = 0LL;
              }
            }
            v56 = v55 & 0xFFFFFFBF;
            LODWORD(v196[27]) = v56;
            if ( (AccessMode & 2) != 0 )
            {
              if ( (*((_DWORD *)v14 + 330) & 2) == 0 )
              {
                if ( (*((_DWORD *)v14 + 64) & 0x10) != 0 )
                {
                  KeFirstGroupAffinityEx((__int64)&v161, (_WORD *)v14 + 132);
                  Group = v161.m128i_u16[4];
                }
                else
                {
                  Group = KeGetCurrentPrcb()->Group;
                  v161.m128i_i16[4] = Group;
                }
                if ( v192[6] == (qword_140CFC848[Group] & v192[6]) )
                {
                  if ( WORD4(v196[27]) <= (unsigned int)v161.m128i_i16[4] )
                    WORD4(v196[27]) = v161.m128i_i16[4] + 1;
                  *((_QWORD *)&v196[28] + Group) |= v192[6];
                  v14 = (char *)DeferredContext;
                  v13 = PspEnumProcessesInJobHierarchy(
                          DeferredContext,
                          PspSetAffinityLimitCallback,
                          &SubjectContext,
                          1LL);
                  v130 = v13;
                  if ( v13 >= 0 )
                  {
                    v101 = *((_QWORD *)v14 + 54);
                    if ( v101 )
                    {
                      v170 = *(_OWORD *)(v101 + 8);
                      v171 = *(_OWORD *)(v101 + 24);
                      v157 = (PSECURITY_SUBJECT_CONTEXT)&v170;
                    }
                    else
                    {
                      *((_QWORD *)v14 + 54) = Resource;
                      *((_QWORD *)v14 + 55) = BugCheckParameter2;
                      Resource = 0LL;
                      v157 = 0LL;
                      v101 = *((_QWORD *)v14 + 54);
                    }
                    *(struct _SECURITY_SUBJECT_CONTEXT *)v101 = SubjectContext;
                    *(_QWORD *)(v101 + 32) = v155;
                    goto LABEL_148;
                  }
                }
                else
                {
                  v13 = -1073741811;
                  v130 = -1073741811;
                  v14 = (char *)DeferredContext;
                }
LABEL_356:
                v62 = v133;
LABEL_159:
                v63 = v62 & 1;
                if ( v63 )
                {
                  PspLockWorkingSetChangeExclusiveUnsafe();
                  _InterlockedOr((volatile signed __int32 *)v14 + 330, 0x100u);
                  v14 = (char *)DeferredContext;
                  v102 = (char *)DeferredContext + 40;
                  for ( i = (char *)*((_QWORD *)DeferredContext + 5); i != v102; i = *(char **)i )
                  {
                    if ( (*((_DWORD *)i - 90) & 1) == 0 )
                      PspAddProcessToWorkingSetChangeList(i - 1480);
                  }
                  v13 = v130;
                }
                ExReleaseResourceLite(v140);
                if ( v63 )
                  PspApplyWorkingSetLimits(v14);
                if ( v157 )
                  SeReleaseSubjectContext(v157);
                if ( !Resource )
                  goto LABEL_35;
                ExFreePoolWithTag(Resource, 0x614A7350u);
                v104 = (char *)BugCheckParameter2;
LABEL_422:
                PsReturnSharedPoolQuota(v104, 0x28uLL, 0LL);
                goto LABEL_35;
              }
            }
            else if ( (v56 & 0x4000) == 0 || (*((_DWORD *)v14 + 330) & 2) != 0 )
            {
LABEL_148:
              v57 = v14 + 256;
              P = v14 + 256;
              if ( (*((_DWORD *)v14 + 64) & 1) != 0 && (v196[27] & 1) == 0 )
              {
                _InterlockedOr(v126, 0);
                if ( (qword_140C13270 & 1) != 0 )
                {
                  ExfAcquireReleasePushLockExclusive((ULONG_PTR)&qword_140C13270);
                  v57 = P;
                }
                v13 = v130;
                v14 = (char *)DeferredContext;
              }
              v152[0] = (__int64)v14;
              HIDWORD(v152[1]) = *v57;
              *((_OWORD *)v14 + 15) = v196[26];
              *((_DWORD *)v14 + 65) = DWORD1(v196[27]);
              if ( (AccessMode & 2) != 0 )
              {
                *(_OWORD *)(v14 + 264) = *(_OWORD *)((char *)&v196[27] + 8);
                *(_OWORD *)(v14 + 280) = *(_OWORD *)((char *)&v196[28] + 8);
                *(_OWORD *)(v14 + 296) = *(_OWORD *)((char *)&v196[29] + 8);
                *(_OWORD *)(v14 + 312) = *(_OWORD *)((char *)&v196[30] + 8);
                *(_OWORD *)(v14 + 328) = *(_OWORD *)((char *)&v196[31] + 8);
                *(_OWORD *)(v14 + 344) = *(_OWORD *)((char *)&v196[32] + 8);
                *(_OWORD *)(v14 + 360) = *(_OWORD *)((char *)&v196[33] + 8);
                *(_OWORD *)(v14 + 376) = *(_OWORD *)((char *)&v196[34] + 8);
                *(_OWORD *)(v14 + 392) = *(_OWORD *)((char *)&v196[35] + 8);
                *(_OWORD *)(v14 + 408) = *(_OWORD *)((char *)&v196[36] + 8);
                *((_QWORD *)v14 + 53) = *((_QWORD *)&v196[37] + 1);
                v57 = P;
              }
              v14[873] = BYTE9(v196[65]);
              *((_DWORD *)v14 + 121) = DWORD1(v196[41]);
              *((_OWORD *)v14 + 14) = v196[25];
              v58 = v14 + 232;
              if ( (_DWORD)v5 == 9 )
              {
                ExAcquirePushLockExclusiveEx((ULONG_PTR)(v14 + 1032), 0LL);
                v59 = (int *)P;
                *(_DWORD *)P = LODWORD(v196[27]) | *(_DWORD *)P & v51;
                *((_OWORD *)v14 + 36) = v196[47];
                *((_QWORD *)v14 + 74) = *(_QWORD *)&v196[48];
                PspUnlockJobMemoryLimitsExclusive((__int64)v14, 0LL, 0LL);
                v60 = *v59;
                v58 = v14 + 232;
              }
              else
              {
                v60 = LODWORD(v196[27]) | *v57 & v51;
                *v57 = v60;
                v59 = (int *)P;
              }
              LODWORD(v152[1]) = ~(HIDWORD(v152[1]) | v60);
              if ( v146 )
              {
                PspEnumProcessesInJobHierarchy(v14, PspSetJobTimeLimitCallback, v58, 1LL);
                *((_QWORD *)v14 + 23) = 0LL;
                *((_QWORD *)v14 + 24) = 0LL;
                KeResetEvent((PRKEVENT)v14);
              }
              if ( (*v59 & 6) != 0 )
              {
                _InterlockedAdd64(&PspJobTimeLimitsRequest, 1uLL);
                v14 = (char *)DeferredContext;
                v13 = v130;
              }
              v61 = v152[1];
              PspEnumJobsAndProcessesInJobHierarchy(v14, (__int64)v152, 5);
              v62 = AccessMode | 1;
              if ( (v61 & 1) != 0 )
                v62 = AccessMode;
              goto LABEL_159;
            }
            v13 = -1073741811;
            v130 = -1073741811;
            goto LABEL_356;
          }
          if ( SeSinglePrivilegeCheck(SeIncreaseBasePriorityPrivilege, v53) )
          {
            v52 = v192[2];
            v96 = v192[3];
            goto LABEL_334;
          }
LABEL_315:
          v13 = -1073741727;
          goto LABEL_282;
        }
        v144 = *(_DWORD *)v9;
        if ( (v144 & 0xFFFFFF00) != 0 )
          goto LABEL_384;
        v80 = 8;
        v14 = (char *)DeferredContext;
        PspLockJobChain(DeferredContext, Thread, 0LL);
        if ( PspDoesJobHierarchyPermitUILimits(v14, 0) )
        {
          if ( *((_DWORD *)v14 + 120) == -2 )
          {
            v13 = -1073741790;
          }
          else
          {
            v14 = (char *)DeferredContext;
            PspBindProcessSessionToJob(DeferredContext, KeGetCurrentThread()->ApcState.Process);
            v148 = *v81;
            if ( v148 > 0xFFFFFFFD )
              goto LABEL_247;
            if ( v144 == *((_DWORD *)v14 + 112) )
              goto LABEL_247;
            v175 = 0;
            PspUnlockJobChain(v14, Thread, 1LL);
            v80 = 0;
            v173 = v14;
            v174 = 0;
            v176 = v144;
            v13 = PsInvokeWin32Callout(6LL, &v173, 1LL, &v148);
            v130 = v13;
            if ( v13 >= 0 )
            {
LABEL_247:
              *((_DWORD *)v14 + 112) = v144;
              _InterlockedOr((volatile signed __int32 *)v14 + 330, 0x10u);
              v14 = (char *)DeferredContext;
              v13 = v130;
            }
          }
        }
        else
        {
          v13 = -1073741637;
        }
        v122 = Thread;
        v123 = v14;
        if ( (unsigned __int8)v80 >= 8u )
          goto LABEL_209;
LABEL_249:
        PspUnlockJob(v123, v122);
        goto LABEL_35;
      }
LABEL_66:
      if ( (_DWORD)v4 == 56 )
      {
        v188 = *(__m128i *)BugCheckParameter2;
        v189 = *(__m128i *)(BugCheckParameter2 + 16);
        v190 = *(__m128i *)(BugCheckParameter2 + 32);
        v191 = *(_QWORD *)(BugCheckParameter2 + 48);
        v19 = (unsigned int)v191;
        LODWORD(v186[5]) = v191;
        v20 = v188.m128i_i64[0];
        v186[0] = v188.m128i_i64[0];
        v21 = _mm_srli_si128(v188, 8).m128i_u64[0];
        v186[1] = v21;
        v22 = v189.m128i_i64[0];
        v186[2] = v189.m128i_i64[0];
        v23 = _mm_srli_si128(v189, 8).m128i_u64[0];
        v186[6] = v23;
        v24 = v190.m128i_i64[0];
        v186[3] = v190.m128i_i64[0];
        v186[4] = __PAIR64__(_mm_cvtsi128_si32(_mm_srli_si128(v190, 12)), _mm_cvtsi128_si32(_mm_srli_si128(v190, 8)));
        v25 = 2589188;
        JobLimitInformationValidFlags = 2589188;
      }
      else
      {
        if ( (_DWORD)v4 == 48 )
        {
          v193 = *(__m128i *)BugCheckParameter2;
          v194 = *(__m128i *)(BugCheckParameter2 + 16);
          v195 = *(__m128i *)(BugCheckParameter2 + 32);
          v19 = (unsigned int)_mm_cvtsi128_si32(_mm_srli_si128(v195, 8));
          LODWORD(v186[5]) = v19;
          v20 = v193.m128i_i64[0];
          v186[0] = v193.m128i_i64[0];
          v21 = _mm_srli_si128(v193, 8).m128i_u64[0];
          v186[1] = v21;
          v22 = v194.m128i_i64[0];
          v186[2] = v194.m128i_i64[0];
          v24 = _mm_srli_si128(v194, 8).m128i_u64[0];
          v186[3] = v24;
          v186[4] = __PAIR64__(_mm_cvtsi128_si32(_mm_srli_si128(v195, 4)), _mm_cvtsi128_si32(v195));
          v25 = 459268;
          JobLimitInformationValidFlags = 459268;
        }
        else
        {
          memmove(v186, v9, v4);
          v25 = 2064900;
          JobLimitInformationValidFlags = 2064900;
          v19 = LODWORD(v186[5]);
          v24 = v186[3];
          v22 = v186[2];
          v21 = v186[1];
          v20 = v186[0];
        }
        v23 = v186[6];
      }
      if ( (~v25 & (unsigned int)v19) != 0 )
        goto LABEL_384;
      if ( (v19 & 0x8000) != 0 )
      {
        if ( v23 < 0x1000 )
          goto LABEL_384;
      }
      else
      {
        v23 = 0LL;
        v186[6] = 0LL;
      }
      if ( (v19 & 0x200) != 0 )
      {
        if ( v24 < 0x1000 || v24 < v23 )
          goto LABEL_384;
      }
      else
      {
        v186[3] = 0LL;
      }
      if ( (v19 & 4) != 0 )
      {
        if ( !v22 )
          goto LABEL_384;
      }
      else
      {
        v186[2] = 0LL;
      }
      if ( (v19 & 0x10000) != 0 )
      {
        if ( !v20 )
          goto LABEL_384;
      }
      else
      {
        v186[0] = 0LL;
      }
      if ( (v19 & 0x20000) != 0 )
      {
        if ( !v21 )
          goto LABEL_384;
      }
      else
      {
        v186[1] = 0LL;
      }
      for ( j = 0LL; (int)j < 3; j = (unsigned int)(v29 + 1) )
      {
        PspNotificationLimitRateControlToleranceField(v186, j, v19);
        PspNotificationLimitRateControlToleranceIntervalField(v186);
        v28 = PspRateControlLimitFlag(v27);
        if ( (v28 & (unsigned int)v19) != 0 )
        {
          if ( !*v30 || *v30 > 3 || !*v31 || *v31 > 3 )
            goto LABEL_384;
        }
        else
        {
          *v30 = 0;
          *v31 = 0;
          v19 = LODWORD(v186[5]);
        }
      }
      v14 = (char *)DeferredContext;
      v32 = (int **)((char *)DeferredContext + 984);
      if ( *((_QWORD *)DeferredContext + 123) )
      {
        v33 = 0LL;
        BugCheckParameter2 = 0LL;
      }
      else
      {
        v33 = (struct _ERESOURCE *)ExAllocatePoolWithTag(PagedPool, 0x88uLL, 0x624A7350u);
        if ( !v33 )
          goto LABEL_345;
        BugCheckParameter2 = PsChargeSharedPoolQuota(KeGetCurrentThread()->ApcState.Process, 0x88uLL, 0LL);
        v74 = v33;
        if ( !BugCheckParameter2 )
        {
          v99 = 1649046352;
          goto LABEL_348;
        }
        memset(v33, 0, 0x88uLL);
        v14 = (char *)DeferredContext;
      }
      Resource = (PERESOURCE)(v14 + 56);
      ExAcquireResourceExclusiveLite((PERESOURCE)(v14 + 56), 1u);
      if ( *v32 )
      {
        if ( v33 )
        {
          ExFreePoolWithTag(v33, 0x624A7350u);
          PsReturnSharedPoolQuota((char *)BugCheckParameter2, 0x88uLL, 0LL);
        }
      }
      else
      {
        *v32 = (int *)v33;
        *((_QWORD *)v14 + 124) = BugCheckParameter2;
      }
      v34 = *v32;
      v35 = **v32;
      *((_QWORD *)v34 + 1) = v186[0];
      *((_QWORD *)v34 + 2) = v186[1];
      *((_QWORD *)v34 + 3) = v186[2];
      v36 = 0LL;
      v37 = v34 + 15;
      while ( (int)v36 < 3 )
      {
        v38 = (_DWORD *)PspNotificationLimitRateControlToleranceField(v186, v36, v37);
        *(_DWORD *)(v39 - 12) = *v38;
        v40 = (_DWORD *)PspNotificationLimitRateControlToleranceIntervalField(v186);
        *v41 = *v40;
        v36 = (unsigned int)(v42 + 1);
        v37 = v41 + 1;
      }
      BugCheckParameter2 = (ULONG_PTR)(v14 + 1032);
      ExAcquirePushLockExclusiveEx((ULONG_PTR)(v14 + 1032), 0LL);
      *((_QWORD *)v34 + 4) = v186[6] >> 12;
      *((_QWORD *)v34 + 5) = v186[3] >> 12;
      **v32 = v186[5];
      PspUnlockJobMemoryLimitsExclusive((__int64)v14, 0LL, 0LL);
      if ( (**v32 & 0xFFFF7DFF) != 0 )
      {
        _InterlockedAdd64(&PspJobTimeLimitsRequest, 1uLL);
        v14 = (char *)DeferredContext;
      }
      if ( v35 )
      {
        v44 = *v32;
        if ( **v32 )
        {
LABEL_105:
          if ( (PerfGlobalGroupMask & 0x80000) != 0 )
            EtwTraceJobSetQuery((_DWORD)v14, v5, (unsigned int)v186, 0, 0, 1829);
          ExReleaseResourceLite(Resource);
          ExAcquirePushLockSharedEx(BugCheckParameter2, 0LL);
          v45 = *((_QWORD *)v14 + 167);
          v14 = (char *)DeferredContext;
          JobMemoryUsageNotificationViolations = PspGetJobMemoryUsageNotificationViolations(
                                                   DeferredContext,
                                                   *((_QWORD *)DeferredContext + 122),
                                                   *((_QWORD *)DeferredContext + 122) + v45,
                                                   33280LL);
          PspUnlockJobMemoryLimitsShared(v14, 0LL);
          if ( JobMemoryUsageNotificationViolations )
          {
            PspScheduleEnforcementWorker(*((_QWORD *)v14 + 135));
            v14 = (char *)DeferredContext;
          }
          goto LABEL_34;
        }
      }
      else
      {
        v44 = *v32;
        if ( !**v32 )
          goto LABEL_105;
      }
      PspEnumJobsAndProcessesInJobHierarchy(v14, (__int64)v44, 5);
      goto LABEL_105;
    }
    if ( (int)v5 > 40 )
    {
      if ( (_DWORD)v5 == 41 )
      {
        v172 = *(_DWORD *)v9;
        v14 = (char *)DeferredContext;
        if ( !PspJobIsAppSilo((__int64)DeferredContext) || v124 != 2 )
          goto LABEL_430;
        v86 = (struct _ERESOURCE *)(v14 + 56);
        ExAcquireResourceExclusiveLite((PERESOURCE)(v14 + 56), 1u);
        if ( *((_DWORD *)v14 + 306) )
        {
          v13 = -1073740529;
        }
        else
        {
          v125 = _interlockedbittestandset((volatile signed __int32 *)v14 + 330, 0x1Du);
          v14 = (char *)DeferredContext;
          if ( v125 )
          {
            v13 = 255;
          }
          else
          {
            PspBeginSiloTeardown(DeferredContext);
            v13 = 0;
          }
        }
        goto LABEL_481;
      }
      if ( (_DWORD)v5 == 42 )
      {
        v64 = 0;
        v183[0] = *(_OWORD *)v9;
        v183[1] = *((_OWORD *)v9 + 1);
        v183[2] = *((_OWORD *)v9 + 2);
        v183[3] = *((_OWORD *)v9 + 3);
        *(_QWORD *)&v183[4] = v9[8];
        if ( (v183[0] & 0xFFFFFFFC) != 0 || (v183[0] & 3) == 0 )
        {
          v13 = -1073741811;
          v14 = (char *)DeferredContext;
        }
        else
        {
          v64 = 8;
          v65 = Thread;
          v14 = (char *)DeferredContext;
          PspLockRootJobExclusive((__int64)DeferredContext, (__int64)Thread, &v147);
          PspLockJobConditionally(v14, &v147);
          v13 = PspSetJobIoAttribution(v14, v183[0] & 1, 1, 1u);
          if ( v13 >= 0 )
          {
            PspUnlockJobConditionally(v14, &v147);
            PspUnlockJob(v147, v65);
            v64 = 0;
          }
        }
        if ( (unsigned __int8)v64 < 8u )
          goto LABEL_35;
        PspUnlockJobConditionally(v14, &v147);
        v122 = Thread;
        v123 = v147;
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
              v162 = *v9;
              v14 = (char *)DeferredContext;
              v18 = PspSetEnergyTrackingStateJobTree(DeferredContext, (__int64)&v162);
              goto LABEL_64;
            }
            if ( (_DWORD)v5 != 47 )
              goto LABEL_459;
            v143 = *(_BYTE *)v9;
            if ( v143 != 1 )
              goto LABEL_384;
            v118 = SeSinglePrivilegeCheck(SeTcbPrivilege, AccessMode);
            v14 = (char *)DeferredContext;
            if ( v118 )
            {
              if ( (*((_DWORD *)DeferredContext + 330) & 0x40000000) != 0 )
              {
                v13 = (unsigned __int8)PspSetJobSiloThreadImpersonationPolicy(DeferredContext, 2LL) == 0
                    ? 0xC0000022
                    : 0;
                goto LABEL_35;
              }
              goto LABEL_430;
            }
LABEL_428:
            v13 = -1073741727;
            goto LABEL_35;
          }
          v14 = (char *)DeferredContext;
          if ( (*((_DWORD *)DeferredContext + 330) & 0x40000000) != 0 )
          {
            v163 = 0LL;
            v164 = *(__m128i *)v9;
            v119 = _mm_srli_si128(v164, 8).m128i_u64[0];
            if ( !v119 || (unsigned __int16)(v164.m128i_i16[0] - 1) > 0x206u || (v164.m128i_i8[0] & 1) != 0 )
            {
              v13 = -1073741811;
              v130 = -1073741811;
              goto LABEL_35;
            }
            if ( AccessMode == 1 )
            {
              if ( (v119 & 1) != 0 )
                ExRaiseDatatypeMisalignment();
              if ( v119 + v164.m128i_u16[0] > 0x7FFFFFFF0000LL || v119 + v164.m128i_u16[0] < v119 )
                MEMORY[0x7FFFFFFF0000] = 0;
            }
            v120 = v164.m128i_u16[0];
            v121 = (wchar_t *)ExAllocatePoolWithTag(PagedPool, v164.m128i_u16[0], 0x72537350u);
            v85 = v121;
            v163 = v121;
            if ( !v121 )
            {
              v13 = -1073741670;
              v130 = -1073741670;
              goto LABEL_35;
            }
            memmove(v121, (const void *)v119, v120);
            if ( wcsnlen(v85, v120 >> 1) == v120 >> 1 )
            {
              v164.m128i_i64[1] = (__int64)v85;
              v13 = PspAssignSiloSystemRootPath(v14, &v164);
            }
            else
            {
              v13 = -1073741811;
            }
            if ( !v85 )
              goto LABEL_35;
            v115 = 1918071632;
            goto LABEL_446;
          }
LABEL_429:
          v13 = -1073740535;
          goto LABEL_35;
        }
        v14 = (char *)DeferredContext;
        v86 = (struct _ERESOURCE *)((char *)DeferredContext + 56);
        ExAcquireResourceExclusiveLite((PERESOURCE)((char *)DeferredContext + 56), 1u);
        if ( *((int *)v14 + 330) >= 0 )
        {
          *(_OWORD *)(v14 + 1256) = *(_OWORD *)v9;
          _InterlockedOr((volatile signed __int32 *)v14 + 330, 0x80000000);
          ExReleaseResourceLite(v86);
          v13 = 0;
LABEL_282:
          v14 = (char *)DeferredContext;
          goto LABEL_35;
        }
        v13 = -1073741791;
LABEL_481:
        v50 = v86;
        goto LABEL_121;
      }
      v182 = *v9;
      v14 = (char *)DeferredContext;
      Silo = PspSetJobMemoryPartition(DeferredContext);
LABEL_287:
      v13 = Silo;
      goto LABEL_35;
    }
    switch ( (_DWORD)v5 )
    {
      case 0x28:
        v116 = SeSinglePrivilegeCheck(SeTcbPrivilege, AccessMode);
        v14 = (char *)DeferredContext;
        if ( !v116 )
          goto LABEL_428;
        if ( (*((_DWORD *)DeferredContext + 330) & 0x40000000) == 0 )
          goto LABEL_429;
        if ( !(unsigned __int8)PspSetJobSiloThreadImpersonationPolicy(DeferredContext, 4LL) )
          goto LABEL_430;
        v181 = *v9;
        v142 = *((_BYTE *)v9 + 8);
        LOBYTE(v117) = AccessMode;
        Silo = PspConvertSiloToServerSilo(v14, v117);
        goto LABEL_287;
      case 0x19:
        v14 = (char *)DeferredContext;
        ExAcquireResourceExclusiveLite((PERESOURCE)((char *)DeferredContext + 56), 1u);
        KeResetEvent((PRKEVENT)v14);
LABEL_33:
        ExReleaseResourceLite((PERESOURCE)(v14 + 56));
        goto LABEL_34;
      case 0x1B:
        v14 = (char *)DeferredContext;
        if ( DeferredContext )
          ExAcquirePushLockExclusiveEx((ULONG_PTR)DeferredContext + 1032, 0LL);
        *((_QWORD *)v14 + 76) = 0LL;
        *((_QWORD *)v14 + 75) = 0LL;
        PspUnlockJobMemoryLimitsExclusive((__int64)v14, 0LL, 0LL);
        goto LABEL_34;
    }
    if ( (_DWORD)v5 != 31 )
    {
      switch ( (_DWORD)v5 )
      {
        case ' ':
          v14 = (char *)DeferredContext;
          Silo = PspSetNetRateControl(v9, (unsigned int)v4, DeferredContext);
          break;
        case '!':
          goto LABEL_66;
        case '#':
          v14 = (char *)DeferredContext;
          Silo = PspCreateSilo((__int64)DeferredContext, v12);
          break;
        case '%':
          v114 = SeSinglePrivilegeCheck(SeTcbPrivilege, AccessMode);
          v14 = (char *)DeferredContext;
          if ( !v114 )
            goto LABEL_428;
          if ( (*((_DWORD *)DeferredContext + 330) & 0x40000000) == 0 )
            goto LABEL_429;
          if ( !(unsigned __int8)PspSetJobSiloThreadImpersonationPolicy(DeferredContext, 4LL) )
            goto LABEL_430;
          v167 = *(_DWORD *)v9;
          Silo = ObCreateSiloRootDirectory(v14);
          break;
        default:
          goto LABEL_459;
      }
      goto LABEL_287;
    }
    memmove(v184, v9, v4);
    if ( v184[3] )
    {
      v82 = v184[5];
      v83 = PagedPool;
      if ( !LOWORD(v184[5]) )
        goto LABEL_267;
      if ( (v184[3] & 1) != 0 )
        ExRaiseDatatypeMisalignment();
      if ( v184[3] + (unsigned __int64)LOWORD(v184[5]) > 0x7FFFFFFF0000LL
        || v184[3] + (unsigned __int64)LOWORD(v184[5]) < v184[3] )
      {
        MEMORY[0x7FFFFFFF0000] = 0;
        v82 = v184[5];
      }
      if ( !v82 || (v82 & 1) != 0 )
      {
LABEL_267:
        v13 = -1073741811;
        v130 = -1073741811;
        v14 = (char *)DeferredContext;
        goto LABEL_278;
      }
      v158 = 1;
      if ( AccessMode == 1 )
        v83 = 9;
      v158 = v83;
      v169[1] = ExAllocatePoolWithQuotaTag(v83, v82 + 2LL, 0x624A7350u);
      if ( !v169[1] )
      {
        v13 = -1073741801;
        v130 = -1073741801;
        v14 = (char *)DeferredContext;
LABEL_278:
        v85 = (wchar_t *)v169[1];
        if ( !v169[1] )
          goto LABEL_35;
        v115 = 0;
LABEL_446:
        ExFreePoolWithTag(v85, v115);
        goto LABEL_35;
      }
      v84 = v169[1];
      memmove(v169[1], (const void *)v184[3], LOWORD(v184[5]));
      v84[(unsigned __int64)LOWORD(v184[5]) >> 1] = 0;
      v184[3] = v84;
    }
    if ( (v184[4] & 0xFFFFFFF000000000uLL) != 0 )
    {
      v13 = -1073741811;
    }
    else
    {
      if ( !v184[10] && !v184[7] && !v184[2] || (unsigned __int8)PspIsContextAdmin() )
      {
        v14 = (char *)DeferredContext;
        v13 = PspSetJobIoRateControl((__int64)DeferredContext, (__int64)v184);
        goto LABEL_278;
      }
      v13 = -1073741790;
    }
    v14 = (char *)DeferredContext;
    goto LABEL_278;
  }
  return result;
}
