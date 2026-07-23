/*
 * XREFs of ObpReferenceObjectByHandleWithTag @ 0x140707FE0
 * Callers:
 *     NtCreateThreadEx @ 0x14063D5C0 (NtCreateThreadEx.c)
 *     PspCreateThread @ 0x14063DA6C (PspCreateThread.c)
 *     PsReferencePartitionByHandle @ 0x14067CE44 (PsReferencePartitionByHandle.c)
 *     NtQueryInformationJobObject @ 0x1406804E0 (NtQueryInformationJobObject.c)
 *     PspBuildCreateProcessContext @ 0x1406986F4 (PspBuildCreateProcessContext.c)
 *     NtCreateUserProcess @ 0x140699C80 (NtCreateUserProcess.c)
 *     ExpWnfCaptureScopeInstanceId @ 0x14069F3D8 (ExpWnfCaptureScopeInstanceId.c)
 *     PsCreateSystemThreadEx @ 0x1406A7470 (PsCreateSystemThreadEx.c)
 *     MmProcessWorkingSetControl @ 0x1406BD464 (MmProcessWorkingSetControl.c)
 *     PfpSourceGetPrefetchSupport @ 0x1406BE55C (PfpSourceGetPrefetchSupport.c)
 *     MmPrefetchVirtualMemory @ 0x1406BEF48 (MmPrefetchVirtualMemory.c)
 *     MiAllocateVirtualMemoryPrepare @ 0x1406E9150 (MiAllocateVirtualMemoryPrepare.c)
 *     MmFreeVirtualMemory @ 0x1407049E0 (MmFreeVirtualMemory.c)
 *     ObReferenceObjectByHandleWithTag @ 0x140707F60 (ObReferenceObjectByHandleWithTag.c)
 *     ObReferenceObjectByHandle @ 0x140707FA0 (ObReferenceObjectByHandle.c)
 *     ObpLookupObjectName @ 0x14070B300 (ObpLookupObjectName.c)
 *     NtOpenProcessTokenEx @ 0x14071DAA0 (NtOpenProcessTokenEx.c)
 *     DbgkpCreateNotificationEvent @ 0x1407CA830 (DbgkpCreateNotificationEvent.c)
 *     HalpAcquirePccInterface @ 0x140866984 (HalpAcquirePccInterface.c)
 *     VrpHandleIoctlGetVirtualRootKey @ 0x140882D18 (VrpHandleIoctlGetVirtualRootKey.c)
 *     NtRemoveProcessDebug @ 0x1408862B0 (NtRemoveProcessDebug.c)
 *     DbgkpWerInitializeDeferredLiveDump @ 0x140889508 (DbgkpWerInitializeDeferredLiveDump.c)
 *     NtCreateEnclave @ 0x1408D3E80 (NtCreateEnclave.c)
 *     PopSetSpecialRequest @ 0x1408E1D0C (PopSetSpecialRequest.c)
 *     PspConvertSiloToServerSilo @ 0x1409061B4 (PspConvertSiloToServerSilo.c)
 *     NtAlertThread @ 0x14090C800 (NtAlertThread.c)
 * Callees:
 *     ExHandleLogBadReference @ 0x1402011C8 (ExHandleLogBadReference.c)
 *     ObpIncrPointerCountEx @ 0x14023A224 (ObpIncrPointerCountEx.c)
 *     ExFastReplenishHandleTableEntry @ 0x140247CF0 (ExFastReplenishHandleTableEntry.c)
 *     ExReleaseRundownProtection @ 0x14026A490 (ExReleaseRundownProtection.c)
 *     KeLeaveCriticalRegionThread @ 0x1402AB8C0 (KeLeaveCriticalRegionThread.c)
 *     ExSlowReplenishHandleTableEntry @ 0x140353550 (ExSlowReplenishHandleTableEntry.c)
 *     ObfDereferenceObjectWithTag @ 0x140355E90 (ObfDereferenceObjectWithTag.c)
 *     ExfUnblockPushLock @ 0x1403F96E0 (ExfUnblockPushLock.c)
 *     KeBugCheckEx @ 0x1403FE0D0 (KeBugCheckEx.c)
 *     ObpPushStackInfo @ 0x140564F68 (ObpPushStackInfo.c)
 *     ExpBlockOnLockedHandleEntry @ 0x1405E2998 (ExpBlockOnLockedHandleEntry.c)
 *     ObReferenceProcessHandleTable @ 0x1406E4F14 (ObReferenceProcessHandleTable.c)
 *     ExpLookupHandleTableEntry @ 0x1407085D0 (ExpLookupHandleTableEntry.c)
 *     ObpAuditObjectAccess @ 0x1408DCC24 (ObpAuditObjectAccess.c)
 *     ExpGetHandleExtraInfo @ 0x14094CD00 (ExpGetHandleExtraInfo.c)
 *     VfCheckUserHandle @ 0x1409DB184 (VfCheckUserHandle.c)
 */

