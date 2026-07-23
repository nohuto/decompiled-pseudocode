/*
 * XREFs of NtSetInformationThread @ 0x1405FBA80
 * Callers:
 *     <none>
 * Callees:
 *     PsGetProcessServerSilo @ 0x140204560 (PsGetProcessServerSilo.c)
 *     ExReleaseRundownProtection_0 @ 0x140206420 (ExReleaseRundownProtection_0.c)
 *     ExAcquireRundownProtection_0 @ 0x1402068E0 (ExAcquireRundownProtection_0.c)
 *     PsSetIoPriorityThread @ 0x140234A9C (PsSetIoPriorityThread.c)
 *     PsSetPagePriorityThread @ 0x140234D94 (PsSetPagePriorityThread.c)
 *     IoThreadToProcess @ 0x14025A330 (IoThreadToProcess.c)
 *     HalPutDmaAdapter @ 0x140261190 (HalPutDmaAdapter.c)
 *     ObfDereferenceObjectWithTag @ 0x1402611B0 (ObfDereferenceObjectWithTag.c)
 *     ExReleaseResourceLite @ 0x140261460 (ExReleaseResourceLite.c)
 *     ExAcquireResourceSharedLite @ 0x140261FD0 (ExAcquireResourceSharedLite.c)
 *     PsImpersonateContainerOfThread @ 0x14026B3F0 (PsImpersonateContainerOfThread.c)
 *     KeSetActualBasePriorityThread @ 0x14026C9E0 (KeSetActualBasePriorityThread.c)
 *     PspRevertContainerImpersonation @ 0x14026D9F0 (PspRevertContainerImpersonation.c)
 *     MiCreateSystemWsles @ 0x1402B3480 (MiCreateSystemWsles.c)
 *     MmGetDefaultPagePriority @ 0x1402C2300 (MmGetDefaultPagePriority.c)
 *     KeSetLegacyAffinityThread @ 0x1402C9F30 (KeSetLegacyAffinityThread.c)
 *     PsGetServerSiloGlobals @ 0x1402D70B4 (PsGetServerSiloGlobals.c)
 *     PsGetEffectiveServerSilo @ 0x1402D95B0 (PsGetEffectiveServerSilo.c)
 *     PsAttachSiloToCurrentThread @ 0x1402E1A30 (PsAttachSiloToCurrentThread.c)
 *     IoBoostThreadIoPriority @ 0x1402E33DC (IoBoostThreadIoPriority.c)
 *     PspUnlockThreadSecurityExclusive @ 0x14030CF04 (PspUnlockThreadSecurityExclusive.c)
 *     PspLockThreadSecurityExclusive @ 0x140310DF4 (PspLockThreadSecurityExclusive.c)
 *     KeSetPriorityThread @ 0x1403310D0 (KeSetPriorityThread.c)
 *     KeSetBasePriorityThread @ 0x140332450 (KeSetBasePriorityThread.c)
 *     KeSetThreadChargeOnlySchedulingGroup @ 0x1403329C0 (KeSetThreadChargeOnlySchedulingGroup.c)
 *     KeVerifyGroupAffinity @ 0x140374F84 (KeVerifyGroupAffinity.c)
 *     KeSetIdealProcessorThread @ 0x140377AE0 (KeSetIdealProcessorThread.c)
 *     KeSetIdealProcessorThreadByNumber @ 0x140377B34 (KeSetIdealProcessorThreadByNumber.c)
 *     KeSetAffinityThread @ 0x140395ECC (KeSetAffinityThread.c)
 *     PspUnlockProcessShared @ 0x140396240 (PspUnlockProcessShared.c)
 *     PspLockProcessSecurityShared @ 0x140396950 (PspLockProcessSecurityShared.c)
 *     KeUpdateThreadCpuSets @ 0x1403C20BC (KeUpdateThreadCpuSets.c)
 *     __security_check_cookie @ 0x1403CC020 (__security_check_cookie.c)
 *     memmove @ 0x140408CC0 (memmove.c)
 *     KeSetUserHeteroCpuPolicyThread @ 0x14050D87C (KeSetUserHeteroCpuPolicyThread.c)
 *     KeDisableProfiling @ 0x140516024 (KeDisableProfiling.c)
 *     KeSetSelectedCpuSetsThread @ 0x1405170E0 (KeSetSelectedCpuSetsThread.c)
 *     PsGetProcessSilo @ 0x14057B920 (PsGetProcessSilo.c)
 *     PspAttachThreadToUmsCompletionList @ 0x14057BC64 (PspAttachThreadToUmsCompletionList.c)
 *     PspDetachThreadFromUmsCompletionList @ 0x14057BDCC (PspDetachThreadFromUmsCompletionList.c)
 *     PspThreadFromTicket @ 0x1405E0120 (PspThreadFromTicket.c)
 *     SeSinglePrivilegeCheck @ 0x1405E3050 (SeSinglePrivilegeCheck.c)
 *     PsAssignImpersonationToken @ 0x140608FB0 (PsAssignImpersonationToken.c)
 *     ObReferenceObjectByHandleWithTag @ 0x14062B1C0 (ObReferenceObjectByHandleWithTag.c)
 *     EtwTraceThreadSetName @ 0x14063A3C8 (EtwTraceThreadSetName.c)
 *     PspWriteTebIdealProcessor @ 0x14064C5BC (PspWriteTebIdealProcessor.c)
 *     RtlTestProtectedAccess @ 0x14064CF4C (RtlTestProtectedAccess.c)
 *     PsGetNextProcessThread @ 0x14069A050 (PsGetNextProcessThread.c)
 *     PspIsSiloInSilo @ 0x1406E918C (PspIsSiloInSilo.c)
 *     PspWow64SetContextThread @ 0x1406FC94C (PspWow64SetContextThread.c)
 *     KeSetDisableBoostThread @ 0x14075E07C (KeSetDisableBoostThread.c)
 *     PspSetThreadPpmPolicy @ 0x14075F230 (PspSetThreadPpmPolicy.c)
 *     ExRaiseDatatypeMisalignment @ 0x140767450 (ExRaiseDatatypeMisalignment.c)
 *     SeCheckPrivilegedObject @ 0x140779674 (SeCheckPrivilegedObject.c)
 *     KeEnableProfiling @ 0x1408B77B4 (KeEnableProfiling.c)
 *     ExFreePoolWithTag @ 0x1409B1010 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x1409B1030 (ExAllocatePoolWithTag.c)
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
  __int64 v24; // rdx
  PVOID v25; // rcx
  KPRIORITY v26; // edi
  PVOID v27; // rbx
  __int64 v28; // r8
  unsigned __int64 v29; // rax
  __int64 v30; // rcx
  _DWORD *v31; // rax
  LONG v32; // edx
  PVOID v33; // rbx
  unsigned int v34; // edi
  void *v35; // r10
  PVOID v36; // rcx
  ULONG v37; // edx
  int v38; // edi
  __int64 v39; // r8
  _DWORD *v40; // r9
  unsigned __int64 v41; // rdi
  unsigned __int64 v42; // rsi
  PVOID v43; // rbx
  _QWORD *v44; // r14
  _PROCESSOR_NUMBER v45; // eax
  unsigned __int64 v46; // rcx
  unsigned __int64 v47; // rdx
  unsigned __int16 v48; // di
  char *PoolWithTag; // rax
  void *v50; // rax
  PVOID v51; // rdi
  unsigned int v52; // r14d
  NTSTATUS v53; // r12d
  struct _KTHREAD *v54; // rdi
  _KPROCESS *Process; // rsi
  struct _EX_RUNDOWN_REF *i; // rax
  struct _EX_RUNDOWN_REF *v57; // rdi
  unsigned __int64 Count; // rcx
  unsigned __int64 v59; // rdx
  bool v60; // al
  unsigned __int64 v61; // r8
  __int64 v62; // rdx
  unsigned __int64 v63; // rax
  __int16 v64; // ax
  __int16 v65; // ax
  __int64 v66; // rdx
  __int16 v67; // ax
  KPRIORITY v68; // edi
  unsigned int v69; // edi
  _DWORD *v70; // rbx
  NTSTATUS v71; // edi
  PVOID v72; // r14
  NTSTATUS v73; // ebx
  __int64 v74; // rdi
  PVOID v75; // r14
  struct _EX_RUNDOWN_REF *v76; // r15
  __int64 v77; // r14
  __int64 v78; // rax
  __int64 v79; // rdi
  PVOID v80; // rsi
  _QWORD *ServerSiloGlobals; // rax
  __int64 v82; // rdx
  LONG v83; // esi
  NTSTATUS v84; // edi
  PVOID v85; // rcx
  LONG v86; // edi
  int v87; // edx
  struct _KTHREAD *v88; // rcx
  char v89; // di
  __int64 v90; // rcx
  unsigned __int64 v91; // rcx
  PVOID v92; // rdi
  NTSTATUS v93; // ebx
  struct _KTHREAD *v94; // rbx
  __int64 v96; // rdx
  unsigned int v97; // edi
  LONG v98; // edi
  LONG v99; // edi
  struct _KTHREAD *v100; // rax
  struct _LIST_ENTRY *v101; // rax
  struct _LIST_ENTRY *v102; // rdi
  PEPROCESS v103; // rsi
  char IsSiloInSilo; // al
  struct _LIST_ENTRY *v105; // rcx
  __int64 EffectiveServerSilo; // rbx
  __int64 ProcessServerSilo; // rax
  PVOID Object; // [rsp+40h] [rbp-238h] BYREF
  NTSTATUS v109; // [rsp+48h] [rbp-230h]
  char v110; // [rsp+4Ch] [rbp-22Ch]
  char v111; // [rsp+4Dh] [rbp-22Bh]
  bool v112; // [rsp+4Eh] [rbp-22Ah]
  _PROCESSOR_NUMBER v113; // [rsp+54h] [rbp-224h] BYREF
  char v114; // [rsp+58h] [rbp-220h]
  LONG Increment; // [rsp+5Ch] [rbp-21Ch]
  PVOID v116; // [rsp+60h] [rbp-218h] BYREF
  HANDLE Handle; // [rsp+68h] [rbp-210h]
  _QWORD *v118; // [rsp+70h] [rbp-208h]
  LONG v119; // [rsp+78h] [rbp-200h]
  struct _KTHREAD *v120; // [rsp+80h] [rbp-1F8h]
  unsigned int v121; // [rsp+88h] [rbp-1F0h]
  PVOID P; // [rsp+90h] [rbp-1E8h]
  __int128 v123; // [rsp+98h] [rbp-1E0h]
  unsigned __int64 v124; // [rsp+A8h] [rbp-1D0h]
  PVOID v125; // [rsp+B0h] [rbp-1C8h] BYREF
  HANDLE v126; // [rsp+B8h] [rbp-1C0h]
  __int64 v127; // [rsp+C0h] [rbp-1B8h] BYREF
  PADAPTER_OBJECT DmaAdapter; // [rsp+C8h] [rbp-1B0h] BYREF
  void *Src[2]; // [rsp+D0h] [rbp-1A8h]
  KPRIORITY v130; // [rsp+E0h] [rbp-198h]
  LONG v131; // [rsp+E4h] [rbp-194h]
  LONG v132; // [rsp+E8h] [rbp-190h]
  LONG v133; // [rsp+ECh] [rbp-18Ch]
  int v134; // [rsp+F0h] [rbp-188h]
  LONG v135; // [rsp+F4h] [rbp-184h]
  unsigned int v136; // [rsp+F8h] [rbp-180h]
  LONG v137; // [rsp+FCh] [rbp-17Ch]
  LONG v138; // [rsp+100h] [rbp-178h]
  unsigned __int64 v139; // [rsp+108h] [rbp-170h]
  __int64 v140; // [rsp+120h] [rbp-158h]
  __int128 v141; // [rsp+130h] [rbp-148h]
  unsigned int v142; // [rsp+140h] [rbp-138h]
  __int128 v143; // [rsp+148h] [rbp-130h] BYREF
  __int64 v144; // [rsp+158h] [rbp-120h]
  __int64 v145; // [rsp+160h] [rbp-118h]
  HANDLE v146; // [rsp+168h] [rbp-110h]
  __int64 v147; // [rsp+170h] [rbp-108h]
  __int128 v148; // [rsp+178h] [rbp-100h] BYREF
  char v149[160]; // [rsp+190h] [rbp-E8h] BYREF

  v5 = (unsigned __int64)ThreadInformation;
  v6 = ThreadHandle;
  Handle = ThreadHandle;
  v7 = 0LL;
  Object = 0LL;
  v148 = 0LL;
  v119 = 0;
  v121 = 0;
  v116 = 0LL;
  v139 = 0LL;
  v123 = 0LL;
  v124 = 0LL;
  v113 = 0;
  v125 = 0LL;
  *(_OWORD *)Src = 0LL;
  v127 = 0LL;
  v143 = 0LL;
  v144 = 0LL;
  CurrentThread = KeGetCurrentThread();
  v120 = CurrentThread;
  v9 = CurrentThread->$6A88714AB977AAA8032D9F5E2A96BA31::gap0[10];
  if ( v9 )
  {
    if ( ThreadInformationClass >= ThreadSelectedCpuSets
      && ThreadInformationClass < ThreadManageWritesToExecutableMemory
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
        case ThreadNameInformation:
        case ThreadManageWritesToExecutableMemory:
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
  if ( ThreadInformationClass == ThreadWorkOnBehalfTicket )
  {
    if ( ThreadHandle == (HANDLE)-2LL )
    {
      if ( ThreadInformationLength != 8 )
        return -1073741820;
      v16 = *(_QWORD *)ThreadInformation;
      v127 = *(_QWORD *)ThreadInformation;
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
        v18 = PspThreadFromTicket(&v127, (__int64 *)&DmaAdapter);
        if ( v18 >= 0 )
        {
          PspRevertContainerImpersonation((ULONG_PTR)CurrentThread, v21, v22, v23);
          PsImpersonateContainerOfThread((__int64)DmaAdapter, v24);
          HalPutDmaAdapter(DmaAdapter);
        }
      }
      else
      {
        PspRevertContainerImpersonation((ULONG_PTR)CurrentThread, v17, v19, v20);
      }
LABEL_28:
      v25 = Object;
LABEL_29:
      ObfDereferenceObjectWithTag(v25, 0x79517350u);
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
        v68 = *(_DWORD *)ThreadInformation;
        v130 = v68;
        if ( (unsigned int)(v68 - 1) > 0x1E )
          return -1073741811;
        if ( v68 < 16 )
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
        KeSetPriorityThread((PKTHREAD)Object, v68);
LABEL_48:
        v36 = Object;
LABEL_49:
        v37 = 2035381072;
        goto LABEL_50;
      case ThreadBasePriority:
        if ( ThreadInformationLength != 4 )
          return -1073741820;
        v26 = *(_DWORD *)ThreadInformation;
        Increment = *(_DWORD *)ThreadInformation;
        result = ObReferenceObjectByHandleWithTag(
                   ThreadHandle,
                   0x400u,
                   (POBJECT_TYPE)PsThreadType,
                   v9,
                   0x79517350u,
                   &Object,
                   0LL);
        v109 = result;
        if ( result < 0 )
          return result;
        v27 = Object;
        v28 = *((_QWORD *)Object + 68);
        v29 = (unsigned int)(v26 + 16);
        if ( (unsigned int)v29 > 0x20 || (v30 = 0x10007C001LL, !_bittest64(&v30, v29)) )
        {
          ServerSiloGlobals = PsGetServerSiloGlobals(0LL);
          if ( v82 != ServerSiloGlobals[110] && *(_BYTE *)(v28 + 1463) != 4 )
          {
            v18 = -1073741811;
            v25 = v27;
            goto LABEL_29;
          }
        }
        v31 = *(_DWORD **)(v28 + 1296);
        v116 = v31;
        if ( v31 && (v31[212] & 0x20) != 0 && *(_BYTE *)(v28 + 1463) != 4 )
        {
          v32 = Increment;
          if ( Increment > 0 )
          {
            v33 = Object;
            goto LABEL_41;
          }
        }
        else
        {
          v32 = Increment;
        }
        v33 = Object;
        KeSetBasePriorityThread((PKTHREAD)Object, v32);
LABEL_41:
        v18 = v109;
        goto LABEL_42;
      case ThreadAffinityMask:
        if ( ThreadInformationLength != 8 )
          return -1073741820;
        v74 = *(_QWORD *)ThreadInformation;
        *(_QWORD *)&v148 = v74;
        if ( !v74 )
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
          v75 = Object;
          v76 = (struct _EX_RUNDOWN_REF *)*((_QWORD *)Object + 68);
          if ( ExAcquireRundownProtection_0(v76 + 139) )
          {
            if ( !KeSetLegacyAffinityThread((__int64)v75, v74) )
              LODWORD(v7) = -1073741811;
            ExReleaseRundownProtection_0(v76 + 139);
          }
          else
          {
            LODWORD(v7) = -1073741558;
          }
          ObfDereferenceObjectWithTag(v75, 0x79517350u);
          return (int)v7;
        }
        return result;
      case ThreadEnableAlignmentFaultFixup:
        if ( ThreadInformationLength != 1 )
          return -1073741820;
        v89 = *(_BYTE *)ThreadInformation;
        v114 = *(_BYTE *)ThreadInformation;
        result = ObReferenceObjectByHandleWithTag(
                   ThreadHandle,
                   0x20u,
                   (POBJECT_TYPE)PsThreadType,
                   v9,
                   0x79517350u,
                   &Object,
                   0LL);
        v109 = result;
        if ( result < 0 )
          return result;
        if ( v89 )
          _interlockedbittestandset((volatile signed __int32 *)Object + 30, 2u);
        else
          _interlockedbittestandreset((volatile signed __int32 *)Object + 30, 2u);
        goto LABEL_48;
      case ThreadQuerySetWin32StartAddress:
        return -1073741811;
      case ThreadZeroTlsCell:
        if ( ThreadInformationLength != 4 )
          return -1073741820;
        v52 = *(_DWORD *)ThreadInformation;
        v119 = *(_DWORD *)ThreadInformation;
        result = ObReferenceObjectByHandleWithTag(
                   ThreadHandle,
                   0x20u,
                   (POBJECT_TYPE)PsThreadType,
                   v9,
                   0x79517350u,
                   &Object,
                   0LL);
        v53 = result;
        v109 = result;
        if ( result < 0 )
          return result;
        v54 = (struct _KTHREAD *)Object;
        ObfDereferenceObjectWithTag(Object, 0x79517350u);
        if ( v54 != CurrentThread )
          return -1073741811;
        Process = v54->Process;
        v120 = (struct _KTHREAD *)Process;
        for ( i = (struct _EX_RUNDOWN_REF *)PsGetNextProcessThread(Process, 0LL);
              ;
              i = (struct _EX_RUNDOWN_REF *)PsGetNextProcessThread(Process, v57) )
        {
          Object = i;
          v57 = i;
          if ( !i )
            break;
          if ( ExAcquireRundownProtection_0(i + 159) )
          {
            Count = v57[30].Count;
            if ( Count )
            {
              v59 = Process[1].AffinityPadding[10];
              v60 = 0;
              if ( v59 )
              {
                v67 = *(_WORD *)(v59 + 8);
                if ( v67 == 332 || v67 == 452 )
                  v60 = 1;
              }
              v112 = v60;
              v61 = Count + 0x2000;
              if ( !v60 )
                v61 = 0LL;
              if ( v52 >= 0x40 )
              {
                if ( v52 < 0x440 )
                {
                  if ( v59 && ((v65 = *(_WORD *)(v59 + 8), v65 == 332) || v65 == 452) )
                  {
                    if ( v61 )
                    {
                      v66 = *(unsigned int *)(v61 + 3988);
                      if ( (_DWORD)v66 )
                        *(_DWORD *)(v66 + 4LL * (v52 - 64)) = 0;
                    }
                  }
                  else
                  {
                    v62 = *(_QWORD *)(Count + 6016);
                    v145 = v62;
                    if ( v62 )
                    {
                      v63 = v62 + 8LL * (v52 - 64);
                      if ( v63 >= 0x7FFFFFFF0000LL )
                        v63 = 0x7FFFFFFF0000LL;
                      *(_QWORD *)v63 = 0LL;
                    }
                  }
                }
              }
              else if ( v59 && ((v64 = *(_WORD *)(v59 + 8), v64 == 332) || v64 == 452) )
              {
                if ( v61 )
                  *(_DWORD *)(v61 + 4LL * v52 + 3600) = 0;
              }
              else
              {
                *(_QWORD *)(Count + 8LL * v52 + 5248) = 0LL;
              }
            }
            ExReleaseRundownProtection_0(v57 + 159);
          }
        }
        return v53;
      case ThreadIdealProcessor:
        if ( ThreadInformationLength != 4 )
          return -1073741820;
        v69 = *(_DWORD *)ThreadInformation;
        v121 = v69;
        if ( v69 > 0x40 )
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
          v70 = Object;
          v71 = KeSetIdealProcessorThread((PKTHREAD)Object, v69);
          if ( (v70[29] & 0x400) == 0 )
            PspWriteTebIdealProcessor(CurrentThread, v70);
          ObfDereferenceObjectWithTag(v70, 0x79517350u);
          return v71;
        }
        return result;
      case ThreadPriorityBoost:
        if ( ThreadInformationLength != 4 )
          return -1073741820;
        v83 = *(_DWORD *)ThreadInformation;
        v131 = *(_DWORD *)ThreadInformation;
        result = ObReferenceObjectByHandleWithTag(
                   ThreadHandle,
                   0x400u,
                   (POBJECT_TYPE)PsThreadType,
                   v9,
                   0x79517350u,
                   &Object,
                   0LL);
        v84 = result;
        if ( result >= 0 )
        {
          KeSetDisableBoostThread(Object, v83 != 0);
          ObfDereferenceObjectWithTag(v85, 0x79517350u);
          return v84;
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
        v109 = result;
        if ( result < 0 )
          return result;
        _InterlockedOr((volatile signed __int32 *)Object + 324, 4u);
        goto LABEL_220;
      case ThreadBreakOnTermination:
        if ( ThreadInformationLength != 4 )
          return -1073741820;
        v86 = *(_DWORD *)ThreadInformation;
        v132 = *(_DWORD *)ThreadInformation;
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
        v109 = result;
        if ( result < 0 )
          return result;
        if ( v86 )
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
        v36 = Object;
        *((_QWORD *)Object + 74) |= MEMORY[0xFFFFF780000003D8] | 3LL;
        goto LABEL_49;
      case ThreadIoPriority:
        if ( ((ThreadInformationLength - 4) & 0xFFFFFFFB) != 0 )
          return -1073741820;
        if ( ThreadInformationLength == 4 )
        {
          LODWORD(v41) = *(_DWORD *)ThreadInformation;
          v133 = *(_DWORD *)ThreadInformation;
          LOBYTE(v42) = 0;
        }
        else
        {
          v41 = *(_QWORD *)ThreadInformation;
          v139 = v41;
          v42 = HIDWORD(v41);
        }
        if ( (unsigned int)v41 >= 4 )
          return -1073741811;
        if ( (unsigned int)v41 < 3 )
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
          v43 = Object;
          if ( (_BYTE)v42 == 1 && ((*((_DWORD *)Object + 324) >> 9) & 7) < (int)v41 )
            IoBoostThreadIoPriority((KSPIN_LOCK *)Object, v41, 0);
          PsSetIoPriorityThread((__int64)v43, v41);
          ObfDereferenceObjectWithTag(v43, 0x79517350u);
          return 0;
        }
        return result;
      case ThreadPagePriority:
        if ( ThreadInformationLength != 4 )
          return -1073741820;
        v34 = *(_DWORD *)ThreadInformation;
        v142 = v34;
        if ( v34 > (unsigned int)MmGetDefaultPagePriority() || v34 < (unsigned int)MiCreateSystemWsles() )
          return -1073741811;
        result = ObReferenceObjectByHandleWithTag(v35, 0x20u, (POBJECT_TYPE)PsThreadType, v9, 0x79517350u, &Object, 0LL);
        if ( result < 0 )
          return result;
        PsSetPagePriorityThread((__int64)Object, v34);
        goto LABEL_48;
      case ThreadActualBasePriority:
        if ( ThreadInformationLength != 4 )
          return -1073741820;
        v38 = *(_DWORD *)ThreadInformation;
        Increment = v38;
        if ( (unsigned int)(v38 - 1) > 0x1E )
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
        v33 = Object;
        if ( v38 < 16
          || *(_BYTE *)(*((_QWORD *)Object + 68) + 1463LL) == 4
          || SeSinglePrivilegeCheck(SeIncreaseBasePriorityPrivilege, v9) )
        {
          KeSetActualBasePriorityThread((__int64)v33, (unsigned int)v38, v39, v40);
          v25 = v33;
        }
        else
        {
          v18 = -1073741727;
LABEL_42:
          v25 = v33;
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
          v72 = Object;
          if ( ExAcquireRundownProtection_0((PEX_RUNDOWN_REF)Object + 159) )
          {
            v73 = PspWow64SetContextThread((PETHREAD)v72);
            ExReleaseRundownProtection_0((PEX_RUNDOWN_REF)v72 + 159);
            ObfDereferenceObjectWithTag(v72, 0x79517350u);
            return v73;
          }
          else
          {
            ObfDereferenceObjectWithTag(v72, 0x79517350u);
            return -1073741749;
          }
        }
        return result;
      case ThreadGroupInformation:
        if ( ThreadInformationLength != 16 )
          return -1073741820;
        v148 = *(_OWORD *)ThreadInformation;
        if ( !KeVerifyGroupAffinity((__int64)&v148, 1) )
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
          v77 = *((_QWORD *)Object + 68);
          PspLockProcessSecurityShared(v77, (__int64)CurrentThread);
          v78 = *(_QWORD *)(v77 + 1296);
          v116 = (PVOID)v78;
          v79 = v78;
          if ( !v78
            || (ExAcquireResourceSharedLite((PERESOURCE)(v78 + 56), 1u), (*(_DWORD *)(v79 + 848) & 0x10) == 0)
            || (v90 = *(_QWORD *)(v79 + 8LL * WORD4(v148) + 624)) != 0 && ((unsigned __int64)v148 & v90) == (_QWORD)v148 )
          {
            v80 = Object;
            KeSetAffinityThread((__int64)Object, (__int64)&v148);
          }
          else
          {
            LODWORD(v7) = -1073741823;
            v80 = Object;
          }
          if ( v79 )
            ExReleaseResourceLite((PERESOURCE)(v79 + 56));
          PspUnlockProcessShared(v77, (__int64)CurrentThread);
          ObfDereferenceObjectWithTag(v80, 0x79517350u);
          return (int)v7;
        }
        return result;
      case ThreadUmsInformation:
        if ( ThreadInformationLength != 24 )
          return -1073741820;
        v143 = *(_OWORD *)ThreadInformation;
        v144 = *((_QWORD *)ThreadInformation + 2);
        if ( ThreadHandle == (HANDLE)-2LL )
        {
          v94 = CurrentThread;
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
          v94 = (struct _KTHREAD *)Object;
          ObfDereferenceObjectWithTag(Object, 0x79517350u);
        }
        if ( v94 != CurrentThread )
          return -1073741811;
        if ( (_DWORD)v143 == 1 )
          return PspAttachThreadToUmsCompletionList(v94, (__int64)&v143, v9, *(__int64 *)&ThreadInformationLength);
        if ( (_DWORD)v143 != 2 )
          return -1073741811;
        return PspDetachThreadFromUmsCompletionList(v94);
      case ThreadCounterProfiling:
        if ( ThreadInformationLength != 24 )
          return -1073741820;
        v123 = *(_OWORD *)ThreadInformation;
        v124 = *((_QWORD *)ThreadInformation + 2);
        v91 = v124;
        if ( (v124 & 3) != 0 )
          ExRaiseDatatypeMisalignment();
        if ( v124 >= 0x7FFFFFFF0000LL )
          v91 = 0x7FFFFFFF0000LL;
        *(_BYTE *)v91 = *(_BYTE *)v91;
        *(_BYTE *)(v91 + 447) = *(_BYTE *)(v91 + 447);
        result = ObReferenceObjectByHandleWithTag(v6, 0x20u, (POBJECT_TYPE)PsThreadType, v9, 0x79517350u, &Object, 0LL);
        if ( result >= 0 )
        {
          v92 = Object;
          if ( Object == KeGetCurrentThread() )
          {
            if ( HIDWORD(v123) )
              v93 = KeEnableProfiling(Object, DWORD2(v123), v123, v124);
            else
              v93 = KeDisableProfiling((__int64)Object, v124);
          }
          else
          {
            v93 = -1073741637;
          }
          ObfDereferenceObjectWithTag(v92, 0x79517350u);
          return v93;
        }
        return result;
      case ThreadIdealProcessorEx:
        if ( ThreadInformationLength != 4 )
          return -1073741820;
        v113 = *(_PROCESSOR_NUMBER *)ThreadInformation;
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
        v33 = Object;
        v18 = KeSetIdealProcessorThreadByNumber((struct _KTHREAD *)Object, &v113, &v113);
        if ( v18 >= 0 )
        {
          if ( (*((_DWORD *)v33 + 29) & 0x400) == 0 )
            PspWriteTebIdealProcessor(CurrentThread, v33);
          *(_PROCESSOR_NUMBER *)v5 = v113;
        }
        goto LABEL_42;
      case ThreadCpuAccountingInformation:
        if ( ThreadHandle != (HANDLE)-2LL )
          return -1073741811;
        if ( ThreadInformationLength != 8 )
          return -1073741820;
        v146 = *(HANDLE *)ThreadInformation;
        if ( v146 )
        {
          result = ObReferenceObjectByHandleWithTag(v146, 2u, MmSessionObjectType, v9, 0x79517350u, &v125, 0LL);
          if ( result < 0 )
            return result;
          v7 = (struct _LIST_ENTRY *)v125;
          v96 = *((_QWORD *)v125 + 4);
          if ( !v96 )
          {
            ObfDereferenceObjectWithTag(v125, 0x79517350u);
            return -1073740715;
          }
          if ( !KeSetThreadChargeOnlySchedulingGroup((__int64)CurrentThread, v96) )
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
      case ThreadHeterogeneousCpuPolicy:
        if ( ThreadInformationLength != 4 )
          return -1073741820;
        v97 = MEMORY[4];
        v134 = MEMORY[4];
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
        KeSetUserHeteroCpuPolicyThread((__int64)Object, v97);
        goto LABEL_28;
      case ThreadNameInformation:
        v111 = 0;
        v44 = 0LL;
        v118 = 0LL;
        P = 0LL;
        v110 = 0;
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
          v109 = v18;
          if ( v18 < 0 )
            goto LABEL_88;
          v111 = 1;
          if ( v9 )
          {
            v141 = 0LL;
            if ( v5 >= 0x7FFFFFFF0000LL )
              v5 = 0x7FFFFFFF0000LL;
            v45 = *(_PROCESSOR_NUMBER *)v5;
            LODWORD(v141) = v45;
            v46 = *(_QWORD *)(v5 + 8);
            *((_QWORD *)&v141 + 1) = v46;
            *(_OWORD *)Src = v141;
            if ( v45.Group )
            {
              if ( (v46 & 1) != 0 )
                ExRaiseDatatypeMisalignment();
              v47 = v45.Group + v46;
              if ( v47 > 0x7FFFFFFF0000LL || v47 < v46 )
                MEMORY[0x7FFFFFFF0000] = 0;
            }
            v18 = v109;
            v44 = v118;
          }
          else
          {
            *(_OWORD *)Src = *(_OWORD *)v5;
          }
          v48 = (unsigned __int16)Src[0];
          if ( ((__int64)Src[0] & 1) != 0 || LOWORD(Src[0]) > WORD1(Src[0]) )
          {
            v18 = -1073741811;
          }
          else
          {
            PoolWithTag = (char *)ExAllocatePoolWithTag(NonPagedPoolNx, LOWORD(Src[0]) + 16LL, 0x6D4E6854u);
            v44 = PoolWithTag;
            v118 = PoolWithTag;
            if ( PoolWithTag )
            {
              v50 = PoolWithTag + 16;
              v44[1] = v50;
              *(_WORD *)v44 = v48;
              *((_WORD *)v44 + 1) = v48;
              memmove(v50, Src[1], v48);
              v51 = Object;
              PspLockThreadSecurityExclusive((__int64)Object, (__int64)CurrentThread);
              v110 = 1;
              P = (PVOID)*((_QWORD *)v51 + 194);
              *((_QWORD *)v51 + 194) = v44;
              v44 = 0LL;
              v118 = 0LL;
              EtwTraceThreadSetName(v51);
              goto LABEL_88;
            }
            v18 = -1073741670;
          }
        }
        else
        {
          v18 = -1073741820;
        }
        v109 = v18;
LABEL_88:
        if ( v110 )
          PspUnlockThreadSecurityExclusive((__int64)Object, (__int64)CurrentThread);
        if ( v111 )
          ObfDereferenceObjectWithTag(Object, 0x79517350u);
        if ( P )
          ExFreePoolWithTag(P, 0x6D4E6854u);
        if ( v44 )
          ExFreePoolWithTag(v44, 0x6D4E6854u);
        return v18;
      case ThreadSelectedCpuSets:
        if ( (ThreadInformationLength & 7) != 0 || ThreadInformationLength > 0xA0 )
          return -1073741820;
        memmove(v149, ThreadInformation, ThreadInformationLength);
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
        v14 = KeSetSelectedCpuSetsThread((__int64)Object, ThreadInformationLength >> 3, v149);
        goto LABEL_21;
      case ThreadDynamicCodePolicyInfo:
        if ( ThreadHandle != (HANDLE)-2LL )
          return -1073741811;
        if ( ThreadInformationLength != 4 )
          return -1073741820;
        v135 = *(_DWORD *)ThreadInformation;
        if ( v135 == 1 )
        {
          if ( ((__int64)CurrentThread->Process[2].ReadyListHead.Blink & 0x200) != 0 )
          {
            _InterlockedOr((volatile signed __int32 *)&CurrentThread[1].SwapListEntry + 2, 0x40000u);
            return 0;
          }
          return -1073741790;
        }
        if ( v135 )
          return -1073741811;
        _InterlockedAnd((volatile signed __int32 *)&CurrentThread[1].SwapListEntry + 2, 0xFFFBFFFF);
        return 0;
      case ThreadExplicitCaseSensitivity:
        if ( ThreadInformationLength != 4 )
          return -1073741820;
        v98 = *(_DWORD *)ThreadInformation;
        v138 = *(_DWORD *)ThreadInformation;
        if ( !v9 )
          goto LABEL_287;
        if ( !SeSinglePrivilegeCheck(SeDebugPrivilege, v9) )
          return -1073741727;
        if ( !RtlTestProtectedAccess(
                (PS_PROTECTION)SBYTE2(CurrentThread->Process[2].Header.WaitListHead.Flink),
                (PS_PROTECTION)81) )
          return -1073741790;
        v6 = Handle;
LABEL_287:
        result = ObReferenceObjectByHandleWithTag(v6, 0x20u, (POBJECT_TYPE)PsThreadType, v9, 0x79517350u, &Object, 0LL);
        v109 = result;
        if ( result >= 0 )
        {
          if ( v98 )
            _InterlockedOr((volatile signed __int32 *)Object + 324, 0x80000u);
          else
            _InterlockedAnd((volatile signed __int32 *)Object + 324, 0xFFF7FFFF);
LABEL_220:
          ObfDereferenceObjectWithTag(Object, 0x79517350u);
          return v109;
        }
        return result;
      case ThreadDbgkWerReportActive:
        if ( ThreadInformationLength != 4 )
          return -1073741820;
        v99 = *(_DWORD *)ThreadInformation;
        v137 = *(_DWORD *)ThreadInformation;
        result = ObReferenceObjectByHandleWithTag(
                   ThreadHandle,
                   0x20u,
                   (POBJECT_TYPE)PsThreadType,
                   v9,
                   0x79517350u,
                   &Object,
                   0LL);
        v109 = result;
        if ( result < 0 )
          return result;
        if ( v99 )
          _InterlockedOr((volatile signed __int32 *)Object + 324, 0x200000u);
        else
          _InterlockedAnd((volatile signed __int32 *)Object + 324, 0xFFDFFFFF);
        goto LABEL_220;
      case ThreadAttachContainer:
        if ( ThreadHandle != (HANDLE)-2LL )
          return -1073741811;
        if ( ThreadInformationLength != 8 )
          return -1073741820;
        v126 = *(HANDLE *)ThreadInformation;
        v100 = KeGetCurrentThread();
        if ( v126 )
        {
          Object = v100;
          if ( v100[1].WaitBlock[3].WaitListEntry.Blink == (struct _LIST_ENTRY *)-3LL )
          {
            result = ObReferenceObjectByHandleWithTag(v126, 0x20u, (POBJECT_TYPE)PsJobType, v9, 0x6D497350u, &v116, 0LL);
            if ( result < 0 )
              return result;
            v102 = (struct _LIST_ENTRY *)v116;
            if ( (*((_DWORD *)v116 + 331) & 2) != 0 )
            {
              v103 = IoThreadToProcess((PETHREAD)Object);
              PsGetProcessSilo((__int64)v103);
              IsSiloInSilo = PspIsSiloInSilo(v102);
              v105 = v102;
              if ( !IsSiloInSilo
                || (EffectiveServerSilo = PsGetEffectiveServerSilo((__int64)v102),
                    ProcessServerSilo = PsGetProcessServerSilo((__int64)v103),
                    v105 = v102,
                    ProcessServerSilo != EffectiveServerSilo) )
              {
                ObfDereferenceObjectWithTag(v105, 0x6D497350u);
                return -1073741811;
              }
              PsAttachSiloToCurrentThread(v102);
              return 0;
            }
            ObfDereferenceObjectWithTag(v116, 0x6D497350u);
          }
        }
        else if ( v100[1].WaitBlock[3].WaitListEntry.Blink != (struct _LIST_ENTRY *)-3LL )
        {
          v101 = PsAttachSiloToCurrentThread((struct _LIST_ENTRY *)0xFFFFFFFFFFFFFFFDLL);
          v37 = 1833530192;
          v36 = v101;
LABEL_50:
          ObfDereferenceObjectWithTag(v36, v37);
          return 0;
        }
        break;
      case ThreadManageWritesToExecutableMemory:
        return -1073741637;
      case ThreadPowerThrottlingState:
        if ( ThreadInformationLength != 12 )
          return -1073741820;
        v140 = *(_QWORD *)ThreadInformation;
        v87 = *((_DWORD *)ThreadInformation + 2);
        if ( (_DWORD)v140 != 1 || (v140 & 0xFFFFFFFE00000000uLL) != 0 || (~HIDWORD(v140) & v87) != 0 )
          return -1073741811;
        if ( (v140 & 0x100000000LL) != 0 )
        {
          if ( (v87 & 1) != 0 )
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
      case ThreadWorkloadClass:
        if ( ThreadHandle != (HANDLE)-2LL || v9 )
          return -1073741790;
        if ( ThreadInformationLength != 4 )
          return -1073741820;
        v136 = *(_DWORD *)ThreadInformation;
        if ( v136 >= 2 )
          return -1073741811;
        v88 = KeGetCurrentThread();
        *((_DWORD *)&v88[1].SwapListEntry + 3) ^= (*((_DWORD *)&v88[1].SwapListEntry + 3) ^ (v136 << 11)) & 0x800;
        KeUpdateThreadCpuSets((__int64)v88);
        return 0;
      default:
        return -1073741821;
    }
    return -1073741811;
  }
  if ( ThreadInformationLength != 8 )
    return -1073741820;
  v12 = *(void **)ThreadInformation;
  v147 = *(_QWORD *)ThreadInformation;
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
