/*
 * XREFs of RtlpHpLargeFree @ 0x1402DA540
 * Callers:
 *     RtlpHpFreeHeap @ 0x1402536BC (RtlpHpFreeHeap.c)
 *     ExFreeHeapPool @ 0x140289030 (ExFreeHeapPool.c)
 * Callees:
 *     MiGetSystemRegionType @ 0x140207A80 (MiGetSystemRegionType.c)
 *     KiAbThreadRemoveBoosts @ 0x140207E30 (KiAbThreadRemoveBoosts.c)
 *     KiLeaveGuardedRegionUnsafe @ 0x140207EC0 (KiLeaveGuardedRegionUnsafe.c)
 *     MmGetSessionIdEx @ 0x140207F90 (MmGetSessionIdEx.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x140212700 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     RtlpHpFreeVA @ 0x14025255C (RtlpHpFreeVA.c)
 *     KiAbEntryRemoveFromTree @ 0x140272F70 (KiAbEntryRemoveFromTree.c)
 *     KiCheckForKernelApcDelivery @ 0x140273D40 (KiCheckForKernelApcDelivery.c)
 *     ExfTryToWakePushLock @ 0x1402749E0 (ExfTryToWakePushLock.c)
 *     RtlRbRemoveNode @ 0x14028B370 (RtlRbRemoveNode.c)
 *     RtlpHpMetadataFree @ 0x1402DA8A8 (RtlpHpMetadataFree.c)
 *     RtlpHpLargeLockAcquire @ 0x1402DAEBC (RtlpHpLargeLockAcquire.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403EDAA4 (KiRemoveSystemWorkPriorityKick.c)
 *     KeBugCheckEx @ 0x1403F70D0 (KeBugCheckEx.c)
 *     RtlpLogHeapFailure @ 0x14058E080 (RtlpLogHeapFailure.c)
 */

