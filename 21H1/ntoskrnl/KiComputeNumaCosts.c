/*
 * XREFs of KiComputeNumaCosts @ 0x140A4027C
 * Callers:
 *     KeInitSystem @ 0x140A3F138 (KeInitSystem.c)
 * Callees:
 *     MmMapLockedPagesSpecifyCache @ 0x140274AB0 (MmMapLockedPagesSpecifyCache.c)
 *     KeSetSystemGroupAffinityThread @ 0x140336D80 (KeSetSystemGroupAffinityThread.c)
 *     KeRevertToUserGroupAffinityThread @ 0x1403374F0 (KeRevertToUserGroupAffinityThread.c)
 *     MmAllocatePartitionNodePagesForMdlEx @ 0x140342750 (MmAllocatePartitionNodePagesForMdlEx.c)
 *     MiFreePagesFromMdl @ 0x140346FD4 (MiFreePagesFromMdl.c)
 *     __security_check_cookie @ 0x1403CC020 (__security_check_cookie.c)
 *     qsort @ 0x1403CE680 (qsort.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403EC9E4 (KiRemoveSystemWorkPriorityKick.c)
 *     HvlQueryNumaDistance @ 0x1404EC880 (HvlQueryNumaDistance.c)
 *     ExFreePoolWithTag @ 0x1409B1010 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x1409B1030 (ExAllocatePoolWithTag.c)
 *     KiGetHalNumaConversionFactor @ 0x140A8F6E8 (KiGetHalNumaConversionFactor.c)
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
  char *v15; // r9
  unsigned __int8 CurrentIrql; // r12
  _DWORD *SchedulerAssist; // r8
  char *v18; // rcx
  unsigned __int64 v19; // r10
  unsigned __int8 v20; // cl
  struct _KPRCB *CurrentPrcb; // r9
  _DWORD *v22; // r8
  int v23; // eax
  bool v24; // zf
  unsigned __int16 v25; // cx
  unsigned __int64 v26; // r11
  int v27; // edi
  unsigned int v28; // r14d
  int i; // edx
  __int64 v30; // r8
  int v31; // eax
  unsigned int v32; // r15d
  int v33; // r9d
  __int64 v34; // r14
  __int64 v35; // rcx
  int v36; // eax
  _QWORD *v37; // r12
  int v38; // r8d
  __int64 v39; // rax
  __int64 v40; // r13
  int v41; // ecx
  __int64 v42; // r10
  __int64 v43; // r9
  unsigned int v44; // esi
  __int64 HalNumaConversionFactor; // rax
  unsigned __int64 v46; // rcx
  unsigned int v47; // edi
  unsigned int v48; // esi
  unsigned int v49; // r9d
  int v50; // r14d
  _QWORD *v51; // r8
  __int64 *v52; // r11
  __int64 v53; // rax
  __int64 v54; // rdx
  size_t v55; // rdx
  unsigned __int16 v56; // cx
  unsigned int v57; // edi
  int j; // edx
  __int64 v59; // rax
  __int64 v60; // rdx
  int v62; // [rsp+48h] [rbp-C0h]
  int v63; // [rsp+48h] [rbp-C0h]
  unsigned int v64; // [rsp+4Ch] [rbp-BCh]
  unsigned int v65; // [rsp+4Ch] [rbp-BCh]
  __int64 v66; // [rsp+50h] [rbp-B8h] BYREF
  unsigned __int64 v67; // [rsp+58h] [rbp-B0h]
  __int64 v68; // [rsp+60h] [rbp-A8h] BYREF
  __int64 Affinity; // [rsp+68h] [rbp-A0h]
  _GROUP_AFFINITY Affinity_8; // [rsp+70h] [rbp-98h] BYREF
  unsigned __int64 v71; // [rsp+80h] [rbp-88h]
  _GROUP_AFFINITY PreviousAffinity; // [rsp+88h] [rbp-80h] BYREF
  _WORD Base[4]; // [rsp+98h] [rbp-70h] BYREF
  _QWORD v74[127]; // [rsp+A0h] [rbp-68h] BYREF

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
    v62 = 0;
    v3 = 0;
    v64 = 0;
    v4 = (unsigned __int16)KeNumberNodes;
    Affinity_8 = 0LL;
    if ( !KeNumberNodes )
    {
LABEL_53:
      v25 = KeNumberNodes;
      v26 = 0LL;
      LODWORD(v66) = 0;
      v27 = 0;
      v65 = 0;
      v28 = 0;
      for ( i = (unsigned __int16)KeNumberNodes; v28 < v25; v65 = v28 )
      {
        v30 = KeNodeBlock[v28];
        v31 = *(unsigned __int16 *)(v30 + 146);
        if ( (_WORD)v31 == *(_WORD *)(v30 + 148) )
        {
          v32 = 0;
          v33 = i * v31;
          v63 = i * v31;
          if ( i )
          {
            v34 = KeNodeBlock[v28];
            do
            {
              v35 = KeNodeBlock[v32];
              v36 = *(unsigned __int16 *)(v35 + 146);
              if ( (_WORD)v36 == *(_WORD *)(v35 + 148) )
              {
                v37 = KiActualNodeCost;
                v38 = *(unsigned __int16 *)(v35 + 146);
                v39 = (unsigned int)(v33 + v36);
                v40 = (unsigned int)v39;
                if ( *((_QWORD *)KiActualNodeCost + v39) == -1LL )
                {
                  v41 = *(unsigned __int16 *)(v34 + 146);
                  v42 = (unsigned int)(v41 + i * v38);
                  v43 = *((_QWORD *)KiActualNodeCost + v42);
                  if ( v43 == -1 )
                  {
                    v44 = *((_DWORD *)KeNodeDistance + v38 + i * v41);
                    if ( v44 != 1 || (v44 = *((_DWORD *)KeNodeDistance + (int)v42), v44 != 1) )
                    {
                      if ( !v27 )
                      {
                        HalNumaConversionFactor = KiGetHalNumaConversionFactor(&v66);
                        v27 = v66;
                        v26 = HalNumaConversionFactor;
                      }
                      if ( v27 == 2 )
                      {
                        v46 = v26 * v44 / 0x64;
                      }
                      else if ( v27 == 3 )
                      {
                        v46 = 100 * (unsigned __int64)v44 / v26;
                      }
                      else
                      {
                        v46 = -1LL;
                      }
                      v37[v40] = v46;
                    }
                  }
                  else
                  {
                    *((_QWORD *)KiActualNodeCost + v39) = v43;
                  }
                  v33 = v63;
                }
              }
              v25 = KeNumberNodes;
              ++v32;
              i = (unsigned __int16)KeNumberNodes;
            }
            while ( v32 < (unsigned __int16)KeNumberNodes );
            v28 = v65;
          }
        }
        ++v28;
        i = v25;
      }
      v47 = v25;
      v48 = 0;
      if ( v25 )
      {
        do
        {
          v49 = 0;
          v50 = v47 * *(unsigned __int16 *)(KeNodeBlock[v48] + 148);
          if ( v47 )
          {
            v51 = v74;
            v52 = KeNodeBlock;
            do
            {
              v53 = *v52;
              *((_DWORD *)v51 - 2) = v49;
              if ( v53 )
              {
                v54 = *((_QWORD *)KiActualNodeCost + v50 + (unsigned int)*(unsigned __int16 *)(v53 + 146));
                *v51 = v54;
                if ( !v54 )
                  *v51 = 1LL;
              }
              else
              {
                *v51 = -1LL;
              }
              ++v49;
              ++v52;
              v51 += 2;
            }
            while ( v49 < v47 );
          }
          v55 = (unsigned __int16)KeNumberNodes;
          v74[2 * v48] = 0LL;
          qsort(Base, v55, 0x10uLL, MiNodeCostSort);
          v56 = KeNumberNodes;
          v57 = 0;
          for ( j = (unsigned __int16)KeNumberNodes;
                v57 < (unsigned __int16)KeNumberNodes;
                j = (unsigned __int16)KeNumberNodes )
          {
            v59 = 2LL * v57;
            v60 = v57 + v48 * j;
            ++v57;
            *((_WORD *)KiNodeGraph + v60) = Base[4 * v59];
            v56 = KeNumberNodes;
          }
          ++v48;
          v47 = v56;
        }
        while ( v48 < v56 );
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
            v68 = 0LL;
            HvlQueryNumaDistance(v3, v6, &v68);
            v7 = v3 * (unsigned __int16)KeNumberNodes;
            if ( v68 == -1 )
              *((_QWORD *)KiActualNodeCost + v6 + v7) = -1LL;
            else
              *((_QWORD *)KiActualNodeCost + v6 + v7) = (unsigned __int64)(v68 << 9) >> 10;
            ++v6;
          }
          while ( v6 < (unsigned __int16)KeNumberNodes );
LABEL_49:
          v2 = v62;
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
            v62 = 1;
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
                v15 = (char *)MmMapLockedPagesSpecifyCache(
                                PartitionNodePagesForMdl,
                                0,
                                MmNonCached,
                                0LL,
                                0,
                                0x40000020u);
                if ( v15 )
                {
                  CurrentIrql = KeGetCurrentIrql();
                  __writecr8(2uLL);
                  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu )
                  {
                    SchedulerAssist = KeGetCurrentPrcb()->SchedulerAssist;
                    SchedulerAssist[5] |= (-1 << (CurrentIrql + 1)) & 4;
                  }
                  v18 = v15 + 4096;
                  v67 = __rdtsc();
                  while ( v15 < v18 )
                    v15 += 8;
                  v71 = __rdtsc();
                  v19 = v71;
                  if ( KiIrqlFlags )
                  {
                    if ( (KiIrqlFlags & 1) != 0 )
                    {
                      v20 = KeGetCurrentIrql();
                      if ( v20 <= 0xFu && CurrentIrql <= 0xFu && v20 >= 2u )
                      {
                        CurrentPrcb = KeGetCurrentPrcb();
                        v22 = CurrentPrcb->SchedulerAssist;
                        v23 = ~(unsigned __int16)(-1LL << (CurrentIrql + 1));
                        v24 = (v23 & v22[5]) == 0;
                        v22[5] &= v23;
                        if ( v24 )
                        {
                          KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
                          v19 = v71;
                        }
                      }
                    }
                  }
                  __writecr8(CurrentIrql);
                  *((_QWORD *)KiActualNodeCost + v12 + v9 * (unsigned __int16)KeNumberNodes) = v19 - v67;
                }
                MiFreePagesFromMdl((ULONG_PTR)v14, 0);
                ExFreePoolWithTag(v14, 0);
              }
              ++v12;
            }
            while ( v12 < (unsigned __int16)KeNumberNodes );
            v3 = v64;
          }
          goto LABEL_49;
        }
      }
LABEL_50:
      v64 = ++v3;
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
