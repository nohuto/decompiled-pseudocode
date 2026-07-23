/*
 * XREFs of RtlpHpSegMgrVaCtxAlloc @ 0x14030813C
 * Callers:
 *     RtlpHpSegMgrReserve @ 0x14030801C (RtlpHpSegMgrReserve.c)
 * Callees:
 *     MiGetSystemRegionType @ 0x140220A00 (MiGetSystemRegionType.c)
 *     KiAbThreadRemoveBoosts @ 0x140220DB0 (KiAbThreadRemoveBoosts.c)
 *     KiLeaveGuardedRegionUnsafe @ 0x140220E40 (KiLeaveGuardedRegionUnsafe.c)
 *     MmGetSessionIdEx @ 0x140220F10 (MmGetSessionIdEx.c)
 *     ExfTryToWakePushLock @ 0x140242B40 (ExfTryToWakePushLock.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x14027E490 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     RtlpHpEnvGetHeapManager @ 0x1402CEE38 (RtlpHpEnvGetHeapManager.c)
 *     RtlpHpAcquireLockExclusive @ 0x1402D4324 (RtlpHpAcquireLockExclusive.c)
 *     KiCheckForKernelApcDelivery @ 0x1402DDA40 (KiCheckForKernelApcDelivery.c)
 *     KiAbEntryRemoveFromTree @ 0x1402F05E0 (KiAbEntryRemoveFromTree.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403F1DD4 (KiRemoveSystemWorkPriorityKick.c)
 *     KeBugCheckEx @ 0x1403FBCA0 (KeBugCheckEx.c)
 */

