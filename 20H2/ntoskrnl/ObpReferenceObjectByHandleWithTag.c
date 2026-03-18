/*
 * XREFs of ObpReferenceObjectByHandleWithTag @ 0x140611900
 * Callers:
 *     ObReferenceObjectByHandleWithTag @ 0x140611880 (ObReferenceObjectByHandleWithTag.c)
 *     ObReferenceObjectByHandle @ 0x1406118C0 (ObReferenceObjectByHandle.c)
 *     ObpLookupObjectName @ 0x140614C20 (ObpLookupObjectName.c)
 *     MmFreeVirtualMemory @ 0x140624BF0 (MmFreeVirtualMemory.c)
 *     ExpWnfCaptureScopeInstanceId @ 0x140654CC8 (ExpWnfCaptureScopeInstanceId.c)
 *     PsReferencePartitionByHandle @ 0x140660764 (PsReferencePartitionByHandle.c)
 *     NtQueryInformationJobObject @ 0x140663E00 (NtQueryInformationJobObject.c)
 *     MiAllocateVirtualMemoryPrepare @ 0x14067C640 (MiAllocateVirtualMemoryPrepare.c)
 *     NtOpenProcessTokenEx @ 0x14067E870 (NtOpenProcessTokenEx.c)
 *     PspCreateThread @ 0x140686404 (PspCreateThread.c)
 *     NtCreateUserProcess @ 0x140690C20 (NtCreateUserProcess.c)
 *     NtCreateThreadEx @ 0x140692890 (NtCreateThreadEx.c)
 *     PspBuildCreateProcessContext @ 0x140694298 (PspBuildCreateProcessContext.c)
 *     PfpSourceGetPrefetchSupport @ 0x1406B96B8 (PfpSourceGetPrefetchSupport.c)
 *     MmProcessWorkingSetControl @ 0x1406C54D4 (MmProcessWorkingSetControl.c)
 *     PsCreateSystemThreadEx @ 0x1406EE080 (PsCreateSystemThreadEx.c)
 *     MmPrefetchVirtualMemory @ 0x1406F09B8 (MmPrefetchVirtualMemory.c)
 *     DbgkpCreateNotificationEvent @ 0x1407C62AC (DbgkpCreateNotificationEvent.c)
 *     HalpAcquirePccInterface @ 0x140868C14 (HalpAcquirePccInterface.c)
 *     VrpHandleIoctlGetVirtualRootKey @ 0x140885618 (VrpHandleIoctlGetVirtualRootKey.c)
 *     NtRemoveProcessDebug @ 0x140888BB0 (NtRemoveProcessDebug.c)
 *     DbgkpWerInitializeDeferredLiveDump @ 0x14088BE08 (DbgkpWerInitializeDeferredLiveDump.c)
 *     NtCreateEnclave @ 0x1408D6560 (NtCreateEnclave.c)
 *     PopSetSpecialRequest @ 0x1408E43CC (PopSetSpecialRequest.c)
 *     PspConvertSiloToServerSilo @ 0x1409088A4 (PspConvertSiloToServerSilo.c)
 *     NtAlertThread @ 0x14090EEF0 (NtAlertThread.c)
 * Callees:
 *     ExHandleLogBadReference @ 0x1402011B8 (ExHandleLogBadReference.c)
 *     ExReleaseRundownProtection_0 @ 0x140210D20 (ExReleaseRundownProtection_0.c)
 *     ExSlowReplenishHandleTableEntry @ 0x14021E830 (ExSlowReplenishHandleTableEntry.c)
 *     KeLeaveCriticalRegionThread @ 0x14021EB00 (KeLeaveCriticalRegionThread.c)
 *     ObfDereferenceObjectWithTag @ 0x140221210 (ObfDereferenceObjectWithTag.c)
 *     ObpIncrPointerCountEx @ 0x1402D99FC (ObpIncrPointerCountEx.c)
 *     ExFastReplenishHandleTableEntry @ 0x1403281B0 (ExFastReplenishHandleTableEntry.c)
 *     ExfUnblockPushLock @ 0x1403F7730 (ExfUnblockPushLock.c)
 *     KeBugCheckEx @ 0x1403FBCA0 (KeBugCheckEx.c)
 *     ObpPushStackInfo @ 0x140563258 (ObpPushStackInfo.c)
 *     ExpLookupHandleTableEntry @ 0x140611EF0 (ExpLookupHandleTableEntry.c)
 *     ObReferenceProcessHandleTable @ 0x140678474 (ObReferenceProcessHandleTable.c)
 *     ExpBlockOnLockedHandleEntry @ 0x1406A5EF8 (ExpBlockOnLockedHandleEntry.c)
 *     ObpAuditObjectAccess @ 0x1408DF304 (ObpAuditObjectAccess.c)
 *     ExpGetHandleExtraInfo @ 0x14094F360 (ExpGetHandleExtraInfo.c)
 *     VfCheckUserHandle @ 0x1409DD194 (VfCheckUserHandle.c)
 */

