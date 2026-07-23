/*
 * XREFs of RtlpHpLargeAlloc @ 0x140308ADC
 * Callers:
 *     ExAllocateHeapPool @ 0x140212080 (ExAllocateHeapPool.c)
 *     RtlpHpAllocateHeapInternal @ 0x1403093D8 (RtlpHpAllocateHeapInternal.c)
 * Callees:
 *     RtlRbInsertNodeEx @ 0x140216FB0 (RtlRbInsertNodeEx.c)
 *     MiGetSystemRegionType @ 0x140220A00 (MiGetSystemRegionType.c)
 *     KiAbThreadRemoveBoosts @ 0x140220DB0 (KiAbThreadRemoveBoosts.c)
 *     KiLeaveGuardedRegionUnsafe @ 0x140220E40 (KiLeaveGuardedRegionUnsafe.c)
 *     MmGetSessionIdEx @ 0x140220F10 (MmGetSessionIdEx.c)
 *     RtlpHpFreeVA @ 0x1402379DC (RtlpHpFreeVA.c)
 *     ExfTryToWakePushLock @ 0x140242B40 (ExfTryToWakePushLock.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x14027E490 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     RtlpHpAllocVA @ 0x1402CB9B8 (RtlpHpAllocVA.c)
 *     RtlpHpSegHeapCheckCommitLimit @ 0x1402CDB2C (RtlpHpSegHeapCheckCommitLimit.c)
 *     KiCheckForKernelApcDelivery @ 0x1402DDA40 (KiCheckForKernelApcDelivery.c)
 *     KiAbEntryRemoveFromTree @ 0x1402F05E0 (KiAbEntryRemoveFromTree.c)
 *     RtlpHpMetadataFree @ 0x140308A9C (RtlpHpMetadataFree.c)
 *     RtlpHpLargeLockAcquire @ 0x1403090B0 (RtlpHpLargeLockAcquire.c)
 *     RtlpHpQueryVA @ 0x1403090DC (RtlpHpQueryVA.c)
 *     RtlpHpMetadataAlloc @ 0x140309150 (RtlpHpMetadataAlloc.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403F1DD4 (KiRemoveSystemWorkPriorityKick.c)
 *     KeBugCheckEx @ 0x1403FBCA0 (KeBugCheckEx.c)
 *     memset @ 0x140411300 (memset.c)
 */

