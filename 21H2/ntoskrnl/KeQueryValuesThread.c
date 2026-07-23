/*
 * XREFs of KeQueryValuesThread @ 0x140275640
 * Callers:
 *     PsQueryStatisticsProcess @ 0x140682920 (PsQueryStatisticsProcess.c)
 *     NtQueryInformationThread @ 0x1406EB0A0 (NtQueryInformationThread.c)
 *     ExpGetProcessInformation @ 0x140708640 (ExpGetProcessInformation.c)
 * Callees:
 *     KeYieldProcessorEx @ 0x1402EFAD0 (KeYieldProcessorEx.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403F3684 (KiRemoveSystemWorkPriorityKick.c)
 */

__int64 __fastcall KeQueryValuesThread(__int64 a1, __int64 a2)
{
  char v3; // bp
  unsigned __int8 CurrentIrql; // r15
  struct _KPRCB *CurrentPrcb; // rsi
  _DWORD *v7; // rcx
  int v8; // esi
  __int64 v9; // rbp
  volatile signed __int32 *v10; // r14
  char v11; // al
  char v12; // al
  int v13; // ecx
  __int64 v14; // rdx
  __int64 v15; // rcx
  char v16; // al
  __int64 v17; // r8
  struct _KPRCB *v18; // rcx
  _DWORD *v19; // rdx
  __int64 result; // rax
  __int64 v21; // r12
  struct _KPRCB *v22; // r13
  _DWORD *v23; // rcx
  struct _KPRCB *v24; // rcx
  _DWORD *v25; // rdx
  __int64 v26; // rax
  struct _KPRCB *v27; // r13
  _DWORD *v28; // rcx
  struct _KPRCB *v29; // rcx
  _DWORD *v30; // rdx
  __int64 v31; // r12
  struct _KPRCB *v32; // rbp
  __int64 v33; // rax
  _DWORD *v34; // rcx
  struct _KPRCB *v35; // rcx
  _DWORD *v36; // rdx
  struct _KPRCB *v37; // r13
  _DWORD *v38; // rcx
  _DWORD *v39; // rcx
  _DWORD *v40; // rcx
  _DWORD *v41; // rcx
  _DWORD *v42; // rcx
  _DWORD *v43; // rcx
  _DWORD *v44; // rcx
  _DWORD *v45; // rcx
  _DWORD *v46; // rcx
  _DWORD *v47; // rcx
  _DWORD *v48; // rcx
  _DWORD *SchedulerAssist; // r9
  int v50; // eax
  int v51; // eax
  int v52; // eax
  int v53; // eax
  int v54; // eax
  int v55; // eax
  int v56; // eax
  int v57; // eax
  int v58; // eax
  int v59; // eax
  int v60; // eax
  int v61; // eax
  int v62; // eax
  int v63; // eax
  int v64; // eax
  int v65; // eax
  int v66; // eax
  int v67; // eax
  int v68; // eax
  unsigned __int8 v69; // al
  struct _KPRCB *v70; // r9
  _DWORD *v71; // r8
  int v72; // eax
  bool v73; // zf
  int v74[6]; // [rsp+20h] [rbp-58h] BYREF
  int v75; // [rsp+80h] [rbp+8h] BYREF
  int v76; // [rsp+88h] [rbp+10h] BYREF
  int v77; // [rsp+90h] [rbp+18h] BYREF
  int v78; // [rsp+98h] [rbp+20h] BYREF

  *(_DWORD *)a2 = 0;
  v3 = 0;
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu )
  {
    SchedulerAssist = KeGetCurrentPrcb()->SchedulerAssist;
    SchedulerAssist[5] |= (-1 << (CurrentIrql + 1)) & 4;
  }
  CurrentPrcb = KeGetCurrentPrcb();
  v75 = 0;
  v7 = CurrentPrcb->SchedulerAssist;
  if ( v7 )
  {
    if ( CurrentPrcb->NestingLevel <= 1u )
    {
      v50 = v7[6];
      v7[6] = v50 + 1;
      if ( v50 == -1 )
LABEL_88:
        KiRemoveSystemWorkPriorityKick(CurrentPrcb);
    }
  }
  while ( _interlockedbittestandset64((volatile signed __int32 *)(a1 + 64), 0LL) )
  {
    v39 = CurrentPrcb->SchedulerAssist;
    if ( v39 )
    {
      if ( CurrentPrcb->NestingLevel <= 1u )
      {
        v51 = v39[6] - 1;
        v39[6] = v51;
        if ( !v51 )
          KiRemoveSystemWorkPriorityKick(CurrentPrcb);
      }
    }
    do
      KeYieldProcessorEx(&v75);
    while ( *(_QWORD *)(a1 + 64) );
    v40 = CurrentPrcb->SchedulerAssist;
    if ( v40 )
    {
      if ( CurrentPrcb->NestingLevel <= 1u )
      {
        v52 = v40[6];
        v40[6] = v52 + 1;
        if ( v52 == -1 )
          goto LABEL_88;
      }
    }
  }
  if ( *(_UNKNOWN **)(a1 + 544) == &KiInitialProcess )
  {
    LOBYTE(v8) = *(_BYTE *)(a1 + 388);
    *(_BYTE *)(a2 + 10) = 1;
    goto LABEL_18;
  }
  while ( 1 )
  {
    while ( 1 )
    {
      v8 = *(unsigned __int8 *)(a1 + 388);
      v9 = 0LL;
      v10 = 0LL;
      if ( v8 == 5 )
      {
        v11 = *(_BYTE *)(a1 + 112) & 7;
        if ( v11 == 1 || (unsigned __int8)(v11 - 3) <= 3u )
          goto LABEL_7;
        LOBYTE(v8) = 2;
        goto LABEL_35;
      }
      if ( *(_BYTE *)(a1 + 388) == 1 )
        break;
      if ( *(_BYTE *)(a1 + 388) == 2 )
      {
LABEL_35:
        v26 = *(unsigned int *)(a1 + 536);
        if ( (int)v26 >= 0 )
        {
          v27 = KeGetCurrentPrcb();
          v9 = KiProcessorBlock[v26];
          v74[0] = 0;
          v28 = v27->SchedulerAssist;
          if ( v28 )
          {
            if ( v27->NestingLevel <= 1u )
            {
              v63 = v28[6];
              v28[6] = v63 + 1;
              if ( v63 == -1 )
LABEL_127:
                KiRemoveSystemWorkPriorityKick(v27);
            }
          }
          while ( _interlockedbittestandset64((volatile signed __int32 *)(v9 + 48), 0LL) )
          {
            v41 = v27->SchedulerAssist;
            if ( v41 )
            {
              if ( v27->NestingLevel <= 1u )
              {
                v64 = v41[6] - 1;
                v41[6] = v64;
                if ( !v64 )
                  KiRemoveSystemWorkPriorityKick(v27);
              }
            }
            do
              KeYieldProcessorEx(v74);
            while ( *(_QWORD *)(v9 + 48) );
            v42 = v27->SchedulerAssist;
            if ( v42 )
            {
              if ( v27->NestingLevel <= 1u )
              {
                v65 = v42[6];
                v42[6] = v65 + 1;
                if ( v65 == -1 )
                  goto LABEL_127;
              }
            }
          }
          if ( a1 == *(_QWORD *)(v9 + 8) )
            goto LABEL_7;
LABEL_30:
          _InterlockedAnd64((volatile signed __int64 *)(v9 + 48), 0LL);
          goto LABEL_31;
        }
      }
      else
      {
        if ( *(_BYTE *)(a1 + 388) != 3 )
          goto LABEL_7;
        v21 = *(unsigned int *)(a1 + 536);
        if ( (int)v21 >= 0 )
        {
          v22 = KeGetCurrentPrcb();
          v9 = KiProcessorBlock[v21];
          v76 = 0;
          v23 = v22->SchedulerAssist;
          if ( v23 )
          {
            if ( v22->NestingLevel <= 1u )
            {
              v53 = v23[6];
              v23[6] = v53 + 1;
              if ( v53 == -1 )
LABEL_97:
                KiRemoveSystemWorkPriorityKick(v22);
            }
          }
          while ( _interlockedbittestandset64((volatile signed __int32 *)(v9 + 48), 0LL) )
          {
            v47 = v22->SchedulerAssist;
            if ( v47 )
            {
              if ( v22->NestingLevel <= 1u )
              {
                v54 = v47[6] - 1;
                v47[6] = v54;
                if ( !v54 )
                  KiRemoveSystemWorkPriorityKick(v22);
              }
            }
            do
              KeYieldProcessorEx(&v76);
            while ( *(_QWORD *)(v9 + 48) );
            v48 = v22->SchedulerAssist;
            if ( v48 )
            {
              if ( v22->NestingLevel <= 1u )
              {
                v55 = v48[6];
                v48[6] = v55 + 1;
                if ( v55 == -1 )
                  goto LABEL_97;
              }
            }
          }
          if ( a1 == *(_QWORD *)(v9 + 16) )
            goto LABEL_7;
          if ( *(_BYTE *)(a1 + 388) == 3 && *(_DWORD *)(a1 + 536) == (_DWORD)v21 )
            __fastfail(0x1Eu);
          goto LABEL_30;
        }
      }
    }
    v31 = *(unsigned int *)(a1 + 536);
    if ( (int)v31 >= 0 )
    {
      v37 = KeGetCurrentPrcb();
      v9 = KiProcessorBlock[v31];
      v78 = 0;
      v38 = v37->SchedulerAssist;
      if ( v38 )
      {
        if ( v37->NestingLevel <= 1u )
        {
          v59 = v38[6];
          v38[6] = v59 + 1;
          if ( v59 == -1 )
LABEL_115:
            KiRemoveSystemWorkPriorityKick(v37);
        }
      }
      while ( _interlockedbittestandset64((volatile signed __int32 *)(v9 + 48), 0LL) )
      {
        v43 = v37->SchedulerAssist;
        if ( v43 )
        {
          if ( v37->NestingLevel <= 1u )
          {
            v60 = v43[6] - 1;
            v43[6] = v60;
            if ( !v60 )
              KiRemoveSystemWorkPriorityKick(v37);
          }
        }
        do
          KeYieldProcessorEx(&v78);
        while ( *(_QWORD *)(v9 + 48) );
        v44 = v37->SchedulerAssist;
        if ( v44 )
        {
          if ( v37->NestingLevel <= 1u )
          {
            v61 = v44[6];
            v44[6] = v61 + 1;
            if ( v61 == -1 )
              goto LABEL_115;
          }
        }
      }
      if ( *(_BYTE *)(a1 + 388) == 1 && *(_DWORD *)(a1 + 536) == (_DWORD)v31 )
        goto LABEL_7;
      goto LABEL_30;
    }
    v32 = KeGetCurrentPrcb();
    v33 = (unsigned int)v31;
    LODWORD(v33) = v31 & 0x7FFFFFFF;
    v77 = 0;
    v34 = v32->SchedulerAssist;
    v10 = *(volatile signed __int32 **)(KiProcessorBlock[v33] + 33864);
    if ( v34 )
    {
      if ( v32->NestingLevel <= 1u )
      {
        v56 = v34[6];
        v34[6] = v56 + 1;
        if ( v56 == -1 )
LABEL_106:
          KiRemoveSystemWorkPriorityKick(v32);
      }
    }
    while ( _interlockedbittestandset64(v10, 0LL) )
    {
      v45 = v32->SchedulerAssist;
      if ( v45 )
      {
        if ( v32->NestingLevel <= 1u )
        {
          v57 = v45[6] - 1;
          v45[6] = v57;
          if ( !v57 )
            KiRemoveSystemWorkPriorityKick(v32);
        }
      }
      do
        KeYieldProcessorEx(&v77);
      while ( *(_QWORD *)v10 );
      v46 = v32->SchedulerAssist;
      if ( v46 )
      {
        if ( v32->NestingLevel <= 1u )
        {
          v58 = v46[6];
          v46[6] = v58 + 1;
          if ( v58 == -1 )
            goto LABEL_106;
        }
      }
    }
    if ( *(_BYTE *)(a1 + 388) == 1 && *(_DWORD *)(a1 + 536) == (_DWORD)v31 )
      break;
    _InterlockedAnd64((volatile signed __int64 *)v10, 0LL);
LABEL_31:
    v24 = KeGetCurrentPrcb();
    v25 = v24->SchedulerAssist;
    if ( v25 )
    {
      if ( v24->NestingLevel <= 1u )
      {
        v62 = v25[6] - 1;
        v25[6] = v62;
        if ( !v62 )
          KiRemoveSystemWorkPriorityKick(v24);
      }
    }
  }
  v9 = 0LL;
