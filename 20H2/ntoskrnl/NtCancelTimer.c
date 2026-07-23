/*
 * XREFs of NtCancelTimer @ 0x140288EC0
 * Callers:
 *     <none>
 * Callees:
 *     KeAcquireSpinLockRaiseToDpc @ 0x14021E5F0 (KeAcquireSpinLockRaiseToDpc.c)
 *     KxReleaseSpinLock @ 0x14021E780 (KxReleaseSpinLock.c)
 *     KeLeaveCriticalRegionThread @ 0x14021EB00 (KeLeaveCriticalRegionThread.c)
 *     MiGetSystemRegionType @ 0x140220A00 (MiGetSystemRegionType.c)
 *     KiAbThreadRemoveBoosts @ 0x140220DB0 (KiAbThreadRemoveBoosts.c)
 *     MmGetSessionIdEx @ 0x140220F10 (MmGetSessionIdEx.c)
 *     ObfDereferenceObjectWithTag @ 0x140221210 (ObfDereferenceObjectWithTag.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x140241C10 (ExfAcquirePushLockExclusiveEx.c)
 *     ExfTryToWakePushLock @ 0x140242B40 (ExfTryToWakePushLock.c)
 *     ExpCancelTimer @ 0x14028A550 (ExpCancelTimer.c)
 *     KiCheckForKernelApcDelivery @ 0x1402DDA40 (KiCheckForKernelApcDelivery.c)
 *     ExpSetTimerObject2 @ 0x1402E0A4C (ExpSetTimerObject2.c)
 *     KiAbEntryRemoveFromTree @ 0x1402F05E0 (KiAbEntryRemoveFromTree.c)
 *     ObpDeferObjectDeletion @ 0x14031A0E0 (ObpDeferObjectDeletion.c)
 *     KxWaitForSpinLockAndAcquire @ 0x140340590 (KxWaitForSpinLockAndAcquire.c)
 *     PoDestroyReasonContext @ 0x1403622D4 (PoDestroyReasonContext.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403F1DD4 (KiRemoveSystemWorkPriorityKick.c)
 *     EtwTraceAutoBoostEntryExhaustion @ 0x1403F74E8 (EtwTraceAutoBoostEntryExhaustion.c)
 *     KeBugCheckEx @ 0x1403FBCA0 (KeBugCheckEx.c)
 *     KiAcquireSpinLockInstrumented @ 0x140514D4C (KiAcquireSpinLockInstrumented.c)
 *     KiReleaseSpinLockInstrumented @ 0x140514E58 (KiReleaseSpinLockInstrumented.c)
 *     ObpPushStackInfo @ 0x140563258 (ObpPushStackInfo.c)
 *     ObReferenceObjectByHandle @ 0x1406118C0 (ObReferenceObjectByHandle.c)
 */

