/*
 * XREFs of NtCancelTimer @ 0x1402FFD50
 * Callers:
 *     <none>
 * Callees:
 *     MiGetSystemRegionType @ 0x140207A80 (MiGetSystemRegionType.c)
 *     KiAbThreadRemoveBoosts @ 0x140207E30 (KiAbThreadRemoveBoosts.c)
 *     MmGetSessionIdEx @ 0x140207F90 (MmGetSessionIdEx.c)
 *     ObfDereferenceObjectWithTag @ 0x140208290 (ObfDereferenceObjectWithTag.c)
 *     KeLeaveCriticalRegionThread @ 0x14020B010 (KeLeaveCriticalRegionThread.c)
 *     KxReleaseSpinLock @ 0x14021E3C0 (KxReleaseSpinLock.c)
 *     KiAbEntryRemoveFromTree @ 0x140272F70 (KiAbEntryRemoveFromTree.c)
 *     KiCheckForKernelApcDelivery @ 0x140273D40 (KiCheckForKernelApcDelivery.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x140274190 (ExfAcquirePushLockExclusiveEx.c)
 *     ExfTryToWakePushLock @ 0x1402749E0 (ExfTryToWakePushLock.c)
 *     PoDestroyReasonContext @ 0x140276B88 (PoDestroyReasonContext.c)
 *     ExpSetTimerObject2 @ 0x14027ED1C (ExpSetTimerObject2.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x1402D79F0 (KeAcquireSpinLockRaiseToDpc.c)
 *     KxWaitForSpinLockAndAcquire @ 0x1402D7A80 (KxWaitForSpinLockAndAcquire.c)
 *     ExpCancelTimer @ 0x1403003F0 (ExpCancelTimer.c)
 *     ObpDeferObjectDeletion @ 0x1403494E0 (ObpDeferObjectDeletion.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403EDAA4 (KiRemoveSystemWorkPriorityKick.c)
 *     EtwTraceAutoBoostEntryExhaustion @ 0x1403F2AD4 (EtwTraceAutoBoostEntryExhaustion.c)
 *     KeBugCheckEx @ 0x1403F70D0 (KeBugCheckEx.c)
 *     KiAcquireSpinLockInstrumented @ 0x14051141C (KiAcquireSpinLockInstrumented.c)
 *     KiReleaseSpinLockInstrumented @ 0x140511528 (KiReleaseSpinLockInstrumented.c)
 *     ObpPushStackInfo @ 0x14055F888 (ObpPushStackInfo.c)
 *     ObReferenceObjectByHandle @ 0x1405F5C90 (ObReferenceObjectByHandle.c)
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
  __int64 v19; // rdx
  int v20; // edi
  signed __int64 v21; // rax
  _DWORD *v23; // rcx
  struct _KTHREAD *v24; // r10
  __int64 v25; // rcx
  char v26; // dl
  __int64 v27; // rdx
  int SessionId; // ecx
  __int64 v29; // rcx
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
  __int64 v44; // rcx
  int v45; // eax
  int v46; // eax
  unsigned __int8 v47; // al
  struct _KPRCB *v48; // r10
  _DWORD *v49; // r9
  int v50; // eax
  __int64 AbOrphanedEntrySummary; // rax
  int v52; // eax
  unsigned __int8 v53; // al
  struct _KPRCB *v54; // r11
  _DWORD *v55; // r9
  int v56; // eax
  KIRQL BugCheckParameter1; // [rsp+30h] [rbp-78h]
  struct _KTHREAD *BugCheckParameter1a; // [rsp+30h] [rbp-78h]
  PVOID Object; // [rsp+38h] [rbp-70h] BYREF
  struct _KTHREAD *v60; // [rsp+40h] [rbp-68h]
  int v61; // [rsp+48h] [rbp-60h]
  _DWORD v62[3]; // [rsp+4Ch] [rbp-5Ch] BYREF
  struct _KTHREAD *CurrentThread; // [rsp+58h] [rbp-50h]
  _QWORD *v64; // [rsp+60h] [rbp-48h]
  unsigned __int64 v65; // [rsp+68h] [rbp-40h]
  void *retaddr; // [rsp+A8h] [rbp+0h]
  char v67; // [rsp+B8h] [rbp+10h]
  __int64 v68; // [rsp+B8h] [rbp+10h]
  unsigned __int8 v69; // [rsp+B8h] [rbp+10h]
  int v70; // [rsp+C8h] [rbp+20h] BYREF

  PreviousMode = KeGetCurrentThread()->PreviousMode;
  if ( CurrentState && PreviousMode )
  {
    v44 = 0x7FFFFFFF0000LL;
    if ( (unsigned __int64)CurrentState < 0x7FFFFFFF0000LL )
      v44 = (__int64)CurrentState;
    *(_BYTE *)v44 = *(_BYTE *)v44;
  }
  Object = 0LL;
  v6 = ObReferenceObjectByHandle(TimerHandle, 2u, 0LL, PreviousMode, &Object, 0LL);
  v62[1] = v6;
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
      v67 = 0;
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
            v45 = v15[6];
            v15[6] = v45 + 1;
            if ( v45 == -1 )
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
              v46 = v23[6] - 1;
              v23[6] = v46;
              if ( !v46 )
                KiRemoveSystemWorkPriorityKick(CurrentPrcb);
            }
          }
          KxWaitForSpinLockAndAcquire(v12, v9, v10, (__int64)SchedulerAssist);
        }
        v7 = (struct _KTIMER *)Object;
      }
      v16 = *(_QWORD **)&v7[4].Header.Lock;
      v64 = v16;
      if ( !v16 )
        goto LABEL_11;
      KxReleaseSpinLock((PKSPIN_LOCK)v12);
      if ( KiIrqlFlags )
      {
        if ( (KiIrqlFlags & 1) != 0 )
        {
          v47 = KeGetCurrentIrql();
          if ( v47 <= 0xFu && BugCheckParameter1 <= 0xFu && v47 >= 2u )
          {
            v48 = KeGetCurrentPrcb();
            v49 = v48->SchedulerAssist;
            v50 = ~(unsigned __int16)(-1LL << (BugCheckParameter1 + 1));
            v30 = (v50 & v49[5]) == 0;
            v49[5] &= v50;
            if ( v30 )
              KiRemoveSystemWorkPriorityKick(v48);
          }
        }
      }
      __writecr8(BugCheckParameter1);
      CurrentThread = KeGetCurrentThread();
      --CurrentThread->KernelApcDisable;
      v62[0] = 0;
      v24 = KeGetCurrentThread();
      v60 = v24;
      --v24->SpecialApcDisable;
      if ( ++v24->AbAllocationRegionCount != 1 )
        KeBugCheckEx(0x192u, (ULONG_PTR)v24, (ULONG_PTR)&ExpWakeTimerLock, KeGetCurrentIrql(), 0LL);
      v61 = 0;
      LOBYTE(v25) = v24->AbEntrySummary;
      if ( !(_BYTE)v25 )
      {
        if ( !v24->AbOrphanedEntrySummary )
        {
          v27 = 0LL;
          v68 = 0LL;
          if ( (WORD2(PerfGlobalGroupMask) & 0x200) != 0 )
          {
            EtwTraceAutoBoostEntryExhaustion(v24, &ExpWakeTimerLock);
            v24 = v60;
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
      v61 = v25;
      v24->AbEntrySummary = v26 & ~(1 << v25);
      v27 = (__int64)&v24->LockEntries[v25];
      v68 = v27;
LABEL_30:
      if ( v27 )
      {
        if ( (unsigned __int64)&ExpWakeTimerLock >= 0xFFFF800000000000uLL
          && byte_140C4F7C8[(((unsigned __int64)&ExpWakeTimerLock >> 39) & 0x1FF) - 256] == 1 )
        {
          SessionId = MmGetSessionIdEx((__int64)v24->ApcState.Process);
          v24 = v60;
          v27 = v68;
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
      KiAbThreadRemoveBoosts((ULONG_PTR)v24, (__int64)&ExpWakeTimerLock, v62);
      v29 = (__int64)v60;
      v30 = v60->SpecialApcDisable++ == -1;
      if ( v30 && *(_QWORD *)(v29 + 152) != v29 + 152 )
        KiCheckForKernelApcDelivery(v29);
      if ( _interlockedbittestandset64((volatile signed __int32 *)&ExpWakeTimerLock, 0LL) )
        ExfAcquirePushLockExclusiveEx(&ExpWakeTimerLock, v68, (ULONG_PTR)&ExpWakeTimerLock);
      if ( v68 )
        *(_BYTE *)(v68 + 26) |= 1u;
      v67 = 1;
      BugCheckParameter1 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)v12);
      v16 = *(_QWORD **)&v7[4].Header.Lock;
      v64 = v16;
      *(_QWORD *)&v7[4].Header.Lock = 0LL;
      v7 = (struct _KTIMER *)Object;
LABEL_11:
      v17 = ExpCancelTimer(v7) + 1;
      if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
        KiReleaseSpinLockInstrumented(v12, retaddr);
      else
        _InterlockedAnd64((volatile signed __int64 *)v12, 0LL);
      v18 = KeGetCurrentPrcb();
      v19 = (__int64)v18->SchedulerAssist;
      if ( v19 )
      {
        if ( v18->NestingLevel <= 1u )
        {
          v52 = *(_DWORD *)(v19 + 24) - 1;
          *(_DWORD *)(v19 + 24) = v52;
          if ( !v52 )
            KiRemoveSystemWorkPriorityKick(v18);
        }
      }
      if ( KiIrqlFlags )
      {
        if ( (KiIrqlFlags & 1) != 0 )
        {
          v53 = KeGetCurrentIrql();
          if ( v53 <= 0xFu && BugCheckParameter1 <= 0xFu && v53 >= 2u )
          {
            v54 = KeGetCurrentPrcb();
            v55 = v54->SchedulerAssist;
            v19 = -1LL << (BugCheckParameter1 + 1);
            v56 = ~(unsigned __int16)v19;
            v30 = (v56 & v55[5]) == 0;
            v55[5] &= v56;
            if ( v30 )
              KiRemoveSystemWorkPriorityKick(v54);
          }
        }
      }
      __writecr8(BugCheckParameter1);
      if ( v67 )
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
          ExfTryToWakePushLock((volatile signed __int64 *)&ExpWakeTimerLock);
        v70 = 0;
        BugCheckParameter1a = KeGetCurrentThread();
        if ( (unsigned int)MiGetSystemRegionType((unsigned __int64)&ExpWakeTimerLock) == 1 )
          v36 = MmGetSessionIdEx((__int64)BugCheckParameter1a->ApcState.Process);
        else
          v36 = -1;
        v37 = (ULONG_PTR)BugCheckParameter1a;
        --BugCheckParameter1a->SpecialApcDisable;
        v69 = ++BugCheckParameter1a->AbAllocationRegionCount;
        v38 = 0LL;
        v60 = 0LL;
        v65 = (unsigned __int64)&ExpWakeTimerLock & 0x7FFFFFFFFFFFFFFCLL;
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
              && (*(_QWORD *)(v41 + 32) & 0x7FFFFFFFFFFFFFFCLL) == v65
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
          v60 = (struct _KTHREAD *)v41;
        }
LABEL_57:
        if ( v38 )
        {
          *(_BYTE *)(v38 + 32) |= 2u;
          if ( *(__int64 *)(v38 + 32) < 0 )
          {
            KiAbEntryRemoveFromTree((PRTL_BALANCED_NODE)v38);
            v37 = (ULONG_PTR)BugCheckParameter1a;
            v38 = (__int64)v60;
          }
          v42 = *(_DWORD *)(v38 + 88);
          v70 = v42 & 0x1FFFF;
          *(_DWORD *)(v38 + 88) = v42 & 0xFFFE0000;
          *(_BYTE *)(v38 + 25) &= ~1u;
          *(_QWORD *)(v38 + 32) = 0LL;
          v43 = 1 << ((v38 - *(_QWORD *)(v37 + 800)) / 96);
          if ( v69 == 1 )
            *(_BYTE *)(v37 + 792) |= v43;
          else
            _InterlockedOr8((volatile signed __int8 *)(v37 + 870), v43);
        }
        else if ( (*((_DWORD *)&BugCheckParameter1a->0 + 1) & 0x10000) == 0 )
        {
          KeBugCheckEx(0x162u, (ULONG_PTR)BugCheckParameter1a, (ULONG_PTR)&ExpWakeTimerLock, v36, 0LL);
        }
        --*(_BYTE *)(v37 + 794);
        KiAbThreadRemoveBoosts(v37, (__int64)&ExpWakeTimerLock, &v70);
        v30 = BugCheckParameter1a->SpecialApcDisable++ == -1;
        if ( v30
          && ($C774EFD68449142D8271B1EC1EB7FB26 *)BugCheckParameter1a->ApcState.ApcListHead[0].Flink != &BugCheckParameter1a->152 )
        {
          KiCheckForKernelApcDelivery((__int64)BugCheckParameter1a);
        }
        KeLeaveCriticalRegionThread((__int64)CurrentThread);
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
        ObpDeferObjectDeletion(v8, v19);
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
