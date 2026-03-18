/*
 * XREFs of KiSelectReadyThread @ 0x140266580
 * Callers:
 *     KiSwapThread @ 0x140265350 (KiSwapThread.c)
 *     KiRemoveBoostThread @ 0x1402677B0 (KiRemoveBoostThread.c)
 *     KiSelectReadyThreadEx @ 0x140269EC0 (KiSelectReadyThreadEx.c)
 *     KiGroupSchedulingGenerationEnd @ 0x140330300 (KiGroupSchedulingGenerationEnd.c)
 *     KiSearchForNewThread @ 0x1403306F4 (KiSearchForNewThread.c)
 *     KiSelectNextThread @ 0x140330AC8 (KiSelectNextThread.c)
 *     KiQuantumEnd @ 0x1403312E0 (KiQuantumEnd.c)
 *     KiGroupSchedulingQuantumEnd @ 0x140331DD0 (KiGroupSchedulingQuantumEnd.c)
 *     KiChooseLowestRankedThread @ 0x140334C40 (KiChooseLowestRankedThread.c)
 * Callees:
 *     KeYieldProcessorEx @ 0x140244550 (KeYieldProcessorEx.c)
 *     KiGetThreadEffectiveRankNonZero @ 0x140334740 (KiGetThreadEffectiveRankNonZero.c)
 *     KiAddThreadToScbQueue @ 0x140335964 (KiAddThreadToScbQueue.c)
 *     KiRemoveThreadFromReadyQueue @ 0x140337E58 (KiRemoveThreadFromReadyQueue.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403EC9E4 (KiRemoveSystemWorkPriorityKick.c)
 *     KiConvertDynamicHeteroPolicy @ 0x1405196A0 (KiConvertDynamicHeteroPolicy.c)
 */

