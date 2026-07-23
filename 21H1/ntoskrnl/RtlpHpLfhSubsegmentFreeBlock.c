/*
 * XREFs of RtlpHpLfhSubsegmentFreeBlock @ 0x140238750
 * Callers:
 *     ExFreeHeapPool @ 0x14024C790 (ExFreeHeapPool.c)
 *     RtlpHpLfhSlotAllocate @ 0x140250B40 (RtlpHpLfhSlotAllocate.c)
 *     RtlpHpSegFree @ 0x1402AC8EC (RtlpHpSegFree.c)
 * Callees:
 *     RtlpHpLfhSubsegmentDecommitPages @ 0x1402390D0 (RtlpHpLfhSubsegmentDecommitPages.c)
 *     RtlpHpLfhBucketAddSubsegment @ 0x140239674 (RtlpHpLfhBucketAddSubsegment.c)
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
 *     RtlpLogHeapFailure @ 0x14058D990 (RtlpLogHeapFailure.c)
 */

__int64 __fastcall RtlpHpLfhSubsegmentFreeBlock(__int64 a1, __int64 a2, __int64 a3, unsigned int a4)
{
  signed __int64 v4; // r15
  unsigned __int16 v6; // ax
  char v7; // bp
  unsigned int v8; // r12d
  signed __int64 *v9; // rsi
  int v10; // ebx
  unsigned int v11; // edx
  __int64 v12; // rcx
  unsigned int v13; // eax
  char v14; // cl
  unsigned __int64 v15; // r11
  int v16; // edx
  unsigned __int16 v17; // ax
  unsigned int v18; // ecx
  signed __int64 *v19; // r9
  char v20; // cl
  int v21; // r10d
  __int64 v22; // rax
  __int64 v23; // r9
  char *v24; // r8
  char *v25; // rcx
  __int64 v26; // r10
  int v27; // edx
  signed __int16 v28; // ax
  int v29; // r14d
  int v30; // ebp
  unsigned __int8 v31; // r13
  unsigned __int16 v32; // dx
  unsigned int v33; // r13d
  signed __int64 v35; // rbx
  ULONG_PTR v36; // r13
  unsigned __int8 v37; // al
  int v38; // r10d
  char v39; // al
  signed __int64 v40; // r8
  _QWORD *v41; // r9
  signed __int64 v42; // rcx
  _QWORD *v43; // rdx
  signed __int64 *v44; // r8
  signed __int64 **v45; // rax
  signed __int64 **v46; // rax
  __int64 v47; // rbx
  ULONG_PTR v48; // r15
  struct _KTHREAD *v49; // rbp
  ULONG_PTR v50; // r9
  unsigned __int8 v51; // al
  struct _KPRCB *v52; // r10
  _DWORD *v53; // r9
  int v54; // eax
  bool v55; // zf
  unsigned __int64 v56; // rdx
  unsigned __int8 v57; // r14
  unsigned int v58; // edx
  __int64 v59; // rcx
  __int64 v60; // rbx
  unsigned __int8 v61; // al
  __int64 v62; // rdx
  __int64 v63; // rcx
  __int64 v64; // r8
  __int64 v65; // r9
  __int64 v66; // rax
  ULONG_PTR v67; // r15
  struct _KTHREAD *v68; // rbx
  unsigned __int8 v69; // si
  unsigned int v70; // edx
  __int64 v71; // rcx
  __int64 v72; // rdi
  unsigned __int8 v73; // al
  struct _KPRCB *v74; // r10
  int v75; // edx
  _DWORD *v76; // r9
  __int64 v77; // rdx
  __int64 v78; // rdx
  __int64 v79; // rcx
  __int64 v80; // r8
  __int64 v81; // r9
  struct _KTHREAD *CurrentThread; // r15
  unsigned int SessionId; // edx
  unsigned int v84; // r8d
  __int64 v85; // rcx
  int v86; // eax
  __int64 v87; // rcx
  __int64 v88; // rdx
  __int64 v89; // rdx
  __int64 v90; // rcx
  __int64 v91; // r8
  __int64 v92; // r9
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  int v96; // eax
  signed __int64 v97; // rax
  int v98; // [rsp+30h] [rbp-78h]
  unsigned int v99; // [rsp+4Ch] [rbp-5Ch]
  __int64 v100; // [rsp+58h] [rbp-50h]
  unsigned __int8 v102; // [rsp+B8h] [rbp+10h]
  unsigned __int8 AbAllocationRegionCount; // [rsp+C0h] [rbp+18h]

  v102 = -1;
  v4 = 0LL;
  v7 = a4;
  v99 = DWORD2(RtlpHpHeapGlobals) ^ *(_DWORD *)(a2 + 40) ^ ((unsigned int)a2 >> 12);
  v6 = WORD4(RtlpHpHeapGlobals) ^ *(_WORD *)(a2 + 40) ^ ((unsigned int)a2 >> 12);
  v8 = 1;
  v9 = (signed __int64 *)a2;
  if ( !a3 )
    goto LABEL_17;
  v10 = v6;
  v11 = a3 - HIWORD(v99) - a2;
  v12 = *(_QWORD *)(a1 + 8LL * *((unsigned __int8 *)RtlpLfhBucketIndexMap + (((unsigned int)v6 + 15) >> 4)) + 128);
  v13 = *(_DWORD *)(v12 + 72);
  v14 = *(_BYTE *)(v12 + 76);
  if ( v13 )
  {
    v15 = (v11 * (unsigned __int64)v13) >> v14;
    v16 = v11 - v15 * v10;
  }
  else
  {
    LODWORD(v15) = v11 >> v14;
    v16 = ((1 << v14) - 1) & v11;
  }
  if ( v16 )
    return 0;
  v17 = *((_WORD *)v9 + 18);
  v18 = 2 * v15;
  if ( v17 >= (unsigned __int16)v15 )
    v17 = v15;
  *((_WORD *)v9 + 18) = v17;
  v19 = &v9[(unsigned __int64)v18 >> 6];
  _m_prefetchw(v19 + 6);
  if ( (((unsigned __int64)_InterlockedAnd64(v19 + 6, ~(3LL << (v18 & 0x3F))) >> (v18 & 0x3F)) & 1) == 0 )
  {
    RtlpLogHeapFailure(17, *(_QWORD *)a1, a3, (_DWORD)v9, (unsigned int)v15, 0LL);
    return 0;
  }
  if ( *((_BYTE *)v9 + 45) > 1u )
  {
    v20 = *((_BYTE *)v9 + 44);
    v21 = a3 - (_DWORD)v9;
    v22 = (unsigned int)(a3 - (_DWORD)v9) >> v20;
    v23 = 2 * v22;
    v24 = (char *)v9 + 2 * v22 + *((unsigned __int16 *)v9 + 23);
    _m_prefetchw(v24);
    v25 = &v24[2 * (((unsigned int)(v10 + v21 - 1) >> v20) - (unsigned int)v22) + 2];
    LODWORD(v26) = -1;
    v27 = 0;
    if ( v24 < v25 )
    {
      do
      {
        v28 = _InterlockedDecrement16((volatile signed __int16 *)v24);
        if ( v28 )
        {
          if ( v28 == -1 )
            --v27;
        }
        else
        {
          ++v27;
          if ( (_DWORD)v26 == -1 )
            v26 = v23 >> 1;
        }
        v24 += 2;
        v23 += 2LL;
      }
      while ( v24 < v25 );
      if ( v27 )
      {
        v56 = (v27 << *((_BYTE *)v9 + 44)) / 4096;
        if ( (RtlpHpLfhPerfFlags & 0x20) != 0 )
          _InterlockedExchangeAdd64((volatile signed __int64 *)(*(__int16 *)(a1 + 58) + a1 + 24), v56);
      }
      if ( (_DWORD)v26 != -1 )
        RtlpHpLfhSubsegmentDecommitPages(a1, (_DWORD)v9, v26, 2, v7);
    }
  }
LABEL_17:
  v29 = *((unsigned __int16 *)v9 + 17);
  LOWORD(v30) = *((_WORD *)v9 + 16);
  v31 = -1;
  do
  {
    if ( !v4 && (!(_WORD)v30 || (unsigned __int16)v30 == v29 - 1) )
    {
      v35 = v9[2];
      v98 = *(unsigned __int8 *)(a1 + 57);
      do
      {
        while ( 1 )
        {
          while ( !v35 )
          {
            v35 = _InterlockedCompareExchange64(v9 + 2, 3LL, 0LL);
            if ( !v35 )
            {
              v4 = 0LL;
              goto LABEL_24;
            }
          }
          if ( (v35 & 1) != 0 )
            break;
          v36 = v35 + 16;
          v4 = v35;
          v37 = RtlpHpAcquireLockExclusive(v35 + 16);
          v35 = v9[2];
          v102 = v37;
          if ( v4 == v35 )
          {
            v31 = v37;
            goto LABEL_33;
          }
          if ( v98 )
          {
            ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)v36);
            if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && (CurrentIrql = KeGetCurrentIrql(), CurrentIrql <= 0xFu) )
            {
              v31 = v102;
              if ( v102 <= 0xFu && CurrentIrql >= 2u )
              {
                CurrentPrcb = KeGetCurrentPrcb();
                SchedulerAssist = CurrentPrcb->SchedulerAssist;
                v96 = ~(unsigned __int16)(-1LL << (v102 + 1));
                v55 = (v96 & SchedulerAssist[5]) == 0;
                SchedulerAssist[5] &= v96;
                if ( v55 )
                  KiRemoveSystemWorkPriorityKick(CurrentPrcb);
              }
            }
            else
            {
              v31 = v102;
            }
            __writecr8(v31);
          }
          else
          {
            if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)v36, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
              ExfTryToWakePushLock(v36);
            CurrentThread = KeGetCurrentThread();
            if ( (unsigned int)MiGetSystemRegionType(v36) == 1 )
              SessionId = MmGetSessionIdEx(CurrentThread->ApcState.Process);
            else
              SessionId = -1;
            --CurrentThread->SpecialApcDisable;
            ++CurrentThread->AbAllocationRegionCount;
            v84 = ((char)CurrentThread->AbEntrySummary | (char)CurrentThread->AbOrphanedEntrySummary) ^ 0x3F;
            AbAllocationRegionCount = CurrentThread->AbAllocationRegionCount;
            v55 = !_BitScanReverse((unsigned int *)&v85, v84);
            if ( v55 )
              goto LABEL_160;
            while ( 1 )
            {
              v86 = ~(1 << v85);
              v87 = (__int64)&CurrentThread->LockEntries[v85];
              v84 &= v86;
              v100 = v87;
              if ( (*(_BYTE *)(v87 + 26) & 1) != 0
                && (*(_DWORD *)(v87 + 32) & 1) == 0
                && (*(_QWORD *)(v87 + 32) & 0x7FFFFFFFFFFFFFFCLL) == (v36 & 0x7FFFFFFFFFFFFFFCLL)
                && *(_DWORD *)(v87 + 40) == SessionId )
              {
                *(_BYTE *)(v87 + 26) &= ~1u;
                if ( *(_QWORD *)(v87 + 32) )
                  break;
              }
              v55 = !_BitScanReverse((unsigned int *)&v85, v84);
              if ( v55 )
                goto LABEL_160;
            }
            if ( !v87 )
            {
LABEL_160:
              if ( (*((_DWORD *)&CurrentThread->0 + 1) & 0x10000) == 0 )
                KeBugCheckEx(0x162u, (ULONG_PTR)CurrentThread, v36, SessionId, 0LL);
            }
            else
            {
              *(_BYTE *)(v87 + 32) |= 2u;
              if ( *(__int64 *)(v87 + 32) < 0 )
              {
                KiAbEntryRemoveFromTree((PRTL_BALANCED_NODE)v87);
                v87 = v100;
              }
              *(_DWORD *)(v87 + 88) &= 0xFFFE0000;
              *(_BYTE *)(v87 + 25) &= ~1u;
              *(_QWORD *)(v87 + 32) = 0LL;
              v88 = (signed __int64)(v87 - (unsigned __int64)CurrentThread->LockEntries) / 96;
              if ( AbAllocationRegionCount == 1 )
                CurrentThread->AbEntrySummary |= 1 << v88;
              else
                _InterlockedOr8((volatile signed __int8 *)&CurrentThread->AbOrphanedEntrySummary, 1 << v88);
            }
            --CurrentThread->AbAllocationRegionCount;
            KiAbThreadRemoveBoosts((ULONG_PTR)CurrentThread);
            v55 = CurrentThread->SpecialApcDisable++ == -1;
            if ( v55
              && ($C774EFD68449142D8271B1EC1EB7FB26 *)CurrentThread->ApcState.ApcListHead[0].Flink != &CurrentThread->152 )
            {
              KiCheckForKernelApcDelivery(v90, v89, v91, v92);
            }
            KiLeaveGuardedRegionUnsafe(KeGetCurrentThread());
            v31 = v102;
          }
        }
        v97 = _InterlockedCompareExchange64(v9 + 2, v35 & 1 | (v35 + 2) & 0xFFFFFFFFFFFFFFFEuLL, v35);
        v55 = v35 == v97;
        v35 = v97;
      }
      while ( !v55 );
      v4 = 0LL;
