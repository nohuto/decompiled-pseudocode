/*
 * XREFs of RtlpHpLargeAlloc @ 0x14035F3BC
 * Callers:
 *     ExAllocateHeapPool @ 0x14024FF10 (ExAllocateHeapPool.c)
 *     RtlpHpAllocateHeapInternal @ 0x14035FCB8 (RtlpHpAllocateHeapInternal.c)
 * Callees:
 *     RtlRbInsertNodeEx @ 0x14024F7F0 (RtlRbInsertNodeEx.c)
 *     MiGetSystemRegionType @ 0x1402609A0 (MiGetSystemRegionType.c)
 *     KiAbThreadRemoveBoosts @ 0x140260D50 (KiAbThreadRemoveBoosts.c)
 *     KiLeaveGuardedRegionUnsafe @ 0x140260DE0 (KiLeaveGuardedRegionUnsafe.c)
 *     MmGetSessionIdEx @ 0x140260EB0 (MmGetSessionIdEx.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x14026B750 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     RtlpHpFreeVA @ 0x1402AB58C (RtlpHpFreeVA.c)
 *     RtlpHpSegHeapCheckCommitLimit @ 0x1402B0FAC (RtlpHpSegHeapCheckCommitLimit.c)
 *     RtlpHpAllocVA @ 0x1402B11F0 (RtlpHpAllocVA.c)
 *     KiAbEntryRemoveFromTree @ 0x1403410E0 (KiAbEntryRemoveFromTree.c)
 *     KiCheckForKernelApcDelivery @ 0x1403599E0 (KiCheckForKernelApcDelivery.c)
 *     ExfTryToWakePushLock @ 0x14035A680 (ExfTryToWakePushLock.c)
 *     RtlpHpMetadataFree @ 0x14035F37C (RtlpHpMetadataFree.c)
 *     RtlpHpLargeLockAcquire @ 0x14035F990 (RtlpHpLargeLockAcquire.c)
 *     RtlpHpQueryVA @ 0x14035F9BC (RtlpHpQueryVA.c)
 *     RtlpHpMetadataAlloc @ 0x14035FA30 (RtlpHpMetadataAlloc.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403EC9E4 (KiRemoveSystemWorkPriorityKick.c)
 *     KeBugCheckEx @ 0x1403F5E40 (KeBugCheckEx.c)
 *     memset @ 0x140408F80 (memset.c)
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
  __int64 v35; // rdx
  __int64 v36; // rcx
  __int64 v37; // r8
  _DWORD *v38; // r9
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r9
  _DWORD *SchedulerAssist; // r8
  int v42; // eax
  void *v43; // [rsp+38h] [rbp-D0h] BYREF
  signed __int64 v44; // [rsp+40h] [rbp-C8h] BYREF
  int v45; // [rsp+48h] [rbp-C0h] BYREF
  int v46; // [rsp+4Ch] [rbp-BCh] BYREF
  __int64 v47; // [rsp+50h] [rbp-B8h]
  __int64 *v48; // [rsp+58h] [rbp-B0h] BYREF
  __int64 v49; // [rsp+60h] [rbp-A8h] BYREF
  __int128 v50; // [rsp+68h] [rbp-A0h] BYREF
  __int128 v51; // [rsp+78h] [rbp-90h] BYREF
  __int128 v52; // [rsp+88h] [rbp-80h] BYREF
  __int128 v53; // [rsp+98h] [rbp-70h] BYREF
  __int128 v54; // [rsp+A8h] [rbp-60h] BYREF
  __int128 v55; // [rsp+B8h] [rbp-50h] BYREF
  __int128 v56; // [rsp+C8h] [rbp-40h] BYREF
  __int128 v57; // [rsp+D8h] [rbp-30h]
  __int128 v58; // [rsp+E8h] [rbp-20h]
  __int128 v59; // [rsp+F8h] [rbp-10h]
  __int128 v60; // [rsp+108h] [rbp+0h]
  __int128 v61; // [rsp+118h] [rbp+10h]
  __int128 v62; // [rsp+128h] [rbp+20h]
  unsigned __int64 v63; // [rsp+178h] [rbp+70h]

  v4 = *(_OWORD *)a1;
  v44 = 0LL;
  LODWORD(v47) = 0;
  v5 = 0LL;
  v48 = 0LL;
  v46 = 0;
  v43 = 0LL;
  v50 = v4;
  v8 = RtlpHpMetadataAlloc(40LL, 40LL, 0LL, &v50);
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
      v44 = v12;
      if ( v12 < a3 )
        break;
      v13 = *(_DWORD *)(a1 + 20) & 0x40000000;
      v51 = *(_OWORD *)a1;
      v57 = 0LL;
      v58 = 0LL;
      v59 = 0LL;
      if ( v13 )
      {
        *(_QWORD *)&v57 = a1;
        DWORD2(v57) = 64;
      }
      if ( (int)RtlpHpAllocVA(&v43, (size_t *)&v44, v11, 0x2000, v13 != 0 ? 64 : 4, &v51) < 0 )
      {
        v43 = 0LL;
        break;
      }
      v52 = *(_OWORD *)a1;
      RtlpHpQueryVA(v43, &v52, &v48, &v46);
      *v48 = a1;
      v63 = (a3 + 4095) >> 12;
      v49 = v63 << 12;
      if ( !(unsigned int)RtlpHpSegHeapCheckCommitLimit(v63 << 12, a1) )
        break;
      if ( v9 )
      {
        v14 = 536875008;
        v49 = (v63 << 12) - (((v63 << 12) - 1) & 0x1FFFFF) + 0x1FFFFF;
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
      v53 = *(_OWORD *)a1;
      v60 = 0LL;
      v61 = 0LL;
      v62 = 0LL;
      if ( v16 )
      {
        *(_QWORD *)&v60 = a1;
        DWORD2(v60) = 64;
      }
      if ( (int)RtlpHpAllocVA(&v43, (size_t *)&v49, 0LL, v14, v16 != 0 ? 64 : 4, &v53) >= 0 )
      {
        if ( v9 && (v15 & 2) != 0 )
          memset(v43, 0, a3);
        *(_QWORD *)(v8 + 24) = v43;
        v17 = *(_DWORD *)(v8 + 32) & 0xFFD | (2 * (v10 | (v63 << 11)));
        *(_QWORD *)(v8 + 32) = v17;
        _BitScanForward64(&v18, v44);
        LODWORD(v47) = v18;
        *(_QWORD *)(v8 + 32) = v17 ^ (unsigned __int8)(v17 ^ (4 * v18)) & 0xFC;
        *(_WORD *)(v8 + 24) = ((_WORD)v63 << 12) - a2;
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
            if ( (unsigned __int64)v43 < (*(_QWORD *)(Root + 24) & 0xFFFFFFFFFFFF0000uLL) )
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
                  v42 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v21 + 1));
                  v31 = (v42 & SchedulerAssist[5]) == 0;
                  SchedulerAssist[5] &= v42;
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
              ExfTryToWakePushLock(a1 + 64);
            v45 = 0;
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
                    v45 = *(_DWORD *)(v33 + 88) & 0x1FFFF;
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
            KiAbThreadRemoveBoosts((ULONG_PTR)CurrentThread, a1 + 64, &v45);
            v31 = CurrentThread->SpecialApcDisable++ == -1;
            if ( v31
              && ($C774EFD68449142D8271B1EC1EB7FB26 *)CurrentThread->ApcState.ApcListHead[0].Flink != &CurrentThread->152 )
            {
              KiCheckForKernelApcDelivery(v36, v35, v37, v38);
            }
            KiLeaveGuardedRegionUnsafe((__int64)KeGetCurrentThread(), v35, v37, (__int64)v38);
          }
        }
        _InterlockedExchangeAdd64((volatile signed __int64 *)(a1 + 88), v44 / 4096);
        _InterlockedExchangeAdd64((volatile signed __int64 *)(a1 + 96), v63);
        v5 = v43;
        v8 = 0LL;
        v43 = 0LL;
        break;
      }
      if ( !v9 )
        break;
      v9 = 0;
      v54 = *(_OWORD *)a1;
      RtlpHpFreeVA((unsigned __int64 *)&v43, (unsigned __int64 *)&v44, 0x8000, &v54);
      v43 = 0LL;
    }
    if ( v8 )
    {
      v55 = *(_OWORD *)a1;
      RtlpHpMetadataFree(v8, &v55);
    }
  }
  if ( v43 )
  {
    v56 = *(_OWORD *)a1;
    RtlpHpFreeVA((unsigned __int64 *)&v43, (unsigned __int64 *)&v44, 0x8000, &v56);
  }
  return v5;
}