unsigned __int64 __fastcall RtlpHpSegMgrVaCtxAlloc(__int64 a1, int a2, char a3)
{
  __int64 v3; // rbx
  _QWORD **v4; // rdi
  unsigned __int64 v8; // r14
  KIRQL v9; // al
  _QWORD *v10; // r12
  unsigned __int64 v11; // r15
  unsigned int v12; // ecx
  unsigned int v13; // eax
  int v14; // ecx
  __int64 v15; // r8
  struct _KTHREAD *v16; // rdi
  unsigned int v17; // edx
  unsigned __int8 v18; // r15
  unsigned int v19; // r8d
  bool v20; // zf
  __int64 v21; // rcx
  __int64 v22; // rsi
  __int64 v23; // rdx
  __int64 v24; // rcx
  unsigned __int8 v25; // al
  struct _KPRCB *v26; // r9
  _DWORD *v27; // r8
  int v28; // eax
  struct _KTHREAD *CurrentThread; // rdi
  unsigned int SessionId; // edx
  unsigned __int8 v31; // r15
  unsigned int v32; // r8d
  __int64 v33; // rcx
  __int64 v34; // rsi
  unsigned __int8 v35; // al
  __int64 v36; // rcx
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r9
  _DWORD *SchedulerAssist; // r8
  int v40; // eax
  int v41; // [rsp+34h] [rbp-1Ch] BYREF
  unsigned int v42; // [rsp+38h] [rbp-18h]
  __int128 v43; // [rsp+40h] [rbp-10h] BYREF
  int v45; // [rsp+A8h] [rbp+58h] BYREF

  v3 = 0LL;
  v4 = (_QWORD **)(a1 + 128);
  v42 = 0;
  if ( *(_QWORD *)(a1 + 120) || *v4 )
  {
    v8 = a1 + 112;
    v9 = RtlpHpAcquireLockExclusive((volatile LONG *)(a1 + 112), *(_DWORD *)(a1 + 40) & 1);
    v10 = *v4;
    v11 = v9;
    if ( *v4 || (a3 & 2) == 0 && (--v4, (v10 = *v4) != 0LL) )
    {
      v12 = *((unsigned __int16 *)v10 - 3);
      _BitScanForward(&v13, v12);
      v14 = v12 ^ (1 << v13);
      v42 = v13;
      *((_WORD *)v10 - 3) = v14;
      if ( !(_WORD)v14 )
      {
        if ( *v4 )
          *v4 = (_QWORD *)**v4;
        *v10 = 0LL;
      }
      if ( (*(_DWORD *)(a1 + 40) & 1) != 0 )
      {
        ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)v8);
        if ( KiIrqlFlags )
        {
          if ( (KiIrqlFlags & 1) != 0 )
          {
            CurrentIrql = KeGetCurrentIrql();
            if ( CurrentIrql <= 0xFu && (unsigned __int8)v11 <= 0xFu && CurrentIrql >= 2u )
            {
              CurrentPrcb = KeGetCurrentPrcb();
              SchedulerAssist = CurrentPrcb->SchedulerAssist;
              v40 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v11 + 1));
              v20 = (v40 & SchedulerAssist[5]) == 0;
              SchedulerAssist[5] &= v40;
              if ( v20 )
                KiRemoveSystemWorkPriorityKick(CurrentPrcb);
            }
          }
        }
        __writecr8(v11);
      }
      else
      {
        if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)v8, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
          ExfTryToWakePushLock((volatile signed __int64 *)v8);
        v41 = 0;
        CurrentThread = KeGetCurrentThread();
        if ( (unsigned int)MiGetSystemRegionType(v8) == 1 )
          SessionId = MmGetSessionIdEx((__int64)CurrentThread->ApcState.Process);
        else
          SessionId = -1;
        --CurrentThread->SpecialApcDisable;
        v31 = ++CurrentThread->AbAllocationRegionCount;
        v32 = ((char)CurrentThread->AbEntrySummary | (char)CurrentThread->AbOrphanedEntrySummary) ^ 0x3F;
        while ( 1 )
        {
          v20 = !_BitScanReverse((unsigned int *)&v33, v32);
          if ( v20 )
            goto LABEL_55;
          v34 = (__int64)&CurrentThread->LockEntries[v33];
          v32 &= ~(1 << v33);
          if ( (*(_BYTE *)(v34 + 26) & 1) != 0
            && (*(_DWORD *)(v34 + 32) & 1) == 0
            && (*(_QWORD *)(v34 + 32) & 0x7FFFFFFFFFFFFFFCLL) == (v8 & 0x7FFFFFFFFFFFFFFCLL)
            && *(_DWORD *)(v34 + 40) == SessionId )
          {
            *(_BYTE *)(v34 + 26) &= ~1u;
            if ( *(_QWORD *)(v34 + 32) )
              break;
          }
        }
        if ( !v34 )
        {
LABEL_55:
          if ( (*((_DWORD *)&CurrentThread->0 + 1) & 0x10000) == 0 )
            KeBugCheckEx(0x162u, (ULONG_PTR)CurrentThread, v8, SessionId, 0LL);
          goto LABEL_67;
        }
        *(_BYTE *)(v34 + 32) |= 2u;
        if ( *(__int64 *)(v34 + 32) < 0 )
          KiAbEntryRemoveFromTree((PRTL_BALANCED_NODE)v34);
        v41 = *(_DWORD *)(v34 + 88) & 0x1FFFF;
        *(_DWORD *)(v34 + 88) &= 0xFFFE0000;
        *(_BYTE *)(v34 + 25) &= ~1u;
        *(_QWORD *)(v34 + 32) = 0LL;
        v35 = 1 << ((signed __int64)(v34 - (unsigned __int64)CurrentThread->LockEntries) / 96);
        if ( v31 == 1 )
          CurrentThread->AbEntrySummary |= v35;
        else
          _InterlockedOr8((volatile signed __int8 *)&CurrentThread->AbOrphanedEntrySummary, v35);
