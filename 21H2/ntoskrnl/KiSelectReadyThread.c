/*
 * XREFs of KiSelectReadyThread @ 0x140352650
 * Callers:
 *     KiSearchForNewThread @ 0x140278228 (KiSearchForNewThread.c)
 *     KiSelectNextThread @ 0x1402785FC (KiSelectNextThread.c)
 *     KiQuantumEnd @ 0x140279260 (KiQuantumEnd.c)
 *     KiGroupSchedulingQuantumEnd @ 0x140279D50 (KiGroupSchedulingQuantumEnd.c)
 *     KiGroupSchedulingGenerationEnd @ 0x14027AF4C (KiGroupSchedulingGenerationEnd.c)
 *     KiChooseLowestRankedThread @ 0x14029C310 (KiChooseLowestRankedThread.c)
 *     KiSelectReadyThreadEx @ 0x1402D4710 (KiSelectReadyThreadEx.c)
 *     KiRemoveBoostThread @ 0x1402EF720 (KiRemoveBoostThread.c)
 *     KiSwapThread @ 0x140351420 (KiSwapThread.c)
 * Callees:
 *     KiRemoveThreadFromReadyQueue @ 0x14029BAB8 (KiRemoveThreadFromReadyQueue.c)
 *     KiAddThreadToScbQueue @ 0x14029D044 (KiAddThreadToScbQueue.c)
 *     KeYieldProcessorEx @ 0x1402EFAD0 (KeYieldProcessorEx.c)
 *     KiGetThreadEffectiveRankNonZero @ 0x1402F1D50 (KiGetThreadEffectiveRankNonZero.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403F3684 (KiRemoveSystemWorkPriorityKick.c)
 *     KiConvertDynamicHeteroPolicy @ 0x14051F3E0 (KiConvertDynamicHeteroPolicy.c)
 */