NTSTATUS __cdecl NtCancelTimer(HANDLE TimerHandle, PBOOLEAN CurrentState)
{
  KPROCESSOR_MODE PreviousMode; // r13
  int v5; // r14d
  struct _KTIMER *v6; // rbx
  char *v7; // r15
  struct _OBJECT_TYPE *v8; // rax
  volatile signed __int32 *v9; // rdi
  unsigned __int8 CurrentIrql; // cl
  struct _KPRCB *CurrentPrcb; // rbx
  _DWORD *v12; // rcx
  void *v13; // rsi
  int v14; // ebx
  struct _KPRCB *v15; // rcx
  _DWORD *v16; // rdx
  int v17; // edi
  signed __int64 v18; // rax
  _DWORD *v20; // rcx
  struct _KTHREAD *v21; // r10
  __int64 v22; // rcx
  char v23; // dl
  __int64 v24; // rdx
  int SessionId; // ecx
  __int64 v26; // rdx
  __int64 v27; // r8
  __int64 v28; // r9
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
  _DWORD *SchedulerAssist; // r9
  int v49; // eax
  int v50; // eax
  unsigned __int8 v51; // al
  struct _KPRCB *v52; // r10
  _DWORD *v53; // r9
  int v54; // eax
  __int64 AbOrphanedEntrySummary; // rax
  int v56; // eax
  unsigned __int8 v57; // al
  struct _KPRCB *v58; // r11
  _DWORD *v59; // r9
  int v60; // eax
  KIRQL BugCheckParameter1; // [rsp+30h] [rbp-78h]
  struct _KTHREAD *BugCheckParameter1a; // [rsp+30h] [rbp-78h]
  PVOID Object; // [rsp+38h] [rbp-70h] BYREF
  struct _KTHREAD *v64; // [rsp+40h] [rbp-68h]
  int v65; // [rsp+48h] [rbp-60h]
  _DWORD v66[3]; // [rsp+4Ch] [rbp-5Ch] BYREF
  struct _KTHREAD *CurrentThread; // [rsp+58h] [rbp-50h]
  void *v68; // [rsp+60h] [rbp-48h]
  unsigned __int64 v69; // [rsp+68h] [rbp-40h]
  void *retaddr; // [rsp+A8h] [rbp+0h]
  char v71; // [rsp+B8h] [rbp+10h]
  __int64 v72; // [rsp+B8h] [rbp+10h]
  unsigned __int8 v73; // [rsp+B8h] [rbp+10h]
  int v74; // [rsp+C8h] [rbp+20h] BYREF

  PreviousMode = KeGetCurrentThread()->PreviousMode;
  if ( CurrentState && PreviousMode )
  {
    v47 = 0x7FFFFFFF0000LL;
    if ( (unsigned __int64)CurrentState < 0x7FFFFFFF0000LL )
      v47 = (__int64)CurrentState;
    *(_BYTE *)v47 = *(_BYTE *)v47;
  }
  Object = 0LL;
  v5 = ObReferenceObjectByHandle(TimerHandle, 2u, 0LL, PreviousMode, &Object, 0LL);
  v66[1] = v5;
  if ( v5 < 0 )
    return v5;
  v6 = (struct _KTIMER *)Object;
  v7 = (char *)Object - 48;
  v8 = (struct _OBJECT_TYPE *)ObTypeIndexTable[(unsigned __int8)ObHeaderCookie ^ (unsigned __int8)*((char *)Object - 24) ^ (unsigned __int64)(unsigned __int8)((unsigned __int16)((_WORD)Object - 48) >> 8)];
  if ( v8 == ExpIRTimerObjectType )
  {
    if ( CurrentState )
    {
      ObfDereferenceObjectWithTag(Object, 0x746C6644u);
      return -1073741811;
    }
    else
    {
      return ExpSetTimerObject2(Object);
    }
  }
  else
  {
    if ( v8 == ExTimerObjectType )
    {
      CurrentThread = 0LL;
      v71 = 0;
      v9 = (volatile signed __int32 *)((char *)Object + 64);
      CurrentIrql = KeGetCurrentIrql();
      BugCheckParameter1 = CurrentIrql;
      __writecr8(2uLL);
      if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu )
      {
        SchedulerAssist = KeGetCurrentPrcb()->SchedulerAssist;
        SchedulerAssist[5] |= (-1 << (CurrentIrql + 1)) & 4;
        v6 = (struct _KTIMER *)Object;
      }
      if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
      {
        KiAcquireSpinLockInstrumented(v9);
      }
      else
      {
        CurrentPrcb = KeGetCurrentPrcb();
        v12 = CurrentPrcb->SchedulerAssist;
        if ( v12 )
        {
          if ( CurrentPrcb->NestingLevel <= 1u )
          {
            v49 = v12[6];
            v12[6] = v49 + 1;
            if ( v49 == -1 )
              KiRemoveSystemWorkPriorityKick(CurrentPrcb);
          }
        }
        if ( _interlockedbittestandset64(v9, 0LL) )
        {
          v20 = CurrentPrcb->SchedulerAssist;
          if ( v20 )
          {
            if ( CurrentPrcb->NestingLevel <= 1u )
            {
              v50 = v20[6] - 1;
              v20[6] = v50;
              if ( !v50 )
                KiRemoveSystemWorkPriorityKick(CurrentPrcb);
            }
          }
          KxWaitForSpinLockAndAcquire(v9);
        }
        v6 = (struct _KTIMER *)Object;
      }
      v13 = *(void **)&v6[4].Header.Lock;
      v68 = v13;
      if ( !v13 )
        goto LABEL_11;
      KxReleaseSpinLock((PKSPIN_LOCK)v9);
      if ( KiIrqlFlags )
      {
        if ( (KiIrqlFlags & 1) != 0 )
        {
          v51 = KeGetCurrentIrql();
          if ( v51 <= 0xFu && BugCheckParameter1 <= 0xFu && v51 >= 2u )
          {
            v52 = KeGetCurrentPrcb();
            v53 = v52->SchedulerAssist;
            v54 = ~(unsigned __int16)(-1LL << (BugCheckParameter1 + 1));
            v30 = (v54 & v53[5]) == 0;
            v53[5] &= v54;
            if ( v30 )
              KiRemoveSystemWorkPriorityKick(v52);
          }
        }
      }
      __writecr8(BugCheckParameter1);
      CurrentThread = KeGetCurrentThread();
      --CurrentThread->KernelApcDisable;
      v66[0] = 0;
      v21 = KeGetCurrentThread();
      v64 = v21;
      --v21->SpecialApcDisable;
      if ( ++v21->AbAllocationRegionCount != 1 )
        KeBugCheckEx(0x192u, (ULONG_PTR)v21, (ULONG_PTR)&ExpWakeTimerLock, KeGetCurrentIrql(), 0LL);
      v65 = 0;
      LOBYTE(v22) = v21->AbEntrySummary;
      if ( !(_BYTE)v22 )
      {
        if ( !v21->AbOrphanedEntrySummary )
        {
          v24 = 0LL;
          v72 = 0LL;
          if ( (WORD2(PerfGlobalGroupMask) & 0x200) != 0 )
          {
            EtwTraceAutoBoostEntryExhaustion(v21, &ExpWakeTimerLock);
            v21 = v64;
            v24 = 0LL;
          }
          goto LABEL_30;
        }
        AbOrphanedEntrySummary = v21->AbOrphanedEntrySummary;
        v21->AbOrphanedEntrySummary = 0;
        LOBYTE(v22) = AbOrphanedEntrySummary | v21->AbEntrySummary;
      }
      v23 = v22;
      _BitScanForward((unsigned int *)&v22, (unsigned __int8)v22);
      v65 = v22;
      v21->AbEntrySummary = v23 & ~(1 << v22);
      v24 = (__int64)&v21->LockEntries[v22];
      v72 = v24;
LABEL_30:
      if ( v24 )
      {
        if ( (unsigned __int64)&ExpWakeTimerLock >= 0xFFFF800000000000uLL
          && byte_140C4F848[(((unsigned __int64)&ExpWakeTimerLock >> 39) & 0x1FF) - 256] == 1 )
        {
          SessionId = MmGetSessionIdEx((__int64)v21->ApcState.Process);
          v21 = v64;
          v24 = v72;
        }
        else
        {
          SessionId = -1;
        }
        *(_DWORD *)(v24 + 40) = SessionId;
        *(_QWORD *)(v24 + 32) = (unsigned __int64)&ExpWakeTimerLock & 0x7FFFFFFFFFFFFFFCLL;
      }
      else
      {
        _interlockedbittestandset((volatile signed __int32 *)&v21->116 + 1, 0x10u);
      }
      --v21->AbAllocationRegionCount;
      KiAbThreadRemoveBoosts((ULONG_PTR)v21, (__int64)&ExpWakeTimerLock, v66);
      v29 = v64;
      v30 = v64->SpecialApcDisable++ == -1;
      if ( v30 && ($C774EFD68449142D8271B1EC1EB7FB26 *)v29->ApcState.ApcListHead[0].Flink != &v29->152 )
        KiCheckForKernelApcDelivery(v29, v26, v27, v28);
      if ( _interlockedbittestandset64((volatile signed __int32 *)&ExpWakeTimerLock, 0LL) )
        ExfAcquirePushLockExclusiveEx(&ExpWakeTimerLock, v72, (ULONG_PTR)&ExpWakeTimerLock);
      if ( v72 )
        *(_BYTE *)(v72 + 26) |= 1u;
      v71 = 1;
      BugCheckParameter1 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)v9);
      v13 = *(void **)&v6[4].Header.Lock;
      v68 = v13;
      *(_QWORD *)&v6[4].Header.Lock = 0LL;
      v6 = (struct _KTIMER *)Object;
