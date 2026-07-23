/*
 * XREFs of RtlpHpLfhSubsegmentIncBlockCounts @ 0x1402FD194
 * Callers:
 *     RtlpHpLfhSlotAllocate @ 0x140250B40 (RtlpHpLfhSlotAllocate.c)
 * Callees:
 *     RtlpHpAcquireLockExclusive @ 0x14023C5AC (RtlpHpAcquireLockExclusive.c)
 *     MiGetSystemRegionType @ 0x1402609A0 (MiGetSystemRegionType.c)
 *     KiAbThreadRemoveBoosts @ 0x140260D50 (KiAbThreadRemoveBoosts.c)
 *     KiLeaveGuardedRegionUnsafe @ 0x140260DE0 (KiLeaveGuardedRegionUnsafe.c)
 *     MmGetSessionIdEx @ 0x140260EB0 (MmGetSessionIdEx.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x14026B750 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     KiAbEntryRemoveFromTree @ 0x1403410E0 (KiAbEntryRemoveFromTree.c)
 *     KiCheckForKernelApcDelivery @ 0x1403599E0 (KiCheckForKernelApcDelivery.c)
 *     ExfTryToWakePushLock @ 0x14035A680 (ExfTryToWakePushLock.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403EC9E4 (KiRemoveSystemWorkPriorityKick.c)
 *     KeBugCheckEx @ 0x1403F5E40 (KeBugCheckEx.c)
 */

