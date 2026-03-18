/*
 * XREFs of RtlpHpLfhSubsegmentFreeBlock @ 0x1402D1660
 * Callers:
 *     RtlpHpLfhSlotAllocate @ 0x140212CB0 (RtlpHpLfhSlotAllocate.c)
 *     ExFreeHeapPool @ 0x1402176E0 (ExFreeHeapPool.c)
 *     RtlpHpSegFree @ 0x140237FF4 (RtlpHpSegFree.c)
 * Callees:
 *     MiGetSystemRegionType @ 0x140220A00 (MiGetSystemRegionType.c)
 *     KiAbThreadRemoveBoosts @ 0x140220DB0 (KiAbThreadRemoveBoosts.c)
 *     KiLeaveGuardedRegionUnsafe @ 0x140220E40 (KiLeaveGuardedRegionUnsafe.c)
 *     MmGetSessionIdEx @ 0x140220F10 (MmGetSessionIdEx.c)
 *     ExfTryToWakePushLock @ 0x140242B40 (ExfTryToWakePushLock.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x14027E490 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     RtlpHpLfhSubsegmentDecommitPages @ 0x1402D1FE0 (RtlpHpLfhSubsegmentDecommitPages.c)
 *     RtlpHpAcquireLockExclusive @ 0x1402D4324 (RtlpHpAcquireLockExclusive.c)
 *     KiCheckForKernelApcDelivery @ 0x1402DDA40 (KiCheckForKernelApcDelivery.c)
 *     KiAbEntryRemoveFromTree @ 0x1402F05E0 (KiAbEntryRemoveFromTree.c)
 *     RtlpHpLfhBucketAddSubsegment @ 0x140310A68 (RtlpHpLfhBucketAddSubsegment.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403F1DD4 (KiRemoveSystemWorkPriorityKick.c)
 *     KeBugCheckEx @ 0x1403FBCA0 (KeBugCheckEx.c)
 *     RtlpLogHeapFailure @ 0x140591B24 (RtlpLogHeapFailure.c)
 */

