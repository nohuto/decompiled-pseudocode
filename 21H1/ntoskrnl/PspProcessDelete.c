/*
 * XREFs of PspProcessDelete @ 0x14065FD30
 * Callers:
 *     <none>
 * Callees:
 *     KeInitializeDpc @ 0x140204F10 (KeInitializeDpc.c)
 *     KiQueryUnbiasedInterruptTime @ 0x14023F4A4 (KiQueryUnbiasedInterruptTime.c)
 *     ObDereferenceObjectDeferDeleteWithTag @ 0x14024CFC0 (ObDereferenceObjectDeferDeleteWithTag.c)
 *     KeUnstackDetachProcess @ 0x14025E8B0 (KeUnstackDetachProcess.c)
 *     KiLeaveGuardedRegionUnsafe @ 0x140260DE0 (KiLeaveGuardedRegionUnsafe.c)
 *     HalPutDmaAdapter @ 0x140261190 (HalPutDmaAdapter.c)
 *     KeInsertQueueDpc @ 0x14026DC50 (KeInsertQueueDpc.c)
 *     PsReturnProcessNonPagedPoolQuota @ 0x1402799D0 (PsReturnProcessNonPagedPoolQuota.c)
 *     KeStackAttachProcess @ 0x1402A51A0 (KeStackAttachProcess.c)
 *     PsGetProcessId @ 0x1402D44D0 (PsGetProcessId.c)
 *     IoSetDiskIoAttributionOnProcess @ 0x1402D4688 (IoSetDiskIoAttributionOnProcess.c)
 *     PsDereferencePartition @ 0x1402D4730 (PsDereferencePartition.c)
 *     PspUnlockProcessListExclusive @ 0x1402D7380 (PspUnlockProcessListExclusive.c)
 *     PspLockProcessListExclusive @ 0x1402D7568 (PspLockProcessListExclusive.c)
 *     __security_check_cookie @ 0x1403CC020 (__security_check_cookie.c)
 *     ZwDeleteWnfStateName @ 0x1403F3E30 (ZwDeleteWnfStateName.c)
 *     KeBugCheck @ 0x1403F5E20 (KeBugCheck.c)
 *     _guard_dispatch_icall @ 0x1403FE9E0 (_guard_dispatch_icall.c)
 *     KeUnsecureProcess @ 0x14050E048 (KeUnsecureProcess.c)
 *     ExDestroyHandle @ 0x1405F1A78 (ExDestroyHandle.c)
 *     PspDereferenceQuotaBlock @ 0x140615568 (PspDereferenceQuotaBlock.c)
 *     ExMapHandleToPointer @ 0x140638490 (ExMapHandleToPointer.c)
 *     PspRemoveProcessFromJobChain @ 0x14065DF9C (PspRemoveProcessFromJobChain.c)
 *     ObDereferenceDeviceMap @ 0x14065E844 (ObDereferenceDeviceMap.c)
 *     WbRemoveWarbirdProcess @ 0x14065E8CC (WbRemoveWarbirdProcess.c)
 *     PoEnergyContextCleanup @ 0x14066031C (PoEnergyContextCleanup.c)
 *     LpcExitProcess @ 0x140660498 (LpcExitProcess.c)
 *     EtwExitProcess @ 0x140660578 (EtwExitProcess.c)
 *     SeDeassignPrimaryToken @ 0x1406605E4 (SeDeassignPrimaryToken.c)
 *     MmDeleteProcessAddressSpace @ 0x14066299C (MmDeleteProcessAddressSpace.c)
 *     PspExitProcess @ 0x140662D14 (PspExitProcess.c)
 *     ExWnfExitProcess @ 0x140665934 (ExWnfExitProcess.c)
 *     SmProcessDeleteNotification @ 0x1409251EC (SmProcessDeleteNotification.c)
 *     VmpProcessContextCleanup @ 0x14092B20C (VmpProcessContextCleanup.c)
 *     ExFreePoolWithTag @ 0x1409B1010 (ExFreePoolWithTag.c)
 */