__int64 __fastcall KiSelectReadyThread(int a1, __int64 a2)
{
  __int64 v2; // r14
  unsigned int v4; // edi
  __int64 v5; // r11
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
  _QWORD **v18; // r13
  _QWORD *v19; // rdx
  unsigned int v20; // eax
  __int64 v21; // rcx
  _QWORD *v22; // rcx
  _QWORD *v23; // rax
  struct _KPRCB *v24; // rcx
  _DWORD *v25; // rdx
  __int64 v26; // r10
  __int64 v27; // r10
  __int64 v28; // r10
  int v29; // r10d
  _DWORD *v30; // rcx
  _DWORD *v31; // rcx
  int v32; // eax
  int v33; // eax
  int v34; // eax
  int v35; // eax
  __int64 v36; // [rsp+30h] [rbp-58h]
  int v37; // [rsp+90h] [rbp+8h]
  unsigned int v38; // [rsp+98h] [rbp+10h]
  int v39; // [rsp+A0h] [rbp+18h] BYREF
  _QWORD *v40; // [rsp+A8h] [rbp+20h]

  v2 = *(_QWORD *)(a2 + 33864);
  v4 = 1 << a1;
  v5 = 0LL;
  v7 = *(_QWORD *)(*(_QWORD *)(a2 + 192) + 80LL);
  v8 = *(unsigned __int8 *)(a2 + 35);
  v36 = v7;
  if ( (v8 & 2) != 0 && (v7 & *(_QWORD *)(a2 + 33856)) != 0 && (_BYTE)v8 != 7 )
    v2 = 0LL;
  while ( 1 )
  {
    v9 = 0LL;
    if ( !KiForceIdleDisabled && KiForceIdleState == 4 )
      return v9;
    v10 = *(_DWORD *)(a2 + 31768);
    v37 = -2;
    LODWORD(v11) = -1;
    v38 = -1;
    if ( v10 >= v4 )
    {
      _BitScanReverse((unsigned int *)&v11, v10);
      v38 = v11;
      v10 = 1 << v11;
    }
    if ( v2 )
    {
      v12 = *(_DWORD *)(v2 + 8);
      if ( v12 >= v4 )
      {
        _BitScanReverse((unsigned int *)&v13, v12);
        v37 = v13;
      }
      else
      {
        v13 = -2;
      }
      v11 = v38;
      if ( v13 > (int)v38 || v13 == v38 && !_bittest((const signed __int32 *)(a2 + 31772), v38) )
      {
        CurrentPrcb = KeGetCurrentPrcb();
        v39 = 0;
        SchedulerAssist = CurrentPrcb->SchedulerAssist;
        if ( SchedulerAssist )
        {
          if ( CurrentPrcb->NestingLevel <= 1u )
          {
            v32 = SchedulerAssist[6];
            SchedulerAssist[6] = v32 + 1;
            if ( v32 == -1 )
LABEL_55:
              KiRemoveSystemWorkPriorityKick(CurrentPrcb);
          }
        }
        while ( _interlockedbittestandset64((volatile signed __int32 *)v2, 0LL) )
        {
          v30 = CurrentPrcb->SchedulerAssist;
          if ( v30 )
          {
            if ( CurrentPrcb->NestingLevel <= 1u )
            {
              v33 = v30[6] - 1;
              v30[6] = v33;
              if ( !v33 )
                KiRemoveSystemWorkPriorityKick(CurrentPrcb);
            }
          }
          do
            KeYieldProcessorEx(&v39, v8, v11, v7);
          while ( *(_QWORD *)v2 );
          v31 = CurrentPrcb->SchedulerAssist;
          if ( v31 )
          {
            if ( CurrentPrcb->NestingLevel <= 1u )
            {
              v34 = v31[6];
              v31[6] = v34 + 1;
              if ( v34 == -1 )
                goto LABEL_55;
            }
          }
        }
        v17 = *(_DWORD *)(v2 + 8);
        v7 = v36;
LABEL_18:
        v5 = 0LL;
        v9 = 0LL;
        if ( v17 >= v4 && v17 >= v10 )
        {
          _BitScanReverse((unsigned int *)&v11, v17);
          v37 = v11;
          v18 = (_QWORD **)(v2 + 16 * ((int)v11 + 1LL));
          v17 ^= 1 << v11;
          v19 = *v18;
          v40 = *v18;
          while ( 1 )
          {
            v20 = *((unsigned __int8 *)v19 - 91);
            v9 = (__int64)(v19 - 27);
            if ( v20 >= 5 )
            {
              v20 = KiConvertDynamicHeteroPolicy(v19 - 27, v19, a2, v7);
              v19 = v40;
              v7 = v36;
            }
            v21 = -1LL;
            if ( v20 )
            {
              v21 = *(_QWORD *)(*(_QWORD *)(a2 + 192) + 24LL * (int)v20 + 200);
              v19 = v40;
            }
            if ( (v21 & *(_QWORD *)(a2 + 200)) != 0 || (v21 & *(_QWORD *)(a2 + 33856) & v7) == 0 )
              break;
            v19 = (_QWORD *)*v19;
            v40 = v19;
            if ( v19 == v18 )
              goto LABEL_18;
          }
          if ( (*(_DWORD *)(v9 + 120) & 0x400000) != 0 )
            _InterlockedAnd(*(volatile signed __int32 **)(v9 + 968), 0xFFFBFFFF);
          v22 = *(_QWORD **)(v9 + 216);
          v23 = *(_QWORD **)(v9 + 224);
          if ( v22[1] != v9 + 216 || *v23 != v9 + 216 )
            __fastfail(3u);
          *v23 = v22;
          v22[1] = v23;
          if ( v23 == v22 )
            *(_DWORD *)(v2 + 8) ^= 1 << v37;
          --*(_DWORD *)(v2 + 608);
          *(_QWORD *)(v2 + 616) -= *(unsigned int *)(v9 + 1568);
          v5 = 0LL;
          *(_DWORD *)(v9 + 536) = *(_DWORD *)(a2 + 36);
        }
        _InterlockedAnd64((volatile signed __int64 *)v2, 0LL);
        v24 = KeGetCurrentPrcb();
        v25 = v24->SchedulerAssist;
        if ( v25 )
        {
          if ( v24->NestingLevel <= 1u )
          {
            v35 = v25[6] - 1;
            v25[6] = v35;
            if ( !v35 )
            {
              KiRemoveSystemWorkPriorityKick(v24);
              v5 = 0LL;
            }
          }
        }
        if ( v9 )
        {
          if ( v37 == v38 )
            _bittestandset((signed __int32 *)(a2 + 31772), v38);
          goto LABEL_37;
        }
        LODWORD(v11) = v38;
      }
    }
    if ( (int)v11 >= a1 )
    {
      v9 = *(_QWORD *)(a2 + 16 * ((int)v11 + 1992LL)) - 216LL;
      KiRemoveThreadFromReadyQueue(a2);
      if ( (_DWORD)v11 == v29 )
        _bittestandreset((signed __int32 *)(a2 + 31772), v11);
    }
    if ( !v9 )
      return v9;
LABEL_37:
    v26 = *(_QWORD *)(v9 + 104);
    if ( !v26 )
      return v9;
    v27 = *(unsigned int *)(a2 + 216) + v26;
    if ( !v27 )
      return v9;
    LOBYTE(v7) = 1;
    if ( !(unsigned int)KiGetThreadEffectiveRankNonZero(v9, v27, v11, v7, v5) )
      return v9;
    KiAddThreadToScbQueue(a2, v28, v9, 0LL);
    v5 = 0LL;
  }
}