LABEL_33:
      if ( !v4 )
      {
LABEL_24:
        v33 = -1;
        goto LABEL_25;
      }
    }
    v32 = v30 + 1;
    v30 = (unsigned __int16)_InterlockedCompareExchange16((volatile signed __int16 *)v9 + 16, v30 + 1, v30);
  }
  while ( v32 != v30 + 1 );
  if ( (_WORD)v30 )
  {
    if ( v30 != v29 - 1 )
      goto LABEL_24;
    v38 = 2;
  }
  else
  {
    v38 = 0;
  }
  v39 = *((_BYTE *)v9 + 38);
  switch ( v39 )
  {
    case 1:
      v40 = v4 + 40;
      goto LABEL_38;
    case 0:
      v40 = v4 + 24;
      v41 = (_QWORD *)(v4 + 8);
      goto LABEL_39;
    case 2:
      v40 = 0LL;
LABEL_38:
      v41 = 0LL;
LABEL_39:
      if ( v38 )
      {
        v42 = 0LL;
        v43 = 0LL;
      }
      else
      {
        v42 = v4 + 24;
        v43 = (_QWORD *)(v4 + 8);
      }
      if ( v40 )
      {
        v44 = (signed __int64 *)*v9;
        v45 = (signed __int64 **)v9[1];
        if ( *(signed __int64 **)(*v9 + 8) == v9 && *v45 == v9 )
        {
          *v45 = v44;
          v44[1] = (signed __int64)v45;
          if ( v41 )
            --*v41;
          goto LABEL_46;
        }
LABEL_177:
        __fastfail(3u);
      }
LABEL_46:
      *((_BYTE *)v9 + 38) = v38;
      if ( v42 )
      {
        v46 = *(signed __int64 ***)(v42 + 8);
        if ( *v46 != (signed __int64 *)v42 )
          goto LABEL_177;
        *v9 = v42;
        v9[1] = (signed __int64)v46;
        *v46 = v9;
        *(_QWORD *)(v42 + 8) = v9;
        if ( v43 )
          ++*v43;
        v9 = 0LL;
      }
      if ( (*(_BYTE *)v4 & 1) == 0 && *(_QWORD *)(v4 + 8) > 8uLL )
      {
        v9 = *(signed __int64 **)v42;
        v66 = **(_QWORD **)v42;
        if ( *(_QWORD *)(*(_QWORD *)v42 + 8LL) != v42 || *(signed __int64 **)(v66 + 8) != v9 )
          goto LABEL_177;
        *(_QWORD *)v42 = v66;
        *(_QWORD *)(v66 + 8) = v42;
        --*v43;
        *((_BYTE *)v9 + 38) = 2;
      }
      if ( v9 && *((_BYTE *)v9 + 38) == 2 )
        v9[2] = 0LL;
      break;
  }
  v47 = a1;
  v48 = v4 + 16;
  if ( *(_BYTE *)(a1 + 57) )
  {
    ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)v48);
    if ( KiIrqlFlags )
    {
      if ( (KiIrqlFlags & 1) != 0 )
      {
        v51 = KeGetCurrentIrql();
        if ( v51 <= 0xFu && v31 <= 0xFu && v51 >= 2u )
        {
          v52 = KeGetCurrentPrcb();
          v53 = v52->SchedulerAssist;
          v54 = ~(unsigned __int16)(-1LL << (v31 + 1));
          v55 = (v54 & v53[5]) == 0;
          v53[5] &= v54;
          if ( v55 )
            KiRemoveSystemWorkPriorityKick(v52);
        }
      }
    }
    __writecr8(v31);
    v33 = -1;
  }
  else
  {
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)v48, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock(v48);
    v49 = KeGetCurrentThread();
    if ( (unsigned int)MiGetSystemRegionType(v48) == 1 )
    {
      v50 = (unsigned int)MmGetSessionIdEx(v49->ApcState.Process);
      v33 = -1;
    }
    else
    {
      v33 = -1;
      v50 = 0xFFFFFFFFLL;
    }
    --v49->SpecialApcDisable;
    v57 = ++v49->AbAllocationRegionCount;
    v58 = ((char)v49->AbEntrySummary | (char)v49->AbOrphanedEntrySummary) ^ 0x3F;
    v55 = !_BitScanReverse((unsigned int *)&v59, v58);
    if ( v55 )
      goto LABEL_77;
    while ( 1 )
    {
      v60 = (__int64)&v49->LockEntries[v59];
      v58 &= ~(1 << v59);
      if ( (*(_BYTE *)(v60 + 26) & 1) != 0
        && (*(_DWORD *)(v60 + 32) & 1) == 0
        && (*(_QWORD *)(v60 + 32) & 0x7FFFFFFFFFFFFFFCLL) == (v48 & 0x7FFFFFFFFFFFFFFCLL)
        && *(_DWORD *)(v60 + 40) == (_DWORD)v50 )
      {
        *(_BYTE *)(v60 + 26) &= ~1u;
        if ( *(_QWORD *)(v60 + 32) )
          break;
      }
      v55 = !_BitScanReverse((unsigned int *)&v59, v58);
      if ( v55 )
        goto LABEL_77;
    }
    if ( !v60 )
    {
LABEL_77:
      if ( (*((_DWORD *)&v49->0 + 1) & 0x10000) == 0 )
        KeBugCheckEx(0x162u, (ULONG_PTR)v49, v48, v50, 0LL);
    }
    else
    {
      *(_BYTE *)(v60 + 32) |= 2u;
      if ( *(__int64 *)(v60 + 32) < 0 )
        KiAbEntryRemoveFromTree((PRTL_BALANCED_NODE)v60);
      *(_DWORD *)(v60 + 88) &= 0xFFFE0000;
      *(_BYTE *)(v60 + 25) &= ~1u;
      *(_QWORD *)(v60 + 32) = 0LL;
      v61 = 1 << ((signed __int64)(v60 - (unsigned __int64)v49->LockEntries) / 96);
      if ( v57 == 1 )
        v49->AbEntrySummary |= v61;
      else
        _InterlockedOr8((volatile signed __int8 *)&v49->AbOrphanedEntrySummary, v61);
    }
    --v49->AbAllocationRegionCount;
    KiAbThreadRemoveBoosts((ULONG_PTR)v49);
    v55 = v49->SpecialApcDisable++ == -1;
    if ( v55 && ($C774EFD68449142D8271B1EC1EB7FB26 *)v49->ApcState.ApcListHead[0].Flink != &v49->152 )
      KiCheckForKernelApcDelivery(v63, v62, v64, v65);
    KiLeaveGuardedRegionUnsafe(KeGetCurrentThread());
    v47 = a1;
  }
  v4 = 0LL;
  if ( v9 )
    RtlpHpLfhBucketAddSubsegment(
      v47,
      *(_QWORD *)(v47
                + 8LL * *((unsigned __int8 *)RtlpLfhBucketIndexMap + (((unsigned int)(unsigned __int16)v99 + 15) >> 4))
                + 128),
      v9,
      a4);
