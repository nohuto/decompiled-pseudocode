/*
 * XREFs of MiZeroLargePageThread @ 0x1403AB420
 * Callers:
 *     <none>
 * Callees:
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x14020A870 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     KeWaitForSingleObject @ 0x14020B3A0 (KeWaitForSingleObject.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x140212700 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     ExpAcquireSpinLockExclusive @ 0x1402135A0 (ExpAcquireSpinLockExclusive.c)
 *     MiZeroLargePages @ 0x14023B690 (MiZeroLargePages.c)
 *     KxWaitForLockChainValid @ 0x140279BD0 (KxWaitForLockChainValid.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x1402C0E10 (KeAcquireInStackQueuedSpinLock.c)
 *     KxWaitForLockOwnerShip @ 0x1402C0EA0 (KxWaitForLockOwnerShip.c)
 *     ExAcquireSpinLockExclusive @ 0x1402CF510 (ExAcquireSpinLockExclusive.c)
 *     MiWakeZeroingThreads @ 0x140317500 (MiWakeZeroingThreads.c)
 *     KeSignalGate @ 0x140350B20 (KeSignalGate.c)
 *     MiDecrementHugeContext @ 0x1403954E8 (MiDecrementHugeContext.c)
 *     MiSignalZeroingPassComplete @ 0x1403AB75C (MiSignalZeroingPassComplete.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403EDAA4 (KiRemoveSystemWorkPriorityKick.c)
 *     KiAcquireQueuedSpinLockInstrumented @ 0x140510F5C (KiAcquireQueuedSpinLockInstrumented.c)
 *     KiReleaseQueuedSpinLockInstrumented @ 0x14051101C (KiReleaseQueuedSpinLockInstrumented.c)
 *     MiDeleteZeroThreadContext @ 0x14054A774 (MiDeleteZeroThreadContext.c)
 *     ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented @ 0x1405B0638 (ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented.c)
 *     ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented @ 0x1405B0814 (ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented.c)
 *     ExFreePoolWithTag @ 0x1409B1140 (ExFreePoolWithTag.c)
 */