__int64 __fastcall KiSelectReadyThread(int a1, __int64 a2)
{
  __int64 v2; // r14
  unsigned int v4; // edi
  bool *v5; // r11
  __int64 v7; // r9
  __int64 v8; // rdx
  __int64 v9; // rsi
  unsigned int v10; // r15d
  __int64 v11; // r8
  unsigned int v12; // eax
  int v13; // r10d
  struct _KPRCB *CurrentPrcb; // rsi
  _DWORD *SchedulerAssist; // rcx
  unsigned int v17; // r12d
  __int64 v18; // r9
  _QWORD **v19; // r13
  _QWORD *v20; // rdx
  unsigned int v21; // eax
  __int64 v22; // rcx
  _QWORD *v23; // rcx
  _QWORD *v24; // rax
  struct _KPRCB *v25; // rcx
  _DWORD *v26; // rdx
  __int64 v27; // r10
  __int64 v28; // r10
  __int64 v29; // r10
  __int64 v30; // rdx
  int v31; // r10d
  _DWORD *v32; // rcx
  _DWORD *v33; // rcx
  int v34; // eax
  int v35; // eax
  int v36; // eax
  int v37; // eax
  __int64 v38; // [rsp+30h] [rbp-58h]
  int v39; // [rsp+90h] [rbp+8h]
  unsigned int v40; // [rsp+98h] [rbp+10h]
  int v41; // [rsp+A0h] [rbp+18h] BYREF
  _QWORD *v42; // [rsp+A8h] [rbp+20h]

  v2 = *(_QWORD *)(a2 + 33864);
  v4 = 1 << a1;
  v5 = 0LL;
  v7 = *(_QWORD *)(*(_QWORD *)(a2 + 192) + 80LL);
  v8 = *(unsigned __int8 *)(a2 + 35);
  v38 = v7;
  if ( (v8 & 2) != 0 && (v7 & *(_QWORD *)(a2 + 33856)) != 0 && (_BYTE)v8 != 7 )
    v2 = 0LL;
  while ( 1 )
  {
    v9 = 0LL;
    if ( !KiForceIdleDisabled && KiForceIdleState == 4 )
      return v9;
    v10 = *(_DWORD *)(a2 + 31768);
    v39 = -2;
    v11 = 0xFFFFFFFFLL;
    v40 = -1;
    if ( v10 >= v4 )
    {
      _BitScanReverse((unsigned int *)&v11, v10);
      v40 = v11;
      v10 = 1 << v11;
    }
    if ( v2 )
    {
      v12 = *(_DWORD *)(v2 + 8);
      if ( v12 >= v4 )
      {
        _BitScanReverse((unsigned int *)&v13, v12);
        v39 = v13;
      }
      else
      {
        v13 = -2;
      }
      v11 = v40;
      if ( v13 > (int)v40 || v13 == v40 && !_bittest((const signed __int32 *)(a2 + 31772), v40) )
      {
        CurrentPrcb = KeGetCurrentPrcb();
        v41 = 0;
        SchedulerAssist = CurrentPrcb->SchedulerAssist;
        if ( SchedulerAssist )
        {
          if ( CurrentPrcb->NestingLevel <= 1u )
          {
            v34 = SchedulerAssist[6];
            SchedulerAssist[6] = v34 + 1;
            if ( v34 == -1 )
LABEL_55:
              KiRemoveSystemWorkPriorityKick(CurrentPrcb);
          }
        }
        while ( _interlockedbittestandset64((volatile signed __int32 *)v2, 0LL) )
        {
          v32 = CurrentPrcb->SchedulerAssist;
          if ( v32 )
          {
            if ( CurrentPrcb->NestingLevel <= 1u )
            {
              v35 = v32[6] - 1;
              v32[6] = v35;
              if ( !v35 )
                KiRemoveSystemWorkPriorityKick(CurrentPrcb);
            }
          }
          do
            KeYieldProcessorEx(&v41, v8, v11, v7);
          while ( *(_QWORD *)v2 );
          v33 = CurrentPrcb->SchedulerAssist;
          if ( v33 )
          {
            if ( CurrentPrcb->NestingLevel <= 1u )
            {
              v36 = v33[6];
              v33[6] = v36 + 1;
              if ( v36 == -1 )
                goto LABEL_55;
            }
          }
        }
        v17 = *(_DWORD *)(v2 + 8);
        v18 = v38;
LABEL_18:
        v5 = 0LL;
        v9 = 0LL;
        if ( v17 >= v4 && v17 >= v10 )
        {
          _BitScanReverse((unsigned int *)&v11, v17);
          v39 = v11;
          v19 = (_QWORD **)(v2 + 16 * ((int)v11 + 1LL));
          v17 ^= 1 << v11;
          v20 = *v19;
          v42 = *v19;
          while ( 1 )
          {
            v21 = *((unsigned __int8 *)v20 - 91);
            v9 = (__int64)(v20 - 27);
            if ( v21 >= 5 )
            {
              v21 = KiConvertDynamicHeteroPolicy(v20 - 27, v20, a2);
              v20 = v42;
              v18 = v38;
            }
            v22 = -1LL;
            if ( v21 )
            {
              v22 = *(_QWORD *)(*(_QWORD *)(a2 + 192) + 24LL * (int)v21 + 200);
              v20 = v42;
            }
            if ( (v22 & *(_QWORD *)(a2 + 200)) != 0 || (v22 & *(_QWORD *)(a2 + 33856) & v18) == 0 )
              break;
            v20 = (_QWORD *)*v20;
            v42 = v20;
            if ( v20 == v19 )
              goto LABEL_18;
          }
          if ( (*(_DWORD *)(v9 + 120) & 0x400000) != 0 )
            _InterlockedAnd(*(volatile signed __int32 **)(v9 + 968), 0xFFFBFFFF);
          v23 = *(_QWORD **)(v9 + 216);
          v24 = *(_QWORD **)(v9 + 224);
          if ( v23[1] != v9 + 216 || *v24 != v9 + 216 )
            __fastfail(3u);
          *v24 = v23;
          v23[1] = v24;
          if ( v24 == v23 )
            *(_DWORD *)(v2 + 8) ^= 1 << v39;
          --*(_DWORD *)(v2 + 608);
          *(_QWORD *)(v2 + 616) -= *(unsigned int *)(v9 + 1568);
          v5 = 0LL;
          *(_DWORD *)(v9 + 536) = *(_DWORD *)(a2 + 36);
        }
        _InterlockedAnd64((volatile signed __int64 *)v2, 0LL);
        v25 = KeGetCurrentPrcb();
        v26 = v25->SchedulerAssist;
        if ( v26 )
        {
          if ( v25->NestingLevel <= 1u )
          {
            v37 = v26[6] - 1;
            v26[6] = v37;
            if ( !v37 )
            {
              KiRemoveSystemWorkPriorityKick(v25);
              v5 = 0LL;
            }
          }
        }
        if ( v9 )
        {
          if ( v39 == v40 )
            _bittestandset((signed __int32 *)(a2 + 31772), v40);
          goto LABEL_37;
        }
        v11 = v40;
      }
    }
    if ( (int)v11 >= a1 )
    {
      v30 = *(_QWORD *)(a2 + 16 * ((int)v11 + 1992LL));
      v9 = v30 - 216;
      KiRemoveThreadFromReadyQueue(a2, v30, v11);
      if ( (_DWORD)v11 == v31 )
        _bittestandreset((signed __int32 *)(a2 + 31772), v11);
    }
    if ( !v9 )
      return v9;
LABEL_37:
    v27 = *(_QWORD *)(v9 + 104);
    if ( !v27 )
      return v9;
    v28 = *(unsigned int *)(a2 + 216) + v27;
    if ( !v28 || !(unsigned int)KiGetThreadEffectiveRankNonZero(v9, v28, v11, 1, v5) )
      return v9;
    KiAddThreadToScbQueue(a2, v29, v9, 0);
    v5 = 0LL;
  }
}
