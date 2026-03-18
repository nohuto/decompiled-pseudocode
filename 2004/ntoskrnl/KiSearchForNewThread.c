/*
 * XREFs of KiSearchForNewThread @ 0x1402EB5B4
 * Callers:
 *     KiIdleSchedule @ 0x1402EB430 (KiIdleSchedule.c)
 * Callees:
 *     KiSelectReadyThread @ 0x14020D530 (KiSelectReadyThread.c)
 *     KiReadyDeferredReadyList @ 0x140214140 (KiReadyDeferredReadyList.c)
 *     MmGetNextNode @ 0x14027E6C8 (MmGetNextNode.c)
 *     KeYieldProcessorEx @ 0x140280C50 (KeYieldProcessorEx.c)
 *     KiEnterDeferredReadyState @ 0x140281520 (KiEnterDeferredReadyState.c)
 *     KiSearchForNewThreadOnNode @ 0x1402EB808 (KiSearchForNewThreadOnNode.c)
 *     KiSetProcessorIdle @ 0x1402EBB18 (KiSetProcessorIdle.c)
 *     KiCheckThreadAffinity @ 0x1402ED834 (KiCheckThreadAffinity.c)
 *     KiIsThreadRankNonZero @ 0x1402EF550 (KiIsThreadRankNonZero.c)
 *     KiSelectThreadFromSchedulingGroup @ 0x1402F13D0 (KiSelectThreadFromSchedulingGroup.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403EDAA4 (KiRemoveSystemWorkPriorityKick.c)
 *     KiSetSchedulerAssistPriority @ 0x14051B4A4 (KiSetSchedulerAssistPriority.c)
 */

