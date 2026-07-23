/*
 * XREFs of MiUpdateLargePageBitMap @ 0x14030ADE0
 * Callers:
 *     MiFreeLargeZeroPages @ 0x1403080A4 (MiFreeLargeZeroPages.c)
 *     MiFreeLargePageMemory @ 0x1403093A4 (MiFreeLargePageMemory.c)
 *     MiFreeMdlPageRun @ 0x14030AA48 (MiFreeMdlPageRun.c)
 *     MiFreeSmallPageFromMdl @ 0x14030ABF4 (MiFreeSmallPageFromMdl.c)
 *     MiFindContiguousPages @ 0x14030C430 (MiFindContiguousPages.c)
 *     MiLinkPoolCommitChain @ 0x140316290 (MiLinkPoolCommitChain.c)
 *     MiFindLargeNodePage @ 0x140395020 (MiFindLargeNodePage.c)
 *     MiDemoteValidLargePageOneLevel @ 0x1403BA398 (MiDemoteValidLargePageOneLevel.c)
 *     MiDeleteSubsectionLargePages @ 0x1403F6534 (MiDeleteSubsectionLargePages.c)
 *     MiGetFastLargePages @ 0x1403F7B20 (MiGetFastLargePages.c)
 *     MiInitializeDynamicPfns @ 0x14052E7E0 (MiInitializeDynamicPfns.c)
 *     MiRebuildLargePage @ 0x140552918 (MiRebuildLargePage.c)
 *     MiAssembleLargePagePfnList @ 0x14055E060 (MiAssembleLargePagePfnList.c)
 *     MiDemotePfnListChain @ 0x14055E458 (MiDemotePfnListChain.c)
 *     MiActOnPartitionNodePages @ 0x140560AE0 (MiActOnPartitionNodePages.c)
 *     MiAddPhysicalMemory @ 0x1408C4FF0 (MiAddPhysicalMemory.c)
 *     MiMarkLargePageRanges @ 0x140A43D88 (MiMarkLargePageRanges.c)
 *     MiCreateBootSlabEntries @ 0x140A508C0 (MiCreateBootSlabEntries.c)
 *     MiCreateEnclaveRegions @ 0x140A55ED8 (MiCreateEnclaveRegions.c)
 *     MiMarkLargePagePte @ 0x140A679D0 (MiMarkLargePagePte.c)
 * Callees:
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x1402042B0 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x1402D3660 (KeAcquireInStackQueuedSpinLock.c)
 *     RtlClearBitsEx @ 0x140309050 (RtlClearBitsEx.c)
 *     RtlSetBitsEx @ 0x140321750 (RtlSetBitsEx.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403F3684 (KiRemoveSystemWorkPriorityKick.c)
 */