LABEL_25:
  if ( v4 )
  {
    v67 = v4 + 16;
    if ( *(_BYTE *)(a1 + 57) )
    {
      ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)v67);
      if ( KiIrqlFlags )
      {
        if ( (KiIrqlFlags & 1) != 0 )
        {
          v73 = KeGetCurrentIrql();
          if ( v73 <= 0xFu && v102 <= 0xFu && v73 >= 2u )
          {
            v74 = KeGetCurrentPrcb();
            v75 = ~(unsigned __int16)(-1LL << (v102 + 1));
            v76 = v74->SchedulerAssist;
            v55 = (v75 & v76[5]) == 0;
            v76[5] &= v75;
            if ( v55 )
              KiRemoveSystemWorkPriorityKick(v74);
          }
        }
      }
      __writecr8(v102);
    }
    else
    {
      if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)v67, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
        ExfTryToWakePushLock(v67);
      v68 = KeGetCurrentThread();
      if ( (unsigned int)MiGetSystemRegionType(v67) == 1 )
        v33 = MmGetSessionIdEx(v68->ApcState.Process);
      --v68->SpecialApcDisable;
      v69 = ++v68->AbAllocationRegionCount;
      v70 = ((char)v68->AbEntrySummary | (char)v68->AbOrphanedEntrySummary) ^ 0x3F;
      v55 = !_BitScanReverse((unsigned int *)&v71, v70);
      if ( v55 )
        goto LABEL_112;
      while ( 1 )
      {
        v72 = (__int64)&v68->LockEntries[v71];
        v70 &= ~(1 << v71);
        if ( (*(_BYTE *)(v72 + 26) & 1) != 0
          && (*(_DWORD *)(v72 + 32) & 1) == 0
          && (*(_QWORD *)(v72 + 32) & 0x7FFFFFFFFFFFFFFCLL) == (v67 & 0x7FFFFFFFFFFFFFFCLL)
          && *(_DWORD *)(v72 + 40) == v33 )
        {
          *(_BYTE *)(v72 + 26) &= ~1u;
          if ( *(_QWORD *)(v72 + 32) )
            break;
        }
        v55 = !_BitScanReverse((unsigned int *)&v71, v70);
        if ( v55 )
          goto LABEL_112;
      }
      if ( !v72 )
      {
LABEL_112:
        if ( (*((_DWORD *)&v68->0 + 1) & 0x10000) == 0 )
          KeBugCheckEx(0x162u, (ULONG_PTR)v68, v67, v33, 0LL);
      }
      else
      {
        *(_BYTE *)(v72 + 32) |= 2u;
        if ( *(__int64 *)(v72 + 32) < 0 )
          KiAbEntryRemoveFromTree((PRTL_BALANCED_NODE)v72);
        *(_DWORD *)(v72 + 88) &= 0xFFFE0000;
        *(_BYTE *)(v72 + 25) &= ~1u;
        *(_QWORD *)(v72 + 32) = 0LL;
        v77 = (signed __int64)(v72 - (unsigned __int64)v68->LockEntries) / 96;
        if ( v69 == 1 )
          v68->AbEntrySummary |= 1 << v77;
        else
          _InterlockedOr8((volatile signed __int8 *)&v68->AbOrphanedEntrySummary, 1 << v77);
      }
      --v68->AbAllocationRegionCount;
      KiAbThreadRemoveBoosts((ULONG_PTR)v68);
      v55 = v68->SpecialApcDisable++ == -1;
      if ( v55 && ($C774EFD68449142D8271B1EC1EB7FB26 *)v68->ApcState.ApcListHead[0].Flink != &v68->152 )
        KiCheckForKernelApcDelivery(v79, v78, v80, v81);
      KiLeaveGuardedRegionUnsafe(KeGetCurrentThread());
    }
  }
  return v8;
}
