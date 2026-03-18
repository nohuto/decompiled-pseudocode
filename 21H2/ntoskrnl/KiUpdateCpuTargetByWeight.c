/*
 * XREFs of KiUpdateCpuTargetByWeight @ 0x140207A84
 * Callers:
 *     KiAssignSchedulingGroupWeights @ 0x140207880 (KiAssignSchedulingGroupWeights.c)
 *     KiUpdateChildrenCpuTarget @ 0x14057A9BC (KiUpdateChildrenCpuTarget.c)
 * Callees:
 *     KiCheckForEffectivePriorityChange @ 0x140208284 (KiCheckForEffectivePriorityChange.c)
 *     KiResetScb @ 0x140208368 (KiResetScb.c)
 *     KeYieldProcessorEx @ 0x1402F32E0 (KeYieldProcessorEx.c)
 *     KeQueryPerformanceCounter @ 0x1403027F0 (KeQueryPerformanceCounter.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x140418E4C (KiRemoveSystemWorkPriorityKick.c)
 *     KiUpdateChildrenCpuTarget @ 0x14057A9BC (KiUpdateChildrenCpuTarget.c)
 */

char __fastcall KiUpdateCpuTargetByWeight(unsigned __int16 *a1, char a2)
{
  char v2; // bl
  __int16 v3; // bp
  unsigned __int16 v5; // r15
  unsigned __int64 v6; // r14
  unsigned __int64 QuadPart; // rax
  unsigned __int64 v8; // rdx
  unsigned __int64 v9; // r13
  __int64 v10; // r15
  char v11; // r12
  __int64 v12; // rdi
  __int64 v13; // rbp
  struct _KPRCB *v14; // rbx
  _DWORD *v15; // rcx
  struct _KPRCB *v16; // rcx
  _QWORD *v17; // rcx
  _DWORD *v18; // rcx
  struct _KPRCB *CurrentPrcb; // rbx
  __int64 v20; // rdi
  _DWORD *SchedulerAssist; // rcx
  __int64 v22; // r14
  struct _KPRCB *v23; // rcx
  int v24; // eax
  _DWORD *v25; // rcx
  int v26; // eax
  int v27; // eax
  int v28; // eax
  unsigned __int64 v29; // rax
  unsigned int v31; // [rsp+20h] [rbp-58h]
  bool v32; // [rsp+80h] [rbp+8h]
  int v34; // [rsp+90h] [rbp+18h] BYREF
  int v35; // [rsp+98h] [rbp+20h] BYREF

  v2 = a2;
  v3 = *a1;
  v5 = a1[1];
  if ( *((_QWORD *)a1 + 12) )
  {
    CurrentPrcb = KeGetCurrentPrcb();
    v34 = 0;
    v20 = KiProcessorBlock[0];
    while ( 1 )
    {
      SchedulerAssist = CurrentPrcb->SchedulerAssist;
      if ( SchedulerAssist )
      {
        if ( CurrentPrcb->NestingLevel <= 1u )
        {
          v24 = SchedulerAssist[6];
          SchedulerAssist[6] = v24 + 1;
          if ( v24 == -1 )
            KiRemoveSystemWorkPriorityKick(CurrentPrcb);
        }
      }
      if ( !_interlockedbittestandset64((volatile signed __int32 *)(v20 + 48), 0LL) )
        break;
      v25 = CurrentPrcb->SchedulerAssist;
      if ( v25 )
      {
        if ( CurrentPrcb->NestingLevel <= 1u )
        {
          v26 = v25[6] - 1;
          v25[6] = v26;
          if ( !v26 )
            KiRemoveSystemWorkPriorityKick(CurrentPrcb);
        }
      }
      do
        KeYieldProcessorEx(&v34);
      while ( *(_QWORD *)(v20 + 48) );
    }
    v22 = *((_QWORD *)a1 + 67);
    QuadPart = (unsigned __int64)*a1 * *(_QWORD *)(v22 + 8) / *(unsigned int *)(*((_QWORD *)a1 + 12) + 20LL);
    v9 = QuadPart;
    if ( v3 == v5 )
      v6 = (unsigned __int64)*a1 * *(_QWORD *)(v22 + 8) / *(unsigned int *)(*((_QWORD *)a1 + 12) + 20LL);
    else
      v6 = *(_QWORD *)(v22 + 16);
    _InterlockedAnd64((volatile signed __int64 *)(v20 + 48), 0LL);
    v23 = KeGetCurrentPrcb();
    v8 = (unsigned __int64)v23->SchedulerAssist;
    if ( v8 )
    {
      if ( v23->NestingLevel <= 1u )
      {
        LODWORD(QuadPart) = *(_DWORD *)(v8 + 24) - 1;
        *(_DWORD *)(v8 + 24) = QuadPart;
        if ( !(_DWORD)QuadPart )
          LOBYTE(QuadPart) = KiRemoveSystemWorkPriorityKick(v23);
      }
    }
    v2 = a2;
  }
  else
  {
    v6 = KiCyclesPerGeneration;
    QuadPart = KiCyclesPerGeneration * (unsigned __int64)*a1 / (unsigned int)KiGroupSchedulingTotalWeight;
    v8 = KiCyclesPerGeneration * (unsigned __int64)*a1 % (unsigned int)KiGroupSchedulingTotalWeight;
    v9 = QuadPart;
    if ( v3 == v5 )
      v6 = KiCyclesPerGeneration * (unsigned __int64)*a1 / (unsigned int)KiGroupSchedulingTotalWeight;
  }
  v31 = KeNumberProcessors_0;
  v10 = 0LL;
  v32 = v6 == KiCyclesPerGeneration;
  if ( KeMaximumProcessors )
  {
    v11 = 16 * (v6 == KiCyclesPerGeneration);
    do
    {
      v12 = KiProcessorBlock[v10];
      v13 = (__int64)&a1[212 * (unsigned int)v10 + 64];
      if ( v12 )
      {
        v14 = KeGetCurrentPrcb();
        v35 = 0;
        while ( 1 )
        {
          v15 = v14->SchedulerAssist;
          if ( v15 )
          {
            if ( v14->NestingLevel <= 1u )
            {
              v27 = v15[6];
              v15[6] = v27 + 1;
              if ( v27 == -1 )
                KiRemoveSystemWorkPriorityKick(v14);
            }
          }
          if ( !_interlockedbittestandset64((volatile signed __int32 *)(v12 + 48), 0LL) )
            break;
          v18 = v14->SchedulerAssist;
          if ( v18 )
          {
            if ( v14->NestingLevel <= 1u )
            {
              v28 = v18[6] - 1;
              v18[6] = v28;
              if ( !v28 )
                KiRemoveSystemWorkPriorityKick(v14);
            }
          }
          do
            KeYieldProcessorEx(&v35);
          while ( *(_QWORD *)(v12 + 48) );
        }
        if ( !v32 && *(_BYTE *)(v12 + 33) )
        {
          v29 = v6 * v31;
          *((_QWORD *)a1 + 5) = v29;
          *((_QWORD *)a1 + 6) = v29;
        }
      }
      v2 = a2;
      LOBYTE(QuadPart) = v11 | *(_BYTE *)(v13 + 112) & 0xEF;
      *(_QWORD *)(v13 + 8) = v9;
      *(_QWORD *)(v13 + 16) = v6;
      *(_BYTE *)(v13 + 112) = QuadPart;
      if ( v12 )
      {
        if ( a2 )
        {
          *(_QWORD *)(v13 + 32) = 0LL;
          *(_QWORD *)(v13 + 48) = 0LL;
          LODWORD(QuadPart) = *((_DWORD *)a1 + 1);
          if ( (QuadPart & 2) != 0 )
          {
            KiResetScb(v13, v12);
            LOBYTE(QuadPart) = KiCheckForEffectivePriorityChange(v12, v13);
          }
        }
        _InterlockedAnd64((volatile signed __int64 *)(v12 + 48), 0LL);
        v16 = KeGetCurrentPrcb();
        v8 = (unsigned __int64)v16->SchedulerAssist;
        if ( v8 )
        {
          if ( v16->NestingLevel <= 1u )
          {
            LODWORD(QuadPart) = *(_DWORD *)(v8 + 24) - 1;
            *(_DWORD *)(v8 + 24) = QuadPart;
            if ( !(_DWORD)QuadPart )
              LOBYTE(QuadPart) = KiRemoveSystemWorkPriorityKick(v16);
          }
        }
      }
      v10 = (unsigned int)(v10 + 1);
    }
    while ( (unsigned int)v10 < KeMaximumProcessors );
  }
  if ( v2 )
  {
    QuadPart = KeQueryPerformanceCounter(0LL).QuadPart;
    *((_QWORD *)a1 + 3) = QuadPart;
  }
  v17 = a1 + 40;
  if ( (_QWORD *)*v17 != v17 )
  {
    LOBYTE(v8) = v2;
    LOBYTE(QuadPart) = KiUpdateChildrenCpuTarget(v17, v8);
  }
  return QuadPart;
}
