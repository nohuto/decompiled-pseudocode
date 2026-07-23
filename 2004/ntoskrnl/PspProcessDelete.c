/*
 * XREFs of PspProcessDelete @ 0x14061A610
 * Callers:
 *     <none>
 * Callees:
 *     KeUnstackDetachProcess @ 0x140205990 (KeUnstackDetachProcess.c)
 *     KiLeaveGuardedRegionUnsafe @ 0x140207EC0 (KiLeaveGuardedRegionUnsafe.c)
 *     HalPutDmaAdapter @ 0x140208270 (HalPutDmaAdapter.c)
 *     KeInsertQueueDpc @ 0x140214C00 (KeInsertQueueDpc.c)
 *     PsReturnProcessNonPagedPoolQuota @ 0x140220980 (PsReturnProcessNonPagedPoolQuota.c)
 *     KeStackAttachProcess @ 0x14024C170 (KeStackAttachProcess.c)
 *     PspUnlockProcessListExclusive @ 0x14026A584 (PspUnlockProcessListExclusive.c)
 *     PspLockProcessListExclusive @ 0x14026A76C (PspLockProcessListExclusive.c)
 *     PsGetProcessId @ 0x14026AB30 (PsGetProcessId.c)
 *     IoSetDiskIoAttributionOnProcess @ 0x14026ACE8 (IoSetDiskIoAttributionOnProcess.c)
 *     PsDereferencePartition @ 0x14026AD90 (PsDereferencePartition.c)
 *     ObDereferenceObjectDeferDeleteWithTag @ 0x140289860 (ObDereferenceObjectDeferDeleteWithTag.c)
 *     KiQueryUnbiasedInterruptTime @ 0x1402D233C (KiQueryUnbiasedInterruptTime.c)
 *     KeInitializeDpc @ 0x1402E3AC0 (KeInitializeDpc.c)
 *     __security_check_cookie @ 0x1403CCE60 (__security_check_cookie.c)
 *     ZwDeleteWnfStateName @ 0x1403F50C0 (ZwDeleteWnfStateName.c)
 *     KeBugCheck @ 0x1403F70B0 (KeBugCheck.c)
 *     _guard_dispatch_icall @ 0x1403FFC70 (_guard_dispatch_icall.c)
 *     KeUnsecureProcess @ 0x14050E698 (KeUnsecureProcess.c)
 *     ExMapHandleToPointer @ 0x140603450 (ExMapHandleToPointer.c)
 *     ObDereferenceDeviceMap @ 0x140619124 (ObDereferenceDeviceMap.c)
 *     WbRemoveWarbirdProcess @ 0x1406191AC (WbRemoveWarbirdProcess.c)
 *     PoEnergyContextCleanup @ 0x14061ABFC (PoEnergyContextCleanup.c)
 *     LpcExitProcess @ 0x14061AD78 (LpcExitProcess.c)
 *     EtwExitProcess @ 0x14061AE58 (EtwExitProcess.c)
 *     SeDeassignPrimaryToken @ 0x14061AEC4 (SeDeassignPrimaryToken.c)
 *     MmDeleteProcessAddressSpace @ 0x14061D27C (MmDeleteProcessAddressSpace.c)
 *     PspExitProcess @ 0x14061D5F4 (PspExitProcess.c)
 *     ExWnfExitProcess @ 0x140620214 (ExWnfExitProcess.c)
 *     PspRemoveProcessFromJobChain @ 0x14065A624 (PspRemoveProcessFromJobChain.c)
 *     PspDereferenceQuotaBlock @ 0x14066A848 (PspDereferenceQuotaBlock.c)
 *     ExDestroyHandle @ 0x14069AF88 (ExDestroyHandle.c)
 *     SmProcessDeleteNotification @ 0x14092649C (SmProcessDeleteNotification.c)
 *     VmpProcessContextCleanup @ 0x14092C4BC (VmpProcessContextCleanup.c)
 *     ExFreePoolWithTag @ 0x1409B1140 (ExFreePoolWithTag.c)
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
  void *v12; // rcx
  __int128 *v13; // r9
  __int64 v14; // r8
  int v15; // r10d
  char v16; // di
  __int64 v17; // rdx
  __int64 v18; // rax
  __int64 v19; // rax
  bool v20; // zf
  __int64 v21; // rdx
  _QWORD *v22; // r11
  const char *v23; // rax
  unsigned int v24; // r10d
  unsigned __int64 v25; // rcx
  __int64 v26; // r9
  unsigned __int64 v27; // rax
  __int64 v28; // rax
  __int128 *v29; // r10
  __int64 v30; // rax
  int v31; // r9d
  __int64 v32; // rax
  volatile signed __int32 *v33; // rcx
  void *v34; // rcx
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
      (*((void (__fastcall **)(PRKPROCESS))&xmmword_140C1DDF0 + 1))(PROCESS);
    PspExitProcess(0LL, PROCESS);
    KeUnstackDetachProcess(&ApcState);
    MmDeleteProcessAddressSpace((ULONG_PTR)PROCESS);
  }
  if ( PROCESS[1].Affinity.Bitmap[16] )
  {
    PspRemoveProcessFromJobChain(PROCESS);
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
    ExDestroyHandle(PspCidTable, PROCESS[1].Header.WaitListHead.Flink, v11);
    KiLeaveGuardedRegionUnsafe((__int64)CurrentThread);
  }
  if ( PROCESS[1].Affinity.Bitmap[5] )
    SeDeassignPrimaryToken(PROCESS);
  v12 = (void *)PROCESS[1].AffinityPadding[0];
  if ( v12 )
  {
    ExFreePoolWithTag(v12, 0);
    PsReturnProcessNonPagedPoolQuota(PROCESS, 24616LL);
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
  if ( KiQueryUnbiasedInterruptTime() >= (unsigned __int64)qword_140C4C510 )
  {
    v13 = &KeServiceDescriptorTable;
    _mm_prefetch((const char *)&KeServiceDescriptorTable, 0);
    v14 = qword_140C4C500;
    v15 = 64;
    v16 = qword_140C4C508;
    v17 = qword_140C4C500;
    v18 = 8LL;
    do
    {
      v17 = __ROR8__(v17 - *(_QWORD *)v13, qword_140C4C508);
      v13 = (__int128 *)((char *)v13 + 8);
      v15 -= 8;
      --v18;
    }
    while ( v18 );
    for ( ; v15; --v15 )
    {
      v19 = *(unsigned __int8 *)v13;
      v13 = (__int128 *)((char *)v13 + 1);
      v17 = __ROR8__(v17 - v19, qword_140C4C508);
    }
    v20 = qword_140C4C518 == v17;
    v21 = qword_140C4C4D0;
    if ( !v20 && !qword_140C4C4D0 )
    {
      v16 = qword_140C4C508;
      v14 = qword_140C4C500;
      v21 = (unsigned int)__ROR4__(2120, 35);
      qword_140C4C4D0 = (unsigned int)v21;
      xmmword_140C4C4D8 = 0LL;
      qword_140C4C4E8 = 267LL;
      qword_140C4C4F0 = (__int64)&KeServiceDescriptorTable;
    }
    v22 = (_QWORD *)KeServiceDescriptorTable;
    v23 = (const char *)KeServiceDescriptorTable;
    v24 = 4 * xmmword_140E018D0;
    v25 = KeServiceDescriptorTable + (unsigned int)(4 * xmmword_140E018D0);
    if ( (unsigned __int64)KeServiceDescriptorTable < v25 )
    {
      do
      {
        _mm_prefetch(v23, 0);
        v23 += 64;
      }
      while ( (unsigned __int64)v23 < v25 );
    }
    v26 = v14;
    if ( v24 >= 8 )
    {
      v27 = (unsigned __int64)v24 >> 3;
      do
      {
        v26 = __ROR8__(v26 - *v22++, v16);
        v24 -= 8;
        --v27;
      }
      while ( v27 );
    }
    for ( ; v24; --v24 )
    {
      v28 = *(unsigned __int8 *)v22;
      v22 = (_QWORD *)((char *)v22 + 1);
      v26 = __ROR8__(v26 - v28, v16);
    }
    if ( qword_140C4C520 != v26 && !v21 )
    {
      v16 = qword_140C4C508;
      v14 = qword_140C4C500;
      v21 = (unsigned int)__ROR4__(1111490560, 150);
      qword_140C4C4D0 = (unsigned int)v21;
      xmmword_140C4C4D8 = 0LL;
      qword_140C4C4E8 = 267LL;
      qword_140C4C4F0 = KeServiceDescriptorTable;
    }
    v29 = &KeServiceDescriptorTableShadow;
    _mm_prefetch((const char *)&KeServiceDescriptorTableShadow, 0);
    v30 = 4LL;
    v31 = 32;
    do
    {
      v14 = __ROR8__(v14 - *(_QWORD *)v29, v16);
      v29 = (__int128 *)((char *)v29 + 8);
      v31 -= 8;
      --v30;
    }
    while ( v30 );
    for ( ; v31; --v31 )
    {
      v32 = *(unsigned __int8 *)v29;
      v29 = (__int128 *)((char *)v29 + 1);
      v14 = __ROR8__(v14 - v32, v16);
    }
    if ( qword_140C4C528 != v14 && !v21 )
    {
      qword_140C4C4E8 = 267LL;
      v21 = (unsigned int)__ROR4__(603979780, 186);
      qword_140C4C4D0 = (unsigned int)v21;
      xmmword_140C4C4D8 = 0LL;
      qword_140C4C4F0 = (__int64)&KeServiceDescriptorTableShadow;
    }
    if ( (_QWORD)KeServiceDescriptorTableShadow != (_QWORD)KeServiceDescriptorTable
      || (_DWORD)xmmword_140CFCA50 != (_DWORD)xmmword_140E018D0 )
    {
      if ( v21 )
        goto LABEL_53;
      v21 = (unsigned int)__ROR4__(4240, 68);
      qword_140C4C4D0 = (unsigned int)v21;
      xmmword_140C4C4D8 = 0LL;
      qword_140C4C4E8 = 267LL;
      qword_140C4C4F0 = KeServiceDescriptorTableShadow;
    }
    if ( !v21 )
    {
LABEL_58:
      qword_140C4C510 = KiQueryUnbiasedInterruptTime() + 41929663 * (__rdtsc() >> 4) % 0x12A05F2000LL + 288000000000LL;
      goto LABEL_59;
    }
LABEL_53:
    if ( (void (__fastcall __noreturn *)(struct _KDPC *, ULONG_PTR *, PVOID, PVOID))DeferredContext.DeferredRoutine != KiSchedulerDpc )
      KeInitializeDpc(&DeferredContext, (PKDEFERRED_ROUTINE)KiSchedulerDpc, &DeferredContext);
    qword_140C4C4F8 = 1845792LL;
    KeInsertQueueDpc(&DeferredContext, 0LL, 0LL);
    goto LABEL_58;
  }
LABEL_59:
  v33 = (volatile signed __int32 *)PROCESS[1].AffinityPadding[7];
  if ( v33 )
  {
    _InterlockedAdd(v33 + 129, 0xFFFFFFFF);
    PspDereferenceQuotaBlock((PVOID)v33);
  }
  v34 = (void *)PROCESS[1].AffinityPadding[10];
  if ( v34 )
  {
    ExFreePoolWithTag(v34, 0);
    PROCESS[1].AffinityPadding[10] = 0LL;
  }
}
