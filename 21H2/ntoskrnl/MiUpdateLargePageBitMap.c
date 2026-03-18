/*
 * XREFs of MiUpdateLargePageBitMap @ 0x1402C38D0
 * Callers:
 *     MiFreeContiguousPages @ 0x140213FA8 (MiFreeContiguousPages.c)
 *     MiFreeLargeZeroPages @ 0x14026E05C (MiFreeLargeZeroPages.c)
 *     MiFindContiguousPagesEx @ 0x140277D10 (MiFindContiguousPagesEx.c)
 *     MiFreeLargePageMemory @ 0x14028CA70 (MiFreeLargePageMemory.c)
 *     MiFreeMdlPageRun @ 0x1402C3410 (MiFreeMdlPageRun.c)
 *     MiLinkPoolCommitChain @ 0x140352A00 (MiLinkPoolCommitChain.c)
 *     MiDemoteValidLargePageOneLevel @ 0x1403C9590 (MiDemoteValidLargePageOneLevel.c)
 *     MiAllocateDriverPageFromRange @ 0x1403C9C90 (MiAllocateDriverPageFromRange.c)
 *     MiFindLargeNodePage @ 0x1403D6C20 (MiFindLargeNodePage.c)
 *     MiRebuildLargePage @ 0x14045CDD6 (MiRebuildLargePage.c)
 *     MiInitializeDynamicPfns @ 0x140582D7C (MiInitializeDynamicPfns.c)
 *     MiDeleteSubsectionLargePages @ 0x1405AED7C (MiDeleteSubsectionLargePages.c)
 *     MiActOnPartitionNodePages @ 0x1405BCBC4 (MiActOnPartitionNodePages.c)
 *     MiDemotePfnListChain @ 0x1405C19F8 (MiDemotePfnListChain.c)
 *     MiGetFastLargePages @ 0x1405C2478 (MiGetFastLargePages.c)
 *     MiAddPhysicalMemory @ 0x140968388 (MiAddPhysicalMemory.c)
 *     MiMarkLargePageRanges @ 0x140AF463C (MiMarkLargePageRanges.c)
 *     MiCreateBootSlabEntries @ 0x140B04E44 (MiCreateBootSlabEntries.c)
 *     MiCreateEnclaveRegions @ 0x140B08E90 (MiCreateEnclaveRegions.c)
 *     MiMarkLargePagePte @ 0x140B1A1B0 (MiMarkLargePagePte.c)
 * Callees:
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x140282BA0 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     RtlSetBitsEx @ 0x14030B740 (RtlSetBitsEx.c)
 *     RtlClearBitsEx @ 0x14030BB30 (RtlClearBitsEx.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x140311930 (KeAcquireInStackQueuedSpinLock.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x140418E4C (KiRemoveSystemWorkPriorityKick.c)
 */