LABEL_67:
        --CurrentThread->AbAllocationRegionCount;
        KiAbThreadRemoveBoosts((ULONG_PTR)CurrentThread, v8, &v41);
        v20 = CurrentThread->SpecialApcDisable++ == -1;
        if ( v20
          && ($C774EFD68449142D8271B1EC1EB7FB26 *)CurrentThread->ApcState.ApcListHead[0].Flink != &CurrentThread->152 )
        {
          KiCheckForKernelApcDelivery(v36);
        }
        KiLeaveGuardedRegionUnsafe((__int64)KeGetCurrentThread());
      }
      v43 = *(_OWORD *)(a1 + 40);
      v15 = *((_QWORD *)RtlpHpEnvGetHeapManager(&v43) + 6 * *((unsigned __int8 *)v10 - 15) + 284);
      return (((unsigned __int64)v10 - *(_QWORD *)(v15 + 40) - 16) >> *(_DWORD *)(v15 + 24) << 20)
           + *(_QWORD *)(v15 + 8)
           + a2 * v42;
    }
    else if ( (*(_DWORD *)(a1 + 40) & 1) != 0 )
    {
      ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)v8);
      if ( KiIrqlFlags )
      {
        if ( (KiIrqlFlags & 1) != 0 )
        {
          v25 = KeGetCurrentIrql();
          if ( v25 <= 0xFu && (unsigned __int8)v11 <= 0xFu && v25 >= 2u )
          {
            v26 = KeGetCurrentPrcb();
            v27 = v26->SchedulerAssist;
            v28 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v11 + 1));
            v20 = (v28 & v27[5]) == 0;
            v27[5] &= v28;
            if ( v20 )
              KiRemoveSystemWorkPriorityKick(v26);
          }
        }
      }
      __writecr8(v11);
    }
    else
    {
      if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)v8, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
        ExfTryToWakePushLock((volatile signed __int64 *)v8);
      v45 = 0;
      v16 = KeGetCurrentThread();
      if ( (unsigned int)MiGetSystemRegionType(v8) == 1 )
        v17 = MmGetSessionIdEx((__int64)v16->ApcState.Process);
      else
        v17 = -1;
      --v16->SpecialApcDisable;
      v18 = ++v16->AbAllocationRegionCount;
      v19 = ((char)v16->AbEntrySummary | (char)v16->AbOrphanedEntrySummary) ^ 0x3F;
      while ( 1 )
      {
        v20 = !_BitScanReverse((unsigned int *)&v21, v19);
        if ( v20 )
          goto LABEL_23;
        v22 = (__int64)&v16->LockEntries[v21];
        v19 &= ~(1 << v21);
        if ( (*(_BYTE *)(v22 + 26) & 1) != 0
          && (*(_DWORD *)(v22 + 32) & 1) == 0
          && (*(_QWORD *)(v22 + 32) & 0x7FFFFFFFFFFFFFFCLL) == (v8 & 0x7FFFFFFFFFFFFFFCLL)
          && *(_DWORD *)(v22 + 40) == v17 )
        {
          *(_BYTE *)(v22 + 26) &= ~1u;
          if ( *(_QWORD *)(v22 + 32) )
            break;
        }
      }
      if ( !v22 )
      {
LABEL_23:
        if ( (*((_DWORD *)&v16->0 + 1) & 0x10000) == 0 )
          KeBugCheckEx(0x162u, (ULONG_PTR)v16, v8, v17, 0LL);
        goto LABEL_35;
      }
      *(_BYTE *)(v22 + 32) |= 2u;
      if ( *(__int64 *)(v22 + 32) < 0 )
        KiAbEntryRemoveFromTree((PRTL_BALANCED_NODE)v22);
      v45 = *(_DWORD *)(v22 + 88) & 0x1FFFF;
      *(_DWORD *)(v22 + 88) &= 0xFFFE0000;
      *(_BYTE *)(v22 + 25) &= ~1u;
      *(_QWORD *)(v22 + 32) = 0LL;
      v23 = (signed __int64)(v22 - (unsigned __int64)v16->LockEntries) / 96;
      if ( v18 == 1 )
        v16->AbEntrySummary |= 1 << v23;
      else
        _InterlockedOr8((volatile signed __int8 *)&v16->AbOrphanedEntrySummary, 1 << v23);
LABEL_35:
      --v16->AbAllocationRegionCount;
      KiAbThreadRemoveBoosts((ULONG_PTR)v16, v8, &v45);
      v20 = v16->SpecialApcDisable++ == -1;
      if ( v20 && ($C774EFD68449142D8271B1EC1EB7FB26 *)v16->ApcState.ApcListHead[0].Flink != &v16->152 )
        KiCheckForKernelApcDelivery(v24);
      KiLeaveGuardedRegionUnsafe((__int64)KeGetCurrentThread());
    }
  }
  return v3;
}
