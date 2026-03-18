/*
 * XREFs of KiSearchForNewThread @ 0x140343DC0
 * Callers:
 *     KiIdleSchedule @ 0x140343C60 (KiIdleSchedule.c)
 * Callees:
 *     KiGetThreadEffectiveRankNonZero @ 0x1402103E0 (KiGetThreadEffectiveRankNonZero.c)
 *     KiSelectThreadFromSchedulingGroup @ 0x14021087C (KiSelectThreadFromSchedulingGroup.c)
 *     KiCheckThreadAffinity @ 0x140290B74 (KiCheckThreadAffinity.c)
 *     KiSetVpThreadSpinLockCount @ 0x1402B1050 (KiSetVpThreadSpinLockCount.c)
 *     KiSelectReadyThread @ 0x1402B4AE0 (KiSelectReadyThread.c)
 *     KeYieldProcessorEx @ 0x1402F32E0 (KeYieldProcessorEx.c)
 *     KiEnterDeferredReadyState @ 0x1402F69A0 (KiEnterDeferredReadyState.c)
 *     KiFlushSoftwareInterruptBatch @ 0x140340300 (KiFlushSoftwareInterruptBatch.c)
 *     KiDeferredReadySingleThread @ 0x1403405E0 (KiDeferredReadySingleThread.c)
 *     KiSearchForNewThreadOnSubNode @ 0x1403441B0 (KiSearchForNewThreadOnSubNode.c)
 *     KiSetProcessorIdle @ 0x14035C560 (KiSetProcessorIdle.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x140418E4C (KiRemoveSystemWorkPriorityKick.c)
 *     KiSetSchedulerAssistPriority @ 0x14045B7FC (KiSetSchedulerAssistPriority.c)
 */

