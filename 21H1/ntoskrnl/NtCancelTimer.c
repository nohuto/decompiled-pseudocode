/*
 * XREFs of NtCancelTimer @ 0x14033ECF0
 * Callers:
 *     <none>
 * Callees:
 *     ExpSetTimerObject2 @ 0x14024261C (ExpSetTimerObject2.c)
 *     KeLeaveCriticalRegionThread @ 0x1402486B0 (KeLeaveCriticalRegionThread.c)
 *     MiGetSystemRegionType @ 0x1402609A0 (MiGetSystemRegionType.c)
 *     KiAbThreadRemoveBoosts @ 0x140260D50 (KiAbThreadRemoveBoosts.c)
 *     MmGetSessionIdEx @ 0x140260EB0 (MmGetSessionIdEx.c)
 *     ObfDereferenceObjectWithTag @ 0x1402611B0 (ObfDereferenceObjectWithTag.c)
 *     KxReleaseSpinLock @ 0x140277410 (KxReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x1402E4740 (KeAcquireSpinLockRaiseToDpc.c)
 *     KxWaitForSpinLockAndAcquire @ 0x1402E47D0 (KxWaitForSpinLockAndAcquire.c)
 *     ObpDeferObjectDeletion @ 0x14030B7E0 (ObpDeferObjectDeletion.c)
 *     PoDestroyReasonContext @ 0x14033D208 (PoDestroyReasonContext.c)
 *     ExpCancelTimer @ 0x14033F390 (ExpCancelTimer.c)
 *     KiAbEntryRemoveFromTree @ 0x1403410E0 (KiAbEntryRemoveFromTree.c)
 *     KiCheckForKernelApcDelivery @ 0x1403599E0 (KiCheckForKernelApcDelivery.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x140359E30 (ExfAcquirePushLockExclusiveEx.c)
 *     ExfTryToWakePushLock @ 0x14035A680 (ExfTryToWakePushLock.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403EC9E4 (KiRemoveSystemWorkPriorityKick.c)
 *     EtwTraceAutoBoostEntryExhaustion @ 0x1403F1844 (EtwTraceAutoBoostEntryExhaustion.c)
 *     KeBugCheckEx @ 0x1403F5E40 (KeBugCheckEx.c)
 *     KiAcquireSpinLockInstrumented @ 0x140510DCC (KiAcquireSpinLockInstrumented.c)
 *     KiReleaseSpinLockInstrumented @ 0x140510ED8 (KiReleaseSpinLockInstrumented.c)
 *     ObpPushStackInfo @ 0x14055F238 (ObpPushStackInfo.c)
 *     ObReferenceObjectByHandle @ 0x14062B200 (ObReferenceObjectByHandle.c)
 */

