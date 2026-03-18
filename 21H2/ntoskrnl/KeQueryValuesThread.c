/*
 * XREFs of KeQueryValuesThread @ 0x140302C20
 * Callers:
 *     ExpGetProcessInformation @ 0x1407B6CA0 (ExpGetProcessInformation.c)
 *     PsQueryStatisticsProcess @ 0x1407B81B0 (PsQueryStatisticsProcess.c)
 *     NtQueryInformationThread @ 0x1407BF670 (NtQueryInformationThread.c)
 * Callees:
 *     KeYieldProcessorEx @ 0x1402F32E0 (KeYieldProcessorEx.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x140418E4C (KiRemoveSystemWorkPriorityKick.c)
 */

__int64 __fastcall KeQueryValuesThread(__int64 a1, _DWORD *a2, __int64 a3, _DWORD *SchedulerAssist)
{
  _DWORD *v4; // rdi
  char v5; // bp
  unsigned __int8 CurrentIrql; // r15
  struct _KPRCB *CurrentPrcb; // rsi
  _DWORD *v9; // rcx
  __int64 *v10; // rdx
  int v11; // esi
  __int64 v12; // rbp
  volatile signed __int32 *v13; // r14
  char v14; // al
  char v15; // al
  int v16; // ecx
  __int64 v17; // rdx
  __int64 v18; // rcx
  char v19; // al
  __int64 v20; // r8
  struct _KPRCB *v21; // rcx
  _DWORD *v22; // rdx
  __int64 result; // rax
  __int64 v24; // r12
  struct _KPRCB *v25; // r13
  _DWORD *v26; // rcx
  struct _KPRCB *v27; // rcx
  _DWORD *v28; // rdx
  __int64 v29; // rax
  struct _KPRCB *v30; // r13
  _DWORD *v31; // rcx
  struct _KPRCB *v32; // rcx
  _DWORD *v33; // rdx
  __int64 v34; // r12
  struct _KPRCB *v35; // rbp
  __int64 v36; // rax
  _DWORD *v37; // rcx
  struct _KPRCB *v38; // rcx
  _DWORD *v39; // rdx
  struct _KPRCB *v40; // r13
  _DWORD *v41; // rcx
  _DWORD *v42; // rcx
  _DWORD *v43; // rcx
  _DWORD *v44; // rcx
  _DWORD *v45; // rcx
  _DWORD *v46; // rcx
  _DWORD *v47; // rcx
  _DWORD *v48; // rcx
  _DWORD *v49; // rcx
  _DWORD *v50; // rcx
  _DWORD *v51; // rcx
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
  int v69; // eax
  int v70; // eax
  unsigned __int8 v71; // al
  struct _KPRCB *v72; // r9
  _DWORD *v73; // r8
  int v74; // eax
  bool v75; // zf
  int v76[6]; // [rsp+20h] [rbp-58h] BYREF
  int v77; // [rsp+80h] [rbp+8h] BYREF
  int v78; // [rsp+88h] [rbp+10h] BYREF
  int v79; // [rsp+90h] [rbp+18h] BYREF
  int v80; // [rsp+98h] [rbp+20h] BYREF

  v4 = a2;
  *a2 = 0;
  v5 = 0;
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu )
  {
    SchedulerAssist = KeGetCurrentPrcb()->SchedulerAssist;
    a2 = (_DWORD *)((-1LL << (CurrentIrql + 1)) & 4);
    a3 = (unsigned int)a2 | SchedulerAssist[5];
    SchedulerAssist[5] = a3;
  }
  CurrentPrcb = KeGetCurrentPrcb();
  v77 = 0;
  v9 = CurrentPrcb->SchedulerAssist;
  if ( v9 )
  {
    if ( CurrentPrcb->NestingLevel <= 1u )
    {
      v52 = v9[6];
      v9[6] = v52 + 1;
      if ( v52 == -1 )
LABEL_89:
        KiRemoveSystemWorkPriorityKick(CurrentPrcb);
    }
  }
  while ( _interlockedbittestandset64((volatile signed __int32 *)(a1 + 64), 0LL) )
  {
    v42 = CurrentPrcb->SchedulerAssist;
    if ( v42 )
    {
      if ( CurrentPrcb->NestingLevel <= 1u )
      {
        v53 = v42[6] - 1;
        v42[6] = v53;
        if ( !v53 )
          KiRemoveSystemWorkPriorityKick(CurrentPrcb);
      }
    }
    do
      KeYieldProcessorEx(&v77, (__int64)a2, a3, (__int64)SchedulerAssist);
    while ( *(_QWORD *)(a1 + 64) );
    v43 = CurrentPrcb->SchedulerAssist;
    if ( v43 )
    {
      if ( CurrentPrcb->NestingLevel <= 1u )
      {
        v54 = v43[6];
        v43[6] = v54 + 1;
        if ( v54 == -1 )
          goto LABEL_89;
      }
    }
  }
  if ( *(_UNKNOWN **)(a1 + 544) == &KiInitialProcess )
  {
    LOBYTE(v11) = *(_BYTE *)(a1 + 388);
    *((_BYTE *)v4 + 10) = 1;
    goto LABEL_19;
  }
