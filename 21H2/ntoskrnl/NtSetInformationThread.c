/*
 * XREFs of NtSetInformationThread @ 0x1406FCE80
 * Callers:
 *     <none>
 * Callees:
 *     IoThreadToProcess @ 0x140205700 (IoThreadToProcess.c)
 *     PsImpersonateContainerOfThread @ 0x14021BC90 (PsImpersonateContainerOfThread.c)
 *     PspRevertContainerImpersonation @ 0x14021FAE0 (PspRevertContainerImpersonation.c)
 *     KeSetActualBasePriorityThread @ 0x1402305B0 (KeSetActualBasePriorityThread.c)
 *     PsGetServerSiloGlobals @ 0x140252E18 (PsGetServerSiloGlobals.c)
 *     KeSetPriorityThread @ 0x140257AE0 (KeSetPriorityThread.c)
 *     KeSetBasePriorityThread @ 0x140258E60 (KeSetBasePriorityThread.c)
 *     PsGetProcessServerSilo @ 0x14025CA80 (PsGetProcessServerSilo.c)
 *     PsAttachSiloToCurrentThread @ 0x140264030 (PsAttachSiloToCurrentThread.c)
 *     ExReleaseRundownProtection_0 @ 0x14027C4F0 (ExReleaseRundownProtection_0.c)
 *     ExAcquireRundownProtection_0 @ 0x14027C9B0 (ExAcquireRundownProtection_0.c)
 *     KeSetThreadChargeOnlySchedulingGroup @ 0x1402A7120 (KeSetThreadChargeOnlySchedulingGroup.c)
 *     PspUnlockThreadSecurityExclusive @ 0x1402BD338 (PspUnlockThreadSecurityExclusive.c)
 *     MiCreateSystemWsles @ 0x1402C0BD0 (MiCreateSystemWsles.c)
 *     PspLockThreadSecurityExclusive @ 0x1402C0C04 (PspLockThreadSecurityExclusive.c)
 *     HalPutDmaAdapter @ 0x1402C1740 (HalPutDmaAdapter.c)
 *     MmGetDefaultPagePriority @ 0x1402D47AC (MmGetDefaultPagePriority.c)
 *     KeSetLegacyAffinityThread @ 0x1402ECAF0 (KeSetLegacyAffinityThread.c)
 *     PsSetIoPriorityThread @ 0x1402F72F0 (PsSetIoPriorityThread.c)
 *     PsSetPagePriorityThread @ 0x1402F75E4 (PsSetPagePriorityThread.c)
 *     ObfDereferenceObjectWithTag @ 0x14034B140 (ObfDereferenceObjectWithTag.c)
 *     ExReleaseResourceLite @ 0x14034B3F0 (ExReleaseResourceLite.c)
 *     ExAcquireResourceSharedLite @ 0x14034BF60 (ExAcquireResourceSharedLite.c)
 *     IoBoostThreadIoPriority @ 0x140358630 (IoBoostThreadIoPriority.c)
 *     PsGetEffectiveServerSilo @ 0x1403621B0 (PsGetEffectiveServerSilo.c)
 *     KeVerifyGroupAffinity @ 0x1403781B4 (KeVerifyGroupAffinity.c)
 *     KeSetIdealProcessorThread @ 0x14037A820 (KeSetIdealProcessorThread.c)
 *     KeSetIdealProcessorThreadByNumber @ 0x14037A874 (KeSetIdealProcessorThreadByNumber.c)
 *     KeSetAffinityThread @ 0x1403993CC (KeSetAffinityThread.c)
 *     PspUnlockProcessShared @ 0x140399740 (PspUnlockProcessShared.c)
 *     PspLockProcessSecurityShared @ 0x140399E50 (PspLockProcessSecurityShared.c)
 *     KeUpdateThreadCpuSets @ 0x1403C60DC (KeUpdateThreadCpuSets.c)
 *     __security_check_cookie @ 0x1403D0460 (__security_check_cookie.c)
 *     memmove @ 0x140413F40 (memmove.c)
 *     KeSetUserHeteroCpuPolicyThread @ 0x14051333C (KeSetUserHeteroCpuPolicyThread.c)
 *     KeDisableProfiling @ 0x14051BB1C (KeDisableProfiling.c)
 *     KeSetSelectedCpuSetsThread @ 0x14051CBE0 (KeSetSelectedCpuSetsThread.c)
 *     PsGetProcessSilo @ 0x1405813A0 (PsGetProcessSilo.c)
 *     PspAttachThreadToUmsCompletionList @ 0x1405816E4 (PspAttachThreadToUmsCompletionList.c)
 *     PspDetachThreadFromUmsCompletionList @ 0x14058184C (PspDetachThreadFromUmsCompletionList.c)
 *     RtlTestProtectedAccess @ 0x1406075FC (RtlTestProtectedAccess.c)
 *     PspThreadFromTicket @ 0x140625930 (PspThreadFromTicket.c)
 *     SeSinglePrivilegeCheck @ 0x140627640 (SeSinglePrivilegeCheck.c)
 *     PspWriteTebIdealProcessor @ 0x1406476C8 (PspWriteTebIdealProcessor.c)
 *     PsAssignImpersonationToken @ 0x14065ADD0 (PsAssignImpersonationToken.c)
 *     PspWow64SetContextThread @ 0x140695D20 (PspWow64SetContextThread.c)
 *     PspIsSiloInSilo @ 0x1406BF51C (PspIsSiloInSilo.c)
 *     EtwTraceThreadSetName @ 0x1406DA29C (EtwTraceThreadSetName.c)
 *     ObReferenceObjectByHandleWithTag @ 0x1406F0B80 (ObReferenceObjectByHandleWithTag.c)
 *     PsGetNextProcessThread @ 0x14070A2F0 (PsGetNextProcessThread.c)
 *     KeSetDisableBoostThread @ 0x140772B7C (KeSetDisableBoostThread.c)
 *     PspSetThreadPpmPolicy @ 0x140773B50 (PspSetThreadPpmPolicy.c)
 *     ExRaiseDatatypeMisalignment @ 0x14077BDF0 (ExRaiseDatatypeMisalignment.c)
 *     SeCheckPrivilegedObject @ 0x14078DE60 (SeCheckPrivilegedObject.c)
 *     KeEnableProfiling @ 0x1408BBFDC (KeEnableProfiling.c)
 *     ExFreePoolWithTag @ 0x1409B4010 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x1409B4160 (ExAllocatePoolWithTag.c)
 */