LABEL_7:
  *(_DWORD *)a2 = *(_DWORD *)(a1 + 436);
  v12 = *(_BYTE *)(a1 + 388);
  v13 = *(_DWORD *)(a1 + 132);
  if ( v12 == 1 || v12 == 7 && (*(_DWORD *)(a1 + 116) & 2) != 0 )
    v13 += MEMORY[0xFFFFF78000000320] - *(_DWORD *)(a1 + 436);
  *(_DWORD *)(a2 + 4) = v13;
  v14 = *(_QWORD *)(a1 + 992);
  v15 = *(_QWORD *)(a1 + 1000);
  if ( *(_BYTE *)(a1 + 388) == 5 )
  {
    v16 = *(_BYTE *)(a1 + 112) & 7;
    if ( v16 == 1 || (unsigned __int8)(v16 - 3) <= 3u )
    {
      v17 = (unsigned int)(MEMORY[0xFFFFF78000000320] - *(_DWORD *)(a1 + 436));
      if ( *(_BYTE *)(a1 + 391) )
        v15 += v17;
      else
        v14 += v17;
    }
  }
  *(_QWORD *)(a2 + 16) = v14;
  *(_QWORD *)(a2 + 24) = v15;
  if ( v9 )
  {
    _InterlockedAnd64((volatile signed __int64 *)(v9 + 48), 0LL);
    v29 = KeGetCurrentPrcb();
    v30 = v29->SchedulerAssist;
    if ( v30 )
    {
      if ( v29->NestingLevel <= 1u )
      {
        v66 = v30[6] - 1;
        v30[6] = v66;
        if ( !v66 )
          KiRemoveSystemWorkPriorityKick(v29);
      }
    }
  }
  if ( v10 )
  {
    _InterlockedAnd64((volatile signed __int64 *)v10, 0LL);
    v35 = KeGetCurrentPrcb();
    v36 = v35->SchedulerAssist;
    if ( v36 )
    {
      if ( v35->NestingLevel <= 1u )
      {
        v67 = v36[6] - 1;
        v36[6] = v67;
        if ( !v67 )
          KiRemoveSystemWorkPriorityKick(v35);
      }
    }
  }
  v3 = *(_BYTE *)(a1 + 643);
  *(_BYTE *)(a2 + 10) = *(_BYTE *)(a1 + 195);
  if ( (_BYTE)v8 == 5 && (*(_BYTE *)(a1 + 112) & 7) == 4 )
    v3 = 5;
