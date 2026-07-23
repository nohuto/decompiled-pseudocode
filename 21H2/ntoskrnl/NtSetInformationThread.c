/*
 * XREFs of NtSetInformationThread @ 0x140714260
 * Callers:
 *     <none>
 * Callees:
 *     IoThreadToProcess @ 0x140224230 (IoThreadToProcess.c)
 *     KeSetThreadChargeOnlySchedulingGroup @ 0x140225090 (KeSetThreadChargeOnlySchedulingGroup.c)
 *     PspUnlockThreadSecurityExclusive @ 0x14023B9E8 (PspUnlockThreadSecurityExclusive.c)
 *     MiCreateSystemWsles @ 0x14023F040 (MiCreateSystemWsles.c)
 *     PspLockThreadSecurityExclusive @ 0x14023F0A0 (PspLockThreadSecurityExclusive.c)
 *     HalPutDmaAdapter @ 0x14023FBE0 (HalPutDmaAdapter.c)
 *     ExReleaseRundownProtection @ 0x14026A490 (ExReleaseRundownProtection.c)
 *     ExAcquireRundownProtection @ 0x14026A950 (ExAcquireRundownProtection.c)
 *     PsAttachSiloToCurrentThread @ 0x14026D090 (PsAttachSiloToCurrentThread.c)
 *     MmGetDefaultPagePriority @ 0x14027348C (MmGetDefaultPagePriority.c)
 *     KeSetPriorityThread @ 0x140279050 (KeSetPriorityThread.c)
 *     KeSetBasePriorityThread @ 0x14027A3D0 (KeSetBasePriorityThread.c)
 *     PsGetProcessServerSilo @ 0x14027DFF0 (PsGetProcessServerSilo.c)
 *     PsGetServerSiloGlobals @ 0x140285C94 (PsGetServerSiloGlobals.c)
 *     KeSetLegacyAffinityThread @ 0x14029DE40 (KeSetLegacyAffinityThread.c)
 *     PsImpersonateContainerOfThread @ 0x1402C0590 (PsImpersonateContainerOfThread.c)
 *     PspRevertContainerImpersonation @ 0x1402C43E0 (PspRevertContainerImpersonation.c)
 *     KeSetActualBasePriorityThread @ 0x1402D4E00 (KeSetActualBasePriorityThread.c)
 *     PsGetEffectiveServerSilo @ 0x1402F7010 (PsGetEffectiveServerSilo.c)
 *     PsSetIoPriorityThread @ 0x140302040 (PsSetIoPriorityThread.c)
 *     PsSetPagePriorityThread @ 0x140302334 (PsSetPagePriorityThread.c)
 *     ObfDereferenceObjectWithTag @ 0x140355E90 (ObfDereferenceObjectWithTag.c)
 *     ExReleaseResourceLite @ 0x140356140 (ExReleaseResourceLite.c)
 *     ExAcquireResourceSharedLite @ 0x140356CB0 (ExAcquireResourceSharedLite.c)
 *     IoBoostThreadIoPriority @ 0x140363380 (IoBoostThreadIoPriority.c)
 *     KeVerifyGroupAffinity @ 0x140377D04 (KeVerifyGroupAffinity.c)
 *     KeSetIdealProcessorThread @ 0x14037A370 (KeSetIdealProcessorThread.c)
 *     KeSetIdealProcessorThreadByNumber @ 0x14037A3C4 (KeSetIdealProcessorThreadByNumber.c)
 *     KeSetAffinityThread @ 0x14039951C (KeSetAffinityThread.c)
 *     PspUnlockProcessShared @ 0x140399890 (PspUnlockProcessShared.c)
 *     PspLockProcessSecurityShared @ 0x140399FA0 (PspLockProcessSecurityShared.c)
 *     KeUpdateThreadCpuSets @ 0x1403C627C (KeUpdateThreadCpuSets.c)
 *     __security_check_cookie @ 0x1403D05D0 (__security_check_cookie.c)
 *     memmove @ 0x140414040 (memmove.c)
 *     KeSetUserHeteroCpuPolicyThread @ 0x14051357C (KeSetUserHeteroCpuPolicyThread.c)
 *     KeDisableProfiling @ 0x14051BD5C (KeDisableProfiling.c)
 *     KeSetSelectedCpuSetsThread @ 0x14051CE20 (KeSetSelectedCpuSetsThread.c)
 *     PsGetProcessSilo @ 0x1405815E0 (PsGetProcessSilo.c)
 *     PspAttachThreadToUmsCompletionList @ 0x140581994 (PspAttachThreadToUmsCompletionList.c)
 *     PspDetachThreadFromUmsCompletionList @ 0x140581AFC (PspDetachThreadFromUmsCompletionList.c)
 *     PspWow64SetContextThread @ 0x1405F5270 (PspWow64SetContextThread.c)
 *     PspIsSiloInSilo @ 0x14061E42C (PspIsSiloInSilo.c)
 *     PspWriteTebIdealProcessor @ 0x14063C4B8 (PspWriteTebIdealProcessor.c)
 *     PsAssignImpersonationToken @ 0x14064FBF0 (PsAssignImpersonationToken.c)
 *     PspThreadFromTicket @ 0x14068F5A0 (PspThreadFromTicket.c)
 *     SeSinglePrivilegeCheck @ 0x140693750 (SeSinglePrivilegeCheck.c)
 *     RtlTestProtectedAccess @ 0x14069708C (RtlTestProtectedAccess.c)
 *     EtwTraceThreadSetName @ 0x1406B157C (EtwTraceThreadSetName.c)
 *     ObReferenceObjectByHandleWithTag @ 0x140707F60 (ObReferenceObjectByHandleWithTag.c)
 *     PsGetNextProcessThread @ 0x1407216D0 (PsGetNextProcessThread.c)
 *     KeSetDisableBoostThread @ 0x140772D3C (KeSetDisableBoostThread.c)
 *     PspSetThreadPpmPolicy @ 0x140773D10 (PspSetThreadPpmPolicy.c)
 *     ExRaiseDatatypeMisalignment @ 0x14077BFB0 (ExRaiseDatatypeMisalignment.c)
 *     SeCheckPrivilegedObject @ 0x14078E020 (SeCheckPrivilegedObject.c)
 *     KeEnableProfiling @ 0x1408BC13C (KeEnableProfiling.c)
 *     ExFreePoolWithTag @ 0x1409B5010 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x1409B5160 (ExAllocatePoolWithTag.c)
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
  ULONG v42; // eax
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
  PVOID v69; // r14
  NTSTATUS v70; // ebx
  __int64 v71; // rdi
  PVOID v72; // r14
  struct _EX_RUNDOWN_REF *v73; // r15
  __int64 v74; // r14
  __int64 v75; // rax
  __int64 v76; // rdi
  PVOID v77; // rsi
  _QWORD *ServerSiloGlobals; // rax
  __int64 v79; // rdx
  LONG v80; // esi
  NTSTATUS v81; // edi
  PVOID v82; // rcx
  LONG v83; // edi
  int v84; // edx
  struct _KTHREAD *v85; // rcx
  char v86; // di
  __int64 v87; // rcx
  unsigned __int64 v88; // rcx
  PVOID v89; // rdi
  NTSTATUS v90; // ebx
  struct _KTHREAD *v91; // rbx
  __int64 v93; // rdx
  unsigned int v94; // edi
  LONG v95; // edi
  LONG v96; // edi
  struct _KTHREAD *v97; // rax
  struct _LIST_ENTRY *v98; // rax
  struct _LIST_ENTRY *v99; // rdi
  PEPROCESS v100; // rsi
  __int64 ProcessSilo; // rax
  char IsSiloInSilo; // al
  struct _LIST_ENTRY *v103; // rcx
  __int64 EffectiveServerSilo; // rbx
  __int64 ProcessServerSilo; // rax
  PVOID Object; // [rsp+40h] [rbp-238h] BYREF
  NTSTATUS v107; // [rsp+48h] [rbp-230h]
  char v108; // [rsp+4Ch] [rbp-22Ch]
  char v109; // [rsp+4Dh] [rbp-22Bh]
  bool v110; // [rsp+4Eh] [rbp-22Ah]
  _PROCESSOR_NUMBER v111; // [rsp+54h] [rbp-224h] BYREF
  char v112; // [rsp+58h] [rbp-220h]
  LONG Increment; // [rsp+5Ch] [rbp-21Ch]
  PVOID v114; // [rsp+60h] [rbp-218h] BYREF
  HANDLE Handle; // [rsp+68h] [rbp-210h]
  _QWORD *v116; // [rsp+70h] [rbp-208h]
  LONG v117; // [rsp+78h] [rbp-200h]
  struct _KTHREAD *v118; // [rsp+80h] [rbp-1F8h]
  unsigned int v119; // [rsp+88h] [rbp-1F0h]
  PVOID P; // [rsp+90h] [rbp-1E8h]
  __int128 v121; // [rsp+98h] [rbp-1E0h]
  unsigned __int64 v122; // [rsp+A8h] [rbp-1D0h]
  PVOID v123; // [rsp+B0h] [rbp-1C8h] BYREF
  HANDLE v124; // [rsp+B8h] [rbp-1C0h]
  __int64 v125; // [rsp+C0h] [rbp-1B8h] BYREF
  PADAPTER_OBJECT DmaAdapter; // [rsp+C8h] [rbp-1B0h] BYREF
  void *Src[2]; // [rsp+D0h] [rbp-1A8h]
  KPRIORITY v128; // [rsp+E0h] [rbp-198h]
  LONG v129; // [rsp+E4h] [rbp-194h]
  LONG v130; // [rsp+E8h] [rbp-190h]
  LONG v131; // [rsp+ECh] [rbp-18Ch]
  int v132; // [rsp+F0h] [rbp-188h]
  LONG v133; // [rsp+F4h] [rbp-184h]
  unsigned int v134; // [rsp+F8h] [rbp-180h]
  LONG v135; // [rsp+FCh] [rbp-17Ch]
  LONG v136; // [rsp+100h] [rbp-178h]
  unsigned __int64 v137; // [rsp+108h] [rbp-170h]
  __int64 v138; // [rsp+120h] [rbp-158h]
  __int128 v139; // [rsp+130h] [rbp-148h]
  unsigned int v140; // [rsp+140h] [rbp-138h]
  __int128 v141; // [rsp+148h] [rbp-130h] BYREF
  __int64 v142; // [rsp+158h] [rbp-120h]
  __int64 v143; // [rsp+160h] [rbp-118h]
  HANDLE v144; // [rsp+168h] [rbp-110h]
  __int64 v145; // [rsp+170h] [rbp-108h]
  __int128 v146; // [rsp+178h] [rbp-100h] BYREF
  char v147[160]; // [rsp+190h] [rbp-E8h] BYREF

  v5 = (unsigned __int64)ThreadInformation;
  v6 = ThreadHandle;
  Handle = ThreadHandle;
  v7 = 0LL;
  Object = 0LL;
  v146 = 0LL;
  v117 = 0;
  v119 = 0;
  v114 = 0LL;
  v137 = 0LL;
  v121 = 0LL;
  v122 = 0LL;
  v111 = 0;
  v123 = 0LL;
  *(_OWORD *)Src = 0LL;
  v125 = 0LL;
  v141 = 0LL;
  v142 = 0LL;
  CurrentThread = KeGetCurrentThread();
  v118 = CurrentThread;
  v9 = CurrentThread->$6BEBF485330D18E60173AA6D991B35AC::gap0[10];
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
      v125 = *(_QWORD *)ThreadInformation;
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
        v18 = PspThreadFromTicket(&v125, (__int64 *)&DmaAdapter);
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
        v128 = v65;
        if ( (unsigned int)(v65 - 1) > 0x1E )
          return -1073741811;
        if ( v65 < 16 )
          goto LABEL_138;
        if ( !(unsigned __int8)((__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD))SeCheckPrivilegedObject)(
                                 SeIncreaseBasePriorityPrivilege,
                                 ThreadHandle,
                                 1024LL) )
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
        v107 = result;
        if ( result < 0 )
          return result;
        v26 = Object;
        v27 = *((_QWORD *)Object + 68);
        v28 = (unsigned int)(v25 + 16);
        if ( (unsigned int)v28 > 0x20 || (v29 = 0x10007C001LL, !_bittest64(&v29, v28)) )
        {
          ServerSiloGlobals = PsGetServerSiloGlobals(0LL);
          if ( v79 != ServerSiloGlobals[110] && *(_BYTE *)(v27 + 1463) != 4 )
          {
            v18 = -1073741811;
            v24 = v26;
            goto LABEL_29;
          }
        }
        v30 = *(_DWORD **)(v27 + 1296);
        v114 = v30;
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
        v18 = v107;
        goto LABEL_42;
      case ThreadAffinityMask:
        if ( ThreadInformationLength != 8 )
          return -1073741820;
        v71 = *(_QWORD *)ThreadInformation;
        *(_QWORD *)&v146 = v71;
        if ( !v71 )
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
          v72 = Object;
          v73 = (struct _EX_RUNDOWN_REF *)*((_QWORD *)Object + 68);
          if ( ExAcquireRundownProtection(v73 + 139) )
          {
            if ( !KeSetLegacyAffinityThread((__int64)v72, v71) )
              LODWORD(v7) = -1073741811;
            ExReleaseRundownProtection(v73 + 139);
          }
          else
          {
            LODWORD(v7) = -1073741558;
          }
          ObfDereferenceObjectWithTag(v72, 0x79517350u);
          return (int)v7;
        }
        return result;
      case ThreadEnableAlignmentFaultFixup:
        if ( ThreadInformationLength != 1 )
          return -1073741820;
        v86 = *(_BYTE *)ThreadInformation;
        v112 = *(_BYTE *)ThreadInformation;
        result = ObReferenceObjectByHandleWithTag(
                   ThreadHandle,
                   0x20u,
                   (POBJECT_TYPE)PsThreadType,
                   v9,
                   0x79517350u,
                   &Object,
                   0LL);
        v107 = result;
        if ( result < 0 )
          return result;
        if ( v86 )
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
        v117 = *(_DWORD *)ThreadInformation;
        result = ObReferenceObjectByHandleWithTag(
                   ThreadHandle,
                   0x20u,
                   (POBJECT_TYPE)PsThreadType,
                   v9,
                   0x79517350u,
                   &Object,
                   0LL);
        v50 = result;
        v107 = result;
        if ( result < 0 )
          return result;
        v51 = (struct _KTHREAD *)Object;
        ObfDereferenceObjectWithTag(Object, 0x79517350u);
        if ( v51 != CurrentThread )
          return -1073741811;
        Process = v51->Process;
        v118 = (struct _KTHREAD *)Process;
        for ( i = (struct _EX_RUNDOWN_REF *)PsGetNextProcessThread(Process, 0LL);
              ;
              i = (struct _EX_RUNDOWN_REF *)PsGetNextProcessThread(Process, v54) )
        {
          Object = i;
          v54 = i;
          if ( !i )
            break;
          if ( ExAcquireRundownProtection(i + 159) )
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
              v110 = v57;
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
                    v143 = v59;
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
            ExReleaseRundownProtection(v54 + 159);
          }
        }
        return v50;
      case ThreadIdealProcessor:
        if ( ThreadInformationLength != 4 )
          return -1073741820;
        v66 = *(_DWORD *)ThreadInformation;
        v119 = v66;
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
            PspWriteTebIdealProcessor((__int64)CurrentThread, (__int64)v67);
          ObfDereferenceObjectWithTag(v67, 0x79517350u);
          return v68;
        }
        return result;
      case ThreadPriorityBoost:
        if ( ThreadInformationLength != 4 )
          return -1073741820;
        v80 = *(_DWORD *)ThreadInformation;
        v129 = *(_DWORD *)ThreadInformation;
        result = ObReferenceObjectByHandleWithTag(
                   ThreadHandle,
                   0x400u,
                   (POBJECT_TYPE)PsThreadType,
                   v9,
                   0x79517350u,
                   &Object,
                   0LL);
        v81 = result;
        if ( result >= 0 )
        {
          KeSetDisableBoostThread(Object, v80 != 0);
          ObfDereferenceObjectWithTag(v82, 0x79517350u);
          return v81;
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
        v107 = result;
        if ( result < 0 )
          return result;
        _InterlockedOr((volatile signed __int32 *)Object + 324, 4u);
        goto LABEL_220;
      case ThreadBreakOnTermination:
        if ( ThreadInformationLength != 4 )
          return -1073741820;
        v83 = *(_DWORD *)ThreadInformation;
        v130 = *(_DWORD *)ThreadInformation;
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
        v107 = result;
        if ( result < 0 )
          return result;
        if ( v83 )
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
          v131 = *(_DWORD *)ThreadInformation;
          LOBYTE(v39) = 0;
        }
        else
        {
          v38 = *(_QWORD *)ThreadInformation;
          v137 = v38;
          v39 = HIDWORD(v38);
        }
        if ( (unsigned int)v38 >= 4 )
          return -1073741811;
        if ( (unsigned int)v38 < 3 )
          goto LABEL_64;
        if ( !(unsigned __int8)((__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD))SeCheckPrivilegedObject)(
                                 SeIncreaseBasePriorityPrivilege,
                                 ThreadHandle,
                                 32LL) )
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
        v140 = v33;
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
          v69 = Object;
          if ( ExAcquireRundownProtection((PEX_RUNDOWN_REF)Object + 159) )
          {
            v70 = PspWow64SetContextThread((PETHREAD)v69, (ULONG *)v5, ThreadInformationLength, v9);
            ExReleaseRundownProtection((PEX_RUNDOWN_REF)v69 + 159);
            ObfDereferenceObjectWithTag(v69, 0x79517350u);
            return v70;
          }
          else
          {
            ObfDereferenceObjectWithTag(v69, 0x79517350u);
            return -1073741749;
          }
        }
        return result;
      case ThreadGroupInformation:
        if ( ThreadInformationLength != 16 )
          return -1073741820;
        v146 = *(_OWORD *)ThreadInformation;
        if ( !KeVerifyGroupAffinity((__int64)&v146, 1) )
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
          v74 = *((_QWORD *)Object + 68);
          PspLockProcessSecurityShared(v74, (__int64)CurrentThread);
          v75 = *(_QWORD *)(v74 + 1296);
          v114 = (PVOID)v75;
          v76 = v75;
          if ( !v75
            || (ExAcquireResourceSharedLite((PERESOURCE)(v75 + 56), 1u), (*(_DWORD *)(v76 + 848) & 0x10) == 0)
            || (v87 = *(_QWORD *)(v76 + 8LL * WORD4(v146) + 624)) != 0 && ((unsigned __int64)v146 & v87) == (_QWORD)v146 )
          {
            v77 = Object;
            KeSetAffinityThread((__int64)Object, (__int64)&v146);
          }
          else
          {
            LODWORD(v7) = -1073741823;
            v77 = Object;
          }
          if ( v76 )
            ExReleaseResourceLite((PERESOURCE)(v76 + 56));
          PspUnlockProcessShared(v74, (__int64)CurrentThread);
          ObfDereferenceObjectWithTag(v77, 0x79517350u);
          return (int)v7;
        }
        return result;
      case ThreadUmsInformation:
        if ( ThreadInformationLength != 24 )
          return -1073741820;
        v141 = *(_OWORD *)ThreadInformation;
        v142 = *((_QWORD *)ThreadInformation + 2);
        if ( ThreadHandle == (HANDLE)-2LL )
        {
          v91 = CurrentThread;
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
          v91 = (struct _KTHREAD *)Object;
          ObfDereferenceObjectWithTag(Object, 0x79517350u);
        }
        if ( v91 != CurrentThread )
          return -1073741811;
        if ( (_DWORD)v141 == 1 )
          return PspAttachThreadToUmsCompletionList(v91, (__int64)&v141, v9, *(__int64 *)&ThreadInformationLength);
        if ( (_DWORD)v141 != 2 )
          return -1073741811;
        return PspDetachThreadFromUmsCompletionList(v91);
      case ThreadCounterProfiling:
        if ( ThreadInformationLength != 24 )
          return -1073741820;
        v121 = *(_OWORD *)ThreadInformation;
        v122 = *((_QWORD *)ThreadInformation + 2);
        v88 = v122;
        if ( (v122 & 3) != 0 )
          ExRaiseDatatypeMisalignment();
        if ( v122 >= 0x7FFFFFFF0000LL )
          v88 = 0x7FFFFFFF0000LL;
        *(_BYTE *)v88 = *(_BYTE *)v88;
        *(_BYTE *)(v88 + 447) = *(_BYTE *)(v88 + 447);
        result = ObReferenceObjectByHandleWithTag(v6, 0x20u, (POBJECT_TYPE)PsThreadType, v9, 0x79517350u, &Object, 0LL);
        if ( result >= 0 )
        {
          v89 = Object;
          if ( Object == KeGetCurrentThread() )
          {
            if ( HIDWORD(v121) )
              v90 = KeEnableProfiling(Object, DWORD2(v121), v121, v122);
            else
              v90 = KeDisableProfiling((__int64)Object, v122);
          }
          else
          {
            v90 = -1073741637;
          }
          ObfDereferenceObjectWithTag(v89, 0x79517350u);
          return v90;
        }
        return result;
      case ThreadIdealProcessorEx:
        if ( ThreadInformationLength != 4 )
          return -1073741820;
        v111 = *(_PROCESSOR_NUMBER *)ThreadInformation;
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
        v18 = KeSetIdealProcessorThreadByNumber((struct _KTHREAD *)Object, &v111, &v111);
        if ( v18 >= 0 )
        {
          if ( (*((_DWORD *)v32 + 29) & 0x400) == 0 )
            PspWriteTebIdealProcessor((__int64)CurrentThread, (__int64)v32);
          *(_PROCESSOR_NUMBER *)v5 = v111;
        }
        goto LABEL_42;
      case ThreadCpuAccountingInformation:
        if ( ThreadHandle != (HANDLE)-2LL )
          return -1073741811;
        if ( ThreadInformationLength != 8 )
          return -1073741820;
        v144 = *(HANDLE *)ThreadInformation;
        if ( v144 )
        {
          result = ObReferenceObjectByHandleWithTag(v144, 2u, MmSessionObjectType, v9, 0x79517350u, &v123, 0LL);
          if ( result < 0 )
            return result;
          v7 = (struct _LIST_ENTRY *)v123;
          v93 = *((_QWORD *)v123 + 4);
          if ( !v93 )
          {
            ObfDereferenceObjectWithTag(v123, 0x79517350u);
            return -1073740715;
          }
          if ( !KeSetThreadChargeOnlySchedulingGroup((__int64)CurrentThread, v93) )
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
        v94 = MEMORY[4];
        v132 = MEMORY[4];
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
        KeSetUserHeteroCpuPolicyThread((__int64)Object, v94);
        goto LABEL_28;
      case ThreadNameInformation:
        v109 = 0;
        v41 = 0LL;
        v116 = 0LL;
        P = 0LL;
        v108 = 0;
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
          v107 = v18;
          if ( v18 < 0 )
            goto LABEL_88;
          v109 = 1;
          if ( v9 )
          {
            v139 = 0LL;
            if ( v5 >= 0x7FFFFFFF0000LL )
              v5 = 0x7FFFFFFF0000LL;
            v42 = *(_DWORD *)v5;
            LODWORD(v139) = v42;
            v43 = *(_QWORD *)(v5 + 8);
            *((_QWORD *)&v139 + 1) = v43;
            *(_OWORD *)Src = v139;
            if ( (_WORD)v42 )
            {
              if ( (v43 & 1) != 0 )
                ExRaiseDatatypeMisalignment();
              v44 = (unsigned __int16)v42 + v43;
              if ( v44 > 0x7FFFFFFF0000LL || v44 < v43 )
                MEMORY[0x7FFFFFFF0000] = 0;
            }
            v18 = v107;
            v41 = v116;
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
            v116 = PoolWithTag;
            if ( PoolWithTag )
            {
              v47 = PoolWithTag + 16;
              v41[1] = v47;
              *(_WORD *)v41 = v45;
              *((_WORD *)v41 + 1) = v45;
              memmove(v47, Src[1], v45);
              v48 = Object;
              PspLockThreadSecurityExclusive((__int64)Object, (__int64)CurrentThread);
              v108 = 1;
              P = (PVOID)*((_QWORD *)v48 + 194);
              *((_QWORD *)v48 + 194) = v41;
              v41 = 0LL;
              v116 = 0LL;
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
        v107 = v18;
LABEL_88:
        if ( v108 )
          PspUnlockThreadSecurityExclusive((__int64)Object, (__int64)CurrentThread);
        if ( v109 )
          ObfDereferenceObjectWithTag(Object, 0x79517350u);
        if ( P )
          ExFreePoolWithTag(P, 0x6D4E6854u);
        if ( v41 )
          ExFreePoolWithTag(v41, 0x6D4E6854u);
        return v18;
      case ThreadSelectedCpuSets:
        if ( (ThreadInformationLength & 7) != 0 || ThreadInformationLength > 0xA0 )
          return -1073741820;
        memmove(v147, ThreadInformation, ThreadInformationLength);
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
        v14 = KeSetSelectedCpuSetsThread((__int64)Object, ThreadInformationLength >> 3, v147);
        goto LABEL_21;
      case ThreadDynamicCodePolicyInfo:
        if ( ThreadHandle != (HANDLE)-2LL )
          return -1073741811;
        if ( ThreadInformationLength != 4 )
          return -1073741820;
        v133 = *(_DWORD *)ThreadInformation;
        if ( v133 == 1 )
        {
          if ( ((__int64)CurrentThread->Process[2].ReadyListHead.Blink & 0x200) != 0 )
          {
            _InterlockedOr((volatile signed __int32 *)&CurrentThread[1].SwapListEntry + 2, 0x40000u);
            return 0;
          }
          return -1073741790;
        }
        if ( v133 )
          return -1073741811;
        _InterlockedAnd((volatile signed __int32 *)&CurrentThread[1].SwapListEntry + 2, 0xFFFBFFFF);
        return 0;
      case ThreadExplicitCaseSensitivity:
        if ( ThreadInformationLength != 4 )
          return -1073741820;
        v95 = *(_DWORD *)ThreadInformation;
        v136 = *(_DWORD *)ThreadInformation;
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
        v107 = result;
        if ( result >= 0 )
        {
          if ( v95 )
            _InterlockedOr((volatile signed __int32 *)Object + 324, 0x80000u);
          else
            _InterlockedAnd((volatile signed __int32 *)Object + 324, 0xFFF7FFFF);
LABEL_220:
          ObfDereferenceObjectWithTag(Object, 0x79517350u);
          return v107;
        }
        return result;
      case ThreadDbgkWerReportActive:
        if ( ThreadInformationLength != 4 )
          return -1073741820;
        v96 = *(_DWORD *)ThreadInformation;
        v135 = *(_DWORD *)ThreadInformation;
        result = ObReferenceObjectByHandleWithTag(
                   ThreadHandle,
                   0x20u,
                   (POBJECT_TYPE)PsThreadType,
                   v9,
                   0x79517350u,
                   &Object,
                   0LL);
        v107 = result;
        if ( result < 0 )
          return result;
        if ( v96 )
          _InterlockedOr((volatile signed __int32 *)Object + 324, 0x200000u);
        else
          _InterlockedAnd((volatile signed __int32 *)Object + 324, 0xFFDFFFFF);
        goto LABEL_220;
      case ThreadAttachContainer:
        if ( ThreadHandle != (HANDLE)-2LL )
          return -1073741811;
        if ( ThreadInformationLength != 8 )
          return -1073741820;
        v124 = *(HANDLE *)ThreadInformation;
        v97 = KeGetCurrentThread();
        if ( v124 )
        {
          Object = v97;
          if ( v97[1].WaitBlock[3].WaitListEntry.Blink == (struct _LIST_ENTRY *)-3LL )
          {
            result = ObReferenceObjectByHandleWithTag(v124, 0x20u, (POBJECT_TYPE)PsJobType, v9, 0x6D497350u, &v114, 0LL);
            if ( result < 0 )
              return result;
            v99 = (struct _LIST_ENTRY *)v114;
            if ( (*((_DWORD *)v114 + 331) & 2) != 0 )
            {
              v100 = IoThreadToProcess((PETHREAD)Object);
              ProcessSilo = PsGetProcessSilo((__int64)v100);
              IsSiloInSilo = PspIsSiloInSilo((__int64)v99, ProcessSilo);
              v103 = v99;
              if ( !IsSiloInSilo
                || (EffectiveServerSilo = PsGetEffectiveServerSilo((__int64)v99),
                    ProcessServerSilo = PsGetProcessServerSilo((__int64)v100),
                    v103 = v99,
                    ProcessServerSilo != EffectiveServerSilo) )
              {
                ObfDereferenceObjectWithTag(v103, 0x6D497350u);
                return -1073741811;
              }
              PsAttachSiloToCurrentThread(v99);
              return 0;
            }
            ObfDereferenceObjectWithTag(v114, 0x6D497350u);
          }
        }
        else if ( v97[1].WaitBlock[3].WaitListEntry.Blink != (struct _LIST_ENTRY *)-3LL )
        {
          v98 = PsAttachSiloToCurrentThread((struct _LIST_ENTRY *)0xFFFFFFFFFFFFFFFDLL);
          v36 = 1833530192;
          v35 = v98;
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
        v138 = *(_QWORD *)ThreadInformation;
        v84 = *((_DWORD *)ThreadInformation + 2);
        if ( (_DWORD)v138 != 1 || (v138 & 0xFFFFFFFE00000000uLL) != 0 || (~HIDWORD(v138) & v84) != 0 )
          return -1073741811;
        if ( (v138 & 0x100000000LL) != 0 )
        {
          if ( (v84 & 1) != 0 )
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
        v134 = *(_DWORD *)ThreadInformation;
        if ( v134 >= 2 )
          return -1073741811;
        v85 = KeGetCurrentThread();
        *((_DWORD *)&v85[1].SwapListEntry + 3) ^= (*((_DWORD *)&v85[1].SwapListEntry + 3) ^ (v134 << 11)) & 0x800;
        KeUpdateThreadCpuSets((__int64)v85);
        return 0;
      default:
        return -1073741821;
    }
    return -1073741811;
  }
  if ( ThreadInformationLength != 8 )
    return -1073741820;
  v12 = *(void **)ThreadInformation;
  v145 = *(_QWORD *)ThreadInformation;
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
