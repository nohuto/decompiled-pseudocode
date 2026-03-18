/*
 * XREFs of KiRemoveBoostThread @ 0x14035B110
 * Callers:
 *     ExpReleaseResourceExclusiveForThreadLite @ 0x1402B02B0 (ExpReleaseResourceExclusiveForThreadLite.c)
 *     ExpReleaseResourceSharedForThreadLite @ 0x1402B1740 (ExpReleaseResourceSharedForThreadLite.c)
 *     KeSetEventBoostPriorityEx @ 0x1403595B4 (KeSetEventBoostPriorityEx.c)
 *     KiCompleteDirectSwitchThread @ 0x14035B090 (KiCompleteDirectSwitchThread.c)
 *     KeWakeWaitChain @ 0x14035B8F4 (KeWakeWaitChain.c)
 *     KeGenericProcessorCallback @ 0x14035BB4C (KeGenericProcessorCallback.c)
 * Callees:
 *     KiGetThreadEffectiveRankNonZero @ 0x1402103E0 (KiGetThreadEffectiveRankNonZero.c)
 *     KiAbQueueAutoBoostDpc @ 0x140229D30 (KiAbQueueAutoBoostDpc.c)
 *     KiSelectReadyThreadEx @ 0x1402B7AE0 (KiSelectReadyThreadEx.c)
 *     KeYieldProcessorEx @ 0x1402F32E0 (KeYieldProcessorEx.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x140418E4C (KiRemoveSystemWorkPriorityKick.c)
 *     KiSetSchedulerAssistPriority @ 0x14045B7FC (KiSetSchedulerAssistPriority.c)
 */