__int64 __fastcall RtlpHpLfhSubsegmentFreeBlock(__int64 a1, __int64 a2, __int64 a3, unsigned int a4)
{
  signed __int64 v4; // r15
  char v6; // bp
  unsigned int v7; // r12d
  signed __int64 *v8; // rsi
  int v9; // ebx
  unsigned int v10; // edx
  __int64 v11; // rcx
  unsigned int v12; // eax
  char v13; // cl
  unsigned __int64 v14; // r11
  int v15; // edx
  unsigned __int16 v16; // ax
  unsigned int v17; // ecx
  signed __int64 *v18; // r9
  char v19; // cl
  int v20; // r10d
  __int64 v21; // rax
  __int64 v22; // r9
  char *v23; // r8
  char *v24; // rcx
  __int64 v25; // r10
  int v26; // edx
  signed __int16 v27; // ax
  int v28; // r14d
  int v29; // ebp
  unsigned __int8 v30; // r13
  unsigned __int16 v31; // dx
  unsigned int v32; // r13d
  signed __int64 v34; // rbx
  unsigned int v35; // ecx
  unsigned __int64 v36; // r13
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
  unsigned __int64 v48; // r15
  struct _KTHREAD *v49; // rbp
  ULONG_PTR v50; // r9
  unsigned __int8 v51; // al
  struct _KPRCB *v52; // r10
  _DWORD *v53; // r9
  int v54; // eax
  bool v55; // zf
  unsigned __int64 v56; // rdx
  unsigned __int8 v57; // r14
  __int64 v58; // rdx
  __int64 v59; // r8
  __int64 v60; // rcx
  __int64 v61; // rbx
  unsigned __int8 v62; // al
  __int64 v63; // rdx
  __int64 v64; // rcx
  __int64 v65; // r8
  __int64 v66; // r9
  __int64 v67; // rax
  unsigned __int64 v68; // r15
  struct _KTHREAD *v69; // rbx
  unsigned __int8 v70; // si
  __int64 v71; // rdx
  __int64 v72; // r8
  __int64 v73; // rcx
  __int64 v74; // rdi
  unsigned __int8 v75; // al
  struct _KPRCB *v76; // r10
  int v77; // edx
  _DWORD *v78; // r9
  __int64 v79; // rdx
  __int64 v80; // rdx
  __int64 v81; // rcx
  __int64 v82; // r8
  __int64 v83; // r9
  struct _KTHREAD *CurrentThread; // r15
  __int64 SessionId; // rdx
  __int64 v86; // r8
  __int64 v87; // rcx
  int v88; // eax
  __int64 v89; // rcx
  __int64 v90; // rdx
  __int64 v91; // rdx
  __int64 v92; // rcx
  __int64 v93; // r8
  __int64 v94; // r9
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  int v98; // eax
  signed __int64 v99; // rax
  unsigned int i; // [rsp+30h] [rbp-78h]
  int v101; // [rsp+34h] [rbp-74h] BYREF
  int v102; // [rsp+38h] [rbp-70h]
  int v103; // [rsp+3Ch] [rbp-6Ch]
  int v104; // [rsp+40h] [rbp-68h] BYREF
  int v105; // [rsp+44h] [rbp-64h]
  int v106; // [rsp+48h] [rbp-60h] BYREF
  unsigned int v107; // [rsp+4Ch] [rbp-5Ch]
  int v108; // [rsp+50h] [rbp-58h]
  __int64 v109; // [rsp+58h] [rbp-50h]
  unsigned __int8 v111; // [rsp+B8h] [rbp+10h]
  unsigned __int8 AbAllocationRegionCount; // [rsp+C0h] [rbp+18h]

  v111 = -1;
  v4 = 0LL;
  v6 = a4;
  v107 = DWORD2(RtlpHpHeapGlobals) ^ *(_DWORD *)(a2 + 40) ^ ((unsigned int)a2 >> 12);
  v7 = 1;
  v8 = (signed __int64 *)a2;
  if ( !a3 )
    goto LABEL_17;
  v9 = (unsigned __int16)v107;
  v108 = 0;
  v10 = a3 - HIWORD(v107) - a2;
  v11 = *(_QWORD *)(a1
                  + 8LL
                  * *((unsigned __int8 *)RtlpLfhBucketIndexMap + (((unsigned int)(unsigned __int16)v107 + 15) >> 4))
                  + 128);
  v12 = *(_DWORD *)(v11 + 72);
  v13 = *(_BYTE *)(v11 + 76);
  if ( v12 )
  {
    v14 = (v10 * (unsigned __int64)v12) >> v13;
    v15 = v10 - v14 * (unsigned __int16)v107;
  }
  else
  {
    LODWORD(v14) = v10 >> v13;
    v15 = ((1 << v13) - 1) & v10;
  }
  if ( v15 )
    return 0;
  v16 = *((_WORD *)v8 + 18);
  v17 = 2 * v14;
  if ( v16 >= (unsigned __int16)v14 )
    v16 = v14;
  *((_WORD *)v8 + 18) = v16;
  v18 = &v8[(unsigned __int64)v17 >> 6];
  _m_prefetchw(v18 + 6);
  if ( (((unsigned __int64)_InterlockedAnd64(v18 + 6, ~(3LL << (v17 & 0x3F))) >> (v17 & 0x3F)) & 1) == 0 )
  {
    RtlpLogHeapFailure(17, *(_QWORD *)a1, a3, (_DWORD)v8, (unsigned int)v14, 0LL);
    return 0;
  }
  if ( *((_BYTE *)v8 + 45) > 1u )
  {
    v19 = *((_BYTE *)v8 + 44);
    v20 = a3 - (_DWORD)v8;
    v21 = (unsigned int)(a3 - (_DWORD)v8) >> v19;
    v22 = 2 * v21;
    v23 = (char *)v8 + 2 * v21 + *((unsigned __int16 *)v8 + 23);
    _m_prefetchw(v23);
    v24 = &v23[2 * (((unsigned int)(v9 + v20 - 1) >> v19) - (unsigned int)v21) + 2];
    LODWORD(v25) = -1;
    v26 = 0;
    if ( v23 < v24 )
    {
      do
      {
        v27 = _InterlockedDecrement16((volatile signed __int16 *)v23);
        if ( v27 )
        {
          if ( v27 == -1 )
            --v26;
        }
        else
        {
          ++v26;
          if ( (_DWORD)v25 == -1 )
            v25 = v22 >> 1;
        }
        v23 += 2;
        v22 += 2LL;
      }
      while ( v23 < v24 );
      if ( v26 )
      {
        v56 = (v26 << *((_BYTE *)v8 + 44)) / 4096;
        if ( (RtlpHpLfhPerfFlags & 0x20) != 0 )
          _InterlockedExchangeAdd64((volatile signed __int64 *)(*(__int16 *)(a1 + 58) + a1 + 24), v56);
      }
      if ( (_DWORD)v25 != -1 )
        RtlpHpLfhSubsegmentDecommitPages(a1, (_DWORD)v8, v25, 2, v6);
    }
  }
LABEL_17:
  v28 = *((unsigned __int16 *)v8 + 17);
  LOWORD(v29) = *((_WORD *)v8 + 16);
  v30 = -1;
  do
  {
    if ( !v4 && (!(_WORD)v29 || (unsigned __int16)v29 == v28 - 1) )
    {
      v34 = v8[2];
      v35 = *(unsigned __int8 *)(a1 + 57);
      for ( i = v35; ; v35 = i )
      {
        while ( 1 )
        {
          while ( !v34 )
          {
            v34 = _InterlockedCompareExchange64(v8 + 2, 3LL, 0LL);
            if ( !v34 )
            {
              v4 = 0LL;
              goto LABEL_24;
            }
          }
          if ( (v34 & 1) != 0 )
            break;
          v36 = v34 + 16;
          v4 = v34;
          v37 = RtlpHpAcquireLockExclusive(v34 + 16, v35);
          v34 = v8[2];
          v111 = v37;
          if ( v4 == v34 )
          {
            v30 = v37;
            goto LABEL_33;
          }
          if ( i )
          {
            ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)v36);
            if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && (CurrentIrql = KeGetCurrentIrql(), CurrentIrql <= 0xFu) )
            {
              v30 = v111;
              if ( v111 <= 0xFu && CurrentIrql >= 2u )
              {
                CurrentPrcb = KeGetCurrentPrcb();
                SchedulerAssist = CurrentPrcb->SchedulerAssist;
                v98 = ~(unsigned __int16)(-1LL << (v111 + 1));
                v55 = (v98 & SchedulerAssist[5]) == 0;
                SchedulerAssist[5] &= v98;
                if ( v55 )
                  KiRemoveSystemWorkPriorityKick(CurrentPrcb);
              }
            }
            else
            {
              v30 = v111;
            }
            __writecr8(v30);
            v35 = i;
          }
          else
          {
            if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)v36, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
              ExfTryToWakePushLock((volatile signed __int64 *)v36);
            v101 = 0;
            CurrentThread = KeGetCurrentThread();
            if ( (unsigned int)MiGetSystemRegionType(v36) == 1 )
              SessionId = (unsigned int)MmGetSessionIdEx((__int64)CurrentThread->ApcState.Process);
            else
              SessionId = 0xFFFFFFFFLL;
            --CurrentThread->SpecialApcDisable;
            ++CurrentThread->AbAllocationRegionCount;
            LODWORD(v86) = ((char)CurrentThread->AbEntrySummary | (char)CurrentThread->AbOrphanedEntrySummary) ^ 0x3F;
            AbAllocationRegionCount = CurrentThread->AbAllocationRegionCount;
            v55 = !_BitScanReverse((unsigned int *)&v87, v86);
            v102 = v87;
            if ( v55 )
              goto LABEL_160;
            while ( 1 )
            {
              v88 = ~(1 << v87);
              v89 = (__int64)&CurrentThread->LockEntries[v87];
              v86 = v88 & (unsigned int)v86;
              v109 = v89;
              if ( (*(_BYTE *)(v89 + 26) & 1) != 0
                && (*(_DWORD *)(v89 + 32) & 1) == 0
                && (*(_QWORD *)(v89 + 32) & 0x7FFFFFFFFFFFFFFCLL) == (v36 & 0x7FFFFFFFFFFFFFFCLL)
                && *(_DWORD *)(v89 + 40) == (_DWORD)SessionId )
              {
                *(_BYTE *)(v89 + 26) &= ~1u;
                if ( *(_QWORD *)(v89 + 32) )
                  break;
              }
              v55 = !_BitScanReverse((unsigned int *)&v87, v86);
              v102 = v87;
              if ( v55 )
                goto LABEL_160;
            }
            if ( !v89 )
            {
LABEL_160:
              if ( (*((_DWORD *)&CurrentThread->0 + 1) & 0x10000) == 0 )
                KeBugCheckEx(0x162u, (ULONG_PTR)CurrentThread, v36, (unsigned int)SessionId, 0LL);
            }
            else
            {
              *(_BYTE *)(v89 + 32) |= 2u;
              if ( *(__int64 *)(v89 + 32) < 0 )
              {
                KiAbEntryRemoveFromTree(v89, SessionId, v86);
                v89 = v109;
              }
              v101 = 0;
              v101 = *(_DWORD *)(v89 + 88) & 0x1FFFF;
              *(_DWORD *)(v89 + 88) &= 0xFFFE0000;
              *(_BYTE *)(v89 + 25) &= ~1u;
              *(_QWORD *)(v89 + 32) = 0LL;
              v90 = (signed __int64)(v89 - (unsigned __int64)CurrentThread->LockEntries) / 96;
              if ( AbAllocationRegionCount == 1 )
                CurrentThread->AbEntrySummary |= 1 << v90;
              else
                _InterlockedOr8((volatile signed __int8 *)&CurrentThread->AbOrphanedEntrySummary, 1 << v90);
            }
            --CurrentThread->AbAllocationRegionCount;
            KiAbThreadRemoveBoosts((ULONG_PTR)CurrentThread, v36, &v101);
            v55 = CurrentThread->SpecialApcDisable++ == -1;
            if ( v55
              && ($C774EFD68449142D8271B1EC1EB7FB26 *)CurrentThread->ApcState.ApcListHead[0].Flink != &CurrentThread->152 )
            {
              KiCheckForKernelApcDelivery(v92, v91, v93, v94);
            }
            KiLeaveGuardedRegionUnsafe((__int64)KeGetCurrentThread());
            v35 = 0;
            v30 = v111;
          }
        }
        v99 = _InterlockedCompareExchange64(v8 + 2, v34 & 1 | (v34 + 2) & 0xFFFFFFFFFFFFFFFEuLL, v34);
        v55 = v34 == v99;
        v34 = v99;
        if ( v55 )
          break;
      }
      v4 = 0LL;
