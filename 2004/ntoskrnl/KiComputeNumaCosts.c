/*
 * XREFs of KiComputeNumaCosts @ 0x140A45AA0
 * Callers:
 *     KeInitSystem @ 0x140A4495C (KeInitSystem.c)
 * Callees:
 *     MmMapLockedPagesSpecifyCache @ 0x14021BA60 (MmMapLockedPagesSpecifyCache.c)
 *     KeRevertToUserGroupAffinityThread @ 0x1402E44A0 (KeRevertToUserGroupAffinityThread.c)
 *     KeSetSystemGroupAffinityThread @ 0x1402F1C40 (KeSetSystemGroupAffinityThread.c)
 *     MmAllocatePartitionNodePagesForMdlEx @ 0x140313410 (MmAllocatePartitionNodePagesForMdlEx.c)
 *     MiFreePagesFromMdl @ 0x140317C94 (MiFreePagesFromMdl.c)
 *     __security_check_cookie @ 0x1403CCE60 (__security_check_cookie.c)
 *     qsort @ 0x1403CF4C0 (qsort.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403EDAA4 (KiRemoveSystemWorkPriorityKick.c)
 *     HvlQueryNumaDistance @ 0x1404ECED0 (HvlQueryNumaDistance.c)
 *     ExFreePoolWithTag @ 0x1409B1140 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x1409B1160 (ExAllocatePoolWithTag.c)
 *     KiGetHalNumaConversionFactor @ 0x140A8ECD8 (KiGetHalNumaConversionFactor.c)
 */