NTSTATUS __cdecl NtCancelTimer(HANDLE TimerHandle, PBOOLEAN CurrentState)
{
  KPROCESSOR_MODE PreviousMode; // r13
  _DWORD *SchedulerAssist; // r9
  int v6; // r14d
  struct _KTIMER *v7; // rbx
  char *v8; // r15
  __int64 v9; // rdx
  __int64 v10; // r8
  struct _OBJECT_TYPE *v11; // rax
  volatile signed __int32 *v12; // rdi
  unsigned __int8 CurrentIrql; // cl
  struct _KPRCB *CurrentPrcb; // rbx
  _DWORD *v15; // rcx
  _QWORD *v16; // rsi
  int v17; // ebx
  struct _KPRCB *v18; // rcx
  _DWORD *v19; // rdx
  int v20; // edi
  signed __int64 v21; // rax
  _DWORD *v23; // rcx
  struct _KTHREAD *v24; // r10
  __int64 v25; // rcx
  char v26; // dl
  __int64 v27; // rdx
  int SessionId; // ecx
  struct _KTHREAD *v29; // rcx
  bool v30; // zf
  _QWORD *v32; // rax
  __int64 v33; // rdx
  _QWORD *v34; // rcx
  char v35; // r10
  unsigned int v36; // edx
  ULONG_PTR v37; // r10
  __int64 v38; // r9
  unsigned int v39; // r11d
  __int64 v40; // rcx
  __int64 v41; // rcx
  int v42; // ecx
  unsigned __int8 v43; // al
  __int64 v44; // rdx
  __int64 v45; // r8
  __int64 v46; // r9
  __int64 v47; // rcx
  int v48; // eax
  int v49; // eax
  unsigned __int8 v50; // al
  struct _KPRCB *v51; // r10
  _DWORD *v52; // r9
  int v53; // eax
  __int64 AbOrphanedEntrySummary; // rax
  int v55; // eax
  unsigned __int8 v56; // al
  struct _KPRCB *v57; // r11
  _DWORD *v58; // r9
  int v59; // eax
  KIRQL BugCheckParameter1; // [rsp+30h] [rbp-78h]
  struct _KTHREAD *BugCheckParameter1a; // [rsp+30h] [rbp-78h]
  PVOID Object; // [rsp+38h] [rbp-70h] BYREF
  struct _KTHREAD *v63; // [rsp+40h] [rbp-68h]
  int v64; // [rsp+48h] [rbp-60h]
  _DWORD v65[3]; // [rsp+4Ch] [rbp-5Ch] BYREF
  struct _KTHREAD *CurrentThread; // [rsp+58h] [rbp-50h]
  _QWORD *v67; // [rsp+60h] [rbp-48h]
  unsigned __int64 v68; // [rsp+68h] [rbp-40h]
  void *retaddr; // [rsp+A8h] [rbp+0h]
  char v70; // [rsp+B8h] [rbp+10h]
  __int64 v71; // [rsp+B8h] [rbp+10h]
  unsigned __int8 v72; // [rsp+B8h] [rbp+10h]
  int v73; // [rsp+C8h] [rbp+20h] BYREF

  PreviousMode = KeGetCurrentThread()->PreviousMode;
  if ( CurrentState && PreviousMode )
  {
    v47 = 0x7FFFFFFF0000LL;
    if ( (unsigned __int64)CurrentState < 0x7FFFFFFF0000LL )
      v47 = (__int64)CurrentState;
    *(_BYTE *)v47 = *(_BYTE *)v47;
  }
  Object = 0LL;
  v6 = ObReferenceObjectByHandle(TimerHandle, 2u, 0LL, PreviousMode, &Object, 0LL);
  v65[1] = v6;
  if ( v6 < 0 )
    return v6;
  v7 = (struct _KTIMER *)Object;
  v8 = (char *)Object - 48;
  v9 = (unsigned __int8)ObHeaderCookie;
  v10 = (unsigned __int8)ObHeaderCookie ^ (unsigned __int8)*((char *)Object - 24) ^ (unsigned __int64)(unsigned __int8)((unsigned __int16)((_WORD)Object - 48) >> 8);
  v11 = (struct _OBJECT_TYPE *)ObTypeIndexTable[v10];
  if ( v11 == ExpIRTimerObjectType )
  {
    if ( CurrentState )
    {
      ObfDereferenceObjectWithTag(Object, 0x746C6644u);
      return -1073741811;
    }
    else
    {
      return ExpSetTimerObject2(Object, 0LL, 0LL, 0LL);
    }
  }
  else
  {
    if ( v11 == ExTimerObjectType )
    {
      CurrentThread = 0LL;
      v70 = 0;
      v12 = (volatile signed __int32 *)((char *)Object + 64);
      CurrentIrql = KeGetCurrentIrql();
      BugCheckParameter1 = CurrentIrql;
      __writecr8(2uLL);
      if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu )
      {
        SchedulerAssist = KeGetCurrentPrcb()->SchedulerAssist;
        v9 = (-1LL << (CurrentIrql + 1)) & 4;
        v10 = (unsigned int)v9 | SchedulerAssist[5];
        SchedulerAssist[5] = v10;
        v7 = (struct _KTIMER *)Object;
      }
      if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
      {
        KiAcquireSpinLockInstrumented(v12);
      }
      else
      {
        CurrentPrcb = KeGetCurrentPrcb();
        v15 = CurrentPrcb->SchedulerAssist;
        if ( v15 )
        {
          if ( CurrentPrcb->NestingLevel <= 1u )
          {
            v48 = v15[6];
            v15[6] = v48 + 1;
            if ( v48 == -1 )
              KiRemoveSystemWorkPriorityKick(CurrentPrcb);
          }
        }
        if ( _interlockedbittestandset64(v12, 0LL) )
        {
          v23 = CurrentPrcb->SchedulerAssist;
          if ( v23 )
          {
            if ( CurrentPrcb->NestingLevel <= 1u )
            {
              v49 = v23[6] - 1;
              v23[6] = v49;
              if ( !v49 )
                KiRemoveSystemWorkPriorityKick(CurrentPrcb);
            }
          }
          KxWaitForSpinLockAndAcquire(v12, v9, v10, (__int64)SchedulerAssist);
        }
        v7 = (struct _KTIMER *)Object;
      }
      v16 = *(_QWORD **)&v7[4].Header.Lock;
      v67 = v16;
      if ( !v16 )
        goto LABEL_11;
      KxReleaseSpinLock((PKSPIN_LOCK)v12);
      if ( KiIrqlFlags )
      {
        if ( (KiIrqlFlags & 1) != 0 )
        {
          v50 = KeGetCurrentIrql();
          if ( v50 <= 0xFu && BugCheckParameter1 <= 0xFu && v50 >= 2u )
          {
            v51 = KeGetCurrentPrcb();
            v52 = v51->SchedulerAssist;
            v53 = ~(unsigned __int16)(-1LL << (BugCheckParameter1 + 1));
            v30 = (v53 & v52[5]) == 0;
            v52[5] &= v53;
            if ( v30 )
              KiRemoveSystemWorkPriorityKick(v51);
          }
        }
      }
      __writecr8(BugCheckParameter1);
      CurrentThread = KeGetCurrentThread();
      --CurrentThread->KernelApcDisable;
      v65[0] = 0;
      v24 = KeGetCurrentThread();
      v63 = v24;
      --v24->SpecialApcDisable;
      if ( ++v24->AbAllocationRegionCount != 1 )
        KeBugCheckEx(0x192u, (ULONG_PTR)v24, (ULONG_PTR)&ExpWakeTimerLock, KeGetCurrentIrql(), 0LL);
      v64 = 0;
      LOBYTE(v25) = v24->AbEntrySummary;
      if ( !(_BYTE)v25 )
      {
        if ( !v24->AbOrphanedEntrySummary )
        {
          v27 = 0LL;
          v71 = 0LL;
          if ( (WORD2(PerfGlobalGroupMask) & 0x200) != 0 )
          {
            EtwTraceAutoBoostEntryExhaustion(v24, &ExpWakeTimerLock);
            v24 = v63;
            v27 = 0LL;
          }
          goto LABEL_30;
        }
        AbOrphanedEntrySummary = v24->AbOrphanedEntrySummary;
        v24->AbOrphanedEntrySummary = 0;
        LOBYTE(v25) = AbOrphanedEntrySummary | v24->AbEntrySummary;
      }
      v26 = v25;
      _BitScanForward((unsigned int *)&v25, (unsigned __int8)v25);
      v64 = v25;
      v24->AbEntrySummary = v26 & ~(1 << v25);
      v27 = (__int64)&v24->LockEntries[v25];
      v71 = v27;
LABEL_30:
      if ( v27 )
      {
        if ( (unsigned __int64)&ExpWakeTimerLock >= 0xFFFF800000000000uLL
          && byte_140C4F908[(((unsigned __int64)&ExpWakeTimerLock >> 39) & 0x1FF) - 256] == 1 )
        {
          SessionId = MmGetSessionIdEx((__int64)v24->ApcState.Process);
          v24 = v63;
          v27 = v71;
        }
        else
        {
          SessionId = -1;
        }
        *(_DWORD *)(v27 + 40) = SessionId;
        *(_QWORD *)(v27 + 32) = (unsigned __int64)&ExpWakeTimerLock & 0x7FFFFFFFFFFFFFFCLL;
      }
      else
      {
        _interlockedbittestandset((volatile signed __int32 *)&v24->116 + 1, 0x10u);
      }
      --v24->AbAllocationRegionCount;
      KiAbThreadRemoveBoosts((ULONG_PTR)v24, (__int64)&ExpWakeTimerLock, v65);
      v29 = v63;
      v30 = v63->SpecialApcDisable++ == -1;
      if ( v30 && ($C774EFD68449142D8271B1EC1EB7FB26 *)v29->ApcState.ApcListHead[0].Flink != &v29->152 )
        KiCheckForKernelApcDelivery(v29);
      if ( _interlockedbittestandset64((volatile signed __int32 *)&ExpWakeTimerLock, 0LL) )
        ExfAcquirePushLockExclusiveEx(&ExpWakeTimerLock, v71, &ExpWakeTimerLock);
      if ( v71 )
        *(_BYTE *)(v71 + 26) |= 1u;
      v70 = 1;
      BugCheckParameter1 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)v12);
      v16 = *(_QWORD **)&v7[4].Header.Lock;
      v67 = v16;
      *(_QWORD *)&v7[4].Header.Lock = 0LL;
      v7 = (struct _KTIMER *)Object;