// local variable allocation has failed, the output may be wrong!
NTSTATUS __stdcall NtSetInformationThread(
        HANDLE ThreadHandle,
        THREADINFOCLASS ThreadInformationClass,
        PVOID ThreadInformation,
        ULONG ThreadInformationLength)
{
  unsigned __int64 v5; // rdi
  HANDLE v6; // r10
  struct _LIST_ENTRY *v7; // rbx
  struct _KTHREAD *CurrentThread; // r13
  unsigned __int8 v9; // r12
  unsigned int v10; // r14d
  __int64 v11; // rax
  void *v12; // rdi
  NTSTATUS result; // eax
  NTSTATUS v14; // eax
  NTSTATUS v15; // ebx
  __int64 v16; // rdi
  __int64 v17; // rdx
  NTSTATUS v18; // esi
  __int64 v19; // r8
  _DWORD *v20; // r9
  __int64 v21; // rdx
  __int64 v22; // r8
  _DWORD *v23; // r9
  PVOID v24; // rcx
  KPRIORITY v25; // edi
  PVOID v26; // rbx
  __int64 v27; // r8
  unsigned __int64 v28; // rax
  __int64 v29; // rcx
  _DWORD *v30; // rax
  LONG v31; // edx
  PVOID v32; // rbx
  unsigned int v33; // edi
  void *v34; // r10
  PVOID v35; // rcx
  ULONG v36; // edx
  int v37; // edi
  unsigned __int64 v38; // rdi
  unsigned __int64 v39; // rsi
  PVOID v40; // rbx
  _QWORD *v41; // r14
  unsigned int v42; // eax
  unsigned __int64 v43; // rcx
  unsigned __int64 v44; // rdx
  unsigned __int16 v45; // di
  char *PoolWithTag; // rax
  void *v47; // rax
  PVOID v48; // rdi
  unsigned int v49; // r14d
  NTSTATUS v50; // r12d
  struct _KTHREAD *v51; // rdi
  _KPROCESS *Process; // rsi
  struct _EX_RUNDOWN_REF *i; // rax
  struct _EX_RUNDOWN_REF *v54; // rdi
  unsigned __int64 Count; // rcx
  unsigned __int64 v56; // rdx
  bool v57; // al
  unsigned __int64 v58; // r8
  __int64 v59; // rdx
  unsigned __int64 v60; // rax
  __int16 v61; // ax
  __int16 v62; // ax
  __int64 v63; // rdx
  __int16 v64; // ax
  KPRIORITY v65; // edi
  unsigned int v66; // edi
  _DWORD *v67; // rbx
  NTSTATUS v68; // edi
  __int64 v69; // r8
  _DWORD *v70; // r9
  PVOID v71; // r14
  NTSTATUS v72; // ebx
  __int64 v73; // rdi
  PVOID v74; // r14
  struct _EX_RUNDOWN_REF *v75; // r15
  __int64 v76; // r14
  __int64 v77; // rax
  __int64 v78; // rdi
  PVOID v79; // rsi
  __int64 v80; // r8
  _DWORD *v81; // r9
  _QWORD *ServerSiloGlobals; // rax
  __int64 v83; // rdx
  LONG v84; // esi
  NTSTATUS v85; // edi
  PVOID v86; // rcx
  LONG v87; // edi
  int v88; // edx
  struct _KTHREAD *v89; // rcx
  char v90; // di
  __int64 v91; // rcx
  unsigned __int64 v92; // rcx
  PVOID v93; // rdi
  NTSTATUS v94; // ebx
  struct _KTHREAD *v95; // rbx
  __int64 v97; // rdx
  unsigned int v98; // edi
  LONG v99; // edi
  LONG v100; // edi
  struct _KTHREAD *v101; // rax
  struct _LIST_ENTRY *v102; // rax
  struct _LIST_ENTRY *v103; // rdi
  PEPROCESS v104; // rsi
  __int64 ProcessSilo; // rax
  char IsSiloInSilo; // al
  struct _LIST_ENTRY *v107; // rcx
  __int64 EffectiveServerSilo; // rbx
  __int64 ProcessServerSilo; // rax
  PVOID Object; // [rsp+40h] [rbp-238h] BYREF
  NTSTATUS v111; // [rsp+48h] [rbp-230h]
  char v112; // [rsp+4Ch] [rbp-22Ch]
  char v113; // [rsp+4Dh] [rbp-22Bh]
  bool v114; // [rsp+4Eh] [rbp-22Ah]
  struct _PROCESSOR_NUMBER v115; // [rsp+54h] [rbp-224h] BYREF
  char v116; // [rsp+58h] [rbp-220h]
  LONG Increment; // [rsp+5Ch] [rbp-21Ch]
  PVOID v118; // [rsp+60h] [rbp-218h] BYREF
  HANDLE Handle; // [rsp+68h] [rbp-210h]
  _QWORD *v120; // [rsp+70h] [rbp-208h]
  LONG v121; // [rsp+78h] [rbp-200h]
  struct _KTHREAD *v122; // [rsp+80h] [rbp-1F8h]
  unsigned int v123; // [rsp+88h] [rbp-1F0h]
  PVOID P; // [rsp+90h] [rbp-1E8h]
  __int128 v125; // [rsp+98h] [rbp-1E0h]
  unsigned __int64 v126; // [rsp+A8h] [rbp-1D0h]
  PVOID v127; // [rsp+B0h] [rbp-1C8h] BYREF
  HANDLE v128; // [rsp+B8h] [rbp-1C0h]
  __int64 v129; // [rsp+C0h] [rbp-1B8h] BYREF
  PADAPTER_OBJECT DmaAdapter; // [rsp+C8h] [rbp-1B0h] BYREF
  void *Src[2]; // [rsp+D0h] [rbp-1A8h]
  KPRIORITY v132; // [rsp+E0h] [rbp-198h]
  LONG v133; // [rsp+E4h] [rbp-194h]
  LONG v134; // [rsp+E8h] [rbp-190h]
  LONG v135; // [rsp+ECh] [rbp-18Ch]
  int v136; // [rsp+F0h] [rbp-188h]
  LONG v137; // [rsp+F4h] [rbp-184h]
  unsigned int v138; // [rsp+F8h] [rbp-180h]
  LONG v139; // [rsp+FCh] [rbp-17Ch]
  LONG v140; // [rsp+100h] [rbp-178h]
  unsigned __int64 v141; // [rsp+108h] [rbp-170h]
  __int64 v142; // [rsp+120h] [rbp-158h]
  __int128 v143; // [rsp+130h] [rbp-148h]
  unsigned int v144; // [rsp+140h] [rbp-138h]
  __int128 v145; // [rsp+148h] [rbp-130h] BYREF
  __int64 v146; // [rsp+158h] [rbp-120h]
  __int64 v147; // [rsp+160h] [rbp-118h]
  HANDLE v148; // [rsp+168h] [rbp-110h]
  __int64 v149; // [rsp+170h] [rbp-108h]
  __int128 v150; // [rsp+178h] [rbp-100h] BYREF
  char v151[160]; // [rsp+190h] [rbp-E8h] BYREF

  v5 = (unsigned __int64)ThreadInformation;
  v6 = ThreadHandle;
  Handle = ThreadHandle;
  v7 = 0LL;
  Object = 0LL;
  v150 = 0LL;
  v121 = 0;
  v123 = 0;
  v118 = 0LL;
  v141 = 0LL;
  v125 = 0LL;
  v126 = 0LL;
  v115 = 0;
  v127 = 0LL;
  *(_OWORD *)Src = 0LL;
  v129 = 0LL;
  v145 = 0LL;
  v146 = 0LL;
  CurrentThread = KeGetCurrentThread();
  v122 = CurrentThread;
  v9 = CurrentThread->$6BEBF485330D18E60173AA6D991B35AC::gap0[10];
  if ( v9 )
  {
    if ( ThreadInformationClass >= (ThreadSuspendCount|ThreadAffinityMask)
      && ThreadInformationClass < (ThreadCounterProfiling|ThreadIsIoPending)
      || ThreadInformationClass < ThreadEnableAlignmentFaultFixup && ThreadInformationClass >= ThreadImpersonationToken )
    {
LABEL_4:
      v10 = 3;
      v11 = 3LL;
    }
    else
    {
      switch ( ThreadInformationClass )
      {
        case ThreadAffinityMask:
        case ThreadGroupInformation:
        case ThreadUmsInformation:
        case ThreadCpuAccountingInformation:
        case ThreadCpuAccountingInformation|ThreadAffinityMask:
        case ThreadCounterProfiling|ThreadIsIoPending:
          v11 = 7LL;
          v10 = 3;
          break;
        case ThreadEnableAlignmentFaultFixup:
        case ThreadCounterProfiling:
          v11 = 0LL;
          v10 = 3;
          break;
        default:
          goto LABEL_4;
      }
    }
    if ( ThreadInformationLength )
    {
      if ( ((unsigned __int64)ThreadInformation & v11) != 0 )
        ExRaiseDatatypeMisalignment();
      if ( (unsigned __int64)ThreadInformation + ThreadInformationLength > 0x7FFFFFFF0000LL
        || (char *)ThreadInformation + ThreadInformationLength < ThreadInformation )
      {
        MEMORY[0x7FFFFFFF0000] = 0;
      }
    }
  }
  else
  {
    v10 = 3;
  }
  if ( ThreadInformationClass == (ThreadCounterProfiling|ThreadAmILastThread) )
  {
    if ( ThreadHandle == (HANDLE)-2LL )
    {
      if ( ThreadInformationLength != 8 )
        return -1073741820;
      v16 = *(_QWORD *)ThreadInformation;
      v129 = *(_QWORD *)ThreadInformation;
      v18 = ObReferenceObjectByHandleWithTag(
              (HANDLE)0xFFFFFFFFFFFFFFFELL,
              0x400u,
              (POBJECT_TYPE)PsThreadType,
              v9,
              0x79517350u,
              &Object,
              0LL);
      if ( v18 < 0 )
        return v18;
      DmaAdapter = 0LL;
      if ( v16 )
      {
        v18 = PspThreadFromTicket(&v129, (__int64 *)&DmaAdapter);
        if ( v18 >= 0 )
        {
          PspRevertContainerImpersonation((ULONG_PTR)CurrentThread, v21, v22, v23);
          PsImpersonateContainerOfThread((__int64)DmaAdapter);
          HalPutDmaAdapter(DmaAdapter);
        }
      }
      else
      {
        PspRevertContainerImpersonation((ULONG_PTR)CurrentThread, v17, v19, v20);
      }
LABEL_28:
      v24 = Object;
LABEL_29:
      ObfDereferenceObjectWithTag(v24, 0x79517350u);
      return v18;
    }
    return -1073741811;
  }
  if ( ThreadInformationClass != ThreadImpersonationToken )
  {
    switch ( ThreadInformationClass )
    {
      case ThreadPriority:
        if ( ThreadInformationLength != 4 )
          return -1073741820;
        v65 = *(_DWORD *)ThreadInformation;
        v132 = v65;
        if ( (unsigned int)(v65 - 1) > 0x1E )
          return -1073741811;
        if ( v65 < 16 )
          goto LABEL_138;
        if ( !(unsigned __int8)((__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD, _QWORD))SeCheckPrivilegedObject)(
                                 SeIncreaseBasePriorityPrivilege,
                                 ThreadHandle,
                                 1024LL,
                                 v9) )
          return -1073741727;
        v6 = Handle;
LABEL_138:
        result = ObReferenceObjectByHandleWithTag(v6, 0x400u, (POBJECT_TYPE)PsThreadType, v9, 0x79517350u, &Object, 0LL);
        if ( result < 0 )
          return result;
        KeSetPriorityThread((PKTHREAD)Object, v65);
LABEL_48:
        v35 = Object;
LABEL_49:
        v36 = 2035381072;
        goto LABEL_50;
      case ThreadBasePriority:
        if ( ThreadInformationLength != 4 )
          return -1073741820;
        v25 = *(_DWORD *)ThreadInformation;
        Increment = *(_DWORD *)ThreadInformation;
        result = ObReferenceObjectByHandleWithTag(
                   ThreadHandle,
                   0x400u,
                   (POBJECT_TYPE)PsThreadType,
                   v9,
                   0x79517350u,
                   &Object,
                   0LL);
        v111 = result;
        if ( result < 0 )
          return result;
        v26 = Object;
        v27 = *((_QWORD *)Object + 68);
        v28 = (unsigned int)(v25 + 16);
        if ( (unsigned int)v28 > 0x20 || (v29 = 0x10007C001LL, !_bittest64(&v29, v28)) )
        {
          ServerSiloGlobals = PsGetServerSiloGlobals(0LL);
          if ( v83 != ServerSiloGlobals[110] && *(_BYTE *)(v27 + 1463) != 4 )
          {
            v18 = -1073741811;
            v24 = v26;
            goto LABEL_29;
          }
        }
        v30 = *(_DWORD **)(v27 + 1296);
        v118 = v30;
        if ( v30 && (v30[212] & 0x20) != 0 && *(_BYTE *)(v27 + 1463) != 4 )
        {
          v31 = Increment;
          if ( Increment > 0 )
          {
            v32 = Object;
            goto LABEL_41;
          }
        }
        else
        {
          v31 = Increment;
        }
        v32 = Object;
        KeSetBasePriorityThread((PKTHREAD)Object, v31);
LABEL_41:
        v18 = v111;
        goto LABEL_42;
      case ThreadAffinityMask:
        if ( ThreadInformationLength != 8 )
          return -1073741820;
        v73 = *(_QWORD *)ThreadInformation;
        *(_QWORD *)&v150 = v73;
        if ( !v73 )
          return -1073741811;
        result = ObReferenceObjectByHandleWithTag(
                   ThreadHandle,
                   0x400u,
                   (POBJECT_TYPE)PsThreadType,
                   v9,
                   0x79517350u,
                   &Object,
                   0LL);
        if ( result >= 0 )
        {
          v74 = Object;
          v75 = (struct _EX_RUNDOWN_REF *)*((_QWORD *)Object + 68);
          if ( ExAcquireRundownProtection_0(v75 + 139) )
          {
            if ( !KeSetLegacyAffinityThread((__int64)v74, v73) )
              LODWORD(v7) = -1073741811;
            ExReleaseRundownProtection_0(v75 + 139);
          }
          else
          {
            LODWORD(v7) = -1073741558;
          }
          ObfDereferenceObjectWithTag(v74, 0x79517350u);
          return (int)v7;
        }
        return result;
      case ThreadEnableAlignmentFaultFixup:
        if ( ThreadInformationLength != 1 )
          return -1073741820;
        v90 = *(_BYTE *)ThreadInformation;
        v116 = *(_BYTE *)ThreadInformation;
        result = ObReferenceObjectByHandleWithTag(
                   ThreadHandle,
                   0x20u,
                   (POBJECT_TYPE)PsThreadType,
                   v9,
                   0x79517350u,
                   &Object,
                   0LL);
        v111 = result;
        if ( result < 0 )
          return result;
        if ( v90 )
          _interlockedbittestandset((volatile signed __int32 *)Object + 30, 2u);
        else
          _interlockedbittestandreset((volatile signed __int32 *)Object + 30, 2u);
        goto LABEL_48;
      case ThreadQuerySetWin32StartAddress:
        return -1073741811;
      case ThreadZeroTlsCell:
        if ( ThreadInformationLength != 4 )
          return -1073741820;
        v49 = *(_DWORD *)ThreadInformation;
        v121 = *(_DWORD *)ThreadInformation;
        result = ObReferenceObjectByHandleWithTag(
                   ThreadHandle,
                   0x20u,
                   (POBJECT_TYPE)PsThreadType,
                   v9,
                   0x79517350u,
                   &Object,
                   0LL);
        v50 = result;
        v111 = result;
        if ( result < 0 )
          return result;
        v51 = (struct _KTHREAD *)Object;
        ObfDereferenceObjectWithTag(Object, 0x79517350u);
        if ( v51 != CurrentThread )
          return -1073741811;
        Process = v51->Process;
        v122 = (struct _KTHREAD *)Process;
        for ( i = (struct _EX_RUNDOWN_REF *)PsGetNextProcessThread(Process, 0LL);
              ;
              i = (struct _EX_RUNDOWN_REF *)PsGetNextProcessThread(Process, v54) )
        {
          Object = i;
          v54 = i;
          if ( !i )
            break;
          if ( ExAcquireRundownProtection_0(i + 159) )
          {
            Count = v54[30].Count;
            if ( Count )
            {
              v56 = Process[1].AffinityPadding[10];
              v57 = 0;
              if ( v56 )
              {
                v64 = *(_WORD *)(v56 + 8);
                if ( v64 == 332 || v64 == 452 )
                  v57 = 1;
              }
              v114 = v57;
              v58 = Count + 0x2000;
              if ( !v57 )
                v58 = 0LL;
              if ( v49 >= 0x40 )
              {
                if ( v49 < 0x440 )
                {
                  if ( v56 && ((v62 = *(_WORD *)(v56 + 8), v62 == 332) || v62 == 452) )
                  {
                    if ( v58 )
                    {
                      v63 = *(unsigned int *)(v58 + 3988);
                      if ( (_DWORD)v63 )
                        *(_DWORD *)(v63 + 4LL * (v49 - 64)) = 0;
                    }
                  }
                  else
                  {
                    v59 = *(_QWORD *)(Count + 6016);
                    v147 = v59;
                    if ( v59 )
                    {
                      v60 = v59 + 8LL * (v49 - 64);
                      if ( v60 >= 0x7FFFFFFF0000LL )
                        v60 = 0x7FFFFFFF0000LL;
                      *(_QWORD *)v60 = 0LL;
                    }
                  }
                }
              }
              else if ( v56 && ((v61 = *(_WORD *)(v56 + 8), v61 == 332) || v61 == 452) )
              {
                if ( v58 )
                  *(_DWORD *)(v58 + 4LL * v49 + 3600) = 0;
              }
              else
              {
                *(_QWORD *)(Count + 8LL * v49 + 5248) = 0LL;
              }
            }
            ExReleaseRundownProtection_0(v54 + 159);
          }
        }
        return v50;
      case ThreadIdealProcessor:
        if ( ThreadInformationLength != 4 )
          return -1073741820;
        v66 = *(_DWORD *)ThreadInformation;
        v123 = v66;
        if ( v66 > 0x40 )
          return -1073741811;
        result = ObReferenceObjectByHandleWithTag(
                   ThreadHandle,
                   0x20u,
                   (POBJECT_TYPE)PsThreadType,
                   v9,
                   0x79517350u,
                   &Object,
                   0LL);
        if ( result >= 0 )
        {
          v67 = Object;
          v68 = KeSetIdealProcessorThread((PKTHREAD)Object, v66);
          if ( (v67[29] & 0x400) == 0 )
            PspWriteTebIdealProcessor((__int64)CurrentThread, (__int64)v67, v69, v70);
          ObfDereferenceObjectWithTag(v67, 0x79517350u);
          return v68;
        }
        return result;
      case ThreadPriorityBoost:
        if ( ThreadInformationLength != 4 )
          return -1073741820;
        v84 = *(_DWORD *)ThreadInformation;
        v133 = *(_DWORD *)ThreadInformation;
        result = ObReferenceObjectByHandleWithTag(
                   ThreadHandle,
                   0x400u,
                   (POBJECT_TYPE)PsThreadType,
                   v9,
                   0x79517350u,
                   &Object,
                   0LL);
        v85 = result;
        if ( result >= 0 )
        {
          KeSetDisableBoostThread(Object, v84 != 0);
          ObfDereferenceObjectWithTag(v86, 0x79517350u);
          return v85;
        }
        return result;
      case ThreadSetTlsArrayAddress:
        return -1073741822;
      case ThreadHideFromDebugger:
        if ( ThreadInformationLength )
          return -1073741820;
        result = ObReferenceObjectByHandleWithTag(
                   ThreadHandle,
                   0x20u,
                   (POBJECT_TYPE)PsThreadType,
                   v9,
                   0x79517350u,
                   &Object,
                   0LL);
        v111 = result;
        if ( result < 0 )
          return result;
        _InterlockedOr((volatile signed __int32 *)Object + 324, 4u);
        goto LABEL_220;
      case ThreadBreakOnTermination:
        if ( ThreadInformationLength != 4 )
          return -1073741820;
        v87 = *(_DWORD *)ThreadInformation;
        v134 = *(_DWORD *)ThreadInformation;
        if ( !SeSinglePrivilegeCheck(SeDebugPrivilege, v9) )
          return -1073741727;
        result = ObReferenceObjectByHandleWithTag(
                   Handle,
                   0x20u,
                   (POBJECT_TYPE)PsThreadType,
                   v9,
                   0x79517350u,
                   &Object,
                   0LL);
        v111 = result;
        if ( result < 0 )
          return result;
        if ( v87 )
          _InterlockedOr((volatile signed __int32 *)Object + 324, 0x20u);
        else
          _InterlockedAnd((volatile signed __int32 *)Object + 324, 0xFFFFFFDF);
        goto LABEL_48;
      case ThreadSwitchLegacyState:
        if ( ThreadHandle != (HANDLE)-2LL )
          return -1073741811;
        result = ObReferenceObjectByHandleWithTag(
                   (HANDLE)0xFFFFFFFFFFFFFFFELL,
                   0x20u,
                   (POBJECT_TYPE)PsThreadType,
                   v9,
                   0x79517350u,
                   &Object,
                   0LL);
        if ( result < 0 )
          return result;
        v35 = Object;
        *((_QWORD *)Object + 74) |= MEMORY[0xFFFFF780000003D8] | 3LL;
        goto LABEL_49;
      case ThreadIoPriority:
        if ( ((ThreadInformationLength - 4) & 0xFFFFFFFB) != 0 )
          return -1073741820;
        if ( ThreadInformationLength == 4 )
        {
          LODWORD(v38) = *(_DWORD *)ThreadInformation;
          v135 = *(_DWORD *)ThreadInformation;
          LOBYTE(v39) = 0;
        }
        else
        {
          v38 = *(_QWORD *)ThreadInformation;
          v141 = v38;
          v39 = HIDWORD(v38);
        }
        if ( (unsigned int)v38 >= 4 )
          return -1073741811;
        if ( (unsigned int)v38 < 3 )
          goto LABEL_64;
        if ( !(unsigned __int8)((__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD, _QWORD))SeCheckPrivilegedObject)(
                                 SeIncreaseBasePriorityPrivilege,
                                 ThreadHandle,
                                 32LL,
                                 v9) )
          return -1073741727;
        v6 = Handle;
LABEL_64:
        result = ObReferenceObjectByHandleWithTag(v6, 0x20u, (POBJECT_TYPE)PsThreadType, v9, 0x79517350u, &Object, 0LL);
        if ( result >= 0 )
        {
          v40 = Object;
          if ( (_BYTE)v39 == 1 && ((*((_DWORD *)Object + 324) >> 9) & 7) < (int)v38 )
            IoBoostThreadIoPriority((KSPIN_LOCK *)Object, v38, 0);
          PsSetIoPriorityThread((__int64)v40, v38);
          ObfDereferenceObjectWithTag(v40, 0x79517350u);
          return 0;
        }
        return result;
      case ThreadPagePriority:
        if ( ThreadInformationLength != 4 )
          return -1073741820;
        v33 = *(_DWORD *)ThreadInformation;
        v144 = v33;
        if ( v33 > (unsigned int)MmGetDefaultPagePriority() || v33 < (unsigned int)MiCreateSystemWsles() )
          return -1073741811;
        result = ObReferenceObjectByHandleWithTag(v34, 0x20u, (POBJECT_TYPE)PsThreadType, v9, 0x79517350u, &Object, 0LL);
        if ( result < 0 )
          return result;
        PsSetPagePriorityThread((__int64)Object, v33);
        goto LABEL_48;
      case ThreadActualBasePriority:
        if ( ThreadInformationLength != 4 )
          return -1073741820;
        v37 = *(_DWORD *)ThreadInformation;
        Increment = v37;
        if ( (unsigned int)(v37 - 1) > 0x1E )
          return -1073741811;
        result = ObReferenceObjectByHandleWithTag(
                   ThreadHandle,
                   0x400u,
                   (POBJECT_TYPE)PsThreadType,
                   v9,
                   0x79517350u,
                   &Object,
                   0LL);
        v18 = result;
        if ( result < 0 )
          return result;
        v32 = Object;
        if ( v37 < 16
          || *(_BYTE *)(*((_QWORD *)Object + 68) + 1463LL) == 4
          || SeSinglePrivilegeCheck(SeIncreaseBasePriorityPrivilege, v9) )
        {
          KeSetActualBasePriorityThread((__int64)v32, v37);
          v24 = v32;
        }
        else
        {
          v18 = -1073741727;
LABEL_42:
          v24 = v32;
        }
        goto LABEL_29;
      case ThreadWow64Context:
        result = ObReferenceObjectByHandleWithTag(
                   ThreadHandle,
                   0x10u,
                   (POBJECT_TYPE)PsThreadType,
                   v9,
                   0x79517350u,
                   &Object,
                   0LL);
        if ( result >= 0 )
        {
          v71 = Object;
          if ( ExAcquireRundownProtection_0((PEX_RUNDOWN_REF)Object + 159) )
          {
            v72 = PspWow64SetContextThread((PETHREAD)v71, (unsigned int *)v5, ThreadInformationLength, v9);
            ExReleaseRundownProtection_0((PEX_RUNDOWN_REF)v71 + 159);
            ObfDereferenceObjectWithTag(v71, 0x79517350u);
            return v72;
          }
          else
          {
            ObfDereferenceObjectWithTag(v71, 0x79517350u);
            return -1073741749;
          }
        }
        return result;
      case ThreadGroupInformation:
        if ( ThreadInformationLength != 16 )
          return -1073741820;
        v150 = *(_OWORD *)ThreadInformation;
        if ( !KeVerifyGroupAffinity((__int64)&v150, 1) )
          return -1073741811;
        result = ObReferenceObjectByHandleWithTag(
                   Handle,
                   0x20u,
                   (POBJECT_TYPE)PsThreadType,
                   v9,
                   0x79517350u,
                   &Object,
                   0LL);
        if ( result >= 0 )
        {
          v76 = *((_QWORD *)Object + 68);
          PspLockProcessSecurityShared(v76, (__int64)CurrentThread);
          v77 = *(_QWORD *)(v76 + 1296);
          v118 = (PVOID)v77;
          v78 = v77;
          if ( !v77
            || (ExAcquireResourceSharedLite((PERESOURCE)(v77 + 56), 1u), (*(_DWORD *)(v78 + 848) & 0x10) == 0)
            || (v91 = *(_QWORD *)(v78 + 8LL * WORD4(v150) + 624)) != 0 && ((unsigned __int64)v150 & v91) == (_QWORD)v150 )
          {
            v79 = Object;
            KeSetAffinityThread((__int64)Object, (__int64)&v150);
          }
          else
          {
            LODWORD(v7) = -1073741823;
            v79 = Object;
          }
          if ( v78 )
            ExReleaseResourceLite((PERESOURCE)(v78 + 56));
          PspUnlockProcessShared(v76, (__int64)CurrentThread);
          ObfDereferenceObjectWithTag(v79, 0x79517350u);
          return (int)v7;
        }
        return result;
      case ThreadUmsInformation:
        if ( ThreadInformationLength != 24 )
          return -1073741820;
        v145 = *(_OWORD *)ThreadInformation;
        v146 = *((_QWORD *)ThreadInformation + 2);
        if ( ThreadHandle == (HANDLE)-2LL )
        {
          v95 = CurrentThread;
        }
        else
        {
          result = ObReferenceObjectByHandleWithTag(
                     ThreadHandle,
                     0x20u,
                     (POBJECT_TYPE)PsThreadType,
                     v9,
                     0x79517350u,
                     &Object,
                     0LL);
          if ( result < 0 )
            return result;
          v95 = (struct _KTHREAD *)Object;
          ObfDereferenceObjectWithTag(Object, 0x79517350u);
        }
        if ( v95 != CurrentThread )
          return -1073741811;
        if ( (_DWORD)v145 == 1 )
          return PspAttachThreadToUmsCompletionList(v95, (__int64)&v145, v9, *(__int64 *)&ThreadInformationLength);
        if ( (_DWORD)v145 != 2 )
          return -1073741811;
        return PspDetachThreadFromUmsCompletionList(v95);
      case ThreadCounterProfiling:
        if ( ThreadInformationLength != 24 )
          return -1073741820;
        v125 = *(_OWORD *)ThreadInformation;
        v126 = *((_QWORD *)ThreadInformation + 2);
        v92 = v126;
        if ( (v126 & 3) != 0 )
          ExRaiseDatatypeMisalignment();
        if ( v126 >= 0x7FFFFFFF0000LL )
          v92 = 0x7FFFFFFF0000LL;
        *(_BYTE *)v92 = *(_BYTE *)v92;
        *(_BYTE *)(v92 + 447) = *(_BYTE *)(v92 + 447);
        result = ObReferenceObjectByHandleWithTag(v6, 0x20u, (POBJECT_TYPE)PsThreadType, v9, 0x79517350u, &Object, 0LL);
        if ( result >= 0 )
        {
          v93 = Object;
          if ( Object == KeGetCurrentThread() )
          {
            if ( HIDWORD(v125) )
              v94 = KeEnableProfiling(Object, DWORD2(v125), v125, v126);
            else
              v94 = KeDisableProfiling((__int64)Object, v126);
          }
          else
          {
            v94 = -1073741637;
          }
          ObfDereferenceObjectWithTag(v93, 0x79517350u);
          return v94;
        }
        return result;
      case ThreadIdealProcessorEx:
        if ( ThreadInformationLength != 4 )
          return -1073741820;
        v115 = *(struct _PROCESSOR_NUMBER *)ThreadInformation;
        result = ObReferenceObjectByHandleWithTag(
                   ThreadHandle,
                   0x20u,
                   (POBJECT_TYPE)PsThreadType,
                   v9,
                   0x79517350u,
                   &Object,
                   0LL);
        if ( result < 0 )
          return result;
        v32 = Object;
        v18 = KeSetIdealProcessorThreadByNumber((struct _KTHREAD *)Object, &v115, &v115);
        if ( v18 >= 0 )
        {
          if ( (*((_DWORD *)v32 + 29) & 0x400) == 0 )
            PspWriteTebIdealProcessor((__int64)CurrentThread, (__int64)v32, v80, v81);
          *(struct _PROCESSOR_NUMBER *)v5 = v115;
        }
        goto LABEL_42;
      case ThreadCpuAccountingInformation:
        if ( ThreadHandle != (HANDLE)-2LL )
          return -1073741811;
        if ( ThreadInformationLength != 8 )
          return -1073741820;
        v148 = *(HANDLE *)ThreadInformation;
        if ( v148 )
        {
          result = ObReferenceObjectByHandleWithTag(v148, 2u, MmSessionObjectType, v9, 0x79517350u, &v127, 0LL);
          if ( result < 0 )
            return result;
          v7 = (struct _LIST_ENTRY *)v127;
          v97 = *((_QWORD *)v127 + 4);
          if ( !v97 )
          {
            ObfDereferenceObjectWithTag(v127, 0x79517350u);
            return -1073740715;
          }
          if ( !KeSetThreadChargeOnlySchedulingGroup((__int64)CurrentThread, v97) )
          {
            ObfDereferenceObjectWithTag(v7, 0x79517350u);
            return -1073740714;
          }
        }
        else
        {
          if ( !KeSetThreadChargeOnlySchedulingGroup((__int64)CurrentThread, 0LL) )
            return -1073740713;
          HalPutDmaAdapter((PADAPTER_OBJECT)CurrentThread[1].ApcState.ApcListHead[1].Flink);
        }
        CurrentThread[1].ApcState.ApcListHead[1].Flink = v7;
        return 0;
      case ThreadCounterProfiling|ThreadAffinityMask:
        if ( ThreadInformationLength != 4 )
          return -1073741820;
        v98 = MEMORY[4];
        v136 = MEMORY[4];
        if ( MEMORY[4] > 8u )
          return -1073741811;
        v18 = ObReferenceObjectByHandleWithTag(
                ThreadHandle,
                0x400u,
                (POBJECT_TYPE)PsThreadType,
                v9,
                0x79517350u,
                &Object,
                0LL);
        if ( v18 < 0 )
          return v18;
        KeSetUserHeteroCpuPolicyThread((__int64)Object, v98);
        goto LABEL_28;
      case ThreadCpuAccountingInformation|ThreadAffinityMask:
        v113 = 0;
        v41 = 0LL;
        v120 = 0LL;
        P = 0LL;
        v112 = 0;
        if ( ThreadInformationLength == 16 )
        {
          v18 = ObReferenceObjectByHandleWithTag(
                  ThreadHandle,
                  0x400u,
                  (POBJECT_TYPE)PsThreadType,
                  v9,
                  0x79517350u,
                  &Object,
                  0LL);
          v111 = v18;
          if ( v18 < 0 )
            goto LABEL_88;
          v113 = 1;
          if ( v9 )
          {
            v143 = 0LL;
            if ( v5 >= 0x7FFFFFFF0000LL )
              v5 = 0x7FFFFFFF0000LL;
            v42 = *(_DWORD *)v5;
            LODWORD(v143) = v42;
            v43 = *(_QWORD *)(v5 + 8);
            *((_QWORD *)&v143 + 1) = v43;
            *(_OWORD *)Src = v143;
            if ( (_WORD)v42 )
            {
              if ( (v43 & 1) != 0 )
                ExRaiseDatatypeMisalignment();
              v44 = (unsigned __int16)v42 + v43;
              if ( v44 > 0x7FFFFFFF0000LL || v44 < v43 )
                MEMORY[0x7FFFFFFF0000] = 0;
            }
            v18 = v111;
            v41 = v120;
          }
          else
          {
            *(_OWORD *)Src = *(_OWORD *)v5;
          }
          v45 = (unsigned __int16)Src[0];
          if ( ((__int64)Src[0] & 1) != 0 || LOWORD(Src[0]) > WORD1(Src[0]) )
          {
            v18 = -1073741811;
          }
          else
          {
            PoolWithTag = (char *)ExAllocatePoolWithTag(NonPagedPoolNx, LOWORD(Src[0]) + 16LL, 0x6D4E6854u);
            v41 = PoolWithTag;
            v120 = PoolWithTag;
            if ( PoolWithTag )
            {
              v47 = PoolWithTag + 16;
              v41[1] = v47;
              *(_WORD *)v41 = v45;
              *((_WORD *)v41 + 1) = v45;
              memmove(v47, Src[1], v45);
              v48 = Object;
              PspLockThreadSecurityExclusive((__int64)Object, (__int64)CurrentThread);
              v112 = 1;
              P = (PVOID)*((_QWORD *)v48 + 194);
              *((_QWORD *)v48 + 194) = v41;
              v41 = 0LL;
              v120 = 0LL;
              EtwTraceThreadSetName((__int64)v48);
              goto LABEL_88;
            }
            v18 = -1073741670;
          }
        }
        else
        {
          v18 = -1073741820;
        }
        v111 = v18;
LABEL_88:
        if ( v112 )
          PspUnlockThreadSecurityExclusive((__int64)Object, (__int64)CurrentThread);
        if ( v113 )
          ObfDereferenceObjectWithTag(Object, 0x79517350u);
        if ( P )
          ExFreePoolWithTag(P, 0x6D4E6854u);
        if ( v41 )
          ExFreePoolWithTag(v41, 0x6D4E6854u);
        return v18;
      case ThreadSuspendCount|ThreadAffinityMask:
        if ( (ThreadInformationLength & 7) != 0 || ThreadInformationLength > 0xA0 )
          return -1073741820;
        memmove(v151, ThreadInformation, ThreadInformationLength);
        result = ObReferenceObjectByHandleWithTag(
                   Handle,
                   0x400u,
                   (POBJECT_TYPE)PsThreadType,
                   v9,
                   0x79517350u,
                   &Object,
                   0LL);
        if ( result < 0 )
          return result;
        v14 = KeSetSelectedCpuSetsThread((__int64)Object, ThreadInformationLength >> 3, v151);
        goto LABEL_21;
      case ThreadDynamicCodePolicyInfo:
        if ( ThreadHandle != (HANDLE)-2LL )
          return -1073741811;
        if ( ThreadInformationLength != 4 )
          return -1073741820;
        v137 = *(_DWORD *)ThreadInformation;
        if ( v137 == 1 )
        {
          if ( ((__int64)CurrentThread->Process[2].ReadyListHead.Blink & 0x200) != 0 )
          {
            _InterlockedOr((volatile signed __int32 *)&CurrentThread[1].SwapListEntry + 2, 0x40000u);
            return 0;
          }
          return -1073741790;
        }
        if ( v137 )
          return -1073741811;
        _InterlockedAnd((volatile signed __int32 *)&CurrentThread[1].SwapListEntry + 2, 0xFFFBFFFF);
        return 0;
      case ThreadDynamicCodePolicyInfo|ThreadTimes:
        if ( ThreadInformationLength != 4 )
          return -1073741820;
        v99 = *(_DWORD *)ThreadInformation;
        v140 = *(_DWORD *)ThreadInformation;
        if ( !v9 )
          goto LABEL_287;
        if ( !SeSinglePrivilegeCheck(SeDebugPrivilege, v9) )
          return -1073741727;
        if ( !RtlTestProtectedAccess(BYTE2(CurrentThread->Process[2].Header.WaitListHead.Flink), 0x51u) )
          return -1073741790;
        v6 = Handle;
LABEL_287:
        result = ObReferenceObjectByHandleWithTag(v6, 0x20u, (POBJECT_TYPE)PsThreadType, v9, 0x79517350u, &Object, 0LL);
        v111 = result;
        if ( result >= 0 )
        {
          if ( v99 )
            _InterlockedOr((volatile signed __int32 *)Object + 324, 0x80000u);
          else
            _InterlockedAnd((volatile signed __int32 *)Object + 324, 0xFFF7FFFF);
LABEL_220:
          ObfDereferenceObjectWithTag(Object, 0x79517350u);
          return v111;
        }
        return result;
      case ThreadDynamicCodePolicyInfo|ThreadAffinityMask:
        if ( ThreadInformationLength != 4 )
          return -1073741820;
        v100 = *(_DWORD *)ThreadInformation;
        v139 = *(_DWORD *)ThreadInformation;
        result = ObReferenceObjectByHandleWithTag(
                   ThreadHandle,
                   0x20u,
                   (POBJECT_TYPE)PsThreadType,
                   v9,
                   0x79517350u,
                   &Object,
                   0LL);
        v111 = result;
        if ( result < 0 )
          return result;
        if ( v100 )
          _InterlockedOr((volatile signed __int32 *)Object + 324, 0x200000u);
        else
          _InterlockedAnd((volatile signed __int32 *)Object + 324, 0xFFDFFFFF);
        goto LABEL_220;
      case ThreadSubsystemInformation|ThreadPriority:
        if ( ThreadHandle != (HANDLE)-2LL )
          return -1073741811;
        if ( ThreadInformationLength != 8 )
          return -1073741820;
        v128 = *(HANDLE *)ThreadInformation;
        v101 = KeGetCurrentThread();
        if ( v128 )
        {
          Object = v101;
          if ( v101[1].WaitBlock[3].WaitListEntry.Blink == (struct _LIST_ENTRY *)-3LL )
          {
            result = ObReferenceObjectByHandleWithTag(v128, 0x20u, (POBJECT_TYPE)PsJobType, v9, 0x6D497350u, &v118, 0LL);
            if ( result < 0 )
              return result;
            v103 = (struct _LIST_ENTRY *)v118;
            if ( (*((_DWORD *)v118 + 331) & 2) != 0 )
            {
              v104 = IoThreadToProcess((PETHREAD)Object);
              ProcessSilo = PsGetProcessSilo((__int64)v104);
              IsSiloInSilo = PspIsSiloInSilo((__int64)v103, ProcessSilo);
              v107 = v103;
              if ( !IsSiloInSilo
                || (EffectiveServerSilo = PsGetEffectiveServerSilo((__int64)v103),
                    ProcessServerSilo = PsGetProcessServerSilo((__int64)v104),
                    v107 = v103,
                    ProcessServerSilo != EffectiveServerSilo) )
              {
                ObfDereferenceObjectWithTag(v107, 0x6D497350u);
                return -1073741811;
              }
              PsAttachSiloToCurrentThread(v103);
              return 0;
            }
            ObfDereferenceObjectWithTag(v118, 0x6D497350u);
          }
        }
        else if ( v101[1].WaitBlock[3].WaitListEntry.Blink != (struct _LIST_ENTRY *)-3LL )
        {
          v102 = PsAttachSiloToCurrentThread((struct _LIST_ENTRY *)0xFFFFFFFFFFFFFFFDLL);
          v36 = 1833530192;
          v35 = v102;
LABEL_50:
          ObfDereferenceObjectWithTag(v35, v36);
          return 0;
        }
        break;
      case ThreadCounterProfiling|ThreadIsIoPending:
        return -1073741637;
      case ThreadIdealProcessorEx|ThreadIsIoPending:
        if ( ThreadInformationLength != 12 )
          return -1073741820;
        v142 = *(_QWORD *)ThreadInformation;
        v88 = *((_DWORD *)ThreadInformation + 2);
        if ( (_DWORD)v142 != 1 || (v142 & 0xFFFFFFFE00000000uLL) != 0 || (~HIDWORD(v142) & v88) != 0 )
          return -1073741811;
        if ( (v142 & 0x100000000LL) != 0 )
        {
          if ( (v88 & 1) != 0 )
            v10 = 1;
        }
        else
        {
          v10 = 0;
        }
        result = ObReferenceObjectByHandleWithTag(
                   ThreadHandle,
                   0x20u,
                   (POBJECT_TYPE)PsThreadType,
                   v9,
                   0x79517350u,
                   &Object,
                   0LL);
        if ( result < 0 )
          return result;
        PspSetThreadPpmPolicy(Object, v10);
        goto LABEL_48;
      case ThreadCpuAccountingInformation|ThreadIsIoPending:
        if ( ThreadHandle != (HANDLE)-2LL || v9 )
          return -1073741790;
        if ( ThreadInformationLength != 4 )
          return -1073741820;
        v138 = *(_DWORD *)ThreadInformation;
        if ( v138 >= 2 )
          return -1073741811;
        v89 = KeGetCurrentThread();
        *((_DWORD *)&v89[1].SwapListEntry + 3) ^= (*((_DWORD *)&v89[1].SwapListEntry + 3) ^ (v138 << 11)) & 0x800;
        KeUpdateThreadCpuSets((__int64)v89);
        return 0;
      default:
        return -1073741821;
    }
    return -1073741811;
  }
  if ( ThreadInformationLength != 8 )
    return -1073741820;
  v12 = *(void **)ThreadInformation;
  v149 = *(_QWORD *)ThreadInformation;
  result = ObReferenceObjectByHandleWithTag(
             ThreadHandle,
             0x80u,
             (POBJECT_TYPE)PsThreadType,
             v9,
             0x79517350u,
             &Object,
             0LL);
  if ( result >= 0 )
  {
    v14 = PsAssignImpersonationToken((PETHREAD)Object, v12);
LABEL_21:
    v15 = v14;
    ObfDereferenceObjectWithTag(Object, 0x79517350u);
    return v15;
  }
  return result;
}
