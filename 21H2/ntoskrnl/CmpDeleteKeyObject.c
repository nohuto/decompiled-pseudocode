/*
 * XREFs of CmpDeleteKeyObject @ 0x1407C2680
 * Callers:
 *     <none>
 * Callees:
 *     CmCleanupThreadInfo @ 0x14022EA30 (CmCleanupThreadInfo.c)
 *     ExpAcquireFastMutexContended @ 0x14029EF4C (ExpAcquireFastMutexContended.c)
 *     CmpWaitForLateUnloadWorker @ 0x1402A4298 (CmpWaitForLateUnloadWorker.c)
 *     ExAcquirePushLockExclusiveEx @ 0x1402AC910 (ExAcquirePushLockExclusiveEx.c)
 *     CmpIsRegistryLockAcquired @ 0x1402ACD00 (CmpIsRegistryLockAcquired.c)
 *     ExReleasePushLockEx @ 0x1402AD0A0 (ExReleasePushLockEx.c)
 *     CmpInitializeDelayDerefContext @ 0x1402AD320 (CmpInitializeDelayDerefContext.c)
 *     ObfDereferenceObject @ 0x1402AD3E0 (ObfDereferenceObject.c)
 *     KeAbPostRelease @ 0x1402AFC00 (KeAbPostRelease.c)
 *     KeSetEvent @ 0x1402AFD30 (KeSetEvent.c)
 *     KiCheckForKernelApcDelivery @ 0x1402F1D50 (KiCheckForKernelApcDelivery.c)
 *     CmpArmDelayedCloseTimer @ 0x140345F84 (CmpArmDelayedCloseTimer.c)
 *     ExQueueWorkItem @ 0x140345FC0 (ExQueueWorkItem.c)
 *     CmpDrainDelayDerefContext @ 0x140346C60 (CmpDrainDelayDerefContext.c)
 *     CmpInitializeThreadInfo @ 0x140347770 (CmpInitializeThreadInfo.c)
 *     KeAbPreAcquire @ 0x140347C10 (KeAbPreAcquire.c)
 *     ExpReleaseFastMutexContended @ 0x140359548 (ExpReleaseFastMutexContended.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x140418E4C (KiRemoveSystemWorkPriorityKick.c)
 *     KeBugCheckEx @ 0x14041F3D0 (KeBugCheckEx.c)
 *     CmpFreeCallbackObjectContexts @ 0x140692E2C (CmpFreeCallbackObjectContexts.c)
 *     CmpFlushNotify @ 0x14069F668 (CmpFlushNotify.c)
 *     CmpFreeKeyControlBlock @ 0x14069FA30 (CmpFreeKeyControlBlock.c)
 *     CmpDeleteHive @ 0x1406BBAD8 (CmpDeleteHive.c)
 *     CmpFireCleanupNotifications @ 0x1406C25A0 (CmpFireCleanupNotifications.c)
 *     CmpDoQueueLateUnloadWorker @ 0x1406CE3EC (CmpDoQueueLateUnloadWorker.c)
 *     CmpFreePostBlock @ 0x1407190AC (CmpFreePostBlock.c)
 *     CmpReferenceHive @ 0x14071BBD8 (CmpReferenceHive.c)
 *     CmpDereferenceKeyControlBlock @ 0x14071BF40 (CmpDereferenceKeyControlBlock.c)
 *     CmpCallCallBacksEx @ 0x140735760 (CmpCallCallBacksEx.c)
 *     CmpLockKcbExclusive @ 0x1407C0854 (CmpLockKcbExclusive.c)
 *     CmpCleanUpKcbCacheWithLock @ 0x1407C09E0 (CmpCleanUpKcbCacheWithLock.c)
 *     CmpUnlockKeyBodyFromMemory @ 0x140915784 (CmpUnlockKeyBodyFromMemory.c)
 *     CmpKeyEnumStackFreeResumeContext @ 0x140920E78 (CmpKeyEnumStackFreeResumeContext.c)
 *     CmpUnlockRegistry @ 0x140AB4260 (CmpUnlockRegistry.c)
 *     CmpUnlockKcb @ 0x140AB4300 (CmpUnlockKcb.c)
 *     CmpLockRegistry @ 0x140AB4370 (CmpLockRegistry.c)
 */

