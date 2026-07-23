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
  struct _DMA_ADAPTER *v7; // rcx
  unsigned __int64 v8; // rcx
  HANDLE ProcessId; // rax
  struct _SINGLE_LIST_ENTRY *Next; // rcx
  signed __int64 *v11; // rax
  __int64 v12; // rdx
  __int64 v13; // r8
  __int64 v14; // r9
  void *v15; // rcx
  unsigned __int64 v16; // rdx
  __int64 v17; // r8
  _BOOL8 v18; // r9
  __int128 *v19; // r9
  __int64 v20; // r8
  int v21; // r10d
  char v22; // di
  __int64 v23; // rdx
  __int64 v24; // rax
  __int64 v25; // rax
  bool v26; // zf
  __int64 v27; // rdx
  _QWORD *v28; // r11
  const char *v29; // rax
  unsigned int v30; // r10d
  unsigned __int64 v31; // rcx
  __int64 v32; // r9
  unsigned __int64 v33; // rax
  __int64 v34; // rax
  __int128 *v35; // r10
  __int64 v36; // rax
  int v37; // r9d
  __int64 v38; // rax
  __int64 UnbiasedInterruptTime; // r11
  volatile signed __int32 *v40; // rcx
  void *v41; // rcx
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
    ZwDeleteWnfStateName((PCWNF_STATE_NAME)&PROCESS[2].AffinityPadding[7]);
  v7 = (struct _DMA_ADAPTER *)PROCESS[1].AffinityPadding[9];
  if ( v7 )
  {
    HalPutDmaAdapter(v7);
    PROCESS[1].AffinityPadding[9] = 0LL;
  }
  v8 = PROCESS[1].Affinity.Bitmap[4];
  if ( v8 )
  {
    HalPutDmaAdapter((PADAPTER_OBJECT)(v8 & 0xFFFFFFFFFFFFFFF8uLL));
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
    v11 = ExMapHandleToPointer((unsigned int *)PspCidTable, (__int64)PROCESS[1].Header.WaitListHead.Flink);
    if ( !v11 )
      KeBugCheck(0x17u);
    ExDestroyHandle(PspCidTable, (__int64)PROCESS[1].Header.WaitListHead.Flink, v11);
    KiLeaveGuardedRegionUnsafe((__int64)CurrentThread, v12, v13, v14);
  }
  if ( PROCESS[1].Affinity.Bitmap[5] )
    SeDeassignPrimaryToken(PROCESS);
  v15 = (void *)PROCESS[1].AffinityPadding[0];
  if ( v15 )
  {
    ExFreePoolWithTag(v15, 0);
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
    v19 = &KeServiceDescriptorTable;
    _mm_prefetch((const char *)&KeServiceDescriptorTable, 0);
    v20 = qword_140C4C650;
    v21 = 64;
    v22 = qword_140C4C658;
    v23 = qword_140C4C650;
    v24 = 8LL;
    do
    {
      v23 = __ROR8__(v23 - *(_QWORD *)v19, qword_140C4C658);
      v19 = (__int128 *)((char *)v19 + 8);
      v21 -= 8;
      --v24;
    }
    while ( v24 );
    for ( ; v21; --v21 )
    {
      v25 = *(unsigned __int8 *)v19;
      v19 = (__int128 *)((char *)v19 + 1);
      v23 = __ROR8__(v23 - v25, qword_140C4C658);
    }
    v26 = qword_140C4C668 == v23;
    v27 = qword_140C4C620;
    if ( !v26 && !qword_140C4C620 )
    {
      v22 = qword_140C4C658;
      v20 = qword_140C4C650;
      v27 = (unsigned int)__ROR4__(2120, 35);
      qword_140C4C620 = (unsigned int)v27;
      xmmword_140C4C628 = 0LL;
      qword_140C4C638 = 267LL;
      qword_140C4C640 = (__int64)&KeServiceDescriptorTable;
    }
    v28 = (_QWORD *)KeServiceDescriptorTable;
    v29 = (const char *)KeServiceDescriptorTable;
    v30 = 4 * xmmword_140E018D0;
    v31 = KeServiceDescriptorTable + (unsigned int)(4 * xmmword_140E018D0);
    if ( (unsigned __int64)KeServiceDescriptorTable < v31 )
    {
      do
      {
        _mm_prefetch(v29, 0);
        v29 += 64;
      }
      while ( (unsigned __int64)v29 < v31 );
    }
    v32 = v20;
    if ( v30 >= 8 )
    {
      v33 = (unsigned __int64)v30 >> 3;
      do
      {
        v32 = __ROR8__(v32 - *v28++, v22);
        v30 -= 8;
        --v33;
      }
      while ( v33 );
    }
    for ( ; v30; --v30 )
    {
      v34 = *(unsigned __int8 *)v28;
      v28 = (_QWORD *)((char *)v28 + 1);
      v32 = __ROR8__(v32 - v34, v22);
    }
    if ( qword_140C4C670 != v32 && !v27 )
    {
      v22 = qword_140C4C658;
      v20 = qword_140C4C650;
      v27 = (unsigned int)__ROR4__(1111490560, 150);
      qword_140C4C620 = (unsigned int)v27;
      xmmword_140C4C628 = 0LL;
      qword_140C4C638 = 267LL;
      qword_140C4C640 = KeServiceDescriptorTable;
    }
    v35 = &KeServiceDescriptorTableShadow;
    _mm_prefetch((const char *)&KeServiceDescriptorTableShadow, 0);
    v36 = 4LL;
    v37 = 32;
    do
    {
      v20 = __ROR8__(v20 - *(_QWORD *)v35, v22);
      v35 = (__int128 *)((char *)v35 + 8);
      v37 -= 8;
      --v36;
    }
    while ( v36 );
    for ( ; v37; --v37 )
    {
      v38 = *(unsigned __int8 *)v35;
      v35 = (__int128 *)((char *)v35 + 1);
      v20 = __ROR8__(v20 - v38, v22);
    }
    if ( qword_140C4C678 != v20 && !v27 )
    {
      qword_140C4C638 = 267LL;
      v27 = (unsigned int)__ROR4__(603979780, 186);
      qword_140C4C620 = (unsigned int)v27;
      xmmword_140C4C628 = 0LL;
      qword_140C4C640 = (__int64)&KeServiceDescriptorTableShadow;
    }
    if ( (_QWORD)KeServiceDescriptorTableShadow != (_QWORD)KeServiceDescriptorTable
      || (_DWORD)xmmword_140CFCA50 != (_DWORD)xmmword_140E018D0 )
    {
      if ( v27 )
        goto LABEL_53;
      v27 = (unsigned int)__ROR4__(4240, 68);
      qword_140C4C620 = (unsigned int)v27;
      xmmword_140C4C628 = 0LL;
      qword_140C4C638 = 267LL;
      qword_140C4C640 = KeServiceDescriptorTableShadow;
    }
    if ( !v27 )
    {
LABEL_58:
      UnbiasedInterruptTime = KiQueryUnbiasedInterruptTime();
      v16 = 41929663 * (__rdtsc() >> 4) % 0x12A05F2000LL;
      qword_140C4C660 = UnbiasedInterruptTime + v16 + 288000000000LL;
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
  v40 = (volatile signed __int32 *)PROCESS[1].AffinityPadding[7];
  if ( v40 )
  {
    _InterlockedAdd(v40 + 129, 0xFFFFFFFF);
    PspDereferenceQuotaBlock(v40, v16, v17, v18);
  }
  v41 = (void *)PROCESS[1].AffinityPadding[10];
  if ( v41 )
  {
    ExFreePoolWithTag(v41, 0);
    PROCESS[1].AffinityPadding[10] = 0LL;
  }
}