LABEL_11:
      v17 = ExpCancelTimer(v7) + 1;
      if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
        KiReleaseSpinLockInstrumented(v12, retaddr);
      else
        _InterlockedAnd64((volatile signed __int64 *)v12, 0LL);
      v18 = KeGetCurrentPrcb();
      v19 = v18->SchedulerAssist;
      if ( v19 )
      {
        if ( v18->NestingLevel <= 1u )
        {
          v55 = v19[6] - 1;
          v19[6] = v55;
          if ( !v55 )
            KiRemoveSystemWorkPriorityKick(v18);
        }
      }
      if ( KiIrqlFlags )
      {
        if ( (KiIrqlFlags & 1) != 0 )
        {
          v56 = KeGetCurrentIrql();
          if ( v56 <= 0xFu && BugCheckParameter1 <= 0xFu && v56 >= 2u )
          {
            v57 = KeGetCurrentPrcb();
            v58 = v57->SchedulerAssist;
            v59 = ~(unsigned __int16)(-1LL << (BugCheckParameter1 + 1));
            v30 = (v59 & v58[5]) == 0;
            v58[5] &= v59;
            if ( v30 )
              KiRemoveSystemWorkPriorityKick(v57);
          }
        }
      }
      __writecr8(BugCheckParameter1);
      if ( v70 )
      {
        if ( v16 )
        {
          v32 = (char *)Object + 264;
          v33 = *((_QWORD *)Object + 33);
          v34 = (_QWORD *)*((_QWORD *)Object + 34);
          if ( *(PVOID *)(v33 + 8) != (char *)Object + 264 || (_QWORD *)*v34 != v32 )
            __fastfail(3u);
          *v34 = v33;
          *(_QWORD *)(v33 + 8) = v34;
          *v32 = 0LL;
        }
        v35 = _InterlockedExchangeAdd64((volatile signed __int64 *)&ExpWakeTimerLock, 0xFFFFFFFFFFFFFFFFuLL);
        if ( (v35 & 2) != 0 && (v35 & 4) == 0 )
          ExfTryToWakePushLock(&ExpWakeTimerLock);
        v73 = 0;
        BugCheckParameter1a = KeGetCurrentThread();
        if ( (unsigned int)MiGetSystemRegionType((unsigned __int64)&ExpWakeTimerLock) == 1 )
          v36 = MmGetSessionIdEx((__int64)BugCheckParameter1a->ApcState.Process);
        else
          v36 = -1;
        v37 = (ULONG_PTR)BugCheckParameter1a;
        --BugCheckParameter1a->SpecialApcDisable;
        v72 = ++BugCheckParameter1a->AbAllocationRegionCount;
        v38 = 0LL;
        v63 = 0LL;
        v68 = (unsigned __int64)&ExpWakeTimerLock & 0x7FFFFFFFFFFFFFFCLL;
        v39 = ((char)BugCheckParameter1a->AbEntrySummary | (char)BugCheckParameter1a->AbOrphanedEntrySummary) ^ 0x3F;
        v30 = !_BitScanReverse((unsigned int *)&v40, v39);
        if ( !v30 )
        {
          while ( 1 )
          {
            v39 &= ~(1 << v40);
            v41 = (__int64)&BugCheckParameter1a->LockEntries[v40];
            if ( (*(_BYTE *)(v41 + 26) & 1) != 0
              && (*(_DWORD *)(v41 + 32) & 1) == 0
              && (*(_QWORD *)(v41 + 32) & 0x7FFFFFFFFFFFFFFCLL) == v68
              && *(_DWORD *)(v41 + 40) == v36 )
            {
              *(_BYTE *)(v41 + 26) &= ~1u;
              if ( *(_QWORD *)(v41 + 32) )
                break;
            }
            v30 = !_BitScanReverse((unsigned int *)&v40, v39);
            if ( v30 )
              goto LABEL_57;
          }
          v38 = v41;
          v63 = (struct _KTHREAD *)v41;
        }
LABEL_57:
        if ( v38 )
        {
          *(_BYTE *)(v38 + 32) |= 2u;
          if ( *(__int64 *)(v38 + 32) < 0 )
          {
            KiAbEntryRemoveFromTree((PRTL_BALANCED_NODE)v38);
            v37 = (ULONG_PTR)BugCheckParameter1a;
            v38 = (__int64)v63;
          }
          v42 = *(_DWORD *)(v38 + 88);
          v73 = v42 & 0x1FFFF;
          *(_DWORD *)(v38 + 88) = v42 & 0xFFFE0000;
          *(_BYTE *)(v38 + 25) &= ~1u;
          *(_QWORD *)(v38 + 32) = 0LL;
          v43 = 1 << ((v38 - *(_QWORD *)(v37 + 800)) / 96);
          if ( v72 == 1 )
            *(_BYTE *)(v37 + 792) |= v43;
          else
            _InterlockedOr8((volatile signed __int8 *)(v37 + 870), v43);
        }
        else if ( (*((_DWORD *)&BugCheckParameter1a->0 + 1) & 0x10000) == 0 )
        {
          KeBugCheckEx(0x162u, (ULONG_PTR)BugCheckParameter1a, (ULONG_PTR)&ExpWakeTimerLock, v36, 0LL);
        }
        --*(_BYTE *)(v37 + 794);
        KiAbThreadRemoveBoosts(v37, (__int64)&ExpWakeTimerLock, &v73);
        v30 = BugCheckParameter1a->SpecialApcDisable++ == -1;
        if ( v30
          && ($C774EFD68449142D8271B1EC1EB7FB26 *)BugCheckParameter1a->ApcState.ApcListHead[0].Flink != &BugCheckParameter1a->152 )
        {
          KiCheckForKernelApcDelivery(BugCheckParameter1a);
        }
        KeLeaveCriticalRegionThread((__int64)CurrentThread, v44, v45, v46);
      }
      v20 = *((_DWORD *)Object + 1);
      if ( ObpTraceFlags )
        ObpPushStackInfo((_DWORD)v8);
      v21 = _InterlockedExchangeAdd64((volatile signed __int64 *)v8, -v17) - v17;
      if ( v21 <= 0 )
      {
        if ( *((_QWORD *)v8 + 1) )
          KeBugCheckEx(
            0x18u,
            ObTypeIndexTable[(unsigned __int8)ObHeaderCookie ^ (unsigned __int8)v8[24] ^ (unsigned __int64)BYTE1(v8)],
            (ULONG_PTR)Object,
            6uLL,
            *((_QWORD *)v8 + 1));
        if ( v21 < 0 )
          KeBugCheckEx(0x18u, 0LL, (ULONG_PTR)Object, 5uLL, v21);
        ObpDeferObjectDeletion((signed __int64)v8);
      }
      if ( CurrentState )
        *CurrentState = v20;
      if ( v16 )
        PoDestroyReasonContext(v16);
      return v6;
    }
    ObfDereferenceObjectWithTag(Object, 0x746C6644u);
    return -1073741788;
  }
}
