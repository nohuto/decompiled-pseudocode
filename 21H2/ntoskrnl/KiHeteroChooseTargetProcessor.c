/*
 * XREFs of KiHeteroChooseTargetProcessor @ 0x14051F740
 * Callers:
 *     KiDeferredReadySingleThread @ 0x14034EC10 (KiDeferredReadySingleThread.c)
 * Callees:
 *     KeYieldProcessorEx @ 0x1402EFAD0 (KeYieldProcessorEx.c)
 *     KiIsQosGroupingActive @ 0x140398FA4 (KiIsQosGroupingActive.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403F3684 (KiRemoveSystemWorkPriorityKick.c)
 *     KiFindBiasedProcessorIndex @ 0x140518FAC (KiFindBiasedProcessorIndex.c)
 *     KiConvertDynamicHeteroPolicy @ 0x14051F3E0 (KiConvertDynamicHeteroPolicy.c)
 *     KiGenerateHeteroSets @ 0x14051F4F8 (KiGenerateHeteroSets.c)
 *     KiSelectProcessorToPreempt @ 0x14051FFB8 (KiSelectProcessorToPreempt.c)
 *     KiCanSelectSoftParkedProcessor @ 0x140525CD4 (KiCanSelectSoftParkedProcessor.c)
 *     KiSelectCandidateProcessor @ 0x140525DE4 (KiSelectCandidateProcessor.c)
 */

