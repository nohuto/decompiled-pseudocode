/*
 * XREFs of MiActOnPartitionNodePages @ 0x140560AE0
 * Callers:
 *     MiClearPartitionPageBitMap @ 0x140561694 (MiClearPartitionPageBitMap.c)
 *     MiFreePartitionNodePages @ 0x140562524 (MiFreePartitionNodePages.c)
 *     MiInsertPartitionPages @ 0x140562780 (MiInsertPartitionPages.c)
 *     MiReturnPartitionPagesToParent @ 0x140562F04 (MiReturnPartitionPagesToParent.c)
 *     MiHotAddPartitionMemory @ 0x1408DB3DC (MiHotAddPartitionMemory.c)
 *     MiMakePartitionMemoryBlock @ 0x1408DB6E0 (MiMakePartitionMemoryBlock.c)
 *     MiUpdatePartitionLargePfnBitMap @ 0x1408DB8D8 (MiUpdatePartitionLargePfnBitMap.c)
 * Callees:
 *     RtlAvlRemoveNode @ 0x1402D9370 (RtlAvlRemoveNode.c)
 *     KeYieldProcessorEx @ 0x1402EFAD0 (KeYieldProcessorEx.c)
 *     RtlClearBitsEx @ 0x140309050 (RtlClearBitsEx.c)
 *     MiUpdateLargePageBitMap @ 0x14030ADE0 (MiUpdateLargePageBitMap.c)
 *     RtlAvlInsertNodeEx @ 0x1403212A0 (RtlAvlInsertNodeEx.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403F3684 (KiRemoveSystemWorkPriorityKick.c)
 *     MiHotRemoveHugeRange @ 0x140532F38 (MiHotRemoveHugeRange.c)
 *     MiSetHugeRangePartitionId @ 0x140533C20 (MiSetHugeRangePartitionId.c)
 *     MiMoveBadPageCrossPartition @ 0x14054F22C (MiMoveBadPageCrossPartition.c)
 *     MiTransferPartitionPageRun @ 0x140563050 (MiTransferPartitionPageRun.c)
 *     MiSplitPfnBitMaps @ 0x1407B9C94 (MiSplitPfnBitMaps.c)
 *     MiAddPhysicalMemoryChunks @ 0x1408C558C (MiAddPhysicalMemoryChunks.c)
 *     MiHotAddHugeRange @ 0x1408C6B18 (MiHotAddHugeRange.c)
 *     MiFreePartitionPageRun @ 0x1408DB194 (MiFreePartitionPageRun.c)
 *     MiHotRemovePartitionPageRun @ 0x1408DB6AC (MiHotRemovePartitionPageRun.c)
 */