void *__fastcall RtlpHpLargeAlloc(__int64 a1, __int16 a2, size_t a3, unsigned int a4)
{
  __int128 v4; // xmm0
  void *v5; // r12
  __int64 v8; // rdi
  BOOL v9; // ebx
  unsigned int v10; // r13d
  __int64 v11; // r8
  unsigned __int64 v12; // rcx
  int v13; // ecx
  int v14; // r9d
  unsigned int v15; // r14d
  int v16; // ecx
  unsigned __int64 v17; // rdx
  unsigned __int64 v18; // rax
  unsigned __int8 v19; // al
  _RTL_RB_TREE *v20; // rcx
  unsigned __int64 v21; // rbx
  unsigned __int64 Root; // rdx
  BOOLEAN v23; // r8
  unsigned __int64 v24; // rax
  volatile signed __int64 *v25; // r14
  struct _KTHREAD *CurrentThread; // rbx
  unsigned int SessionId; // r8d
  unsigned __int8 v29; // r15
  unsigned int v30; // edx
  bool v31; // zf
  __int64 v32; // rcx
  __int64 v33; // rdi
  __int64 v34; // rdx
  __int64 v35; // rcx
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r9
  _DWORD *SchedulerAssist; // r8
  int v39; // eax
  void *v40; // [rsp+38h] [rbp-D0h] BYREF
  signed __int64 v41; // [rsp+40h] [rbp-C8h] BYREF
  int v42; // [rsp+48h] [rbp-C0h] BYREF
  int v43; // [rsp+4Ch] [rbp-BCh] BYREF
  __int64 v44; // [rsp+50h] [rbp-B8h]
  __int64 *v45; // [rsp+58h] [rbp-B0h] BYREF
  __int64 v46; // [rsp+60h] [rbp-A8h] BYREF
  __int128 v47; // [rsp+68h] [rbp-A0h] BYREF
  __int128 v48; // [rsp+78h] [rbp-90h] BYREF
  __int128 v49; // [rsp+88h] [rbp-80h] BYREF
  __int128 v50; // [rsp+98h] [rbp-70h] BYREF
  __int128 v51; // [rsp+A8h] [rbp-60h] BYREF
  __int128 v52; // [rsp+B8h] [rbp-50h] BYREF
  __int128 v53; // [rsp+C8h] [rbp-40h] BYREF
  __int128 v54; // [rsp+D8h] [rbp-30h]
  __int128 v55; // [rsp+E8h] [rbp-20h]
  __int128 v56; // [rsp+F8h] [rbp-10h]
  __int128 v57; // [rsp+108h] [rbp+0h]
  __int128 v58; // [rsp+118h] [rbp+10h]
  __int128 v59; // [rsp+128h] [rbp+20h]
  unsigned __int64 v60; // [rsp+178h] [rbp+70h]

  v4 = *(_OWORD *)a1;
  v41 = 0LL;
  LODWORD(v44) = 0;
  v5 = 0LL;
  v45 = 0LL;
  v43 = 0;
  v40 = 0LL;
  v47 = v4;
  v8 = RtlpHpMetadataAlloc(40LL, 40LL, 0LL, &v47);
  if ( v8 )
  {
    *(_OWORD *)v8 = 0LL;
    v9 = 0;
    *(_OWORD *)(v8 + 16) = 0LL;
    *(_QWORD *)(v8 + 32) = 0LL;
    if ( (*(_DWORD *)(a1 + 20) & 0x4000000) != 0 )
      v9 = 0x1FFFFF - ((a3 - 1) & 0x1FFFFF) < a3 >> 2;
    while ( 1 )
    {
      v10 = 0;
      if ( v9 )
      {
        v11 = 0x200000LL;
        v12 = a3 - ((a3 - 1) & 0x1FFFFF) + 0x1FFFFF;
      }
      else
      {
        LOBYTE(v10) = BYTE1(*(_QWORD *)a1) < 2u;
        v11 = 0LL;
        v12 = a3 + (v10 << 12);
      }
      v41 = v12;
      if ( v12 < a3 )
        break;
      v13 = *(_DWORD *)(a1 + 20) & 0x40000000;
      v48 = *(_OWORD *)a1;
      v54 = 0LL;
      v55 = 0LL;
      v56 = 0LL;
      if ( v13 )
      {
        *(_QWORD *)&v54 = a1;
        DWORD2(v54) = 64;
      }
      if ( (int)RtlpHpAllocVA(&v40, (size_t *)&v41, v11, 0x2000, v13 != 0 ? 64 : 4, &v48) < 0 )
      {
        v40 = 0LL;
        break;
      }
      v49 = *(_OWORD *)a1;
      RtlpHpQueryVA(v40, &v49, &v45, &v43);
      *v45 = a1;
      v60 = (a3 + 4095) >> 12;
      v46 = v60 << 12;
      if ( !(unsigned int)RtlpHpSegHeapCheckCommitLimit(v60 << 12, a1) )
        break;
      if ( v9 )
      {
        v14 = 536875008;
        v46 = (v60 << 12) - (((v60 << 12) - 1) & 0x1FFFFF) + 0x1FFFFF;
        v15 = a4;
      }
      else
      {
        v15 = a4;
        v14 = 4096;
        if ( (a4 & 2) != 0 )
          v14 = 1073745920;
      }
      v16 = *(_DWORD *)(a1 + 20) & 0x40000000;
      v50 = *(_OWORD *)a1;
      v57 = 0LL;
      v58 = 0LL;
      v59 = 0LL;
      if ( v16 )
      {
        *(_QWORD *)&v57 = a1;
        DWORD2(v57) = 64;
      }
      if ( (int)RtlpHpAllocVA(&v40, (size_t *)&v46, 0LL, v14, v16 != 0 ? 64 : 4, &v50) >= 0 )
      {
        if ( v9 && (v15 & 2) != 0 )
          memset(v40, 0, a3);
        *(_QWORD *)(v8 + 24) = v40;
        v17 = *(_DWORD *)(v8 + 32) & 0xFFD | (2 * (v10 | (v60 << 11)));
        *(_QWORD *)(v8 + 32) = v17;
        _BitScanForward64(&v18, v41);
        LODWORD(v44) = v18;
        *(_QWORD *)(v8 + 32) = v17 ^ (unsigned __int8)(v17 ^ (4 * v18)) & 0xFC;
        *(_WORD *)(v8 + 24) = ((_WORD)v60 << 12) - a2;
        v19 = RtlpHpLargeLockAcquire(a1, v15);
        v20 = (_RTL_RB_TREE *)(a1 + 72);
        v21 = v19;
        if ( (*(_BYTE *)(a1 + 80) & 1) != 0 )
        {
          if ( v20->Root )
            Root = (unsigned __int64)v20->Root ^ (unsigned __int64)v20;
          else
            Root = 0LL;
        }
        else
        {
          Root = (unsigned __int64)v20->Root;
        }
        v23 = 0;
        if ( Root )
        {
          while ( 1 )
          {
            if ( (unsigned __int64)v40 < (*(_QWORD *)(Root + 24) & 0xFFFFFFFFFFFF0000uLL) )
            {
              v24 = *(_QWORD *)Root;
              if ( (*(_BYTE *)(a1 + 80) & 1) != 0 )
              {
                if ( !v24 )
                  break;
                v24 ^= Root;
              }
              if ( !v24 )
                break;
            }
            else
            {
              v24 = *(_QWORD *)(Root + 8);
              if ( (*(_BYTE *)(a1 + 80) & 1) != 0 )
              {
                if ( !v24 )
                  goto LABEL_33;
                v24 ^= Root;
              }
              if ( !v24 )
              {
LABEL_33:
                v23 = 1;
                break;
              }
            }
            Root = v24;
          }
        }
        RtlRbInsertNodeEx(v20, (PRTL_BALANCED_NODE)Root, v23, (PRTL_BALANCED_NODE)v8);
        if ( (v15 & 1) == 0 )
        {
          v25 = (volatile signed __int64 *)(a1 + 64);
          if ( (*(_DWORD *)a1 & 1) != 0 )
          {
            ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(a1 + 64));
            if ( KiIrqlFlags )
            {
              if ( (KiIrqlFlags & 1) != 0 )
              {
                CurrentIrql = KeGetCurrentIrql();
                if ( CurrentIrql <= 0xFu && (unsigned __int8)v21 <= 0xFu && CurrentIrql >= 2u )
                {
                  CurrentPrcb = KeGetCurrentPrcb();
                  SchedulerAssist = CurrentPrcb->SchedulerAssist;
                  v39 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v21 + 1));
                  v31 = (v39 & SchedulerAssist[5]) == 0;
                  SchedulerAssist[5] &= v39;
                  if ( v31 )
                    KiRemoveSystemWorkPriorityKick(CurrentPrcb);
                }
              }
            }
            __writecr8(v21);
          }
          else
          {
            if ( (_InterlockedExchangeAdd64(v25, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
              ExfTryToWakePushLock((volatile signed __int64 *)(a1 + 64));
            v42 = 0;
            CurrentThread = KeGetCurrentThread();
            if ( (unsigned int)MiGetSystemRegionType(a1 + 64) == 1 )
              SessionId = MmGetSessionIdEx((__int64)CurrentThread->ApcState.Process);
            else
              SessionId = -1;
            --CurrentThread->SpecialApcDisable;
            v29 = ++CurrentThread->AbAllocationRegionCount;
            v30 = ((char)CurrentThread->AbEntrySummary | (char)CurrentThread->AbOrphanedEntrySummary) ^ 0x3F;
            while ( 1 )
            {
              v31 = !_BitScanReverse((unsigned int *)&v32, v30);
              if ( v31 )
                break;
              v33 = (__int64)&CurrentThread->LockEntries[v32];
              v30 &= ~(1 << v32);
              if ( (*(_BYTE *)(v33 + 26) & 1) != 0
                && (*(_DWORD *)(v33 + 32) & 1) == 0
                && (*(_QWORD *)(v33 + 32) & 0x7FFFFFFFFFFFFFFCLL) == ((unsigned __int64)v25 & 0x7FFFFFFFFFFFFFFCLL)
                && *(_DWORD *)(v33 + 40) == SessionId )
              {
                *(_BYTE *)(v33 + 26) &= ~1u;
                if ( *(_QWORD *)(v33 + 32) )
                {
                  if ( v33 )
                  {
                    *(_BYTE *)(v33 + 32) |= 2u;
                    if ( *(__int64 *)(v33 + 32) < 0 )
                      KiAbEntryRemoveFromTree((PRTL_BALANCED_NODE)v33);
                    v42 = *(_DWORD *)(v33 + 88) & 0x1FFFF;
                    *(_DWORD *)(v33 + 88) &= 0xFFFE0000;
                    *(_BYTE *)(v33 + 25) &= ~1u;
                    *(_QWORD *)(v33 + 32) = 0LL;
                    v34 = (signed __int64)(v33 - (unsigned __int64)CurrentThread->LockEntries) / 96;
                    if ( v29 == 1 )
                      CurrentThread->AbEntrySummary |= 1 << v34;
                    else
                      _InterlockedOr8((volatile signed __int8 *)&CurrentThread->AbOrphanedEntrySummary, 1 << v34);
                    goto LABEL_67;
                  }
                  break;
                }
              }
            }
            if ( (*((_DWORD *)&CurrentThread->0 + 1) & 0x10000) == 0 )
              KeBugCheckEx(0x162u, (ULONG_PTR)CurrentThread, a1 + 64, SessionId, 0LL);
LABEL_67:
            --CurrentThread->AbAllocationRegionCount;
            KiAbThreadRemoveBoosts((ULONG_PTR)CurrentThread, a1 + 64, &v42);
            v31 = CurrentThread->SpecialApcDisable++ == -1;
            if ( v31
              && ($C774EFD68449142D8271B1EC1EB7FB26 *)CurrentThread->ApcState.ApcListHead[0].Flink != &CurrentThread->152 )
            {
              KiCheckForKernelApcDelivery(v35);
            }
            KiLeaveGuardedRegionUnsafe((__int64)KeGetCurrentThread());
          }
        }
        _InterlockedExchangeAdd64((volatile signed __int64 *)(a1 + 88), v41 / 4096);
        _InterlockedExchangeAdd64((volatile signed __int64 *)(a1 + 96), v60);
        v5 = v40;
        v8 = 0LL;
        v40 = 0LL;
        break;
      }
      if ( !v9 )
        break;
      v9 = 0;
      v51 = *(_OWORD *)a1;
      RtlpHpFreeVA((unsigned __int64 *)&v40, (unsigned __int64 *)&v41, 0x8000, &v51);
      v40 = 0LL;
    }
    if ( v8 )
    {
      v52 = *(_OWORD *)a1;
      RtlpHpMetadataFree(v8, &v52);
    }
  }
  if ( v40 )
  {
    v53 = *(_OWORD *)a1;
    RtlpHpFreeVA((unsigned __int64 *)&v40, (unsigned __int64 *)&v41, 0x8000, &v53);
  }
  return v5;
}
