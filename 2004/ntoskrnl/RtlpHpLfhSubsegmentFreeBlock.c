/*
 * XREFs of RtlpHpLfhSubsegmentFreeBlock @ 0x1402CB580
 * Callers:
 *     RtlpHpSegFree @ 0x1402538BC (RtlpHpSegFree.c)
 *     ExFreeHeapPool @ 0x140289030 (ExFreeHeapPool.c)
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
 *     RtlpHpLfhSubsegmentDecommitPages @ 0x1402CBF00 (RtlpHpLfhSubsegmentDecommitPages.c)
 *     RtlpHpLfhBucketAddSubsegment @ 0x1402CC4A4 (RtlpHpLfhBucketAddSubsegment.c)
 *     RtlpHpAcquireLockExclusive @ 0x1402CF3DC (RtlpHpAcquireLockExclusive.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403EDAA4 (KiRemoveSystemWorkPriorityKick.c)
 *     KeBugCheckEx @ 0x1403F70D0 (KeBugCheckEx.c)
 *     RtlpLogHeapFailure @ 0x14058E080 (RtlpLogHeapFailure.c)
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
  unsigned int v58; // edx
  __int64 v59; // rcx
  __int64 v60; // rbx
  unsigned __int8 v61; // al
  __int64 v62; // rcx
  __int64 v63; // rax
  unsigned __int64 v64; // r15
  struct _KTHREAD *v65; // rbx
  unsigned __int8 v66; // si
  unsigned int v67; // edx
  __int64 v68; // rcx
  __int64 v69; // rdi
  unsigned __int8 v70; // al
  struct _KPRCB *v71; // r10
  int v72; // edx
  _DWORD *v73; // r9
  __int64 v74; // rdx
  __int64 v75; // rcx
  struct _KTHREAD *CurrentThread; // r15
  unsigned int SessionId; // edx
  unsigned int v78; // r8d
  __int64 v79; // rcx
  int v80; // eax
  __int64 v81; // rcx
  __int64 v82; // rdx
  __int64 v83; // rcx
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  int v87; // eax
  signed __int64 v88; // rax
  unsigned int i; // [rsp+30h] [rbp-78h]
  int v90; // [rsp+34h] [rbp-74h] BYREF
  int v91; // [rsp+38h] [rbp-70h]
  int v92; // [rsp+3Ch] [rbp-6Ch]
  int v93; // [rsp+40h] [rbp-68h] BYREF
  int v94; // [rsp+44h] [rbp-64h]
  int v95; // [rsp+48h] [rbp-60h] BYREF
  unsigned int v96; // [rsp+4Ch] [rbp-5Ch]
  int v97; // [rsp+50h] [rbp-58h]
  __int64 v98; // [rsp+58h] [rbp-50h]
  unsigned __int8 v100; // [rsp+B8h] [rbp+10h]
  unsigned __int8 AbAllocationRegionCount; // [rsp+C0h] [rbp+18h]

  v100 = -1;
  v4 = 0LL;
  v6 = a4;
  v96 = DWORD2(RtlpHpHeapGlobals) ^ *(_DWORD *)(a2 + 40) ^ ((unsigned int)a2 >> 12);
  v7 = 1;
  v8 = (signed __int64 *)a2;
  if ( !a3 )
    goto LABEL_17;
  v9 = (unsigned __int16)v96;
  v97 = 0;
  v10 = a3 - HIWORD(v96) - a2;
  v11 = *(_QWORD *)(a1
                  + 8LL
                  * *((unsigned __int8 *)RtlpLfhBucketIndexMap + (((unsigned int)(unsigned __int16)v96 + 15) >> 4))
                  + 128);
  v12 = *(_DWORD *)(v11 + 72);
  v13 = *(_BYTE *)(v11 + 76);
  if ( v12 )
  {
    v14 = (v10 * (unsigned __int64)v12) >> v13;
    v15 = v10 - v14 * (unsigned __int16)v96;
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
          v100 = v37;
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
              v30 = v100;
              if ( v100 <= 0xFu && CurrentIrql >= 2u )
              {
                CurrentPrcb = KeGetCurrentPrcb();
                SchedulerAssist = CurrentPrcb->SchedulerAssist;
                v87 = ~(unsigned __int16)(-1LL << (v100 + 1));
                v55 = (v87 & SchedulerAssist[5]) == 0;
                SchedulerAssist[5] &= v87;
                if ( v55 )
                  KiRemoveSystemWorkPriorityKick(CurrentPrcb);
              }
            }
            else
            {
              v30 = v100;
            }
            __writecr8(v30);
            v35 = i;
          }
          else
          {
            if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)v36, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
              ExfTryToWakePushLock((volatile signed __int64 *)v36);
            v90 = 0;
            CurrentThread = KeGetCurrentThread();
            if ( (unsigned int)MiGetSystemRegionType(v36) == 1 )
              SessionId = MmGetSessionIdEx((__int64)CurrentThread->ApcState.Process);
            else
              SessionId = -1;
            --CurrentThread->SpecialApcDisable;
            ++CurrentThread->AbAllocationRegionCount;
            v78 = ((char)CurrentThread->AbEntrySummary | (char)CurrentThread->AbOrphanedEntrySummary) ^ 0x3F;
            AbAllocationRegionCount = CurrentThread->AbAllocationRegionCount;
            v55 = !_BitScanReverse((unsigned int *)&v79, v78);
            v91 = v79;
            if ( v55 )
              goto LABEL_160;
            while ( 1 )
            {
              v80 = ~(1 << v79);
              v81 = (__int64)&CurrentThread->LockEntries[v79];
              v78 &= v80;
              v98 = v81;
              if ( (*(_BYTE *)(v81 + 26) & 1) != 0
                && (*(_DWORD *)(v81 + 32) & 1) == 0
                && (*(_QWORD *)(v81 + 32) & 0x7FFFFFFFFFFFFFFCLL) == (v36 & 0x7FFFFFFFFFFFFFFCLL)
                && *(_DWORD *)(v81 + 40) == SessionId )
              {
                *(_BYTE *)(v81 + 26) &= ~1u;
                if ( *(_QWORD *)(v81 + 32) )
                  break;
              }
              v55 = !_BitScanReverse((unsigned int *)&v79, v78);
              v91 = v79;
              if ( v55 )
                goto LABEL_160;
            }
            if ( !v81 )
            {
LABEL_160:
              if ( (*((_DWORD *)&CurrentThread->0 + 1) & 0x10000) == 0 )
                KeBugCheckEx(0x162u, (ULONG_PTR)CurrentThread, v36, SessionId, 0LL);
            }
            else
            {
              *(_BYTE *)(v81 + 32) |= 2u;
              if ( *(__int64 *)(v81 + 32) < 0 )
              {
                KiAbEntryRemoveFromTree((PRTL_BALANCED_NODE)v81);
                v81 = v98;
              }
              v90 = 0;
              v90 = *(_DWORD *)(v81 + 88) & 0x1FFFF;
              *(_DWORD *)(v81 + 88) &= 0xFFFE0000;
              *(_BYTE *)(v81 + 25) &= ~1u;
              *(_QWORD *)(v81 + 32) = 0LL;
              v82 = (signed __int64)(v81 - (unsigned __int64)CurrentThread->LockEntries) / 96;
              if ( AbAllocationRegionCount == 1 )
                CurrentThread->AbEntrySummary |= 1 << v82;
              else
                _InterlockedOr8((volatile signed __int8 *)&CurrentThread->AbOrphanedEntrySummary, 1 << v82);
            }
            --CurrentThread->AbAllocationRegionCount;
            KiAbThreadRemoveBoosts((ULONG_PTR)CurrentThread, v36, &v90);
            v55 = CurrentThread->SpecialApcDisable++ == -1;
            if ( v55
              && ($C774EFD68449142D8271B1EC1EB7FB26 *)CurrentThread->ApcState.ApcListHead[0].Flink != &CurrentThread->152 )
            {
              KiCheckForKernelApcDelivery(v83);
            }
            KiLeaveGuardedRegionUnsafe((__int64)KeGetCurrentThread());
            v35 = 0;
            v30 = v100;
          }
        }
        v88 = _InterlockedCompareExchange64(v8 + 2, v34 & 1 | (v34 + 2) & 0xFFFFFFFFFFFFFFFEuLL, v34);
        v55 = v34 == v88;
        v34 = v88;
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
        v63 = **(_QWORD **)v42;
        if ( *(_QWORD *)(*(_QWORD *)v42 + 8LL) != v42 || *(signed __int64 **)(v63 + 8) != v8 )
          goto LABEL_177;
        *(_QWORD *)v42 = v63;
        *(_QWORD *)(v63 + 8) = v42;
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
    v93 = 0;
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
    v58 = ((char)v49->AbEntrySummary | (char)v49->AbOrphanedEntrySummary) ^ 0x3F;
    v55 = !_BitScanReverse((unsigned int *)&v59, v58);
    v92 = v59;
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
      v92 = v59;
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
      v93 = *(_DWORD *)(v60 + 88) & 0x1FFFF;
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
    KiAbThreadRemoveBoosts((ULONG_PTR)v49, v48, &v93);
    v55 = v49->SpecialApcDisable++ == -1;
    if ( v55 && ($C774EFD68449142D8271B1EC1EB7FB26 *)v49->ApcState.ApcListHead[0].Flink != &v49->152 )
      KiCheckForKernelApcDelivery(v62);
    KiLeaveGuardedRegionUnsafe((__int64)KeGetCurrentThread());
    v47 = a1;
  }
  v4 = 0LL;
  if ( v8 )
    RtlpHpLfhBucketAddSubsegment(
      v47,
      *(_QWORD *)(v47
                + 8LL * *((unsigned __int8 *)RtlpLfhBucketIndexMap + (((unsigned int)(unsigned __int16)v96 + 15) >> 4))
                + 128),
      v8,
      a4);
LABEL_25:
  if ( v4 )
  {
    v64 = v4 + 16;
    if ( *(_BYTE *)(a1 + 57) )
    {
      ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)v64);
      if ( KiIrqlFlags )
      {
        if ( (KiIrqlFlags & 1) != 0 )
        {
          v70 = KeGetCurrentIrql();
          if ( v70 <= 0xFu && v100 <= 0xFu && v70 >= 2u )
          {
            v71 = KeGetCurrentPrcb();
            v72 = ~(unsigned __int16)(-1LL << (v100 + 1));
            v73 = v71->SchedulerAssist;
            v55 = (v72 & v73[5]) == 0;
            v73[5] &= v72;
            if ( v55 )
              KiRemoveSystemWorkPriorityKick(v71);
          }
        }
      }
      __writecr8(v100);
    }
    else
    {
      if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)v64, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
        ExfTryToWakePushLock((volatile signed __int64 *)v64);
      v95 = 0;
      v65 = KeGetCurrentThread();
      if ( (unsigned int)MiGetSystemRegionType(v64) == 1 )
        v32 = MmGetSessionIdEx((__int64)v65->ApcState.Process);
      --v65->SpecialApcDisable;
      v66 = ++v65->AbAllocationRegionCount;
      v67 = ((char)v65->AbEntrySummary | (char)v65->AbOrphanedEntrySummary) ^ 0x3F;
      v55 = !_BitScanReverse((unsigned int *)&v68, v67);
      v94 = v68;
      if ( v55 )
        goto LABEL_112;
      while ( 1 )
      {
        v69 = (__int64)&v65->LockEntries[v68];
        v67 &= ~(1 << v68);
        if ( (*(_BYTE *)(v69 + 26) & 1) != 0
          && (*(_DWORD *)(v69 + 32) & 1) == 0
          && (*(_QWORD *)(v69 + 32) & 0x7FFFFFFFFFFFFFFCLL) == (v64 & 0x7FFFFFFFFFFFFFFCLL)
          && *(_DWORD *)(v69 + 40) == v32 )
        {
          *(_BYTE *)(v69 + 26) &= ~1u;
          if ( *(_QWORD *)(v69 + 32) )
            break;
        }
        v55 = !_BitScanReverse((unsigned int *)&v68, v67);
        v94 = v68;
        if ( v55 )
          goto LABEL_112;
      }
      if ( !v69 )
      {
LABEL_112:
        if ( (*((_DWORD *)&v65->0 + 1) & 0x10000) == 0 )
          KeBugCheckEx(0x162u, (ULONG_PTR)v65, v64, v32, 0LL);
      }
      else
      {
        *(_BYTE *)(v69 + 32) |= 2u;
        if ( *(__int64 *)(v69 + 32) < 0 )
          KiAbEntryRemoveFromTree((PRTL_BALANCED_NODE)v69);
        v95 = *(_DWORD *)(v69 + 88) & 0x1FFFF;
        *(_DWORD *)(v69 + 88) &= 0xFFFE0000;
        *(_BYTE *)(v69 + 25) &= ~1u;
        *(_QWORD *)(v69 + 32) = 0LL;
        v74 = (signed __int64)(v69 - (unsigned __int64)v65->LockEntries) / 96;
        if ( v66 == 1 )
          v65->AbEntrySummary |= 1 << v74;
        else
          _InterlockedOr8((volatile signed __int8 *)&v65->AbOrphanedEntrySummary, 1 << v74);
      }
      --v65->AbAllocationRegionCount;
      KiAbThreadRemoveBoosts((ULONG_PTR)v65, v64, &v95);
      v55 = v65->SpecialApcDisable++ == -1;
      if ( v55 && ($C774EFD68449142D8271B1EC1EB7FB26 *)v65->ApcState.ApcListHead[0].Flink != &v65->152 )
        KiCheckForKernelApcDelivery(v75);
      KiLeaveGuardedRegionUnsafe((__int64)KeGetCurrentThread());
    }
  }
  return v7;
}