__int64 __fastcall KiHeteroChooseTargetProcessor(__int64 a1, __int64 a2, __int64 *a3, _DWORD *a4)
{
  unsigned int v4; // edi
  __int64 v5; // r14
  char v7; // si
  __int64 v8; // r12
  __int64 v9; // r15
  int v10; // eax
  __int64 v11; // rdx
  __int64 v12; // r9
  __int64 v13; // rbx
  __int64 v14; // r11
  __int64 v15; // rcx
  unsigned __int64 v16; // rbx
  __int64 v17; // r14
  char v18; // al
  __int64 v19; // rsi
  __int64 v20; // rdi
  __int64 v21; // r8
  struct _KPRCB *CurrentPrcb; // rsi
  _DWORD *SchedulerAssist; // rcx
  int v24; // eax
  _DWORD *v25; // rcx
  int v26; // eax
  __int64 v27; // rax
  struct _KPRCB *v28; // rcx
  _DWORD *v29; // rdx
  int v30; // eax
  int v31; // eax
  unsigned __int64 v32; // r14
  unsigned __int64 v33; // r8
  __int64 v34; // rax
  __int64 v35; // rcx
  __int64 v36; // rax
  unsigned __int64 v37; // r8
  bool v38; // zf
  int BiasedProcessorIndex; // eax
  char v40; // cl
  unsigned __int64 v41; // rax
  int v42; // ecx
  unsigned __int64 v43; // rax
  unsigned __int8 v44; // al
  struct _KPRCB *v45; // rbx
  _DWORD *v46; // rcx
  int v47; // eax
  _DWORD *v48; // rcx
  int v49; // eax
  char v50; // al
  __int64 v51; // r9
  __int64 v52; // rdi
  __int64 v53; // rax
  __int64 v54; // rdx
  __int64 v55; // r8
  __int64 v56; // r9
  __int64 v57; // rbx
  char v58; // cl
  int v59; // edx
  unsigned __int64 v60; // rax
  __int64 v61; // rax
  struct _KPRCB *v62; // rdi
  _DWORD *v63; // rcx
  int v64; // eax
  _DWORD *v65; // rcx
  int v66; // eax
  __int64 v67; // rdx
  struct _KPRCB *v69; // rcx
  _DWORD *v70; // rdx
  int v71; // eax
  __int64 v72; // [rsp+30h] [rbp-39h]
  __int64 v73; // [rsp+38h] [rbp-31h] BYREF
  __int64 v74; // [rsp+40h] [rbp-29h] BYREF
  _DWORD v75[2]; // [rsp+48h] [rbp-21h] BYREF
  int v76; // [rsp+50h] [rbp-19h]
  int v77; // [rsp+54h] [rbp-15h] BYREF
  int v78; // [rsp+58h] [rbp-11h]
  int v79; // [rsp+5Ch] [rbp-Dh] BYREF
  __int64 v80; // [rsp+60h] [rbp-9h] BYREF
  __int64 v81; // [rsp+68h] [rbp-1h]
  char CanSelectSoftParkedProcessor; // [rsp+D8h] [rbp+6Fh]
  unsigned int v84; // [rsp+E0h] [rbp+77h]

  v4 = *(unsigned __int8 *)(a2 + 125);
  v5 = *a3;
  v73 = 0LL;
  v80 = 0LL;
  v74 = 0LL;
  v72 = v5;
  v84 = v4;
  if ( v4 >= 5 )
  {
    v4 = KiConvertDynamicHeteroPolicy(a2, a2, a1);
    v84 = v4;
  }
  v7 = 0;
  CanSelectSoftParkedProcessor = 0;
  v8 = KiProcessorBlock[*(unsigned int *)(a2 + 588)];
  v81 = v8;
  v9 = *(_QWORD *)(v8 + 192);
  do
  {
    while ( 1 )
    {
      v10 = KiGenerateHeteroSets(v9, v5, v4, &v80, &v74, &v73);
      v13 = *(_QWORD *)v9;
      v14 = 0LL;
      if ( v7 && !v13 )
        v13 = *(_QWORD *)(v9 + 24) & *(_QWORD *)(v9 + 88);
      v15 = v73;
      if ( (v13 & v73) == 0 && !v10 )
      {
        v15 = v73;
        if ( (*(_QWORD *)(v9 + 80) & v73) == 0 )
        {
          v15 = v5;
          v74 = v5;
          v73 = v5;
          v80 = v5;
        }
      }
      v16 = v15 & v13;
      if ( v7 && !v16 )
        v16 = v73 & *(_QWORD *)(v9 + 24) & *(_QWORD *)(v9 + 88);
      v17 = *(_QWORD *)(v9 + 8);
      if ( (KiVelocityFlags & 0x4000) == 0 || *(_BYTE *)(a2 + 512) || (v18 = 1, v4 - 1 > 1) )
        v18 = 0;
      if ( !v18 || (v74 & v17) != 0 )
        break;
      v15 = v74 & *(_QWORD *)(v9 + 80) & *(_QWORD *)(v9 + 368);
      v19 = *(_QWORD *)(v9 + 16) & v15;
      if ( !v19 )
        v19 = v74 & *(_QWORD *)(v9 + 80) & *(_QWORD *)(v9 + 368);
      if ( !v19 )
        goto LABEL_55;
      v20 = KiSelectProcessorToPreempt(a2, v8, v19, 0LL);
      if ( (v19 & *(_QWORD *)(v20 + 200)) == 0 )
        goto LABEL_53;
      CurrentPrcb = KeGetCurrentPrcb();
      v75[0] = 0;
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
              KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
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
              KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
          }
        }
        do
          KeYieldProcessorEx(v75, v11, v21, v12);
        while ( *(_QWORD *)(v20 + 48) );
      }
      v8 = v81;
      if ( (*(_BYTE *)(v20 + 35) & 2) != 0 )
      {
        v14 = 0LL;
LABEL_49:
        _InterlockedAnd64((volatile signed __int64 *)(v20 + 48), 0LL);
        v15 = (__int64)KeGetCurrentPrcb();
        v11 = *(_QWORD *)(v15 + 33976);
        if ( v11 )
        {
          if ( *(_BYTE *)(v15 + 32) <= 1u )
          {
            v31 = *(_DWORD *)(v11 + 24) - 1;
            *(_DWORD *)(v11 + 24) = v31;
            if ( !v31 )
            {
              KiRemoveSystemWorkPriorityKick(v15);
LABEL_53:
              v14 = 0LL;
            }
          }
        }
        v4 = v84;
LABEL_55:
        v7 = CanSelectSoftParkedProcessor;
        break;
      }
      v14 = 0LL;
      if ( **(_BYTE **)(v20 + 56) >= *(_BYTE *)(a2 + 195) )
        goto LABEL_49;
      v27 = *(_QWORD *)(v20 + 16);
      if ( !v27 )
        v27 = *(_QWORD *)(v20 + 8);
      if ( (unsigned int)(unsigned __int8)*(_DWORD *)(v27 + 512) - 1 > 1 )
        goto LABEL_49;
      if ( (*(_QWORD *)(v9 + 8) & v74) == 0
        && ((*(_QWORD *)(v9 + 16) & *(_QWORD *)(v20 + 200)) != 0LL
         || (v74 & *(_QWORD *)(v9 + 80) & *(_QWORD *)(v9 + 368) & *(_QWORD *)(v9 + 16)) == 0) )
      {
        *a4 = (*(_BYTE *)(v20 + 35) & 1) == 0;
        return v20;
      }
      _InterlockedAnd64((volatile signed __int64 *)(v20 + 48), 0LL);
      v7 = CanSelectSoftParkedProcessor;
