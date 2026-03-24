/*
 * XREFs of KiUpdateCpuTargetByWeight @ 0x140287FB8
 * Callers:
 *     KiAssignSchedulingGroupWeights @ 0x140287F00 (KiAssignSchedulingGroupWeights.c)
 *     KiUpdateChildrenCpuTarget @ 0x140523A20 (KiUpdateChildrenCpuTarget.c)
 * Callees:
 *     KeQueryPerformanceCounter @ 0x14022C340 (KeQueryPerformanceCounter.c)
 *     KeYieldProcessorEx @ 0x14024B280 (KeYieldProcessorEx.c)
 *     KiCheckForEffectivePriorityChange @ 0x140288750 (KiCheckForEffectivePriorityChange.c)
 *     KiResetScb @ 0x1402887DC (KiResetScb.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403F3684 (KiRemoveSystemWorkPriorityKick.c)
 *     KiUpdateChildrenCpuTarget @ 0x140523A20 (KiUpdateChildrenCpuTarget.c)
 */

char __fastcall KiUpdateCpuTargetByWeight(unsigned __int16 *a1, __int64 a2, __int64 a3, __int64 a4)
{
  char v4; // bl
  __int16 v5; // bp
  unsigned __int16 v7; // r15
  unsigned __int64 v8; // r14
  unsigned __int64 QuadPart; // rax
  unsigned __int64 v10; // rdx
  unsigned __int64 v11; // r13
  __int64 v12; // r8
  __int64 v13; // r15
  char v14; // r12
  __int64 v15; // rdi
  __int64 v16; // rbp
  struct _KPRCB *v17; // rbx
  _DWORD *v18; // rcx
  struct _KPRCB *v19; // rcx
  _QWORD *v20; // rcx
  _DWORD *v21; // rcx
  struct _KPRCB *CurrentPrcb; // rbx
  __int64 v23; // rdi
  _DWORD *SchedulerAssist; // rcx
  int v25; // eax
  _DWORD *v26; // rcx
  int v27; // eax
  __int64 v28; // r14
  struct _KPRCB *v29; // rcx
  int v30; // eax
  int v31; // eax
  unsigned __int64 v32; // rax
  unsigned int v34; // [rsp+20h] [rbp-58h]
  bool v35; // [rsp+80h] [rbp+8h]
  char v36; // [rsp+88h] [rbp+10h]
  int v37; // [rsp+90h] [rbp+18h] BYREF
  int v38; // [rsp+98h] [rbp+20h] BYREF

  v36 = a2;
  v4 = a2;
  v5 = *a1;
  v7 = a1[1];
  if ( *((_QWORD *)a1 + 12) )
  {
    CurrentPrcb = KeGetCurrentPrcb();
    v37 = 0;
    v23 = KiProcessorBlock[0];
    while ( 1 )
    {
      SchedulerAssist = CurrentPrcb->SchedulerAssist;
      if ( SchedulerAssist )
      {
        if ( CurrentPrcb->NestingLevel <= 1u )
        {
          v25 = SchedulerAssist[6];
          SchedulerAssist[6] = v25 + 1;
          if ( v25 == -1 )
            KiRemoveSystemWorkPriorityKick(CurrentPrcb);
        }
      }
      if ( !_interlockedbittestandset64((volatile signed __int32 *)(v23 + 48), 0LL) )
        break;
      v26 = CurrentPrcb->SchedulerAssist;
      if ( v26 )
      {
        if ( CurrentPrcb->NestingLevel <= 1u )
        {
          v27 = v26[6] - 1;
          v26[6] = v27;
          if ( !v27 )
            KiRemoveSystemWorkPriorityKick(CurrentPrcb);
        }
      }
      do
        KeYieldProcessorEx(&v37, a2, a3, a4);
      while ( *(_QWORD *)(v23 + 48) );
    }
    v28 = *((_QWORD *)a1 + 67);
    QuadPart = (unsigned __int64)*a1 * *(_QWORD *)(v28 + 8) / *(unsigned int *)(*((_QWORD *)a1 + 12) + 20LL);
    v11 = QuadPart;
    if ( v5 == v7 )
      v8 = (unsigned __int64)*a1 * *(_QWORD *)(v28 + 8) / *(unsigned int *)(*((_QWORD *)a1 + 12) + 20LL);
    else
      v8 = *(_QWORD *)(v28 + 16);
    _InterlockedAnd64((volatile signed __int64 *)(v23 + 48), 0LL);
    v29 = KeGetCurrentPrcb();
    v10 = (unsigned __int64)v29->SchedulerAssist;
    if ( v10 )
    {
      if ( v29->NestingLevel <= 1u )
      {
        LODWORD(QuadPart) = *(_DWORD *)(v10 + 24) - 1;
        *(_DWORD *)(v10 + 24) = QuadPart;
        if ( !(_DWORD)QuadPart )
          LOBYTE(QuadPart) = KiRemoveSystemWorkPriorityKick(v29);
      }
    }
    v4 = v36;
  }
  else
  {
    v8 = KiCyclesPerGeneration;
    QuadPart = KiCyclesPerGeneration * (unsigned __int64)*a1 / (unsigned int)KiGroupSchedulingTotalWeight;
    v10 = KiCyclesPerGeneration * (unsigned __int64)*a1 % (unsigned int)KiGroupSchedulingTotalWeight;
    v11 = QuadPart;
    if ( v5 == v7 )
      v8 = KiCyclesPerGeneration * (unsigned __int64)*a1 / (unsigned int)KiGroupSchedulingTotalWeight;
  }
  v12 = (unsigned int)KeNumberProcessors_0;
  LOBYTE(v10) = v8 == KiCyclesPerGeneration;
  v34 = KeNumberProcessors_0;
  v13 = 0LL;
  v35 = v8 == KiCyclesPerGeneration;
  if ( KeMaximumProcessors )
  {
    v14 = 16 * v10;
    do
    {
      v15 = KiProcessorBlock[v13];
      v16 = (__int64)&a1[212 * (unsigned int)v13 + 64];
      if ( v15 )
      {
        v17 = KeGetCurrentPrcb();
        v38 = 0;
        while ( 1 )
        {
          v18 = v17->SchedulerAssist;
          if ( v18 )
          {
            if ( v17->NestingLevel <= 1u )
            {
              v30 = v18[6];
              v18[6] = v30 + 1;
              if ( v30 == -1 )
                KiRemoveSystemWorkPriorityKick(v17);
            }
          }
          if ( !_interlockedbittestandset64((volatile signed __int32 *)(v15 + 48), 0LL) )
            break;
          v21 = v17->SchedulerAssist;
          if ( v21 )
          {
            if ( v17->NestingLevel <= 1u )
            {
              v31 = v21[6] - 1;
              v21[6] = v31;
              if ( !v31 )
                KiRemoveSystemWorkPriorityKick(v17);
            }
          }
          do
            KeYieldProcessorEx(&v38, v10, v12, a4);
          while ( *(_QWORD *)(v15 + 48) );
        }
        if ( !v35 && *(_BYTE *)(v15 + 33) )
        {
          v32 = v8 * v34;
          *((_QWORD *)a1 + 5) = v32;
          *((_QWORD *)a1 + 6) = v32;
        }
      }
      v4 = v36;
      LOBYTE(QuadPart) = v14 | *(_BYTE *)(v16 + 112) & 0xEF;
      *(_QWORD *)(v16 + 8) = v11;
      *(_QWORD *)(v16 + 16) = v8;
      *(_BYTE *)(v16 + 112) = QuadPart;
      if ( v15 )
      {
        if ( v36 )
        {
          *(_QWORD *)(v16 + 32) = 0LL;
          *(_QWORD *)(v16 + 48) = 0LL;
          LODWORD(QuadPart) = *((_DWORD *)a1 + 1);
          if ( (QuadPart & 2) != 0 )
          {
            KiResetScb(v16, v15);
            LOBYTE(QuadPart) = KiCheckForEffectivePriorityChange(v15, v16);
          }
        }
        _InterlockedAnd64((volatile signed __int64 *)(v15 + 48), 0LL);
        v19 = KeGetCurrentPrcb();
        v10 = (unsigned __int64)v19->SchedulerAssist;
        if ( v10 )
        {
          if ( v19->NestingLevel <= 1u )
          {
            LODWORD(QuadPart) = *(_DWORD *)(v10 + 24) - 1;
            *(_DWORD *)(v10 + 24) = QuadPart;
            if ( !(_DWORD)QuadPart )
              LOBYTE(QuadPart) = KiRemoveSystemWorkPriorityKick(v19);
          }
        }
      }
      v13 = (unsigned int)(v13 + 1);
    }
    while ( (unsigned int)v13 < KeMaximumProcessors );
  }
  if ( v4 )
  {
    QuadPart = KeQueryPerformanceCounter(0LL).QuadPart;
    *((_QWORD *)a1 + 3) = QuadPart;
  }
  v20 = a1 + 40;
  if ( (_QWORD *)*v20 != v20 )
  {
    LOBYTE(v10) = v4;
    LOBYTE(QuadPart) = KiUpdateChildrenCpuTarget(v20, v10);
  }
  return QuadPart;
}
