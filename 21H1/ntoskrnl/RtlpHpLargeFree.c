/*
 * XREFs of RtlpHpLargeFree @ 0x14035F014
 * Callers:
 *     ExFreeHeapPool @ 0x14024C790 (ExFreeHeapPool.c)
 *     RtlpHpFreeHeap @ 0x1402AC6EC (RtlpHpFreeHeap.c)
 * Callees:
 *     RtlRbRemoveNode @ 0x14024EAD0 (RtlRbRemoveNode.c)
 *     MiGetSystemRegionType @ 0x1402609A0 (MiGetSystemRegionType.c)
 *     KiAbThreadRemoveBoosts @ 0x140260D50 (KiAbThreadRemoveBoosts.c)
 *     KiLeaveGuardedRegionUnsafe @ 0x140260DE0 (KiLeaveGuardedRegionUnsafe.c)
 *     MmGetSessionIdEx @ 0x140260EB0 (MmGetSessionIdEx.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x14026B750 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     RtlpHpFreeVA @ 0x1402AB58C (RtlpHpFreeVA.c)
 *     KiAbEntryRemoveFromTree @ 0x1403410E0 (KiAbEntryRemoveFromTree.c)
 *     KiCheckForKernelApcDelivery @ 0x1403599E0 (KiCheckForKernelApcDelivery.c)
 *     ExfTryToWakePushLock @ 0x14035A680 (ExfTryToWakePushLock.c)
 *     RtlpHpMetadataFree @ 0x14035F37C (RtlpHpMetadataFree.c)
 *     RtlpHpLargeLockAcquire @ 0x14035F990 (RtlpHpLargeLockAcquire.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403EC9E4 (KiRemoveSystemWorkPriorityKick.c)
 *     KeBugCheckEx @ 0x1403F5E40 (KeBugCheckEx.c)
 *     RtlpLogHeapFailure @ 0x14058D990 (RtlpLogHeapFailure.c)
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
  __int64 v28; // rdx
  __int64 v29; // rcx
  __int64 v30; // r8
  _DWORD *v31; // r9
  __m128i v32; // xmm0
  unsigned __int64 v33; // r12
  struct _KTHREAD *v34; // rdi
  unsigned int v35; // edx
  unsigned __int8 v36; // r15
  unsigned int v37; // r8d
  __int64 v38; // rcx
  __int64 v39; // r14
  __int64 v40; // rdx
  __int64 v41; // rdx
  __int64 v42; // rcx
  __int64 v43; // r8
  _DWORD *v44; // r9
  unsigned __int8 v45; // al
  struct _KPRCB *v46; // r9
  _DWORD *v47; // r8
  int v48; // eax
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r9
  _DWORD *SchedulerAssist; // r8
  int v52; // eax
  _DWORD v53[2]; // [rsp+30h] [rbp-40h] BYREF
  int v54; // [rsp+38h] [rbp-38h] BYREF
  unsigned __int64 v55; // [rsp+40h] [rbp-30h] BYREF
  __m128i v56; // [rsp+50h] [rbp-20h] BYREF
  __m128i v57; // [rsp+60h] [rbp-10h] BYREF
  unsigned __int64 v59; // [rsp+B8h] [rbp+48h] BYREF
  int v60; // [rsp+C8h] [rbp+58h]

  v59 = a2;
  v3 = a2;
  v4 = 0LL;
  v55 = 0LL;
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
              v52 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v9 + 1));
              v24 = (v52 & SchedulerAssist[5]) == 0;
              SchedulerAssist[5] &= v52;
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
          ExfTryToWakePushLock(v15);
        v54 = 0;
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
          v53[1] = v25;
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
                v54 = *(_DWORD *)(v26 + 88) & 0x1FFFF;
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
        KiAbThreadRemoveBoosts((ULONG_PTR)CurrentThread, v15, &v54);
        v24 = CurrentThread->SpecialApcDisable++ == -1;
        if ( v24
          && ($C774EFD68449142D8271B1EC1EB7FB26 *)CurrentThread->ApcState.ApcListHead[0].Flink != &CurrentThread->152 )
        {
          KiCheckForKernelApcDelivery(v29, v28, v30, v31);
        }
        KiLeaveGuardedRegionUnsafe((__int64)KeGetCurrentThread(), v28, v30, (__int64)v31);
      }
      v6 = a1;
    }
    v16 = *(_QWORD *)(v10 + 32);
    v17 = (unsigned __int8)v16 >> 2;
    v56 = *(__m128i *)v6;
    v18 = (((v16 >> 12) + ((v16 >> 1) & 1)) << 12) - 1;
    v55 = (1LL << v17) - (((1LL << v17) - 1) & ((1LL << v17) + v18)) + v18;
    RtlpHpFreeVA(&v59, &v55, 0x8000, (__int128 *)v56.m128i_i8);
    _InterlockedExchangeAdd64((volatile signed __int64 *)(v6 + 96), -(*(_QWORD *)(v10 + 32) >> 12));
    _InterlockedExchangeAdd64((volatile signed __int64 *)(v6 + 88), -(__int64)(v55 >> 12));
    v57 = *(__m128i *)v6;
    RtlpHpMetadataFree(v10, &v57);
    return v55;
  }
  else
  {
    if ( !v13 )
    {
      v32 = *(__m128i *)v6;
      v33 = v6 + 64;
      if ( (_mm_cvtsi128_si32(v32) & 1) != 0 )
      {
        ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)v33);
        if ( KiIrqlFlags )
        {
          if ( (KiIrqlFlags & 1) != 0 )
          {
            v45 = KeGetCurrentIrql();
            if ( v45 <= 0xFu && (unsigned __int8)v9 <= 0xFu && v45 >= 2u )
            {
              v46 = KeGetCurrentPrcb();
              v47 = v46->SchedulerAssist;
              v48 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v9 + 1));
              v24 = (v48 & v47[5]) == 0;
              v47[5] &= v48;
              if ( v24 )
                KiRemoveSystemWorkPriorityKick(v46);
              LODWORD(v3) = v59;
            }
          }
        }
        __writecr8(v9);
      }
      else
      {
        if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)v33, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
          ExfTryToWakePushLock(v33);
        v53[0] = 0;
        v34 = KeGetCurrentThread();
        if ( (unsigned int)MiGetSystemRegionType(v33) == 1 )
          v35 = MmGetSessionIdEx((__int64)v34->ApcState.Process);
        else
          v35 = -1;
        --v34->SpecialApcDisable;
        v36 = ++v34->AbAllocationRegionCount;
        v37 = ((char)v34->AbEntrySummary | (char)v34->AbOrphanedEntrySummary) ^ 0x3F;
        while ( 1 )
        {
          v24 = !_BitScanReverse((unsigned int *)&v38, v37);
          v60 = v38;
          if ( v24 )
            goto LABEL_57;
          v39 = (__int64)&v34->LockEntries[v38];
          v37 &= ~(1 << v38);
          if ( (*(_BYTE *)(v39 + 26) & 1) != 0
            && (*(_DWORD *)(v39 + 32) & 1) == 0
            && (*(_QWORD *)(v39 + 32) & 0x7FFFFFFFFFFFFFFCLL) == (v33 & 0x7FFFFFFFFFFFFFFCLL)
            && *(_DWORD *)(v39 + 40) == v35 )
          {
            *(_BYTE *)(v39 + 26) &= ~1u;
            if ( *(_QWORD *)(v39 + 32) )
              break;
          }
        }
        if ( !v39 )
        {
LABEL_57:
          if ( (*((_DWORD *)&v34->0 + 1) & 0x10000) == 0 )
            KeBugCheckEx(0x162u, (ULONG_PTR)v34, v33, v35, 0LL);
          goto LABEL_69;
        }
        *(_BYTE *)(v39 + 32) |= 2u;
        if ( *(__int64 *)(v39 + 32) < 0 )
          KiAbEntryRemoveFromTree((PRTL_BALANCED_NODE)v39);
        v53[0] = *(_DWORD *)(v39 + 88) & 0x1FFFF;
        *(_DWORD *)(v39 + 88) &= 0xFFFE0000;
        *(_BYTE *)(v39 + 25) &= ~1u;
        *(_QWORD *)(v39 + 32) = 0LL;
        v40 = (signed __int64)(v39 - (unsigned __int64)v34->LockEntries) / 96;
        if ( v36 == 1 )
          v34->AbEntrySummary |= 1 << v40;
        else
          _InterlockedOr8((volatile signed __int8 *)&v34->AbOrphanedEntrySummary, 1 << v40);
LABEL_69:
        --v34->AbAllocationRegionCount;
        KiAbThreadRemoveBoosts((ULONG_PTR)v34, v33, v53);
        v24 = v34->SpecialApcDisable++ == -1;
        if ( v24 && ($C774EFD68449142D8271B1EC1EB7FB26 *)v34->ApcState.ApcListHead[0].Flink != &v34->152 )
          KiCheckForKernelApcDelivery(v42, v41, v43, v44);
        KiLeaveGuardedRegionUnsafe((__int64)KeGetCurrentThread(), v41, v43, (__int64)v44);
        LODWORD(v3) = v59;
      }
      LODWORD(v6) = a1;
    }
    RtlpLogHeapFailure(8, v6, v3, 0, 0LL, 0LL);
  }
  return v4;
}