void __fastcall MiUpdateLargePageBitMap(__int64 a1, unsigned __int64 a2, unsigned __int64 a3, int a4, int a5)
{
  __int64 v8; // r13
  __int64 v10; // r12
  unsigned __int64 v11; // r15
  unsigned __int64 v12; // rsi
  unsigned __int64 v13; // rbp
  unsigned __int64 v14; // rbp
  unsigned __int64 v15; // r14
  unsigned __int64 v16; // rax
  unsigned __int8 v17; // al
  unsigned __int64 v18; // r8
  unsigned __int64 v19; // rax
  __int64 v20; // rcx
  __int64 v21; // r14
  unsigned __int64 v22; // rsi
  unsigned __int64 v23; // r8
  __int64 v24; // rcx
  __int64 v25; // r10
  _QWORD *v26; // r11
  _QWORD *v27; // rdx
  unsigned __int64 OldIrql; // rbx
  __int64 v29; // rcx
  __int64 v30; // r9
  _QWORD *v31; // r8
  _QWORD *v32; // rdx
  _QWORD *v33; // r8
  bool v34; // zf
  __int64 v35; // rcx
  __int64 v36; // r9
  _QWORD *v37; // r8
  _QWORD *v38; // rdx
  _QWORD *v39; // r8
  _QWORD *v40; // r11
  unsigned __int64 v41; // r11
  __int64 v42; // rdx
  unsigned __int64 v43; // r14
  __int64 v44; // rbp
  _QWORD *v45; // r10
  _QWORD *v46; // rdx
  _QWORD *v47; // r10
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r9
  _DWORD *SchedulerAssist; // r8
  int v51; // eax
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-48h] BYREF
  int v53; // [rsp+80h] [rbp+18h]

  if ( a3 < 0x200 )
    return;
  LODWORD(v8) = 2;
  memset(&LockHandle, 0, sizeof(LockHandle));
  v53 = 0;
  while ( 1 )
  {
    v8 = (unsigned int)(v8 - 1);
    v10 = 16LL * (unsigned int)v8 + a1 + 15816;
    if ( !*(_QWORD *)v10 )
      break;
    v11 = MiLargePageSizes[v8];
    if ( v11 == 512 )
      v12 = a2 >> 9;
    else
      v12 = a2 / v11;
    v13 = ~(v11 - 1) & (v11 + a2 + a3 - 1);
    if ( v11 == 512 )
      v14 = v13 >> 9;
    else
      v14 = v13 / v11;
    v15 = v14 - v12;
    if ( a5 )
      goto LABEL_18;
    v16 = *(_QWORD *)v10;
    if ( !a4 )
    {
      if ( v12 >= v16 )
        goto LABEL_37;
      if ( v15 <= 1 )
      {
        if ( v15 == 1 && !_bittest64(*(const signed __int64 **)(v10 + 8), v12) )
        {
          v17 = 1;
          goto LABEL_15;
        }
        goto LABEL_37;
      }
      if ( v16 - v12 < v15 )
        goto LABEL_37;
      v35 = *(_QWORD *)(v10 + 8);
      v36 = *(_QWORD *)(v35 + 8 * (v12 >> 6));
      v37 = (_QWORD *)(v35 + 8 * (v12 >> 6));
      v38 = (_QWORD *)(v35 + 8 * ((v14 - 1) >> 6));
      if ( v37 == v38 )
      {
        v17 = ((0xFFFFFFFFFFFFFFFFuLL >> (64 - (unsigned __int8)v15) << v12) & v36) == 0;
        goto LABEL_15;
      }
      if ( ((-1LL << v12) & v36) != 0 )
        goto LABEL_37;
      v39 = v37 + 1;
      if ( v39 != v38 )
      {
        while ( !*v39 )
        {
          if ( ++v39 == v38 )
            goto LABEL_57;
        }
LABEL_37:
        v17 = 0;
        goto LABEL_15;
      }
LABEL_57:
      v34 = ((0xFFFFFFFFFFFFFFFFuLL >> ~((unsigned __int8)v14 - 1)) & *v39) == 0;
      goto LABEL_58;
    }
    if ( v12 >= v16 )
      goto LABEL_37;
    if ( v15 > 1 )
    {
      if ( v16 - v12 < v15 )
        goto LABEL_37;
      v29 = *(_QWORD *)(v10 + 8);
      v30 = *(_QWORD *)(v29 + 8 * (v12 >> 6));
      v31 = (_QWORD *)(v29 + 8 * (v12 >> 6));
      v32 = (_QWORD *)(v29 + 8 * ((v14 - 1) >> 6));
      if ( v31 == v32 )
      {
        v17 = ((0xFFFFFFFFFFFFFFFFuLL >> (64 - (unsigned __int8)v15) << v12) & v30) == 0xFFFFFFFFFFFFFFFFuLL >> (64 - (unsigned __int8)v15) << v12;
        goto LABEL_15;
      }
      if ( ((-1LL << v12) & v30) != -1LL << v12 )
        goto LABEL_37;
      v33 = v31 + 1;
      if ( v33 != v32 )
      {
        while ( *v33 == -1LL )
        {
          if ( ++v33 == v32 )
            goto LABEL_49;
        }
        goto LABEL_37;
      }
LABEL_49:
      v34 = ((0xFFFFFFFFFFFFFFFFuLL >> ~((unsigned __int8)v14 - 1)) & *v33) == 0xFFFFFFFFFFFFFFFFuLL >> ~((unsigned __int8)v14 - 1);
LABEL_58:
      v17 = v34;
      goto LABEL_15;
    }
    if ( v15 != 1 )
      goto LABEL_37;
    v17 = _bittest64(*(const signed __int64 **)(v10 + 8), v12);
LABEL_15:
    if ( v17 )
      break;
LABEL_18:
    if ( !v53 )
    {
      v53 = 1;
      KeAcquireInStackQueuedSpinLock(&qword_140C51880, &LockHandle);
    }
    v18 = v14 - v12;
    if ( a4 )
      RtlSetBitsEx(v10, v12, v18);
    else
      RtlClearBitsEx(v10, v12, v18);
    if ( !(_DWORD)v8 )
      break;
    v19 = MiLargePageSizes[(unsigned int)(v8 - 1)] / v11;
    v20 = ~(v19 - 1);
    v21 = v20 & (v19 + v14 - 1);
    v22 = v20 & v12;
    v23 = v21 - v22;
    if ( !a4 )
      goto LABEL_36;
    if ( v22 >= *(_QWORD *)v10 )
      goto LABEL_29;
    if ( v19 <= 1 )
    {
      if ( v19 != 1 || !_bittest64(*(const signed __int64 **)(v10 + 8), v22) )
        goto LABEL_29;
    }
    else
    {
      if ( *(_QWORD *)v10 - v22 < v19 )
        goto LABEL_29;
      v24 = *(_QWORD *)(v10 + 8);
      v25 = *(_QWORD *)(v24 + 8 * (v22 >> 6));
      v26 = (_QWORD *)(v24 + 8 * (v22 >> 6));
      v27 = (_QWORD *)(v24 + 8 * ((v22 + v19 - 1) >> 6));
      if ( v26 == v27 )
      {
        if ( ((0xFFFFFFFFFFFFFFFFuLL >> (64 - (unsigned __int8)v19) << v22) & v25) != 0xFFFFFFFFFFFFFFFFuLL >> (64 - (unsigned __int8)v19) << v22 )
          goto LABEL_29;
      }
      else
      {
        if ( ((-1LL << v22) & v25) != -1LL << v22 )
          goto LABEL_29;
        v40 = v26 + 1;
        if ( v40 != v27 )
        {
          while ( *v40 == -1LL )
          {
            if ( ++v40 == v27 )
              goto LABEL_67;
          }
LABEL_29:
          v23 -= v19;
          if ( !v23 )
            break;
          v22 += v19;
          goto LABEL_68;
        }
LABEL_67:
        if ( ((0xFFFFFFFFFFFFFFFFuLL >> ~((unsigned __int8)v22 + (unsigned __int8)v19 - 1)) & *v40) != 0xFFFFFFFFFFFFFFFFuLL >> ~((unsigned __int8)v22 + (unsigned __int8)v19 - 1) )
          goto LABEL_29;
      }
    }
LABEL_68:
    v41 = v21 - v19;
    if ( v21 - v19 < *(_QWORD *)v10 )
    {
      if ( v19 > 1 )
      {
        if ( *(_QWORD *)v10 - v41 >= v19 )
        {
          v42 = *(_QWORD *)(v10 + 8);
          v43 = v21 - 1;
          v44 = *(_QWORD *)(v42 + 8 * (v41 >> 6));
          v45 = (_QWORD *)(v42 + 8 * (v41 >> 6));
          v46 = (_QWORD *)(v42 + 8 * (v43 >> 6));
          if ( v45 == v46 )
          {
            if ( ((0xFFFFFFFFFFFFFFFFuLL >> (64 - (unsigned __int8)v19) << v41) & v44) == 0xFFFFFFFFFFFFFFFFuLL >> (64 - (unsigned __int8)v19) << v41 )
              goto LABEL_36;
          }
          else if ( ((-1LL << v41) & v44) == -1LL << v41 )
          {
            v47 = v45 + 1;
            if ( v47 == v46 )
            {
LABEL_81:
              if ( ((0xFFFFFFFFFFFFFFFFuLL >> ~(_BYTE)v43) & *v47) == 0xFFFFFFFFFFFFFFFFuLL >> ~(_BYTE)v43 )
                goto LABEL_36;
            }
            else
            {
              while ( *v47 == -1LL )
              {
                if ( ++v47 == v46 )
                  goto LABEL_81;
              }
            }
          }
        }
      }
      else if ( v19 == 1 && _bittest64(*(const signed __int64 **)(v10 + 8), v41) )
      {
        goto LABEL_36;
      }
    }
    v23 -= v19;
    if ( !v23 )
      break;
LABEL_36:
    a5 = a4;
    a2 = v11 * v22;
    a3 = v11 * v23;
  }
  if ( v53 )
  {
    KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
    OldIrql = LockHandle.OldIrql;
    if ( KiIrqlFlags )
    {
      if ( (KiIrqlFlags & 1) != 0 )
      {
        CurrentIrql = KeGetCurrentIrql();
        if ( CurrentIrql <= 0xFu && LockHandle.OldIrql <= 0xFu && CurrentIrql >= 2u )
        {
          CurrentPrcb = KeGetCurrentPrcb();
          SchedulerAssist = CurrentPrcb->SchedulerAssist;
          v51 = ~(unsigned __int16)(-1LL << (LockHandle.OldIrql + 1));
          v34 = (v51 & SchedulerAssist[5]) == 0;
          SchedulerAssist[5] &= v51;
          if ( v34 )
            KiRemoveSystemWorkPriorityKick(CurrentPrcb);
        }
      }
    }
    __writecr8(OldIrql);
  }
}