LABEL_5:
  v10 = KiProcessorBlock;
  while ( 1 )
  {
    while ( 1 )
    {
      v11 = *(unsigned __int8 *)(a1 + 388);
      v12 = 0LL;
      v13 = 0LL;
      if ( v11 == 5 )
      {
        v14 = *(_BYTE *)(a1 + 112) & 7;
        if ( v14 == 1 || (unsigned __int8)(v14 - 3) <= 3u )
          goto LABEL_8;
        LOBYTE(v11) = 2;
        goto LABEL_39;
      }
      if ( *(_BYTE *)(a1 + 388) == 1 )
        break;
      if ( *(_BYTE *)(a1 + 388) == 2 )
      {
LABEL_39:
        v29 = *(unsigned int *)(a1 + 536);
        if ( (int)v29 >= 0 )
        {
          v30 = KeGetCurrentPrcb();
          v12 = KiProcessorBlock[v29];
          v76[0] = 0;
          v31 = v30->SchedulerAssist;
          if ( v31 )
          {
            if ( v30->NestingLevel <= 1u )
            {
              v65 = v31[6];
              v31[6] = v65 + 1;
              if ( v65 == -1 )
LABEL_128:
                KiRemoveSystemWorkPriorityKick(v30);
            }
          }
          while ( _interlockedbittestandset64((volatile signed __int32 *)(v12 + 48), 0LL) )
          {
            v46 = v30->SchedulerAssist;
            if ( v46 )
            {
              if ( v30->NestingLevel <= 1u )
              {
                v66 = v46[6] - 1;
                v46[6] = v66;
                if ( !v66 )
                  KiRemoveSystemWorkPriorityKick(v30);
              }
            }
            do
              KeYieldProcessorEx(v76, (__int64)v10, a3, (__int64)SchedulerAssist);
            while ( *(_QWORD *)(v12 + 48) );
            v47 = v30->SchedulerAssist;
            if ( v47 )
            {
              if ( v30->NestingLevel <= 1u )
              {
                v67 = v47[6];
                v47[6] = v67 + 1;
                if ( v67 == -1 )
                  goto LABEL_128;
              }
            }
          }
          if ( a1 == *(_QWORD *)(v12 + 8) )
            goto LABEL_8;
LABEL_34:
          _InterlockedAnd64((volatile signed __int64 *)(v12 + 48), 0LL);
          goto LABEL_35;
        }
      }
      else
      {
        if ( *(_BYTE *)(a1 + 388) != 3 )
          goto LABEL_8;
        v24 = *(unsigned int *)(a1 + 536);
        if ( (int)v24 >= 0 )
        {
          v25 = KeGetCurrentPrcb();
          v12 = KiProcessorBlock[v24];
          v78 = 0;
          v26 = v25->SchedulerAssist;
          if ( v26 )
          {
            if ( v25->NestingLevel <= 1u )
            {
              v55 = v26[6];
              v26[6] = v55 + 1;
              if ( v55 == -1 )
LABEL_98:
                KiRemoveSystemWorkPriorityKick(v25);
            }
          }
          while ( _interlockedbittestandset64((volatile signed __int32 *)(v12 + 48), 0LL) )
          {
            v50 = v25->SchedulerAssist;
            if ( v50 )
            {
              if ( v25->NestingLevel <= 1u )
              {
                v56 = v50[6] - 1;
                v50[6] = v56;
                if ( !v56 )
                  KiRemoveSystemWorkPriorityKick(v25);
              }
            }
            do
              KeYieldProcessorEx(&v78, (__int64)v10, a3, (__int64)SchedulerAssist);
            while ( *(_QWORD *)(v12 + 48) );
            v51 = v25->SchedulerAssist;
            if ( v51 )
            {
              if ( v25->NestingLevel <= 1u )
              {
                v57 = v51[6];
                v51[6] = v57 + 1;
                if ( v57 == -1 )
                  goto LABEL_98;
              }
            }
          }
          if ( a1 == *(_QWORD *)(v12 + 16) )
            goto LABEL_8;
          if ( *(_BYTE *)(a1 + 388) == 3 && *(_DWORD *)(a1 + 536) == (_DWORD)v24 )
            __fastfail(0x1Eu);
          goto LABEL_34;
        }
      }
    }
    v34 = *(unsigned int *)(a1 + 536);
    if ( (int)v34 >= 0 )
    {
      v40 = KeGetCurrentPrcb();
      v12 = KiProcessorBlock[v34];
      v80 = 0;
      v41 = v40->SchedulerAssist;
      if ( v41 )
      {
        if ( v40->NestingLevel <= 1u )
        {
          v61 = v41[6];
          v41[6] = v61 + 1;
          if ( v61 == -1 )
LABEL_116:
            KiRemoveSystemWorkPriorityKick(v40);
        }
      }
      while ( _interlockedbittestandset64((volatile signed __int32 *)(v12 + 48), 0LL) )
      {
        v44 = v40->SchedulerAssist;
        if ( v44 )
        {
          if ( v40->NestingLevel <= 1u )
          {
            v62 = v44[6] - 1;
            v44[6] = v62;
            if ( !v62 )
              KiRemoveSystemWorkPriorityKick(v40);
          }
        }
        do
          KeYieldProcessorEx(&v80, (__int64)v10, a3, (__int64)SchedulerAssist);
        while ( *(_QWORD *)(v12 + 48) );
        v45 = v40->SchedulerAssist;
        if ( v45 )
        {
          if ( v40->NestingLevel <= 1u )
          {
            v63 = v45[6];
            v45[6] = v63 + 1;
            if ( v63 == -1 )
              goto LABEL_116;
          }
        }
      }
      if ( *(_BYTE *)(a1 + 388) == 1 && *(_DWORD *)(a1 + 536) == (_DWORD)v34 )
        goto LABEL_8;
      goto LABEL_34;
    }
    v35 = KeGetCurrentPrcb();
    v36 = (unsigned int)v34;
    LODWORD(v36) = v34 & 0x7FFFFFFF;
    v79 = 0;
    v37 = v35->SchedulerAssist;
    v13 = *(volatile signed __int32 **)(KiProcessorBlock[v36] + 34888);
    if ( v37 )
    {
      if ( v35->NestingLevel <= 1u )
      {
        v58 = v37[6];
        v37[6] = v58 + 1;
        if ( v58 == -1 )
LABEL_107:
          KiRemoveSystemWorkPriorityKick(v35);
      }
    }
    while ( _interlockedbittestandset64(v13, 0LL) )
    {
      v48 = v35->SchedulerAssist;
      if ( v48 )
      {
        if ( v35->NestingLevel <= 1u )
        {
          v59 = v48[6] - 1;
          v48[6] = v59;
          if ( !v59 )
            KiRemoveSystemWorkPriorityKick(v35);
        }
      }
      do
        KeYieldProcessorEx(&v79, (__int64)v10, a3, (__int64)SchedulerAssist);
      while ( *(_QWORD *)v13 );
      v49 = v35->SchedulerAssist;
      if ( v49 )
      {
        if ( v35->NestingLevel <= 1u )
        {
          v60 = v49[6];
          v49[6] = v60 + 1;
          if ( v60 == -1 )
            goto LABEL_107;
        }
      }
    }
    if ( *(_BYTE *)(a1 + 388) == 1 && *(_DWORD *)(a1 + 536) == (_DWORD)v34 )
      break;
    _InterlockedAnd64((volatile signed __int64 *)v13, 0LL);
LABEL_35:
    v27 = KeGetCurrentPrcb();
    v28 = v27->SchedulerAssist;
    if ( !v28 || v27->NestingLevel > 1u )
      goto LABEL_5;
    v64 = v28[6] - 1;
    v28[6] = v64;
    v10 = KiProcessorBlock;
    if ( !v64 )
    {
      KiRemoveSystemWorkPriorityKick(v27);
      goto LABEL_5;
    }
  }
  v12 = 0LL;