__int64 __fastcall MiZeroLargePageThread(_QWORD *P)
{
  __int64 v1; // r15
  __int64 v2; // rax
  __int64 v4; // rbx
  int v5; // esi
  __int64 v6; // rdi
  __int64 v7; // r13
  __int64 v8; // rdx
  __int64 v9; // r8
  _DWORD *SchedulerAssist; // r9
  __int64 v11; // rbx
  unsigned __int8 v12; // r10
  struct _KPRCB *v13; // rcx
  _DWORD *v14; // rdx
  _QWORD *v15; // rdx
  bool v16; // zf
  __int64 v17; // rbx
  __int64 v18; // rax
  struct _KPRCB *v19; // rcx
  unsigned __int64 v20; // rsi
  __int64 v21; // rsi
  __int64 v22; // rbx
  _QWORD *v23; // r13
  unsigned __int8 v24; // r15
  volatile signed __int32 *v25; // rcx
  struct _KPRCB *v26; // rcx
  __int64 v27; // r8
  _DWORD *v28; // r9
  unsigned __int64 OldIrql; // rbx
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  int v32; // eax
  int v33; // eax
  int v34; // eax
  unsigned __int8 v35; // al
  struct _KPRCB *v36; // r10
  int v37; // eax
  unsigned __int8 v38; // al
  struct _KPRCB *v39; // r10
  _DWORD *v40; // r9
  int v41; // eax
  KIRQL v42; // al
  int v43; // eax
  unsigned __int8 v44; // al
  struct _KPRCB *v45; // r10
  int v46; // eax
  _QWORD *v47; // rbx
  __int128 v49; // [rsp+30h] [rbp-38h] BYREF
  __int64 v50; // [rsp+40h] [rbp-28h]
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+48h] [rbp-20h] BYREF
  void *retaddr; // [rsp+A8h] [rbp+40h]
  __int64 v53; // [rsp+B0h] [rbp+48h]
  __int64 v54; // [rsp+B8h] [rbp+50h]
  __int64 v55; // [rsp+C0h] [rbp+58h]
  __int64 v56; // [rsp+C8h] [rbp+60h]

  v1 = P[29];
  v50 = 0LL;
  v2 = *((unsigned int *)P + 66);
  v49 = 0LL;
  v4 = *(_QWORD *)(v1 + 72);
  v54 = v1;
  v56 = v4;
  v5 = 1;
  v6 = *(_QWORD *)(v1 + 144) + 40 * v2;
  v7 = *(_QWORD *)(v4 + 16) + 4544LL * *(unsigned int *)(v1 + 80);
  v55 = v7;
  KeWaitForSingleObject((PVOID)(v1 + 88), Executive, 0, 0, 0LL);
  while ( 1 )
  {
    MiZeroLargePages((unsigned __int64)P, v8, v9, SchedulerAssist);
    if ( *(_BYTE *)(v4 + 6400) == 1 )
      return MiDeleteZeroThreadContext(P);
    if ( *((_BYTE *)P + 80) )
    {
      v11 = P[28];
      memset(&LockHandle, 0, sizeof(LockHandle));
      if ( v11 )
      {
        KeAcquireInStackQueuedSpinLock(
          (PKSPIN_LOCK)(qword_140C50B90 + 4544LL * *(unsigned int *)(v11 + 184) + 4304),
          &LockHandle);
        MiDecrementHugeContext((char *)v11, (__int64)P, v27, v28);
        KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
        OldIrql = LockHandle.OldIrql;
        if ( KiIrqlFlags )
        {
          if ( (KiIrqlFlags & 1) != 0 )
          {
            CurrentIrql = KeGetCurrentIrql();
            if ( CurrentIrql <= 0xFu && LockHandle.OldIrql <= 0xFu && CurrentIrql >= 2u )
            {
              CurrentPrcb = KeGetCurrentPrcb();
              SchedulerAssist = CurrentPrcb->SchedulerAssist;
              v32 = ~(unsigned __int16)(-1LL << (LockHandle.OldIrql + 1));
              v16 = (v32 & SchedulerAssist[5]) == 0;
              v9 = (unsigned int)v32 & SchedulerAssist[5];
              SchedulerAssist[5] = v9;
              if ( v16 )
                KiRemoveSystemWorkPriorityKick(CurrentPrcb);
            }
          }
        }
        __writecr8(OldIrql);
        P[28] = 0LL;
      }
    }
    if ( v5 )
      MiSignalZeroingPassComplete(P);
    *(_QWORD *)&v49 = 0LL;
    *((_QWORD *)&v49 + 1) = v1 + 24;
    v12 = KeGetCurrentIrql();
    __writecr8(2uLL);
    if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && v12 <= 0xFu )
    {
      SchedulerAssist = KeGetCurrentPrcb()->SchedulerAssist;
      v9 = (-1 << (v12 + 1)) & 4u | SchedulerAssist[5];
      SchedulerAssist[5] = v9;
    }
    LOBYTE(v50) = v12;
    v13 = KeGetCurrentPrcb();
    v14 = v13->SchedulerAssist;
    if ( v14 )
    {
      if ( v13->NestingLevel <= 1u )
      {
        v33 = v14[6];
        v14[6] = v33 + 1;
        if ( v33 == -1 )
          KiRemoveSystemWorkPriorityKick(v13);
      }
    }
    if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
    {
      KiAcquireQueuedSpinLockInstrumented(&v49, v1 + 24);
    }
    else
    {
      v15 = (_QWORD *)_InterlockedExchange64((volatile __int64 *)(v1 + 24), (__int64)&v49);
      if ( v15 )
        KxWaitForLockOwnerShip((__int64)&v49, v15, v9, (__int64)SchedulerAssist);
    }
    if ( v5 && !*(_BYTE *)(v1 + 132) )
    {
      *(_BYTE *)(v1 + 132) = 1;
      MiWakeZeroingThreads(v1, 5);
    }
    *(_BYTE *)(v6 + 4) &= ~2u;
    *(_BYTE *)(v6 + 4) |= 4u;
    if ( (*(_BYTE *)(v6 + 4) & 1) == 0 )
    {
      *(_BYTE *)(v6 + 4) |= 1u;
      v16 = (*(_DWORD *)(v1 + 164))-- == 1;
      if ( v16 )
        *(_BYTE *)(v7 + 4490) = 0;
    }
    v17 = P[30];
    P[30] = 0LL;
    if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
    {
      KiReleaseQueuedSpinLockInstrumented(&v49, retaddr);
      goto LABEL_19;
    }
    _m_prefetchw(&v49);
    v18 = v49;
    if ( (_QWORD)v49 )
      goto LABEL_40;
    if ( (__int128 *)_InterlockedCompareExchange64(*((volatile signed __int64 **)&v49 + 1), 0LL, (signed __int64)&v49) != &v49 )
    {
      v18 = KxWaitForLockChainValid((__int64 *)&v49, (__int64)v15, v9, (__int64)SchedulerAssist);
LABEL_40:
      *(_QWORD *)&v49 = 0LL;
      _InterlockedXor64((volatile signed __int64 *)(v18 + 8), 1uLL);
    }
