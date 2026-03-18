/*
 * XREFs of KiHeteroChooseTargetProcessor @ 0x14045AFC6
 * Callers:
 *     KiDeferredReadySingleThread @ 0x1403405E0 (KiDeferredReadySingleThread.c)
 * Callees:
 *     KeYieldProcessorEx @ 0x1402F32E0 (KeYieldProcessorEx.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x140418E4C (KiRemoveSystemWorkPriorityKick.c)
 *     KiGenerateHeteroSets @ 0x14045ADBE (KiGenerateHeteroSets.c)
 *     KiSelectProcessorToPreempt @ 0x14045B3DA (KiSelectProcessorToPreempt.c)
 *     KiCanSelectSoftParkedProcessor @ 0x14045B8E6 (KiCanSelectSoftParkedProcessor.c)
 *     KiHeteroAttemptPreemptionSwap @ 0x140573DBC (KiHeteroAttemptPreemptionSwap.c)
 *     KiHeteroComputeThreadWorkloadProperties @ 0x140574018 (KiHeteroComputeThreadWorkloadProperties.c)
 *     KiHeteroSelectIdleProcessor @ 0x140574558 (KiHeteroSelectIdleProcessor.c)
 *     KiSelectCandidateProcessor @ 0x14057D168 (KiSelectCandidateProcessor.c)
 */

char __fastcall KiHeteroChooseTargetProcessor(__int64 a1, __int64 a2, __int64 *a3, __int64 a4)
{
  __int64 v4; // r12
  __int64 v6; // rdi
  char v7; // r15
  __int64 v8; // r13
  _QWORD *v9; // rsi
  int v10; // eax
  __int64 v11; // rbx
  __int64 v12; // rcx
  __int64 v13; // rbx
  __int64 v14; // rax
  __int64 v15; // rcx
  __int64 v16; // rdi
  __int64 v17; // rax
  __int64 v18; // rdx
  __int64 v19; // r9
  __int64 v20; // r8
  struct _KPRCB *CurrentPrcb; // rbx
  _DWORD *SchedulerAssist; // rcx
  int v23; // eax
  _DWORD *v24; // rcx
  int v25; // eax
  char CanSelectSoftParkedProcessor; // al
  __int64 v27; // r9
  __int64 v28; // rdi
  __int64 v29; // rdx
  __int64 v30; // r9
  __int64 v31; // r8
  __int64 v32; // rbx
  char v33; // cl
  int v34; // edx
  unsigned __int64 v35; // rax
  __int64 v36; // rax
  struct _KPRCB *v37; // rdi
  _DWORD *v38; // rcx
  int v39; // eax
  bool v40; // zf
  _DWORD *v41; // rcx
  int v42; // eax
  __int64 v43; // rdx
  struct _KPRCB *v44; // rcx
  _DWORD *v45; // rdx
  int v46; // eax
  struct _KPRCB *v47; // rcx
  _DWORD *v48; // rdx
  int v49; // eax
  int v51; // [rsp+40h] [rbp-40h] BYREF
  __int64 v52; // [rsp+48h] [rbp-38h]
  __int128 v53; // [rsp+50h] [rbp-30h] BYREF
  unsigned __int8 v54; // [rsp+60h] [rbp-20h]
  __int128 v55; // [rsp+68h] [rbp-18h] BYREF
  __int64 v56; // [rsp+78h] [rbp-8h]
  __int64 v57; // [rsp+C0h] [rbp+40h] BYREF
  __int64 v58; // [rsp+C8h] [rbp+48h]
  int v59; // [rsp+D0h] [rbp+50h]

  v58 = a2;
  v57 = a1;
  v4 = *a3;
  v54 = 0;
  v56 = 0LL;
  v52 = v4;
  v53 = 0LL;
  v6 = a2;
  v55 = 0LL;
  KiHeteroComputeThreadWorkloadProperties(a2, a2, &v53);
  v7 = 0;
  v8 = KiProcessorBlock[*(unsigned int *)(v6 + 588)];
  v9 = *(_QWORD **)(v8 + 192);
  while ( 1 )
  {
    do
    {
      while ( 1 )
      {
        v10 = KiGenerateHeteroSets((__int64)v9, v4, SHIDWORD(v53), v54, &v55);
        v11 = v9[1];
        if ( v7 && !v11 )
          v11 = v9[5] & v9[11];
        v12 = v56;
        if ( (v56 & v11) == 0 && !v10 )
        {
          v12 = v56;
          if ( (v56 & v9[10]) == 0 )
          {
            v12 = v4;
            *((_QWORD *)&v55 + 1) = v4;
            v56 = v4;
            *(_QWORD *)&v55 = v4;
          }
        }
        v13 = v12 & v11;
        if ( v7 && !v13 )
          v13 = v56 & v9[5] & v9[11];
        v14 = KiHeteroSelectIdleProcessor(v6, (_DWORD)v9, v8, v13, (__int64)&v53, (__int64)&v55);
        v16 = v14;
        if ( !v14 )
          break;
        LODWORD(v17) = KiHeteroAttemptPreemptionSwap((_DWORD)v9, v8, v13, v14, (__int64)&v53, (__int64)&v55, a4);
        v20 = 0LL;
        if ( (int)v17 >= 0 )
          return v17;
        if ( (_DWORD)v17 != -1073741267 )
        {
          CurrentPrcb = KeGetCurrentPrcb();
          LODWORD(v57) = 0;
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
                  KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
              }
            }
            if ( !_interlockedbittestandset64((volatile signed __int32 *)(v16 + 48), 0LL) )
              break;
            v24 = CurrentPrcb->SchedulerAssist;
            if ( v24 )
            {
              if ( CurrentPrcb->NestingLevel <= 1u )
              {
                v25 = v24[6] - 1;
                v24[6] = v25;
                if ( !v25 )
                  KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
              }
            }
            do
              KeYieldProcessorEx(&v57, v18, v20, v19);
            while ( *(_QWORD *)(v16 + 48) );
          }
          LOBYTE(v17) = *(_BYTE *)(v16 + 35);
          v4 = v52;
          if ( !(_BYTE)v17 || v7 && (_BYTE)v17 == 6 )
          {
            *(_QWORD *)a4 = v16;
            *(_DWORD *)(a4 + 8) = 1;
            return v17;
          }
          _InterlockedAnd64((volatile signed __int64 *)(v16 + 48), 0LL);
          goto LABEL_54;
        }
LABEL_2:
        LODWORD(v6) = v58;
      }
      if ( v7 )
        break;
      CanSelectSoftParkedProcessor = KiCanSelectSoftParkedProcessor(v15, v8, 0LL);
      LODWORD(v6) = v58;
      v7 = CanSelectSoftParkedProcessor;
    }
    while ( CanSelectSoftParkedProcessor );
    v27 = *((_QWORD *)&v55 + 1);
    v28 = v56;
    if ( *((_QWORD *)&v55 + 1) == v56 )
      v27 = 0LL;
    v17 = KiSelectProcessorToPreempt(v58, v8, v56, v27);
    v31 = 0LL;
    v32 = v17;
    if ( (v28 & *(_QWORD *)(v17 + 200)) == 0 )
    {
      v33 = *(_BYTE *)(v17 + 209);
      v34 = *(unsigned __int8 *)(v17 + 208);
      _BitScanForward64(&v35, __ROR8__(v28, v33));
      v59 = ((_BYTE)v35 + v33) & 0x3F;
      v36 = (unsigned int)(v59 + (v34 << 6));
      v29 = 0x140000000uLL;
      v17 = (unsigned int)KiProcessorNumberToIndexMappingTable[v36];
      v32 = KiProcessorBlock[v17];
    }
    v37 = KeGetCurrentPrcb();
    v51 = 0;
    while ( 1 )
    {
      v38 = v37->SchedulerAssist;
      if ( v38 )
      {
        if ( v37->NestingLevel <= 1u )
        {
          v39 = v38[6];
          v40 = v39 == -1;
          LODWORD(v17) = v39 + 1;
          v38[6] = v17;
          if ( v40 )
            LOBYTE(v17) = KiRemoveSystemWorkPriorityKick((__int64)v37);
        }
      }
      if ( !_interlockedbittestandset64((volatile signed __int32 *)(v32 + 48), 0LL) )
        break;
      v41 = v37->SchedulerAssist;
      if ( v41 )
      {
        if ( v37->NestingLevel <= 1u )
        {
          v42 = v41[6] - 1;
          v41[6] = v42;
          if ( !v42 )
            KiRemoveSystemWorkPriorityKick((__int64)v37);
        }
      }
      do
      {
        KeYieldProcessorEx(&v51, v29, v31, v30);
        v17 = *(_QWORD *)(v32 + 48);
      }
      while ( v17 );
    }
    v43 = v9[1];
    v4 = v52;
    if ( v7 )
    {
      v17 = v9[5] & v9[11];
      v43 |= v17;
    }
    if ( (v43 & v56) == 0 )
      break;
    _InterlockedAnd64((volatile signed __int64 *)(v32 + 48), 0LL);
