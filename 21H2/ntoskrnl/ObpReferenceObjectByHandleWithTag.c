/*
 * XREFs of ObpReferenceObjectByHandleWithTag @ 0x140732D40
 * Callers:
 *     PspBuildCreateProcessContext @ 0x140670488 (PspBuildCreateProcessContext.c)
 *     NtQueryInformationJobObject @ 0x140684450 (NtQueryInformationJobObject.c)
 *     NtSetInformationJobObject @ 0x140685A20 (NtSetInformationJobObject.c)
 *     NtAssignProcessToJobObject @ 0x1406880D0 (NtAssignProcessToJobObject.c)
 *     VrpHandleIoctlCreateNamespaceNode @ 0x140691898 (VrpHandleIoctlCreateNamespaceNode.c)
 *     PopEtEnergyTrackerQuery @ 0x1406A7BF4 (PopEtEnergyTrackerQuery.c)
 *     MiLockUnlockCommon @ 0x1406AFE20 (MiLockUnlockCommon.c)
 *     PspQueryQuotaLimits @ 0x1406B48F0 (PspQueryQuotaLimits.c)
 *     NtResumeThread @ 0x1406B8B70 (NtResumeThread.c)
 *     NtIsProcessInJob @ 0x1406C9A70 (NtIsProcessInJob.c)
 *     NtGetNextProcess @ 0x1406D2920 (NtGetNextProcess.c)
 *     NtGetNextThread @ 0x1406D7150 (NtGetNextThread.c)
 *     NtAcquireProcessActivityReference @ 0x1406E1100 (NtAcquireProcessActivityReference.c)
 *     NtSuspendThread @ 0x1406E2120 (NtSuspendThread.c)
 *     MmPrefetchVirtualMemory @ 0x1406EC048 (MmPrefetchVirtualMemory.c)
 *     PsCreateSystemThreadEx @ 0x1406F0360 (PsCreateSystemThreadEx.c)
 *     NtUnmapViewOfSectionEx @ 0x1406F8C60 (NtUnmapViewOfSectionEx.c)
 *     MiMapViewOfSectionCommon @ 0x1406FB240 (MiMapViewOfSectionCommon.c)
 *     NtResetWriteWatch @ 0x140700F70 (NtResetWriteWatch.c)
 *     PspCreateThread @ 0x140701B64 (PspCreateThread.c)
 *     NtCreateThreadEx @ 0x140701F10 (NtCreateThreadEx.c)
 *     NtOpenProcessTokenEx @ 0x1407279B0 (NtOpenProcessTokenEx.c)
 *     ObReferenceObjectByHandleWithTag @ 0x140732CC0 (ObReferenceObjectByHandleWithTag.c)
 *     ObReferenceObjectByHandle @ 0x140732D00 (ObReferenceObjectByHandle.c)
 *     NtQueryInformationProcess @ 0x14073DA00 (NtQueryInformationProcess.c)
 *     NtSetInformationVirtualMemory @ 0x140753430 (NtSetInformationVirtualMemory.c)
 *     ExpWnfCaptureScopeInstanceId @ 0x1407947BC (ExpWnfCaptureScopeInstanceId.c)
 *     MiReadWriteVirtualMemory @ 0x14079E7C0 (MiReadWriteVirtualMemory.c)
 *     NtTerminateThread @ 0x14079F0C0 (NtTerminateThread.c)
 *     NtDuplicateObject @ 0x1407A1DC0 (NtDuplicateObject.c)
 *     MmFreeVirtualMemory @ 0x1407B99C0 (MmFreeVirtualMemory.c)
 *     MmQueryVirtualMemory @ 0x1407BA750 (MmQueryVirtualMemory.c)
 *     NtProtectVirtualMemory @ 0x1407BEBF0 (NtProtectVirtualMemory.c)
 *     NtQueryInformationThread @ 0x1407BF670 (NtQueryInformationThread.c)
 *     ObpLookupObjectName @ 0x1407CB6C0 (ObpLookupObjectName.c)
 *     NtCreateWorkerFactory @ 0x1407D5050 (NtCreateWorkerFactory.c)
 *     NtTerminateProcess @ 0x1407D7CA0 (NtTerminateProcess.c)
 *     PsReferencePartitionByHandle @ 0x1407DE8D0 (PsReferencePartitionByHandle.c)
 *     MiAllocateVirtualMemoryPrepare @ 0x1407E6C40 (MiAllocateVirtualMemoryPrepare.c)
 *     PopPowerRequestActionInfo @ 0x1407EF750 (PopPowerRequestActionInfo.c)
 *     NtFlushVirtualMemory @ 0x1407F0310 (NtFlushVirtualMemory.c)
 *     PspSetQuotaLimits @ 0x1407F2DBC (PspSetQuotaLimits.c)
 *     MmProcessWorkingSetControl @ 0x1407F5540 (MmProcessWorkingSetControl.c)
 *     VrpHandleIoctlGetVirtualRootKey @ 0x1407F5E04 (VrpHandleIoctlGetVirtualRootKey.c)
 *     VrpHandleIoctlUnloadDynamicallyLoadedHives @ 0x1407F5F80 (VrpHandleIoctlUnloadDynamicallyLoadedHives.c)
 *     PopCreateHiberFile @ 0x140801108 (PopCreateHiberFile.c)
 *     PspAssignPrimaryToken @ 0x140847028 (PspAssignPrimaryToken.c)
 *     DbgkpCreateNotificationEvent @ 0x14084ED68 (DbgkpCreateNotificationEvent.c)
 *     PopGetPolicyDeviceObject @ 0x140858E74 (PopGetPolicyDeviceObject.c)
 *     HalpAcquirePccInterface @ 0x14090AB48 (HalpAcquirePccInterface.c)
 *     VrpHandleIoctlCreateMultipleNamespaceNodes @ 0x1409262FC (VrpHandleIoctlCreateMultipleNamespaceNodes.c)
 *     VrpHandleIoctlModifyFlags @ 0x140926868 (VrpHandleIoctlModifyFlags.c)
 *     NtDebugActiveProcess @ 0x140928C60 (NtDebugActiveProcess.c)
 *     NtRemoveProcessDebug @ 0x140929080 (NtRemoveProcessDebug.c)
 *     DbgkpWerInitializeDeferredLiveDump @ 0x14092BEF8 (DbgkpWerInitializeDeferredLiveDump.c)
 *     NtCreateEnclave @ 0x14097AD20 (NtCreateEnclave.c)
 *     NtInitializeEnclave @ 0x14097B220 (NtInitializeEnclave.c)
 *     NtLoadEnclaveData @ 0x14097B500 (NtLoadEnclaveData.c)
 *     PfpDeprioritizeOldPagesInWs @ 0x140986D28 (PfpDeprioritizeOldPagesInWs.c)
 *     PfpSourceGetPrefetchSupport @ 0x140987E44 (PfpSourceGetPrefetchSupport.c)
 *     PopPowerRequestSpecialRequestSet @ 0x14098A13C (PopPowerRequestSpecialRequestSet.c)
 *     PspConvertSiloToServerSilo @ 0x1409ABCF4 (PspConvertSiloToServerSilo.c)
 *     PspQueryPooledQuotaLimits @ 0x1409AE3D8 (PspQueryPooledQuotaLimits.c)
 *     PspQueryWorkingSetWatch @ 0x1409AE584 (PspQueryWorkingSetWatch.c)
 *     NtChangeProcessState @ 0x1409AEC10 (NtChangeProcessState.c)
 *     NtChangeThreadState @ 0x1409AEE00 (NtChangeThreadState.c)
 *     NtCreateProcessStateChange @ 0x1409AEFF0 (NtCreateProcessStateChange.c)
 *     NtCreateThreadStateChange @ 0x1409AF200 (NtCreateThreadStateChange.c)
 *     PspCreatePicoThread @ 0x1409B25E0 (PspCreatePicoThread.c)
 *     NtAlertResumeThread @ 0x1409B2C30 (NtAlertResumeThread.c)
 *     NtAlertThread @ 0x1409B2D50 (NtAlertThread.c)
 *     NtResumeProcess @ 0x1409B2DD0 (NtResumeProcess.c)
 *     NtSuspendProcess @ 0x1409B2E50 (NtSuspendProcess.c)
 *     PsIumEnableOnDemandDebugWithResponse @ 0x1409B30B4 (PsIumEnableOnDemandDebugWithResponse.c)
 *     PsIumGetOnDemandDebugChallenge @ 0x1409B314C (PsIumGetOnDemandDebugChallenge.c)
 *     ExpProfileCreate @ 0x140A062C8 (ExpProfileCreate.c)
 *     NtPssCaptureVaSpaceBulk @ 0x140A07780 (NtPssCaptureVaSpaceBulk.c)
 * Callees:
 *     ExHandleLogBadReference @ 0x14025032C (ExHandleLogBadReference.c)
 *     ExFastReplenishHandleTableEntry @ 0x140251008 (ExFastReplenishHandleTableEntry.c)
 *     ExSlowReplenishHandleTableEntry @ 0x1402AC270 (ExSlowReplenishHandleTableEntry.c)
 *     ObfDereferenceObjectWithTag @ 0x1402AC540 (ObfDereferenceObjectWithTag.c)
 *     KeLeaveCriticalRegionThread @ 0x1402AC800 (KeLeaveCriticalRegionThread.c)
 *     ExReleaseRundownProtection @ 0x1402AD030 (ExReleaseRundownProtection.c)
 *     ObpIncrPointerCountEx @ 0x1402F3424 (ObpIncrPointerCountEx.c)
 *     ExfUnblockPushLock @ 0x14041AC40 (ExfUnblockPushLock.c)
 *     KeBugCheckEx @ 0x14041F3D0 (KeBugCheckEx.c)
 *     ObpPushStackInfo @ 0x1405C5EC8 (ObpPushStackInfo.c)
 *     ObReferenceProcessHandleTable @ 0x14066B3D8 (ObReferenceProcessHandleTable.c)
 *     ExpLookupHandleTableEntry @ 0x140733340 (ExpLookupHandleTableEntry.c)
 *     ExpBlockOnLockedHandleEntry @ 0x1407ED9FC (ExpBlockOnLockedHandleEntry.c)
 *     ExpGetHandleExtraInfo @ 0x140883EDC (ExpGetHandleExtraInfo.c)
 *     ObpAuditObjectAccess @ 0x1409851A4 (ObpAuditObjectAccess.c)
 *     VfCheckUserHandle @ 0x140A9466C (VfCheckUserHandle.c)
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
  signed __int64 *v15; // rax
  signed __int64 *v16; // rdi
  __int64 v17; // rcx
  signed __int64 v18; // rbp
  __int64 v19; // r14
  __int64 v20; // rax
  __int128 v21; // rt0
  unsigned __int8 v22; // tt
  unsigned __int64 v23; // rbx
  unsigned __int8 v24; // al
  int v25; // ecx
  int v26; // ebp
  __int64 v27; // r14
  char v28; // r10
  int v29; // r11d
  unsigned __int64 v31; // rcx
  signed __int64 v32; // rbx
  int v33; // r14d
  PVOID v34; // r8
  unsigned int v35; // edi
  signed __int64 v36; // r8
  unsigned __int64 v37; // rcx
  __int64 v38; // r9
  __int64 v39; // rax
  ULONG_PTR v40; // rdi
  signed __int64 BugCheckParameter4; // rbx
  volatile signed __int64 *v42; // r14
  int v43; // ecx
  _QWORD *HandleExtraInfo; // rax
  signed __int32 v45[8]; // [rsp+0h] [rbp-88h] BYREF
  signed __int64 v46[3]; // [rsp+30h] [rbp-58h] BYREF
  struct _EX_RUNDOWN_REF *v47; // [rsp+90h] [rbp+8h]
  char v51; // [rsp+B8h] [rbp+30h]
  __int64 v52; // [rsp+C8h] [rbp+40h]

  CurrentThread = KeGetCurrentThread();
  v11 = 0;
  v51 = 0;
  Process = CurrentThread->ApcState.Process;
  v47 = (struct _EX_RUNDOWN_REF *)Process;
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
      if ( (POBJECT_TYPE *)a3 == PsThreadType || !a3 )
      {
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
            ObpPushStackInfo((__int64)&CurrentThread[-1].SystemAffinityTokenListHead, 1, 1u, Tag);
            v11 = 0;
          }
          v32 = _InterlockedIncrement64((volatile signed __int64 *)&CurrentThread[-1].SystemAffinityTokenListHead);
          if ( v32 <= 1 )
            KeBugCheckEx(0x18u, 0LL, (ULONG_PTR)CurrentThread, 0x10uLL, v32);
          *a6 = CurrentThread;
        }
      }
      else
      {
        return (unsigned int)-1073741788;
      }
      return v11;
    }
    if ( a4 )
      return 3221225480LL;
    v14 = ObpKernelHandleTable;
    BugCheckParameter1 ^= 0xFFFFFFFF80000000uLL;
    --CurrentThread->KernelApcDisable;
    v52 = v14;
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
      v35 = -1073741816;
      goto LABEL_81;
    }
    v14 = Process[1].Affinity.StaticBitmap[28];
  }
  else
  {
    v14 = ObReferenceProcessHandleTable((struct _EX_RUNDOWN_REF *)Process);
    v51 = 1;
  }
  v52 = v14;
  if ( !v14 )
    goto LABEL_110;
  if ( v14 == ObpKernelHandleTable )
  {
LABEL_85:
    v35 = -1073741816;
    goto LABEL_79;
  }
LABEL_10:
  if ( (BugCheckParameter1 & 0x3FC) == 0
    || (v15 = (signed __int64 *)ExpLookupHandleTableEntry(v14, BugCheckParameter1), (v16 = v15) == 0LL) )
  {
LABEL_83:
    if ( BugCheckParameter1 )
      ExHandleLogBadReference(v14, BugCheckParameter1, KeGetCurrentThread()->PreviousMode);
    goto LABEL_85;
  }
  _m_prefetchw(v15);
  v17 = *v15;
  v18 = v15[1];
  v46[1] = v18;
  v46[0] = v17;
  v19 = v17;
  if ( (v17 & 0x1FFFE) == 0 )
    goto LABEL_53;
  while ( 1 )
  {
    if ( (v19 & 1) == 0 )
    {
      ExpBlockOnLockedHandleEntry(v14, v16, v19);
      _m_prefetchw(v16);
      v18 = v16[1];
      v14 = v52;
      v46[0] = *v16;
      v19 = v46[0];
      v46[1] = v18;
      goto LABEL_73;
    }
    *(_QWORD *)&v21 = v19;
    *((_QWORD *)&v21 + 1) = v18;
    v22 = _InterlockedCompareExchange128(v16, v18, v19 - 2, (signed __int64 *)&v21);
    v20 = v21;
    v19 = v21;
    *(_OWORD *)v46 = v21;
    v18 = *((_QWORD *)&v21 + 1);
    if ( v22 )
      break;
LABEL_73:
    if ( (v19 & 0x1FFFE) == 0 )
    {
      do
      {
LABEL_53:
        while ( 1 )
        {
          _m_prefetchw(v16);
          v36 = *v16;
          if ( (*v16 & 1) != 0 )
            break;
          if ( !v36 )
            goto LABEL_83;
          ExpBlockOnLockedHandleEntry(v14, v16, v36);
          v14 = v52;
        }
      }
      while ( v36 != _InterlockedCompareExchange64(v16, v36 - 1, v36) );
      v23 = (*v16 >> 16) & 0xFFFFFFFFFFFFFFF0uLL;
      *(_OWORD *)v46 = *(_OWORD *)v16;
      v37 = (int)(ExSlowReplenishHandleTableEntry((unsigned __int64 *)v16) + 1);
      v39 = _InterlockedExchangeAdd64((volatile signed __int64 *)v23, v37);
      if ( v39 <= 0 )
        KeBugCheckEx(0x18u, 0LL, v23 + 48, 0x10uLL, v37 + v39);
      _InterlockedExchangeAdd64(v16, 1uLL);
      _InterlockedOr(v45, 0);
      if ( *(_QWORD *)(v38 + 48) )
        ExfUnblockPushLock((volatile __int64 *)(v38 + 48), 0LL);
      goto LABEL_58;
    }
  }
  if ( (unsigned __int16)((unsigned __int64)v20 >> 1) != 16 )
  {
    v23 = (v20 >> 16) & 0xFFFFFFFFFFFFFFF0uLL;
    goto LABEL_17;
  }
  v46[0] = ((unsigned int)v19 ^ (2 * (unsigned int)((unsigned __int64)v20 >> 1) - 2)) & 0x1FFFE ^ (unsigned __int64)v19;
  v42 = (volatile signed __int64 *)((v46[0] >> 16) & 0xFFFFFFFFFFFFFFF0uLL);
  v23 = (unsigned __int64)v42;
  ObpIncrPointerCountEx(v42, 32752);
  v43 = ExFastReplenishHandleTableEntry(v16, v46, 32752);
  if ( v43 )
    _InterlockedExchangeAdd64(v42, -v43);
LABEL_58:
  LODWORD(v18) = v46[1];
  v19 = v46[0];
LABEL_17:
  if ( ObpTraceFlags )
    ObpPushStackInfo(v23, 1, 1u, Tag);
  v24 = ObHeaderCookie ^ *(_BYTE *)(v23 + 24) ^ BYTE1(v23);
  if ( !a3 || *(_BYTE *)(a3 + 40) != v24 )
  {
    v34 = (PVOID)ObTypeIndexTable[v24];
    if ( !v34 || v34 == MmBadPointer )
      KeBugCheckEx(0x189u, v23, (ULONG_PTR)v34, 0LL, 0LL);
    if ( a3 )
    {
      v35 = -1073741788;
      goto LABEL_78;
    }
  }
  v25 = a2;
  v26 = v18 & 0x1FFFFFF;
  if ( !a4 )
  {
LABEL_24:
    v27 = v19 >> 17;
    if ( a7 )
    {
      v33 = v27 & 7;
      a7[1] = v26;
      *a7 = v33;
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
    v29 = v52;
    if ( a8 )
    {
      if ( *(_DWORD *)(v52 + 4) )
      {
        HandleExtraInfo = (_QWORD *)ExpGetHandleExtraInfo(v52);
        v25 = a2;
        if ( HandleExtraInfo )
          *a8 = *HandleExtraInfo;
      }
    }
    if ( v28 && v25 && !(unsigned __int8)ObpAuditObjectAccess(v29, BugCheckParameter1, (_DWORD)v16, v23, v25) )
    {
      v35 = -1073741816;
      goto LABEL_78;
    }
    *a6 = v23 + 48;
    if ( v51 )
      ExReleaseRundownProtection(v47 + 139);
    KeLeaveCriticalRegionThread((__int64)CurrentThread);
    return 0LL;
  }
  if ( (~v26 & a2) != 0 )
  {
    v35 = -1073741790;
    goto LABEL_78;
  }
  if ( (*(_BYTE *)(v23 + 26) & 0x40) == 0 )
    goto LABEL_24;
  v31 = v23 - ObpInfoMaskToOffset[*(_BYTE *)(v23 + 26) & 0x7F];
  if ( !*(_BYTE *)(*(_QWORD *)v31 + 24LL) )
  {
LABEL_35:
    v25 = a2;
    goto LABEL_24;
  }
  if ( *(_QWORD *)(*(_QWORD *)v31 + 16LL) != 1LL )
  {
    v19 = v46[0];
    goto LABEL_35;
  }
  v35 = -1073700858;
LABEL_78:
  ObfDereferenceObjectWithTag((PVOID)(v23 + 48), Tag);
LABEL_79:
  if ( v51 )
    ExReleaseRundownProtection(v47 + 139);
LABEL_81:
  KeLeaveCriticalRegionThread((__int64)CurrentThread);
  return v35;
}