LABEL_19:
    v19 = KeGetCurrentPrcb();
    v8 = (__int64)v19->SchedulerAssist;
    if ( v8 )
    {
      if ( v19->NestingLevel <= 1u )
      {
        v34 = *(_DWORD *)(v8 + 24) - 1;
        *(_DWORD *)(v8 + 24) = v34;
        if ( !v34 )
          KiRemoveSystemWorkPriorityKick(v19);
      }
    }
    v20 = (unsigned __int8)v50;
    if ( KiIrqlFlags )
    {
      if ( (KiIrqlFlags & 1) != 0 )
      {
        v35 = KeGetCurrentIrql();
        if ( v35 <= 0xFu && (unsigned __int8)v50 <= 0xFu && v35 >= 2u )
        {
          v36 = KeGetCurrentPrcb();
          SchedulerAssist = v36->SchedulerAssist;
          v8 = -1LL << ((unsigned __int8)v50 + 1);
          v37 = ~(unsigned __int16)v8;
          v16 = (v37 & SchedulerAssist[5]) == 0;
          v9 = (unsigned int)v37 & SchedulerAssist[5];
          SchedulerAssist[5] = v9;
          if ( v16 )
            KiRemoveSystemWorkPriorityKick(v36);
        }
      }
    }
    __writecr8(v20);
    if ( v17 )
    {
      v21 = *(_QWORD *)(v17 - 16);
      v22 = v17 - 16;
      v23 = 0LL;
      v53 = 0LL;
      v24 = KeGetCurrentIrql();
      __writecr8(2uLL);
      if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && v24 <= 0xFu )
      {
        SchedulerAssist = KeGetCurrentPrcb()->SchedulerAssist;
        v9 = (-1 << (v24 + 1)) & 4u | SchedulerAssist[5];
        SchedulerAssist[5] = v9;
      }
      v25 = (volatile signed __int32 *)(v21 + 200);
      if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
        ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented(v25, v24);
      else
        ExpAcquireSpinLockExclusive(v25, v24, v9, (__int64)SchedulerAssist);
      v16 = (*(_QWORD *)(v22 + 8))-- == 1LL;
      if ( v16 )
      {
        v9 = v22;
        v53 = v22;
      }
      else
      {
        v9 = 0LL;
      }
      if ( (ULONG_PTR *)v21 != &MiSystemPartition )
      {
        ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(v21 + 200));
        if ( KiIrqlFlags )
        {
          if ( (KiIrqlFlags & 1) != 0 )
          {
            v38 = KeGetCurrentIrql();
            if ( v38 <= 0xFu && v24 <= 0xFu && v38 >= 2u )
            {
              v39 = KeGetCurrentPrcb();
              v40 = v39->SchedulerAssist;
              v41 = ~(unsigned __int16)(-1LL << (v24 + 1));
              v16 = (v41 & v40[5]) == 0;
              v40[5] &= v41;
              if ( v16 )
                KiRemoveSystemWorkPriorityKick(v39);
            }
          }
        }
        __writecr8(v24);
        v42 = ExAcquireSpinLockExclusive(&dword_140C50C48);
        v9 = v53;
        v24 = v42;
      }
      if ( !--qword_140C50BA8 )
      {
        v23 = (_QWORD *)qword_140C50BD8;
        qword_140C50BD8 = 0LL;
      }
      if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
      {
        ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented(&dword_140C50C48, retaddr);
        v9 = v53;
      }
      else
      {
        dword_140C50C48 = 0;
      }
      v26 = KeGetCurrentPrcb();
      v8 = (__int64)v26->SchedulerAssist;
      if ( v8 )
      {
        if ( v26->NestingLevel <= 1u )
        {
          v43 = *(_DWORD *)(v8 + 24) - 1;
          *(_DWORD *)(v8 + 24) = v43;
          if ( !v43 )
          {
            KiRemoveSystemWorkPriorityKick(v26);
            v9 = v53;
          }
        }
      }
      if ( KiIrqlFlags )
      {
        if ( (KiIrqlFlags & 1) != 0 )
        {
          v44 = KeGetCurrentIrql();
          if ( v44 <= 0xFu && v24 <= 0xFu && v44 >= 2u )
          {
            v45 = KeGetCurrentPrcb();
            v8 = -1LL << (v24 + 1);
            SchedulerAssist = v45->SchedulerAssist;
            v46 = ~(unsigned __int16)v8;
            v16 = (v46 & SchedulerAssist[5]) == 0;
            SchedulerAssist[5] &= v46;
            if ( v16 )
              KiRemoveSystemWorkPriorityKick(v45);
            v9 = v53;
          }
        }
      }
      __writecr8(v24);
      if ( v23 )
      {
        do
        {
          v47 = (_QWORD *)*v23;
          KeSignalGate((__int64)(v23 + 1), 1LL, v9, SchedulerAssist);
          v23 = v47;
        }
        while ( v47 );
        v9 = v53;
      }
      if ( v9 )
        ExFreePoolWithTag((PVOID)v9, 0);
      v7 = v55;
      v1 = v54;
    }
    v4 = v56;
    v5 = 0;
  }
}
