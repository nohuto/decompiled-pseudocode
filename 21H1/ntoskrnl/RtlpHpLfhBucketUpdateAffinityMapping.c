/*
 * XREFs of RtlpHpLfhBucketUpdateAffinityMapping @ 0x140310538
 * Callers:
 *     RtlpHpLfhSlotAllocate @ 0x140250B40 (RtlpHpLfhSlotAllocate.c)
 * Callees:
 *     KeGetCurrentProcessorNumberEx @ 0x140236D20 (KeGetCurrentProcessorNumberEx.c)
 *     RtlpHpAcquireLockExclusive @ 0x14023C5AC (RtlpHpAcquireLockExclusive.c)
 *     MiGetSystemRegionType @ 0x1402609A0 (MiGetSystemRegionType.c)
 *     KiAbThreadRemoveBoosts @ 0x140260D50 (KiAbThreadRemoveBoosts.c)
 *     KiLeaveGuardedRegionUnsafe @ 0x140260DE0 (KiLeaveGuardedRegionUnsafe.c)
 *     MmGetSessionIdEx @ 0x140260EB0 (MmGetSessionIdEx.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x14026B750 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     KiAbEntryRemoveFromTree @ 0x1403410E0 (KiAbEntryRemoveFromTree.c)
 *     KiCheckForKernelApcDelivery @ 0x1403599E0 (KiCheckForKernelApcDelivery.c)
 *     ExfTryToWakePushLock @ 0x14035A680 (ExfTryToWakePushLock.c)
 *     RtlpHpLfhBucketAllocateSlot @ 0x14039172C (RtlpHpLfhBucketAllocateSlot.c)
 *     __security_check_cookie @ 0x1403CC020 (__security_check_cookie.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403EC9E4 (KiRemoveSystemWorkPriorityKick.c)
 *     KeBugCheckEx @ 0x1403F5E40 (KeBugCheckEx.c)
 *     memset @ 0x140408F80 (memset.c)
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
  __int64 v32; // rdx
  __int64 v33; // rcx
  __int64 v34; // r8
  __int64 v35; // r9
  struct _KTHREAD *v36; // rbx
  unsigned int v37; // edx
  __int64 v38; // rcx
  __int64 v39; // rdi
  unsigned __int8 v40; // al
  __int64 v41; // rdx
  __int64 v42; // rcx
  __int64 v43; // r8
  __int64 v44; // r9
  __int64 v45; // r8
  __int64 v46; // rcx
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *v48; // r9
  _DWORD *v49; // r8
  int v50; // eax
  struct _KPRCB *CurrentPrcb; // r9
  _DWORD *SchedulerAssist; // r8
  signed __int32 v53[8]; // [rsp+0h] [rbp-89h] BYREF
  unsigned __int8 v54; // [rsp+30h] [rbp-59h]
  int v55; // [rsp+34h] [rbp-55h]
  _DWORD v56[2]; // [rsp+38h] [rbp-51h] BYREF
  int v57; // [rsp+40h] [rbp-49h] BYREF
  __int64 v58; // [rsp+48h] [rbp-41h]
  __int64 v59; // [rsp+50h] [rbp-39h]
  __int64 v60; // [rsp+58h] [rbp-31h]
  _BYTE v61[64]; // [rsp+60h] [rbp-29h] BYREF

  v59 = a1;
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
  v60 = (unsigned int)v6;
  v11 = *(unsigned __int8 *)(v6 + v8);
  result = BYTE5(CurrentThread[1].Ucb);
  if ( (_DWORD)result != (_DWORD)v6 )
  {
    BYTE5(CurrentThread[1].Ucb) = v6;
    return result;
  }
  memset(v61, 0, sizeof(v61));
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
      ++v61[v20];
      --v19;
    }
    while ( v19 );
  }
  if ( v61[v11] == 1 )
    goto LABEL_16;
  v21 = (unsigned int)(v11 + 1);
  v22 = v21;
  if ( (unsigned int)v21 < v18 )
  {
    v23 = &v61[(unsigned int)v21];
    do
    {
      if ( !*v23 )
        break;
      if ( *v23 < v61[v21] )
        v21 = v22;
      ++v22;
      ++v23;
    }
    while ( v22 < v18 );
  }
  if ( v61[v21] )
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
        ExfTryToWakePushLock(a2 + 80);
      v57 = 0;
      v25 = KeGetCurrentThread();
      if ( (unsigned int)MiGetSystemRegionType(a2 + 80) == 1 )
        SessionId = MmGetSessionIdEx((__int64)v25->ApcState.Process);
      --v25->SpecialApcDisable;
      v26 = ++v25->AbAllocationRegionCount;
      v27 = ((char)v25->AbEntrySummary | (char)v25->AbOrphanedEntrySummary) ^ 0x3F;
      while ( 1 )
      {
        v28 = !_BitScanReverse((unsigned int *)&v29, v27);
        v56[1] = v29;
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
              v57 = *(_DWORD *)(v30 + 88) & 0x1FFFF;
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
      KiAbThreadRemoveBoosts((ULONG_PTR)v25, v13, &v57);
      v28 = v25->SpecialApcDisable++ == -1;
      if ( v28 && ($C774EFD68449142D8271B1EC1EB7FB26 *)v25->ApcState.ApcListHead[0].Flink != &v25->152 )
        KiCheckForKernelApcDelivery(v33);
      return KiLeaveGuardedRegionUnsafe((__int64)KeGetCurrentThread(), v32, v34, v35);
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
          v48 = KeGetCurrentPrcb();
          v49 = v48->SchedulerAssist;
          v50 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v16 + 1));
          v28 = (v50 & v49[5]) == 0;
          v49[5] &= v50;
          if ( v28 )
            KiRemoveSystemWorkPriorityKick(v48);
        }
      }
    }
    __writecr8(v16);
  }
  else
  {
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)v13, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock(a2 + 80);
    v56[0] = 0;
    v36 = KeGetCurrentThread();
    if ( (unsigned int)MiGetSystemRegionType(a2 + 80) == 1 )
      SessionId = MmGetSessionIdEx((__int64)v36->ApcState.Process);
    --v36->SpecialApcDisable;
    v54 = ++v36->AbAllocationRegionCount;
    v37 = ((char)v36->AbEntrySummary | (char)v36->AbOrphanedEntrySummary) ^ 0x3F;
    while ( 1 )
    {
      v28 = !_BitScanReverse((unsigned int *)&v38, v37);
      v55 = v38;
      if ( v28 )
        break;
      v39 = (__int64)&v36->LockEntries[v38];
      v37 &= ~(1 << v38);
      if ( (*(_BYTE *)(v39 + 26) & 1) != 0
        && (*(_DWORD *)(v39 + 32) & 1) == 0
        && (*(_QWORD *)(v39 + 32) & 0x7FFFFFFFFFFFFFFCLL) == (v13 & 0x7FFFFFFFFFFFFFFCLL)
        && *(_DWORD *)(v39 + 40) == SessionId )
      {
        *(_BYTE *)(v39 + 26) &= ~1u;
        if ( *(_QWORD *)(v39 + 32) )
        {
          if ( v39 )
          {
            *(_BYTE *)(v39 + 32) |= 2u;
            if ( *(__int64 *)(v39 + 32) < 0 )
              KiAbEntryRemoveFromTree((PRTL_BALANCED_NODE)v39);
            v56[0] = *(_DWORD *)(v39 + 88) & 0x1FFFF;
            *(_DWORD *)(v39 + 88) &= 0xFFFE0000;
            *(_BYTE *)(v39 + 25) &= ~1u;
            *(_QWORD *)(v39 + 32) = 0LL;
            v40 = 1 << ((char)(v39 - LOBYTE(v36->LockEntries)) / 96);
            if ( v54 == 1 )
              v36->AbEntrySummary |= v40;
            else
              _InterlockedOr8((volatile signed __int8 *)&v36->AbOrphanedEntrySummary, v40);
            goto LABEL_62;
          }
          break;
        }
      }
    }
    if ( (*((_DWORD *)&v36->0 + 1) & 0x10000) == 0 )
      KeBugCheckEx(0x162u, (ULONG_PTR)v36, a2 + 80, SessionId, 0LL);
LABEL_62:
    --v36->AbAllocationRegionCount;
    KiAbThreadRemoveBoosts((ULONG_PTR)v36, a2 + 80, v56);
    v28 = v36->SpecialApcDisable++ == -1;
    if ( v28 && ($C774EFD68449142D8271B1EC1EB7FB26 *)v36->ApcState.ApcListHead[0].Flink != &v36->152 )
      KiCheckForKernelApcDelivery(v42);
    KiLeaveGuardedRegionUnsafe((__int64)KeGetCurrentThread(), v41, v43, v44);
  }
  v58 = 0LL;
  v45 = *(_QWORD *)(a2 + 96);
  LOWORD(v58) = 2;
  result = _InterlockedCompareExchange64((volatile signed __int64 *)(v45 + 8 * v21), 2LL, 0LL);
  if ( !result )
  {
    result = RtlpHpLfhBucketAllocateSlot(v59, a2, (unsigned int)v21);
    *(_QWORD *)(*(_QWORD *)(a2 + 96) + 8 * v21) = result;
    if ( result )
    {
      _InterlockedOr(v53, 0);
      v46 = v60;
      *(_BYTE *)(a2 + 2) = v21 + 1;
      result = *(_QWORD *)(a2 + 88);
      *(_BYTE *)(v46 + result) = v21;
      *(_BYTE *)(a2 + 77) = 0;
    }
  }
  return result;
}