LABEL_44:
      v28 = KeGetCurrentPrcb();
      v4 = v84;
      v5 = v72;
      v29 = v28->SchedulerAssist;
      if ( v29 )
      {
        if ( v28->NestingLevel <= 1u )
        {
          v30 = v29[6] - 1;
          v29[6] = v30;
          if ( !v30 )
            KiRemoveSystemWorkPriorityKick((__int64)v28);
        }
      }
    }
    if ( v16 )
    {
      if ( (*(_BYTE *)(v9 + 181) & 0x20) != 0 )
      {
        if ( KiIsQosGroupingActive()
          && (v11 &= v16) != 0
          && (unsigned int)(unsigned __int8)*(_DWORD *)(a2 + 512) - 1 <= 1 )
        {
          v16 = v11 & ~v17;
          if ( !v16 )
            v16 = v11;
        }
        else
        {
          v32 = v16 & v17;
          if ( v32 )
            v16 = v32;
        }
      }
      v33 = (unsigned int)v14;
      v34 = v80 & v16;
      if ( (v80 & v16) == 0 )
      {
        v34 = v16 & v74;
        if ( (v16 & v74) == 0 )
          goto LABEL_70;
        v33 = 1LL;
      }
      v16 = v34;
LABEL_70:
      if ( KeHeteroSystemQos != (_DWORD)v14 )
      {
        v35 = (unsigned __int8)*(_DWORD *)(a2 + 512);
        v36 = *(_QWORD *)(a1 + 192);
        v11 = v16 & *(_QWORD *)(v36 + 8 * v35 + 304);
        if ( v11 )
          v16 &= *(_QWORD *)(v36 + 8 * v35 + 304);
      }
      v20 = v8;
      if ( (v16 & *(_QWORD *)(v8 + 200)) == 0 || (_DWORD)v33 )
      {
        if ( (_DWORD)v33 )
        {
          v20 = v14;
          LOBYTE(v12) = v14;
          if ( v16 )
          {
            v33 = *(unsigned __int16 *)(v9 + 144) << 6;
            do
            {
              _BitScanForward64(&v43, v16);
              v76 = v43 & 0x3F;
              v11 = KiProcessorBlock[KiProcessorNumberToIndexMappingTable[(unsigned int)(v33 + v76)]];
              if ( v84 - 3 <= 1 )
                v44 = *(_BYTE *)(v11 + 33210);
              else
                v44 = *(_BYTE *)(v11 + 33209);
              if ( !v20 || v44 > (unsigned __int8)v12 )
              {
                v20 = KiProcessorBlock[KiProcessorNumberToIndexMappingTable[(unsigned int)(v33 + v76)]];
                LOBYTE(v12) = v44;
              }
              v16 &= ~*(_QWORD *)(v11 + 200);
            }
            while ( v16 );
            v8 = v81;
          }
        }
        else
        {
          v37 = v16 & *(_QWORD *)(v8 + 33880);
          if ( !v37 )
            v37 = v16;
          if ( (KiHeteroSchedulerOptions & 1) != 0 )
            v38 = (KiHeteroSchedulerOptions & 4) == 0;
          else
            v38 = (((KiDynamicHeteroCpuPolicyMask & 0x10) != 0) & _bittest(&KiVelocityFlags, 0xCu)) == 0;
          if ( v38 )
          {
            v40 = *(_BYTE *)(v8 + 209);
            v33 = __ROR8__(v37, v40);
            _BitScanForward64(&v41, v33);
            v42 = ((_BYTE)v41 + v40) & 0x3F;
            v11 = v42 + (*(unsigned __int8 *)(v8 + 208) << 6);
            v75[1] = v42;
            BiasedProcessorIndex = KiProcessorNumberToIndexMappingTable[v11];
          }
          else
          {
            BiasedProcessorIndex = KiFindBiasedProcessorIndex(
                                     *(unsigned __int8 *)(v8 + 208),
                                     (*(_QWORD *)(a2 + 72) >> KiFavoredCoreCycleTimeBits)
                                   + *(unsigned __int8 *)(v8 + 209),
                                     v37);
            LODWORD(v14) = 0;
          }
          v20 = KiProcessorBlock[BiasedProcessorIndex];
        }
      }
      v45 = KeGetCurrentPrcb();
      v77 = v14;
      *a4 = 1;
      while ( 1 )
      {
        v46 = v45->SchedulerAssist;
        if ( v46 )
        {
          if ( v45->NestingLevel <= 1u )
          {
            v47 = v46[6];
            v46[6] = v47 + 1;
            if ( v47 == -1 )
              KiRemoveSystemWorkPriorityKick((__int64)v45);
          }
        }
        if ( !_interlockedbittestandset64((volatile signed __int32 *)(v20 + 48), 0LL) )
          break;
        v48 = v45->SchedulerAssist;
        if ( v48 )
        {
          if ( v45->NestingLevel <= 1u )
          {
            v49 = v48[6] - 1;
            v48[6] = v49;
            if ( !v49 )
              KiRemoveSystemWorkPriorityKick((__int64)v45);
          }
        }
        do
          KeYieldProcessorEx(&v77, v11, v33, v12);
        while ( *(_QWORD *)(v20 + 48) );
      }
      v50 = *(_BYTE *)(v20 + 35);
      v7 = CanSelectSoftParkedProcessor;
      if ( !v50 || CanSelectSoftParkedProcessor && v50 == 6 )
        return v20;
      _InterlockedAnd64((volatile signed __int64 *)(v20 + 48), 0LL);
      goto LABEL_44;
    }
    if ( v7 )
      break;
    v5 = v72;
    CanSelectSoftParkedProcessor = KiCanSelectSoftParkedProcessor(v15, v8);
    v7 = CanSelectSoftParkedProcessor;
  }
  while ( CanSelectSoftParkedProcessor );
  v51 = v74;
  v52 = v73;
  if ( v74 == v73 )
    v51 = 0LL;
  v53 = KiSelectProcessorToPreempt(a2, v8, v73, v51);
  v57 = v53;
  if ( (v52 & *(_QWORD *)(v53 + 200)) == 0 )
  {
    v58 = *(_BYTE *)(v53 + 209);
    v59 = *(unsigned __int8 *)(v53 + 208);
    _BitScanForward64(&v60, __ROR8__(v52, v58));
    v78 = ((_BYTE)v60 + v58) & 0x3F;
    v61 = (unsigned int)(v78 + (v59 << 6));
    v54 = 0x140000000uLL;
    v57 = KiProcessorBlock[KiProcessorNumberToIndexMappingTable[v61]];
  }
  v62 = KeGetCurrentPrcb();
  v79 = 0;
  while ( 1 )
  {
    v63 = v62->SchedulerAssist;
    if ( v63 )
    {
      if ( v62->NestingLevel <= 1u )
      {
        v64 = v63[6];
        v63[6] = v64 + 1;
        if ( v64 == -1 )
          KiRemoveSystemWorkPriorityKick((__int64)v62);
      }
    }
    if ( !_interlockedbittestandset64((volatile signed __int32 *)(v57 + 48), 0LL) )
      break;
    v65 = v62->SchedulerAssist;
    if ( v65 )
    {
      if ( v62->NestingLevel <= 1u )
      {
        v66 = v65[6] - 1;
        v65[6] = v66;
        if ( !v66 )
          KiRemoveSystemWorkPriorityKick((__int64)v62);
      }
    }
    do
      KeYieldProcessorEx(&v79, v54, v55, v56);
    while ( *(_QWORD *)(v57 + 48) );
  }
  v67 = *(_QWORD *)v9;
  if ( v7 )
    v67 |= *(_QWORD *)(v9 + 24) & *(_QWORD *)(v9 + 88);
  if ( (v67 & v73) != 0 )
  {
    _InterlockedAnd64((volatile signed __int64 *)(v57 + 48), 0LL);
    goto LABEL_44;
  }
  v38 = (*(_BYTE *)(v57 + 35) & 2) == 0;
  *a4 = 0;
  if ( !v38 )
  {
    _InterlockedAnd64((volatile signed __int64 *)(v57 + 48), 0LL);
    v69 = KeGetCurrentPrcb();
    v70 = v69->SchedulerAssist;
    if ( v70 )
    {
      if ( v69->NestingLevel <= 1u )
      {
        v71 = v70[6] - 1;
        v70[6] = v71;
        if ( !v71 )
          KiRemoveSystemWorkPriorityKick((__int64)v69);
      }
    }
    v57 = KiSelectCandidateProcessor(v57, a2, v73, v56);
    if ( (*(_BYTE *)(v57 + 35) & 1) == 0 )
      *a4 = 1;
  }
  return v57;
}