void __fastcall PspProcessDelete(PRKPROCESS PROCESS)
{
  struct _LIST_ENTRY **p_Blink; // rdi
  struct _KTHREAD *CurrentThread; // rsi
  struct _LIST_ENTRY *v4; // rcx
  struct _LIST_ENTRY *v5; // rax
  void *v6; // rcx
  __int64 v7; // rdx
  struct _DMA_ADAPTER *v8; // rcx
  unsigned __int64 v9; // rcx
  HANDLE ProcessId; // rax
  struct _SINGLE_LIST_ENTRY *Next; // rcx
  signed __int64 *v12; // rax
  __int64 v13; // rdx
  __int64 v14; // r8
  __int64 v15; // r9
  void *v16; // rcx
  unsigned __int64 v17; // rdx
  __int64 v18; // r8
  _BOOL8 v19; // r9
  __int128 *v20; // r9
  __int64 v21; // r8
  int v22; // r10d
  char v23; // di
  __int64 v24; // rdx
  __int64 v25; // rax
  __int64 v26; // rax
  bool v27; // zf
  __int64 v28; // rdx
  _QWORD *v29; // r11
  const char *v30; // rax
  unsigned int v31; // r10d
  unsigned __int64 v32; // rcx
  __int64 v33; // r9
  unsigned __int64 v34; // rax
  __int64 v35; // rax
  __int128 *v36; // r10
  __int64 v37; // rax
  int v38; // r9d
  __int64 v39; // rax
  __int64 UnbiasedInterruptTime; // r11
  volatile signed __int32 *v41; // rcx
  void *v42; // rcx
  struct _KAPC_STATE ApcState; // [rsp+30h] [rbp-40h] BYREF

  HIDWORD(PROCESS[1].DirectoryTableBase) &= ~0x4000000u;
  p_Blink = &PROCESS[1].Header.WaitListHead.Blink;
  memset(&ApcState, 0, sizeof(ApcState));
  CurrentThread = KeGetCurrentThread();
  if ( PROCESS[1].Header.WaitListHead.Blink )
  {
    PspLockProcessListExclusive((__int64)CurrentThread);
    v4 = *p_Blink;
    if ( (struct _LIST_ENTRY **)(*p_Blink)->Blink != p_Blink
      || (v5 = p_Blink[1], (struct _LIST_ENTRY **)v5->Flink != p_Blink) )
    {
      __fastfail(3u);
    }
    v5->Flink = v4;
    v4->Blink = v5;
    PspUnlockProcessListExclusive((__int64)CurrentThread);
  }
  v6 = (void *)PROCESS[1].ActiveProcessors.Bitmap[2];
  if ( v6 )
  {
    ExFreePoolWithTag(v6, 0);
    PROCESS[1].ActiveProcessors.Bitmap[2] = 0LL;
  }
  ObDereferenceDeviceMap((__int64)PROCESS);
  if ( PROCESS[2].AffinityPadding[7] )
    ZwDeleteWnfStateName((__int64)&PROCESS[2].AffinityPadding[7], v7);
  v8 = (struct _DMA_ADAPTER *)PROCESS[1].AffinityPadding[9];
  if ( v8 )
  {
    HalPutDmaAdapter(v8);
    PROCESS[1].AffinityPadding[9] = 0LL;
  }
  v9 = PROCESS[1].Affinity.Bitmap[4];
  if ( v9 )
  {
    HalPutDmaAdapter((PADAPTER_OBJECT)(v9 & 0xFFFFFFFFFFFFFFF8uLL));
    PROCESS[1].Affinity.Bitmap[4] = 0LL;
  }
  ProcessId = PsGetProcessId(PROCESS);
  WbRemoveWarbirdProcess((__int64)ProcessId);
  if ( (PROCESS[1].DirectoryTableBase & 0x4000000000000LL) != 0 )
  {
    KeStackAttachProcess(PROCESS, &ApcState);
    if ( (PROCESS[1].DirectoryTableBase & 0x400) != 0 )
      (*((void (__fastcall **)(PRKPROCESS))&xmmword_140C1DFD0 + 1))(PROCESS);
    PspExitProcess(0LL, PROCESS);
    KeUnstackDetachProcess(&ApcState);
    MmDeleteProcessAddressSpace((ULONG_PTR)PROCESS);
  }
  if ( PROCESS[1].Affinity.Bitmap[16] )
  {
    PspRemoveProcessFromJobChain(PROCESS, 0LL, 1u, 0);
    ObDereferenceObjectDeferDeleteWithTag((PVOID)PROCESS[1].Affinity.Bitmap[16], 0x73507350u);
    PROCESS[1].Affinity.Bitmap[16] = 0LL;
    PROCESS[1].Affinity.Bitmap[11] = 0LL;
    *(_QWORD *)&PROCESS[2].Header.Lock = MmBadPointer;
  }
  Next = PROCESS[2].SwapListEntry.Next;
  if ( Next )
    PsDereferencePartition((__int64)Next);
  if ( PROCESS->SecureState.SecureHandle )
    KeUnsecureProcess((__int64)PROCESS);
  if ( PROCESS[1].Header.WaitListHead.Flink )
  {
    --CurrentThread->SpecialApcDisable;
    v12 = ExMapHandleToPointer((unsigned int *)PspCidTable, (__int64)PROCESS[1].Header.WaitListHead.Flink);
    if ( !v12 )
      KeBugCheck(0x17u);
    ExDestroyHandle(PspCidTable, (__int64)PROCESS[1].Header.WaitListHead.Flink, v12);
    KiLeaveGuardedRegionUnsafe((__int64)CurrentThread, v13, v14, v15);
  }
  if ( PROCESS[1].Affinity.Bitmap[5] )
    SeDeassignPrimaryToken(PROCESS);
  v16 = (void *)PROCESS[1].AffinityPadding[0];
  if ( v16 )
  {
    ExFreePoolWithTag(v16, 0);
    PsReturnProcessNonPagedPoolQuota((ULONG_PTR)PROCESS, 0x6028uLL);
  }
  SmProcessDeleteNotification(PROCESS);
  EtwExitProcess(PROCESS);
  LpcExitProcess(PROCESS);
  ExWnfExitProcess(PROCESS, 1LL);
  IoSetDiskIoAttributionOnProcess(0LL, (__int64)PROCESS);
  PoEnergyContextCleanup(PROCESS);
  if ( PROCESS[2].Affinity.Bitmap[5] )
  {
    VmpProcessContextCleanup();
    ExFreePoolWithTag((PVOID)PROCESS[2].Affinity.Bitmap[5], 0);
  }
  if ( KiQueryUnbiasedInterruptTime() >= (unsigned __int64)qword_140C4C660 )
  {
    v20 = &KeServiceDescriptorTable;
    _mm_prefetch((const char *)&KeServiceDescriptorTable, 0);
    v21 = qword_140C4C650;
    v22 = 64;
    v23 = qword_140C4C658;
    v24 = qword_140C4C650;
    v25 = 8LL;
    do
    {
      v24 = __ROR8__(v24 - *(_QWORD *)v20, qword_140C4C658);
      v20 = (__int128 *)((char *)v20 + 8);
      v22 -= 8;
      --v25;
    }
    while ( v25 );
    for ( ; v22; --v22 )
    {
      v26 = *(unsigned __int8 *)v20;
      v20 = (__int128 *)((char *)v20 + 1);
      v24 = __ROR8__(v24 - v26, qword_140C4C658);
    }
    v27 = qword_140C4C668 == v24;
    v28 = qword_140C4C620;
    if ( !v27 && !qword_140C4C620 )
    {
      v23 = qword_140C4C658;
      v21 = qword_140C4C650;
      v28 = (unsigned int)__ROR4__(2120, 35);
      qword_140C4C620 = (unsigned int)v28;
      xmmword_140C4C628 = 0LL;
      qword_140C4C638 = 267LL;
      qword_140C4C640 = (__int64)&KeServiceDescriptorTable;
    }
    v29 = (_QWORD *)KeServiceDescriptorTable;
    v30 = (const char *)KeServiceDescriptorTable;
    v31 = 4 * xmmword_140E018D0;
    v32 = KeServiceDescriptorTable + (unsigned int)(4 * xmmword_140E018D0);
    if ( (unsigned __int64)KeServiceDescriptorTable < v32 )
    {
      do
      {
        _mm_prefetch(v30, 0);
        v30 += 64;
      }
      while ( (unsigned __int64)v30 < v32 );
    }
    v33 = v21;
    if ( v31 >= 8 )
    {
      v34 = (unsigned __int64)v31 >> 3;
      do
      {
        v33 = __ROR8__(v33 - *v29++, v23);
        v31 -= 8;
        --v34;
      }
      while ( v34 );
    }
    for ( ; v31; --v31 )
    {
      v35 = *(unsigned __int8 *)v29;
      v29 = (_QWORD *)((char *)v29 + 1);
      v33 = __ROR8__(v33 - v35, v23);
    }
    if ( qword_140C4C670 != v33 && !v28 )
    {
      v23 = qword_140C4C658;
      v21 = qword_140C4C650;
      v28 = (unsigned int)__ROR4__(1111490560, 150);
      qword_140C4C620 = (unsigned int)v28;
      xmmword_140C4C628 = 0LL;
      qword_140C4C638 = 267LL;
      qword_140C4C640 = KeServiceDescriptorTable;
    }
    v36 = &KeServiceDescriptorTableShadow;
    _mm_prefetch((const char *)&KeServiceDescriptorTableShadow, 0);
    v37 = 4LL;
    v38 = 32;
    do
    {
      v21 = __ROR8__(v21 - *(_QWORD *)v36, v23);
      v36 = (__int128 *)((char *)v36 + 8);
      v38 -= 8;
      --v37;
    }
    while ( v37 );
    for ( ; v38; --v38 )
    {
      v39 = *(unsigned __int8 *)v36;
      v36 = (__int128 *)((char *)v36 + 1);
      v21 = __ROR8__(v21 - v39, v23);
    }
    if ( qword_140C4C678 != v21 && !v28 )
    {
      qword_140C4C638 = 267LL;
      v28 = (unsigned int)__ROR4__(603979780, 186);
      qword_140C4C620 = (unsigned int)v28;
      xmmword_140C4C628 = 0LL;
      qword_140C4C640 = (__int64)&KeServiceDescriptorTableShadow;
    }
    if ( (_QWORD)KeServiceDescriptorTableShadow != (_QWORD)KeServiceDescriptorTable
      || (_DWORD)xmmword_140CFCA50 != (_DWORD)xmmword_140E018D0 )
    {
      if ( v28 )
        goto LABEL_53;
      v28 = (unsigned int)__ROR4__(4240, 68);
      qword_140C4C620 = (unsigned int)v28;
      xmmword_140C4C628 = 0LL;
      qword_140C4C638 = 267LL;
      qword_140C4C640 = KeServiceDescriptorTableShadow;
    }
    if ( !v28 )
    {
LABEL_58:
      UnbiasedInterruptTime = KiQueryUnbiasedInterruptTime();
      v17 = 41929663 * (__rdtsc() >> 4) % 0x12A05F2000LL;
      qword_140C4C660 = UnbiasedInterruptTime + v17 + 288000000000LL;
      goto LABEL_59;
    }
LABEL_53:
    if ( (void (__fastcall __noreturn *)(struct _KDPC *, ULONG_PTR *, PVOID, PVOID))stru_140C4C5E0.DeferredRoutine != KiSchedulerDpc )
      KeInitializeDpc(&stru_140C4C5E0, (PKDEFERRED_ROUTINE)KiSchedulerDpc, &stru_140C4C5E0);
    qword_140C4C648 = 1845792LL;
    KeInsertQueueDpc(&stru_140C4C5E0, 0LL, 0LL);
    goto LABEL_58;
  }
LABEL_59:
  v41 = (volatile signed __int32 *)PROCESS[1].AffinityPadding[7];
  if ( v41 )
  {
    _InterlockedAdd(v41 + 129, 0xFFFFFFFF);
    PspDereferenceQuotaBlock(v41, v17, v18, v19);
  }
  v42 = (void *)PROCESS[1].AffinityPadding[10];
  if ( v42 )
  {
    ExFreePoolWithTag(v42, 0);
    PROCESS[1].AffinityPadding[10] = 0LL;
  }
}