__int64 __fastcall ObpReferenceObjectByHandleWithTag(
        ULONG_PTR BugCheckParameter1,
        int a2,
        __int64 a3,
        char a4,
        ULONG Tag,
        _QWORD *a6,
        _DWORD *a7,
        _QWORD *a8)
{
  struct _KTHREAD *CurrentThread; // r15
  unsigned int v11; // ecx
  _KPROCESS *Process; // rdi
  ULONG_PTR v14; // r9
  unsigned __int64 *v15; // rax
  PVOID v16; // r8
  unsigned __int64 *v17; // rdi
  __int64 v18; // rcx
  signed __int64 v19; // rbp
  __int64 v20; // r14
  __int64 v21; // rax
  __int128 v22; // rt0
  unsigned __int8 v23; // tt
  unsigned __int64 v24; // rbx
  unsigned __int8 v25; // al
  int v26; // ecx
  int v27; // ebp
  __int64 v28; // r14
  char v29; // r10
  int v30; // r11d
  unsigned __int64 v32; // rcx
  unsigned int v33; // edi
  int v34; // r14d
  signed __int64 v35; // r8
  unsigned __int64 v36; // rcx
  __int64 v37; // r9
  __int64 v38; // rax
  signed __int64 v39; // rbx
  ULONG_PTR v40; // rdi
  signed __int64 BugCheckParameter4; // rbx
  int v42; // ecx
  _QWORD *HandleExtraInfo; // rax
  signed __int32 v44[8]; // [rsp+0h] [rbp-88h] BYREF
  unsigned __int64 v45[3]; // [rsp+30h] [rbp-58h] BYREF
  struct _EX_RUNDOWN_REF *v46; // [rsp+90h] [rbp+8h]
  char v50; // [rsp+B8h] [rbp+30h]
  __int64 v51; // [rsp+C8h] [rbp+40h]

  CurrentThread = KeGetCurrentThread();
  v11 = 0;
  v50 = 0;
  Process = CurrentThread->ApcState.Process;
  v46 = (struct _EX_RUNDOWN_REF *)Process;
  *a6 = 0LL;
  if ( a8 )
    *a8 = 0LL;
  if ( (BugCheckParameter1 & 0xFFFFFFFF80000000uLL) == 0xFFFFFFFF80000000uLL )
  {
    if ( BugCheckParameter1 == -1LL )
    {
      if ( (POBJECT_TYPE *)a3 != PsProcessType && a3 )
        return 3221225508LL;
      v40 = (ULONG_PTR)CurrentThread->ApcState.Process;
      if ( (a2 & 0xFFE00000) != 0 && a4 )
      {
        return (unsigned int)-1073741790;
      }
      else
      {
        if ( a7 )
        {
          a7[1] = 0x1FFFFF;
          *a7 = 0;
        }
        if ( ObpTraceFlags )
        {
          ObpPushStackInfo(v40 - 48, 1, 1u, Tag);
          v11 = 0;
        }
        BugCheckParameter4 = _InterlockedIncrement64((volatile signed __int64 *)(v40 - 48));
        if ( BugCheckParameter4 <= 1 )
          KeBugCheckEx(0x18u, 0LL, v40, 0x10uLL, BugCheckParameter4);
        *a6 = v40;
      }
      return v11;
    }
    if ( BugCheckParameter1 == -2LL )
    {
      if ( (POBJECT_TYPE *)a3 != PsThreadType && a3 )
        return 3221225508LL;
      if ( (a2 & 0xFFE00000) != 0 && a4 )
      {
        return (unsigned int)-1073741790;
      }
      else
      {
        if ( a7 )
        {
          a7[1] = 0x1FFFFF;
          *a7 = 0;
        }
        if ( ObpTraceFlags )
        {
          ObpPushStackInfo((__int64)&CurrentThread[-1].SchedulerAssistPriorityFloor, 1, 1u, Tag);
          v11 = 0;
        }
        v39 = _InterlockedIncrement64((volatile signed __int64 *)&CurrentThread[-1].SchedulerAssistPriorityFloor);
        if ( v39 <= 1 )
          KeBugCheckEx(0x18u, 0LL, (ULONG_PTR)CurrentThread, 0x10uLL, v39);
        *a6 = CurrentThread;
      }
      return v11;
    }
    if ( a4 )
      return 3221225480LL;
    v14 = ObpKernelHandleTable;
    BugCheckParameter1 ^= 0xFFFFFFFF80000000uLL;
    --CurrentThread->KernelApcDisable;
    v51 = v14;
    goto LABEL_10;
  }
  if ( (MmVerifierData & 0x100) != 0 && !a4 )
    VfCheckUserHandle(BugCheckParameter1);
  --CurrentThread->KernelApcDisable;
  if ( Process == CurrentThread->Process )
  {
    if ( (Process[1].DirectoryTableBase & 0x400000000000000LL) == 0 )
    {
LABEL_110:
      v33 = -1073741816;
      goto LABEL_81;
    }
    v14 = Process[1].AffinityPadding[8];
  }
  else
  {
    v14 = ObReferenceProcessHandleTable(Process);
    v50 = 1;
  }
  v51 = v14;
  if ( !v14 )
    goto LABEL_110;
  if ( v14 == ObpKernelHandleTable )
  {
LABEL_85:
    v33 = -1073741816;
    goto LABEL_79;
  }
LABEL_10:
  if ( (BugCheckParameter1 & 0x3FC) == 0
    || (v15 = (unsigned __int64 *)ExpLookupHandleTableEntry(v14, BugCheckParameter1), (v17 = v15) == 0LL) )
  {
LABEL_83:
    if ( BugCheckParameter1 )
      ExHandleLogBadReference(v14, BugCheckParameter1, KeGetCurrentThread()->PreviousMode);
    goto LABEL_85;
  }
  _m_prefetchw(v15);
  v18 = *v15;
  v19 = v15[1];
  v45[1] = v19;
  v45[0] = v18;
  v20 = v18;
  if ( (v18 & 0x1FFFE) == 0 )
    goto LABEL_46;
  while ( 1 )
  {
    if ( (v20 & 1) == 0 )
    {
      ExpBlockOnLockedHandleEntry(v14, v17);
      _m_prefetchw(v17);
      v19 = v17[1];
      v14 = v51;
      v45[0] = *v17;
      v20 = v45[0];
      v45[1] = v19;
      goto LABEL_75;
    }
    *(_QWORD *)&v22 = v20;
    *((_QWORD *)&v22 + 1) = v19;
    v23 = _InterlockedCompareExchange128((volatile signed __int64 *)v17, v19, v20 - 2, (signed __int64 *)&v22);
    v21 = v22;
    v20 = v22;
    *(_OWORD *)v45 = v22;
    v19 = *((_QWORD *)&v22 + 1);
    if ( v23 )
      break;
LABEL_75:
    if ( (v20 & 0x1FFFE) == 0 )
    {
      do
      {
LABEL_46:
        while ( 1 )
        {
          _m_prefetchw(v17);
          v35 = *v17;
          if ( (*v17 & 1) != 0 )
            break;
          if ( !v35 )
            goto LABEL_83;
          ExpBlockOnLockedHandleEntry(v14, v17);
          v14 = v51;
        }
      }
      while ( v35 != _InterlockedCompareExchange64((volatile signed __int64 *)v17, v35 - 1, v35) );
      v24 = ((__int64)*v17 >> 16) & 0xFFFFFFFFFFFFFFF0uLL;
      *(_OWORD *)v45 = *(_OWORD *)v17;
      v36 = (int)(ExSlowReplenishHandleTableEntry(v17) + 1);
      v38 = _InterlockedExchangeAdd64((volatile signed __int64 *)v24, v36);
      if ( v38 <= 0 )
        KeBugCheckEx(0x18u, 0LL, v24 + 48, 0x10uLL, v36 + v38);
      _InterlockedExchangeAdd64((volatile signed __int64 *)v17, 1uLL);
      _InterlockedOr(v44, 0);
      if ( *(_QWORD *)(v37 + 48) )
        ExfUnblockPushLock((volatile __int64 *)(v37 + 48), 0LL);
      goto LABEL_51;
    }
  }
  if ( (unsigned __int16)((unsigned __int64)v21 >> 1) != 16 )
  {
    v24 = (v21 >> 16) & 0xFFFFFFFFFFFFFFF0uLL;
    goto LABEL_17;
  }
  v45[0] = v21 ^ ((unsigned int)v21 ^ (2 * (unsigned int)((unsigned __int64)v21 >> 1) - 2)) & 0x1FFFE;
  v24 = ((__int64)v45[0] >> 16) & 0xFFFFFFFFFFFFFFF0uLL;
  ObpIncrPointerCountEx((volatile signed __int64 *)v24, 32752);
  v42 = ExFastReplenishHandleTableEntry((volatile signed __int64 *)v17, v45, 32752);
  if ( v42 )
    _InterlockedExchangeAdd64((volatile signed __int64 *)v24, -v42);
LABEL_51:
  LODWORD(v19) = v45[1];
  v20 = v45[0];
LABEL_17:
  if ( ObpTraceFlags )
    ObpPushStackInfo(v24, 1, 1u, Tag);
  v25 = ObHeaderCookie ^ *(_BYTE *)(v24 + 24) ^ BYTE1(v24);
  if ( !a3 || *(_BYTE *)(a3 + 40) != v25 )
  {
    v16 = (PVOID)ObTypeIndexTable[v25];
    if ( !v16 || v16 == MmBadPointer )
      KeBugCheckEx(0x189u, v24, (ULONG_PTR)v16, 0LL, 0LL);
    if ( a3 )
    {
      v33 = -1073741788;
      goto LABEL_78;
    }
  }
  v26 = a2;
  v27 = v19 & 0x1FFFFFF;
  if ( !a4 )
  {
LABEL_24:
    v28 = v20 >> 17;
    if ( a7 )
    {
      v34 = v28 & 7;
      a7[1] = v27;
      *a7 = v34;
      if ( (v34 & 4) == 0 )
        goto LABEL_26;
    }
    else if ( (v28 & 4) == 0 )
    {
LABEL_26:
      v29 = 0;
      goto LABEL_27;
    }
    v29 = 1;
LABEL_27:
    v30 = v51;
    if ( a8 )
    {
      if ( *(_DWORD *)(v51 + 4) )
      {
        HandleExtraInfo = (_QWORD *)ExpGetHandleExtraInfo(v51, BugCheckParameter1, v16, 0x140000000uLL);
        v26 = a2;
        if ( HandleExtraInfo )
          *a8 = *HandleExtraInfo;
      }
    }
    if ( v29 && v26 && !(unsigned __int8)ObpAuditObjectAccess(v30, BugCheckParameter1, (_DWORD)v17, v24, v26) )
    {
      v33 = -1073741816;
      goto LABEL_78;
    }
    *a6 = v24 + 48;
    if ( v50 )
      ExReleaseRundownProtection_0(v46 + 139);
    KeLeaveCriticalRegionThread((__int64)CurrentThread);
    return 0LL;
  }
  if ( (~v27 & a2) != 0 )
  {
    v33 = -1073741790;
    goto LABEL_78;
  }
  if ( (*(_BYTE *)(v24 + 26) & 0x40) == 0 )
    goto LABEL_24;
  v32 = v24 - ObpInfoMaskToOffset[*(_BYTE *)(v24 + 26) & 0x7F];
  if ( !*(_BYTE *)(*(_QWORD *)v32 + 24LL) )
  {
LABEL_35:
    v26 = a2;
    goto LABEL_24;
  }
  if ( *(_QWORD *)(*(_QWORD *)v32 + 16LL) != 1LL )
  {
    v20 = v45[0];
    goto LABEL_35;
  }
  v33 = -1073700858;
LABEL_78:
  ObfDereferenceObjectWithTag((PVOID)(v24 + 48), Tag);
LABEL_79:
  if ( v50 )
    ExReleaseRundownProtection_0(v46 + 139);
LABEL_81:
  KeLeaveCriticalRegionThread((__int64)CurrentThread);
  return v33;
}