void __fastcall MiUpdateLargePageBitMap(__int64 a1, unsigned __int64 a2, unsigned __int64 a3, int a4, int a5)
{
  __int64 v8; // rdx
  __int64 v10; // r15
  int v11; // r13d
  __int64 v12; // r14
  unsigned __int64 v13; // rbx
  unsigned __int64 v14; // rax
  unsigned __int64 v15; // rbp
  unsigned __int64 v16; // rsi
  unsigned __int8 v17; // al
  unsigned __int64 v18; // rax
  unsigned __int64 v19; // r8
  __int64 v20; // rcx
  __int64 v21; // rbp
  unsigned __int64 v22; // rbx
  unsigned __int64 v23; // r11
  __int64 v24; // rcx
  __int64 *v25; // r9
  __int64 v26; // r10
  __int64 *v27; // rdx
  bool i; // zf
  unsigned __int8 v29; // al
  unsigned __int64 OldIrql; // rbx
  unsigned __int64 v31; // r10
  __int64 v32; // rdx
  unsigned __int64 v33; // rbp
  __int64 *v34; // r9
  __int64 v35; // rsi
  __int64 *v36; // rdx
  bool j; // zf
  __int64 v38; // rcx
  __int64 *v39; // r8
  __int64 v40; // r9
  __int64 *v41; // rdx
  bool v42; // zf
  __int64 v43; // rcx
  __int64 *v44; // r8
  __int64 v45; // r9
  __int64 *v46; // rdx
  unsigned __int8 v47; // al
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r9
  _DWORD *SchedulerAssist; // r8
  int v51; // eax
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-58h] BYREF
  unsigned __int64 v54; // [rsp+90h] [rbp+18h]

  v8 = a1;
  memset(&LockHandle, 0, sizeof(LockHandle));
  if ( a3 < 0x200 )
    return;
  LODWORD(v10) = 2;
  v11 = 0;
  while ( 1 )
  {
    v10 = (unsigned int)(v10 - 1);
    v12 = 16LL * (unsigned int)v10 + v8 + 5064;
    if ( !*(_QWORD *)v12 )
      break;
    v54 = MiLargePageSizes[v10];
    v13 = a2 / v54;
    v14 = (~(v54 - 1) & (a3 + v54 + a2 - 1)) / v54;
    v15 = v14;
    v16 = v14 - a2 / v54;
    if ( a5 == 1 )
      goto LABEL_11;
    if ( a4 == 1 )
    {
      if ( v13 >= *(_QWORD *)v12 )
        goto LABEL_55;
      if ( v16 <= 1 )
      {
        if ( v16 == 1 )
        {
          v17 = _bittest64(*(const signed __int64 **)(v12 + 8), v13);
          goto LABEL_10;
        }
        goto LABEL_55;
      }
      if ( *(_QWORD *)v12 - v13 < v16 )
        goto LABEL_55;
      v38 = *(_QWORD *)(v12 + 8);
      v39 = (__int64 *)(v38 + 8 * (v13 >> 6));
      v40 = *v39;
      v41 = (__int64 *)(v38 + 8 * ((v14 - 1) >> 6));
      if ( v39 == v41 )
      {
        v42 = ((0xFFFFFFFFFFFFFFFFuLL >> (64 - (unsigned __int8)v16) << v13) & v40) == 0xFFFFFFFFFFFFFFFFuLL >> (64 - (unsigned __int8)v16) << v13;
      }
      else
      {
        if ( ((-1LL << v13) & v40) != -1LL << v13 )
          goto LABEL_55;
        while ( ++v39 != v41 )
        {
          if ( *v39 != -1 )
            goto LABEL_55;
        }
        v42 = ((0xFFFFFFFFFFFFFFFFuLL >> ~((unsigned __int8)v14 - 1)) & *v39) == 0xFFFFFFFFFFFFFFFFuLL >> ~((unsigned __int8)v14 - 1);
      }
    }
    else
    {
      if ( v13 >= *(_QWORD *)v12 )
        goto LABEL_55;
      if ( v16 <= 1 )
      {
        if ( v16 == 1 )
        {
          v17 = !_bittest64(*(const signed __int64 **)(v12 + 8), v13);
          goto LABEL_10;
        }
LABEL_55:
        v17 = 0;
        goto LABEL_10;
      }
      if ( *(_QWORD *)v12 - v13 < v16 )
        goto LABEL_55;
      v43 = *(_QWORD *)(v12 + 8);
      v44 = (__int64 *)(v43 + 8 * (v13 >> 6));
      v45 = *v44;
      v46 = (__int64 *)(v43 + 8 * ((v14 - 1) >> 6));
      if ( v44 == v46 )
      {
        v42 = (v45 & (0xFFFFFFFFFFFFFFFFuLL >> (64 - (unsigned __int8)v16) << v13)) == 0;
      }
      else
      {
        if ( (v45 & (-1LL << v13)) != 0 )
          goto LABEL_55;
        while ( ++v44 != v46 )
        {
          if ( *v44 )
            goto LABEL_55;
        }
        v42 = ((0xFFFFFFFFFFFFFFFFuLL >> ~((unsigned __int8)v14 - 1)) & *v44) == 0;
      }
    }
    v17 = v42;
LABEL_10:
    if ( v17 == 1 )
      break;
LABEL_11:
    if ( !v11 )
    {
      v11 = 1;
      KeAcquireInStackQueuedSpinLock(&qword_140C4E080, &LockHandle);
    }
    if ( a4 == 1 )
      RtlSetBitsEx(v12, v13, v16);
    else
      RtlClearBitsEx(v12, v13, v16);
    if ( !(_DWORD)v10 )
      break;
    v18 = MiLargePageSizes[(unsigned int)(v10 - 1)] / v54;
    v19 = v18;
    v20 = ~(v18 - 1);
    v21 = v20 & (v18 + v15 - 1);
    v22 = v20 & v13;
    v23 = v21 - v22;
    if ( a4 != 1 )
      goto LABEL_35;
    if ( v22 >= *(_QWORD *)v12 )
      goto LABEL_28;
    if ( v18 <= 1 )
    {
      if ( v18 != 1 )
        goto LABEL_28;
      v29 = _bittest64(*(const signed __int64 **)(v12 + 8), v22);
LABEL_27:
      if ( !v29 )
        goto LABEL_28;
    }
    else
    {
      if ( *(_QWORD *)v12 - v22 < v18 )
        goto LABEL_28;
      v24 = *(_QWORD *)(v12 + 8);
      v25 = (__int64 *)(v24 + 8 * (v22 >> 6));
      v26 = *v25;
      v27 = (__int64 *)(v24 + 8 * ((v22 + v18 - 1) >> 6));
      if ( v25 != v27 )
      {
        for ( i = ((-1LL << v22) & v26) == -1LL << v22; i; i = *v25 == -1 )
        {
          if ( ++v25 == v27 )
          {
            if ( ((0xFFFFFFFFFFFFFFFFuLL >> ~((unsigned __int8)v22 + (unsigned __int8)v18 - 1)) & *v25) == 0xFFFFFFFFFFFFFFFFuLL >> ~((unsigned __int8)v22 + (unsigned __int8)v18 - 1) )
              goto LABEL_40;
            v29 = 0;
            goto LABEL_27;
          }
        }
LABEL_28:
        v23 -= v19;
        if ( !v23 )
          break;
        v22 += v19;
        goto LABEL_40;
      }
      if ( ((0xFFFFFFFFFFFFFFFFuLL >> (64 - (unsigned __int8)v18) << v22) & v26) != 0xFFFFFFFFFFFFFFFFuLL >> (64 - (unsigned __int8)v18) << v22 )
        goto LABEL_28;
    }
LABEL_40:
    v31 = v21 - v19;
    if ( v21 - v19 < *(_QWORD *)v12 )
    {
      if ( v19 <= 1 )
      {
        if ( v19 == 1 )
        {
          v47 = _bittest64(*(const signed __int64 **)(v12 + 8), v31);
LABEL_78:
          if ( v47 )
            goto LABEL_35;
        }
      }
      else if ( *(_QWORD *)v12 - v31 >= v19 )
      {
        v32 = *(_QWORD *)(v12 + 8);
        v33 = v21 - 1;
        v34 = (__int64 *)(v32 + 8 * (v31 >> 6));
        v35 = *v34;
        v36 = (__int64 *)(v32 + 8 * (v33 >> 6));
        if ( v34 == v36 )
        {
          if ( ((0xFFFFFFFFFFFFFFFFuLL >> (64 - (unsigned __int8)v19) << v31) & v35) == 0xFFFFFFFFFFFFFFFFuLL >> (64 - (unsigned __int8)v19) << v31 )
            goto LABEL_35;
        }
        else
        {
          for ( j = ((-1LL << v31) & v35) == -1LL << v31; j; j = *v34 == -1 )
          {
            if ( ++v34 == v36 )
            {
              if ( ((0xFFFFFFFFFFFFFFFFuLL >> ~(_BYTE)v33) & *v34) == 0xFFFFFFFFFFFFFFFFuLL >> ~(_BYTE)v33 )
                goto LABEL_35;
              v47 = 0;
              goto LABEL_78;
            }
          }
        }
      }
    }
    v23 -= v19;
    if ( !v23 )
      break;
LABEL_35:
    v8 = a1;
    a2 = v54 * v22;
    a3 = v54 * v23;
    a5 = a4;
  }
  if ( v11 == 1 )
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
          i = (v51 & SchedulerAssist[5]) == 0;
          SchedulerAssist[5] &= v51;
          if ( i )
            KiRemoveSystemWorkPriorityKick(CurrentPrcb);
        }
      }
    }
    __writecr8(OldIrql);
  }
}