LABEL_18:
  *(_BYTE *)(a2 + 11) = *(_BYTE *)(a1 + 563);
  *(_QWORD *)(a1 + 64) = 0LL;
  v18 = KeGetCurrentPrcb();
  v19 = v18->SchedulerAssist;
  if ( v19 )
  {
    if ( v18->NestingLevel <= 1u )
    {
      v68 = v19[6] - 1;
      v19[6] = v68;
      if ( !v68 )
        KiRemoveSystemWorkPriorityKick(v18);
    }
  }
  if ( KiIrqlFlags )
  {
    if ( (KiIrqlFlags & 1) != 0 )
    {
      v69 = KeGetCurrentIrql();
      if ( v69 <= 0xFu && CurrentIrql <= 0xFu && v69 >= 2u )
      {
        v70 = KeGetCurrentPrcb();
        v71 = v70->SchedulerAssist;
        v72 = ~(unsigned __int16)(-1LL << (CurrentIrql + 1));
        v73 = (v72 & v71[5]) == 0;
        v71[5] &= v72;
        if ( v73 )
          KiRemoveSystemWorkPriorityKick(v70);
      }
    }
  }
  result = CurrentIrql;
  __writecr8(CurrentIrql);
  *(_BYTE *)(a2 + 9) = v3;
  *(_BYTE *)(a2 + 8) = v8;
  return result;
}
