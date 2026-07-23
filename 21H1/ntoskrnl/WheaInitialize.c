/*
 * XREFs of WheaInitialize @ 0x140A5B63C
 * Callers:
 *     IoInitSystemPreDrivers @ 0x140A3B0DC (IoInitSystemPreDrivers.c)
 * Callees:
 *     KeInitializeEvent @ 0x140254560 (KeInitializeEvent.c)
 *     MiGetSystemRegionType @ 0x1402609A0 (MiGetSystemRegionType.c)
 *     KiAbThreadRemoveBoosts @ 0x140260D50 (KiAbThreadRemoveBoosts.c)
 *     MmGetSessionIdEx @ 0x140260EB0 (MmGetSessionIdEx.c)
 *     KeGetPrcb @ 0x140276C20 (KeGetPrcb.c)
 *     KiAbEntryRemoveFromTree @ 0x1403410E0 (KiAbEntryRemoveFromTree.c)
 *     KiCheckForKernelApcDelivery @ 0x1403599E0 (KiCheckForKernelApcDelivery.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x140359E30 (ExfAcquirePushLockExclusiveEx.c)
 *     ExfTryToWakePushLock @ 0x14035A680 (ExfTryToWakePushLock.c)
 *     WheapInitializeWorkQueue @ 0x1403B67F4 (WheapInitializeWorkQueue.c)
 *     WheapCheckForClzeroSupport @ 0x1403B688C (WheapCheckForClzeroSupport.c)
 *     WheapCheckForAndReportErrorsFromPreviousSession @ 0x1403B68B8 (WheapCheckForAndReportErrorsFromPreviousSession.c)
 *     WheapCallErrorSourceInitialize @ 0x1403B6B80 (WheapCallErrorSourceInitialize.c)
 *     EtwTraceAutoBoostEntryExhaustion @ 0x1403F1844 (EtwTraceAutoBoostEntryExhaustion.c)
 *     KeBugCheckEx @ 0x1403F5E40 (KeBugCheckEx.c)
 *     _guard_dispatch_icall @ 0x1403FE9E0 (_guard_dispatch_icall.c)
 *     WheaWmiInit @ 0x1405B7BAC (WheaWmiInit.c)
 *     WheapLogInitEvent @ 0x140797678 (WheapLogInitEvent.c)
 *     WheapLoadPolicy @ 0x140A5B1F8 (WheapLoadPolicy.c)
 *     WheapCreatePerProcessorInfo @ 0x140A5B468 (WheapCreatePerProcessorInfo.c)
 *     WheapInitializeEventing @ 0x140A5B504 (WheapInitializeEventing.c)
 *     WheapInitializeErrorSourceTable @ 0x140A5BD6C (WheapInitializeErrorSourceTable.c)
 *     WheapQueryPshedForErrorSources @ 0x140A5BED8 (WheapQueryPshedForErrorSources.c)
 */