LABEL_8:
  *v4 = *(_DWORD *)(a1 + 436);
  v15 = *(_BYTE *)(a1 + 388);
  v16 = *(_DWORD *)(a1 + 132);
  if ( v15 == 1 || v15 == 7 && (*(_DWORD *)(a1 + 116) & 2) != 0 )
    v16 += MEMORY[0xFFFFF78000000320] - *(_DWORD *)(a1 + 436);
  v4[1] = v16;
  v17 = *(_QWORD *)(a1 + 992);
  v18 = *(_QWORD *)(a1 + 1000);
  if ( *(_BYTE *)(a1 + 388) == 5 )
  {
    v19 = *(_BYTE *)(a1 + 112) & 7;
    if ( v19 == 1 || (unsigned __int8)(v19 - 3) <= 3u )
    {
      v20 = (unsigned int)(MEMORY[0xFFFFF78000000320] - *(_DWORD *)(a1 + 436));
      if ( *(_BYTE *)(a1 + 391) )
        v18 += v20;
      else
        v17 += v20;
    }
  }
  *((_QWORD *)v4 + 2) = v17;
  *((_QWORD *)v4 + 3) = v18;
  if ( v12 )
  {
    _InterlockedAnd64((volatile signed __int64 *)(v12 + 48), 0LL);
    v32 = KeGetCurrentPrcb();
    v33 = v32->SchedulerAssist;
    if ( v33 )
    {
      if ( v32->NestingLevel <= 1u )
      {
        v68 = v33[6] - 1;
        v33[6] = v68;
        if ( !v68 )
          KiRemoveSystemWorkPriorityKick(v32);
      }
    }
  }
  if ( v13 )
  {
    _InterlockedAnd64((volatile signed __int64 *)v13, 0LL);
    v38 = KeGetCurrentPrcb();
    v39 = v38->SchedulerAssist;
    if ( v39 )
    {
      if ( v38->NestingLevel <= 1u )
      {
        v69 = v39[6] - 1;
        v39[6] = v69;
        if ( !v69 )
          KiRemoveSystemWorkPriorityKick(v38);
      }
    }
  }
  v5 = *(_BYTE *)(a1 + 643);
  *((_BYTE *)v4 + 10) = *(_BYTE *)(a1 + 195);
  if ( (_BYTE)v11 == 5 && (*(_BYTE *)(a1 + 112) & 7) == 4 )
    v5 = 5;