unsigned __int64 __fastcall RtlpHpLargeFree(__int64 a1, unsigned __int64 a2, unsigned int a3)
{
  unsigned __int64 v3; // r14
  __int64 v4; // rbx
  char v5; // r15
  __int64 v6; // r12
  unsigned __int8 v7; // al
  _RTL_RB_TREE *v8; // rcx
  unsigned __int64 v9; // r13
  unsigned __int64 v10; // rdi
  unsigned __int64 v11; // rax
  unsigned __int64 v12; // rax
  int v13; // r15d
  __m128i v14; // xmm0
  unsigned __int64 v15; // r12
  unsigned __int64 v16; // rax
  char v17; // cl
  __int64 v18; // rax
  struct _KTHREAD *CurrentThread; // r14
  unsigned int SessionId; // edx
  unsigned __int8 v22; // r13
  unsigned int v23; // r8d
  bool v24; // zf
  __int64 v25; // rcx
  __int64 v26; // r15
  __int64 v27; // rdx
  __int64 v28; // rcx
  __m128i v29; // xmm0
  unsigned __int64 v30; // r12
  struct _KTHREAD *v31; // rdi
  unsigned int v32; // edx
  unsigned __int8 v33; // r15
  unsigned int v34; // r8d
  __int64 v35; // rcx
  __int64 v36; // r14
  __int64 v37; // rdx
  __int64 v38; // rcx
  unsigned __int8 v39; // al
  struct _KPRCB *v40; // r9
  _DWORD *v41; // r8
  int v42; // eax
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r9
  _DWORD *SchedulerAssist; // r8
  int v46; // eax
  _DWORD v47[2]; // [rsp+30h] [rbp-40h] BYREF
  int v48; // [rsp+38h] [rbp-38h] BYREF
  unsigned __int64 v49; // [rsp+40h] [rbp-30h] BYREF
  __m128i v50; // [rsp+50h] [rbp-20h] BYREF
  __m128i v51; // [rsp+60h] [rbp-10h] BYREF
  unsigned __int64 v53; // [rsp+B8h] [rbp+48h] BYREF
  int v54; // [rsp+C8h] [rbp+58h]

  v53 = a2;
  v3 = a2;
  v4 = 0LL;
  v49 = 0LL;
  v5 = a3;
  v6 = a1;
  v7 = RtlpHpLargeLockAcquire(a1, a3);
  v8 = (_RTL_RB_TREE *)(v6 + 72);
  v9 = v7;
  v10 = *(_QWORD *)(v6 + 72);
  if ( (*(_BYTE *)(v6 + 80) & 1) != 0 )
  {
    if ( v10 )
      v10 ^= (unsigned __int64)v8;
    else
      v10 = 0LL;
  }
  while ( v10 )
  {
    v11 = *(_QWORD *)(v10 + 24) & 0xFFFFFFFFFFFF0000uLL;
    if ( v3 >= v11 )
    {
      if ( v3 <= v11 )
        goto LABEL_16;
      v12 = *(_QWORD *)(v10 + 8);
    }
    else
    {
      v12 = *(_QWORD *)v10;
    }
    if ( (*(_BYTE *)(v6 + 80) & 1) != 0 && v12 )
      v10 ^= v12;
    else
      v10 = v12;
  }
  v10 = 0LL;
LABEL_16:
  v13 = v5 & 1;
  if ( v10 )
  {
    RtlRbRemoveNode(v8, (PRTL_BALANCED_NODE)v10);
    if ( !v13 )
    {
      v14 = *(__m128i *)v6;
      v15 = v6 + 64;
      if ( (_mm_cvtsi128_si32(v14) & 1) != 0 )
      {
        ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)v15);
        if ( KiIrqlFlags )
        {
          if ( (KiIrqlFlags & 1) != 0 )
          {
            CurrentIrql = KeGetCurrentIrql();
            if ( CurrentIrql <= 0xFu && (unsigned __int8)v9 <= 0xFu && CurrentIrql >= 2u )
            {
              CurrentPrcb = KeGetCurrentPrcb();
              SchedulerAssist = CurrentPrcb->SchedulerAssist;
              v46 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v9 + 1));
              v24 = (v46 & SchedulerAssist[5]) == 0;
              SchedulerAssist[5] &= v46;
              if ( v24 )
                KiRemoveSystemWorkPriorityKick(CurrentPrcb);
            }
          }
        }
        __writecr8(v9);
      }
      else
      {
        if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)v15, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
          ExfTryToWakePushLock((volatile signed __int64 *)v15);
        v48 = 0;
        CurrentThread = KeGetCurrentThread();
        if ( (unsigned int)MiGetSystemRegionType(v15) == 1 )
          SessionId = MmGetSessionIdEx((__int64)CurrentThread->ApcState.Process);
        else
          SessionId = -1;
        --CurrentThread->SpecialApcDisable;
        v22 = ++CurrentThread->AbAllocationRegionCount;
        v23 = ((char)CurrentThread->AbEntrySummary | (char)CurrentThread->AbOrphanedEntrySummary) ^ 0x3F;
        while ( 1 )
        {
          v24 = !_BitScanReverse((unsigned int *)&v25, v23);
          v47[1] = v25;
          if ( v24 )
            break;
          v26 = (__int64)&CurrentThread->LockEntries[v25];
          v23 &= ~(1 << v25);
          if ( (*(_BYTE *)(v26 + 26) & 1) != 0
            && (*(_DWORD *)(v26 + 32) & 1) == 0
            && (*(_QWORD *)(v26 + 32) & 0x7FFFFFFFFFFFFFFCLL) == (v15 & 0x7FFFFFFFFFFFFFFCLL)
            && *(_DWORD *)(v26 + 40) == SessionId )
          {
            *(_BYTE *)(v26 + 26) &= ~1u;
            if ( *(_QWORD *)(v26 + 32) )
            {
              if ( v26 )
              {
                *(_BYTE *)(v26 + 32) |= 2u;
                if ( *(__int64 *)(v26 + 32) < 0 )
                  KiAbEntryRemoveFromTree((PRTL_BALANCED_NODE)v26);
                v48 = *(_DWORD *)(v26 + 88) & 0x1FFFF;
                *(_DWORD *)(v26 + 88) &= 0xFFFE0000;
                *(_BYTE *)(v26 + 25) &= ~1u;
                *(_QWORD *)(v26 + 32) = 0LL;
                v27 = (signed __int64)(v26 - (unsigned __int64)CurrentThread->LockEntries) / 96;
                if ( v22 == 1 )
                  CurrentThread->AbEntrySummary |= 1 << v27;
                else
                  _InterlockedOr8((volatile signed __int8 *)&CurrentThread->AbOrphanedEntrySummary, 1 << v27);
                goto LABEL_41;
              }
              break;
            }
          }
        }
        if ( (*((_DWORD *)&CurrentThread->0 + 1) & 0x10000) == 0 )
          KeBugCheckEx(0x162u, (ULONG_PTR)CurrentThread, v15, SessionId, 0LL);
