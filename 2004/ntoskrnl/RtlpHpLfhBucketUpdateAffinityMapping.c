/*
 * XREFs of RtlpHpLfhBucketUpdateAffinityMapping @ 0x14034DBC8
 * Callers:
 *     RtlpHpLfhSlotAllocate @ 0x14028D3E0 (RtlpHpLfhSlotAllocate.c)
 * Callees:
 *     MiGetSystemRegionType @ 0x140207A80 (MiGetSystemRegionType.c)
 *     KiAbThreadRemoveBoosts @ 0x140207E30 (KiAbThreadRemoveBoosts.c)
 *     KiLeaveGuardedRegionUnsafe @ 0x140207EC0 (KiLeaveGuardedRegionUnsafe.c)
 *     MmGetSessionIdEx @ 0x140207F90 (MmGetSessionIdEx.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x140212700 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     KiAbEntryRemoveFromTree @ 0x140272F70 (KiAbEntryRemoveFromTree.c)
 *     KiCheckForKernelApcDelivery @ 0x140273D40 (KiCheckForKernelApcDelivery.c)
 *     ExfTryToWakePushLock @ 0x1402749E0 (ExfTryToWakePushLock.c)
 *     KeGetCurrentProcessorNumberEx @ 0x1402C9B50 (KeGetCurrentProcessorNumberEx.c)
 *     RtlpHpAcquireLockExclusive @ 0x1402CF3DC (RtlpHpAcquireLockExclusive.c)
 *     RtlpHpLfhBucketAllocateSlot @ 0x14039219C (RtlpHpLfhBucketAllocateSlot.c)
 *     __security_check_cookie @ 0x1403CCE60 (__security_check_cookie.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403EDAA4 (KiRemoveSystemWorkPriorityKick.c)
 *     KeBugCheckEx @ 0x1403F70D0 (KeBugCheckEx.c)
 *     memset @ 0x14040A280 (memset.c)
 */