char __fastcall KiRemoveBoostThread(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  struct _KPRCB *CurrentPrcb; // rsi
  _DWORD *SchedulerAssist; // rcx
  __int64 v8; // rdx
  __int64 v9; // r8
  char v10; // cl
  char v11; // bp
  unsigned int v12; // eax
  char v13; // si
  char v14; // r14
  struct _KPRCB *v15; // r15
  _DWORD *v16; // rcx
  char v17; // r12
  __int64 ready; // rax
  __int64 v19; // r15
  struct _KDPC *v20; // rcx
  _BYTE *v21; // r14
  char v22; // al
  __int64 v23; // rcx
  struct _KPRCB *v24; // rcx
  _DWORD *v25; // rdx
  struct _KPRCB *v26; // rcx
  _DWORD *v27; // r8
  _QWORD *p_DpcData; // rdx
  _DWORD *v30; // rcx
  _DWORD *v31; // rcx
  __int64 v32; // rdx
  __int64 v33; // rdx
  _DWORD *v34; // rcx
  _DWORD *v35; // rcx
  _BYTE *v36; // r13
  char v37; // cl
  char v38; // al
  __int64 v39; // rcx
  __int64 v40; // rax
  __int64 v41; // rdx
  __int64 v42; // rdx
  int v43; // eax
  int v44; // eax
  int v45; // eax
  int v46; // eax
  int v47; // eax
  int v48; // eax
  __int64 v49; // rdx
  unsigned int v50; // edx
  char v51; // al
  char v52; // al
  char v53; // cl
  __int64 v54; // rdx
  unsigned int v55; // edx
  char v56; // al
  char v57; // al
  int v58; // eax
  int v59; // edx
  int v60; // [rsp+78h] [rbp+10h] BYREF
  int v61; // [rsp+80h] [rbp+18h]
  int v62; // [rsp+88h] [rbp+20h] BYREF

  if ( !*(_BYTE *)(a2 + 564) )
    return *(_BYTE *)(a2 + 195) + 1;
  CurrentPrcb = KeGetCurrentPrcb();
  v60 = 0;
  SchedulerAssist = CurrentPrcb->SchedulerAssist;
  if ( SchedulerAssist )
  {
    if ( CurrentPrcb->NestingLevel <= 1u )
    {
      v43 = SchedulerAssist[6];
      SchedulerAssist[6] = v43 + 1;
      if ( v43 == -1 )
LABEL_66:
        KiRemoveSystemWorkPriorityKick(CurrentPrcb);
    }
  }
  while ( _interlockedbittestandset64((volatile signed __int32 *)(a2 + 64), 0LL) )
  {
    v30 = CurrentPrcb->SchedulerAssist;
    if ( v30 )
    {
      if ( CurrentPrcb->NestingLevel <= 1u )
      {
        v44 = v30[6] - 1;
        v30[6] = v44;
        if ( !v44 )
          KiRemoveSystemWorkPriorityKick(CurrentPrcb);
      }
    }
    do
      KeYieldProcessorEx(&v60, a2, a3, a4);
    while ( *(_QWORD *)(a2 + 64) );
    v31 = CurrentPrcb->SchedulerAssist;
    if ( v31 )
    {
      if ( CurrentPrcb->NestingLevel <= 1u )
      {
        v45 = v31[6];
        v31[6] = v45 + 1;
        if ( v45 == -1 )
          goto LABEL_66;
      }
    }
  }
  v8 = *(unsigned __int8 *)(a2 + 564);
  v9 = *(unsigned __int8 *)(a2 + 195);
  v10 = v8 & 0xF;
  v11 = v9 - (v8 & 0xF);
  if ( (v8 & 0xF) == 0 )
    v11 = *(_BYTE *)(a2 + 195);
  LOBYTE(v8) = (unsigned __int8)v8 >> 4;
  if ( (_BYTE)v8 )
  {
    v12 = *(_DWORD *)(a2 + 856);
    v13 = v9 - v8;
    *(_BYTE *)(a2 + 564) = v10;
    v61 = 0;
    if ( v12 )
    {
      _BitScanReverse((unsigned int *)&v8, v12);
      if ( v13 < (int)v8 )
        v13 = v8;
      v61 = v8;
    }
    if ( v13 != (_BYTE)v9 )
    {
      v14 = 0;
      v15 = KeGetCurrentPrcb();
      v62 = 0;
      v16 = v15->SchedulerAssist;
      if ( v16 )
      {
        if ( v15->NestingLevel <= 1u )
        {
          v46 = v16[6];
          v16[6] = v46 + 1;
          if ( v46 == -1 )
LABEL_75:
            KiRemoveSystemWorkPriorityKick(v15);
        }
      }
      while ( _interlockedbittestandset64((volatile signed __int32 *)(a1 + 48), 0LL) )
      {
        v34 = v15->SchedulerAssist;
        if ( v34 )
        {
          if ( v15->NestingLevel <= 1u )
          {
            v47 = v34[6] - 1;
            v34[6] = v47;
            if ( !v47 )
              KiRemoveSystemWorkPriorityKick(v15);
          }
        }
        do
          KeYieldProcessorEx(&v62, v8, v9, a4);
        while ( *(_QWORD *)(a1 + 48) );
        v35 = v15->SchedulerAssist;
        if ( v35 )
        {
          if ( v15->NestingLevel <= 1u )
          {
            v48 = v35[6];
            v35[6] = v48 + 1;
            if ( v48 == -1 )
              goto LABEL_75;
          }
        }
      }
      v17 = 64;
      if ( !*(_QWORD *)(a1 + 16) )
      {
        ready = KiSelectReadyThreadEx((struct _KPRCB *)a1, (_KTHREAD *)a2, 1LL);
        v19 = ready;
        if ( ready )
        {
          v36 = *(_BYTE **)(a1 + 56);
          if ( (*(_BYTE *)(ready + 2) & 4) != 0 )
          {
            if ( *(char *)(ready + 195) < 16
              && *(_QWORD *)(ready + 104)
              && (v41 = *(_QWORD *)(ready + 104)) != 0
              && (v42 = *(unsigned int *)(a1 + 216) + v41) != 0
              && (unsigned int)KiGetThreadEffectiveRankNonZero(ready, v42, v9, 0, 0LL) )
            {
              v37 = 1;
            }
            else
            {
              v37 = *(_BYTE *)(v19 + 195);
            }
          }
          else
          {
            v37 = *(_BYTE *)(ready + 195);
          }
          v38 = v37 & 0x7F | (*(_BYTE *)(v19 + 119) << 7);
          *v36 = v38;
          v39 = *(_QWORD *)(a1 + 35000);
          if ( v39 )
          {
            if ( v19 == *(_QWORD *)(a1 + 24) )
              v49 = (unsigned int)KiVpThreadSystemWorkPriority;
            else
              v49 = v38 & 0x7F;
            KiSetSchedulerAssistPriority(v39, v49, 0LL);
          }
          v9 = *(_QWORD *)(a1 + 56);
          if ( KeHeteroSystem )
          {
            v50 = *(_DWORD *)(v19 + 80);
            v51 = (*(_BYTE *)(v9 + 64) ^ *(_BYTE *)(v19 + 512)) & 7 ^ *(_BYTE *)(v9 + 64);
            v52 = (v51 ^ (8 * *(_BYTE *)(v19 + 516))) & 0x38 ^ v51;
            if ( v50 <= *(_DWORD *)(v19 + 84) )
              v50 = *(_DWORD *)(v19 + 84);
            v53 = 64;
            if ( v50 < KiDynamicHeteroCpuPolicyExpectedCycles )
              v53 = 0;
            *(_BYTE *)(v9 + 64) = v53 | v52 & 0xBF;
          }
          *(_QWORD *)(a1 + 16) = v19;
          v40 = *(_QWORD *)(a1 + 35000);
          if ( v40 )
            *(_BYTE *)(v40 + 16) = v19 == *(_QWORD *)(a1 + 24);
          if ( *(_BYTE *)(v19 + 388) == 1 )
            *(_DWORD *)(v19 + 132) = *(_DWORD *)(v19 + 132) - *(_DWORD *)(v19 + 436) + MEMORY[0xFFFFF78000000320];
          *(_BYTE *)(v19 + 388) = 3;
        }
        else
        {
          v14 = 1;
        }
      }
      v20 = (struct _KDPC *)KeGetCurrentPrcb();
      if ( v13 > *(char *)(a2 + 195) )
      {
        if ( *(_BYTE *)(a2 + 793) )
        {
          v9 = a2 + 808;
          if ( *(_QWORD *)(a2 + 808) == 1LL )
          {
            p_DpcData = &v20[557].DpcData;
            if ( v20 != (struct _KDPC *)-35704LL )
            {
              *(_QWORD *)v9 = *p_DpcData;
              *p_DpcData = v9;
              _InterlockedIncrement16((volatile signed __int16 *)(a2 + 868));
              KiAbQueueAutoBoostDpc(v20);
            }
          }
        }
      }
      *(_BYTE *)(a2 + 195) = v13;
      if ( v14 )
      {
        v21 = *(_BYTE **)(a1 + 56);
        if ( (*(_BYTE *)(a2 + 2) & 4) != 0 )
        {
          if ( v13 < 16
            && *(_QWORD *)(a2 + 104)
            && (v32 = *(_QWORD *)(a2 + 104)) != 0
            && (v33 = *(unsigned int *)(a1 + 216) + v32) != 0
            && (unsigned int)KiGetThreadEffectiveRankNonZero(a2, v33, v9, 0, 0LL) )
          {
            v13 = 1;
          }
          else
          {
            v13 = *(_BYTE *)(a2 + 195);
          }
        }
        v22 = v13 & 0x7F | (*(_BYTE *)(a2 + 119) << 7);
        *v21 = v22;
        v23 = *(_QWORD *)(a1 + 35000);
        if ( v23 )
        {
          if ( a2 == *(_QWORD *)(a1 + 24) )
            v54 = (unsigned int)KiVpThreadSystemWorkPriority;
          else
            v54 = v22 & 0x7F;
          KiSetSchedulerAssistPriority(v23, v54, 0LL);
        }
        v9 = *(_QWORD *)(a1 + 56);
        if ( KeHeteroSystem )
        {
          v55 = *(_DWORD *)(a2 + 80);
          v56 = (*(_BYTE *)(v9 + 64) ^ *(_BYTE *)(a2 + 512)) & 7 ^ *(_BYTE *)(v9 + 64);
          v57 = (v56 ^ (8 * *(_BYTE *)(a2 + 516))) & 0x38 ^ v56;
          if ( v55 <= *(_DWORD *)(a2 + 84) )
            v55 = *(_DWORD *)(a2 + 84);
          if ( v55 < KiDynamicHeteroCpuPolicyExpectedCycles )
            v17 = 0;
          *(_BYTE *)(v9 + 64) = v17 | v57 & 0xBF;
        }
      }
      if ( (*(_DWORD *)(a2 + 120) & 0x400000) != 0 )
      {
        LOBYTE(v9) = 1;
        KiSetSchedulerAssistPriority(*(_QWORD *)(a2 + 968), (unsigned int)*(char *)(a2 + 195), v9);
      }
      _InterlockedAnd64((volatile signed __int64 *)(a1 + 48), 0LL);
      v24 = KeGetCurrentPrcb();
      v25 = v24->SchedulerAssist;
      if ( v25 )
      {
        if ( v24->NestingLevel <= 1u )
        {
          v58 = v25[6] - 1;
          v25[6] = v58;
          if ( !v58 )
            KiRemoveSystemWorkPriorityKick(v24);
        }
      }
    }
  }
  else
  {
    ++v11;
  }
  *(_QWORD *)(a2 + 64) = 0LL;
  v26 = KeGetCurrentPrcb();
  v27 = v26->SchedulerAssist;
  if ( v27 && v26->NestingLevel <= 1u )
  {
    v59 = v27[6] - 1;
    v27[6] = v59;
    if ( !v59 )
      KiRemoveSystemWorkPriorityKick(v26);
  }
  return v11;
}
