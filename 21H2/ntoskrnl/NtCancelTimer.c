/*
 * XREFs of NtCancelTimer @ 0x140356F50
 * Callers:
 *     <none>
 * Callees:
 *     KxAcquireSpinLock @ 0x140211E00 (KxAcquireSpinLock.c)
 *     KxWaitForSpinLockAndAcquire @ 0x140211E70 (KxWaitForSpinLockAndAcquire.c)
 *     KxReleaseSpinLock @ 0x14021D070 (KxReleaseSpinLock.c)
 *     KiAbThreadRemoveBoostsSlow @ 0x14022B568 (KiAbThreadRemoveBoostsSlow.c)
 *     ObpDeferObjectDeletion @ 0x1402440B4 (ObpDeferObjectDeletion.c)
 *     KeRemoveQueueDpcEx @ 0x14024E1A0 (KeRemoveQueueDpcEx.c)
 *     KeRemoveQueueApc @ 0x14024EC10 (KeRemoveQueueApc.c)
 *     MmGetSessionIdEx @ 0x140287F30 (MmGetSessionIdEx.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x14029F120 (ExfAcquirePushLockExclusiveEx.c)
 *     KiAbTryReclaimOrphanedEntries @ 0x14029F6A8 (KiAbTryReclaimOrphanedEntries.c)
 *     ObfDereferenceObjectWithTag @ 0x1402AC540 (ObfDereferenceObjectWithTag.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x1402AD540 (KeAcquireSpinLockRaiseToDpc.c)
 *     ExpSetTimerObject2 @ 0x1402D594C (ExpSetTimerObject2.c)
 *     KiLeaveCriticalRegionUnsafe @ 0x1402F9540 (KiLeaveCriticalRegionUnsafe.c)
 *     KiAbEntryRemoveFromTree @ 0x14034EE30 (KiAbEntryRemoveFromTree.c)
 *     KeCancelTimer @ 0x140356EB0 (KeCancelTimer.c)
 *     KiCancelTimer @ 0x140357840 (KiCancelTimer.c)
 *     ExfTryToWakePushLock @ 0x140359F40 (ExfTryToWakePushLock.c)
 *     PoDestroyReasonContext @ 0x14036B090 (PoDestroyReasonContext.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x140418E4C (KiRemoveSystemWorkPriorityKick.c)
 *     KeBugCheckEx @ 0x14041F3D0 (KeBugCheckEx.c)
 *     KiAcquireSpinLockInstrumented @ 0x14045A310 (KiAcquireSpinLockInstrumented.c)
 *     KiReleaseSpinLockInstrumented @ 0x14056E8CC (KiReleaseSpinLockInstrumented.c)
 *     ObpPushStackInfo @ 0x1405C5EC8 (ObpPushStackInfo.c)
 *     ObReferenceObjectByHandle @ 0x140732D00 (ObReferenceObjectByHandle.c)
 */

