/*
 * XREFs of KiUpdateCpuTargetByRate @ 0x140205430
 * Callers:
 *     KeInsertSchedulingGroup @ 0x140202418 (KeInsertSchedulingGroup.c)
 *     KeSetSchedulingGroupCpuRates @ 0x140204FD0 (KeSetSchedulingGroupCpuRates.c)
 *     KiUpdateChildrenCpuTarget @ 0x140523C60 (KiUpdateChildrenCpuTarget.c)
 * Callees:
 *     KiCheckForEffectivePriorityChange @ 0x1402058F0 (KiCheckForEffectivePriorityChange.c)
 *     KiResetScb @ 0x14020597C (KiResetScb.c)
 *     KeQueryPerformanceCounter @ 0x1402D0BC0 (KeQueryPerformanceCounter.c)
 *     KeYieldProcessorEx @ 0x1402EFAD0 (KeYieldProcessorEx.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403F3684 (KiRemoveSystemWorkPriorityKick.c)
 *     KiUpdateChildrenCpuTarget @ 0x140523C60 (KiUpdateChildrenCpuTarget.c)
 */

char __fastcall KiUpdateCpuTargetByRate(unsigned __int16 *a1, char a2)
{
  char v2; // bl
  unsigned __int64 v4; // rdx
  unsigned __int64 v5; // rcx
  unsigned __int64 v6; // r13
  unsigned __int128 v7; // rax
  unsigned __int64 v8; // r13
  unsigned __int64 v9; // r14
  __int64 v10; // r15
  char v11; // r12
  __int64 v12; // rdi
  __int64 v13; // rbp
  struct _KPRCB *v14; // rbx
  _DWORD *v15; // rcx
  struct _KPRCB *v16; // rcx
  _QWORD *v17; // rcx
  unsigned __int64 v18; // rax
  _DWORD *v19; // rcx
  struct _KPRCB *CurrentPrcb; // rbx
  __int64 v21; // rdi
  _DWORD *SchedulerAssist; // rcx
  int v23; // eax
  _DWORD *v24; // rcx
  int v25; // eax
  __int64 v26; // r8
  struct _KPRCB *v27; // rcx
  _DWORD *v28; // r8
  int v29; // eax
  int v30; // eax
  unsigned int v32; // [rsp+20h] [rbp-58h]
  bool v33; // [rsp+80h] [rbp+8h]
  int v35; // [rsp+90h] [rbp+18h] BYREF
  int v36; // [rsp+98h] [rbp+20h] BYREF

  v2 = a2;
  if ( *((_QWORD *)a1 + 12) )
  {
    CurrentPrcb = KeGetCurrentPrcb();
    v35 = 0;
    v21 = KiProcessorBlock[0];
    while ( 1 )
    {
      SchedulerAssist = CurrentPrcb->SchedulerAssist;
      if ( SchedulerAssist )
      {
        if ( CurrentPrcb->NestingLevel <= 1u )
        {
          v23 = SchedulerAssist[6];
          SchedulerAssist[6] = v23 + 1;
          if ( v23 == -1 )
            KiRemoveSystemWorkPriorityKick(CurrentPrcb);
        }
      }
      if ( !_interlockedbittestandset64((volatile signed __int32 *)(v21 + 48), 0LL) )
        break;
      v24 = CurrentPrcb->SchedulerAssist;
      if ( v24 )
      {
        if ( CurrentPrcb->NestingLevel <= 1u )
        {
          v25 = v24[6] - 1;
          v24[6] = v25;
          if ( !v25 )
            KiRemoveSystemWorkPriorityKick(CurrentPrcb);
        }
      }
      do
        KeYieldProcessorEx(&v35);
      while ( *(_QWORD *)(v21 + 48) );
    }
    v26 = *((_QWORD *)a1 + 67);
    v7 = *(_QWORD *)(v26 + 16) * (unsigned __int64)a1[1] * (unsigned __int128)0x346DC5D63886594BuLL;
    v8 = (unsigned __int64)*a1 * *(_QWORD *)(v26 + 8) / 0x2710;
    v9 = *(_QWORD *)(v26 + 16) * (unsigned __int64)a1[1] / 0x2710;
    _InterlockedAnd64((volatile signed __int64 *)(v21 + 48), 0LL);
    v27 = KeGetCurrentPrcb();
    v28 = v27->SchedulerAssist;
    if ( v28 )
    {
      if ( v27->NestingLevel <= 1u )
      {
        LODWORD(v7) = v28[6] - 1;
        v28[6] = v7;
        if ( !(_DWORD)v7 )
          LOBYTE(v7) = KiRemoveSystemWorkPriorityKick(v27);
      }
    }
    v2 = a2;
  }
  else
  {
    v4 = (KiCyclesPerGeneration * (unsigned __int64)*a1 * (unsigned __int128)0x346DC5D63886594BuLL) >> 64;
    v5 = KiCyclesPerGeneration * a1[1];
    v6 = v4;
    v7 = v5 * (unsigned __int128)0x346DC5D63886594BuLL;
    v8 = v6 >> 11;
    v9 = v5 / 0x2710;
  }
  v32 = KeNumberProcessors_0;
  v10 = 0LL;
  v33 = v9 == KiCyclesPerGeneration;
  if ( KeMaximumProcessors )
  {
    v11 = 16 * (v9 == KiCyclesPerGeneration);
    do
    {
      v12 = KiProcessorBlock[v10];
      v13 = (__int64)&a1[212 * (unsigned int)v10 + 64];
      if ( v12 )
      {
        v14 = KeGetCurrentPrcb();
        v36 = 0;
        while ( 1 )
        {
          v15 = v14->SchedulerAssist;
          if ( v15 )
          {
            if ( v14->NestingLevel <= 1u )
            {
              v29 = v15[6];
              v15[6] = v29 + 1;
              if ( v29 == -1 )
                KiRemoveSystemWorkPriorityKick(v14);
            }
          }
          if ( !_interlockedbittestandset64((volatile signed __int32 *)(v12 + 48), 0LL) )
            break;
          v19 = v14->SchedulerAssist;
          if ( v19 )
          {
            if ( v14->NestingLevel <= 1u )
            {
              v30 = v19[6] - 1;
              v19[6] = v30;
              if ( !v30 )
                KiRemoveSystemWorkPriorityKick(v14);
            }
          }
          do
            KeYieldProcessorEx(&v36);
          while ( *(_QWORD *)(v12 + 48) );
        }
        if ( !v33 && *(_BYTE *)(v12 + 33) )
        {
          v18 = v9 * v32;
          *((_QWORD *)a1 + 5) = v18;
          *((_QWORD *)a1 + 6) = v18;
        }
      }
      v2 = a2;
      LOBYTE(v7) = v11 | *(_BYTE *)(v13 + 112) & 0xEF;
      *(_QWORD *)(v13 + 8) = v8;
      *(_QWORD *)(v13 + 16) = v9;
      *(_BYTE *)(v13 + 112) = v7;
      if ( v12 )
      {
        if ( a2 )
        {
          *(_QWORD *)(v13 + 32) = 0LL;
          *(_QWORD *)(v13 + 48) = 0LL;
          LODWORD(v7) = *((_DWORD *)a1 + 1);
          if ( (v7 & 2) != 0 )
          {
            KiResetScb(v13, v12);
            LOBYTE(v7) = KiCheckForEffectivePriorityChange(v12, v13);
          }
        }
        _InterlockedAnd64((volatile signed __int64 *)(v12 + 48), 0LL);
        v16 = KeGetCurrentPrcb();
        *((_QWORD *)&v7 + 1) = v16->SchedulerAssist;
        if ( *((_QWORD *)&v7 + 1) )
        {
          if ( v16->NestingLevel <= 1u )
          {
            LODWORD(v7) = *(_DWORD *)(*((_QWORD *)&v7 + 1) + 24LL) - 1;
            *(_DWORD *)(*((_QWORD *)&v7 + 1) + 24LL) = v7;
            if ( !(_DWORD)v7 )
              LOBYTE(v7) = KiRemoveSystemWorkPriorityKick(v16);
          }
        }
      }
      v10 = (unsigned int)(v10 + 1);
    }
    while ( (unsigned int)v10 < KeMaximumProcessors );
  }
  if ( v2 )
  {
    *(LARGE_INTEGER *)&v7 = KeQueryPerformanceCounter(0LL);
    *((_QWORD *)a1 + 3) = v7;
  }
  v17 = a1 + 40;
  if ( (_QWORD *)*v17 != v17 )
  {
    BYTE8(v7) = v2;
    LOBYTE(v7) = KiUpdateChildrenCpuTarget(v17, *((_QWORD *)&v7 + 1));
  }
  return v7;
}
