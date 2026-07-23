/*
 * XREFs of KiGroupSchedulingGenerationEnd @ 0x14027AF4C
 * Callers:
 *     KiGroupSchedulingQuantumEnd @ 0x140279D50 (KiGroupSchedulingQuantumEnd.c)
 *     KeTransitionProcessorParkState @ 0x1405256EC (KeTransitionProcessorParkState.c)
 * Callees:
 *     KiAddThreadToPrcbQueue @ 0x140214370 (KiAddThreadToPrcbQueue.c)
 *     KiSetProcessorIdle @ 0x14027878C (KiSetProcessorIdle.c)
 *     KiTransitionSchedulingGroupGeneration @ 0x14027B260 (KiTransitionSchedulingGroupGeneration.c)
 *     KiEndThreadCycleAccumulation @ 0x1402D28D0 (KiEndThreadCycleAccumulation.c)
 *     KiStartThreadCycleAccumulation @ 0x1402D5AB0 (KiStartThreadCycleAccumulation.c)
 *     KiIsThreadRankNonZero @ 0x1402F1CA0 (KiIsThreadRankNonZero.c)
 *     KiSelectReadyThread @ 0x140352650 (KiSelectReadyThread.c)
 *     KiSetSchedulerAssistPriority @ 0x140520B94 (KiSetSchedulerAssistPriority.c)
 */

__int64 __fastcall KiGroupSchedulingGenerationEnd(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v3; // rsi
  char v4; // di
  __int64 v5; // r14
  __int64 result; // rax
  __int64 v9; // r8
  __int64 v10; // rdi
  int v11; // ebp
  __int64 v12; // rcx
  __int64 ready; // rax
  __int64 v14; // rdi
  __int64 v15; // rax
  char v16; // cl
  int v17; // r8d
  char v18; // cl
  __int64 v19; // rax
  bool v20; // zf
  char v21; // r8
  int v22; // edx
  char v23; // al
  char IsThreadRankNonZero; // al
  __int64 v25; // rdx
  __int64 v26; // rdx

  v3 = *(_QWORD *)(a1 + 8);
  v4 = a3;
  v5 = *(_QWORD *)(a1 + 24);
  if ( !(_BYTE)a3 )
  {
    _disable();
    KiEndThreadCycleAccumulation(a1, *(_QWORD *)(a1 + 8), 0LL);
    _enable();
  }
  LOBYTE(a3) = v4;
  result = KiTransitionSchedulingGroupGeneration(a1, a2, a3);
  if ( !v4 )
  {
    v10 = *(_QWORD *)(a1 + 16);
    v11 = 0;
    if ( v10 )
    {
      if ( v10 == *(_QWORD *)(a1 + 24) )
        goto LABEL_9;
      *(_QWORD *)(a1 + 16) = 0LL;
      if ( (*(_BYTE *)(v3 + 2) & 4) == 0
        || (IsThreadRankNonZero = KiIsThreadRankNonZero(v3, a1), v16 = 1, !IsThreadRankNonZero) )
      {
        v16 = *(_BYTE *)(v3 + 195);
      }
      **(_BYTE **)(a1 + 56) = v16;
      if ( *(_QWORD *)(a1 + 33976) )
      {
        v25 = (unsigned int)KiVpThreadSystemWorkPriority;
        if ( v3 != *(_QWORD *)(a1 + 24) )
          v25 = (unsigned int)v16;
        KiSetSchedulerAssistPriority(*(_QWORD *)(a1 + 33976), v25, 0LL);
      }
      *(_BYTE *)(v10 + 388) = 1;
      v17 = *(char *)(v10 + 195);
      *(_DWORD *)(v10 + 436) = MEMORY[0xFFFFF78000000320];
      KiAddThreadToPrcbQueue(a1, v10, v17, 1, 0);
      v11 = 1;
    }
    if ( v10 == *(_QWORD *)(a1 + 24) )
      goto LABEL_9;
    if ( v3 == v5 )
    {
      v12 = 0LL;
    }
    else
    {
      v12 = (unsigned int)(*(char *)(v3 + 195) + 1);
      if ( (int)v12 > 31 )
        goto LABEL_9;
    }
    ready = KiSelectReadyThread(v12, a1);
    v14 = ready;
    if ( ready )
    {
      if ( (*(_BYTE *)(ready + 2) & 4) != 0 )
      {
        v23 = KiIsThreadRankNonZero(ready, a1);
        v18 = 1;
        if ( !v23 )
          v18 = *(_BYTE *)(v14 + 195);
      }
      else
      {
        v18 = *(_BYTE *)(ready + 195);
      }
      **(_BYTE **)(a1 + 56) = v18;
      v19 = *(_QWORD *)(a1 + 33976);
      if ( v19 )
      {
        v26 = (unsigned int)KiVpThreadSystemWorkPriority;
        if ( v14 != *(_QWORD *)(a1 + 24) )
          v26 = (unsigned int)v18;
        KiSetSchedulerAssistPriority(*(_QWORD *)(a1 + 33976), v26, 0LL);
        v19 = *(_QWORD *)(a1 + 33976);
      }
      v20 = v14 == *(_QWORD *)(a1 + 24);
      *(_QWORD *)(a1 + 16) = v14;
      if ( v19 )
        *(_BYTE *)(v19 + 16) = v20;
      if ( *(_BYTE *)(v14 + 388) == 1 )
        *(_DWORD *)(v14 + 132) = *(_DWORD *)(v14 + 132) - *(_DWORD *)(v14 + 436) + MEMORY[0xFFFFF78000000320];
      *(_BYTE *)(v14 + 388) = 3;
      --v11;
    }
LABEL_9:
    if ( v3 != v5 )
    {
LABEL_10:
      _disable();
      LOBYTE(v9) = v3 == v5;
      result = KiStartThreadCycleAccumulation(a1, v3, v9);
      _enable();
      return result;
    }
    if ( v11 > 0 )
    {
      if ( (*(_BYTE *)(a1 + 35) & 1) != 0 )
      {
        v21 = 1;
        v22 = 1;
LABEL_36:
        KiSetProcessorIdle(a1, v22, v21);
      }
    }
    else if ( v11 < 0 && (*(_BYTE *)(a1 + 35) & 1) == 0 )
    {
      v21 = 0;
      v22 = 0;
      goto LABEL_36;
    }
    v15 = *(_QWORD *)(a1 + 16);
    if ( !v15 || v15 == *(_QWORD *)(a1 + 24) )
    {
      if ( (*(_BYTE *)(a1 + 35) & 1) == 0 )
        goto LABEL_10;
    }
    else if ( (*(_BYTE *)(a1 + 35) & 1) != 0 )
    {
      goto LABEL_10;
    }
    __fastfail(0x1Eu);
  }
  return result;
}