__int64 __fastcall ObpReferenceObjectByHandleWithTag(
        ULONG_PTR BugCheckParameter1,
        __int64 a2,
        POBJECT_TYPE *a3,
        ULONG Tag,
        _QWORD *a5,
        _DWORD *a6,
        _QWORD *a7,
        unsigned __int64 a8)
{
  __int128 v8; // rax
  struct _KTHREAD *CurrentThread; // r15
  unsigned int v12; // ecx
  _KPROCESS *Process; // rdi
  unsigned __int64 *v15; // rdi
  __int64 v16; // rcx
  signed __int64 v17; // rbp
  __int64 v18; // r14
  __int128 v19; // rt0
  unsigned __int8 v20; // tt
  unsigned __int64 v21; // rbx
  __int64 v22; // rdx
  __int64 v23; // r9
  unsigned __int8 v24; // al
  int v25; // ecx
  int v26; // ebp
  __int64 v27; // r14
  char v28; // r10
  int v29; // r11d
  unsigned __int64 v31; // rcx
  unsigned int v32; // edi
  int v33; // r14d
  unsigned __int64 v34; // rcx
  __int64 v35; // r9
  __int64 v36; // rax
  signed __int64 v37; // rbx
  ULONG_PTR v38; // rdi
  signed __int64 BugCheckParameter4; // rbx
  int v40; // ecx
  _QWORD *HandleExtraInfo; // rax
  signed __int32 v42[8]; // [rsp+0h] [rbp-88h] BYREF
  unsigned __int64 v43[3]; // [rsp+30h] [rbp-58h] BYREF
  struct _EX_RUNDOWN_REF *v44; // [rsp+90h] [rbp+8h]
  int v45; // [rsp+98h] [rbp+10h]
  POBJECT_TYPE *v46; // [rsp+A0h] [rbp+18h]
  char v47; // [rsp+A8h] [rbp+20h]
  char v48; // [rsp+B8h] [rbp+30h]
  __int64 v49; // [rsp+C8h] [rbp+40h]

  *((_QWORD *)&v8 + 1) = a2;
  v47 = a8;
  v46 = a3;
  v45 = DWORD2(v8);
  CurrentThread = KeGetCurrentThread();
  v12 = 0;
  v48 = 0;
  Process = CurrentThread->ApcState.Process;
  v44 = (struct _EX_RUNDOWN_REF *)Process;
  *a5 = 0LL;
  if ( a7 )
    *a7 = 0LL;
  if ( (BugCheckParameter1 & 0xFFFFFFFF80000000uLL) == 0xFFFFFFFF80000000uLL )
  {
    if ( BugCheckParameter1 == -1LL )
    {
      if ( a3 != PsProcessType && a3 )
        return 3221225508LL;
      v38 = (ULONG_PTR)CurrentThread->ApcState.Process;
      if ( (DWORD2(v8) & 0xFFE00000) != 0 && (_BYTE)a8 )
      {
        return (unsigned int)-1073741790;
      }
      else
      {
        if ( a6 )
        {
          a6[1] = 0x1FFFFF;
          *a6 = 0;
        }
        if ( ObpTraceFlags )
        {
          ObpPushStackInfo(v38 - 48, 1, 1u, Tag);
          v12 = 0;
        }
        BugCheckParameter4 = _InterlockedIncrement64((volatile signed __int64 *)(v38 - 48));
        if ( BugCheckParameter4 <= 1 )
          KeBugCheckEx(0x18u, 0LL, v38, 0x10uLL, BugCheckParameter4);
        *a5 = v38;
      }
      return v12;
    }
    if ( BugCheckParameter1 == -2LL )
    {
      if ( a3 != PsThreadType && a3 )
        return 3221225508LL;
      if ( (DWORD2(v8) & 0xFFE00000) != 0 && (_BYTE)a8 )
      {
        return (unsigned int)-1073741790;
      }
      else
      {
        if ( a6 )
        {
          a6[1] = 0x1FFFFF;
          *a6 = 0;
        }
        if ( ObpTraceFlags )
        {
          ObpPushStackInfo((__int64)&CurrentThread[-1].SchedulerAssistPriorityFloor, 1, 1u, Tag);
          v12 = 0;
        }
        v37 = _InterlockedIncrement64((volatile signed __int64 *)&CurrentThread[-1].SchedulerAssistPriorityFloor);
        if ( v37 <= 1 )
          KeBugCheckEx(0x18u, 0LL, (ULONG_PTR)CurrentThread, 0x10uLL, v37);
        *a5 = CurrentThread;
      }
      return v12;
    }
    if ( (_BYTE)a8 )
      return 3221225480LL;
    a8 = ObpKernelHandleTable;
    BugCheckParameter1 ^= 0xFFFFFFFF80000000uLL;
    --CurrentThread->KernelApcDisable;
    v49 = a8;
    goto LABEL_10;
  }
  if ( (MmVerifierData & 0x100) != 0 && !(_BYTE)a8 )
    VfCheckUserHandle(BugCheckParameter1);
  --CurrentThread->KernelApcDisable;
  if ( Process == CurrentThread->Process )
  {
    if ( (Process[1].DirectoryTableBase & 0x400000000000000LL) == 0 )
    {
LABEL_110:
      v32 = -1073741816;
      goto LABEL_81;
    }
    a8 = Process[1].AffinityPadding[8];
  }
  else
  {
    a8 = ObReferenceProcessHandleTable((struct _EX_RUNDOWN_REF *)Process);
    v48 = 1;
  }
  v49 = a8;
  if ( !a8 )
    goto LABEL_110;
  if ( a8 == ObpKernelHandleTable )
  {
LABEL_85:
    v32 = -1073741816;
    goto LABEL_79;
  }
LABEL_10:
  if ( (BugCheckParameter1 & 0x3FC) == 0
    || (*(_QWORD *)&v8 = ExpLookupHandleTableEntry(a8, BugCheckParameter1), (v15 = (unsigned __int64 *)v8) == 0LL) )
  {
LABEL_83:
    if ( BugCheckParameter1 )
      ExHandleLogBadReference(a8, BugCheckParameter1, KeGetCurrentThread()->PreviousMode);
    goto LABEL_85;
  }
  _m_prefetchw((const void *)v8);
  v16 = *(_QWORD *)v8;
  v17 = *(_QWORD *)(v8 + 8);
  v43[1] = v17;
  v43[0] = v16;
  v18 = v16;
  if ( (v16 & 0x1FFFE) == 0 )
    goto LABEL_46;
  while ( 1 )
  {
    if ( (v18 & 1) == 0 )
    {
      ExpBlockOnLockedHandleEntry(a8, v15, v18);
      _m_prefetchw(v15);
      v17 = v15[1];
      a8 = v49;
      v43[0] = *v15;
      v18 = v43[0];
      v43[1] = v17;
      goto LABEL_75;
    }
    *(_QWORD *)&v19 = v18;
    *((_QWORD *)&v19 + 1) = v17;
    v20 = _InterlockedCompareExchange128((volatile signed __int64 *)v15, v17, v18 - 2, (signed __int64 *)&v19);
    v8 = v19;
    v18 = v19;
    *(_OWORD *)v43 = v19;
    v17 = *((_QWORD *)&v19 + 1);
    if ( v20 )
      break;
LABEL_75:
    if ( (v18 & 0x1FFFE) == 0 )
    {
      do
      {
LABEL_46:
        while ( 1 )
        {
          _m_prefetchw(v15);
          a3 = (POBJECT_TYPE *)*v15;
          if ( (*v15 & 1) != 0 )
            break;
          if ( !a3 )
            goto LABEL_83;
          ExpBlockOnLockedHandleEntry(a8, v15, (__int64)a3);
          a8 = v49;
        }
      }
      while ( a3 != (POBJECT_TYPE *)_InterlockedCompareExchange64(
                                      (volatile signed __int64 *)v15,
                                      (signed __int64)a3 - 1,
                                      (signed __int64)a3) );
      v21 = ((__int64)*v15 >> 16) & 0xFFFFFFFFFFFFFFF0uLL;
      *(_OWORD *)v43 = *(_OWORD *)v15;
      v34 = (int)(ExSlowReplenishHandleTableEntry(v15) + 1);
      v36 = _InterlockedExchangeAdd64((volatile signed __int64 *)v21, v34);
      if ( v36 <= 0 )
        KeBugCheckEx(0x18u, 0LL, v21 + 48, 0x10uLL, v34 + v36);
      _InterlockedExchangeAdd64((volatile signed __int64 *)v15, 1uLL);
      _InterlockedOr(v42, 0);
      if ( *(_QWORD *)(v35 + 48) )
        ExfUnblockPushLock((volatile __int64 *)(v35 + 48), 0LL);
      goto LABEL_51;
    }
  }
  if ( (unsigned __int16)((unsigned __int64)v8 >> 1) != 16 )
  {
    v21 = ((__int64)v8 >> 16) & 0xFFFFFFFFFFFFFFF0uLL;
    goto LABEL_17;
  }
  v43[0] = v8 ^ ((unsigned int)v8 ^ (2 * (unsigned int)((unsigned __int64)v8 >> 1) - 2)) & 0x1FFFE;
  v21 = ((__int64)v43[0] >> 16) & 0xFFFFFFFFFFFFFFF0uLL;
  ObpIncrPointerCountEx((volatile signed __int64 *)v21, 32752);
  v40 = ExFastReplenishHandleTableEntry((volatile signed __int64 *)v15, v43, 32752);
  if ( v40 )
    _InterlockedExchangeAdd64((volatile signed __int64 *)v21, -v40);
LABEL_51:
  LODWORD(v17) = v43[1];
  v18 = v43[0];
LABEL_17:
  if ( ObpTraceFlags )
    ObpPushStackInfo(v21, 1, 1u, Tag);
  v22 = (__int64)v46;
  v23 = 0x140000000uLL;
  v24 = ObHeaderCookie ^ *(_BYTE *)(v21 + 24) ^ BYTE1(v21);
  if ( !v46 || *((_BYTE *)v46 + 40) != v24 )
  {
    a3 = (POBJECT_TYPE *)ObTypeIndexTable[v24];
    if ( !a3 || a3 == MmBadPointer )
      KeBugCheckEx(0x189u, v21, (ULONG_PTR)a3, 0LL, 0LL);
    if ( v46 )
    {
      v32 = -1073741788;
      goto LABEL_78;
    }
  }
  v25 = v45;
  v26 = v17 & 0x1FFFFFF;
  if ( !v47 )
  {
LABEL_24:
    v27 = v18 >> 17;
    if ( a6 )
    {
      v33 = v27 & 7;
      a6[1] = v26;
      *a6 = v33;
      if ( (v33 & 4) == 0 )
        goto LABEL_26;
    }
    else if ( (v27 & 4) == 0 )
    {
LABEL_26:
      v28 = 0;
      goto LABEL_27;
    }
    v28 = 1;
LABEL_27:
    v29 = v49;
    if ( a7 )
    {
      if ( *(_DWORD *)(v49 + 4) )
      {
        HandleExtraInfo = (_QWORD *)ExpGetHandleExtraInfo(v49, BugCheckParameter1);
        v25 = v45;
        if ( HandleExtraInfo )
          *a7 = *HandleExtraInfo;
      }
    }
    if ( v28 && v25 && !(unsigned __int8)ObpAuditObjectAccess(v29, BugCheckParameter1, (_DWORD)v15, v21, v25) )
    {
      v32 = -1073741816;
      goto LABEL_78;
    }
    *a5 = v21 + 48;
    if ( v48 )
      ExReleaseRundownProtection(v44 + 139);
    KeLeaveCriticalRegionThread((__int64)CurrentThread, v22, (__int64)a3, v23);
    return 0LL;
  }
  if ( (~v26 & v45) != 0 )
  {
    v32 = -1073741790;
    goto LABEL_78;
  }
  if ( (*(_BYTE *)(v21 + 26) & 0x40) == 0 )
    goto LABEL_24;
  v31 = v21 - ObpInfoMaskToOffset[*(_BYTE *)(v21 + 26) & 0x7F];
  if ( !*(_BYTE *)(*(_QWORD *)v31 + 24LL) )
  {
LABEL_35:
    v25 = v45;
    goto LABEL_24;
  }
  if ( *(_QWORD *)(*(_QWORD *)v31 + 16LL) != 1LL )
  {
    v18 = v43[0];
    goto LABEL_35;
  }
  v32 = -1073700858;
LABEL_78:
  ObfDereferenceObjectWithTag((PVOID)(v21 + 48), Tag);
LABEL_79:
  if ( v48 )
    ExReleaseRundownProtection(v44 + 139);
LABEL_81:
  KeLeaveCriticalRegionThread((__int64)CurrentThread, *((__int64 *)&v8 + 1), (__int64)a3, a8);
  return v32;
}