__int64 __fastcall WheaInitialize(__int64 a1, unsigned int a2)
{
  __int64 v2; // r14
  ULONG_PTR v3; // r12
  __int64 v4; // r13
  int v5; // eax
  int PerProcessorInfo; // eax
  int v7; // eax
  int *v8; // rbx
  unsigned int v9; // esi
  int v10; // eax
  __int64 v11; // rax
  int v12; // eax
  int v13; // eax
  struct _KTHREAD *CurrentThread; // rbx
  unsigned __int8 AbEntrySummary; // cl
  unsigned __int8 AbOrphanedEntrySummary; // al
  __int64 v17; // rax
  _KPROCESS *Process; // rax
  unsigned __int64 v19; // rcx
  int v20; // eax
  __int64 v21; // rdx
  __int64 v22; // rcx
  __int64 v23; // r8
  _DWORD *v24; // r9
  bool v25; // zf
  int v27; // eax
  unsigned int i; // ebx
  __int64 Prcb; // rax
  __int64 j; // rbx
  int v31; // eax
  __int64 v32; // rbx
  int v33; // r13d
  int v34; // eax
  struct _KTHREAD *v35; // rbx
  unsigned int SessionId; // r8d
  unsigned __int8 v37; // r12
  unsigned int v38; // edx
  __int64 v39; // rcx
  __int64 v40; // r14
  int v41; // eax
  unsigned int v42; // ecx
  __int64 v43; // rdx
  __int64 v44; // rdx
  __int64 v45; // rcx
  __int64 v46; // r8
  _DWORD *v47; // r9
  ULONG_PTR BugCheckParameter4; // [rsp+20h] [rbp-30h]
  ULONG_PTR BugCheckParameter4a; // [rsp+20h] [rbp-30h]
  int v51; // [rsp+34h] [rbp-1Ch] BYREF
  PVOID Address; // [rsp+38h] [rbp-18h] BYREF
  _QWORD v53[2]; // [rsp+40h] [rbp-10h] BYREF
  unsigned int v55; // [rsp+98h] [rbp+48h] BYREF
  int v56; // [rsp+A0h] [rbp+50h]
  int v57; // [rsp+A8h] [rbp+58h] BYREF

  v2 = 0LL;
  v3 = a2;
  Address = 0LL;
  v4 = a1;
  v53[0] = 0LL;
  v55 = 0;
  if ( !a2 )
  {
    WheapStatus = 0LL;
    dword_140C15EF8 = 0;
    WheapErrorRecordId = MEMORY[0xFFFFF78000000014];
    WheapLoadPolicy();
    if ( (*(_DWORD *)(*(_QWORD *)(v4 + 240) + 132LL) & 2) == 0 )
      WheapPreviousSessionFailure = 1;
    v5 = PshedInitialize(v4, v53);
    if ( v5 < 0 )
      KeBugCheckEx(0x122u, 3uLL, v5, 0LL, 0LL);
    PerProcessorInfo = WheapCreatePerProcessorInfo();
    if ( PerProcessorInfo < 0 )
      KeBugCheckEx(0x122u, 4uLL, PerProcessorInfo, 0LL, 0LL);
    v7 = WheapQueryPshedForErrorSources(&v55, &Address);
    if ( v7 < 0 )
      KeBugCheckEx(0x122u, 5uLL, v7, 0LL, 0LL);
    WheapErrorSourceTable = 1279410516LL;
    qword_140CDB030 = (__int64)&qword_140CDB028;
    qword_140CDB028 = (__int64)&qword_140CDB028;
    KeInitializeEvent(&stru_140CDB038, SynchronizationEvent, 1u);
    WheapInitializeEventing();
    v8 = (int *)Address;
    v9 = 0;
    if ( v55 )
    {
      do
      {
        v10 = qword_140CF4558[8 * (__int64)v8[2]](0LL, v8, 0LL);
        if ( v10 < 0 )
          KeBugCheckEx(0x122u, 6uLL, v10, 0LL, v8[2]);
        v11 = (unsigned int)*v8;
        ++v9;
        v8[3] = 2;
        v8 = (int *)((char *)v8 + v11);
      }
      while ( v9 < v55 );
      v8 = (int *)Address;
    }
    PshedFreeMemory(v8);
    return 0LL;
  }
  qword_140C15E58 = (__int64)&WheapPrevErrList;
  WheapPrevErrList = (__int64)&WheapPrevErrList;
  v12 = PshedInitialize(a1, v53);
  if ( v12 < 0 )
    KeBugCheckEx(0x122u, 3uLL, v12, 0LL, 0LL);
  WheapInitializeWorkQueue();
  v13 = WheapQueryPshedForErrorSources(&v55, &Address);
  if ( v13 < 0 )
    KeBugCheckEx(0x122u, 5uLL, v13, v3, 0LL);
  CurrentThread = KeGetCurrentThread();
  v51 = 0;
  --CurrentThread->SpecialApcDisable;
  if ( ++CurrentThread->AbAllocationRegionCount != 1 )
    KeBugCheckEx(0x192u, (ULONG_PTR)CurrentThread, (ULONG_PTR)&WheapConfigTableLock, KeGetCurrentIrql(), 0LL);
  AbEntrySummary = CurrentThread->AbEntrySummary;
  if ( !AbEntrySummary )
  {
    if ( !CurrentThread->AbOrphanedEntrySummary )
    {
      if ( (WORD2(PerfGlobalGroupMask[0]) & 0x200) != 0 )
        EtwTraceAutoBoostEntryExhaustion((__int64)CurrentThread, (__int64)&WheapConfigTableLock);
      goto LABEL_19;
    }
    AbOrphanedEntrySummary = CurrentThread->AbOrphanedEntrySummary;
    CurrentThread->AbOrphanedEntrySummary = 0;
    AbEntrySummary = AbOrphanedEntrySummary | CurrentThread->AbEntrySummary;
  }
  _BitScanForward((unsigned int *)&v17, AbEntrySummary);
  CurrentThread->AbEntrySummary = AbEntrySummary & ~(1 << v17);
  v2 = (__int64)&CurrentThread->LockEntries[v17];
  if ( !v2 )
  {
LABEL_19:
    _interlockedbittestandset((volatile signed __int32 *)&CurrentThread->116 + 1, 0x10u);
    goto LABEL_29;
  }
  if ( (unsigned __int64)&WheapConfigTableLock >= 0xFFFF800000000000uLL
    && byte_140C4F908[(((unsigned __int64)&WheapConfigTableLock >> 39) & 0x1FF) - 256] == 1
    && (Process = CurrentThread->ApcState.Process, (v19 = Process[1].AffinityPadding[5]) != 0)
    && (HIDWORD(Process[2].Header.WaitListHead.Flink) & 0x1000) == 0 )
  {
    v20 = *(_DWORD *)(v19 + 8);
  }
  else
  {
    v20 = -1;
  }
  *(_DWORD *)(v2 + 40) = v20;
  v4 = a1;
  *(_QWORD *)(v2 + 32) = (unsigned __int64)&WheapConfigTableLock & 0x7FFFFFFFFFFFFFFCLL;
LABEL_29:
  --CurrentThread->AbAllocationRegionCount;
  KiAbThreadRemoveBoosts((ULONG_PTR)CurrentThread, (__int64)&WheapConfigTableLock, &v51);
  v25 = CurrentThread->SpecialApcDisable++ == -1;
  if ( v25 && ($C774EFD68449142D8271B1EC1EB7FB26 *)CurrentThread->ApcState.ApcListHead[0].Flink != &CurrentThread->152 )
    KiCheckForKernelApcDelivery(v22, v21, v23, v24);
  if ( _interlockedbittestandset64((volatile signed __int32 *)&WheapConfigTableLock, 0LL) )
    ExfAcquirePushLockExclusiveEx(&WheapConfigTableLock, v2, (ULONG_PTR)&WheapConfigTableLock);
  if ( v2 )
    *(_BYTE *)(v2 + 26) |= 1u;
  v27 = WheapInitializeErrorSourceTable(v55, Address);
  if ( v27 < 0 )
    KeBugCheckEx(0x122u, 7uLL, v27, 0LL, 0LL);
  PshedFreeMemory(Address);
  for ( i = 0; i < (unsigned int)KeNumberProcessors_0; *(_QWORD *)(*(_QWORD *)(Prcb + 33568) + 8LL) = &WheapErrorSourceTable )
  {
    Prcb = KeGetPrcb(i++);
    **(_DWORD **)(Prcb + 33568) = v55;
    *(_QWORD *)(*(_QWORD *)(Prcb + 33568) + 16LL) = &WheapWorkQueue;
  }
  for ( j = qword_140CDB028; (__int64 *)j != &qword_140CDB028; j = *(_QWORD *)j )
  {
    if ( *(_DWORD *)(j + 104) == 7 )
    {
      *(_DWORD *)(j + 108) = 2;
      v31 = WheapCallErrorSourceInitialize(j, v3);
      if ( v31 < 0 )
      {
        BugCheckParameter4 = *(int *)(j + 104);
        *(_DWORD *)(j + 108) = 1;
        KeBugCheckEx(0x122u, 6uLL, v31, v3, BugCheckParameter4);
      }
    }
  }
  WheapCheckForClzeroSupport();
  if ( (*(_BYTE *)(*(_QWORD *)(v4 + 240) + 2616LL) & 4) == 0 && PshedIsSystemWheaEnabled() )
    WheapCheckForAndReportErrorsFromPreviousSession();
  v32 = qword_140CDB028;
  v33 = 0;
  while ( (__int64 *)v32 != &qword_140CDB028 )
  {
    v25 = *(_DWORD *)(v32 + 104) == 7;
    *(_DWORD *)(v32 + 124) = v33;
    if ( !v25 && !*(_BYTE *)(v32 + 88) && *(_DWORD *)(v32 + 108) == 1 )
    {
      *(_DWORD *)(v32 + 108) = 2;
      v34 = WheapCallErrorSourceInitialize(v32, v3);
      if ( v34 < 0 )
      {
        BugCheckParameter4a = *(int *)(v32 + 104);
        *(_DWORD *)(v32 + 108) = 1;
        KeBugCheckEx(0x122u, 6uLL, v34, v3, BugCheckParameter4a);
      }
    }
    v32 = *(_QWORD *)v32;
    ++v33;
  }
  WheapLogInitEvent();
  WheaWmiInit();
  WheapInitializationComplete = 1;
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&WheapConfigTableLock, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock(&WheapConfigTableLock);
  v35 = KeGetCurrentThread();
  v57 = 0;
  if ( (unsigned int)MiGetSystemRegionType((unsigned __int64)&WheapConfigTableLock) == 1 )
    SessionId = MmGetSessionIdEx((__int64)v35->ApcState.Process);
  else
    SessionId = -1;
  --v35->SpecialApcDisable;
  v37 = ++v35->AbAllocationRegionCount;
  v38 = ((char)v35->AbEntrySummary | (char)v35->AbOrphanedEntrySummary) ^ 0x3F;
  while ( 1 )
  {
    v25 = !_BitScanReverse((unsigned int *)&v39, v38);
    v56 = v39;
    if ( v25 )
      break;
    v40 = (__int64)&v35->LockEntries[v39];
    v38 &= ~(1 << v39);
    if ( (*(_BYTE *)(v40 + 26) & 1) != 0
      && (*(_DWORD *)(v40 + 32) & 1) == 0
      && (*(_QWORD *)(v40 + 32) & 0x7FFFFFFFFFFFFFFCLL) == ((unsigned __int64)&WheapConfigTableLock & 0x7FFFFFFFFFFFFFFCLL)
      && *(_DWORD *)(v40 + 40) == SessionId )
    {
      *(_BYTE *)(v40 + 26) &= ~1u;
      if ( *(_QWORD *)(v40 + 32) )
      {
        if ( v40 )
        {
          *(_BYTE *)(v40 + 32) |= 2u;
          if ( *(__int64 *)(v40 + 32) < 0 )
            KiAbEntryRemoveFromTree((PRTL_BALANCED_NODE)v40);
          v41 = *(_DWORD *)(v40 + 88) & 0x1FFFF;
          v42 = *(_DWORD *)(v40 + 88) & 0xFFFE0000;
          *(_BYTE *)(v40 + 25) &= ~1u;
          v57 = v41;
          *(_DWORD *)(v40 + 88) = v42;
          *(_QWORD *)(v40 + 32) = 0LL;
          v43 = (signed __int64)(v40 - (unsigned __int64)v35->LockEntries) / 96;
          if ( v37 == 1 )
            v35->AbEntrySummary |= 1 << v43;
          else
            _InterlockedOr8((volatile signed __int8 *)&v35->AbOrphanedEntrySummary, 1 << v43);
          goto LABEL_71;
        }
        break;
      }
    }
  }
  if ( (*((_DWORD *)&v35->0 + 1) & 0x10000) == 0 )
    KeBugCheckEx(0x162u, (ULONG_PTR)v35, (ULONG_PTR)&WheapConfigTableLock, SessionId, 0LL);
LABEL_71:
  --v35->AbAllocationRegionCount;
  KiAbThreadRemoveBoosts((ULONG_PTR)v35, (__int64)&WheapConfigTableLock, &v57);
  v25 = v35->SpecialApcDisable++ == -1;
  if ( v25 && ($C774EFD68449142D8271B1EC1EB7FB26 *)v35->ApcState.ApcListHead[0].Flink != &v35->152 )
    KiCheckForKernelApcDelivery(v45, v44, v46, v47);
  return 0LL;
}