__int64 __fastcall CmpDeleteKeyObject(__int64 a1)
{
  __int64 v1; // r12
  __int64 v3; // r14
  __int64 v4; // rdx
  __int64 v5; // r8
  struct _KTHREAD *CurrentThread; // rax
  __int64 v7; // rcx
  unsigned __int64 v8; // rdx
  signed __int64 v9; // rcx
  __int64 v10; // r8
  signed __int64 v11; // r9
  ULONG_PTR BugCheckParameter4; // rsi
  unsigned int i; // ecx
  signed __int64 v14; // rax
  __int64 v15; // rbx
  unsigned __int64 *v16; // rcx
  signed __int32 v17; // eax
  signed __int32 v18; // ett
  struct _PRIVILEGE_SET *v19; // rcx
  __int64 v20; // r10
  unsigned __int64 v21; // rax
  ULONG_PTR v22; // r13
  int v23; // eax
  ULONG_PTR v24; // rbx
  signed __int32 v25; // eax
  signed __int32 v26; // ett
  __int64 v27; // rax
  __int64 v28; // rax
  __int64 v29; // rcx
  signed __int64 v30; // rax
  __int64 v31; // rbx
  struct _KTHREAD *v32; // rax
  bool v33; // dl
  int v34; // ecx
  __int64 v35; // rax
  __int64 v36; // rbx
  unsigned __int8 CurrentIrql; // cl
  _QWORD *v38; // rax
  __int64 v39; // rcx
  unsigned __int64 v40; // rbx
  bool v41; // cl
  signed __int32 v42; // eax
  unsigned __int8 v43; // al
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  int v46; // eax
  bool v47; // zf
  ULONG_PTR v48; // rcx
  __int64 v49; // rbx
  __int64 v50; // rax
  __int64 v51; // r9
  struct _WORK_QUEUE_ITEM *v52; // rcx
  struct _KEVENT *v53; // rcx
  struct _KTHREAD *v54; // rcx
  _QWORD v56[2]; // [rsp+40h] [rbp-89h] BYREF
  _QWORD v57[2]; // [rsp+50h] [rbp-79h] BYREF
  __int128 v58; // [rsp+60h] [rbp-69h] BYREF
  __int128 v59; // [rsp+70h] [rbp-59h] BYREF
  __int128 v60; // [rsp+80h] [rbp-49h] BYREF
  _QWORD v61[3]; // [rsp+90h] [rbp-39h] BYREF
  int v62; // [rsp+A8h] [rbp-21h]
  __int128 v63; // [rsp+ACh] [rbp-1Dh]
  __int64 v64; // [rsp+BCh] [rbp-Dh]
  int v65; // [rsp+C4h] [rbp-5h]
  _OWORD v66[5]; // [rsp+C8h] [rbp-1h] BYREF
  char v67; // [rsp+130h] [rbp+67h]
  unsigned __int8 v68; // [rsp+138h] [rbp+6Fh]
  bool v69; // [rsp+138h] [rbp+6Fh]
  unsigned int v70; // [rsp+140h] [rbp+77h]

  v1 = 0LL;
  v67 = 0;
  v3 = 0LL;
  v60 = 0LL;
  memset(v66, 0, 32);
  v59 = 0LL;
  CmpInitializeThreadInfo((__int64)&v60);
  v57[1] = v57;
  v57[0] = v57;
  CmpInitializeDelayDerefContext(&v59);
  if ( (*(_DWORD *)(a1 + 48) & 4) != 0 )
    return CmCleanupThreadInfo((__int64 *)&v60);
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  if ( CmpCallBackCount )
  {
    if ( !CmpIsRegistryLockAcquired() )
    {
      *(_QWORD *)&v66[0] = a1;
      CmpCallCallBacksEx(0xEu, (__int64)v66, 0LL, 1, 0x19u, a1, (__int64)v57);
      if ( *(_DWORD *)a1 == 1803104306 && *(_QWORD *)(a1 + 72) != a1 + 72 )
      {
        CmpFireCleanupNotifications(a1);
        CmpFreeCallbackObjectContexts(a1);
      }
    }
  }
  v7 = *(_QWORD *)(a1 + 56);
  if ( v7 )
    ObfDereferenceObject((PVOID)(v7 & 0xFFFFFFFFFFFFFFFEuLL));
  v56[1] = v56;
  v56[0] = v56;
  CmpLockRegistry(v7, v4, v5);
  BugCheckParameter4 = *(_QWORD *)(a1 + 8);
  if ( BugCheckParameter4 )
  {
    if ( *(_DWORD *)a1 == 1803104306 )
    {
      if ( *(_QWORD *)(a1 + 16) )
      {
        CmpLockKcbExclusive(*(_QWORD *)(a1 + 8));
        CmpFlushNotify(a1, 0, (__int64)v56);
        CmpUnlockKcb(BugCheckParameter4);
      }
      LOBYTE(v11) = 0;
      if ( (*(_DWORD *)(a1 + 48) & 0x40) != 0 )
      {
LABEL_14:
        for ( i = 0; i < 4; ++i )
        {
          v8 = i;
          v10 = *(_QWORD *)(a1 + 8) + 8LL * i;
          v14 = _InterlockedCompareExchange64((volatile signed __int64 *)(v10 + 136), 0LL, a1);
          if ( a1 == v14 )
            goto LABEL_25;
          if ( (unsigned __int64)(v14 - 1) <= 1 )
          {
            CmpLockKcbExclusive(*(_QWORD *)(a1 + 8));
            LOBYTE(v11) = 1;
            goto LABEL_14;
          }
        }
        if ( !(_BYTE)v11 )
        {
          v15 = *(_QWORD *)(a1 + 8);
          ExAcquirePushLockExclusiveEx(v15 + 48, 0LL);
          LOBYTE(v11) = 1;
          *(_QWORD *)(v15 + 56) = KeGetCurrentThread();
        }
        v8 = *(_QWORD *)(a1 + 32);
        v16 = *(unsigned __int64 **)(a1 + 40);
        if ( *(_QWORD *)(v8 + 8) != a1 + 32 || *v16 != a1 + 32 )
          __fastfail(3u);
        *v16 = v8;
        *(_QWORD *)(v8 + 8) = v16;
LABEL_25:
        *(_WORD *)(a1 + 48) &= ~0x40u;
        if ( (_BYTE)v11 )
          CmpUnlockKcb(*(_QWORD *)(a1 + 8));
      }
      v3 = *(_QWORD *)(BugCheckParameter4 + 32);
      _m_prefetchw((const void *)(v3 + 4232));
      v17 = *(_DWORD *)(v3 + 4232);
      if ( v17 )
      {
        do
        {
          v18 = v17;
          v17 = _InterlockedCompareExchange((volatile signed __int32 *)(v3 + 4232), v17 + 1, v17);
        }
        while ( v18 != v17 && v17 );
      }
      if ( *(_BYTE *)(v3 + 2944) == 1 )
      {
        v67 = 1;
        *(_DWORD *)(v3 + 4LL * (_InterlockedExchangeAdd((volatile signed __int32 *)(v3 + 4236), 1u) & 0x7F) + 4240) = 16;
      }
      v19 = *(struct _PRIVILEGE_SET **)(a1 + 88);
      if ( v19 )
      {
        CmpKeyEnumStackFreeResumeContext(v19);
        CmpDrainDelayDerefContext((_QWORD **)&v59);
      }
      if ( (*(_DWORD *)(a1 + 48) & 0x20) != 0 )
        CmpUnlockKeyBodyFromMemory(a1, v8, v10, v11);
      v58 = 0LL;
      CmpInitializeDelayDerefContext(&v58);
      v9 = *(_QWORD *)BugCheckParameter4;
      v20 = *(_QWORD *)(BugCheckParameter4 + 32);
      if ( *(_QWORD *)BugCheckParameter4 <= 1uLL )
      {
LABEL_45:
        v22 = *(_QWORD *)(BugCheckParameter4 + 32);
        v23 = *(_DWORD *)(BugCheckParameter4 + 16) ^ (*(_DWORD *)(BugCheckParameter4 + 16) >> 9);
        v70 = *(_DWORD *)(BugCheckParameter4 + 16);
        v24 = *(_QWORD *)(v22 + 1648)
            + 24
            * ((unsigned int)(*(_DWORD *)(v22 + 1656) - 1) & ((unsigned int)(101027 * v23) ^ ((unsigned __int64)(unsigned int)(101027 * v23) >> 9)));
        ExAcquirePushLockExclusiveEx(v24, 0LL);
        *(_QWORD *)(v24 + 8) = KeGetCurrentThread();
        _m_prefetchw((const void *)(v22 + 4232));
        v25 = *(_DWORD *)(v22 + 4232);
        if ( !v25 )
LABEL_126:
          KeBugCheckEx(0x51u, 0x17uLL, v22, 8uLL, BugCheckParameter4);
        while ( 1 )
        {
          v26 = v25;
          v25 = _InterlockedCompareExchange((volatile signed __int32 *)(v22 + 4232), v25 + 1, v25);
          if ( v26 == v25 )
            break;
          if ( !v25 )
            goto LABEL_126;
        }
        ExAcquirePushLockExclusiveEx(BugCheckParameter4 + 48, 0LL);
        *(_QWORD *)(BugCheckParameter4 + 56) = KeGetCurrentThread();
        v27 = *(_QWORD *)(BugCheckParameter4 + 192);
        if ( v27 )
        {
          v28 = *(_QWORD *)(v27 + 24);
          if ( v28 )
          {
            v1 = *(_QWORD *)(v28 + 16);
            CmpUnlockKcb(BugCheckParameter4);
            CmpLockKcbExclusive(v1);
            CmpLockKcbExclusive(BugCheckParameter4);
          }
        }
        v29 = *(_QWORD *)(BugCheckParameter4 + 32);
        v30 = _InterlockedDecrement64((volatile signed __int64 *)BugCheckParameter4);
        if ( v30 == 2 )
        {
          if ( (*(_DWORD *)(BugCheckParameter4 + 184) & 0x40000) != 0 && *(_BYTE *)(v29 + 2944) == 1 )
            CmpDoQueueLateUnloadWorker(v29);
        }
        else if ( !v30 )
        {
          if ( (*(_DWORD *)(BugCheckParameter4 + 184) & 0x40000) != 0 )
          {
            v31 = *(_QWORD *)(BugCheckParameter4 + 32);
            CmpCleanUpKcbCacheWithLock(BugCheckParameter4, (__int64)&v58);
            v32 = KeGetCurrentThread();
            *(_DWORD *)(v31 + 160) |= 0x80u;
            *(_QWORD *)(v31 + 4176) = v32;
            *(_DWORD *)(v31 + 4LL * (_InterlockedExchangeAdd((volatile signed __int32 *)(v31 + 4236), 1u) & 0x7F) + 4240) = 31;
            if ( (*(_DWORD *)(v31 + 160) & 0x20) == 0
              && _InterlockedExchangeAdd((volatile signed __int32 *)(v31 + 4232), 0xFFFFFFFF) == 1 )
            {
              CmpDeleteHive((_QWORD *)v31);
            }
          }
          else
          {
            v33 = 0;
            v34 = *(_DWORD *)(BugCheckParameter4 + 8);
            if ( (v34 & 0x20) == 0 )
              v33 = (v34 & 0x20000) == 0;
            if ( (!CmpHoldLazyFlush
               || (*(_DWORD *)(BugCheckParameter4 + 184) & 0x100000) != 0
               || (*(_DWORD *)(BugCheckParameter4 + 8) & 8) != 0)
              && v33 )
            {
              v35 = KeAbPreAcquire((__int64)&CmpDelayedCloseTableLock, 0LL);
              v36 = v35;
              CurrentIrql = KeGetCurrentIrql();
              v68 = CurrentIrql;
              __writecr8(1uLL);
              if ( !_interlockedbittestandreset((volatile signed __int32 *)&CmpDelayedCloseTableLock, 0) )
              {
                ExpAcquireFastMutexContended((__int64)&CmpDelayedCloseTableLock, v35);
                CurrentIrql = v68;
              }
              if ( v36 )
                *(_BYTE *)(v36 + 18) = 1;
              *(&CmpDelayedCloseTableLock + 1) = (ULONG_PTR)KeGetCurrentThread();
              *((_DWORD *)&CmpDelayedCloseTableLock + 12) = CurrentIrql;
              v38 = (_QWORD *)(BugCheckParameter4 + 224);
              if ( (_QWORD *)*v38 != v38 )
                KeBugCheckEx(0x51u, 0x34uLL, BugCheckParameter4, 0LL, 0LL);
              v39 = CmpDelayedLRUListHead;
              if ( *(__int64 **)(CmpDelayedLRUListHead + 8) != &CmpDelayedLRUListHead )
LABEL_110:
                __fastfail(3u);
              *v38 = CmpDelayedLRUListHead;
              *(_QWORD *)(BugCheckParameter4 + 232) = &CmpDelayedLRUListHead;
              *(_QWORD *)(v39 + 8) = v38;
              CmpDelayedLRUListHead = BugCheckParameter4 + 224;
              *(_BYTE *)(BugCheckParameter4 + 64) |= 2u;
              ++qword_140D3D2C8;
              v40 = *((unsigned __int8 *)&CmpDelayedCloseTableLock + 48);
              v41 = ++CmpDelayedCloseElements > (unsigned int)CmpDelayedCloseSize;
              v69 = v41;
              *(&CmpDelayedCloseTableLock + 1) = 0LL;
              v42 = _InterlockedCompareExchange((volatile signed __int32 *)&CmpDelayedCloseTableLock, 1, 0);
              if ( v42 )
                ExpReleaseFastMutexContended((volatile signed __int32 *)&CmpDelayedCloseTableLock, v42);
              if ( KiIrqlFlags )
              {
                if ( (KiIrqlFlags & 1) != 0 )
                {
                  v43 = KeGetCurrentIrql();
                  if ( v43 <= 0xFu && (unsigned __int8)v40 <= 0xFu && v43 >= 2u )
                  {
                    CurrentPrcb = KeGetCurrentPrcb();
                    SchedulerAssist = CurrentPrcb->SchedulerAssist;
                    v46 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v40 + 1));
                    v47 = (v46 & SchedulerAssist[5]) == 0;
                    SchedulerAssist[5] &= v46;
                    if ( v47 )
                      KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
                  }
                }
              }
              __writecr8(v40);
              KeAbPostRelease((ULONG_PTR)&CmpDelayedCloseTableLock);
              if ( v69 )
                CmpArmDelayedCloseTimer();
            }
            else
            {
              CmpCleanUpKcbCacheWithLock(BugCheckParameter4, (__int64)&v58);
              if ( *(struct _KTHREAD **)(BugCheckParameter4 + 56) != KeGetCurrentThread()
                && (*(_DWORD *)(BugCheckParameter4 + 8) & 0x80000) != 0 )
              {
                CmpFreeKeyControlBlock(BugCheckParameter4);
              }
            }
          }
        }
        CmpUnlockKcb(BugCheckParameter4);
        if ( v1 )
          CmpUnlockKcb(v1);
        v48 = *(_QWORD *)(v22 + 1648)
            + 24
            * ((unsigned int)(*(_DWORD *)(v22 + 1656) - 1) & ((101027 * (v70 ^ (v70 >> 9))) ^ ((unsigned __int64)(101027 * (v70 ^ (v70 >> 9))) >> 9)));
        *(_QWORD *)(v48 + 8) = 0LL;
        ExReleasePushLockEx(v48, 0LL);
        if ( _InterlockedExchangeAdd((volatile signed __int32 *)(v22 + 4232), 0xFFFFFFFF) == 1 )
          CmpDeleteHive((_QWORD *)v22);
        CmpDrainDelayDerefContext((_QWORD **)&v58);
      }
      else
      {
        while ( 1 )
        {
          v8 = v9 - 1;
          v11 = v9;
          if ( v9 == 3 && (*(_DWORD *)(BugCheckParameter4 + 184) & 0x40000) != 0 && *(_BYTE *)(v20 + 2944) == 1 )
            v10 = 1LL;
          else
            LOBYTE(v10) = 0;
          v21 = _InterlockedCompareExchange64((volatile signed __int64 *)BugCheckParameter4, v8, v9);
          v9 = v21;
          if ( v21 == v11 )
            break;
          if ( v21 <= 1 )
            goto LABEL_45;
        }
        if ( v21 < v8 )
          KeBugCheckEx(0x51u, 0x25uLL, BugCheckParameter4, 0LL, 0LL);
        if ( (_BYTE)v10 )
          CmpDoQueueLateUnloadWorker(v20);
      }
    }
    else
    {
      v3 = *(_QWORD *)(BugCheckParameter4 + 32);
      CmpReferenceHive(v3);
      if ( *(_BYTE *)(v3 + 2944) == 1 )
      {
        v67 = 1;
        *(_DWORD *)(v3 + 4LL * (_InterlockedExchangeAdd((volatile signed __int32 *)(v3 + 4236), 1u) & 0x7F) + 4240) = 17;
      }
      CmpDereferenceKeyControlBlock(BugCheckParameter4);
    }
  }
  CmpUnlockRegistry(v9, v8, v10, v11);
  while ( 1 )
  {
    v49 = v56[0];
    if ( (_QWORD *)v56[0] == v56 )
      break;
    v50 = *(_QWORD *)v56[0];
    if ( *(_QWORD **)(v56[0] + 8LL) != v56 || *(_QWORD *)(v50 + 8) != v56[0] )
      goto LABEL_110;
    v56[0] = *(_QWORD *)v56[0];
    *(_QWORD *)(v50 + 8) = v56;
    v51 = *(_QWORD *)(v49 + 48);
    if ( (unsigned __int16)*(_DWORD *)(v49 + 40) != 3 )
    {
      v53 = *(struct _KEVENT **)v51;
LABEL_108:
      KeSetEvent(v53, 0, 0);
      ObfDereferenceObject(**(PVOID **)(v49 + 48));
      goto LABEL_109;
    }
    v52 = *(struct _WORK_QUEUE_ITEM **)(v51 + 8);
    if ( v52 )
    {
      ExQueueWorkItem(v52, *(WORK_QUEUE_TYPE *)(v51 + 16));
      v51 = *(_QWORD *)(v49 + 48);
    }
    v53 = *(struct _KEVENT **)v51;
    if ( *(_QWORD *)v51 )
      goto LABEL_108;
LABEL_109:
    CmpFreePostBlock((PVOID)(v49 - 16));
  }
  if ( CmpCallBackCount && !CmpIsRegistryLockAcquired() && (_QWORD *)v57[0] != v57 )
  {
    v61[1] = 0LL;
    v61[2] = v66;
    v64 = 0LL;
    v65 = 0;
    v63 = 0LL;
    v61[0] = 0LL;
    v62 = 0;
    CmpCallCallBacksEx(0x19u, (__int64)v61, 0LL, 0, 0x19u, 0LL, (__int64)v57);
  }
  if ( v67 && *(char *)(a1 - 21) < 0 )
    CmpWaitForLateUnloadWorker(v3);
  if ( v3 && _InterlockedExchangeAdd((volatile signed __int32 *)(v3 + 4232), 0xFFFFFFFF) == 1 )
    CmpDeleteHive((_QWORD *)v3);
  v54 = KeGetCurrentThread();
  v47 = v54->KernelApcDisable++ == -1;
  if ( v47
    && ($CEA84C04E3712D858E5667A507841A2A *)v54->ApcState.ApcListHead[0].Flink != &v54->152
    && !v54->SpecialApcDisable )
  {
    KiCheckForKernelApcDelivery();
  }
  return CmCleanupThreadInfo((__int64 *)&v60);
}
