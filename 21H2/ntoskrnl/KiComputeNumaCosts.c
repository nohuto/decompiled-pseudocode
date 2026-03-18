/*
 * XREFs of KiComputeNumaCosts @ 0x140B31500
 * Callers:
 *     KeInitSystem @ 0x140B03800 (KeInitSystem.c)
 * Callees:
 *     MiFreePagesFromMdl @ 0x140221A30 (MiFreePagesFromMdl.c)
 *     KeGetNodePrimarySubNode @ 0x140264270 (KeGetNodePrimarySubNode.c)
 *     KiQuerySubNodeActiveAffinity @ 0x14026428C (KiQuerySubNodeActiveAffinity.c)
 *     MmAllocatePartitionNodePagesForMdlEx @ 0x140264F60 (MmAllocatePartitionNodePagesForMdlEx.c)
 *     MmMapLockedPagesSpecifyCache @ 0x140308CD0 (MmMapLockedPagesSpecifyCache.c)
 *     KeRevertToUserGroupAffinityThread @ 0x14035BE00 (KeRevertToUserGroupAffinityThread.c)
 *     KeSetSystemGroupAffinityThread @ 0x14035BFE0 (KeSetSystemGroupAffinityThread.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     qsort @ 0x1403E1E70 (qsort.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x140418E4C (KiRemoveSystemWorkPriorityKick.c)
 *     memset @ 0x140435E00 (memset.c)
 *     HvlQueryNumaDistance @ 0x140543B40 (HvlQueryNumaDistance.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x140A6E910 (ExAllocatePoolWithTag.c)
 *     KiGetHalNumaConversionFactor @ 0x140B50E14 (KiGetHalNumaConversionFactor.c)
 */