void __fastcall MiActOnPartitionNodePages(__int64 a1, unsigned int a2, __int16 **a3)
{
  unsigned int v4; // r12d
  __int64 v5; // rax
  __int64 v6; // rbp
  unsigned __int64 v7; // r13
  const signed __int64 *v8; // rbx
  unsigned __int64 v9; // r9
  unsigned __int64 v10; // r8
  unsigned __int64 v11; // r14
  const signed __int64 *v12; // r14
  __int64 i; // rax
  unsigned __int64 v14; // r8
  unsigned __int64 v15; // r9
  _DWORD *SchedulerAssist; // r9
  unsigned __int64 v17; // r15
  char *v18; // r10
  unsigned __int64 j; // rax
  __int64 v20; // rdx
  unsigned __int64 v21; // r15
  int v22; // ecx
  unsigned __int64 v23; // rsi
  unsigned __int64 *v24; // rax
  unsigned __int64 v25; // rcx
  int v26; // eax
  unsigned __int64 v27; // rdx
  unsigned __int64 v28; // r8
  ULONG_PTR *v29; // rcx
  __int16 v30; // r10
  __int64 v31; // rsi
  unsigned __int64 v32; // r12
  unsigned __int8 CurrentIrql; // r14
  __int64 v34; // rbx
  unsigned __int64 v35; // rbp
  unsigned __int8 v36; // al
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *v38; // r9
  int v39; // eax
  int v40; // ecx
  signed __int64 v41; // rbx
  __int64 v42; // rbx
  unsigned __int64 v43; // rdx
  unsigned __int64 v44; // r8
  unsigned __int64 v45; // rbx
  unsigned __int64 v46; // rcx
  unsigned __int64 v47; // rax
  unsigned __int64 v48; // rax
  __int64 *v49; // r8
  __int64 v50; // r9
  __int64 *v51; // rdx
  bool v52; // zf
  bool k; // zf
  __int16 *v54; // rdx
  bool v55; // r8
  __int16 *v56; // rax
  int v57; // [rsp+20h] [rbp-88h]
  int v58[4]; // [rsp+30h] [rbp-78h] BYREF
  unsigned __int64 v59; // [rsp+40h] [rbp-68h] BYREF
  unsigned __int64 v60; // [rsp+48h] [rbp-60h] BYREF
  __int64 v61; // [rsp+50h] [rbp-58h]
  unsigned int v64; // [rsp+C0h] [rbp+18h]

  v60 = 0LL;
  v59 = 0LL;
  v4 = a2;
  *((_DWORD *)a3 + 5) = 0;
  v64 = 0;
  if ( a2 <= 1 )
  {
    v5 = *(_QWORD *)(a1 + 24);
    if ( v5 < 0 )
    {
      v64 = 1;
      *(_QWORD *)(a1 + 24) = v5 & 0x7FFFFFFFFFFFFFFFLL;
    }
  }
  v6 = a1 + 32;
  v7 = 0LL;
  v61 = a1 + 32;
  while ( 1 )
  {
    v8 = *(const signed __int64 **)(v6 + 8);
    v9 = v7 & -(__int64)(v7 < *(_QWORD *)v6);
    v10 = *(_QWORD *)v6 - 1LL;
    while ( 1 )
    {
      if ( v10 - v9 == -1LL )
        goto LABEL_7;
      v12 = &v8[v9 >> 6];
      for ( i = ((1LL << (v9 & 0x3F)) - 1) | ~*v12; i == -1; i = ~*v12 )
      {
        if ( ++v12 > &v8[v10 >> 6] )
          goto LABEL_7;
      }
      _BitScanForward64((unsigned __int64 *)&i, ~i);
      v11 = i + ((v12 - v8) << 6);
      if ( v11 > v10 )
      {
LABEL_7:
        v11 = -1LL;
      }
      else if ( v11 != -1LL )
      {
        break;
      }
      if ( !v9 )
        break;
      v14 = v7 + 1;
      if ( v7 + 1 > *(_QWORD *)v6 )
        v14 = *(_QWORD *)v6;
      v10 = v14 - 1;
      v9 = 0LL;
    }
    if ( v11 < v7 || v11 == -1LL )
      return;
    v15 = *(_QWORD *)v6;
    if ( *(_QWORD *)v6 <= v11 )
    {
      SchedulerAssist = 0LL;
LABEL_44:
      v17 = *(_QWORD *)v6;
      goto LABEL_45;
    }
    v17 = v11;
    v18 = (char *)v8 + 4 * ((v15 - 1) >> 5);
    v10 = (unsigned __int64)v8 + 4 * (v11 >> 5);
    if ( (char *)v10 != v18 && (*(_DWORD *)v10 | *((_DWORD *)qword_140012120 + (v11 & 0x1F))) == -1 )
    {
      v17 = (v11 & 0xFFFFFFFFFFFFFFE0uLL) + 32;
      for ( v10 += 4LL; v10 < (unsigned __int64)v18 && *(_DWORD *)v10 == -1; v10 += 4LL )
        v17 += 32LL;
    }
    while ( v17 < v15 && _bittest64(v8, v17) )
      ++v17;
    SchedulerAssist = 0LL;
    if ( (char *)v10 != v18 && (*(_DWORD *)v10 & ~*((_DWORD *)qword_140012120 + (v17 & 0x1F))) == 0 )
    {
      SchedulerAssist = (_DWORD *)(32 - (v17 & 0x1F));
      if ( SchedulerAssist == (_DWORD *)-1LL )
        goto LABEL_43;
      v10 += 4LL;
      while ( v10 < (unsigned __int64)v18 && !*(_DWORD *)v10 )
      {
        v10 += 4LL;
        SchedulerAssist += 8;
        if ( SchedulerAssist == (_DWORD *)-1LL )
          goto LABEL_43;
      }
    }
    for ( j = (unsigned __int64)SchedulerAssist + v17;
          j < *(_QWORD *)v6;
          SchedulerAssist = (_DWORD *)((char *)SchedulerAssist + 1) )
    {
      if ( _bittest64(*(const signed __int64 **)(v6 + 8), j) )
        break;
      if ( SchedulerAssist == (_DWORD *)-1LL )
        break;
      ++j;
    }
LABEL_43:
    if ( !SchedulerAssist )
      goto LABEL_44;
LABEL_45:
    v20 = a1;
    v21 = v17 - v11;
    v7 = (unsigned __int64)SchedulerAssist + v11 + v21;
    v22 = 0;
    v23 = v11 + (*(_QWORD *)(a1 + 24) & 0x7FFFFFFFFFFFFFFFLL);
    if ( v4 != 9 )
    {
      if ( v23 > 0xFFFFFFFFFLL
        || (v10 = 0x4000000000000LL, (*(_QWORD *)(48 * v23 - 0x57FFFFFFFD8LL) & 0x4000000000000LL) == 0) )
      {
        v22 = 1;
      }
    }
    switch ( v4 )
    {
      case 5u:
        goto LABEL_135;
      case 6u:
        v24 = (unsigned __int64 *)&a3[6][8 * ((_QWORD)a3[4] + 1)];
        *v24 = v23;
        v24[1] = v21;
        goto LABEL_135;
      case 0u:
        MiFreePartitionPageRun(*a3, v11 + (*(_QWORD *)(a1 + 24) & 0x7FFFFFFFFFFFFFFFLL), v21, v64);
        goto LABEL_135;
    }
    if ( v4 == 1 )
      break;
    switch ( v4 )
    {
      case 2u:
        if ( !v22 )
        {
          v27 = (v23 + 511) & 0xFFFFFFFFFFFFFE00uLL;
          v28 = (v27 + v21) & 0xFFFFFFFFFFFFFE00uLL;
          if ( v27 < v28 )
            MiUpdateLargePageBitMap((__int64)*a3, v27, v28 - v27, 1, 0);
        }
        goto LABEL_135;
      case 3u:
        if ( !(unsigned int)MiSplitPfnBitMaps(*a3, v11 + (*(_QWORD *)(a1 + 24) & 0x7FFFFFFFFFFFFFFFLL), v21) )
          *((_DWORD *)a3 + 5) = -1073741670;
        goto LABEL_135;
      case 4u:
        if ( !v22 && *a3 == (__int16 *)&MiSystemPartition )
          MiUpdateLargePageBitMap((__int64)*a3, v23, v21, 0, 0);
        LOBYTE(v57) = *((_BYTE *)a3 + 16);
        MiTransferPartitionPageRun(a3[1], *a3, v23, v21, v57);
        goto LABEL_135;
      case 8u:
        if ( v22 )
        {
          MiSetHugeRangePartitionId(
            (KSPIN_LOCK *)*a3,
            (unsigned __int64)a3[1],
            v11 + (*(_QWORD *)(a1 + 24) & 0x7FFFFFFFFFFFFFFFLL),
            v21);
        }
        else
        {
          v29 = (ULONG_PTR *)a3[1];
          if ( v29 != &MiSystemPartition )
            MiUpdateLargePageBitMap((__int64)v29, v23, v21, 0, 0);
          v30 = **a3;
          v31 = 48 * v23 - 0x58000000000LL;
          v32 = v31 + 48 * v21;
          CurrentIrql = KeGetCurrentIrql();
          __writecr8(2uLL);
          if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu )
          {
            SchedulerAssist = KeGetCurrentPrcb()->SchedulerAssist;
            v20 = (-1LL << (CurrentIrql + 1)) & 4;
            v10 = (unsigned int)v20 | SchedulerAssist[5];
            SchedulerAssist[5] = v10;
          }
          v34 = v31 + 24;
          v35 = (unsigned __int64)(v30 & 0x3FF) << 39;
          do
          {
            v58[0] = 0;
            while ( _interlockedbittestandset64((volatile signed __int32 *)v34, 0x3FuLL) )
            {
              do
                KeYieldProcessorEx(v58, v20, v10, (__int64)SchedulerAssist);
              while ( *(__int64 *)v34 < 0 );
            }
            if ( (*(_BYTE *)(v34 + 11) & 0x40) != 0 )
              MiMoveBadPageCrossPartition(v31, (__int64)a3[1], (ULONG_PTR *)*a3);
            *(_QWORD *)(v34 + 16) = v35 | *(_QWORD *)(v34 + 16) & 0xFFFE007FFFFFFFFFuLL;
            _InterlockedAnd64((volatile signed __int64 *)v34, 0x7FFFFFFFFFFFFFFFuLL);
            v31 += 48LL;
            v34 += 48LL;
          }
          while ( v31 != v32 );
          if ( KiIrqlFlags )
          {
            if ( (KiIrqlFlags & 1) != 0 )
            {
              v36 = KeGetCurrentIrql();
              if ( v36 <= 0xFu && CurrentIrql <= 0xFu && v36 >= 2u )
              {
                CurrentPrcb = KeGetCurrentPrcb();
                v38 = CurrentPrcb->SchedulerAssist;
                v39 = ~(unsigned __int16)(-1LL << (CurrentIrql + 1));
                v52 = (v39 & v38[5]) == 0;
                v38[5] &= v39;
                if ( v52 )
                  KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
              }
            }
          }
          __writecr8(CurrentIrql);
          v6 = v61;
          v4 = a2;
        }
        goto LABEL_135;
      case 9u:
        v40 = *((unsigned __int8 *)a3 + 17);
        v41 = v21 << 12;
        v52 = *((_BYTE *)a3 + 18) == 0;
        v59 = v21 << 12;
        if ( v52 )
        {
          v60 = v23 << 12;
          MiAddPhysicalMemoryChunks(*a3, &v60, &v59, (_BYTE)v40 != 0 ? 0x200 : 0);
          v41 = v59;
        }
        else
        {
          MiHotAddHugeRange((unsigned int)*a3, v23, v21, v40, *((unsigned __int8 *)a3 + 19));
        }
        v42 = v41 / 4096;
        if ( !*((_BYTE *)a3 + 18) && *a3 != (__int16 *)&MiSystemPartition )
        {
          v43 = (v23 + 511) & 0xFFFFFFFFFFFFFE00uLL;
          v44 = (v43 + v42) & 0xFFFFFFFFFFFFFE00uLL;
          if ( v43 < v44 )
            MiUpdateLargePageBitMap((__int64)&MiSystemPartition, v43, v44 - v43, 1, 0);
        }
        if ( v42 == v21 )
          goto LABEL_135;
        *((_DWORD *)a3 + 5) = -1073741823;
        RtlClearBitsEx(v6, v11 + v42, *(_QWORD *)v6 - v11 - v42);
        if ( v42 )
          a3[4] = (__int16 *)((char *)a3[4] + 1);
        a3[5] = (__int16 *)((char *)a3[5] + v42);
        return;
    }
    *((_QWORD *)*a3 + 866) -= v21;
    *((_BYTE *)*a3 + 12) = 1;
    v45 = *((_QWORD *)*a3 + 3);
    if ( v45 )
    {
      v46 = *(_QWORD *)(a1 + 24) & 0x7FFFFFFFFFFFFFFFLL;
      do
      {
        v47 = *(_QWORD *)(v45 + 24) & 0x7FFFFFFFFFFFFFFFLL;
        if ( v46 < v47 )
        {
          v45 = *(_QWORD *)v45;
        }
        else
        {
          if ( v46 <= v47 )
            break;
          v45 = *(_QWORD *)(v45 + 8);
        }
      }
      while ( v45 );
    }
    RtlClearBitsEx(v45 + 32, v11, v21);
    v48 = *(_QWORD *)(v45 + 32);
    if ( !v48 )
      goto LABEL_135;
    if ( v48 <= 1 )
    {
      if ( _bittest64(*(const signed __int64 **)(v45 + 40), 0) )
        goto LABEL_135;
LABEL_127:
      RtlAvlRemoveNode((unsigned __int64 *)*a3 + 3, (unsigned __int64 *)v45);
      v54 = a3[3];
      v55 = 0;
      if ( !v54 )
        goto LABEL_134;
      while ( 1 )
      {
        if ( (*(_QWORD *)(v45 + 24) & 0x7FFFFFFFFFFFFFFFuLL) < (*((_QWORD *)v54 + 3) & 0x7FFFFFFFFFFFFFFFuLL) )
        {
          v56 = *(__int16 **)v54;
          if ( !*(_QWORD *)v54 )
          {
            v55 = 0;
LABEL_134:
            RtlAvlInsertNodeEx((unsigned __int64 *)a3 + 3, (unsigned __int64)v54, v55, (_QWORD *)v45);
            goto LABEL_135;
          }
        }
        else
        {
          v56 = (__int16 *)*((_QWORD *)v54 + 1);
          if ( !v56 )
          {
            v55 = 1;
            goto LABEL_134;
          }
        }
        v54 = v56;
      }
    }
    v49 = *(__int64 **)(v45 + 40);
    v50 = *v49;
    v51 = &v49[(v48 - 1) >> 6];
    if ( v49 == v51 )
    {
      v52 = (v50 & (0xFFFFFFFFFFFFFFFFuLL >> (64 - (unsigned __int8)*(_QWORD *)(v45 + 32)))) == 0;
    }
    else
    {
      for ( k = v50 == 0; ; k = *v49 == 0 )
      {
        if ( !k )
          goto LABEL_135;
        if ( ++v49 == v51 )
          break;
      }
      v52 = ((0xFFFFFFFFFFFFFFFFuLL >> ~((unsigned __int8)v48 - 1)) & *v49) == 0;
    }
    if ( v52 )
      goto LABEL_127;
LABEL_135:
    a3[4] = (__int16 *)((char *)a3[4] + 1);
    a3[5] = (__int16 *)((char *)a3[5] + v21);
    if ( v7 >= *(_QWORD *)v6 )
      return;
  }
  v52 = v22 == 0;
  v25 = v11 + (*(_QWORD *)(a1 + 24) & 0x7FFFFFFFFFFFFFFFLL);
  if ( !v52 )
  {
    MiHotRemoveHugeRange(v25, v21);
    *((_DWORD *)a3 + 5) = 0;
LABEL_58:
    RtlClearBitsEx(v6, v11, v21);
    goto LABEL_135;
  }
  v26 = MiHotRemovePartitionPageRun(v25, v21, v10);
  *((_DWORD *)a3 + 5) = v26;
  if ( v26 >= 0 )
    goto LABEL_58;
}