LABEL_41:
        --CurrentThread->AbAllocationRegionCount;
        KiAbThreadRemoveBoosts((ULONG_PTR)CurrentThread, v15, &v48);
        v24 = CurrentThread->SpecialApcDisable++ == -1;
        if ( v24
          && ($C774EFD68449142D8271B1EC1EB7FB26 *)CurrentThread->ApcState.ApcListHead[0].Flink != &CurrentThread->152 )
        {
          KiCheckForKernelApcDelivery(v28);
        }
        KiLeaveGuardedRegionUnsafe((__int64)KeGetCurrentThread());
      }
      v6 = a1;
    }
    v16 = *(_QWORD *)(v10 + 32);
    v17 = (unsigned __int8)v16 >> 2;
    v50 = *(__m128i *)v6;
    v18 = (((v16 >> 12) + ((v16 >> 1) & 1)) << 12) - 1;
    v49 = (1LL << v17) - (((1LL << v17) - 1) & ((1LL << v17) + v18)) + v18;
    RtlpHpFreeVA(&v53, &v49, 0x8000, (__int128 *)v50.m128i_i8);
    _InterlockedExchangeAdd64((volatile signed __int64 *)(v6 + 96), -(*(_QWORD *)(v10 + 32) >> 12));
    _InterlockedExchangeAdd64((volatile signed __int64 *)(v6 + 88), -(__int64)(v49 >> 12));
    v51 = *(__m128i *)v6;
    RtlpHpMetadataFree(v10, &v51);
    return v49;
  }
  else
  {
    if ( !v13 )
    {
      v29 = *(__m128i *)v6;
      v30 = v6 + 64;
      if ( (_mm_cvtsi128_si32(v29) & 1) != 0 )
      {
        ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)v30);
        if ( KiIrqlFlags )
        {
          if ( (KiIrqlFlags & 1) != 0 )
          {
            v39 = KeGetCurrentIrql();
            if ( v39 <= 0xFu && (unsigned __int8)v9 <= 0xFu && v39 >= 2u )
            {
              v40 = KeGetCurrentPrcb();
              v41 = v40->SchedulerAssist;
              v42 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v9 + 1));
              v24 = (v42 & v41[5]) == 0;
              v41[5] &= v42;
              if ( v24 )
                KiRemoveSystemWorkPriorityKick(v40);
              LODWORD(v3) = v53;
            }
          }
        }
        __writecr8(v9);
      }
      else
      {
        if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)v30, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
          ExfTryToWakePushLock((volatile signed __int64 *)v30);
        v47[0] = 0;
        v31 = KeGetCurrentThread();
        if ( (unsigned int)MiGetSystemRegionType(v30) == 1 )
          v32 = MmGetSessionIdEx((__int64)v31->ApcState.Process);
        else
          v32 = -1;
        --v31->SpecialApcDisable;
        v33 = ++v31->AbAllocationRegionCount;
        v34 = ((char)v31->AbEntrySummary | (char)v31->AbOrphanedEntrySummary) ^ 0x3F;
        while ( 1 )
        {
          v24 = !_BitScanReverse((unsigned int *)&v35, v34);
          v54 = v35;
          if ( v24 )
            goto LABEL_57;
          v36 = (__int64)&v31->LockEntries[v35];
          v34 &= ~(1 << v35);
          if ( (*(_BYTE *)(v36 + 26) & 1) != 0
            && (*(_DWORD *)(v36 + 32) & 1) == 0
            && (*(_QWORD *)(v36 + 32) & 0x7FFFFFFFFFFFFFFCLL) == (v30 & 0x7FFFFFFFFFFFFFFCLL)
            && *(_DWORD *)(v36 + 40) == v32 )
          {
            *(_BYTE *)(v36 + 26) &= ~1u;
            if ( *(_QWORD *)(v36 + 32) )
              break;
          }
        }
        if ( !v36 )
        {
LABEL_57:
          if ( (*((_DWORD *)&v31->0 + 1) & 0x10000) == 0 )
            KeBugCheckEx(0x162u, (ULONG_PTR)v31, v30, v32, 0LL);
          goto LABEL_69;
        }
        *(_BYTE *)(v36 + 32) |= 2u;
        if ( *(__int64 *)(v36 + 32) < 0 )
          KiAbEntryRemoveFromTree((PRTL_BALANCED_NODE)v36);
        v47[0] = *(_DWORD *)(v36 + 88) & 0x1FFFF;
        *(_DWORD *)(v36 + 88) &= 0xFFFE0000;
        *(_BYTE *)(v36 + 25) &= ~1u;
        *(_QWORD *)(v36 + 32) = 0LL;
        v37 = (signed __int64)(v36 - (unsigned __int64)v31->LockEntries) / 96;
        if ( v33 == 1 )
          v31->AbEntrySummary |= 1 << v37;
        else
          _InterlockedOr8((volatile signed __int8 *)&v31->AbOrphanedEntrySummary, 1 << v37);
LABEL_69:
        --v31->AbAllocationRegionCount;
        KiAbThreadRemoveBoosts((ULONG_PTR)v31, v30, v47);
        v24 = v31->SpecialApcDisable++ == -1;
        if ( v24 && ($C774EFD68449142D8271B1EC1EB7FB26 *)v31->ApcState.ApcListHead[0].Flink != &v31->152 )
          KiCheckForKernelApcDelivery(v38);
        KiLeaveGuardedRegionUnsafe((__int64)KeGetCurrentThread());
        LODWORD(v3) = v53;
      }
      LODWORD(v6) = a1;
    }
    RtlpLogHeapFailure(8, v6, v3, 0, 0LL, 0LL);
  }
  return v4;
}