__int64 __fastcall RtlpHpLfhSubsegmentIncBlockCounts(
        __int64 a1,
        __int64 a2,
        unsigned int a3,
        int a4,
        _DWORD *a5,
        int a6,
        KIRQL *a7)
{
  int v7; // r14d
  KIRQL v10; // bp
  char v11; // cl
  __int64 v12; // rax
  signed __int16 *v13; // rdi
  unsigned int v14; // r15d
  __int64 v15; // rbx
  int v16; // esi
  signed __int16 v17; // ax
  __int64 v18; // r9
  volatile signed __int64 *v19; // rsi
  struct _KTHREAD *CurrentThread; // rbx
  unsigned int SessionId; // r8d
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  int v26; // edx
  bool v27; // zf
  unsigned __int8 v28; // bp
  unsigned int v29; // edx
  __int64 v30; // rcx
  __int64 v31; // rdi
  __int64 v32; // rdx
  __int64 v33; // rdx
  __int64 v34; // rcx
  __int64 v35; // r8
  __int64 v36; // r9
  signed __int16 v37; // tt
  signed __int16 *v38; // [rsp+30h] [rbp-48h]
  __int64 v39; // [rsp+88h] [rbp+10h]
  int v40; // [rsp+90h] [rbp+18h] BYREF

  v7 = a6;
  if ( a6 )
    v10 = *a7;
  else
    v10 = -1;
  v11 = *(_BYTE *)(a2 + 44);
  v12 = a3 >> v11;
  v13 = (signed __int16 *)(2 * v12 + a2 + *(unsigned __int16 *)(a2 + 46));
  v39 = 2 * v12;
  _m_prefetchw(v13);
  v14 = -1;
  v38 = &v13[((a3 + a4 - 1) >> v11) - (unsigned int)v12 + 1];
  LODWORD(v15) = 0;
  v16 = 0;
  if ( v13 < v38 )
  {
    do
    {
      while ( 2 )
      {
        v17 = *v13;
        while ( v17 > 0 )
        {
          v37 = v17;
          v17 = _InterlockedCompareExchange16(v13, v17 + 1, v17);
          if ( v37 == v17 )
          {
            v18 = v39;
            goto LABEL_10;
          }
        }
        if ( !v7 )
        {
          v7 = 1;
          v10 = RtlpHpAcquireLockExclusive((volatile LONG *)(a2 + 24), *(unsigned __int8 *)(a1 + 57));
          continue;
        }
        break;
      }
      v18 = v39;
      if ( v17 )
      {
        ++v16;
        v15 = v39 >> 1;
        if ( v14 == -1 )
          v14 = v39 >> 1;
      }
      else
      {
        --v16;
      }
      *v13 = v17 + 1;
LABEL_10:
      ++v13;
      v39 = v18 + 2;
    }
    while ( v13 < v38 );
    if ( v16 && (RtlpHpLfhPerfFlags & 0x20) != 0 )
      _InterlockedExchangeAdd64(
        (volatile signed __int64 *)(*(__int16 *)(a1 + 58) + a1 + 24),
        (v16 << *(_BYTE *)(a2 + 44)) / 4096);
    if ( v14 != -1 )
    {
      v7 = 0;
      *a5 = v15 - v14 + 1;
      *a7 = v10;
    }
  }
  if ( v7 )
  {
    v19 = (volatile signed __int64 *)(a2 + 24);
    if ( *(_BYTE *)(a1 + 57) )
    {
      ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(a2 + 24));
      if ( KiIrqlFlags )
      {
        if ( (KiIrqlFlags & 1) != 0 )
        {
          CurrentIrql = KeGetCurrentIrql();
          if ( CurrentIrql <= 0xFu && v10 <= 0xFu && CurrentIrql >= 2u )
          {
            CurrentPrcb = KeGetCurrentPrcb();
            SchedulerAssist = CurrentPrcb->SchedulerAssist;
            v26 = ~(unsigned __int16)(-1LL << (v10 + 1));
            v27 = (v26 & SchedulerAssist[5]) == 0;
            SchedulerAssist[5] &= v26;
            if ( v27 )
              KiRemoveSystemWorkPriorityKick(CurrentPrcb);
          }
        }
      }
      __writecr8(v10);
    }
    else
    {
      if ( (_InterlockedExchangeAdd64(v19, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
        ExfTryToWakePushLock(a2 + 24);
      v40 = 0;
      CurrentThread = KeGetCurrentThread();
      if ( (unsigned int)MiGetSystemRegionType(a2 + 24) == 1 )
        SessionId = MmGetSessionIdEx((__int64)CurrentThread->ApcState.Process);
      else
        SessionId = -1;
      --CurrentThread->SpecialApcDisable;
      v28 = ++CurrentThread->AbAllocationRegionCount;
      v29 = ((char)CurrentThread->AbEntrySummary | (char)CurrentThread->AbOrphanedEntrySummary) ^ 0x3F;
      while ( 1 )
      {
        v27 = !_BitScanReverse((unsigned int *)&v30, v29);
        a6 = v30;
        if ( v27 )
          break;
        v31 = (__int64)&CurrentThread->LockEntries[v30];
        v29 &= ~(1 << v30);
        if ( (*(_BYTE *)(v31 + 26) & 1) != 0
          && (*(_DWORD *)(v31 + 32) & 1) == 0
          && (*(_QWORD *)(v31 + 32) & 0x7FFFFFFFFFFFFFFCLL) == ((unsigned __int64)v19 & 0x7FFFFFFFFFFFFFFCLL)
          && *(_DWORD *)(v31 + 40) == SessionId )
        {
          *(_BYTE *)(v31 + 26) &= ~1u;
          if ( *(_QWORD *)(v31 + 32) )
          {
            if ( v31 )
            {
              *(_BYTE *)(v31 + 32) |= 2u;
              if ( *(__int64 *)(v31 + 32) < 0 )
                KiAbEntryRemoveFromTree((PRTL_BALANCED_NODE)v31);
              v40 = *(_DWORD *)(v31 + 88) & 0x1FFFF;
              *(_DWORD *)(v31 + 88) &= 0xFFFE0000;
              *(_BYTE *)(v31 + 25) &= ~1u;
              *(_QWORD *)(v31 + 32) = 0LL;
              v32 = (signed __int64)(v31 - (unsigned __int64)CurrentThread->LockEntries) / 96;
              if ( v28 == 1 )
                CurrentThread->AbEntrySummary |= 1 << v32;
              else
                _InterlockedOr8((volatile signed __int8 *)&CurrentThread->AbOrphanedEntrySummary, 1 << v32);
              goto LABEL_44;
            }
            break;
          }
        }
      }
      if ( (*((_DWORD *)&CurrentThread->0 + 1) & 0x10000) == 0 )
        KeBugCheckEx(0x162u, (ULONG_PTR)CurrentThread, a2 + 24, SessionId, 0LL);
LABEL_44:
      --CurrentThread->AbAllocationRegionCount;
      KiAbThreadRemoveBoosts((ULONG_PTR)CurrentThread, a2 + 24, &v40);
      v27 = CurrentThread->SpecialApcDisable++ == -1;
      if ( v27
        && ($C774EFD68449142D8271B1EC1EB7FB26 *)CurrentThread->ApcState.ApcListHead[0].Flink != &CurrentThread->152 )
      {
        KiCheckForKernelApcDelivery(v34);
      }
      KiLeaveGuardedRegionUnsafe((__int64)KeGetCurrentThread(), v33, v35, v36);
    }
  }
  return v14;
}