char KiComputeNumaCosts()
{
  char *PoolWithTag; // rax
  __int64 v1; // rsi
  int v2; // r9d
  unsigned int v3; // esi
  unsigned int v4; // ecx
  __int64 v5; // rdx
  unsigned int v6; // edi
  int v7; // ecx
  __int16 v8; // r8
  unsigned int v9; // edi
  __int64 *v10; // rax
  __int64 NodePrimarySubNode; // rax
  int v12; // r9d
  struct _GROUP_AFFINITY *p_PreviousAffinity_8; // rdx
  unsigned int v14; // r14d
  struct _MDL *PartitionNodePagesForMdl; // rax
  struct _MDL *v16; // r12
  char *v17; // r10
  unsigned __int8 CurrentIrql; // r15
  _DWORD *SchedulerAssist; // r9
  char *v20; // rcx
  unsigned __int64 v21; // r13
  unsigned __int8 v22; // cl
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *v24; // r9
  int v25; // eax
  bool v26; // zf
  unsigned __int16 v27; // cx
  int v28; // r8d
  unsigned int v29; // esi
  int v30; // edx
  unsigned __int16 *v31; // r9
  int v32; // eax
  unsigned int v33; // r14d
  int v34; // r13d
  unsigned __int16 *v35; // rsi
  unsigned __int16 *v36; // rcx
  int v37; // eax
  _QWORD *v38; // r15
  int v39; // r9d
  __int64 v40; // rax
  __int64 v41; // r12
  int v42; // ecx
  __int64 v43; // r11
  __int64 v44; // r10
  unsigned int v45; // edi
  __int64 HalNumaConversionFactor; // rax
  unsigned __int64 v47; // r10
  unsigned __int64 v48; // rcx
  unsigned int v49; // r9d
  unsigned int j; // edi
  unsigned int v51; // r10d
  int v52; // r14d
  _QWORD *v53; // r8
  __int64 *v54; // rsi
  unsigned __int16 *v55; // rax
  __int64 v56; // rdx
  size_t v57; // rdx
  unsigned int k; // r10d
  __int16 v59; // dx
  __int64 v60; // rax
  unsigned int v62; // [rsp+48h] [rbp-C0h]
  unsigned int i; // [rsp+48h] [rbp-C0h]
  int v64; // [rsp+4Ch] [rbp-BCh]
  int v65[2]; // [rsp+50h] [rbp-B8h] BYREF
  unsigned __int64 v66; // [rsp+58h] [rbp-B0h] BYREF
  unsigned __int64 Affinity; // [rsp+60h] [rbp-A8h]
  struct _GROUP_AFFINITY Affinity_8; // [rsp+68h] [rbp-A0h] BYREF
  struct _GROUP_AFFINITY PreviousAffinity_8; // [rsp+78h] [rbp-90h] BYREF
  _WORD Base[4]; // [rsp+88h] [rbp-80h] BYREF
  _QWORD v71[127]; // [rsp+90h] [rbp-78h] BYREF

  PreviousAffinity_8 = 0LL;
  if ( (unsigned __int16)KeNumberNodes > 1u )
  {
    v1 = (unsigned __int16)KeNumberNodes * (unsigned int)(unsigned __int16)KeNumberNodes;
    PoolWithTag = (char *)ExAllocatePoolWithTag(NonPagedPoolNx, 10 * v1, 0x634E654Bu);
    KiActualNodeCost = PoolWithTag;
    if ( !PoolWithTag )
      return (char)PoolWithTag;
    KiNodeGraph = &PoolWithTag[8 * v1];
    if ( (_DWORD)v1 )
      memset(PoolWithTag, -1, 8 * v1);
    v65[0] = -1;
    v65[1] = -1;
    v2 = 0;
    v64 = 0;
    v3 = 0;
    v62 = 0;
    v4 = (unsigned __int16)KeNumberNodes;
    Affinity_8 = 0LL;
    if ( !KeNumberNodes )
    {
LABEL_53:
      v27 = KeNumberNodes;
      v28 = 0;
      v66 = 0LL;
      v29 = 0;
      v65[0] = 0;
      v30 = (unsigned __int16)KeNumberNodes;
      for ( i = 0; v29 < v27; i = v29 )
      {
        v31 = (unsigned __int16 *)KeNodeBlock[v29];
        v32 = *v31;
        if ( (_WORD)v32 == v31[1] )
        {
          v33 = 0;
          v34 = v30 * v32;
          if ( v30 )
          {
            v35 = (unsigned __int16 *)KeNodeBlock[v29];
            do
            {
              v36 = (unsigned __int16 *)KeNodeBlock[v33];
              v37 = *v36;
              if ( (_WORD)v37 == v36[1] )
              {
                v38 = KiActualNodeCost;
                v39 = *v36;
                v40 = (unsigned int)(v34 + v37);
                v41 = (unsigned int)v40;
                if ( *((_QWORD *)KiActualNodeCost + v40) == -1LL )
                {
                  v42 = *v35;
                  v43 = (unsigned int)(v42 + v30 * v39);
                  v44 = *((_QWORD *)KiActualNodeCost + v43);
                  if ( v44 == -1 )
                  {
                    v45 = *((_DWORD *)KeNodeDistance + v39 + v30 * v42);
                    if ( v45 != 1 || (v45 = *((_DWORD *)KeNodeDistance + (int)v43), v45 != 1) )
                    {
                      if ( v28 )
                      {
                        v47 = v66;
                      }
                      else
                      {
                        HalNumaConversionFactor = KiGetHalNumaConversionFactor(v65);
                        v28 = v65[0];
                        v47 = HalNumaConversionFactor;
                        v66 = HalNumaConversionFactor;
                      }
                      if ( v28 == 2 )
                      {
                        v48 = v47 * v45 / 0x64;
                      }
                      else if ( v28 == 3 )
                      {
                        v48 = 100 * (unsigned __int64)v45 / v47;
                      }
                      else
                      {
                        v48 = -1LL;
                      }
                      v38[v41] = v48;
                    }
                  }
                  else
                  {
                    *((_QWORD *)KiActualNodeCost + v40) = v44;
                  }
                }
              }
              v27 = KeNumberNodes;
              ++v33;
              v30 = (unsigned __int16)KeNumberNodes;
            }
            while ( v33 < (unsigned __int16)KeNumberNodes );
            v29 = i;
          }
        }
        ++v29;
        v30 = v27;
      }
      v49 = v27;
      for ( j = 0; j < v49; ++j )
      {
        v51 = 0;
        v52 = v49 * *(unsigned __int16 *)(KeNodeBlock[j] + 2);
        if ( v49 )
        {
          v53 = v71;
          v54 = KeNodeBlock;
          do
          {
            v55 = (unsigned __int16 *)*v54;
            *((_DWORD *)v53 - 2) = v51;
            if ( v55 )
            {
              v56 = *((_QWORD *)KiActualNodeCost + v52 + (unsigned int)*v55);
              *v53 = v56;
              if ( !v56 )
                *v53 = 1LL;
            }
            else
            {
              *v53 = -1LL;
            }
            ++v51;
            ++v54;
            v53 += 2;
          }
          while ( v51 < v49 );
        }
        v57 = (unsigned __int16)KeNumberNodes;
        v71[2 * j] = 0LL;
        qsort(Base, v57, 0x10uLL, MiNodeCostSort);
        v49 = (unsigned __int16)KeNumberNodes;
        for ( k = 0; k < v49; *((_WORD *)KiNodeGraph + v60) = v59 )
        {
          v59 = Base[8 * k];
          v60 = k + j * v49;
          ++k;
        }
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
            v66 = 0LL;
            HvlQueryNumaDistance(v3, v6, (__int64 *)&v66);
            v7 = v3 * (unsigned __int16)KeNumberNodes;
            if ( v66 == -1LL )
              *((_QWORD *)KiActualNodeCost + v6 + v7) = -1LL;
            else
              *((_QWORD *)KiActualNodeCost + v6 + v7) = v66 << 9 >> 10;
            ++v6;
          }
          while ( v6 < (unsigned __int16)KeNumberNodes );
LABEL_49:
          v2 = v64;
        }
      }
      else
      {
        v8 = *(_WORD *)v5;
        if ( *(_WORD *)v5 == *(_WORD *)(v5 + 2) )
        {
          if ( *(_DWORD *)(v5 + 16) )
          {
            v9 = v3;
          }
          else
          {
            v9 = 0;
            if ( v4 )
            {
              v10 = KeNodeBlock;
              while ( 1 )
              {
                v5 = *v10;
                if ( *(_WORD *)(*v10 + 2) == v8 )
                {
                  if ( *(_DWORD *)(v5 + 16) )
                    break;
                }
                ++v9;
                ++v10;
                if ( v9 >= v4 )
                  goto LABEL_22;
              }
            }
            else
            {
LABEL_22:
              if ( v9 == v4 )
                goto LABEL_50;
            }
          }
          NodePrimarySubNode = KeGetNodePrimarySubNode(v5);
          KiQuerySubNodeActiveAffinity(NodePrimarySubNode, (__int64)&Affinity_8, 0LL);
          Affinity_8.Mask &= Affinity_8.Mask ^ (Affinity_8.Mask - 1);
          if ( v12 )
          {
            p_PreviousAffinity_8 = 0LL;
          }
          else
          {
            v64 = 1;
            p_PreviousAffinity_8 = &PreviousAffinity_8;
          }
          KeSetSystemGroupAffinityThread(&Affinity_8, p_PreviousAffinity_8);
          v14 = 0;
          if ( KeNumberNodes )
          {
            do
            {
              PartitionNodePagesForMdl = (struct _MDL *)MmAllocatePartitionNodePagesForMdlEx(
                                                          0,
                                                          v65[0],
                                                          0LL,
                                                          0x1000uLL,
                                                          0,
                                                          v14,
                                                          7,
                                                          0LL);
              v16 = PartitionNodePagesForMdl;
              if ( PartitionNodePagesForMdl )
              {
                v17 = (char *)MmMapLockedPagesSpecifyCache(
                                PartitionNodePagesForMdl,
                                0,
                                MmNonCached,
                                0LL,
                                0,
                                0x40000020u);
                if ( v17 )
                {
                  CurrentIrql = KeGetCurrentIrql();
                  __writecr8(2uLL);
                  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu )
                  {
                    SchedulerAssist = KeGetCurrentPrcb()->SchedulerAssist;
                    SchedulerAssist[5] |= (-1 << (CurrentIrql + 1)) & 4;
                  }
                  v20 = v17 + 4096;
                  Affinity = __rdtsc();
                  while ( v17 < v20 )
                    v17 += 8;
                  v21 = __rdtsc();
                  if ( KiIrqlFlags )
                  {
                    if ( (KiIrqlFlags & 1) != 0 )
                    {
                      v22 = KeGetCurrentIrql();
                      if ( v22 <= 0xFu && CurrentIrql <= 0xFu && v22 >= 2u )
                      {
                        CurrentPrcb = KeGetCurrentPrcb();
                        v24 = CurrentPrcb->SchedulerAssist;
                        v25 = ~(unsigned __int16)(-1LL << (CurrentIrql + 1));
                        v26 = (v25 & v24[5]) == 0;
                        v24[5] &= v25;
                        if ( v26 )
                          KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
                      }
                    }
                  }
                  __writecr8(CurrentIrql);
                  *((_QWORD *)KiActualNodeCost + v14 + v9 * (unsigned __int16)KeNumberNodes) = v21 - Affinity;
                }
                MiFreePagesFromMdl((ULONG_PTR)v16, 0);
                ExFreePoolWithTag(v16, 0);
              }
              ++v14;
            }
            while ( v14 < (unsigned __int16)KeNumberNodes );
            v3 = v62;
          }
          goto LABEL_49;
        }
      }
LABEL_50:
      v62 = ++v3;
      v4 = (unsigned __int16)KeNumberNodes;
      if ( v3 >= (unsigned __int16)KeNumberNodes )
      {
        if ( v2 == 1 )
          KeRevertToUserGroupAffinityThread(&PreviousAffinity_8);
        goto LABEL_53;
      }
    }
  }
LABEL_2:
  LOBYTE(PoolWithTag) = 1;
  return (char)PoolWithTag;
}