LABEL_54:
    v44 = KeGetCurrentPrcb();
    LODWORD(v6) = v58;
    v45 = v44->SchedulerAssist;
    if ( v45 )
    {
      if ( v44->NestingLevel <= 1u )
      {
        v46 = v45[6] - 1;
        v45[6] = v46;
        if ( !v46 )
        {
          KiRemoveSystemWorkPriorityKick((__int64)v44);
          goto LABEL_2;
        }
      }
    }
  }
  v40 = (*(_BYTE *)(v32 + 35) & 2) == 0;
  *(_DWORD *)(a4 + 8) = 0;
  if ( !v40 )
  {
    _InterlockedAnd64((volatile signed __int64 *)(v32 + 48), 0LL);
    v47 = KeGetCurrentPrcb();
    v48 = v47->SchedulerAssist;
    if ( v48 )
    {
      if ( v47->NestingLevel <= 1u )
      {
        v49 = v48[6] - 1;
        v48[6] = v49;
        if ( !v49 )
          KiRemoveSystemWorkPriorityKick((__int64)v47);
      }
    }
    v17 = KiSelectCandidateProcessor(v32, v58, v56);
    v32 = v17;
    if ( (*(_BYTE *)(v17 + 35) & 1) == 0 )
      *(_DWORD *)(a4 + 8) = 1;
  }
  *(_QWORD *)a4 = v32;
  return v17;
}
