/*
 * XREFs of NtQueryInformationJobObject @ 0x1405EFAA0
 * Callers:
 *     <none>
 * Callees:
 *     PspGetJobSilo @ 0x140200084 (PspGetJobSilo.c)
 *     PsGetJobServerSilo @ 0x1402017B0 (PsGetJobServerSilo.c)
 *     PsIsHostSilo @ 0x1402556F0 (PsIsHostSilo.c)
 *     ObfReferenceObjectWithTag @ 0x14025A2D0 (ObfReferenceObjectWithTag.c)
 *     ExAcquirePushLockSharedEx @ 0x140260BA0 (ExAcquirePushLockSharedEx.c)
 *     ObfDereferenceObjectWithTag @ 0x1402611B0 (ObfDereferenceObjectWithTag.c)
 *     HalSystemVectorDispatchEntry @ 0x1402D53D0 (HalSystemVectorDispatchEntry.c)
 *     PsGetServerSiloGlobals @ 0x1402D70B4 (PsGetServerSiloGlobals.c)
 *     PsGetServerSiloServiceSessionId @ 0x1402E5A50 (PsGetServerSiloServiceSessionId.c)
 *     KeIsSingleGroupAffinityEx @ 0x140315310 (KeIsSingleGroupAffinityEx.c)
 *     MmQueryApiSetSchema @ 0x14036E960 (MmQueryApiSetSchema.c)
 *     __security_check_cookie @ 0x1403CC020 (__security_check_cookie.c)
 *     memmove @ 0x140408CC0 (memmove.c)
 *     memset @ 0x140408F80 (memset.c)
 *     PspIsSiloInServerSilo @ 0x14057B540 (PspIsSiloInServerSilo.c)
 *     PspQueryJobHierarchyAccountingInformation @ 0x1405F098C (PspQueryJobHierarchyAccountingInformation.c)
 *     PspUnlockJob @ 0x140612970 (PspUnlockJob.c)
 *     PspLockJobExclusive @ 0x1406129B4 (PspLockJobExclusive.c)
 *     PspLockJobShared @ 0x1406129DC (PspLockJobShared.c)
 *     PspUnlockJobMemoryLimitsShared @ 0x140615F90 (PspUnlockJobMemoryLimitsShared.c)
 *     PspLockJobMemoryLimitsShared @ 0x140616040 (PspLockJobMemoryLimitsShared.c)
 *     ObpReferenceObjectByHandleWithTag @ 0x14062B240 (ObpReferenceObjectByHandleWithTag.c)
 *     PspNotificationLimitRateControlToleranceIntervalField @ 0x140662074 (PspNotificationLimitRateControlToleranceIntervalField.c)
 *     PspNotificationLimitRateControlToleranceField @ 0x14066209C (PspNotificationLimitRateControlToleranceField.c)
 *     PspRateControlLimitFlag @ 0x14066211C (PspRateControlLimitFlag.c)
 *     PspQueryJobIoAttribution @ 0x14067607C (PspQueryJobIoAttribution.c)
 *     PspQueryRateControlHistory @ 0x140689FAC (PspQueryRateControlHistory.c)
 *     PspAllocateAndQueryNotificationChannel @ 0x1406CBAEC (PspAllocateAndQueryNotificationChannel.c)
 *     PspQueryJobHierarchyProcessIdList @ 0x1406D7B64 (PspQueryJobHierarchyProcessIdList.c)
 *     PspLimitViolationRateControlToleranceLimitField @ 0x1406E2CB8 (PspLimitViolationRateControlToleranceLimitField.c)
 *     PspGetJobLimitInformationValidFlags @ 0x1406E2CF8 (PspGetJobLimitInformationValidFlags.c)
 *     ExRaiseDatatypeMisalignment @ 0x140767450 (ExRaiseDatatypeMisalignment.c)
 *     PsGetParentSilo @ 0x1409018D0 (PsGetParentSilo.c)
 *     PspQueryJobHierarchyInterferenceCount @ 0x1409049A0 (PspQueryJobHierarchyInterferenceCount.c)
 *     PspUnlockJobListShared @ 0x140905618 (PspUnlockJobListShared.c)
 *     EtwTraceJobSetQuery @ 0x14093182C (EtwTraceJobSetQuery.c)
 *     ObGetSiloRootDirectoryPath @ 0x14097BF7C (ObGetSiloRootDirectoryPath.c)
 *     ExFreePoolWithTag @ 0x1409B1010 (ExFreePoolWithTag.c)
 */