LABEL_19:
  *((_BYTE *)v4 + 11) = *(_BYTE *)(a1 + 563);
  *(_QWORD *)(a1 + 64) = 0LL;
  v21 = KeGetCurrentPrcb();
  v22 = v21->SchedulerAssist;
  if ( v22 )
  {
    if ( v21->NestingLevel <= 1u )
    {
      v70 = v22[6] - 1;
      v22[6] = v70;
      if ( !v70 )
        KiRemoveSystemWorkPriorityKick(v21);
    }
  }
  if ( KiIrqlFlags )
  {
    if ( (KiIrqlFlags & 1) != 0 )
    {
      v71 = KeGetCurrentIrql();
      if ( v71 <= 0xFu && CurrentIrql <= 0xFu && v71 >= 2u )
      {
        v72 = KeGetCurrentPrcb();
        v73 = v72->SchedulerAssist;
        v74 = ~(unsigned __int16)(-1LL << (CurrentIrql + 1));
        v75 = (v74 & v73[5]) == 0;
        v73[5] &= v74;
        if ( v75 )
          KiRemoveSystemWorkPriorityKick(v72);
      }
    }
  }
  result = CurrentIrql;
  __writecr8(CurrentIrql);
  *((_BYTE *)v4 + 9) = v5;
  *((_BYTE *)v4 + 8) = v11;
  return result;
}