LABEL_33:
      if ( !v4 )
      {
LABEL_24:
        v32 = -1;
        goto LABEL_25;
      }
    }
    v31 = v29 + 1;
    v29 = (unsigned __int16)_InterlockedCompareExchange16((volatile signed __int16 *)v8 + 16, v29 + 1, v29);
  }
  while ( v31 != v29 + 1 );
  if ( (_WORD)v29 )
  {
    if ( v29 != v28 - 1 )
      goto LABEL_24;
    v38 = 2;
  }
  else
  {
    v38 = 0;
  }
  v39 = *((_BYTE *)v8 + 38);
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
        v44 = (signed __int64 *)*v8;
        v45 = (signed __int64 **)v8[1];
        if ( *(signed __int64 **)(*v8 + 8) == v8 && *v45 == v8 )
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
      *((_BYTE *)v8 + 38) = v38;
      if ( v42 )
      {
        v46 = *(signed __int64 ***)(v42 + 8);
        if ( *v46 != (signed __int64 *)v42 )
          goto LABEL_177;
        *v8 = v42;
        v8[1] = (signed __int64)v46;
        *v46 = v8;
        *(_QWORD *)(v42 + 8) = v8;
        if ( v43 )
          ++*v43;
        v8 = 0LL;
      }
      if ( (*(_BYTE *)v4 & 1) == 0 && *(_QWORD *)(v4 + 8) > 8uLL )
      {
        v8 = *(signed __int64 **)v42;
        v67 = **(_QWORD **)v42;
        if ( *(_QWORD *)(*(_QWORD *)v42 + 8LL) != v42 || *(signed __int64 **)(v67 + 8) != v8 )
          goto LABEL_177;
        *(_QWORD *)v42 = v67;
        *(_QWORD *)(v67 + 8) = v42;
        --*v43;
        *((_BYTE *)v8 + 38) = 2;
      }
      if ( v8 && *((_BYTE *)v8 + 38) == 2 )
        v8[2] = 0LL;
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
        if ( v51 <= 0xFu && v30 <= 0xFu && v51 >= 2u )
        {
          v52 = KeGetCurrentPrcb();
          v53 = v52->SchedulerAssist;
          v54 = ~(unsigned __int16)(-1LL << (v30 + 1));
          v55 = (v54 & v53[5]) == 0;
          v53[5] &= v54;
          if ( v55 )
            KiRemoveSystemWorkPriorityKick(v52);
        }
      }
    }
    __writecr8(v30);
    v32 = -1;
  }
  else
  {
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)v48, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)v48);
    v104 = 0;
    v49 = KeGetCurrentThread();
    if ( (unsigned int)MiGetSystemRegionType(v48) == 1 )
    {
      v50 = (unsigned int)MmGetSessionIdEx((__int64)v49->ApcState.Process);
      v32 = -1;
    }
    else
    {
      v32 = -1;
      v50 = 0xFFFFFFFFLL;
    }
    --v49->SpecialApcDisable;
    v57 = ++v49->AbAllocationRegionCount;
    LODWORD(v58) = ((char)v49->AbEntrySummary | (char)v49->AbOrphanedEntrySummary) ^ 0x3F;
    v59 = v48 & 0x7FFFFFFFFFFFFFFCLL;
    v55 = !_BitScanReverse((unsigned int *)&v60, v58);
    v103 = v60;
    if ( v55 )
      goto LABEL_77;
    while ( 1 )
    {
      v61 = (__int64)&v49->LockEntries[v60];
      v58 = ~(1 << v60) & (unsigned int)v58;
      if ( (*(_BYTE *)(v61 + 26) & 1) != 0
        && (*(_DWORD *)(v61 + 32) & 1) == 0
        && (*(_QWORD *)(v61 + 32) & 0x7FFFFFFFFFFFFFFCLL) == v59
        && *(_DWORD *)(v61 + 40) == (_DWORD)v50 )
      {
        *(_BYTE *)(v61 + 26) &= ~1u;
        if ( *(_QWORD *)(v61 + 32) )
          break;
      }
      v55 = !_BitScanReverse((unsigned int *)&v60, v58);
      v103 = v60;
      if ( v55 )
        goto LABEL_77;
    }
    if ( !v61 )
    {
LABEL_77:
      if ( (*((_DWORD *)&v49->0 + 1) & 0x10000) == 0 )
        KeBugCheckEx(0x162u, (ULONG_PTR)v49, v48, v50, 0LL);
    }
    else
    {
      *(_BYTE *)(v61 + 32) |= 2u;
      if ( *(__int64 *)(v61 + 32) < 0 )
        KiAbEntryRemoveFromTree(v61, v58, v59);
      v104 = *(_DWORD *)(v61 + 88) & 0x1FFFF;
      *(_DWORD *)(v61 + 88) &= 0xFFFE0000;
      *(_BYTE *)(v61 + 25) &= ~1u;
      *(_QWORD *)(v61 + 32) = 0LL;
      v62 = 1 << ((signed __int64)(v61 - (unsigned __int64)v49->LockEntries) / 96);
      if ( v57 == 1 )
        v49->AbEntrySummary |= v62;
      else
        _InterlockedOr8((volatile signed __int8 *)&v49->AbOrphanedEntrySummary, v62);
    }
    --v49->AbAllocationRegionCount;
    KiAbThreadRemoveBoosts((ULONG_PTR)v49, v48, &v104);
    v55 = v49->SpecialApcDisable++ == -1;
    if ( v55 && ($C774EFD68449142D8271B1EC1EB7FB26 *)v49->ApcState.ApcListHead[0].Flink != &v49->152 )
      KiCheckForKernelApcDelivery(v64, v63, v65, v66);
    KiLeaveGuardedRegionUnsafe((__int64)KeGetCurrentThread());
    v47 = a1;
  }
  v4 = 0LL;
  if ( v8 )
    RtlpHpLfhBucketAddSubsegment(
      v47,
      *(_QWORD *)(v47
                + 8LL * *((unsigned __int8 *)RtlpLfhBucketIndexMap + (((unsigned int)(unsigned __int16)v107 + 15) >> 4))
                + 128),
      v8,
      a4);