NTSTATUS __cdecl NtQueryInformationJobObject(
        HANDLE JobHandle,
        JOBOBJECTINFOCLASS JobObjectInformationClass,
        PVOID JobObjectInformation,
        ULONG JobObjectInformationLength,
        PULONG ReturnLength)
{
  __int64 v5; // rbx
  __int32 v8; // edx
  ULONG v9; // r14d
  int v10; // r15d
  struct _KTHREAD *CurrentThread; // r9
  __int64 v12; // rcx
  NTSTATUS result; // eax
  char *v14; // rbx
  bool *v15; // r12
  NTSTATUS JobIoAttribution; // esi
  PULONG v17; // r15
  PVOID v18; // r13
  bool v19; // zf
  char *v20; // rcx
  int v21; // eax
  _DWORD *v22; // rax
  _QWORD *v23; // rcx
  __int64 v24; // rax
  __int64 v25; // rax
  __int64 v26; // rax
  __int64 v27; // rax
  __int64 v28; // rax
  __int64 v29; // rdx
  _DWORD *v30; // rax
  int v31; // edx
  int *v32; // r8
  _BYTE *v33; // r9
  int v34; // ecx
  _BYTE *v35; // r9
  int v36; // r12d
  __int16 *p_Size_4; // rsi
  __int64 v38; // r8
  __int64 v39; // rdx
  int v40; // eax
  _DWORD *v41; // rdx
  int v42; // edx
  _QWORD *v43; // rcx
  __int64 v44; // rax
  struct _KTHREAD *v45; // rsi
  __int64 v46; // rcx
  __int64 v47; // rdx
  _DWORD *v48; // r8
  _DWORD *v49; // rax
  __int64 v50; // r8
  _DWORD *v51; // rax
  _DWORD *v52; // r8
  int v53; // edx
  __int32 v54; // r13d
  __int32 v55; // r13d
  __int32 v56; // r13d
  int v57; // r13d
  __int64 v58; // rax
  int v59; // r8d
  __int64 v60; // rdx
  int v61; // edx
  __int64 v62; // rsi
  ULONG v63; // r13d
  int v64; // r14d
  unsigned __int16 v65; // r8
  _QWORD *v66; // rdx
  unsigned __int16 v67; // cx
  int v68; // ecx
  unsigned int v69; // edx
  int v70; // ecx
  int v71; // eax
  unsigned int v72; // r13d
  __int16 *v73; // rax
  int v74; // esi
  _BYTE *v75; // rcx
  _QWORD *v76; // r8
  unsigned __int16 v77; // dx
  unsigned int v78; // eax
  __int64 v79; // rcx
  int v80; // edx
  int v81; // eax
  __int64 ParentSilo; // rsi
  int v83; // r13d
  int v84; // r13d
  int v85; // r13d
  char v86; // al
  __int64 v87; // rax
  const void **ServerSiloGlobals; // rax
  size_t v89; // r8
  __int64 v90; // rcx
  __int64 JobSilo; // rax
  unsigned __int16 v92; // dx
  char v93; // [rsp+40h] [rbp-8D8h]
  char v95; // [rsp+58h] [rbp-8C0h] BYREF
  int v96; // [rsp+5Ch] [rbp-8BCh]
  bool v97; // [rsp+60h] [rbp-8B8h] BYREF
  bool v98; // [rsp+61h] [rbp-8B7h] BYREF
  char PreviousMode; // [rsp+62h] [rbp-8B6h]
  unsigned __int16 v100; // [rsp+64h] [rbp-8B4h] BYREF
  ULONG v101; // [rsp+68h] [rbp-8B0h]
  struct _KTHREAD *v102; // [rsp+70h] [rbp-8A8h]
  ULONG v103; // [rsp+78h] [rbp-8A0h]
  PVOID Object; // [rsp+80h] [rbp-898h] BYREF
  ULONG Size; // [rsp+88h] [rbp-890h]
  __int16 Size_4; // [rsp+8Ch] [rbp-88Ch] BYREF
  char Size_6; // [rsp+8Eh] [rbp-88Ah]
  ULONG_PTR BugCheckParameter1; // [rsp+90h] [rbp-888h]
  __int64 v109; // [rsp+98h] [rbp-880h] BYREF
  int v110; // [rsp+A0h] [rbp-878h] BYREF
  int v111; // [rsp+A4h] [rbp-874h] BYREF
  int v112; // [rsp+A8h] [rbp-870h] BYREF
  int v113; // [rsp+ACh] [rbp-86Ch] BYREF
  int v114; // [rsp+B0h] [rbp-868h] BYREF
  PVOID v115; // [rsp+B8h] [rbp-860h]
  PULONG v116; // [rsp+C0h] [rbp-858h]
  int v117; // [rsp+C8h] [rbp-850h] BYREF
  __int64 v118; // [rsp+D0h] [rbp-848h] BYREF
  __int64 v119; // [rsp+D8h] [rbp-840h] BYREF
  __int64 v120; // [rsp+E0h] [rbp-838h] BYREF
  __int64 v121; // [rsp+E8h] [rbp-830h] BYREF
  _QWORD *v122; // [rsp+F0h] [rbp-828h] BYREF
  __int64 v123; // [rsp+F8h] [rbp-820h] BYREF
  PVOID P; // [rsp+100h] [rbp-818h]
  __int128 v125; // [rsp+108h] [rbp-810h] BYREF
  __int128 v126; // [rsp+118h] [rbp-800h]
  __int64 v127[5]; // [rsp+128h] [rbp-7F0h] BYREF
  __int64 v128; // [rsp+150h] [rbp-7C8h]
  _QWORD v129[14]; // [rsp+160h] [rbp-7B8h] BYREF
  __int128 v130; // [rsp+1D0h] [rbp-748h] BYREF
  __int128 v131; // [rsp+1E0h] [rbp-738h] BYREF
  __int128 v132; // [rsp+1F0h] [rbp-728h] BYREF
  _OWORD v133[5]; // [rsp+200h] [rbp-718h] BYREF
  __int128 v134; // [rsp+250h] [rbp-6C8h] BYREF
  __int128 v135; // [rsp+260h] [rbp-6B8h]
  __int128 v136; // [rsp+270h] [rbp-6A8h]
  __int128 v137; // [rsp+280h] [rbp-698h] BYREF
  __int128 v138; // [rsp+290h] [rbp-688h]
  __int128 v139; // [rsp+2A0h] [rbp-678h]
  __int64 v140; // [rsp+2B0h] [rbp-668h]
  _BYTE v141[40]; // [rsp+2B8h] [rbp-660h] BYREF
  __int128 v142; // [rsp+2E0h] [rbp-638h] BYREF
  __int128 v143; // [rsp+2F0h] [rbp-628h]
  int v144; // [rsp+300h] [rbp-618h]
  __int128 v145; // [rsp+308h] [rbp-610h] BYREF
  _QWORD v146[10]; // [rsp+320h] [rbp-5F8h] BYREF
  _QWORD v147[12]; // [rsp+370h] [rbp-5A8h] BYREF
  _QWORD v148[20]; // [rsp+3D0h] [rbp-548h] BYREF
  _BYTE v149[64]; // [rsp+470h] [rbp-4A8h] BYREF
  _OWORD v150[16]; // [rsp+4B0h] [rbp-468h] BYREF
  _QWORD Src[56]; // [rsp+5B0h] [rbp-368h] BYREF
  _BYTE v152[320]; // [rsp+770h] [rbp-1A8h] BYREF
  _WORD v153[20]; // [rsp+8B0h] [rbp-68h] BYREF

  v5 = JobObjectInformationLength;
  v101 = JobObjectInformationLength;
  BugCheckParameter1 = (ULONG_PTR)JobHandle;
  v115 = JobObjectInformation;
  v116 = ReturnLength;
  memset(Src, 0, sizeof(Src));
  memset(&v150[5], 0, 0xA8uLL);
  v97 = 0;
  v111 = 0;
  v119 = 0LL;
  v112 = 0;
  v142 = 0LL;
  v143 = 0LL;
  v144 = 0;
  v145 = 0LL;
  v118 = 0LL;
  v110 = 0;
  v121 = 0LL;
  memset(v148, 0, 0x98uLL);
  v130 = 0LL;
  v100 = 0;
  memset(v150, 0, 0x48uLL);
  Object = 0LL;
  v117 = 0;
  memset(v129, 0, 0x68uLL);
  memset(v146, 0, sizeof(v146));
  memset(v147, 0, 0x58uLL);
  memset(v141, 0, sizeof(v141));
  v131 = 0LL;
  memset(v133, 0, 0x48uLL);
  v134 = 0LL;
  v135 = 0LL;
  v136 = 0LL;
  v137 = 0LL;
  v138 = 0LL;
  v139 = 0LL;
  v140 = 0LL;
  v113 = 0;
  v123 = 0LL;
  v120 = 0LL;
  memset(v149, 0, sizeof(v149));
  v132 = 0LL;
  v125 = 0LL;
  v126 = 0LL;
  v109 = 0LL;
  v95 = 0;
  v98 = 0;
  v8 = JobObjectInformationClass - 1;
  if ( (unsigned int)(JobObjectInformationClass - 1) > 0x2E )
    return -1073741821;
  switch ( JobObjectInformationClass )
  {
    case JobObjectExtendedLimitInformation:
      if ( (_DWORD)v5 == 144 || (_DWORD)v5 == 152 )
        goto LABEL_7;
      return -1073741820;
    case JobObjectNotificationLimitInformation:
      if ( (_DWORD)v5 == 48 )
        goto LABEL_7;
      v19 = (_DWORD)v5 == 56;
      goto LABEL_87;
    case JobObjectLimitViolationInformation:
      if ( (_DWORD)v5 == 80 )
        goto LABEL_7;
      v19 = (_DWORD)v5 == 88;
LABEL_87:
      if ( v19 )
        goto LABEL_7;
      return -1073741820;
    case JobObjectExtendedAccountingInformation:
      if ( (_DWORD)v5 == 432 )
        goto LABEL_7;
      v19 = (_DWORD)v5 == 448;
      goto LABEL_87;
    case JobObjectWakeInformation:
      if ( (_DWORD)v5 == 40 )
        goto LABEL_7;
      v19 = (_DWORD)v5 == 64;
      goto LABEL_87;
    case JobObjectMemoryUsageInformation:
      if ( (_DWORD)v5 == 16 )
        goto LABEL_7;
      v19 = (_DWORD)v5 == 40;
      goto LABEL_87;
    case JobObjectContainerId:
      if ( (_DWORD)v5 == 16 )
        goto LABEL_7;
      v19 = (_DWORD)v5 == 36;
      goto LABEL_87;
  }
  if ( JobObjectInformationClass != JobObjectMemoryPartitionInformation )
  {
    v9 = PspJobInfoLengths[v8];
    v96 = v9;
    if ( (_DWORD)v5 == v9 )
      goto LABEL_8;
    if ( (JobObjectInformationClass == JobObjectBasicProcessIdList
       || JobObjectInformationClass == JobObjectSecurityLimitInformation
       || JobObjectInformationClass == JobObjectGroupInformation
       || JobObjectInformationClass == JobObjectGroupInformationEx
       || JobObjectInformationClass == JobObjectIoRateControlInformation
       || JobObjectInformationClass == JobObjectSiloRootDirectory)
      && (unsigned int)v5 >= v9 )
    {
LABEL_7:
      v96 = v5;
      v9 = v5;
LABEL_8:
      v10 = 1;
      goto LABEL_9;
    }
    return -1073741820;
  }
  if ( (_DWORD)v5 != 1 )
    return -1073741820;
  v10 = 1;
  v9 = 1;
  v96 = 1;
LABEL_9:
  Size = v9;
  CurrentThread = KeGetCurrentThread();
  v102 = CurrentThread;
  PreviousMode = CurrentThread->PreviousMode;
  if ( PreviousMode )
  {
    if ( (_DWORD)v5 )
    {
      if ( ((PspJobInfoAlign[v8] - 1) & (unsigned int)JobObjectInformation) != 0 )
        ExRaiseDatatypeMisalignment();
      if ( (unsigned __int64)JobObjectInformation + v5 > 0x7FFFFFFF0000LL
        || (char *)JobObjectInformation + v5 < JobObjectInformation )
      {
        MEMORY[0x7FFFFFFF0000] = 0;
      }
    }
    if ( ReturnLength )
    {
      v12 = (__int64)ReturnLength;
      if ( (unsigned __int64)ReturnLength >= 0x7FFFFFFF0000LL )
        v12 = 0x7FFFFFFF0000LL;
      *(_DWORD *)v12 = *(_DWORD *)v12;
    }
  }
  if ( BugCheckParameter1 )
  {
    result = ObpReferenceObjectByHandleWithTag(BugCheckParameter1, 0x79517350u, (__int64)&Object, 0LL, 0LL);
    if ( result < 0 )
      return result;
    v14 = (char *)Object;
    goto LABEL_24;
  }
  v20 = (char *)CurrentThread->ApcState.Process[1].Affinity.Bitmap[16];
  Object = v20;
  v14 = v20;
  if ( v20 )
  {
    ObfReferenceObjectWithTag(v20, 0x79517350u);
LABEL_24:
    CurrentThread = v102;
    goto LABEL_25;
  }
  if ( ((JobObjectInformationClass - 31) & 0xFFFFFFF7) != 0 )
    return -1073741790;
LABEL_25:
  v103 = v9;
  v93 = 0;
  v15 = 0LL;
  JobIoAttribution = 0;
  if ( JobObjectInformationClass > JobObjectWakeInformation )
  {
    if ( JobObjectInformationClass > JobObjectSiloBasicInformation )
    {
      v54 = JobObjectInformationClass - 37;
      if ( v54 )
      {
        v55 = v54 - 1;
        if ( v55 )
        {
          v56 = v55 - 1;
          if ( !v56 )
          {
            if ( v14 )
            {
              PsGetJobServerSilo((__int64)v14, &v109);
              v87 = v109;
            }
            else
            {
              v87 = HalSystemVectorDispatchEntry();
            }
            ServerSiloGlobals = (const void **)PsGetServerSiloGlobals(v87);
            v18 = JobObjectInformation;
            memmove(JobObjectInformation, ServerSiloGlobals[139], v89);
            v93 = 1;
            v17 = ReturnLength;
            goto LABEL_39;
          }
          v57 = v56 - 3;
          if ( !v57 )
          {
            PspLockJobShared(v14, CurrentThread);
            JobIoAttribution = PspQueryJobIoAttribution(v14, v150);
            PspUnlockJob(v14, v102);
            v15 = (bool *)v150;
            goto LABEL_37;
          }
          v83 = v57 - 1;
          if ( !v83 )
          {
            JobIoAttribution = 0;
            v86 = v95;
            if ( (unsigned __int64)(*((_QWORD *)v14 + 195) - 1LL) <= 0xFFFFFFFFFFFFFFFDuLL )
              v86 = 1;
            v95 = v86;
            v15 = (bool *)&v95;
            goto LABEL_37;
          }
          v84 = v83 - 1;
          if ( !v84 )
          {
            v145 = *(_OWORD *)(v14 + 1256);
            v15 = (bool *)&v145;
            goto LABEL_36;
          }
          v85 = v84 - 2;
          if ( !v85 )
          {
            PspLockJobShared(v14, CurrentThread);
            v121 = *((_QWORD *)v14 + 197);
            PspUnlockJob(v14, v102);
            v15 = (bool *)&v121;
            goto LABEL_36;
          }
          if ( v85 == 1 )
          {
            v98 = (*((_DWORD *)v14 + 331) & 2) != 0;
            v15 = &v98;
            goto LABEL_36;
          }
          goto LABEL_212;
        }
        PsGetJobServerSilo((__int64)v14, &v109);
        v62 = v109;
        if ( !PsIsHostSilo(v109) )
        {
          v90 = *(_QWORD *)(v62 + 1272);
          *(_QWORD *)((char *)&v125 + 4) = *(_QWORD *)(v90 + 1096);
          BYTE12(v125) = *(_BYTE *)(v90 + 1160);
          if ( PreviousMode )
          {
            v126 = 0LL;
          }
          else
          {
            v122 = 0LL;
            MmQueryApiSetSchema(&v122, v127);
            *(_QWORD *)&v126 = *((_QWORD *)PsGetServerSiloGlobals(v62) + 130);
            *((_QWORD *)&v126 + 1) = *v122;
          }
          LODWORD(v125) = PsGetServerSiloServiceSessionId(v62);
          JobIoAttribution = 0;
          v15 = (bool *)&v125;
          goto LABEL_37;
        }
      }
      else
      {
        JobSilo = PspGetJobSilo((__int64)v14);
        if ( JobSilo )
        {
          P = 0LL;
          JobIoAttribution = ObGetSiloRootDirectoryPath(JobSilo, &v123);
          if ( JobIoAttribution >= 0 )
          {
            v93 = 1;
            v92 = v123;
            v9 = (unsigned __int16)v123 + 16;
            v96 = v9;
            if ( v9 > v101 )
            {
              JobIoAttribution = -1073741789;
              v18 = JobObjectInformation;
              v17 = ReturnLength;
            }
            else
            {
              v18 = JobObjectInformation;
              *(_WORD *)JobObjectInformation = v123;
              *((_WORD *)JobObjectInformation + 1) = v92;
              *((_QWORD *)JobObjectInformation + 1) = (char *)JobObjectInformation + 16;
              memmove((char *)JobObjectInformation + 16, P, v92);
              v17 = ReturnLength;
              if ( ReturnLength )
                *ReturnLength = v9;
            }
            ExFreePoolWithTag(P, 0);
            goto LABEL_39;
          }
          goto LABEL_37;
        }
      }
    }
    else
    {
      if ( JobObjectInformationClass != JobObjectSiloBasicInformation )
      {
        switch ( JobObjectInformationClass )
        {
          case JobObjectBackgroundInformation:
            v97 = (*((_DWORD *)v14 + 330) & 0x400) != 0;
            v15 = &v97;
            goto LABEL_36;
          case JobObjectInterferenceInformation:
            v18 = JobObjectInformation;
            JobIoAttribution = PspQueryJobHierarchyInterferenceCount(v14);
            if ( JobIoAttribution < 0 )
            {
              v81 = 0;
            }
            else
            {
              v93 = 1;
              v81 = 8;
            }
            v103 = v81;
            goto LABEL_61;
          case JobObjectMemoryUsageInformation:
            *(_OWORD *)&v141[24] = 0LL;
            PspLockJobMemoryLimitsShared(v14, CurrentThread);
            *(_QWORD *)&v141[8] = *((_QWORD *)v14 + 76) << 12;
            *(_QWORD *)v141 = *((_QWORD *)v14 + 122) << 12;
            *(_QWORD *)&v141[16] = *((_QWORD *)v14 + 167) << 12;
            v14 = (char *)Object;
            PspUnlockJobMemoryLimitsShared(Object, v102);
            v15 = v141;
            goto LABEL_36;
          case JobObjectSharedCommit:
            v120 = *((_QWORD *)v14 + 167);
            v15 = (bool *)&v120;
            JobIoAttribution = 0;
            v14 = (char *)Object;
            goto LABEL_37;
          case JobObjectContainerId:
            v142 = *(_OWORD *)(v14 + 1240);
            if ( v101 == 36 )
            {
              v143 = *(_OWORD *)(v14 + 1256);
              v144 = *((_DWORD *)v14 + 309);
            }
            v15 = (bool *)&v142;
            goto LABEL_36;
          case JobObjectIoRateControlInformation:
            JobIoAttribution = -1073741822;
            goto LABEL_37;
          case JobObjectNetRateControlInformation:
            PspLockJobShared(v14, CurrentThread);
            v79 = *((_QWORD *)v14 + 164);
            if ( v79 )
            {
              DWORD2(v131) = 1;
              v80 = *(_DWORD *)(v79 + 48);
              if ( (v80 & 1) != 0 )
              {
                v10 = 3;
                DWORD2(v131) = 3;
                *(_QWORD *)&v131 = *(_QWORD *)(v79 + 40);
              }
              if ( (v80 & 2) != 0 )
              {
                DWORD2(v131) = v10 | 4;
                BYTE12(v131) = *(_BYTE *)(v79 + 64);
              }
            }
            PspUnlockJob(v14, v102);
            v15 = (bool *)&v131;
            goto LABEL_36;
          case JobObjectNotificationLimitInformation2:
            goto LABEL_124;
          case JobObjectLimitViolationInformation2:
            goto LABEL_93;
        }
        goto LABEL_212;
      }
      if ( (*((_DWORD *)v14 + 330) & 0x40000000) != 0 )
      {
        LODWORD(v132) = *((_DWORD *)v14 + 309);
        ParentSilo = PsGetParentSilo(v14);
        if ( PsIsHostSilo(ParentSilo) )
          DWORD1(v132) = 0;
        else
          DWORD1(v132) = *(_DWORD *)(ParentSilo + 1236);
        DWORD2(v132) = *((_DWORD *)v14 + 306);
        BYTE12(v132) = PspIsSiloInServerSilo((__int64)v14);
        v15 = (bool *)&v132;
        goto LABEL_36;
      }
    }
    JobIoAttribution = -1073740535;
    goto LABEL_37;
  }
  if ( JobObjectInformationClass == JobObjectWakeInformation )
  {
    JobIoAttribution = PspAllocateAndQueryNotificationChannel(CurrentThread, v14, v149);
    v18 = JobObjectInformation;
    v17 = ReturnLength;
    if ( JobIoAttribution >= 0 )
    {
      v15 = v149;
      JobIoAttribution = 0;
    }
    goto LABEL_39;
  }
  if ( JobObjectInformationClass > JobObjectGroupInformation )
  {
    if ( JobObjectInformationClass != JobObjectNotificationLimitInformation )
    {
      if ( JobObjectInformationClass != JobObjectLimitViolationInformation )
      {
        if ( JobObjectInformationClass != JobObjectGroupInformationEx )
        {
          switch ( JobObjectInformationClass )
          {
            case JobObjectCpuRateControlInformation:
              PspLockJobShared(v14, CurrentThread);
              v58 = *((_QWORD *)v14 + 126);
              if ( v58 )
              {
                v59 = *(_DWORD *)(v58 + 40);
                if ( (v59 & 0x40) == 0 )
                {
                  HIDWORD(v118) = *(_DWORD *)(v58 + 44);
                  v69 = ((v59 & 4 | 2u) >> 1) | 4;
                  if ( (v59 & 1) == 0 )
                    v69 = (v59 & 4 | 2u) >> 1;
                  v70 = v69 | 8;
                  if ( (v59 & 2) == 0 )
                    v70 = v69;
                  v71 = v70 | 0x10;
                  if ( (v59 & 0x20) == 0 )
                    v71 = v70;
                  LODWORD(v118) = v71;
                }
              }
              PspUnlockJob(v14, v102);
              v15 = (bool *)&v118;
              goto LABEL_36;
            case JobObjectCompletionFilter:
              v112 = *((_DWORD *)v14 + 219);
              v15 = (bool *)&v112;
              goto LABEL_36;
            case JobObjectCompletionCounter:
              v119 = *((_QWORD *)v14 + 59);
              v15 = (bool *)&v119;
              goto LABEL_36;
            case JobObjectFreezeInformation:
              LODWORD(v130) = 7;
              WORD3(v130) = 0;
              PspLockJobShared(v14, CurrentThread);
              v68 = *((_DWORD *)v14 + 330);
              BYTE4(v130) = (v68 & 0x200) != 0;
              BYTE5(v130) = (v68 & 0x80000) != 0;
              *((_QWORD *)&v130 + 1) = *((_QWORD *)v14 + 119);
              PspUnlockJob(v14, v102);
              v15 = (bool *)&v130;
              goto LABEL_36;
          }
          goto LABEL_35;
        }
        if ( ReturnLength )
        {
          v72 = v101;
          if ( (v101 & 0xF) == 0 )
          {
            PspLockJobShared(v14, CurrentThread);
            if ( (*((_DWORD *)v14 + 64) & 0x10) != 0 )
              v73 = (__int16 *)(v14 + 264);
            else
              v73 = KeActiveProcessors;
            v150[5] = *(_OWORD *)v73;
            v150[6] = *((_OWORD *)v73 + 1);
            v150[7] = *((_OWORD *)v73 + 2);
            v150[8] = *((_OWORD *)v73 + 3);
            v150[9] = *((_OWORD *)v73 + 4);
            v150[10] = *((_OWORD *)v73 + 5);
            v150[11] = *((_OWORD *)v73 + 6);
            v150[12] = *((_OWORD *)v73 + 7);
            v150[13] = *((_OWORD *)v73 + 8);
            v150[14] = *((_OWORD *)v73 + 9);
            *(_QWORD *)&v150[15] = *((_QWORD *)v73 + 20);
            PspUnlockJob(v14, v102);
            v74 = LOWORD(v150[5]);
            memset(v152, 0, 16LL * LOWORD(v150[5]));
            if ( (_WORD)v74 )
            {
              v75 = v152;
              v76 = (_QWORD *)&v150[5] + 1;
              v77 = v100;
              do
              {
                *((_WORD *)v75 + 4) = v77;
                *(_QWORD *)v75 = *v76;
                ++v77;
                ++v76;
                v75 += 16;
              }
              while ( v77 < (unsigned __int16)v74 );
            }
            v78 = 16 * v74;
            v103 = v78;
            JobIoAttribution = v72 < 16 * v74 ? 0xC0000023 : 0;
            v9 = v72;
            if ( v72 >= v78 )
              v9 = v78;
            Size = v9;
            v93 = 1;
            v18 = JobObjectInformation;
            memmove(JobObjectInformation, v152, v9);
            v17 = ReturnLength;
            goto LABEL_39;
          }
        }
LABEL_188:
        JobIoAttribution = -1073741811;
        goto LABEL_37;
      }
LABEL_93:
      v129[9] = 0LL;
      *(_OWORD *)&v129[11] = 0LL;
      Size_4 = 0;
      Size_6 = 0;
      PspQueryJobHierarchyAccountingInformation(v14);
      v129[1] = Src[9];
      v129[3] = Src[10];
      v129[5] = Src[0];
      PspLockJobExclusive(v14, v102);
      v21 = *((_DWORD *)v14 + 330);
      if ( (v21 & 8) == 0 || (v21 & 0x4000) == 0 )
      {
        _InterlockedAnd((volatile signed __int32 *)v14 + 330, 0xFFFFFFFB);
        v14 = (char *)Object;
      }
      ExAcquirePushLockSharedEx((ULONG_PTR)(v14 + 1032), 0LL);
      v129[7] = *((_QWORD *)v14 + 122) << 12;
      PspUnlockJobMemoryLimitsShared(v14, 0LL);
      v22 = (_DWORD *)*((_QWORD *)v14 + 123);
      if ( v22 )
      {
        LODWORD(v129[0]) = *v22;
        HIDWORD(v129[0]) = *(_DWORD *)(*((_QWORD *)v14 + 123) + 4LL);
        v23 = (_QWORD *)*((_QWORD *)v14 + 123);
        v24 = v23[9];
        if ( !v24 )
          v24 = v23[1];
        v129[2] = v24;
        v25 = v23[10];
        if ( !v25 )
          v25 = v23[2];
        v129[4] = v25;
        v26 = v23[11];
        if ( !v26 )
          v26 = v23[3];
        v129[6] = v26;
        v27 = v23[12];
        if ( !v27 )
          v27 = v23[4];
        v129[10] = v27 << 12;
        v28 = v23[13];
        if ( !v28 )
          v28 = v23[5];
        v129[8] = v28 << 12;
        v29 = 0LL;
        do
        {
          v30 = (_DWORD *)PspLimitViolationRateControlToleranceLimitField(v129, v29);
          v34 = v32[16];
          if ( v34 )
            *v33 = 1;
          else
            v34 = *v32;
          *v30 = v34;
          v29 = (unsigned int)(v31 + 1);
          v35 = v33 + 1;
        }
        while ( (int)v29 < 3 );
      }
      else
      {
        v129[0] = 0LL;
        v129[2] = 0LL;
        v129[4] = 0LL;
        v129[6] = 0LL;
        v129[10] = 0LL;
        v129[8] = 0LL;
        v60 = 0LL;
        do
        {
          *(_DWORD *)PspLimitViolationRateControlToleranceLimitField(v129, v60) = 0;
          v60 = (unsigned int)(v61 + 1);
        }
        while ( (int)v60 < 3 );
      }
      v36 = 0;
      p_Size_4 = &Size_4;
      v38 = 60LL;
      v109 = 60LL;
      do
      {
        v39 = *((_QWORD *)v14 + 123);
        if ( v39 && (v40 = PspRateControlLimitFlag((unsigned int)v36, v39, v38, v35), (v40 & *v41) != 0) )
          v42 = *(_DWORD *)((char *)v41 + v38);
        else
          v42 = 1;
        v114 = v42;
        LOBYTE(v38) = *(_BYTE *)p_Size_4;
        PspQueryRateControlHistory((_DWORD)v14, v42, v38, (unsigned int)&v113, v36);
        if ( v36 )
        {
          if ( v36 == 1 )
            v43 = &v129[11];
          else
            v43 = &v129[9];
        }
        else
        {
          v43 = &v129[12];
        }
        *(_DWORD *)v43 = v113;
        ++v36;
        v38 = v109 + 4;
        v109 += 4LL;
        p_Size_4 = (__int16 *)((char *)p_Size_4 + 1);
      }
      while ( v36 < 3 );
      v44 = *((_QWORD *)v14 + 123);
      v45 = v102;
      if ( v44 )
      {
        *(_DWORD *)(v44 + 4) = 0;
        memset((void *)(*((_QWORD *)v14 + 123) + 72LL), 0, 0x40uLL);
      }
      PspUnlockJob(v14, v45);
      if ( v101 == 88 )
      {
        v147[1] = v129[1];
        v147[2] = v129[2];
        v147[3] = v129[3];
        v147[4] = v129[4];
        v147[5] = v129[5];
        v147[6] = v129[6];
        v147[7] = v129[7];
        v147[8] = v129[10];
        v147[9] = v129[8];
        v147[10] = v129[9];
        v147[0] = v129[0] & 0x27820400278204LL;
        v15 = (bool *)v147;
      }
      else if ( v101 == 80 )
      {
        v146[1] = v129[1];
        v146[2] = v129[2];
        v146[3] = v129[3];
        v146[4] = v129[4];
        v146[5] = v129[5];
        v146[6] = v129[6];
        v146[7] = v129[7];
        v146[8] = v129[8];
        v146[9] = v129[9];
        v146[0] = v129[0] & 0x7020400070204LL;
        v15 = (bool *)v146;
      }
      else
      {
        v15 = (bool *)v129;
      }
      JobIoAttribution = 0;
      if ( (PerfGlobalGroupMask & 0x80000) != 0 )
        EtwTraceJobSetQuery((_DWORD)v14, JobObjectInformationClass, (unsigned int)v129, (unsigned int)&v114, 0, 1830);
      goto LABEL_37;
    }
LABEL_124:
    PspLockJobShared(v14, CurrentThread);
    v46 = *((_QWORD *)v14 + 123);
    if ( v46 )
    {
      DWORD2(v133[2]) = *(_DWORD *)v46;
      v133[0] = *(_OWORD *)(v46 + 8);
      *(_QWORD *)&v133[1] = *(_QWORD *)(v46 + 24);
      *(_QWORD *)&v133[3] = *(_QWORD *)(v46 + 32) << 12;
      *((_QWORD *)&v133[1] + 1) = *(_QWORD *)(v46 + 40) << 12;
      v47 = 0LL;
      v48 = (_DWORD *)(v46 + 60);
      do
      {
        v49 = (_DWORD *)PspNotificationLimitRateControlToleranceField(v133, v47, v48);
        *v49 = *(_DWORD *)(v50 - 12);
        v51 = (_DWORD *)PspNotificationLimitRateControlToleranceIntervalField(v133);
        *v51 = *v52;
        v47 = (unsigned int)(v53 + 1);
        v48 = v52 + 1;
      }
      while ( (int)v47 < 3 );
    }
    PspUnlockJob(v14, v102);
    if ( v101 == 56 )
    {
      v137 = v133[0];
      *(_QWORD *)&v138 = *(_QWORD *)&v133[1];
      *((_QWORD *)&v138 + 1) = *(_QWORD *)&v133[3];
      v139 = *(_OWORD *)((char *)&v133[1] + 8);
      v140 = DWORD2(v133[2]) & 0x278204LL;
      v15 = (bool *)&v137;
    }
    else if ( v101 == 48 )
    {
      v134 = v133[0];
      v135 = v133[1];
      *(_QWORD *)&v136 = *(_QWORD *)&v133[2];
      *((_QWORD *)&v136 + 1) = DWORD2(v133[2]) & 0x70204LL;
      v15 = (bool *)&v134;
    }
    else
    {
      v15 = (bool *)v133;
    }
    goto LABEL_36;
  }
  if ( JobObjectInformationClass == JobObjectGroupInformation )
  {
    if ( ReturnLength )
    {
      v63 = v101;
      if ( (v101 & 1) == 0 )
      {
        PspLockJobShared(v14, CurrentThread);
        v64 = 0;
        v65 = *((_WORD *)v14 + 132);
        if ( v65 )
        {
          v66 = v14 + 272;
          v67 = v100;
          do
          {
            if ( *v66 )
              v153[v64++] = v67;
            ++v67;
            ++v66;
          }
          while ( v67 < v65 );
        }
        PspUnlockJob(v14, v102);
        v9 = 2 * v64;
        v103 = v9;
        v93 = 1;
        JobIoAttribution = v63 < v9 ? 0xC0000023 : 0;
        if ( v9 > v63 )
          v9 = Size;
        Size = v9;
        v18 = JobObjectInformation;
        memmove(JobObjectInformation, v153, v9);
        v17 = ReturnLength;
        goto LABEL_39;
      }
    }
    goto LABEL_188;
  }
  if ( JobObjectInformationClass != JobObjectBasicAccountingInformation )
  {
    switch ( JobObjectInformationClass )
    {
      case JobObjectBasicLimitInformation:
LABEL_78:
        PspLockJobShared(v14, CurrentThread);
        v148[3] = *((_QWORD *)v14 + 30);
        v148[4] = *((_QWORD *)v14 + 31);
        LODWORD(v148[5]) = *((_DWORD *)v14 + 65);
        LODWORD(v148[7]) = (unsigned __int8)v14[873];
        HIDWORD(v148[7]) = *((_DWORD *)v14 + 121);
        if ( KeIsSingleGroupAffinityEx((unsigned __int16 *)v14 + 132, &v100) )
          v148[6] = *(_QWORD *)&v14[8 * v100 + 272];
        else
          v148[6] = 0LL;
        v148[0] = *((_QWORD *)v14 + 28);
        v148[1] = *((_QWORD *)v14 + 29);
        LODWORD(v148[2]) = (PspGetJobLimitInformationValidFlags((unsigned int)JobObjectInformationClass, v101) | 0x7FFF) & *((_DWORD *)v14 + 64);
        if ( JobObjectInformationClass == JobObjectExtendedLimitInformation )
        {
          ExAcquirePushLockSharedEx((ULONG_PTR)(v14 + 1032), 0LL);
          v148[14] = *((_QWORD *)v14 + 72) << 12;
          v148[15] = *((_QWORD *)v14 + 73) << 12;
          v148[17] = *((_QWORD *)v14 + 76) << 12;
          v148[18] = *((_QWORD *)v14 + 74) << 12;
          PspUnlockJobMemoryLimitsShared(v14, 0LL);
          PspUnlockJob(v14, v102);
          v148[16] = *((_QWORD *)v14 + 75) << 12;
        }
        else
        {
          PspUnlockJob(v14, v102);
        }
        JobIoAttribution = 0;
        v15 = (bool *)v148;
        goto LABEL_37;
      case JobObjectBasicProcessIdList:
        v103 = 0;
        v18 = JobObjectInformation;
        JobIoAttribution = PspQueryJobHierarchyProcessIdList(v14);
        v93 = 1;
LABEL_61:
        v17 = ReturnLength;
        goto LABEL_39;
      case JobObjectBasicUIRestrictions:
        PspLockJobShared(v14, CurrentThread);
        v111 = *((_DWORD *)v14 + 112);
        PspUnlockJob(v14, v102);
        v15 = (bool *)&v111;
        goto LABEL_36;
      case JobObjectSecurityLimitInformation:
        v128 = 0LL;
        v93 = 1;
        *(_OWORD *)JobObjectInformation = 0LL;
        *((_OWORD *)JobObjectInformation + 1) = 0LL;
        *((_QWORD *)JobObjectInformation + 4) = v128;
        v17 = ReturnLength;
        goto LABEL_38;
      case JobObjectEndOfJobTimeInformation:
        v110 = *((_DWORD *)v14 + 113);
        v15 = (bool *)&v110;
        goto LABEL_36;
    }
    if ( JobObjectInformationClass != JobObjectBasicAndIoAccountingInformation )
    {
      if ( JobObjectInformationClass == JobObjectExtendedLimitInformation )
        goto LABEL_78;
      if ( JobObjectInformationClass == JobObjectJobSetInformation )
      {
        --CurrentThread->SpecialApcDisable;
        ExAcquirePushLockSharedEx((ULONG_PTR)&PspJobListLock, 0LL);
        PspUnlockJobListShared(v102);
        v15 = (bool *)&v117;
        goto LABEL_36;
      }
LABEL_212:
      JobIoAttribution = -1073741821;
      goto LABEL_37;
    }
  }
LABEL_35:
  PspQueryJobHierarchyAccountingInformation(v14);
  v15 = (bool *)Src;
LABEL_36:
  JobIoAttribution = 0;
LABEL_37:
  v17 = ReturnLength;
LABEL_38:
  v18 = JobObjectInformation;
LABEL_39:
  if ( v14 )
    ObfDereferenceObjectWithTag(v14, 0x79517350u);
  if ( JobIoAttribution >= 0 && !v93 )
    memmove(v18, v15, v9);
  if ( v17 )
    *v17 = v103;
  return JobIoAttribution;
}