__int64 __fastcall NtCancelTimer(HANDLE Handle, _BYTE *a2)
{
  KPROCESSOR_MODE PreviousMode; // dl
  NTSTATUS v5; // r15d
  struct _KTIMER *v6; // rbx
  char *v7; // r13
  __int64 v8; // rdx
  struct _OBJECT_TYPE *v9; // rax
  volatile signed __int32 *v10; // r14
  __int64 CurrentIrql; // rsi
  struct _KPRCB *CurrentPrcb; // rbx
  _DWORD *v13; // rcx
  void *v14; // rdi
  int v15; // esi
  unsigned __int8 v16; // cl
  unsigned __int8 v17; // al
  unsigned int v18; // r8d
  struct _KPRCB *v19; // rcx
  _DWORD *v20; // rdx
  unsigned __int8 v21; // bl
  char v22; // bl
  signed __int64 v23; // rax
  _DWORD *SchedulerAssist; // r9
  _DWORD *v26; // r9
  _QWORD *v27; // rax
  __int64 v28; // rdx
  _QWORD *v29; // rcx
  char v30; // r11
  struct _KTHREAD *v31; // r14
  unsigned int v32; // r8d
  unsigned int v33; // ecx
  __int64 p_Process; // rbx
  int v35; // r8d
  struct _KTHREAD *v36; // rsi
  __int64 v37; // rdi
  unsigned int AbEntrySummary; // eax
  __int64 v39; // rdx
  int SessionId; // eax
  struct _LIST_ENTRY *Flink; // r8
  PVOID *p_Flink; // rdx
  char v43; // al
  __int64 v44; // rcx
  int v45; // eax
  _DWORD *v46; // rcx
  int v47; // eax
  unsigned __int8 v48; // al
  struct _KPRCB *v49; // r10
  _DWORD *v50; // r9
  int v51; // eax
  bool v52; // zf
  unsigned __int8 v53; // cl
  struct _KPRCB *v54; // r10
  _DWORD *v55; // r9
  int v56; // eax
  int v57; // eax
  unsigned __int8 v58; // al
  struct _KPRCB *v59; // r10
  _DWORD *v60; // r9
  int v61; // eax
  PVOID Object; // [rsp+38h] [rbp-60h] BYREF
  __int64 v63; // [rsp+40h] [rbp-58h]
  struct _KTHREAD *CurrentThread; // [rsp+48h] [rbp-50h]
  void *v65; // [rsp+50h] [rbp-48h]
  void *retaddr; // [rsp+98h] [rbp+0h]
  char v67; // [rsp+A8h] [rbp+10h]
  unsigned __int8 SpinLock; // [rsp+B8h] [rbp+20h]
  KSPIN_LOCK *SpinLocka; // [rsp+B8h] [rbp+20h]

  PreviousMode = KeGetCurrentThread()->PreviousMode;
  if ( a2 && PreviousMode )
  {
    v44 = 0x7FFFFFFF0000LL;
    if ( (unsigned __int64)a2 < 0x7FFFFFFF0000LL )
      v44 = (__int64)a2;
    *(_BYTE *)v44 = *(_BYTE *)v44;
  }
  Object = 0LL;
  v5 = ObReferenceObjectByHandle(Handle, 2u, 0LL, PreviousMode, &Object, 0LL);
  if ( v5 < 0 )
    return (unsigned int)v5;
  v6 = (struct _KTIMER *)Object;
  v7 = (char *)Object - 48;
  v8 = (unsigned __int8)ObHeaderCookie;
  v9 = (struct _OBJECT_TYPE *)ObTypeIndexTable[(unsigned __int8)ObHeaderCookie ^ (unsigned __int8)*((char *)Object - 24) ^ (unsigned __int64)(unsigned __int8)((unsigned __int16)((_WORD)Object - 48) >> 8)];
  if ( v9 == ExpIRTimerObjectType )
  {
    if ( a2 )
    {
      ObfDereferenceObjectWithTag(Object, 0x746C6644u);
      return 3221225485LL;
    }
    else
    {
      return ExpSetTimerObject2(Object, 0LL, 0LL, 0LL);
    }
  }
  else
  {
    if ( v9 == ExTimerObjectType )
    {
      CurrentThread = 0LL;
      v67 = 0;
      v10 = (volatile signed __int32 *)((char *)Object + 64);
      CurrentIrql = KeGetCurrentIrql();
      v63 = CurrentIrql;
      __writecr8(2uLL);
      if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && (unsigned __int8)CurrentIrql <= 0xFu )
      {
        SchedulerAssist = KeGetCurrentPrcb()->SchedulerAssist;
        v8 = (-1LL << ((unsigned __int8)CurrentIrql + 1)) & 4;
        SchedulerAssist[5] |= v8;
        v6 = (struct _KTIMER *)Object;
      }
      if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
      {
        KiAcquireSpinLockInstrumented(v10);
      }
      else
      {
        CurrentPrcb = KeGetCurrentPrcb();
        v13 = CurrentPrcb->SchedulerAssist;
        if ( v13 )
        {
          if ( CurrentPrcb->NestingLevel <= 1u )
          {
            v45 = v13[6];
            v13[6] = v45 + 1;
            if ( v45 == -1 )
              KiRemoveSystemWorkPriorityKick(CurrentPrcb);
          }
        }
        if ( _interlockedbittestandset64(v10, 0LL) )
        {
          v46 = CurrentPrcb->SchedulerAssist;
          if ( v46 )
          {
            if ( CurrentPrcb->NestingLevel <= 1u )
            {
              v47 = v46[6] - 1;
              v46[6] = v47;
              if ( !v47 )
                KiRemoveSystemWorkPriorityKick(CurrentPrcb);
            }
          }
          KxWaitForSpinLockAndAcquire(v10);
        }
        v6 = (struct _KTIMER *)Object;
      }
      v14 = *(void **)&v6[4].Header.Lock;
      v65 = v14;
      if ( v14 )
      {
        KxReleaseSpinLock((PKSPIN_LOCK)v10);
        if ( KiIrqlFlags )
        {
          if ( (KiIrqlFlags & 1) != 0 )
          {
            v48 = KeGetCurrentIrql();
            if ( v48 <= 0xFu && (unsigned __int8)CurrentIrql <= 0xFu && v48 >= 2u )
            {
              v49 = KeGetCurrentPrcb();
              v50 = v49->SchedulerAssist;
              v51 = ~(unsigned __int16)(-1LL << ((unsigned __int8)CurrentIrql + 1));
              v52 = (v51 & v50[5]) == 0;
              v50[5] &= v51;
              if ( v52 )
                KiRemoveSystemWorkPriorityKick(v49);
            }
          }
        }
        __writecr8((unsigned __int8)CurrentIrql);
        CurrentThread = KeGetCurrentThread();
        --CurrentThread->KernelApcDisable;
        v36 = KeGetCurrentThread();
        v37 = 0LL;
        _disable();
        AbEntrySummary = v36->AbEntrySummary;
        if ( v36->AbEntrySummary
          || (AbEntrySummary = KiAbTryReclaimOrphanedEntries((__int64)&ExpWakeTimerLock, (__int64)v36)) != 0 )
        {
          _BitScanForward((unsigned int *)&v39, AbEntrySummary);
          v36->AbEntrySummary = AbEntrySummary & ~(1 << v39);
          _enable();
          v37 = (__int64)(&v36[1].Process + 12 * v39);
          if ( (unsigned __int64)&ExpWakeTimerLock - qword_140C50630 < 0x8000000000LL )
            SessionId = MmGetSessionIdEx((__int64)v36->ApcState.Process);
          else
            SessionId = -1;
          *(_DWORD *)(v37 + 8) = SessionId;
          *(_QWORD *)v37 = (unsigned __int64)&ExpWakeTimerLock & 0x7FFFFFFFFFFFFFFCLL;
        }
        if ( _interlockedbittestandset64((volatile signed __int32 *)&ExpWakeTimerLock, 0LL) )
          ExfAcquirePushLockExclusiveEx(&ExpWakeTimerLock, v37, (__int64)&ExpWakeTimerLock);
        if ( v37 )
          *(_BYTE *)(v37 + 18) = 1;
        v67 = 1;
        LOBYTE(v63) = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)v10);
        v14 = *(void **)&v6[4].Header.Lock;
        v65 = v14;
        *(_QWORD *)&v6[4].Header.Lock = 0LL;
        v6 = (struct _KTIMER *)Object;
      }
      v15 = 0;
      if ( ((__int64)v6[4].Dpc & 1) != 0 )
      {
        SpinLocka = (KSPIN_LOCK *)&v6[1].Header.WaitListHead.Blink[75];
        KxAcquireSpinLock(SpinLocka);
        Flink = v6[3].TimerListEntry.Flink;
        p_Flink = (PVOID *)&v6[3].TimerListEntry.Blink->Flink;
        if ( Flink->Blink != &v6[3].TimerListEntry || *p_Flink != &v6[3].TimerListEntry )
          goto LABEL_122;
        *p_Flink = Flink;
        Flink->Blink = (struct _LIST_ENTRY *)p_Flink;
        KxReleaseSpinLock(SpinLocka);
        v43 = (__int64)v6[4].Dpc & 0xFE;
        LOBYTE(v6[4].Dpc) = v43;
        if ( (v43 & 2) != 0 && LOBYTE(v6[3].Processor)
          || KeCancelTimer(v6)
          || KeRemoveQueueDpcEx((__int64)&v6[2].TimerListEntry, 0) )
        {
          v15 = 1;
        }
        if ( KeRemoveQueueApc((__int64)&v6[1].Header.WaitListHead) )
          ++v15;
LABEL_16:
        LOBYTE(v6[3].Processor) = 0;
        v18 = v15 + 1;
        if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
        {
          KiReleaseSpinLockInstrumented(v10, retaddr);
          v18 = v15 + 1;
        }
        else
        {
          _InterlockedAnd64((volatile signed __int64 *)v10, 0LL);
        }
        v19 = KeGetCurrentPrcb();
        v20 = v19->SchedulerAssist;
        if ( v20 )
        {
          if ( v19->NestingLevel <= 1u )
          {
            v57 = v20[6] - 1;
            v20[6] = v57;
            if ( !v57 )
            {
              KiRemoveSystemWorkPriorityKick(v19);
              v18 = v15 + 1;
            }
          }
        }
        v21 = v63;
        if ( KiIrqlFlags )
        {
          if ( (KiIrqlFlags & 1) != 0 )
          {
            v58 = KeGetCurrentIrql();
            if ( v58 <= 0xFu && (unsigned __int8)v63 <= 0xFu && v58 >= 2u )
            {
              v59 = KeGetCurrentPrcb();
              v60 = v59->SchedulerAssist;
              v61 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v63 + 1));
              v52 = (v61 & v60[5]) == 0;
              v60[5] &= v61;
              if ( v52 )
                KiRemoveSystemWorkPriorityKick(v59);
              v18 = v15 + 1;
            }
          }
        }
        __writecr8(v21);
        if ( !v67 )
        {
LABEL_21:
          v22 = *((_BYTE *)Object + 4);
          if ( ObpTraceFlags )
          {
            ObpPushStackInfo((_DWORD)v7);
            v18 = v15 + 1;
          }
          v23 = _InterlockedExchangeAdd64((volatile signed __int64 *)v7, ~v15) - v18;
          if ( v23 <= 0 )
          {
            if ( *((_QWORD *)v7 + 1) )
              KeBugCheckEx(
                0x18u,
                ObTypeIndexTable[(unsigned __int8)ObHeaderCookie ^ (unsigned __int8)v7[24] ^ (unsigned __int64)BYTE1(v7)],
                (ULONG_PTR)Object,
                6uLL,
                *((_QWORD *)v7 + 1));
            if ( v23 < 0 )
              KeBugCheckEx(0x18u, 0LL, (ULONG_PTR)Object, 5uLL, v23);
            ObpDeferObjectDeletion((signed __int64)v7);
          }
          if ( a2 )
            *a2 = v22;
          if ( v14 )
            PoDestroyReasonContext(v14);
          return (unsigned int)v5;
        }
        if ( !v14 )
        {
LABEL_39:
          v30 = _InterlockedExchangeAdd64((volatile signed __int64 *)&ExpWakeTimerLock, 0xFFFFFFFFFFFFFFFFuLL);
          if ( (v30 & 2) != 0 && (v30 & 4) == 0 )
            ExfTryToWakePushLock(&ExpWakeTimerLock);
          v31 = KeGetCurrentThread();
          if ( (unsigned __int64)&ExpWakeTimerLock - qword_140C50630 < 0x8000000000LL )
            v32 = MmGetSessionIdEx((__int64)v31->ApcState.Process);
          else
            v32 = -1;
          _disable();
          v33 = 0;
          p_Process = (__int64)&v31[1].Process;
          while ( (*(_QWORD *)p_Process & 0x7FFFFFFFFFFFFFFCLL) != ((unsigned __int64)&ExpWakeTimerLock & 0x7FFFFFFFFFFFFFFCLL)
               || !*(_BYTE *)(p_Process + 18)
               || (*(_DWORD *)p_Process & 1) != 0
               || *(_DWORD *)(p_Process + 8) != v32 )
          {
            ++v33;
            p_Process += 96LL;
            if ( v33 >= 6 )
            {
              if ( (*((_DWORD *)&v31->0 + 1) & 0x10000) == 0 )
                KeBugCheckEx(0x162u, (ULONG_PTR)v31, (ULONG_PTR)&ExpWakeTimerLock, v32, 0LL);
              _enable();
              goto LABEL_50;
            }
          }
          *(_BYTE *)(p_Process + 18) = 0;
          if ( *(__int64 *)p_Process < 0 )
          {
            *(_BYTE *)p_Process |= 2u;
            _enable();
            KiAbEntryRemoveFromTree(p_Process);
            _disable();
          }
          v35 = *(_DWORD *)(p_Process + 88);
          *(_DWORD *)(p_Process + 88) = 0;
          *(_BYTE *)(p_Process + 17) = 0;
          *(_QWORD *)p_Process = 0LL;
          v31->AbEntrySummary |= 1 << *(_BYTE *)(p_Process + 16);
          _enable();
          if ( !v35 )
          {
LABEL_50:
            KiLeaveCriticalRegionUnsafe((__int64)CurrentThread);
            v18 = v15 + 1;
            goto LABEL_21;
          }
          KiAbThreadRemoveBoostsSlow((ULONG_PTR)v31, (__int64)&ExpWakeTimerLock, v35);
          KiLeaveCriticalRegionUnsafe((__int64)CurrentThread);
          v18 = v15 + 1;
          goto LABEL_21;
        }
        v27 = (char *)Object + 264;
        v28 = *((_QWORD *)Object + 33);
        v29 = (_QWORD *)*((_QWORD *)Object + 34);
        if ( *(PVOID *)(v28 + 8) == (char *)Object + 264 && (_QWORD *)*v29 == v27 )
        {
          *v29 = v28;
          *(_QWORD *)(v28 + 8) = v29;
          *v27 = 0LL;
          goto LABEL_39;
        }
