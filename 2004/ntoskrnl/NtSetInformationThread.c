/*
 * XREFs of NtSetInformationThread @ 0x140673B60
 * Callers:
 *     <none>
 * Callees:
 *     HalPutDmaAdapter @ 0x140208270 (HalPutDmaAdapter.c)
 *     ObfDereferenceObjectWithTag @ 0x140208290 (ObfDereferenceObjectWithTag.c)
 *     ExReleaseResourceLite @ 0x140208540 (ExReleaseResourceLite.c)
 *     ExAcquireResourceSharedLite @ 0x1402090B0 (ExAcquireResourceSharedLite.c)
 *     PsImpersonateContainerOfThread @ 0x1402123A0 (PsImpersonateContainerOfThread.c)
 *     KeSetActualBasePriorityThread @ 0x140213990 (KeSetActualBasePriorityThread.c)
 *     PspRevertContainerImpersonation @ 0x1402149A0 (PspRevertContainerImpersonation.c)
 *     MiCreateSystemWsles @ 0x14025A450 (MiCreateSystemWsles.c)
 *     PsGetServerSiloGlobals @ 0x14026D714 (PsGetServerSiloGlobals.c)
 *     PsAttachSiloToCurrentThread @ 0x1402720A0 (PsAttachSiloToCurrentThread.c)
 *     PsGetEffectiveServerSilo @ 0x14027B2E0 (PsGetEffectiveServerSilo.c)
 *     PsGetProcessServerSilo @ 0x14027D870 (PsGetProcessServerSilo.c)
 *     IoThreadToProcess @ 0x140296BB0 (IoThreadToProcess.c)
 *     ExReleaseRundownProtection_0 @ 0x140298F30 (ExReleaseRundownProtection_0.c)
 *     ExAcquireRundownProtection_0 @ 0x1402993F0 (ExAcquireRundownProtection_0.c)
 *     PsSetIoPriorityThread @ 0x1402C78CC (PsSetIoPriorityThread.c)
 *     PsSetPagePriorityThread @ 0x1402C7BC4 (PsSetPagePriorityThread.c)
 *     IoBoostThreadIoPriority @ 0x1402D668C (IoBoostThreadIoPriority.c)
 *     KeSetPriorityThread @ 0x1402EBF90 (KeSetPriorityThread.c)
 *     KeSetBasePriorityThread @ 0x1402ED310 (KeSetBasePriorityThread.c)
 *     KeSetThreadChargeOnlySchedulingGroup @ 0x1402ED880 (KeSetThreadChargeOnlySchedulingGroup.c)
 *     MmGetDefaultPagePriority @ 0x1402FE7D4 (MmGetDefaultPagePriority.c)
 *     KeSetLegacyAffinityThread @ 0x14030B910 (KeSetLegacyAffinityThread.c)
 *     PspUnlockThreadSecurityExclusive @ 0x14034A1F4 (PspUnlockThreadSecurityExclusive.c)
 *     PspLockThreadSecurityExclusive @ 0x14034E484 (PspLockThreadSecurityExclusive.c)
 *     KeVerifyGroupAffinity @ 0x140375D94 (KeVerifyGroupAffinity.c)
 *     KeSetIdealProcessorThread @ 0x1403788F0 (KeSetIdealProcessorThread.c)
 *     KeSetIdealProcessorThreadByNumber @ 0x140378944 (KeSetIdealProcessorThreadByNumber.c)
 *     KeSetAffinityThread @ 0x140396A9C (KeSetAffinityThread.c)
 *     PspUnlockProcessShared @ 0x140396E50 (PspUnlockProcessShared.c)
 *     PspLockProcessSecurityShared @ 0x140397560 (PspLockProcessSecurityShared.c)
 *     KeUpdateThreadCpuSets @ 0x1403C2F7C (KeUpdateThreadCpuSets.c)
 *     __security_check_cookie @ 0x1403CCE60 (__security_check_cookie.c)
 *     memmove @ 0x140409FC0 (memmove.c)
 *     KeSetUserHeteroCpuPolicyThread @ 0x14050DECC (KeSetUserHeteroCpuPolicyThread.c)
 *     KeDisableProfiling @ 0x140516674 (KeDisableProfiling.c)
 *     KeSetSelectedCpuSetsThread @ 0x140517730 (KeSetSelectedCpuSetsThread.c)
 *     PsGetProcessSilo @ 0x14057BF60 (PsGetProcessSilo.c)
 *     PspAttachThreadToUmsCompletionList @ 0x14057C2A4 (PspAttachThreadToUmsCompletionList.c)
 *     PspDetachThreadFromUmsCompletionList @ 0x14057C40C (PspDetachThreadFromUmsCompletionList.c)
 *     ObReferenceObjectByHandleWithTag @ 0x1405F5C50 (ObReferenceObjectByHandleWithTag.c)
 *     EtwTraceThreadSetName @ 0x140605388 (EtwTraceThreadSetName.c)
 *     PspThreadFromTicket @ 0x140666420 (PspThreadFromTicket.c)
 *     SeSinglePrivilegeCheck @ 0x140667BA0 (SeSinglePrivilegeCheck.c)
 *     PsAssignImpersonationToken @ 0x140681090 (PsAssignImpersonationToken.c)
 *     PsGetNextProcessThread @ 0x1406A0120 (PsGetNextProcessThread.c)
 *     PspWriteTebIdealProcessor @ 0x1406B559C (PspWriteTebIdealProcessor.c)
 *     RtlTestProtectedAccess @ 0x1406B5F2C (RtlTestProtectedAccess.c)
 *     PspWow64SetContextThread @ 0x1406E572C (PspWow64SetContextThread.c)
 *     PspIsSiloInSilo @ 0x14070CFEC (PspIsSiloInSilo.c)
 *     KeSetDisableBoostThread @ 0x1407603EC (KeSetDisableBoostThread.c)
 *     PspSetThreadPpmPolicy @ 0x140761670 (PspSetThreadPpmPolicy.c)
 *     ExRaiseDatatypeMisalignment @ 0x140769830 (ExRaiseDatatypeMisalignment.c)
 *     SeCheckPrivilegedObject @ 0x14077BA84 (SeCheckPrivilegedObject.c)
 *     KeEnableProfiling @ 0x1408B8AD4 (KeEnableProfiling.c)
 *     ExFreePoolWithTag @ 0x1409B1140 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x1409B1160 (ExAllocatePoolWithTag.c)
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
  __int64 v38; // r8
  _DWORD *v39; // r9
  unsigned __int64 v40; // rdi
  unsigned __int64 v41; // rsi
  PVOID v42; // rbx
  _QWORD *v43; // r14
  _PROCESSOR_NUMBER v44; // eax
  unsigned __int64 v45; // rcx
  unsigned __int64 v46; // rdx
  unsigned __int16 v47; // di
  char *PoolWithTag; // rax
  void *v49; // rax
  PVOID v50; // rdi
  unsigned int v51; // r14d
  NTSTATUS v52; // r12d
  struct _KTHREAD *v53; // rdi
  _KPROCESS *Process; // rsi
  struct _EX_RUNDOWN_REF *i; // rax
  struct _EX_RUNDOWN_REF *v56; // rdi
  unsigned __int64 Count; // rcx
  unsigned __int64 v58; // rdx
  bool v59; // al
  unsigned __int64 v60; // r8
  __int64 v61; // rdx
  unsigned __int64 v62; // rax
  __int16 v63; // ax
  __int16 v64; // ax
  __int64 v65; // rdx
  __int16 v66; // ax
  KPRIORITY v67; // edi
  unsigned int v68; // edi
  _DWORD *v69; // rbx
  NTSTATUS v70; // edi
  PVOID v71; // r14
  NTSTATUS v72; // ebx
  __int64 v73; // rdi
  PVOID v74; // r14
  struct _EX_RUNDOWN_REF *v75; // r15
  __int64 v76; // r14
  __int64 v77; // rax
  __int64 v78; // rdi
  PVOID v79; // rsi
  _QWORD *ServerSiloGlobals; // rax
  __int64 v81; // rdx
  LONG v82; // esi
  NTSTATUS v83; // edi
  PVOID v84; // rcx
  LONG v85; // edi
  int v86; // edx
  struct _KTHREAD *v87; // rcx
  char v88; // di
  __int64 v89; // rcx
  unsigned __int64 v90; // rcx
  PVOID v91; // rdi
  NTSTATUS v92; // ebx
  struct _KTHREAD *v93; // rbx
  __int64 v95; // rdx
  unsigned int v96; // edi
  LONG v97; // edi
  LONG v98; // edi
  struct _KTHREAD *v99; // rax
  struct _LIST_ENTRY *v100; // rax
  struct _LIST_ENTRY *v101; // rdi
  PEPROCESS v102; // rsi
  char IsSiloInSilo; // al
  struct _LIST_ENTRY *v104; // rcx
  __int64 EffectiveServerSilo; // rbx
  __int64 ProcessServerSilo; // rax
  PVOID Object; // [rsp+40h] [rbp-238h] BYREF
  NTSTATUS v108; // [rsp+48h] [rbp-230h]
  char v109; // [rsp+4Ch] [rbp-22Ch]
  char v110; // [rsp+4Dh] [rbp-22Bh]
  bool v111; // [rsp+4Eh] [rbp-22Ah]
  _PROCESSOR_NUMBER v112; // [rsp+54h] [rbp-224h] BYREF
  char v113; // [rsp+58h] [rbp-220h]
  LONG Increment; // [rsp+5Ch] [rbp-21Ch]
  PVOID v115; // [rsp+60h] [rbp-218h] BYREF
  HANDLE Handle; // [rsp+68h] [rbp-210h]
  _QWORD *v117; // [rsp+70h] [rbp-208h]
  LONG v118; // [rsp+78h] [rbp-200h]
  struct _KTHREAD *v119; // [rsp+80h] [rbp-1F8h]
  unsigned int v120; // [rsp+88h] [rbp-1F0h]
  PVOID P; // [rsp+90h] [rbp-1E8h]
  __int128 v122; // [rsp+98h] [rbp-1E0h]
  unsigned __int64 v123; // [rsp+A8h] [rbp-1D0h]
  PVOID v124; // [rsp+B0h] [rbp-1C8h] BYREF
  HANDLE v125; // [rsp+B8h] [rbp-1C0h]
  __int64 v126; // [rsp+C0h] [rbp-1B8h] BYREF
  PADAPTER_OBJECT DmaAdapter; // [rsp+C8h] [rbp-1B0h] BYREF
  void *Src[2]; // [rsp+D0h] [rbp-1A8h]
  KPRIORITY v129; // [rsp+E0h] [rbp-198h]
  LONG v130; // [rsp+E4h] [rbp-194h]
  LONG v131; // [rsp+E8h] [rbp-190h]
  LONG v132; // [rsp+ECh] [rbp-18Ch]
  int v133; // [rsp+F0h] [rbp-188h]
  LONG v134; // [rsp+F4h] [rbp-184h]
  unsigned int v135; // [rsp+F8h] [rbp-180h]
  LONG v136; // [rsp+FCh] [rbp-17Ch]
  LONG v137; // [rsp+100h] [rbp-178h]
  unsigned __int64 v138; // [rsp+108h] [rbp-170h]
  __int64 v139; // [rsp+120h] [rbp-158h]
  __int128 v140; // [rsp+130h] [rbp-148h]
  unsigned int v141; // [rsp+140h] [rbp-138h]
  __int128 v142; // [rsp+148h] [rbp-130h] BYREF
  __int64 v143; // [rsp+158h] [rbp-120h]
  __int64 v144; // [rsp+160h] [rbp-118h]
  HANDLE v145; // [rsp+168h] [rbp-110h]
  __int64 v146; // [rsp+170h] [rbp-108h]
  __int128 v147; // [rsp+178h] [rbp-100h] BYREF
  char v148[160]; // [rsp+190h] [rbp-E8h] BYREF

  v5 = (unsigned __int64)ThreadInformation;
  v6 = ThreadHandle;
  Handle = ThreadHandle;
  v7 = 0LL;
  Object = 0LL;
  v147 = 0LL;
  v118 = 0;
  v120 = 0;
  v115 = 0LL;
  v138 = 0LL;
  v122 = 0LL;
  v123 = 0LL;
  v112 = 0;
  v124 = 0LL;
  *(_OWORD *)Src = 0LL;
  v126 = 0LL;
  v142 = 0LL;
  v143 = 0LL;
  CurrentThread = KeGetCurrentThread();
  v119 = CurrentThread;
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
      v126 = *(_QWORD *)ThreadInformation;
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
        v18 = PspThreadFromTicket(&v126, (__int64 *)&DmaAdapter);
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
        v67 = *(_DWORD *)ThreadInformation;
        v129 = v67;
        if ( (unsigned int)(v67 - 1) > 0x1E )
          return -1073741811;
        if ( v67 < 16 )
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
        KeSetPriorityThread((PKTHREAD)Object, v67);
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
        v108 = result;
        if ( result < 0 )
          return result;
        v26 = Object;
        v27 = *((_QWORD *)Object + 68);
        v28 = (unsigned int)(v25 + 16);
        if ( (unsigned int)v28 > 0x20 || (v29 = 0x10007C001LL, !_bittest64(&v29, v28)) )
        {
          ServerSiloGlobals = PsGetServerSiloGlobals(0LL);
          if ( v81 != ServerSiloGlobals[110] && *(_BYTE *)(v27 + 1463) != 4 )
          {
            v18 = -1073741811;
            v24 = v26;
            goto LABEL_29;
          }
        }
        v30 = *(_DWORD **)(v27 + 1296);
        v115 = v30;
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
        v18 = v108;
        goto LABEL_42;
      case ThreadAffinityMask:
        if ( ThreadInformationLength != 8 )
          return -1073741820;
        v73 = *(_QWORD *)ThreadInformation;
        *(_QWORD *)&v147 = v73;
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
        v88 = *(_BYTE *)ThreadInformation;
        v113 = *(_BYTE *)ThreadInformation;
        result = ObReferenceObjectByHandleWithTag(
                   ThreadHandle,
                   0x20u,
                   (POBJECT_TYPE)PsThreadType,
                   v9,
                   0x79517350u,
                   &Object,
                   0LL);
        v108 = result;
        if ( result < 0 )
          return result;
        if ( v88 )
          _interlockedbittestandset((volatile signed __int32 *)Object + 30, 2u);
        else
          _interlockedbittestandreset((volatile signed __int32 *)Object + 30, 2u);
        goto LABEL_48;
      case ThreadQuerySetWin32StartAddress:
        return -1073741811;
      case ThreadZeroTlsCell:
        if ( ThreadInformationLength != 4 )
          return -1073741820;
        v51 = *(_DWORD *)ThreadInformation;
        v118 = *(_DWORD *)ThreadInformation;
        result = ObReferenceObjectByHandleWithTag(
                   ThreadHandle,
                   0x20u,
                   (POBJECT_TYPE)PsThreadType,
                   v9,
                   0x79517350u,
                   &Object,
                   0LL);
        v52 = result;
        v108 = result;
        if ( result < 0 )
          return result;
        v53 = (struct _KTHREAD *)Object;
        ObfDereferenceObjectWithTag(Object, 0x79517350u);
        if ( v53 != CurrentThread )
          return -1073741811;
        Process = v53->Process;
        v119 = (struct _KTHREAD *)Process;
        for ( i = (struct _EX_RUNDOWN_REF *)PsGetNextProcessThread(Process, 0LL);
              ;
              i = (struct _EX_RUNDOWN_REF *)PsGetNextProcessThread(Process, v56) )
        {
          Object = i;
          v56 = i;
          if ( !i )
            break;
          if ( ExAcquireRundownProtection_0(i + 159) )
          {
            Count = v56[30].Count;
            if ( Count )
            {
              v58 = Process[1].AffinityPadding[10];
              v59 = 0;
              if ( v58 )
              {
                v66 = *(_WORD *)(v58 + 8);
                if ( v66 == 332 || v66 == 452 )
                  v59 = 1;
              }
              v111 = v59;
              v60 = Count + 0x2000;
              if ( !v59 )
                v60 = 0LL;
              if ( v51 >= 0x40 )
              {
                if ( v51 < 0x440 )
                {
                  if ( v58 && ((v64 = *(_WORD *)(v58 + 8), v64 == 332) || v64 == 452) )
                  {
                    if ( v60 )
                    {
                      v65 = *(unsigned int *)(v60 + 3988);
                      if ( (_DWORD)v65 )
                        *(_DWORD *)(v65 + 4LL * (v51 - 64)) = 0;
                    }
                  }
                  else
                  {
                    v61 = *(_QWORD *)(Count + 6016);
                    v144 = v61;
                    if ( v61 )
                    {
                      v62 = v61 + 8LL * (v51 - 64);
                      if ( v62 >= 0x7FFFFFFF0000LL )
                        v62 = 0x7FFFFFFF0000LL;
                      *(_QWORD *)v62 = 0LL;
                    }
                  }
                }
              }
              else if ( v58 && ((v63 = *(_WORD *)(v58 + 8), v63 == 332) || v63 == 452) )
              {
                if ( v60 )
                  *(_DWORD *)(v60 + 4LL * v51 + 3600) = 0;
              }
              else
              {
                *(_QWORD *)(Count + 8LL * v51 + 5248) = 0LL;
              }
            }
            ExReleaseRundownProtection_0(v56 + 159);
          }
        }
        return v52;
      case ThreadIdealProcessor:
        if ( ThreadInformationLength != 4 )
          return -1073741820;
        v68 = *(_DWORD *)ThreadInformation;
        v120 = v68;
        if ( v68 > 0x40 )
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
          v69 = Object;
          v70 = KeSetIdealProcessorThread((PKTHREAD)Object, v68);
          if ( (v69[29] & 0x400) == 0 )
            PspWriteTebIdealProcessor(CurrentThread, v69);
          ObfDereferenceObjectWithTag(v69, 0x79517350u);
          return v70;
        }
        return result;
      case ThreadPriorityBoost:
        if ( ThreadInformationLength != 4 )
          return -1073741820;
        v82 = *(_DWORD *)ThreadInformation;
        v130 = *(_DWORD *)ThreadInformation;
        result = ObReferenceObjectByHandleWithTag(
                   ThreadHandle,
                   0x400u,
                   (POBJECT_TYPE)PsThreadType,
                   v9,
                   0x79517350u,
                   &Object,
                   0LL);
        v83 = result;
        if ( result >= 0 )
        {
          KeSetDisableBoostThread(Object, v82 != 0);
          ObfDereferenceObjectWithTag(v84, 0x79517350u);
          return v83;
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
        v108 = result;
        if ( result < 0 )
          return result;
        _InterlockedOr((volatile signed __int32 *)Object + 324, 4u);
        goto LABEL_220;
      case ThreadBreakOnTermination:
        if ( ThreadInformationLength != 4 )
          return -1073741820;
        v85 = *(_DWORD *)ThreadInformation;
        v131 = *(_DWORD *)ThreadInformation;
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
        v108 = result;
        if ( result < 0 )
          return result;
        if ( v85 )
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
          LODWORD(v40) = *(_DWORD *)ThreadInformation;
          v132 = *(_DWORD *)ThreadInformation;
          LOBYTE(v41) = 0;
        }
        else
        {
          v40 = *(_QWORD *)ThreadInformation;
          v138 = v40;
          v41 = HIDWORD(v40);
        }
        if ( (unsigned int)v40 >= 4 )
          return -1073741811;
        if ( (unsigned int)v40 < 3 )
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
          v42 = Object;
          if ( (_BYTE)v41 == 1 && ((*((_DWORD *)Object + 324) >> 9) & 7) < (int)v40 )
            IoBoostThreadIoPriority((KSPIN_LOCK *)Object, v40, 0);
          PsSetIoPriorityThread((__int64)v42, v40);
          ObfDereferenceObjectWithTag(v42, 0x79517350u);
          return 0;
        }
        return result;
      case ThreadPagePriority:
        if ( ThreadInformationLength != 4 )
          return -1073741820;
        v33 = *(_DWORD *)ThreadInformation;
        v141 = v33;
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
          KeSetActualBasePriorityThread((__int64)v32, (unsigned int)v37, v38, v39);
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
            v72 = PspWow64SetContextThread((PETHREAD)v71);
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
        v147 = *(_OWORD *)ThreadInformation;
        if ( !KeVerifyGroupAffinity((__int64)&v147, 1) )
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
          v115 = (PVOID)v77;
          v78 = v77;
          if ( !v77
            || (ExAcquireResourceSharedLite((PERESOURCE)(v77 + 56), 1u), (*(_DWORD *)(v78 + 848) & 0x10) == 0)
            || (v89 = *(_QWORD *)(v78 + 8LL * WORD4(v147) + 624)) != 0 && ((unsigned __int64)v147 & v89) == (_QWORD)v147 )
          {
            v79 = Object;
            KeSetAffinityThread((__int64)Object, (__int64)&v147);
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
        v142 = *(_OWORD *)ThreadInformation;
        v143 = *((_QWORD *)ThreadInformation + 2);
        if ( ThreadHandle == (HANDLE)-2LL )
        {
          v93 = CurrentThread;
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
          v93 = (struct _KTHREAD *)Object;
          ObfDereferenceObjectWithTag(Object, 0x79517350u);
        }
        if ( v93 != CurrentThread )
          return -1073741811;
        if ( (_DWORD)v142 == 1 )
          return PspAttachThreadToUmsCompletionList(v93, (__int64)&v142, v9, *(__int64 *)&ThreadInformationLength);
        if ( (_DWORD)v142 != 2 )
          return -1073741811;
        return PspDetachThreadFromUmsCompletionList(v93);
      case ThreadCounterProfiling:
        if ( ThreadInformationLength != 24 )
          return -1073741820;
        v122 = *(_OWORD *)ThreadInformation;
        v123 = *((_QWORD *)ThreadInformation + 2);
        v90 = v123;
        if ( (v123 & 3) != 0 )
          ExRaiseDatatypeMisalignment();
        if ( v123 >= 0x7FFFFFFF0000LL )
          v90 = 0x7FFFFFFF0000LL;
        *(_BYTE *)v90 = *(_BYTE *)v90;
        *(_BYTE *)(v90 + 447) = *(_BYTE *)(v90 + 447);
        result = ObReferenceObjectByHandleWithTag(v6, 0x20u, (POBJECT_TYPE)PsThreadType, v9, 0x79517350u, &Object, 0LL);
        if ( result >= 0 )
        {
          v91 = Object;
          if ( Object == KeGetCurrentThread() )
          {
            if ( HIDWORD(v122) )
              v92 = KeEnableProfiling(Object, DWORD2(v122), v122, v123);
            else
              v92 = KeDisableProfiling((__int64)Object, v123);
          }
          else
          {
            v92 = -1073741637;
          }
          ObfDereferenceObjectWithTag(v91, 0x79517350u);
          return v92;
        }
        return result;
      case ThreadIdealProcessorEx:
        if ( ThreadInformationLength != 4 )
          return -1073741820;
        v112 = *(_PROCESSOR_NUMBER *)ThreadInformation;
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
        v18 = KeSetIdealProcessorThreadByNumber((struct _KTHREAD *)Object, &v112, &v112);
        if ( v18 >= 0 )
        {
          if ( (*((_DWORD *)v32 + 29) & 0x400) == 0 )
            PspWriteTebIdealProcessor(CurrentThread, v32);
          *(_PROCESSOR_NUMBER *)v5 = v112;
        }
        goto LABEL_42;
      case ThreadCpuAccountingInformation:
        if ( ThreadHandle != (HANDLE)-2LL )
          return -1073741811;
        if ( ThreadInformationLength != 8 )
          return -1073741820;
        v145 = *(HANDLE *)ThreadInformation;
        if ( v145 )
        {
          result = ObReferenceObjectByHandleWithTag(v145, 2u, MmSessionObjectType, v9, 0x79517350u, &v124, 0LL);
          if ( result < 0 )
            return result;
          v7 = (struct _LIST_ENTRY *)v124;
          v95 = *((_QWORD *)v124 + 4);
          if ( !v95 )
          {
            ObfDereferenceObjectWithTag(v124, 0x79517350u);
            return -1073740715;
          }
          if ( !KeSetThreadChargeOnlySchedulingGroup((__int64)CurrentThread, v95) )
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
        v96 = MEMORY[4];
        v133 = MEMORY[4];
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
        KeSetUserHeteroCpuPolicyThread((__int64)Object, v96);
        goto LABEL_28;
      case ThreadNameInformation:
        v110 = 0;
        v43 = 0LL;
        v117 = 0LL;
        P = 0LL;
        v109 = 0;
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
          v108 = v18;
          if ( v18 < 0 )
            goto LABEL_88;
          v110 = 1;
          if ( v9 )
          {
            v140 = 0LL;
            if ( v5 >= 0x7FFFFFFF0000LL )
              v5 = 0x7FFFFFFF0000LL;
            v44 = *(_PROCESSOR_NUMBER *)v5;
            LODWORD(v140) = v44;
            v45 = *(_QWORD *)(v5 + 8);
            *((_QWORD *)&v140 + 1) = v45;
            *(_OWORD *)Src = v140;
            if ( v44.Group )
            {
              if ( (v45 & 1) != 0 )
                ExRaiseDatatypeMisalignment();
              v46 = v44.Group + v45;
              if ( v46 > 0x7FFFFFFF0000LL || v46 < v45 )
                MEMORY[0x7FFFFFFF0000] = 0;
            }
            v18 = v108;
            v43 = v117;
          }
          else
          {
            *(_OWORD *)Src = *(_OWORD *)v5;
          }
          v47 = (unsigned __int16)Src[0];
          if ( ((__int64)Src[0] & 1) != 0 || LOWORD(Src[0]) > WORD1(Src[0]) )
          {
            v18 = -1073741811;
          }
          else
          {
            PoolWithTag = (char *)ExAllocatePoolWithTag(NonPagedPoolNx, LOWORD(Src[0]) + 16LL, 0x6D4E6854u);
            v43 = PoolWithTag;
            v117 = PoolWithTag;
            if ( PoolWithTag )
            {
              v49 = PoolWithTag + 16;
              v43[1] = v49;
              *(_WORD *)v43 = v47;
              *((_WORD *)v43 + 1) = v47;
              memmove(v49, Src[1], v47);
              v50 = Object;
              PspLockThreadSecurityExclusive((__int64)Object, (__int64)CurrentThread);
              v109 = 1;
              P = (PVOID)*((_QWORD *)v50 + 194);
              *((_QWORD *)v50 + 194) = v43;
              v43 = 0LL;
              v117 = 0LL;
              EtwTraceThreadSetName((__int64)v50);
              goto LABEL_88;
            }
            v18 = -1073741670;
          }
        }
        else
        {
          v18 = -1073741820;
        }
        v108 = v18;
LABEL_88:
        if ( v109 )
          PspUnlockThreadSecurityExclusive((__int64)Object, (__int64)CurrentThread);
        if ( v110 )
          ObfDereferenceObjectWithTag(Object, 0x79517350u);
        if ( P )
          ExFreePoolWithTag(P, 0x6D4E6854u);
        if ( v43 )
          ExFreePoolWithTag(v43, 0x6D4E6854u);
        return v18;
      case ThreadSelectedCpuSets:
        if ( (ThreadInformationLength & 7) != 0 || ThreadInformationLength > 0xA0 )
          return -1073741820;
        memmove(v148, ThreadInformation, ThreadInformationLength);
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
        v14 = KeSetSelectedCpuSetsThread((__int64)Object, ThreadInformationLength >> 3, v148);
        goto LABEL_21;
      case ThreadDynamicCodePolicyInfo:
        if ( ThreadHandle != (HANDLE)-2LL )
          return -1073741811;
        if ( ThreadInformationLength != 4 )
          return -1073741820;
        v134 = *(_DWORD *)ThreadInformation;
        if ( v134 == 1 )
        {
          if ( ((__int64)CurrentThread->Process[2].ReadyListHead.Blink & 0x200) != 0 )
          {
            _InterlockedOr((volatile signed __int32 *)&CurrentThread[1].SwapListEntry + 2, 0x40000u);
            return 0;
          }
          return -1073741790;
        }
        if ( v134 )
          return -1073741811;
        _InterlockedAnd((volatile signed __int32 *)&CurrentThread[1].SwapListEntry + 2, 0xFFFBFFFF);
        return 0;
      case ThreadExplicitCaseSensitivity:
        if ( ThreadInformationLength != 4 )
          return -1073741820;
        v97 = *(_DWORD *)ThreadInformation;
        v137 = *(_DWORD *)ThreadInformation;
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
        v108 = result;
        if ( result >= 0 )
        {
          if ( v97 )
            _InterlockedOr((volatile signed __int32 *)Object + 324, 0x80000u);
          else
            _InterlockedAnd((volatile signed __int32 *)Object + 324, 0xFFF7FFFF);
LABEL_220:
          ObfDereferenceObjectWithTag(Object, 0x79517350u);
          return v108;
        }
        return result;
      case ThreadDbgkWerReportActive:
        if ( ThreadInformationLength != 4 )
          return -1073741820;
        v98 = *(_DWORD *)ThreadInformation;
        v136 = *(_DWORD *)ThreadInformation;
        result = ObReferenceObjectByHandleWithTag(
                   ThreadHandle,
                   0x20u,
                   (POBJECT_TYPE)PsThreadType,
                   v9,
                   0x79517350u,
                   &Object,
                   0LL);
        v108 = result;
        if ( result < 0 )
          return result;
        if ( v98 )
          _InterlockedOr((volatile signed __int32 *)Object + 324, 0x200000u);
        else
          _InterlockedAnd((volatile signed __int32 *)Object + 324, 0xFFDFFFFF);
        goto LABEL_220;
      case ThreadAttachContainer:
        if ( ThreadHandle != (HANDLE)-2LL )
          return -1073741811;
        if ( ThreadInformationLength != 8 )
          return -1073741820;
        v125 = *(HANDLE *)ThreadInformation;
        v99 = KeGetCurrentThread();
        if ( v125 )
        {
          Object = v99;
          if ( v99[1].WaitBlock[3].WaitListEntry.Blink == (struct _LIST_ENTRY *)-3LL )
          {
            result = ObReferenceObjectByHandleWithTag(v125, 0x20u, (POBJECT_TYPE)PsJobType, v9, 0x6D497350u, &v115, 0LL);
            if ( result < 0 )
              return result;
            v101 = (struct _LIST_ENTRY *)v115;
            if ( (*((_DWORD *)v115 + 331) & 2) != 0 )
            {
              v102 = IoThreadToProcess((PETHREAD)Object);
              PsGetProcessSilo((__int64)v102);
              IsSiloInSilo = PspIsSiloInSilo(v101);
              v104 = v101;
              if ( !IsSiloInSilo
                || (EffectiveServerSilo = PsGetEffectiveServerSilo((__int64)v101),
                    ProcessServerSilo = PsGetProcessServerSilo((__int64)v102),
                    v104 = v101,
                    ProcessServerSilo != EffectiveServerSilo) )
              {
                ObfDereferenceObjectWithTag(v104, 0x6D497350u);
                return -1073741811;
              }
              PsAttachSiloToCurrentThread(v101);
              return 0;
            }
            ObfDereferenceObjectWithTag(v115, 0x6D497350u);
          }
        }
        else if ( v99[1].WaitBlock[3].WaitListEntry.Blink != (struct _LIST_ENTRY *)-3LL )
        {
          v100 = PsAttachSiloToCurrentThread((struct _LIST_ENTRY *)0xFFFFFFFFFFFFFFFDLL);
          v36 = 1833530192;
          v35 = v100;
LABEL_50:
          ObfDereferenceObjectWithTag(v35, v36);
          return 0;
        }
        break;
      case ThreadManageWritesToExecutableMemory:
        return -1073741637;
      case ThreadPowerThrottlingState:
        if ( ThreadInformationLength != 12 )
          return -1073741820;
        v139 = *(_QWORD *)ThreadInformation;
        v86 = *((_DWORD *)ThreadInformation + 2);
        if ( (_DWORD)v139 != 1 || (v139 & 0xFFFFFFFE00000000uLL) != 0 || (~HIDWORD(v139) & v86) != 0 )
          return -1073741811;
        if ( (v139 & 0x100000000LL) != 0 )
        {
          if ( (v86 & 1) != 0 )
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
        v135 = *(_DWORD *)ThreadInformation;
        if ( v135 >= 2 )
          return -1073741811;
        v87 = KeGetCurrentThread();
        *((_DWORD *)&v87[1].SwapListEntry + 3) ^= (*((_DWORD *)&v87[1].SwapListEntry + 3) ^ (v135 << 11)) & 0x800;
        KeUpdateThreadCpuSets((__int64)v87);
        return 0;
      default:
        return -1073741821;
    }
    return -1073741811;
  }
  if ( ThreadInformationLength != 8 )
    return -1073741820;
  v12 = *(void **)ThreadInformation;
  v146 = *(_QWORD *)ThreadInformation;
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