__int64 __fastcall RtlpHpLfhBucketUpdateAffinityMapping(__int64 a1, __int64 a2)
{
  char CurrentProcessorNumber; // al
  unsigned int v5; // edx
  __int64 v6; // rcx
  unsigned int SessionId; // r13d
  __int64 v8; // rax
  struct _KTHREAD *CurrentThread; // rdx
  __int64 v10; // r14
  __int64 v11; // rdi
  __int64 result; // rax
  ULONG_PTR v13; // rsi
  KIRQL v14; // al
  unsigned __int8 *v15; // rcx
  unsigned __int64 v16; // rbx
  unsigned __int8 *v17; // r10
  unsigned int v18; // edx
  __int64 v19; // r8
  __int64 v20; // rax
  __int64 v21; // r14
  unsigned int v22; // ecx
  _BYTE *v23; // r8
  unsigned __int8 v24; // al
  struct _KTHREAD *v25; // rbx
  unsigned __int8 v26; // r14
  unsigned int v27; // edx
  bool v28; // zf
  __int64 v29; // rcx
  __int64 v30; // rdi
  __int64 v31; // rdx
  __int64 v32; // rcx
  struct _KTHREAD *v33; // rbx
  unsigned int v34; // edx
  __int64 v35; // rcx
  __int64 v36; // rdi
  unsigned __int8 v37; // al
  __int64 v38; // rcx
  __int64 v39; // r8
  __int64 v40; // rcx
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *v42; // r9
  _DWORD *v43; // r8
  int v44; // eax
  struct _KPRCB *CurrentPrcb; // r9
  _DWORD *SchedulerAssist; // r8
  signed __int32 v47[8]; // [rsp+0h] [rbp-89h] BYREF
  unsigned __int8 v48; // [rsp+30h] [rbp-59h]
  int v49; // [rsp+34h] [rbp-55h]
  _DWORD v50[2]; // [rsp+38h] [rbp-51h] BYREF
  int v51; // [rsp+40h] [rbp-49h] BYREF
  __int64 v52; // [rsp+48h] [rbp-41h]
  __int64 v53; // [rsp+50h] [rbp-39h]
  __int64 v54; // [rsp+58h] [rbp-31h]
  _BYTE v55[64]; // [rsp+60h] [rbp-29h] BYREF

  v53 = a1;
  CurrentProcessorNumber = KeGetCurrentProcessorNumberEx(0LL);
  v5 = *(unsigned __int8 *)(a1 + 56);
  v6 = CurrentProcessorNumber & 0x3F;
  SessionId = -1;
  if ( (unsigned int)v6 >= v5 )
  {
    if ( (_DWORD)v6 == v5 || (_BYTE)v5 == 1 )
      v6 = 0LL;
    else
      v6 = *(unsigned __int8 *)(*(_QWORD *)(a1 + 48) + -1 - v5 + (unsigned int)v6);
  }
  v8 = *(_QWORD *)(a2 + 88);
  CurrentThread = KeGetCurrentThread();
  v10 = (unsigned int)v6;
  v54 = (unsigned int)v6;
  v11 = *(unsigned __int8 *)(v6 + v8);
  result = BYTE5(CurrentThread[1].Ucb);
  if ( (_DWORD)result != (_DWORD)v6 )
  {
    BYTE5(CurrentThread[1].Ucb) = v6;
    return result;
  }
  memset(v55, 0, sizeof(v55));
  v13 = a2 + 80;
  v14 = RtlpHpAcquireLockExclusive((volatile LONG *)(a2 + 80), *(unsigned __int8 *)(a1 + 57));
  v15 = *(unsigned __int8 **)(a2 + 88);
  v16 = v14;
  v17 = &v15[v10];
  if ( (_BYTE)v11 != v15[v10] )
    goto LABEL_16;
  v18 = *(unsigned __int8 *)(a1 + 56);
  if ( (_BYTE)v18 )
  {
    v19 = *(unsigned __int8 *)(a1 + 56);
    do
    {
      v20 = *v15++;
      ++v55[v20];
      --v19;
    }
    while ( v19 );
  }
  if ( v55[v11] == 1 )
    goto LABEL_16;
  v21 = (unsigned int)(v11 + 1);
  v22 = v21;
  if ( (unsigned int)v21 < v18 )
  {
    v23 = &v55[(unsigned int)v21];
    do
    {
      if ( !*v23 )
        break;
      if ( *v23 < v55[v21] )
        v21 = v22;
      ++v22;
      ++v23;
    }
    while ( v22 < v18 );
  }
  if ( v55[v21] )
  {
    *v17 = v21;
LABEL_16:
    if ( *(_BYTE *)(a1 + 57) )
    {
      ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(a2 + 80));
      result = (unsigned int)KiIrqlFlags;
      if ( KiIrqlFlags )
      {
        if ( (KiIrqlFlags & 1) != 0 )
        {
          result = KeGetCurrentIrql();
          if ( (unsigned __int8)result <= 0xFu && (unsigned __int8)v16 <= 0xFu && (unsigned __int8)result >= 2u )
          {
            CurrentPrcb = KeGetCurrentPrcb();
            SchedulerAssist = CurrentPrcb->SchedulerAssist;
            result = ~(unsigned __int16)(-1LL << ((unsigned __int8)v16 + 1));
            v28 = ((unsigned int)result & SchedulerAssist[5]) == 0;
            SchedulerAssist[5] &= result;
            if ( v28 )
              result = KiRemoveSystemWorkPriorityKick(CurrentPrcb);
          }
        }
      }
      __writecr8(v16);
    }
    else
    {
      if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)v13, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
        ExfTryToWakePushLock((volatile signed __int64 *)(a2 + 80));
      v51 = 0;
      v25 = KeGetCurrentThread();
      if ( (unsigned int)MiGetSystemRegionType(a2 + 80) == 1 )
        SessionId = MmGetSessionIdEx((__int64)v25->ApcState.Process);
      --v25->SpecialApcDisable;
      v26 = ++v25->AbAllocationRegionCount;
      v27 = ((char)v25->AbEntrySummary | (char)v25->AbOrphanedEntrySummary) ^ 0x3F;
      while ( 1 )
      {
        v28 = !_BitScanReverse((unsigned int *)&v29, v27);
        v50[1] = v29;
        if ( v28 )
          break;
        v30 = (__int64)&v25->LockEntries[v29];
        v27 &= ~(1 << v29);
        if ( (*(_BYTE *)(v30 + 26) & 1) != 0
          && (*(_DWORD *)(v30 + 32) & 1) == 0
          && (*(_QWORD *)(v30 + 32) & 0x7FFFFFFFFFFFFFFCLL) == (v13 & 0x7FFFFFFFFFFFFFFCLL)
          && *(_DWORD *)(v30 + 40) == SessionId )
        {
          *(_BYTE *)(v30 + 26) &= ~1u;
          if ( *(_QWORD *)(v30 + 32) )
          {
            if ( v30 )
            {
              *(_BYTE *)(v30 + 32) |= 2u;
              if ( *(__int64 *)(v30 + 32) < 0 )
                KiAbEntryRemoveFromTree((PRTL_BALANCED_NODE)v30);
              v51 = *(_DWORD *)(v30 + 88) & 0x1FFFF;
              *(_DWORD *)(v30 + 88) &= 0xFFFE0000;
              *(_BYTE *)(v30 + 25) &= ~1u;
              *(_QWORD *)(v30 + 32) = 0LL;
              v31 = (signed __int64)(v30 - (unsigned __int64)v25->LockEntries) / 96;
              if ( v26 == 1 )
                v25->AbEntrySummary |= 1 << v31;
              else
                _InterlockedOr8((volatile signed __int8 *)&v25->AbOrphanedEntrySummary, 1 << v31);
              goto LABEL_33;
            }
            break;
          }
        }
      }
      if ( (*((_DWORD *)&v25->0 + 1) & 0x10000) == 0 )
        KeBugCheckEx(0x162u, (ULONG_PTR)v25, v13, SessionId, 0LL);
LABEL_33:
      --v25->AbAllocationRegionCount;
      KiAbThreadRemoveBoosts((ULONG_PTR)v25, v13, &v51);
      v28 = v25->SpecialApcDisable++ == -1;
      if ( v28 && ($C774EFD68449142D8271B1EC1EB7FB26 *)v25->ApcState.ApcListHead[0].Flink != &v25->152 )
        KiCheckForKernelApcDelivery(v32);
      return KiLeaveGuardedRegionUnsafe((__int64)KeGetCurrentThread());
    }
    return result;
  }
  v24 = *(_BYTE *)(a2 + 77);
  if ( v24 < 0x1Eu )
  {
    *(_BYTE *)(a2 + 77) = v24 + 1;
    goto LABEL_16;
  }
  if ( *(_BYTE *)(a1 + 57) )
  {
    ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(a2 + 80));
    if ( KiIrqlFlags )
    {
      if ( (KiIrqlFlags & 1) != 0 )
      {
        CurrentIrql = KeGetCurrentIrql();
        if ( CurrentIrql <= 0xFu && (unsigned __int8)v16 <= 0xFu && CurrentIrql >= 2u )
        {
          v42 = KeGetCurrentPrcb();
          v43 = v42->SchedulerAssist;
          v44 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v16 + 1));
          v28 = (v44 & v43[5]) == 0;
          v43[5] &= v44;
          if ( v28 )
            KiRemoveSystemWorkPriorityKick(v42);
        }
      }
    }
    __writecr8(v16);
  }
  else
  {
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)v13, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)(a2 + 80));
    v50[0] = 0;
    v33 = KeGetCurrentThread();
    if ( (unsigned int)MiGetSystemRegionType(a2 + 80) == 1 )
      SessionId = MmGetSessionIdEx((__int64)v33->ApcState.Process);
    --v33->SpecialApcDisable;
    v48 = ++v33->AbAllocationRegionCount;
    v34 = ((char)v33->AbEntrySummary | (char)v33->AbOrphanedEntrySummary) ^ 0x3F;
    while ( 1 )
    {
      v28 = !_BitScanReverse((unsigned int *)&v35, v34);
      v49 = v35;
      if ( v28 )
        break;
      v36 = (__int64)&v33->LockEntries[v35];
      v34 &= ~(1 << v35);
      if ( (*(_BYTE *)(v36 + 26) & 1) != 0
        && (*(_DWORD *)(v36 + 32) & 1) == 0
        && (*(_QWORD *)(v36 + 32) & 0x7FFFFFFFFFFFFFFCLL) == (v13 & 0x7FFFFFFFFFFFFFFCLL)
        && *(_DWORD *)(v36 + 40) == SessionId )
      {
        *(_BYTE *)(v36 + 26) &= ~1u;
        if ( *(_QWORD *)(v36 + 32) )
        {
          if ( v36 )
          {
            *(_BYTE *)(v36 + 32) |= 2u;
            if ( *(__int64 *)(v36 + 32) < 0 )
              KiAbEntryRemoveFromTree((PRTL_BALANCED_NODE)v36);
            v50[0] = *(_DWORD *)(v36 + 88) & 0x1FFFF;
            *(_DWORD *)(v36 + 88) &= 0xFFFE0000;
            *(_BYTE *)(v36 + 25) &= ~1u;
            *(_QWORD *)(v36 + 32) = 0LL;
            v37 = 1 << ((char)(v36 - LOBYTE(v33->LockEntries)) / 96);
            if ( v48 == 1 )
              v33->AbEntrySummary |= v37;
            else
              _InterlockedOr8((volatile signed __int8 *)&v33->AbOrphanedEntrySummary, v37);
            goto LABEL_62;
          }
          break;
        }
      }
    }
    if ( (*((_DWORD *)&v33->0 + 1) & 0x10000) == 0 )
      KeBugCheckEx(0x162u, (ULONG_PTR)v33, a2 + 80, SessionId, 0LL);
