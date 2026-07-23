/*
 * XREFs of NtQueryInformationJobObject @ 0x140663E00
 * Callers:
 *     <none>
 * Callees:
 *     PspGetJobSilo @ 0x140200084 (PspGetJobSilo.c)
 *     PsGetJobServerSilo @ 0x140201810 (PsGetJobServerSilo.c)
 *     ObfReferenceObjectWithTag @ 0x1402089E0 (ObfReferenceObjectWithTag.c)
 *     PsIsHostSilo @ 0x14020DC00 (PsIsHostSilo.c)
 *     ExAcquirePushLockSharedEx @ 0x140220C00 (ExAcquirePushLockSharedEx.c)
 *     ObfDereferenceObjectWithTag @ 0x140221210 (ObfDereferenceObjectWithTag.c)
 *     PsGetServerSiloServiceSessionId @ 0x14023F2F0 (PsGetServerSiloServiceSessionId.c)
 *     PsGetServerSiloGlobals @ 0x140245E34 (PsGetServerSiloGlobals.c)
 *     HalSystemVectorDispatchEntry @ 0x140245E60 (HalSystemVectorDispatchEntry.c)
 *     KeIsSingleGroupAffinityEx @ 0x140263D00 (KeIsSingleGroupAffinityEx.c)
 *     MmQueryApiSetSchema @ 0x1403714E0 (MmQueryApiSetSchema.c)
 *     __security_check_cookie @ 0x1403CFAF0 (__security_check_cookie.c)
 *     memmove @ 0x140411040 (memmove.c)
 *     memset @ 0x140411300 (memset.c)
 *     PspIsSiloInServerSilo @ 0x14057F5B0 (PspIsSiloInServerSilo.c)
 *     ObpReferenceObjectByHandleWithTag @ 0x140611900 (ObpReferenceObjectByHandleWithTag.c)
 *     PspGetJobLimitInformationValidFlags @ 0x140661600 (PspGetJobLimitInformationValidFlags.c)
 *     PspQueryJobHierarchyProcessIdList @ 0x140661680 (PspQueryJobHierarchyProcessIdList.c)
 *     PspNotificationLimitRateControlToleranceIntervalField @ 0x1406631D4 (PspNotificationLimitRateControlToleranceIntervalField.c)
 *     PspNotificationLimitRateControlToleranceField @ 0x1406631FC (PspNotificationLimitRateControlToleranceField.c)
 *     PspLimitViolationRateControlToleranceLimitField @ 0x140663224 (PspLimitViolationRateControlToleranceLimitField.c)
 *     PspQueryRateControlHistory @ 0x14066335C (PspQueryRateControlHistory.c)
 *     PspRateControlLimitFlag @ 0x140663BDC (PspRateControlLimitFlag.c)
 *     PspQueryJobHierarchyAccountingInformation @ 0x140664CEC (PspQueryJobHierarchyAccountingInformation.c)
 *     PspUnlockJob @ 0x140665CB0 (PspUnlockJob.c)
 *     PspLockJobExclusive @ 0x140665CF4 (PspLockJobExclusive.c)
 *     PspLockJobShared @ 0x140665D1C (PspLockJobShared.c)
 *     PspUnlockJobMemoryLimitsShared @ 0x140665EBC (PspUnlockJobMemoryLimitsShared.c)
 *     PspLockJobMemoryLimitsShared @ 0x140665F6C (PspLockJobMemoryLimitsShared.c)
 *     PspQueryJobIoAttribution @ 0x14069F7A4 (PspQueryJobIoAttribution.c)
 *     PspAllocateAndQueryNotificationChannel @ 0x1407112A0 (PspAllocateAndQueryNotificationChannel.c)
 *     ExRaiseDatatypeMisalignment @ 0x140777E40 (ExRaiseDatatypeMisalignment.c)
 *     PsGetParentSilo @ 0x140908340 (PsGetParentSilo.c)
 *     PspQueryJobHierarchyInterferenceCount @ 0x14090B8A0 (PspQueryJobHierarchyInterferenceCount.c)
 *     PspUnlockJobListShared @ 0x14090C518 (PspUnlockJobListShared.c)
 *     EtwTraceJobSetQuery @ 0x14093890C (EtwTraceJobSetQuery.c)
 *     ObGetSiloRootDirectoryPath @ 0x1409830EC (ObGetSiloRootDirectoryPath.c)
 *     ExFreePoolWithTag @ 0x1409B70B0 (ExFreePoolWithTag.c)
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
  char PreviousMode; // al
  __int64 v13; // rcx
  NTSTATUS result; // eax
  char *v15; // rbx
  bool *v16; // r12
  NTSTATUS JobIoAttribution; // esi
  PULONG v18; // r15
  PVOID v19; // r13
  bool v20; // zf
  char *v21; // rcx
  int v22; // eax
  _DWORD *v23; // rax
  _QWORD *v24; // rcx
  __int64 v25; // rax
  __int64 v26; // rax
  __int64 v27; // rax
  __int64 v28; // rax
  __int64 v29; // rax
  int i; // edx
  _DWORD *v31; // rax
  int v32; // edx
  int *v33; // r8
  _BYTE *v34; // r9
  int v35; // ecx
  int v36; // r12d
  char *p_Size_4; // rsi
  int v38; // eax
  _DWORD *v39; // rdx
  __int64 v40; // r8
  int v41; // edx
  _QWORD *v42; // rcx
  __int64 v43; // rax
  struct _KTHREAD *v44; // rsi
  __int64 v45; // rcx
  int k; // edx
  _DWORD *v47; // rax
  __int64 v48; // r8
  int v49; // edx
  _DWORD *v50; // rax
  _DWORD *v51; // r8
  int v52; // edx
  __int32 v53; // r13d
  __int32 v54; // r13d
  __int32 v55; // r13d
  int v56; // r13d
  __int64 v57; // rax
  int v58; // r8d
  int j; // edx
  int v60; // edx
  __int64 v61; // rsi
  ULONG v62; // r13d
  int v63; // r14d
  unsigned __int16 v64; // r8
  _QWORD *v65; // rdx
  unsigned __int16 v66; // cx
  int v67; // ecx
  unsigned int v68; // edx
  int v69; // ecx
  int v70; // eax
  unsigned int v71; // r13d
  __int16 *v72; // rax
  int v73; // esi
  _BYTE *v74; // rcx
  _QWORD *v75; // r8
  unsigned __int16 v76; // dx
  unsigned int v77; // eax
  __int64 v78; // rcx
  int v79; // edx
  int v80; // eax
  __int64 ParentSilo; // rsi
  int v82; // r13d
  int v83; // r13d
  int v84; // r13d
  char v85; // al
  __int64 v86; // rax
  const void **ServerSiloGlobals; // rax
  size_t v88; // r8
  __int64 v89; // rcx
  __int64 JobSilo; // rax
  unsigned __int16 v91; // dx
  char v92; // [rsp+40h] [rbp-8D8h]
  char v94; // [rsp+58h] [rbp-8C0h] BYREF
  int v95; // [rsp+5Ch] [rbp-8BCh]
  bool v96; // [rsp+60h] [rbp-8B8h] BYREF
  bool v97; // [rsp+61h] [rbp-8B7h] BYREF
  char v98; // [rsp+62h] [rbp-8B6h]
  unsigned __int16 v99; // [rsp+64h] [rbp-8B4h] BYREF
  ULONG v100; // [rsp+68h] [rbp-8B0h]
  struct _KTHREAD *v101; // [rsp+70h] [rbp-8A8h]
  ULONG v102; // [rsp+78h] [rbp-8A0h] BYREF
  PVOID Object; // [rsp+80h] [rbp-898h] BYREF
  ULONG Size; // [rsp+88h] [rbp-890h]
  __int16 Size_4; // [rsp+8Ch] [rbp-88Ch] BYREF
  char Size_6; // [rsp+8Eh] [rbp-88Ah]
  ULONG_PTR BugCheckParameter1; // [rsp+90h] [rbp-888h]
  __int64 v108; // [rsp+98h] [rbp-880h] BYREF
  int v109; // [rsp+A0h] [rbp-878h] BYREF
  int v110; // [rsp+A4h] [rbp-874h] BYREF
  int v111; // [rsp+A8h] [rbp-870h] BYREF
  int v112; // [rsp+ACh] [rbp-86Ch] BYREF
  int v113; // [rsp+B0h] [rbp-868h] BYREF
  PVOID v114; // [rsp+B8h] [rbp-860h]
  PULONG v115; // [rsp+C0h] [rbp-858h]
  int v116; // [rsp+C8h] [rbp-850h] BYREF
  __int64 v117; // [rsp+D0h] [rbp-848h] BYREF
  __int64 v118; // [rsp+D8h] [rbp-840h] BYREF
  __int64 v119; // [rsp+E0h] [rbp-838h] BYREF
  __int64 v120; // [rsp+E8h] [rbp-830h] BYREF
  _QWORD *v121; // [rsp+F0h] [rbp-828h] BYREF
  __int64 v122; // [rsp+F8h] [rbp-820h] BYREF
  PVOID P; // [rsp+100h] [rbp-818h]
  __int128 v124; // [rsp+108h] [rbp-810h] BYREF
  __int128 v125; // [rsp+118h] [rbp-800h]
  __int64 v126[5]; // [rsp+128h] [rbp-7F0h] BYREF
  __int64 v127; // [rsp+150h] [rbp-7C8h]
  _QWORD v128[14]; // [rsp+160h] [rbp-7B8h] BYREF
  __int128 v129; // [rsp+1D0h] [rbp-748h] BYREF
  __int128 v130; // [rsp+1E0h] [rbp-738h] BYREF
  __int128 v131; // [rsp+1F0h] [rbp-728h] BYREF
  _OWORD v132[5]; // [rsp+200h] [rbp-718h] BYREF
  __int128 v133; // [rsp+250h] [rbp-6C8h] BYREF
  __int128 v134; // [rsp+260h] [rbp-6B8h]
  __int128 v135; // [rsp+270h] [rbp-6A8h]
  __int128 v136; // [rsp+280h] [rbp-698h] BYREF
  __int128 v137; // [rsp+290h] [rbp-688h]
  __int128 v138; // [rsp+2A0h] [rbp-678h]
  __int64 v139; // [rsp+2B0h] [rbp-668h]
  _BYTE v140[40]; // [rsp+2B8h] [rbp-660h] BYREF
  __int128 v141; // [rsp+2E0h] [rbp-638h] BYREF
  __int128 v142; // [rsp+2F0h] [rbp-628h]
  int v143; // [rsp+300h] [rbp-618h]
  __int128 v144; // [rsp+308h] [rbp-610h] BYREF
  _QWORD v145[10]; // [rsp+320h] [rbp-5F8h] BYREF
  _QWORD v146[12]; // [rsp+370h] [rbp-5A8h] BYREF
  _QWORD v147[20]; // [rsp+3D0h] [rbp-548h] BYREF
  _BYTE v148[64]; // [rsp+470h] [rbp-4A8h] BYREF
  _OWORD v149[16]; // [rsp+4B0h] [rbp-468h] BYREF
  _QWORD Src[56]; // [rsp+5B0h] [rbp-368h] BYREF
  _BYTE v151[320]; // [rsp+770h] [rbp-1A8h] BYREF
  _WORD v152[20]; // [rsp+8B0h] [rbp-68h] BYREF

  v5 = JobObjectInformationLength;
  v100 = JobObjectInformationLength;
  BugCheckParameter1 = (ULONG_PTR)JobHandle;
  v114 = JobObjectInformation;
  v115 = ReturnLength;
  memset(Src, 0, sizeof(Src));
  memset(&v149[5], 0, 0xA8uLL);
  v96 = 0;
  v110 = 0;
  v118 = 0LL;
  v111 = 0;
  v141 = 0LL;
  v142 = 0LL;
  v143 = 0;
  v144 = 0LL;
  v117 = 0LL;
  v109 = 0;
  v120 = 0LL;
  memset(v147, 0, 0x98uLL);
  v129 = 0LL;
  v99 = 0;
  memset(v149, 0, 0x48uLL);
  Object = 0LL;
  v116 = 0;
  memset(v128, 0, 0x68uLL);
  memset(v145, 0, sizeof(v145));
  memset(v146, 0, 0x58uLL);
  memset(v140, 0, sizeof(v140));
  v130 = 0LL;
  memset(v132, 0, 0x48uLL);
  v133 = 0LL;
  v134 = 0LL;
  v135 = 0LL;
  v136 = 0LL;
  v137 = 0LL;
  v138 = 0LL;
  v139 = 0LL;
  v112 = 0;
  v122 = 0LL;
  v119 = 0LL;
  memset(v148, 0, sizeof(v148));
  v131 = 0LL;
  v124 = 0LL;
  v125 = 0LL;
  v108 = 0LL;
  v94 = 0;
  v97 = 0;
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
      v20 = (_DWORD)v5 == 56;
      goto LABEL_88;
    case JobObjectLimitViolationInformation:
      if ( (_DWORD)v5 == 80 )
        goto LABEL_7;
      v20 = (_DWORD)v5 == 88;
LABEL_88:
      if ( v20 )
        goto LABEL_7;
      return -1073741820;
    case JobObjectExtendedAccountingInformation:
      if ( (_DWORD)v5 == 432 )
        goto LABEL_7;
      v20 = (_DWORD)v5 == 448;
      goto LABEL_88;
    case JobObjectWakeInformation:
      if ( (_DWORD)v5 == 40 )
        goto LABEL_7;
      v20 = (_DWORD)v5 == 64;
      goto LABEL_88;
    case JobObjectMemoryUsageInformation:
      if ( (_DWORD)v5 == 16 )
        goto LABEL_7;
      v20 = (_DWORD)v5 == 40;
      goto LABEL_88;
    case JobObjectContainerId:
      if ( (_DWORD)v5 == 16 )
        goto LABEL_7;
      v20 = (_DWORD)v5 == 36;
      goto LABEL_88;
  }
  if ( JobObjectInformationClass != JobObjectMemoryPartitionInformation )
  {
    v9 = PspJobInfoLengths[v8];
    v95 = v9;
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
      v95 = v5;
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
  v95 = 1;
LABEL_9:
  Size = v9;
  CurrentThread = KeGetCurrentThread();
  v101 = CurrentThread;
  PreviousMode = CurrentThread->PreviousMode;
  v98 = PreviousMode;
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
      v13 = (__int64)ReturnLength;
      if ( (unsigned __int64)ReturnLength >= 0x7FFFFFFF0000LL )
        v13 = 0x7FFFFFFF0000LL;
      *(_DWORD *)v13 = *(_DWORD *)v13;
    }
    PreviousMode = v98;
  }
  if ( BugCheckParameter1 )
  {
    result = ObpReferenceObjectByHandleWithTag(
               BugCheckParameter1,
               4,
               (__int64)PsJobType,
               PreviousMode,
               0x79517350u,
               &Object,
               0LL,
               0LL);
    if ( result < 0 )
      return result;
    v15 = (char *)Object;
    goto LABEL_25;
  }
  v21 = (char *)CurrentThread->ApcState.Process[1].Affinity.Bitmap[16];
  Object = v21;
  v15 = v21;
  if ( v21 )
  {
    ObfReferenceObjectWithTag(v21, 0x79517350u);
LABEL_25:
    CurrentThread = v101;
    goto LABEL_26;
  }
  if ( ((JobObjectInformationClass - 31) & 0xFFFFFFF7) != 0 )
    return -1073741790;
LABEL_26:
  v102 = v9;
  v92 = 0;
  v16 = 0LL;
  JobIoAttribution = 0;
  if ( JobObjectInformationClass > JobObjectWakeInformation )
  {
    if ( JobObjectInformationClass > JobObjectSiloBasicInformation )
    {
      v53 = JobObjectInformationClass - 37;
      if ( v53 )
      {
        v54 = v53 - 1;
        if ( v54 )
        {
          v55 = v54 - 1;
          if ( !v55 )
          {
            if ( v15 )
            {
              PsGetJobServerSilo((__int64)v15, &v108);
              v86 = v108;
            }
            else
            {
              v86 = HalSystemVectorDispatchEntry();
            }
            ServerSiloGlobals = (const void **)PsGetServerSiloGlobals(v86);
            v19 = JobObjectInformation;
            memmove(JobObjectInformation, ServerSiloGlobals[141], v88);
            v92 = 1;
            v18 = ReturnLength;
            goto LABEL_40;
          }
          v56 = v55 - 3;
          if ( !v56 )
          {
            PspLockJobShared(v15, CurrentThread);
            JobIoAttribution = PspQueryJobIoAttribution(v15, v149);
            PspUnlockJob(v15, v101);
            v16 = (bool *)v149;
            goto LABEL_38;
          }
          v82 = v56 - 1;
          if ( !v82 )
          {
            JobIoAttribution = 0;
            v85 = v94;
            if ( (unsigned __int64)(*((_QWORD *)v15 + 195) - 1LL) <= 0xFFFFFFFFFFFFFFFDuLL )
              v85 = 1;
            v94 = v85;
            v16 = (bool *)&v94;
            goto LABEL_38;
          }
          v83 = v82 - 1;
          if ( !v83 )
          {
            v144 = *(_OWORD *)(v15 + 1256);
            v16 = (bool *)&v144;
            goto LABEL_37;
          }
          v84 = v83 - 2;
          if ( !v84 )
          {
            PspLockJobShared(v15, CurrentThread);
            v120 = *((_QWORD *)v15 + 197);
            PspUnlockJob(v15, v101);
            v16 = (bool *)&v120;
            goto LABEL_37;
          }
          if ( v84 == 1 )
          {
            v97 = (*((_DWORD *)v15 + 331) & 2) != 0;
            v16 = &v97;
            goto LABEL_37;
          }
          goto LABEL_213;
        }
        PsGetJobServerSilo((__int64)v15, &v108);
        v61 = v108;
        if ( !PsIsHostSilo(v108) )
        {
          v89 = *(_QWORD *)(v61 + 1272);
          *(_QWORD *)((char *)&v124 + 4) = *(_QWORD *)(v89 + 1112);
          BYTE12(v124) = *(_BYTE *)(v89 + 1176);
          if ( v98 )
          {
            v125 = 0LL;
          }
          else
          {
            v121 = 0LL;
            MmQueryApiSetSchema(&v121, v126);
            *(_QWORD *)&v125 = *((_QWORD *)PsGetServerSiloGlobals(v61) + 130);
            *((_QWORD *)&v125 + 1) = *v121;
          }
          LODWORD(v124) = PsGetServerSiloServiceSessionId(v61);
          JobIoAttribution = 0;
          v16 = (bool *)&v124;
          goto LABEL_38;
        }
      }
      else
      {
        JobSilo = PspGetJobSilo((__int64)v15);
        if ( JobSilo )
        {
          P = 0LL;
          JobIoAttribution = ObGetSiloRootDirectoryPath(JobSilo, &v122);
          if ( JobIoAttribution >= 0 )
          {
            v92 = 1;
            v91 = v122;
            v9 = (unsigned __int16)v122 + 16;
            v95 = v9;
            if ( v9 > v100 )
            {
              JobIoAttribution = -1073741789;
              v19 = JobObjectInformation;
              v18 = ReturnLength;
            }
            else
            {
              v19 = JobObjectInformation;
              *(_WORD *)JobObjectInformation = v122;
              *((_WORD *)JobObjectInformation + 1) = v91;
              *((_QWORD *)JobObjectInformation + 1) = (char *)JobObjectInformation + 16;
              memmove((char *)JobObjectInformation + 16, P, v91);
              v18 = ReturnLength;
              if ( ReturnLength )
                *ReturnLength = v9;
            }
            ExFreePoolWithTag(P, 0);
            goto LABEL_40;
          }
          goto LABEL_38;
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
            v96 = (*((_DWORD *)v15 + 330) & 0x400) != 0;
            v16 = &v96;
            goto LABEL_37;
          case JobObjectInterferenceInformation:
            v19 = JobObjectInformation;
            JobIoAttribution = PspQueryJobHierarchyInterferenceCount(v15);
            if ( JobIoAttribution < 0 )
            {
              v80 = 0;
            }
            else
            {
              v92 = 1;
              v80 = 8;
            }
            v102 = v80;
            goto LABEL_62;
          case JobObjectMemoryUsageInformation:
            *(_OWORD *)&v140[24] = 0LL;
            PspLockJobMemoryLimitsShared(v15, CurrentThread);
            *(_QWORD *)&v140[8] = *((_QWORD *)v15 + 76) << 12;
            *(_QWORD *)v140 = *((_QWORD *)v15 + 122) << 12;
            *(_QWORD *)&v140[16] = *((_QWORD *)v15 + 167) << 12;
            v15 = (char *)Object;
            PspUnlockJobMemoryLimitsShared(Object, v101);
            v16 = v140;
            goto LABEL_37;
          case JobObjectSharedCommit:
            v119 = *((_QWORD *)v15 + 167);
            v16 = (bool *)&v119;
            JobIoAttribution = 0;
            v15 = (char *)Object;
            goto LABEL_38;
          case JobObjectContainerId:
            v141 = *(_OWORD *)(v15 + 1240);
            if ( v100 == 36 )
            {
              v142 = *(_OWORD *)(v15 + 1256);
              v143 = *((_DWORD *)v15 + 309);
            }
            v16 = (bool *)&v141;
            goto LABEL_37;
          case JobObjectIoRateControlInformation:
            JobIoAttribution = -1073741822;
            goto LABEL_38;
          case JobObjectNetRateControlInformation:
            PspLockJobShared(v15, CurrentThread);
            v78 = *((_QWORD *)v15 + 164);
            if ( v78 )
            {
              DWORD2(v130) = 1;
              v79 = *(_DWORD *)(v78 + 48);
              if ( (v79 & 1) != 0 )
              {
                v10 = 3;
                DWORD2(v130) = 3;
                *(_QWORD *)&v130 = *(_QWORD *)(v78 + 40);
              }
              if ( (v79 & 2) != 0 )
              {
                DWORD2(v130) = v10 | 4;
                BYTE12(v130) = *(_BYTE *)(v78 + 64);
              }
            }
            PspUnlockJob(v15, v101);
            v16 = (bool *)&v130;
            goto LABEL_37;
          case JobObjectNotificationLimitInformation2:
            goto LABEL_125;
          case JobObjectLimitViolationInformation2:
            goto LABEL_94;
        }
        goto LABEL_213;
      }
      if ( (*((_DWORD *)v15 + 330) & 0x40000000) != 0 )
      {
        LODWORD(v131) = *((_DWORD *)v15 + 309);
        ParentSilo = PsGetParentSilo(v15);
        if ( PsIsHostSilo(ParentSilo) )
          DWORD1(v131) = 0;
        else
          DWORD1(v131) = *(_DWORD *)(ParentSilo + 1236);
        DWORD2(v131) = *((_DWORD *)v15 + 306);
        BYTE12(v131) = PspIsSiloInServerSilo((__int64)v15);
        v16 = (bool *)&v131;
        goto LABEL_37;
      }
    }
    JobIoAttribution = -1073740535;
    goto LABEL_38;
  }
  if ( JobObjectInformationClass == JobObjectWakeInformation )
  {
    JobIoAttribution = PspAllocateAndQueryNotificationChannel(CurrentThread, v15, v148);
    v19 = JobObjectInformation;
    v18 = ReturnLength;
    if ( JobIoAttribution >= 0 )
    {
      v16 = v148;
      JobIoAttribution = 0;
    }
    goto LABEL_40;
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
              PspLockJobShared(v15, CurrentThread);
              v57 = *((_QWORD *)v15 + 126);
              if ( v57 )
              {
                v58 = *(_DWORD *)(v57 + 40);
                if ( (v58 & 0x40) == 0 )
                {
                  HIDWORD(v117) = *(_DWORD *)(v57 + 44);
                  v68 = ((v58 & 4 | 2u) >> 1) | 4;
                  if ( (v58 & 1) == 0 )
                    v68 = (v58 & 4 | 2u) >> 1;
                  v69 = v68 | 8;
                  if ( (v58 & 2) == 0 )
                    v69 = v68;
                  v70 = v69 | 0x10;
                  if ( (v58 & 0x20) == 0 )
                    v70 = v69;
                  LODWORD(v117) = v70;
                }
              }
              PspUnlockJob(v15, v101);
              v16 = (bool *)&v117;
              goto LABEL_37;
            case JobObjectCompletionFilter:
              v111 = *((_DWORD *)v15 + 219);
              v16 = (bool *)&v111;
              goto LABEL_37;
            case JobObjectCompletionCounter:
              v118 = *((_QWORD *)v15 + 59);
              v16 = (bool *)&v118;
              goto LABEL_37;
            case JobObjectFreezeInformation:
              LODWORD(v129) = 7;
              WORD3(v129) = 0;
              PspLockJobShared(v15, CurrentThread);
              v67 = *((_DWORD *)v15 + 330);
              BYTE4(v129) = (v67 & 0x200) != 0;
              BYTE5(v129) = (v67 & 0x80000) != 0;
              *((_QWORD *)&v129 + 1) = *((_QWORD *)v15 + 119);
              PspUnlockJob(v15, v101);
              v16 = (bool *)&v129;
              goto LABEL_37;
          }
          goto LABEL_36;
        }
        if ( ReturnLength )
        {
          v71 = v100;
          if ( (v100 & 0xF) == 0 )
          {
            PspLockJobShared(v15, CurrentThread);
            if ( (*((_DWORD *)v15 + 64) & 0x10) != 0 )
              v72 = (__int16 *)(v15 + 264);
            else
              v72 = KeActiveProcessors;
            v149[5] = *(_OWORD *)v72;
            v149[6] = *((_OWORD *)v72 + 1);
            v149[7] = *((_OWORD *)v72 + 2);
            v149[8] = *((_OWORD *)v72 + 3);
            v149[9] = *((_OWORD *)v72 + 4);
            v149[10] = *((_OWORD *)v72 + 5);
            v149[11] = *((_OWORD *)v72 + 6);
            v149[12] = *((_OWORD *)v72 + 7);
            v149[13] = *((_OWORD *)v72 + 8);
            v149[14] = *((_OWORD *)v72 + 9);
            *(_QWORD *)&v149[15] = *((_QWORD *)v72 + 20);
            PspUnlockJob(v15, v101);
            v73 = LOWORD(v149[5]);
            memset(v151, 0, 16LL * LOWORD(v149[5]));
            if ( (_WORD)v73 )
            {
              v74 = v151;
              v75 = (_QWORD *)&v149[5] + 1;
              v76 = v99;
              do
              {
                *((_WORD *)v74 + 4) = v76;
                *(_QWORD *)v74 = *v75;
                ++v76;
                ++v75;
                v74 += 16;
              }
              while ( v76 < (unsigned __int16)v73 );
            }
            v77 = 16 * v73;
            v102 = v77;
            JobIoAttribution = v71 < 16 * v73 ? 0xC0000023 : 0;
            v9 = v71;
            if ( v71 >= v77 )
              v9 = v77;
            Size = v9;
            v92 = 1;
            v19 = JobObjectInformation;
            memmove(JobObjectInformation, v151, v9);
            v18 = ReturnLength;
            goto LABEL_40;
          }
        }
LABEL_189:
        JobIoAttribution = -1073741811;
        goto LABEL_38;
      }
LABEL_94:
      v128[9] = 0LL;
      *(_OWORD *)&v128[11] = 0LL;
      Size_4 = 0;
      Size_6 = 0;
      PspQueryJobHierarchyAccountingInformation(v15);
      v128[1] = Src[9];
      v128[3] = Src[10];
      v128[5] = Src[0];
      PspLockJobExclusive(v15, v101);
      v22 = *((_DWORD *)v15 + 330);
      if ( (v22 & 8) == 0 || (v22 & 0x4000) == 0 )
      {
        _InterlockedAnd((volatile signed __int32 *)v15 + 330, 0xFFFFFFFB);
        v15 = (char *)Object;
      }
      ExAcquirePushLockSharedEx((ULONG_PTR)(v15 + 1032), 0LL);
      v128[7] = *((_QWORD *)v15 + 122) << 12;
      PspUnlockJobMemoryLimitsShared(v15, 0LL);
      v23 = (_DWORD *)*((_QWORD *)v15 + 123);
      if ( v23 )
      {
        LODWORD(v128[0]) = *v23;
        HIDWORD(v128[0]) = *(_DWORD *)(*((_QWORD *)v15 + 123) + 4LL);
        v24 = (_QWORD *)*((_QWORD *)v15 + 123);
        v25 = v24[9];
        if ( !v25 )
          v25 = v24[1];
        v128[2] = v25;
        v26 = v24[10];
        if ( !v26 )
          v26 = v24[2];
        v128[4] = v26;
        v27 = v24[11];
        if ( !v27 )
          v27 = v24[3];
        v128[6] = v27;
        v28 = v24[12];
        if ( !v28 )
          v28 = v24[4];
        v128[10] = v28 << 12;
        v29 = v24[13];
        if ( !v29 )
          v29 = v24[5];
        v128[8] = v29 << 12;
        for ( i = 0; i < 3; i = v32 + 1 )
        {
          v31 = (_DWORD *)PspLimitViolationRateControlToleranceLimitField((__int64)v128, i);
          v35 = v33[16];
          if ( v35 )
            *v34 = 1;
          else
            v35 = *v33;
          *v31 = v35;
        }
      }
      else
      {
        v128[0] = 0LL;
        v128[2] = 0LL;
        v128[4] = 0LL;
        v128[6] = 0LL;
        v128[10] = 0LL;
        v128[8] = 0LL;
        for ( j = 0; j < 3; j = v60 + 1 )
          *(_DWORD *)PspLimitViolationRateControlToleranceLimitField((__int64)v128, j) = 0;
      }
      v36 = 0;
      p_Size_4 = (char *)&Size_4;
      v108 = 60LL;
      do
      {
        if ( *((_QWORD *)v15 + 123) && (v38 = PspRateControlLimitFlag(v36), (v38 & *v39) != 0) )
          v41 = *(_DWORD *)((char *)v39 + v40);
        else
          v41 = 1;
        v113 = v41;
        PspQueryRateControlHistory((__int64)v15, v41, *p_Size_4, &v112, v36);
        if ( v36 )
        {
          if ( v36 == 1 )
            v42 = &v128[11];
          else
            v42 = &v128[9];
        }
        else
        {
          v42 = &v128[12];
        }
        *(_DWORD *)v42 = v112;
        ++v36;
        v108 += 4LL;
        ++p_Size_4;
      }
      while ( v36 < 3 );
      v43 = *((_QWORD *)v15 + 123);
      v44 = v101;
      if ( v43 )
      {
        *(_DWORD *)(v43 + 4) = 0;
        memset((void *)(*((_QWORD *)v15 + 123) + 72LL), 0, 0x40uLL);
      }
      PspUnlockJob(v15, v44);
      if ( v100 == 88 )
      {
        v146[1] = v128[1];
        v146[2] = v128[2];
        v146[3] = v128[3];
        v146[4] = v128[4];
        v146[5] = v128[5];
        v146[6] = v128[6];
        v146[7] = v128[7];
        v146[8] = v128[10];
        v146[9] = v128[8];
        v146[10] = v128[9];
        v146[0] = v128[0] & 0x27820400278204LL;
        v16 = (bool *)v146;
      }
      else if ( v100 == 80 )
      {
        v145[1] = v128[1];
        v145[2] = v128[2];
        v145[3] = v128[3];
        v145[4] = v128[4];
        v145[5] = v128[5];
        v145[6] = v128[6];
        v145[7] = v128[7];
        v145[8] = v128[8];
        v145[9] = v128[9];
        v145[0] = v128[0] & 0x7020400070204LL;
        v16 = (bool *)v145;
      }
      else
      {
        v16 = (bool *)v128;
      }
      JobIoAttribution = 0;
      if ( (PerfGlobalGroupMask & 0x80000) != 0 )
        EtwTraceJobSetQuery((_DWORD)v15, JobObjectInformationClass, (unsigned int)v128, (unsigned int)&v113, 0, 1830);
      goto LABEL_38;
    }
LABEL_125:
    PspLockJobShared(v15, CurrentThread);
    v45 = *((_QWORD *)v15 + 123);
    if ( v45 )
    {
      DWORD2(v132[2]) = *(_DWORD *)v45;
      v132[0] = *(_OWORD *)(v45 + 8);
      *(_QWORD *)&v132[1] = *(_QWORD *)(v45 + 24);
      *(_QWORD *)&v132[3] = *(_QWORD *)(v45 + 32) << 12;
      *((_QWORD *)&v132[1] + 1) = *(_QWORD *)(v45 + 40) << 12;
      for ( k = 0; k < 3; k = v52 + 1 )
      {
        v47 = (_DWORD *)PspNotificationLimitRateControlToleranceField((__int64)v132, k);
        *v47 = *(_DWORD *)(v48 - 12);
        v50 = (_DWORD *)PspNotificationLimitRateControlToleranceIntervalField((__int64)v132, v49);
        *v50 = *v51;
      }
    }
    PspUnlockJob(v15, v101);
    if ( v100 == 56 )
    {
      v136 = v132[0];
      *(_QWORD *)&v137 = *(_QWORD *)&v132[1];
      *((_QWORD *)&v137 + 1) = *(_QWORD *)&v132[3];
      v138 = *(_OWORD *)((char *)&v132[1] + 8);
      v139 = DWORD2(v132[2]) & 0x278204LL;
      v16 = (bool *)&v136;
    }
    else if ( v100 == 48 )
    {
      v133 = v132[0];
      v134 = v132[1];
      *(_QWORD *)&v135 = *(_QWORD *)&v132[2];
      *((_QWORD *)&v135 + 1) = DWORD2(v132[2]) & 0x70204LL;
      v16 = (bool *)&v133;
    }
    else
    {
      v16 = (bool *)v132;
    }
    goto LABEL_37;
  }
  if ( JobObjectInformationClass == JobObjectGroupInformation )
  {
    if ( ReturnLength )
    {
      v62 = v100;
      if ( (v100 & 1) == 0 )
      {
        PspLockJobShared(v15, CurrentThread);
        v63 = 0;
        v64 = *((_WORD *)v15 + 132);
        if ( v64 )
        {
          v65 = v15 + 272;
          v66 = v99;
          do
          {
            if ( *v65 )
              v152[v63++] = v66;
            ++v66;
            ++v65;
          }
          while ( v66 < v64 );
        }
        PspUnlockJob(v15, v101);
        v9 = 2 * v63;
        v102 = v9;
        v92 = 1;
        JobIoAttribution = v62 < v9 ? 0xC0000023 : 0;
        if ( v9 > v62 )
          v9 = Size;
        Size = v9;
        v19 = JobObjectInformation;
        memmove(JobObjectInformation, v152, v9);
        v18 = ReturnLength;
        goto LABEL_40;
      }
    }
    goto LABEL_189;
  }
  if ( JobObjectInformationClass != JobObjectBasicAccountingInformation )
  {
    switch ( JobObjectInformationClass )
    {
      case JobObjectBasicLimitInformation:
LABEL_79:
        PspLockJobShared(v15, CurrentThread);
        v147[3] = *((_QWORD *)v15 + 30);
        v147[4] = *((_QWORD *)v15 + 31);
        LODWORD(v147[5]) = *((_DWORD *)v15 + 65);
        LODWORD(v147[7]) = (unsigned __int8)v15[873];
        HIDWORD(v147[7]) = *((_DWORD *)v15 + 121);
        if ( KeIsSingleGroupAffinityEx((unsigned __int16 *)v15 + 132, &v99) )
          v147[6] = *(_QWORD *)&v15[8 * v99 + 272];
        else
          v147[6] = 0LL;
        v147[0] = *((_QWORD *)v15 + 28);
        v147[1] = *((_QWORD *)v15 + 29);
        LODWORD(v147[2]) = (PspGetJobLimitInformationValidFlags(JobObjectInformationClass, v100) | 0x7FFF) & *((_DWORD *)v15 + 64);
        if ( JobObjectInformationClass == JobObjectExtendedLimitInformation )
        {
          ExAcquirePushLockSharedEx((ULONG_PTR)(v15 + 1032), 0LL);
          v147[14] = *((_QWORD *)v15 + 72) << 12;
          v147[15] = *((_QWORD *)v15 + 73) << 12;
          v147[17] = *((_QWORD *)v15 + 76) << 12;
          v147[18] = *((_QWORD *)v15 + 74) << 12;
          PspUnlockJobMemoryLimitsShared(v15, 0LL);
          PspUnlockJob(v15, v101);
          v147[16] = *((_QWORD *)v15 + 75) << 12;
        }
        else
        {
          PspUnlockJob(v15, v101);
        }
        JobIoAttribution = 0;
        v16 = (bool *)v147;
        goto LABEL_38;
      case JobObjectBasicProcessIdList:
        v102 = 0;
        v19 = JobObjectInformation;
        JobIoAttribution = PspQueryJobHierarchyProcessIdList(v15, JobObjectInformation, v100, &v102);
        v92 = 1;
LABEL_62:
        v18 = ReturnLength;
        goto LABEL_40;
      case JobObjectBasicUIRestrictions:
        PspLockJobShared(v15, CurrentThread);
        v110 = *((_DWORD *)v15 + 112);
        PspUnlockJob(v15, v101);
        v16 = (bool *)&v110;
        goto LABEL_37;
      case JobObjectSecurityLimitInformation:
        v127 = 0LL;
        v92 = 1;
        *(_OWORD *)JobObjectInformation = 0LL;
        *((_OWORD *)JobObjectInformation + 1) = 0LL;
        *((_QWORD *)JobObjectInformation + 4) = v127;
        v18 = ReturnLength;
        goto LABEL_39;
      case JobObjectEndOfJobTimeInformation:
        v109 = *((_DWORD *)v15 + 113);
        v16 = (bool *)&v109;
        goto LABEL_37;
    }
    if ( JobObjectInformationClass != JobObjectBasicAndIoAccountingInformation )
    {
      if ( JobObjectInformationClass == JobObjectExtendedLimitInformation )
        goto LABEL_79;
      if ( JobObjectInformationClass == JobObjectJobSetInformation )
      {
        --CurrentThread->SpecialApcDisable;
        ExAcquirePushLockSharedEx((ULONG_PTR)&PspJobListLock, 0LL);
        PspUnlockJobListShared(v101);
        v16 = (bool *)&v116;
        goto LABEL_37;
      }
LABEL_213:
      JobIoAttribution = -1073741821;
      goto LABEL_38;
    }
  }
LABEL_36:
  PspQueryJobHierarchyAccountingInformation(v15);
  v16 = (bool *)Src;
LABEL_37:
  JobIoAttribution = 0;
LABEL_38:
  v18 = ReturnLength;
LABEL_39:
  v19 = JobObjectInformation;
LABEL_40:
  if ( v15 )
    ObfDereferenceObjectWithTag(v15, 0x79517350u);
  if ( JobIoAttribution >= 0 && !v92 )
    memmove(v19, v16, v9);
  if ( v18 )
    *v18 = v102;
  return JobIoAttribution;
}