__int64 __fastcall KiSearchForNewThread(__int64 a1, char a2)
{
  __int64 v2; // r8
  __int64 ready; // rdi
  __int64 v6; // r8
  __int64 v7; // rcx
  __int64 v8; // rax
  BOOL v9; // ebp
  char v10; // al
  BOOL v11; // edi
  __int64 v12; // rdi
  __int64 result; // rax
  __int64 v14; // rax
  unsigned int v15; // edi
  int v16; // eax
  __int64 v17; // rcx
  __int64 v18; // rdx
  __int64 v19; // rdx
  __int64 v20; // rcx
  __int64 v21; // rcx
  __int64 v22; // r8
  _BYTE *v23; // r15
  char v24; // cl
  char v25; // al
  __int64 v26; // rcx
  __int64 v27; // r8
  __int64 v28; // rdx
  __int64 v29; // rdx
  __int64 v30; // rbp
  unsigned __int64 v31; // rcx
  __int64 v32; // rcx
  __int64 v33; // rax
  unsigned __int64 v34; // rcx
  unsigned __int64 v35; // rax
  __int64 v36; // rcx
  struct _KPRCB *CurrentPrcb; // rcx
  _DWORD *SchedulerAssist; // rdx
  int v39; // eax
  _QWORD *v40; // rdi
  char v41; // r15
  __int64 v42; // rdx
  __int64 v43; // r8
  __int64 v44; // r9
  struct _KPRCB *v45; // rdi
  _DWORD *v46; // rcx
  int v47; // eax
  _DWORD *v48; // rcx
  int v49; // eax
  _DWORD *v50; // rcx
  int v51; // eax
  __int64 v52; // r8
  __int64 v53; // rdi
  _BYTE *v54; // r14
  __int64 v55; // rdx
  __int64 v56; // rdx
  int ThreadEffectiveRankNonZero; // eax
  char v58; // cl
  char v59; // al
  __int64 v60; // rcx
  __int64 v61; // rdx
  __int64 v62; // r8
  unsigned int v63; // edx
  char v64; // al
  char v65; // al
  char v66; // cl
  __int64 v67; // rdx
  unsigned int v68; // edx
  char v69; // al
  char v70; // al
  char v71; // cl
  _QWORD v72[11]; // [rsp+30h] [rbp-58h] BYREF
  int v73; // [rsp+A0h] [rbp+18h] BYREF

  v2 = *(_QWORD *)(a1 + 16);
  memset(&v72[1], 0, 24);
  if ( v2 )
  {
LABEL_37:
    *(_QWORD *)(a1 + 16) = 0LL;
    *(_QWORD *)(a1 + 8) = v2;
    if ( *(_BYTE *)(v2 + 388) == 1 )
      *(_DWORD *)(v2 + 132) = *(_DWORD *)(v2 + 132) - *(_DWORD *)(v2 + 436) + MEMORY[0xFFFFF78000000320];
    *(_BYTE *)(v2 + 388) = 2;
    return v2;
  }
  while ( 1 )
  {
    ready = KiSelectReadyThread(1, a1, 0LL);
    if ( ready )
      goto LABEL_26;
    if ( KiPerfIsoEnabled )
    {
      v31 = *(_QWORD *)(*(_QWORD *)(a1 + 192) + 8LL)
          - ((*(_QWORD *)(*(_QWORD *)(a1 + 192) + 8LL) >> 1) & 0x5555555555555555LL);
      if ( (unsigned int)((0x101010101010101LL
                         * (((v31 & 0x3333333333333333LL)
                           + ((v31 >> 2) & 0x3333333333333333LL)
                           + (((v31 & 0x3333333333333333LL) + ((v31 >> 2) & 0x3333333333333333LL)) >> 4)) & 0xF0F0F0F0F0F0F0FLL)) >> 32) >> 24 < KiPerfIsoEnabled )
        break;
      v32 = *(_QWORD *)(a1 + 200);
      v33 = *(_QWORD *)(a1 + 34912);
      if ( v32 != v33 )
      {
        v34 = v33 & ~v32;
        if ( (*(_QWORD *)(*(_QWORD *)(a1 + 192) + 40LL) & v34) == 0 )
        {
          _BitScanForward64(&v35, v34);
          if ( (*(_DWORD *)(KiProcessorBlock[KiProcessorNumberToIndexMappingTable[64 * *(unsigned __int8 *)(a1 + 208)
                                                                                + (unsigned int)v35]]
                          + 236) & 0x400) == 0 )
            break;
        }
      }
    }
    ready = 0LL;
    v7 = *(_QWORD *)(a1 + 32568);
    if ( (v7 & 1) != 0 )
    {
      if ( v7 == 1 )
        break;
      v8 = v7 ^ ((a1 + 32560) | 1);
    }
    else
    {
      v8 = *(_QWORD *)(a1 + 32568);
    }
    while ( v8 )
    {
      v30 = v8 - 88;
      ready = KiSelectThreadFromSchedulingGroup(a1, v8 - 88, 0);
      if ( ready )
        break;
      v36 = *(_QWORD *)(v30 + 400);
      if ( (v36 & 1) != 0 )
      {
        if ( v36 == 1 )
          goto LABEL_8;
        v8 = v36 ^ ((v30 + 392) | 1);
      }
      else
      {
        v8 = *(_QWORD *)(v30 + 400);
      }
    }
    if ( !ready )
      break;
LABEL_26:
    if ( KiCheckThreadAffinity(ready) )
    {
      v23 = *(_BYTE **)(a1 + 56);
      if ( (*(_BYTE *)(ready + 2) & 4) != 0
        && *(char *)(ready + 195) < 16
        && *(_QWORD *)(ready + 104)
        && (v28 = *(_QWORD *)(ready + 104)) != 0
        && (v29 = *(unsigned int *)(a1 + 216) + v28) != 0
        && (unsigned int)KiGetThreadEffectiveRankNonZero(v21, v29, v22, 0, 0LL) )
      {
        v24 = 1;
      }
      else
      {
        v24 = *(_BYTE *)(ready + 195);
      }
      v25 = v24 & 0x7F | (*(_BYTE *)(ready + 119) << 7);
      *v23 = v25;
      v26 = *(_QWORD *)(a1 + 35000);
      if ( v26 )
      {
        if ( ready == *(_QWORD *)(a1 + 24) )
          v67 = (unsigned int)KiVpThreadSystemWorkPriority;
        else
          v67 = v25 & 0x7F;
        KiSetSchedulerAssistPriority(v26, v67, 0LL);
      }
      v27 = *(_QWORD *)(a1 + 56);
      if ( KeHeteroSystem )
      {
        v68 = *(_DWORD *)(ready + 80);
        v69 = (*(_BYTE *)(v27 + 64) ^ *(_BYTE *)(ready + 512)) & 7 ^ *(_BYTE *)(v27 + 64);
        v70 = (v69 ^ (8 * *(_BYTE *)(ready + 516))) & 0x38 ^ v69;
        if ( v68 <= *(_DWORD *)(ready + 84) )
          v68 = *(_DWORD *)(ready + 84);
        v71 = 64;
        if ( v68 < KiDynamicHeteroCpuPolicyExpectedCycles )
          v71 = 0;
        *(_BYTE *)(v27 + 64) = v71 | v70 & 0xBF;
      }
      *(_QWORD *)(a1 + 8) = ready;
      if ( *(_BYTE *)(ready + 388) == 1 )
        *(_DWORD *)(ready + 132) = *(_DWORD *)(ready + 132) - *(_DWORD *)(ready + 436) + MEMORY[0xFFFFF78000000320];
      *(_BYTE *)(ready + 388) = 2;
      if ( a2 )
        KiSetProcessorIdle(a1, 0LL, 0LL);
      if ( (*(_BYTE *)(a1 + 35) & 1) != 0 )
        return ready;
LABEL_25:
      __fastfail(0x21u);
    }
    KiEnterDeferredReadyState(v21);
    _InterlockedAnd64((volatile signed __int64 *)(a1 + 48), 0LL);
    CurrentPrcb = KeGetCurrentPrcb();
    SchedulerAssist = CurrentPrcb->SchedulerAssist;
    if ( SchedulerAssist )
    {
      if ( CurrentPrcb->NestingLevel <= 1u )
      {
        v39 = SchedulerAssist[6] - 1;
        SchedulerAssist[6] = v39;
        if ( !v39 )
          KiRemoveSystemWorkPriorityKick(CurrentPrcb);
      }
    }
    v40 = (_QWORD *)(ready + 216);
    v72[0] = 0LL;
    v41 = 0;
    *v40 = 0LL;
    do
    {
      KiDeferredReadySingleThread(a1, (ULONG_PTR)(v40 - 27), (__int64)v72);
      v40 = (_QWORD *)v72[0];
      ++v41;
      if ( v72[0] )
        v72[0] = *(_QWORD *)v72[0];
      if ( (v41 & 0xF) == 0 )
        KiFlushSoftwareInterruptBatch((unsigned __int8 *)(a1 + 12760));
    }
    while ( v40 );
    KiFlushSoftwareInterruptBatch((unsigned __int8 *)(a1 + 12760));
    v45 = KeGetCurrentPrcb();
    v73 = 0;
    v46 = v45->SchedulerAssist;
    if ( v46 )
    {
      if ( v45->NestingLevel <= 1u )
      {
        v47 = v46[6];
        v46[6] = v47 + 1;
        if ( v47 == -1 )
LABEL_72:
          KiRemoveSystemWorkPriorityKick(v45);
      }
    }
    while ( _interlockedbittestandset64((volatile signed __int32 *)(a1 + 48), 0LL) )
    {
      v48 = v45->SchedulerAssist;
      if ( v48 )
      {
        if ( v45->NestingLevel <= 1u )
        {
          v49 = v48[6] - 1;
          v48[6] = v49;
          if ( !v49 )
            KiRemoveSystemWorkPriorityKick(v45);
        }
      }
      do
        KeYieldProcessorEx(&v73, v42, v43, v44);
      while ( *(_QWORD *)(a1 + 48) );
      v50 = v45->SchedulerAssist;
      if ( v50 )
      {
        if ( v45->NestingLevel <= 1u )
        {
          v51 = v50[6];
          v50[6] = v51 + 1;
          if ( v51 == -1 )
            goto LABEL_72;
        }
      }
    }
    if ( a2 && *(_QWORD *)(a1 + 16) == *(_QWORD *)(a1 + 24) )
      *(_QWORD *)(a1 + 16) = 0LL;
    v2 = *(_QWORD *)(a1 + 16);
    if ( v2 )
      goto LABEL_37;
  }
LABEL_8:
  ready = KiSelectReadyThread(0, a1, v6);
  if ( ready )
    goto LABEL_26;
  v9 = *(_BYTE *)(a1 + 35) == 7;
  if ( !a2 )
  {
    KiSetProcessorIdle(a1, 1LL, 0LL);
    v53 = *(_QWORD *)(a1 + 24);
    v54 = *(_BYTE **)(a1 + 56);
    if ( (*(_BYTE *)(v53 + 2) & 4) == 0
      || *(char *)(v53 + 195) >= 16
      || !*(_QWORD *)(v53 + 104)
      || (v55 = *(_QWORD *)(v53 + 104)) == 0
      || (v56 = *(unsigned int *)(a1 + 216) + v55) == 0
      || (ThreadEffectiveRankNonZero = KiGetThreadEffectiveRankNonZero(v53, v56, v52, 0, 0LL),
          v58 = 1,
          !ThreadEffectiveRankNonZero) )
    {
      v58 = *(_BYTE *)(v53 + 195);
    }
    v59 = v58 & 0x7F | (*(_BYTE *)(v53 + 119) << 7);
    *v54 = v59;
    v60 = *(_QWORD *)(a1 + 35000);
    if ( v60 )
    {
      if ( v53 == *(_QWORD *)(a1 + 24) )
        v61 = (unsigned int)KiVpThreadSystemWorkPriority;
      else
        v61 = v59 & 0x7F;
      KiSetSchedulerAssistPriority(v60, v61, 0LL);
    }
    v62 = *(_QWORD *)(a1 + 56);
    if ( KeHeteroSystem )
    {
      v63 = *(_DWORD *)(v53 + 80);
      v64 = (*(_BYTE *)(v62 + 64) ^ *(_BYTE *)(v53 + 512)) & 7 ^ *(_BYTE *)(v62 + 64);
      v65 = (v64 ^ (8 * *(_BYTE *)(v53 + 516))) & 0x38 ^ v64;
      if ( v63 <= *(_DWORD *)(v53 + 84) )
        v63 = *(_DWORD *)(v53 + 84);
      v66 = 64;
      if ( v63 < KiDynamicHeteroCpuPolicyExpectedCycles )
        v66 = 0;
      *(_BYTE *)(v62 + 64) = v66 | v65 & 0xBF;
    }
  }
  v10 = *(_BYTE *)(a1 + 35);
  if ( (v10 & 1) != 0 )
    goto LABEL_25;
  v11 = (v10 & 2) != 0;
  _InterlockedAnd64((volatile signed __int64 *)(a1 + 48), 0LL);
  KiSetVpThreadSpinLockCount((__int64)KeGetCurrentPrcb(), 0);
  if ( v11 && !v9 )
    return 0LL;
  v12 = *(_QWORD *)(a1 + 192);
  result = KiSearchForNewThreadOnSubNode(a1);
  if ( !result )
  {
    v14 = *(unsigned __int16 *)(v12 + 138);
    LODWORD(v72[1]) = *(unsigned __int16 *)(v12 + 138);
    *(_OWORD *)((char *)&v72[1] + 4) = 0LL;
    v72[2] = KeNodeBlock[v14];
    v15 = *(_DWORD *)(v72[2] + 16LL);
    while ( 1 )
    {
      while ( !v15 )
      {
        v16 = HIDWORD(v72[1]) + 1;
        HIDWORD(v72[1]) = v16;
        if ( v16 == (unsigned __int16)KeNumberNodes )
          return 0LL;
        v19 = *(unsigned int *)(qword_140C506D8
                              + 4LL * (v16 + LODWORD(v72[1]) * (unsigned int)(unsigned __int16)KeNumberNodes));
        if ( (_DWORD)v19 == -1 )
          return 0LL;
        v20 = KeNodeBlock[v19];
        v72[3] = 0LL;
        v72[2] = v20;
        v15 = *(_DWORD *)(v20 + 16);
      }
      _BitScanForward((unsigned int *)&v17, v15);
      v15 &= ~(1 << v17);
      v18 = *(_QWORD *)(v72[2] + 8 * v17 + 24);
      if ( !v18 )
        return 0LL;
      if ( v18 != *(_QWORD *)(a1 + 192) )
      {
        result = KiSearchForNewThreadOnSubNode(a1);
        if ( result )
          break;
      }
    }
  }
  return result;
}