LABEL_122:
        __fastfail(3u);
      }
      v16 = KeGetCurrentIrql();
      SpinLock = v16;
      __writecr8(2uLL);
      if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && v16 <= 0xFu )
      {
        v26 = KeGetCurrentPrcb()->SchedulerAssist;
        v8 = (-1LL << (v16 + 1)) & 4;
        v26[5] |= v8;
        v6 = (struct _KTIMER *)Object;
      }
      LOBYTE(v8) = 1;
      KiCancelTimer(v6, v8);
      if ( KiIrqlFlags )
      {
        v17 = SpinLock;
        if ( (KiIrqlFlags & 1) == 0 )
          goto LABEL_15;
        v53 = KeGetCurrentIrql();
        if ( v53 > 0xFu || SpinLock > 0xFu || v53 < 2u )
          goto LABEL_15;
        v54 = KeGetCurrentPrcb();
        v55 = v54->SchedulerAssist;
        v56 = ~(unsigned __int16)(-1LL << (SpinLock + 1));
        v52 = (v56 & v55[5]) == 0;
        v55[5] &= v56;
        if ( v52 )
          KiRemoveSystemWorkPriorityKick(v54);
        v6 = (struct _KTIMER *)Object;
      }
      v17 = SpinLock;
LABEL_15:
      __writecr8(v17);
      goto LABEL_16;
    }
    ObfDereferenceObjectWithTag(Object, 0x746C6644u);
    return 3221225508LL;
  }
}