LABEL_25:
  if ( v4 )
  {
    v68 = v4 + 16;
    if ( *(_BYTE *)(a1 + 57) )
    {
      ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)v68);
      if ( KiIrqlFlags )
      {
        if ( (KiIrqlFlags & 1) != 0 )
        {
          v75 = KeGetCurrentIrql();
          if ( v75 <= 0xFu && v111 <= 0xFu && v75 >= 2u )
          {
            v76 = KeGetCurrentPrcb();
            v77 = ~(unsigned __int16)(-1LL << (v111 + 1));
            v78 = v76->SchedulerAssist;
            v55 = (v77 & v78[5]) == 0;
            v78[5] &= v77;
            if ( v55 )
              KiRemoveSystemWorkPriorityKick(v76);
          }
        }
      }
      __writecr8(v111);
    }
    else
    {
      if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)v68, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
        ExfTryToWakePushLock((volatile signed __int64 *)v68);
      v106 = 0;
      v69 = KeGetCurrentThread();
      if ( (unsigned int)MiGetSystemRegionType(v68) == 1 )
        v32 = MmGetSessionIdEx((__int64)v69->ApcState.Process);
      --v69->SpecialApcDisable;
      v70 = ++v69->AbAllocationRegionCount;
      LODWORD(v71) = ((char)v69->AbEntrySummary | (char)v69->AbOrphanedEntrySummary) ^ 0x3F;
      v72 = v68 & 0x7FFFFFFFFFFFFFFCLL;
      v55 = !_BitScanReverse((unsigned int *)&v73, v71);
      v105 = v73;
      if ( v55 )
        goto LABEL_112;
      while ( 1 )
      {
        v74 = (__int64)&v69->LockEntries[v73];
        v71 = ~(1 << v73) & (unsigned int)v71;
        if ( (*(_BYTE *)(v74 + 26) & 1) != 0
          && (*(_DWORD *)(v74 + 32) & 1) == 0
          && (*(_QWORD *)(v74 + 32) & 0x7FFFFFFFFFFFFFFCLL) == v72
          && *(_DWORD *)(v74 + 40) == v32 )
        {
          *(_BYTE *)(v74 + 26) &= ~1u;
          if ( *(_QWORD *)(v74 + 32) )
            break;
        }
        v55 = !_BitScanReverse((unsigned int *)&v73, v71);
        v105 = v73;
        if ( v55 )
          goto LABEL_112;
      }
      if ( !v74 )
      {
LABEL_112:
        if ( (*((_DWORD *)&v69->0 + 1) & 0x10000) == 0 )
          KeBugCheckEx(0x162u, (ULONG_PTR)v69, v68, v32, 0LL);
      }
      else
      {
        *(_BYTE *)(v74 + 32) |= 2u;
        if ( *(__int64 *)(v74 + 32) < 0 )
          KiAbEntryRemoveFromTree(v74, v71, v72);
        v106 = *(_DWORD *)(v74 + 88) & 0x1FFFF;
        *(_DWORD *)(v74 + 88) &= 0xFFFE0000;
        *(_BYTE *)(v74 + 25) &= ~1u;
        *(_QWORD *)(v74 + 32) = 0LL;
        v79 = (signed __int64)(v74 - (unsigned __int64)v69->LockEntries) / 96;
        if ( v70 == 1 )
          v69->AbEntrySummary |= 1 << v79;
        else
          _InterlockedOr8((volatile signed __int8 *)&v69->AbOrphanedEntrySummary, 1 << v79);
      }
      --v69->AbAllocationRegionCount;
      KiAbThreadRemoveBoosts((ULONG_PTR)v69, v68, &v106);
      v55 = v69->SpecialApcDisable++ == -1;
      if ( v55 && ($C774EFD68449142D8271B1EC1EB7FB26 *)v69->ApcState.ApcListHead[0].Flink != &v69->152 )
        KiCheckForKernelApcDelivery(v81, v80, v82, v83);
      KiLeaveGuardedRegionUnsafe((__int64)KeGetCurrentThread());
    }
  }
  return v7;
}