LABEL_62:
    --v33->AbAllocationRegionCount;
    KiAbThreadRemoveBoosts((ULONG_PTR)v33, a2 + 80, v50);
    v28 = v33->SpecialApcDisable++ == -1;
    if ( v28 && ($C774EFD68449142D8271B1EC1EB7FB26 *)v33->ApcState.ApcListHead[0].Flink != &v33->152 )
      KiCheckForKernelApcDelivery(v38);
    KiLeaveGuardedRegionUnsafe((__int64)KeGetCurrentThread());
  }
  v52 = 0LL;
  v39 = *(_QWORD *)(a2 + 96);
  LOWORD(v52) = 2;
  result = _InterlockedCompareExchange64((volatile signed __int64 *)(v39 + 8 * v21), 2LL, 0LL);
  if ( !result )
  {
    result = RtlpHpLfhBucketAllocateSlot(v53, a2, (unsigned int)v21);
    *(_QWORD *)(*(_QWORD *)(a2 + 96) + 8 * v21) = result;
    if ( result )
    {
      _InterlockedOr(v47, 0);
      v40 = v54;
      *(_BYTE *)(a2 + 2) = v21 + 1;
      result = *(_QWORD *)(a2 + 88);
      *(_BYTE *)(v40 + result) = v21;
      *(_BYTE *)(a2 + 77) = 0;
    }
  }
  return result;
}