LABEL_11:
      v14 = ExpCancelTimer(v6) + 1;
      if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
        KiReleaseSpinLockInstrumented(v9, retaddr);
      else
        _InterlockedAnd64((volatile signed __int64 *)v9, 0LL);
      v15 = KeGetCurrentPrcb();
      v16 = v15->SchedulerAssist;
      if ( v16 )
      {
        if ( v15->NestingLevel <= 1u )
        {
          v56 = v16[6] - 1;
          v16[6] = v56;
          if ( !v56 )
            KiRemoveSystemWorkPriorityKick(v15);
        }
      }
      if ( KiIrqlFlags )
      {
        if ( (KiIrqlFlags & 1) != 0 )
        {
          v57 = KeGetCurrentIrql();
          if ( v57 <= 0xFu && BugCheckParameter1 <= 0xFu && v57 >= 2u )
          {
            v58 = KeGetCurrentPrcb();
            v59 = v58->SchedulerAssist;
            v60 = ~(unsigned __int16)(-1LL << (BugCheckParameter1 + 1));
            v30 = (v60 & v59[5]) == 0;
            v59[5] &= v60;
            if ( v30 )
              KiRemoveSystemWorkPriorityKick(v58);
          }
        }
      }
      __writecr8(BugCheckParameter1);
      if ( v71 )
      {
        if ( v13 )
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
          ExfTryToWakePushLock((volatile signed __int64 *)&ExpWakeTimerLock);
        v74 = 0;
        BugCheckParameter1a = KeGetCurrentThread();
        if ( (unsigned int)MiGetSystemRegionType((unsigned __int64)&ExpWakeTimerLock) == 1 )
          v36 = MmGetSessionIdEx((__int64)BugCheckParameter1a->ApcState.Process);
        else
          v36 = -1;
        v37 = (ULONG_PTR)BugCheckParameter1a;
        --BugCheckParameter1a->SpecialApcDisable;
        v73 = ++BugCheckParameter1a->AbAllocationRegionCount;
        v38 = 0LL;
        v64 = 0LL;
        v69 = (unsigned __int64)&ExpWakeTimerLock & 0x7FFFFFFFFFFFFFFCLL;
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
              && (*(_QWORD *)(v41 + 32) & 0x7FFFFFFFFFFFFFFCLL) == v69
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
          v64 = (struct _KTHREAD *)v41;
        }