__int64 __fastcall KiSearchForNewThread(__int64 a1, char a2)
{
  __int64 v3; // r8
  __int64 ready; // rdi
  __int64 i; // rax
  __int64 v7; // rcx
  __int64 v8; // rax
  char v9; // si
  char v10; // di
  struct _KPRCB *v11; // rcx
  _DWORD *v12; // rdx
  __int64 v13; // rsi
  int v14; // ebp
  unsigned __int64 v15; // rdi
  __int64 result; // rax
  unsigned int NextNode; // eax
  unsigned __int64 v18; // rdx
  __int64 v19; // rax
  __int64 v20; // rcx
  char v21; // cl
  char IsThreadRankNonZero; // al
  __int64 v23; // rsi
  unsigned __int64 v24; // rcx
  __int64 v25; // rcx
  __int64 v26; // rax
  unsigned __int64 v27; // rcx
  unsigned __int64 v28; // rax
  __int64 v29; // r8
  __int64 v30; // r9
  struct _KPRCB *CurrentPrcb; // rcx
  _DWORD *SchedulerAssist; // rdx
  int v33; // eax
  __int64 v34; // rdx
  __int64 v35; // r8
  __int64 v36; // r9
  struct _KPRCB *v37; // rdi
  _DWORD *v38; // rcx
  int v39; // eax
  _DWORD *v40; // rcx
  int v41; // eax
  __int64 v42; // rdi
  char v43; // al
  char v44; // cl
  __int64 v45; // rdx
  int v46; // eax
  __int64 v47; // rdx
  _QWORD *v48; // [rsp+20h] [rbp-48h] BYREF
  int v49; // [rsp+80h] [rbp+18h] BYREF
  int v50; // [rsp+88h] [rbp+20h] BYREF

  v50 = 0;
  v3 = *(_QWORD *)(a1 + 16);
  if ( v3 )
  {
LABEL_32:
    *(_QWORD *)(a1 + 16) = 0LL;
    *(_QWORD *)(a1 + 8) = v3;
    if ( *(_BYTE *)(v3 + 388) == 1 )
      *(_DWORD *)(v3 + 132) = *(_DWORD *)(v3 + 132) - *(_DWORD *)(v3 + 436) + MEMORY[0xFFFFF78000000320];
    *(_BYTE *)(v3 + 388) = 2;
    return v3;
  }
  while ( 1 )
  {
    ready = KiSelectReadyThread(1, a1);
    if ( !ready )
    {
      if ( KiPerfIsoEnabled )
      {
        v24 = **(_QWORD **)(a1 + 192) - ((**(_QWORD **)(a1 + 192) >> 1) & 0x5555555555555555LL);
        if ( (unsigned int)((0x101010101010101LL
                           * (((v24 & 0x3333333333333333LL)
                             + ((v24 >> 2) & 0x3333333333333333LL)
                             + (((v24 & 0x3333333333333333LL) + ((v24 >> 2) & 0x3333333333333333LL)) >> 4)) & 0xF0F0F0F0F0F0F0FLL)) >> 32) >> 24 < KiPerfIsoEnabled )
          break;
        v25 = *(_QWORD *)(a1 + 200);
        v26 = *(_QWORD *)(a1 + 33880);
        if ( v25 != v26 )
        {
          v27 = v26 & ~v25;
          if ( (*(_QWORD *)(*(_QWORD *)(a1 + 192) + 24LL) & v27) == 0 )
          {
            _BitScanForward64(&v28, v27);
            if ( (*(_DWORD *)(KiProcessorBlock[KiProcessorNumberToIndexMappingTable[64 * *(unsigned __int8 *)(a1 + 208)
                                                                                  + (unsigned int)v28]]
                            + 236) & 0x400) == 0 )
              break;
          }
        }
      }
      ready = 0LL;
      for ( i = a1 + 31856; ; i = v23 + 392 )
      {
        v7 = *(_QWORD *)(i + 8);
        if ( (v7 & 1) != 0 )
        {
          if ( v7 == 1 )
            goto LABEL_9;
          v8 = v7 ^ (i | 1);
        }
        else
        {
          v8 = *(_QWORD *)(i + 8);
        }
        if ( !v8 )
          break;
        v23 = v8 - 88;
        ready = KiSelectThreadFromSchedulingGroup(a1, v8 - 88, 0LL);
        if ( ready )
          break;
      }
      if ( !ready )
        break;
    }
LABEL_23:
    if ( (unsigned int)KiCheckThreadAffinity(ready) )
    {
      if ( (*(_BYTE *)(ready + 2) & 4) == 0
        || (IsThreadRankNonZero = KiIsThreadRankNonZero(v20, a1), v21 = 1, !IsThreadRankNonZero) )
      {
        v21 = *(_BYTE *)(ready + 195);
      }
      **(_BYTE **)(a1 + 56) = v21;
      if ( *(_QWORD *)(a1 + 33976) )
      {
        v47 = (unsigned int)KiVpThreadSystemWorkPriority;
        if ( ready != *(_QWORD *)(a1 + 24) )
          v47 = (unsigned int)v21;
        KiSetSchedulerAssistPriority(*(_QWORD *)(a1 + 33976), v47, 0LL);
      }
      *(_QWORD *)(a1 + 8) = ready;
      if ( *(_BYTE *)(ready + 388) == 1 )
        *(_DWORD *)(ready + 132) = *(_DWORD *)(ready + 132) - *(_DWORD *)(ready + 436) + MEMORY[0xFFFFF78000000320];
      *(_BYTE *)(ready + 388) = 2;
      if ( a2 )
        KiSetProcessorIdle(a1, 0LL, 0LL);
      return ready;
    }
    KiEnterDeferredReadyState(v20);
    _InterlockedAnd64((volatile signed __int64 *)(a1 + 48), 0LL);
    CurrentPrcb = KeGetCurrentPrcb();
    SchedulerAssist = CurrentPrcb->SchedulerAssist;
    if ( SchedulerAssist )
    {
      if ( CurrentPrcb->NestingLevel <= 1u )
      {
        v33 = SchedulerAssist[6] - 1;
        SchedulerAssist[6] = v33;
        if ( !v33 )
          KiRemoveSystemWorkPriorityKick(CurrentPrcb);
      }
    }
    *(_QWORD *)(ready + 216) = 0LL;
    v48 = (_QWORD *)(ready + 216);
    KiReadyDeferredReadyList(a1, &v48, v29, v30);
    v37 = KeGetCurrentPrcb();
    v49 = 0;
    while ( 1 )
    {
      v38 = v37->SchedulerAssist;
      if ( v38 )
      {
        if ( v37->NestingLevel <= 1u )
        {
          v39 = v38[6];
          v38[6] = v39 + 1;
          if ( v39 == -1 )
            KiRemoveSystemWorkPriorityKick(v37);
        }
      }
      if ( !_interlockedbittestandset64((volatile signed __int32 *)(a1 + 48), 0LL) )
        break;
      v40 = v37->SchedulerAssist;
      if ( v40 )
      {
        if ( v37->NestingLevel <= 1u )
        {
          v41 = v40[6] - 1;
          v40[6] = v41;
          if ( !v41 )
            KiRemoveSystemWorkPriorityKick(v37);
        }
      }
      do
        KeYieldProcessorEx(&v49, v34, v35, v36);
      while ( *(_QWORD *)(a1 + 48) );
    }
    if ( a2 && *(_QWORD *)(a1 + 16) == *(_QWORD *)(a1 + 24) )
      *(_QWORD *)(a1 + 16) = 0LL;
    v3 = *(_QWORD *)(a1 + 16);
    if ( v3 )
      goto LABEL_32;
  }
LABEL_9:
  ready = KiSelectReadyThread(0, a1);
  if ( ready )
    goto LABEL_23;
  v9 = *(_BYTE *)(a1 + 35);
  if ( !a2 )
  {
    KiSetProcessorIdle(a1, 1LL, 0LL);
    v42 = *(_QWORD *)(a1 + 24);
    if ( (*(_BYTE *)(v42 + 2) & 4) == 0 || (v43 = KiIsThreadRankNonZero(*(_QWORD *)(a1 + 24), a1), v44 = 1, !v43) )
      v44 = *(_BYTE *)(v42 + 195);
    **(_BYTE **)(a1 + 56) = v44;
    if ( *(_QWORD *)(a1 + 33976) )
    {
      v45 = (unsigned int)KiVpThreadSystemWorkPriority;
      if ( v42 != *(_QWORD *)(a1 + 24) )
        v45 = (unsigned int)v44;
      KiSetSchedulerAssistPriority(*(_QWORD *)(a1 + 33976), v45, 0LL);
    }
  }
  v10 = *(_BYTE *)(a1 + 35) & 2;
  _InterlockedAnd64((volatile signed __int64 *)(a1 + 48), 0LL);
  v11 = KeGetCurrentPrcb();
  v12 = v11->SchedulerAssist;
  if ( v12 )
  {
    if ( v11->NestingLevel <= 1u )
    {
      v46 = v12[6] - 1;
      v12[6] = v46;
      if ( !v46 )
        KiRemoveSystemWorkPriorityKick(v11);
    }
  }
  if ( v10 && v9 != 7 )
    return 0LL;
  v13 = *(_QWORD *)(a1 + 192);
  v14 = *(unsigned __int16 *)(v13 + 146);
  LODWORD(v15) = *(_DWORD *)(v13 + 128);
LABEL_14:
  result = KiSearchForNewThreadOnNode(a1, v13);
  if ( !result )
  {
    v15 = (unsigned int)v15 & (unsigned __int64)~(1LL << *(_WORD *)(v13 + 146));
    if ( (_DWORD)v15 )
    {
      while ( 1 )
      {
        NextNode = MmGetNextNode(v14, &v50);
        v18 = NextNode;
        if ( NextNode == -1 )
          break;
        v19 = (unsigned int)v15;
        if ( _bittest64(&v19, v18) )
        {
          v13 = KeNodeBlock[v18];
          goto LABEL_14;
        }
      }
    }
    return 0LL;
  }
  return result;
}
