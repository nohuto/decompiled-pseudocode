/*
 * XREFs of KiUpdateCpuTargetByRate @ 0x1402DC214
 * Callers:
 *     KeSetSchedulingGroupCpuRates @ 0x1402DBDB4 (KeSetSchedulingGroupCpuRates.c)
 *     KeInsertSchedulingGroup @ 0x1402DC82C (KeInsertSchedulingGroup.c)
 *     KiUpdateChildrenCpuTarget @ 0x14051DF20 (KiUpdateChildrenCpuTarget.c)
 * Callees:
 *     KeQueryPerformanceCounter @ 0x140240CA0 (KeQueryPerformanceCounter.c)
 *     KeYieldProcessorEx @ 0x140244550 (KeYieldProcessorEx.c)
 *     KiCheckForEffectivePriorityChange @ 0x1402DC6D4 (KiCheckForEffectivePriorityChange.c)
 *     KiResetScb @ 0x1402DC760 (KiResetScb.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403EC9E4 (KiRemoveSystemWorkPriorityKick.c)
 *     KiUpdateChildrenCpuTarget @ 0x14051DF20 (KiUpdateChildrenCpuTarget.c)
 */

char __fastcall KiUpdateCpuTargetByRate(unsigned __int16 *a1, __int64 a2, __int64 a3, __int64 a4)
{
  char v4; // bl
  __int64 v6; // r9
  unsigned __int64 v7; // rdx
  unsigned __int64 v8; // rcx
  unsigned __int64 v9; // r13
  unsigned __int128 v10; // rax
  unsigned __int64 v11; // r13
  unsigned __int64 v12; // r14
  __int64 v13; // r8
  __int64 v14; // r15
  char v15; // r12
  __int64 v16; // rdi
  __int64 v17; // rbp
  struct _KPRCB *v18; // rbx
  _DWORD *v19; // rcx
  struct _KPRCB *v20; // rcx
  _QWORD *v21; // rcx
  unsigned __int64 v22; // rax
  _DWORD *v23; // rcx
  struct _KPRCB *CurrentPrcb; // rbx
  __int64 v25; // rdi
  _DWORD *SchedulerAssist; // rcx
  int v27; // eax
  _DWORD *v28; // rcx
  int v29; // eax
  __int64 v30; // r8
  struct _KPRCB *v31; // rcx
  _DWORD *v32; // r8
  int v33; // eax
  int v34; // eax
  unsigned int v36; // [rsp+20h] [rbp-58h]
  bool v37; // [rsp+80h] [rbp+8h]
  char v38; // [rsp+88h] [rbp+10h]
  int v39; // [rsp+90h] [rbp+18h] BYREF
  int v40; // [rsp+98h] [rbp+20h] BYREF

  v38 = a2;
  v4 = a2;
  if ( *((_QWORD *)a1 + 12) )
  {
    CurrentPrcb = KeGetCurrentPrcb();
    v39 = 0;
    v25 = KiProcessorBlock[0];
    while ( 1 )
    {
      SchedulerAssist = CurrentPrcb->SchedulerAssist;
      if ( SchedulerAssist )
      {
        if ( CurrentPrcb->NestingLevel <= 1u )
        {
          v27 = SchedulerAssist[6];
          SchedulerAssist[6] = v27 + 1;
          if ( v27 == -1 )
            KiRemoveSystemWorkPriorityKick(CurrentPrcb);
        }
      }
      if ( !_interlockedbittestandset64((volatile signed __int32 *)(v25 + 48), 0LL) )
        break;
      v28 = CurrentPrcb->SchedulerAssist;
      if ( v28 )
      {
        if ( CurrentPrcb->NestingLevel <= 1u )
        {
          v29 = v28[6] - 1;
          v28[6] = v29;
          if ( !v29 )
            KiRemoveSystemWorkPriorityKick(CurrentPrcb);
        }
      }
      do
        KeYieldProcessorEx(&v39, a2, a3, a4);
      while ( *(_QWORD *)(v25 + 48) );
    }
    v30 = *((_QWORD *)a1 + 67);
    v6 = 0x346DC5D63886594BLL;
    v10 = *(_QWORD *)(v30 + 16) * (unsigned __int64)a1[1] * (unsigned __int128)0x346DC5D63886594BuLL;
    v11 = (unsigned __int64)*a1 * *(_QWORD *)(v30 + 8) / 0x2710;
    v12 = *(_QWORD *)(v30 + 16) * (unsigned __int64)a1[1] / 0x2710;
    _InterlockedAnd64((volatile signed __int64 *)(v25 + 48), 0LL);
    v31 = KeGetCurrentPrcb();
    v32 = v31->SchedulerAssist;
    if ( v32 )
    {
      if ( v31->NestingLevel <= 1u )
      {
        LODWORD(v10) = v32[6] - 1;
        v32[6] = v10;
        if ( !(_DWORD)v10 )
          LOBYTE(v10) = KiRemoveSystemWorkPriorityKick(v31);
      }
    }
    v4 = v38;
  }
  else
  {
    v6 = 0x346DC5D63886594BLL;
    v7 = (KiCyclesPerGeneration * (unsigned __int64)*a1 * (unsigned __int128)0x346DC5D63886594BuLL) >> 64;
    v8 = KiCyclesPerGeneration * a1[1];
    v9 = v7;
    v10 = v8 * (unsigned __int128)0x346DC5D63886594BuLL;
    v11 = v9 >> 11;
    v12 = v8 / 0x2710;
  }
  v13 = (unsigned int)KeNumberProcessors_0;
  BYTE8(v10) = v12 == KiCyclesPerGeneration;
  v36 = KeNumberProcessors_0;
  v14 = 0LL;
  v37 = v12 == KiCyclesPerGeneration;
  if ( KeMaximumProcessors )
  {
    v15 = 16 * BYTE8(v10);
    do
    {
      v16 = KiProcessorBlock[v14];
      v17 = (__int64)&a1[212 * (unsigned int)v14 + 64];
      if ( v16 )
      {
        v18 = KeGetCurrentPrcb();
        v40 = 0;
        while ( 1 )
        {
          v19 = v18->SchedulerAssist;
          if ( v19 )
          {
            if ( v18->NestingLevel <= 1u )
            {
              v33 = v19[6];
              v19[6] = v33 + 1;
              if ( v33 == -1 )
                KiRemoveSystemWorkPriorityKick(v18);
            }
          }
          if ( !_interlockedbittestandset64((volatile signed __int32 *)(v16 + 48), 0LL) )
            break;
          v23 = v18->SchedulerAssist;
          if ( v23 )
          {
            if ( v18->NestingLevel <= 1u )
            {
              v34 = v23[6] - 1;
              v23[6] = v34;
              if ( !v34 )
                KiRemoveSystemWorkPriorityKick(v18);
            }
          }
          do
            KeYieldProcessorEx(&v40, *((__int64 *)&v10 + 1), v13, v6);
          while ( *(_QWORD *)(v16 + 48) );
        }
        if ( !v37 && *(_BYTE *)(v16 + 33) )
        {
          v22 = v12 * v36;
          *((_QWORD *)a1 + 5) = v22;
          *((_QWORD *)a1 + 6) = v22;
        }
      }
      v4 = v38;
      LOBYTE(v10) = v15 | *(_BYTE *)(v17 + 112) & 0xEF;
      *(_QWORD *)(v17 + 8) = v11;
      *(_QWORD *)(v17 + 16) = v12;
      *(_BYTE *)(v17 + 112) = v10;
      if ( v16 )
      {
        if ( v38 )
        {
          *(_QWORD *)(v17 + 32) = 0LL;
          *(_QWORD *)(v17 + 48) = 0LL;
          LODWORD(v10) = *((_DWORD *)a1 + 1);
          if ( (v10 & 2) != 0 )
          {
            KiResetScb(v17, v16);
            LOBYTE(v10) = KiCheckForEffectivePriorityChange(v16, v17);
          }
        }
        _InterlockedAnd64((volatile signed __int64 *)(v16 + 48), 0LL);
        v20 = KeGetCurrentPrcb();
        *((_QWORD *)&v10 + 1) = v20->SchedulerAssist;
        if ( *((_QWORD *)&v10 + 1) )
        {
          if ( v20->NestingLevel <= 1u )
          {
            LODWORD(v10) = *(_DWORD *)(*((_QWORD *)&v10 + 1) + 24LL) - 1;
            *(_DWORD *)(*((_QWORD *)&v10 + 1) + 24LL) = v10;
            if ( !(_DWORD)v10 )
              LOBYTE(v10) = KiRemoveSystemWorkPriorityKick(v20);
          }
        }
      }
      v14 = (unsigned int)(v14 + 1);
    }
    while ( (unsigned int)v14 < KeMaximumProcessors );
  }
  if ( v4 )
  {
    *(LARGE_INTEGER *)&v10 = KeQueryPerformanceCounter(0LL);
    *((_QWORD *)a1 + 3) = v10;
  }
  v21 = a1 + 40;
  if ( (_QWORD *)*v21 != v21 )
  {
    BYTE8(v10) = v4;
    LOBYTE(v10) = KiUpdateChildrenCpuTarget(v21, *((_QWORD *)&v10 + 1));
  }
  return v10;
}