LABEL_57:
        if ( v38 )
        {
          *(_BYTE *)(v38 + 32) |= 2u;
          if ( *(__int64 *)(v38 + 32) < 0 )
          {
            KiAbEntryRemoveFromTree((PRTL_BALANCED_NODE)v38);
            v37 = (ULONG_PTR)BugCheckParameter1a;
            v38 = (__int64)v64;
          }
          v42 = *(_DWORD *)(v38 + 88);
          v74 = v42 & 0x1FFFF;
          *(_DWORD *)(v38 + 88) = v42 & 0xFFFE0000;
          *(_BYTE *)(v38 + 25) &= ~1u;
          *(_QWORD *)(v38 + 32) = 0LL;
          v43 = 1 << ((v38 - *(_QWORD *)(v37 + 800)) / 96);
          if ( v73 == 1 )
            *(_BYTE *)(v37 + 792) |= v43;
          else
            _InterlockedOr8((volatile signed __int8 *)(v37 + 870), v43);
        }
        else if ( (*((_DWORD *)&BugCheckParameter1a->0 + 1) & 0x10000) == 0 )
        {
          KeBugCheckEx(0x162u, (ULONG_PTR)BugCheckParameter1a, (ULONG_PTR)&ExpWakeTimerLock, v36, 0LL);
        }
        --*(_BYTE *)(v37 + 794);
        KiAbThreadRemoveBoosts(v37, (__int64)&ExpWakeTimerLock, &v74);
        v30 = BugCheckParameter1a->SpecialApcDisable++ == -1;
        if ( v30
          && ($C774EFD68449142D8271B1EC1EB7FB26 *)BugCheckParameter1a->ApcState.ApcListHead[0].Flink != &BugCheckParameter1a->152 )
        {
          KiCheckForKernelApcDelivery(BugCheckParameter1a, v44, v45, v46);
        }
        KeLeaveCriticalRegionThread((__int64)CurrentThread);
      }
      v17 = *((_DWORD *)Object + 1);
      if ( ObpTraceFlags )
        ObpPushStackInfo((_DWORD)v7);
      v18 = _InterlockedExchangeAdd64((volatile signed __int64 *)v7, -v14) - v14;
      if ( v18 <= 0 )
      {
        if ( *((_QWORD *)v7 + 1) )
          KeBugCheckEx(
            0x18u,
            ObTypeIndexTable[(unsigned __int8)ObHeaderCookie ^ (unsigned __int8)v7[24] ^ (unsigned __int64)BYTE1(v7)],
            (ULONG_PTR)Object,
            6uLL,
            *((_QWORD *)v7 + 1));
        if ( v18 < 0 )
          KeBugCheckEx(0x18u, 0LL, (ULONG_PTR)Object, 5uLL, v18);
        ObpDeferObjectDeletion(v7);
      }
      if ( CurrentState )
        *CurrentState = v17;
      if ( v13 )
        PoDestroyReasonContext(v13);
      return v5;
    }
    ObfDereferenceObjectWithTag(Object, 0x746C6644u);
    return -1073741788;
  }
}