char KiComputeNumaCosts()
{
  char *PoolWithTag; // rax
  __int64 v1; // rdi
  int v2; // r8d
  unsigned int v3; // esi
  unsigned int v4; // edx
  __int64 v5; // rcx
  unsigned int v6; // edi
  int v7; // ecx
  __int16 v8; // di
  unsigned int v9; // r15d
  __int64 *v10; // rax
  _GROUP_AFFINITY *p_PreviousAffinity; // rdx
  unsigned int v12; // r14d
  struct _MDL *PartitionNodePagesForMdl; // rax
  struct _MDL *v14; // r13
  _DWORD *SchedulerAssist; // r8
  char *v16; // r9
  unsigned __int8 CurrentIrql; // r12
  char *v18; // rcx
  unsigned __int64 v19; // r10
  unsigned __int8 v20; // cl
  struct _KPRCB *CurrentPrcb; // r9
  int v22; // eax
  bool v23; // zf
  unsigned __int16 v24; // cx
  unsigned __int64 v25; // r11
  int v26; // edi
  unsigned int v27; // r14d
  int i; // edx
  __int64 v29; // r8
  int v30; // eax
  unsigned int v31; // r15d
  int v32; // r9d
  __int64 v33; // r14
  __int64 v34; // rcx
  int v35; // eax
  _QWORD *v36; // r12
  int v37; // r8d
  __int64 v38; // rax
  __int64 v39; // r13
  int v40; // ecx
  __int64 v41; // r10
  __int64 v42; // r9
  unsigned int v43; // esi
  __int64 HalNumaConversionFactor; // rax
  unsigned __int64 v45; // rcx
  unsigned int v46; // edi
  unsigned int v47; // esi
  unsigned int v48; // r9d
  int v49; // r14d
  _QWORD *v50; // r8
  __int64 *v51; // r11
  __int64 v52; // rax
  __int64 v53; // rdx
  size_t v54; // rdx
  unsigned __int16 v55; // cx
  unsigned int v56; // edi
  int j; // edx
  __int64 v58; // rax
  __int64 v59; // rdx
  int v61; // [rsp+48h] [rbp-C0h]
  int v62; // [rsp+48h] [rbp-C0h]
  unsigned int v63; // [rsp+4Ch] [rbp-BCh]
  unsigned int v64; // [rsp+4Ch] [rbp-BCh]
  __int64 v65; // [rsp+50h] [rbp-B8h] BYREF
  unsigned __int64 v66; // [rsp+58h] [rbp-B0h]
  __int64 v67; // [rsp+60h] [rbp-A8h] BYREF
  __int64 Affinity; // [rsp+68h] [rbp-A0h]
  _GROUP_AFFINITY Affinity_8; // [rsp+70h] [rbp-98h] BYREF
  unsigned __int64 v70; // [rsp+80h] [rbp-88h]
  _GROUP_AFFINITY PreviousAffinity; // [rsp+88h] [rbp-80h] BYREF
  _WORD Base[4]; // [rsp+98h] [rbp-70h] BYREF
  _QWORD v73[127]; // [rsp+A0h] [rbp-68h] BYREF

  PreviousAffinity = 0LL;
  if ( (unsigned __int16)KeNumberNodes > 1u )
  {
    v1 = (unsigned __int16)KeNumberNodes * (unsigned int)(unsigned __int16)KeNumberNodes;
    PoolWithTag = (char *)ExAllocatePoolWithTag(NonPagedPoolNx, 10 * v1, 0x634E654Bu);
    KiActualNodeCost = PoolWithTag;
    if ( !PoolWithTag )
      return (char)PoolWithTag;
    KiNodeGraph = &PoolWithTag[8 * v1];
    if ( (_DWORD)v1 )
      memset(PoolWithTag, 0xFFu, 8 * v1);
    Affinity = -1LL;
    v2 = 0;
    v61 = 0;
    v3 = 0;
    v63 = 0;
    v4 = (unsigned __int16)KeNumberNodes;
    Affinity_8 = 0LL;
    if ( !KeNumberNodes )
    {
LABEL_53:
      v24 = KeNumberNodes;
      v25 = 0LL;
      LODWORD(v65) = 0;
      v26 = 0;
      v64 = 0;
      v27 = 0;
      for ( i = (unsigned __int16)KeNumberNodes; v27 < v24; v64 = v27 )
      {
        v29 = KeNodeBlock[v27];
        v30 = *(unsigned __int16 *)(v29 + 146);
        if ( (_WORD)v30 == *(_WORD *)(v29 + 148) )
        {
          v31 = 0;
          v32 = i * v30;
          v62 = i * v30;
          if ( i )
          {
            v33 = KeNodeBlock[v27];
            do
            {
              v34 = KeNodeBlock[v31];
              v35 = *(unsigned __int16 *)(v34 + 146);
              if ( (_WORD)v35 == *(_WORD *)(v34 + 148) )
              {
                v36 = KiActualNodeCost;
                v37 = *(unsigned __int16 *)(v34 + 146);
                v38 = (unsigned int)(v32 + v35);
                v39 = (unsigned int)v38;
                if ( *((_QWORD *)KiActualNodeCost + v38) == -1LL )
                {
                  v40 = *(unsigned __int16 *)(v33 + 146);
                  v41 = (unsigned int)(v40 + i * v37);
                  v42 = *((_QWORD *)KiActualNodeCost + v41);
                  if ( v42 == -1 )
                  {
                    v43 = *((_DWORD *)KeNodeDistance + v37 + i * v40);
                    if ( v43 != 1 || (v43 = *((_DWORD *)KeNodeDistance + (int)v41), v43 != 1) )
                    {
                      if ( !v26 )
                      {
                        HalNumaConversionFactor = KiGetHalNumaConversionFactor(&v65);
                        v26 = v65;
                        v25 = HalNumaConversionFactor;
                      }
                      if ( v26 == 2 )
                      {
                        v45 = v25 * v43 / 0x64;
                      }
                      else if ( v26 == 3 )
                      {
                        v45 = 100 * (unsigned __int64)v43 / v25;
                      }
                      else
                      {
                        v45 = -1LL;
                      }
                      v36[v39] = v45;
                    }
                  }
                  else
                  {
                    *((_QWORD *)KiActualNodeCost + v38) = v42;
                  }
                  v32 = v62;
                }
              }
              v24 = KeNumberNodes;
              ++v31;
              i = (unsigned __int16)KeNumberNodes;
            }
            while ( v31 < (unsigned __int16)KeNumberNodes );
            v27 = v64;
          }
        }
        ++v27;
        i = v24;
      }
      v46 = v24;
      v47 = 0;
      if ( v24 )
      {
        do
        {
          v48 = 0;
          v49 = v46 * *(unsigned __int16 *)(KeNodeBlock[v47] + 148);
          if ( v46 )
          {
            v50 = v73;
            v51 = KeNodeBlock;
            do
            {
              v52 = *v51;
              *((_DWORD *)v50 - 2) = v48;
              if ( v52 )
              {
                v53 = *((_QWORD *)KiActualNodeCost + v49 + (unsigned int)*(unsigned __int16 *)(v52 + 146));
                *v50 = v53;
                if ( !v53 )
                  *v50 = 1LL;
              }
              else
              {
                *v50 = -1LL;
              }
              ++v48;
              ++v51;
              v50 += 2;
            }
            while ( v48 < v46 );
          }
          v54 = (unsigned __int16)KeNumberNodes;
          v73[2 * v47] = 0LL;
          qsort(Base, v54, 0x10uLL, MiNodeCostSort);
          v55 = KeNumberNodes;
          v56 = 0;
          for ( j = (unsigned __int16)KeNumberNodes;
                v56 < (unsigned __int16)KeNumberNodes;
                j = (unsigned __int16)KeNumberNodes )
          {
            v58 = 2LL * v56;
            v59 = v56 + v47 * j;
            ++v56;
            *((_WORD *)KiNodeGraph + v59) = Base[4 * v58];
            v55 = KeNumberNodes;
          }
          ++v47;
          v46 = v55;
        }
        while ( v47 < v55 );
      }
      goto LABEL_2;
    }
    while ( 1 )
    {
      v5 = KeNodeBlock[v3];
      if ( (HvlEnlightenments & 0x800) != 0 )
      {
        v6 = 0;
        if ( v4 )
        {
          do
          {
            v67 = 0LL;
            HvlQueryNumaDistance(v3, v6, &v67);
            v7 = v3 * (unsigned __int16)KeNumberNodes;
            if ( v67 == -1 )
              *((_QWORD *)KiActualNodeCost + v6 + v7) = -1LL;
            else
              *((_QWORD *)KiActualNodeCost + v6 + v7) = (unsigned __int64)(v67 << 9) >> 10;
            ++v6;
          }
          while ( v6 < (unsigned __int16)KeNumberNodes );
LABEL_49:
          v2 = v61;
        }
      }
      else
      {
        v8 = *(_WORD *)(v5 + 146);
        if ( v8 == *(_WORD *)(v5 + 148) )
        {
          if ( *(_QWORD *)(v5 + 136) )
          {
            v9 = v3;
          }
          else
          {
            v9 = 0;
            if ( v4 )
            {
              v10 = KeNodeBlock;
              do
              {
                v5 = *v10;
                if ( *(_WORD *)(*v10 + 148) == v8 && *(_QWORD *)(v5 + 136) )
                  break;
                ++v9;
                ++v10;
              }
              while ( v9 < v4 );
            }
            if ( v9 == v4 )
              goto LABEL_50;
          }
          Affinity_8.Group = *(_WORD *)(v5 + 144);
          Affinity_8.Mask = *(_QWORD *)(v5 + 136) & (*(_QWORD *)(v5 + 136) ^ (*(_QWORD *)(v5 + 136) - 1LL));
          if ( v2 )
          {
            p_PreviousAffinity = 0LL;
          }
          else
          {
            v61 = 1;
            p_PreviousAffinity = &PreviousAffinity;
          }
          KeSetSystemGroupAffinityThread(&Affinity_8, p_PreviousAffinity);
          v12 = 0;
          if ( KeNumberNodes )
          {
            do
            {
              PartitionNodePagesForMdl = (struct _MDL *)MmAllocatePartitionNodePagesForMdlEx(
                                                          0,
                                                          Affinity,
                                                          0LL,
                                                          0x1000uLL,
                                                          0,
                                                          v12,
                                                          7,
                                                          0LL);
              v14 = PartitionNodePagesForMdl;
              if ( PartitionNodePagesForMdl )
              {
                v16 = (char *)MmMapLockedPagesSpecifyCache(
                                PartitionNodePagesForMdl,
                                0,
                                MmNonCached,
                                0LL,
                                0,
                                0x40000020u);
                if ( v16 )
                {
                  CurrentIrql = KeGetCurrentIrql();
                  __writecr8(2uLL);
                  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu )
                  {
                    SchedulerAssist = KeGetCurrentPrcb()->SchedulerAssist;
                    SchedulerAssist[5] |= (-1 << (CurrentIrql + 1)) & 4;
                  }
                  v18 = v16 + 4096;
                  v66 = __rdtsc();
                  while ( v16 < v18 )
                    v16 += 8;
                  v70 = __rdtsc();
                  v19 = v70;
                  if ( KiIrqlFlags )
                  {
                    if ( (KiIrqlFlags & 1) != 0 )
                    {
                      v20 = KeGetCurrentIrql();
                      if ( v20 <= 0xFu && CurrentIrql <= 0xFu && v20 >= 2u )
                      {
                        CurrentPrcb = KeGetCurrentPrcb();
                        SchedulerAssist = CurrentPrcb->SchedulerAssist;
                        v22 = ~(unsigned __int16)(-1LL << (CurrentIrql + 1));
                        v23 = (v22 & SchedulerAssist[5]) == 0;
                        SchedulerAssist[5] &= v22;
                        if ( v23 )
                        {
                          KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
                          v19 = v70;
                        }
                      }
                    }
                  }
                  __writecr8(CurrentIrql);
                  *((_QWORD *)KiActualNodeCost + v12 + v9 * (unsigned __int16)KeNumberNodes) = v19 - v66;
                }
                MiFreePagesFromMdl((ULONG_PTR)v14, 0, (__int64)SchedulerAssist);
                ExFreePoolWithTag(v14, 0);
              }
              ++v12;
            }
            while ( v12 < (unsigned __int16)KeNumberNodes );
            v3 = v63;
          }
          goto LABEL_49;
        }
      }
LABEL_50:
      v63 = ++v3;
      v4 = (unsigned __int16)KeNumberNodes;
      if ( v3 >= (unsigned __int16)KeNumberNodes )
      {
        if ( v2 == 1 )
          KeRevertToUserGroupAffinityThread(&PreviousAffinity);
        goto LABEL_53;
      }
    }
  }
LABEL_2:
  LOBYTE(PoolWithTag) = 1;
  return (char)PoolWithTag;
}
