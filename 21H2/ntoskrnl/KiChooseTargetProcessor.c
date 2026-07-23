/*
 * XREFs of KiChooseTargetProcessor @ 0x14034FB30
 * Callers:
 *     KiDeferredReadySingleThread @ 0x14034EC10 (KiDeferredReadySingleThread.c)
 * Callees:
 *     MmGetNextNode @ 0x140211644 (MmGetNextNode.c)
 *     KiReduceByEffectiveIdleSmtSet @ 0x140234654 (KiReduceByEffectiveIdleSmtSet.c)
 *     KeYieldProcessorEx @ 0x1402EFAD0 (KeYieldProcessorEx.c)
 *     KiTryLocalThreadSchedule @ 0x1403502B0 (KiTryLocalThreadSchedule.c)
 *     KiSelectIdleProcessor @ 0x1403909A8 (KiSelectIdleProcessor.c)
 *     __security_check_cookie @ 0x1403D05D0 (__security_check_cookie.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403F3684 (KiRemoveSystemWorkPriorityKick.c)
 *     memmove @ 0x140414040 (memmove.c)
 *     KeQueryReadyQueueStatsProcessor @ 0x140514718 (KeQueryReadyQueueStatsProcessor.c)
 *     KiFindRankBiasedIdleSmtSet @ 0x14051F43C (KiFindRankBiasedIdleSmtSet.c)
 *     KiSelectCandidateProcessor @ 0x140525DE4 (KiSelectCandidateProcessor.c)
 */

__int64 __fastcall KiChooseTargetProcessor(__int64 a1, __int64 a2, __int64 *a3, __int64 a4, unsigned __int8 a5)
{
  unsigned int v5; // r15d
  char v6; // r12
  __int64 v7; // r10
  __int64 v9; // r11
  __int64 v10; // rax
  __int64 v11; // rsi
  __int64 v12; // rdx
  __int64 v13; // rbx
  unsigned __int64 v14; // r8
  __int64 v15; // rax
  __int64 v16; // r14
  __int64 *v17; // rdi
  unsigned __int64 v18; // r15
  unsigned __int64 v19; // rax
  struct _KPRCB *CurrentPrcb; // rdi
  _DWORD *SchedulerAssist; // rcx
  char v22; // al
  unsigned __int64 v24; // rax
  unsigned __int64 v25; // rax
  unsigned __int64 v26; // rax
  char v27; // cl
  unsigned __int64 v28; // rax
  int v29; // ecx
  __int64 v30; // rax
  __int64 v31; // r15
  __int64 v32; // rax
  __int64 v33; // r12
  __int64 v34; // rsi
  unsigned int v35; // esi
  __int64 v36; // r15
  unsigned __int8 *v37; // rdx
  __int64 v38; // rdi
  int v39; // ebx
  char *v40; // rsi
  char v41; // r12
  int v42; // r10d
  __int64 v43; // r11
  __int64 v44; // rax
  struct _KPRCB *v45; // rbx
  _QWORD *v46; // rdi
  _DWORD *v47; // rcx
  __int64 v48; // rcx
  _DWORD *v49; // rdi
  _DWORD *v50; // rcx
  _DWORD *v51; // rcx
  struct _KPRCB *v52; // rcx
  _DWORD *v53; // rdx
  unsigned int NextNode; // eax
  __int64 v55; // rcx
  _DWORD *v56; // rcx
  _DWORD *v57; // rcx
  _DWORD *v58; // rdx
  char RankBiasedIdleSmtSet; // al
  int v60; // eax
  int v61; // eax
  int v62; // eax
  bool v63; // zf
  unsigned int v64; // ecx
  char *v65; // rbx
  int v66; // eax
  int v67; // eax
  int v68; // eax
  struct _KPRCB *v69; // rcx
  _DWORD *v70; // rdx
  int v71; // eax
  __int64 v72; // rax
  unsigned __int16 v73; // [rsp+30h] [rbp-B1h]
  unsigned int v74; // [rsp+34h] [rbp-ADh]
  __int64 v76; // [rsp+40h] [rbp-A1h]
  unsigned __int64 v77; // [rsp+48h] [rbp-99h] BYREF
  __int64 v78; // [rsp+50h] [rbp-91h]
  int v79; // [rsp+58h] [rbp-89h] BYREF
  int v80; // [rsp+5Ch] [rbp-85h] BYREF
  __int64 v81; // [rsp+60h] [rbp-81h]
  int v82; // [rsp+68h] [rbp-79h]
  int v83; // [rsp+6Ch] [rbp-75h] BYREF
  int v84; // [rsp+70h] [rbp-71h] BYREF
  __int128 v85; // [rsp+78h] [rbp-69h]
  __int64 v86; // [rsp+88h] [rbp-59h] BYREF
  __int64 v87; // [rsp+90h] [rbp-51h] BYREF
  _DWORD *v88; // [rsp+98h] [rbp-49h]
  _BYTE v89[64]; // [rsp+A0h] [rbp-41h] BYREF

  v6 = a5;
  v7 = *a3;
  LOBYTE(v5) = 0;
  v88 = (_DWORD *)a4;
  LOWORD(a4) = *((_WORD *)a3 + 4);
  v9 = a1;
  v73 = a4;
  v79 = 0;
  v85 = 0LL;
  v76 = v7;
  v74 = v5;
  while ( 1 )
  {
    while ( 1 )
    {
      while ( 1 )
      {
        v10 = *(unsigned int *)(a2 + 536);
        LODWORD(v10) = v10 & 0x7FFFFFFF;
        WORD4(v85) = a4;
        v11 = KiProcessorBlock[v10];
        if ( (_WORD)a4 == *(unsigned __int8 *)(v9 + 208) )
        {
          v13 = KiTryLocalThreadSchedule(v9, v11, a2, v7, v6, v5);
          if ( v13 )
            goto LABEL_18;
          v7 = v76;
          v9 = a1;
        }
        v15 = *(unsigned int *)(a2 + 588);
        v13 = 0LL;
        a4 = *(_QWORD *)(v11 + 192);
        v12 = v74;
        v78 = a4;
        v16 = KiProcessorBlock[v15];
        *(_QWORD *)&v85 = v7;
        v17 = *(__int64 **)(v16 + 192);
        if ( (__int64 *)a4 == v17 )
          v13 = v11;
        v18 = *v17;
        v14 = v7 & *v17;
        v77 = v14;
        v19 = v14;
        if ( (_BYTE)v74 )
        {
          if ( !v14 )
          {
            v18 = v17[3] & v17[11];
            v14 = v7 & v18;
            v77 = v7 & v18;
            v19 = v7 & v18;
            goto LABEL_8;
          }
LABEL_9:
          if ( (*((_BYTE *)v17 + 181) & 0x20) == 0 )
            goto LABEL_14;
          if ( v6 )
          {
            RankBiasedIdleSmtSet = KiFindRankBiasedIdleSmtSet(v16, &v77);
            v7 = v76;
            a4 = v78;
            if ( RankBiasedIdleSmtSet )
            {
              v14 = v77;
              goto LABEL_14;
            }
            v9 = a1;
          }
          v14 = v77;
          v12 = v77 & v17[1];
          if ( v12 )
          {
            if ( v6
              && (unsigned int)((0x101010101010101LL
                               * ((((v18 - ((v18 >> 1) & 0x5555555555555555LL)) & 0x3333333333333333LL)
                                 + (((v18 - ((v18 >> 1) & 0x5555555555555555LL)) >> 2) & 0x3333333333333333LL)
                                 + ((((v18 - ((v18 >> 1) & 0x5555555555555555LL)) & 0x3333333333333333LL)
                                   + (((v18 - ((v18 >> 1) & 0x5555555555555555LL)) >> 2) & 0x3333333333333333LL)) >> 4)) & 0xF0F0F0F0F0F0F0FLL)) >> 32) >> 24 < KiPerfIsoEnabled )
            {
              goto LABEL_106;
            }
            v14 = v77 & v17[1];
            v77 = v14;
          }
          else
          {
            if ( v6 )
            {
LABEL_106:
              v12 = v74;
              goto LABEL_34;
            }
            if ( *(__int64 **)(v9 + 192) == v17 )
            {
              KiReduceByEffectiveIdleSmtSet(v9, &v77);
              v14 = v77;
              v7 = v76;
              a4 = v78;
            }
          }
LABEL_14:
          if ( (v14 & *(_QWORD *)(v16 + 200)) != 0 )
          {
            v13 = v16;
          }
          else if ( !v13 || (v14 & *(_QWORD *)(v13 + 200)) == 0 )
          {
            v24 = v14 & *(_QWORD *)(v16 + 33880);
            if ( v24 )
            {
              v14 &= *(_QWORD *)(v16 + 33880);
              v77 = v24;
            }
            else if ( v13 && (v25 = v14 & *(_QWORD *)(v13 + 33880)) != 0 )
            {
              v14 &= *(_QWORD *)(v13 + 33880);
              v77 = v25;
            }
            else if ( (KiCacheAwareScheduling & 1) != 0 )
            {
              v26 = v14 & *(_QWORD *)(v16 + 33896);
              if ( v26 )
              {
                v14 &= *(_QWORD *)(v16 + 33896);
                v77 = v26;
              }
              else if ( v13 )
              {
                if ( (v14 & *(_QWORD *)(v13 + 33896)) != 0 )
                  v14 &= *(_QWORD *)(v13 + 33896);
                v77 = v14;
              }
            }
            v27 = *(_BYTE *)(v16 + 209);
            v14 = __ROR8__(v14, v27);
            _BitScanForward64(&v28, v14);
            v29 = ((_BYTE)v28 + v27) & 0x3F;
            v12 = v29 + (*(unsigned __int8 *)(v16 + 208) << 6);
            v82 = v29;
            v13 = KiProcessorBlock[KiProcessorNumberToIndexMappingTable[v12]];
          }
          if ( v13 )
            goto LABEL_17;
          goto LABEL_106;
        }
LABEL_8:
        if ( v19 )
          goto LABEL_9;
LABEL_34:
        v81 = v17[17];
        v30 = v81;
        v31 = v7 & ~v81;
        *(_QWORD *)&v85 = v31;
        if ( (__int64 *)a4 == v17 || !v31 || *(_WORD *)(a4 + 144) != v73 )
          break;
        v13 = KiSelectIdleProcessor(v7, a1, v78, v11, v6, v12);
        if ( !v13 )
        {
          v30 = v81;
          v7 = v76;
          a4 = v78;
          break;
        }
LABEL_17:
        LOBYTE(v5) = v74;
LABEL_18:
        CurrentPrcb = KeGetCurrentPrcb();
        v83 = 0;
        SchedulerAssist = CurrentPrcb->SchedulerAssist;
        if ( SchedulerAssist )
        {
          if ( CurrentPrcb->NestingLevel <= 1u )
          {
            v60 = SchedulerAssist[6];
            SchedulerAssist[6] = v60 + 1;
            if ( v60 == -1 )
LABEL_113:
              KiRemoveSystemWorkPriorityKick(CurrentPrcb);
          }
        }
        while ( _interlockedbittestandset64((volatile signed __int32 *)(v13 + 48), 0LL) )
        {
          v50 = CurrentPrcb->SchedulerAssist;
          if ( v50 )
          {
            if ( CurrentPrcb->NestingLevel <= 1u )
            {
              v61 = v50[6] - 1;
              v50[6] = v61;
              if ( !v61 )
                KiRemoveSystemWorkPriorityKick(CurrentPrcb);
            }
          }
          do
            KeYieldProcessorEx(&v83, v12, v14, a4);
          while ( *(_QWORD *)(v13 + 48) );
          v51 = CurrentPrcb->SchedulerAssist;
          if ( v51 )
          {
            if ( CurrentPrcb->NestingLevel <= 1u )
            {
              v62 = v51[6];
              v51[6] = v62 + 1;
              if ( v62 == -1 )
                goto LABEL_113;
            }
          }
        }
        v22 = *(_BYTE *)(v13 + 35);
        if ( !v22 || (_BYTE)v5 && v22 == 6 )
        {
          *v88 = 1;
          return v13;
        }
        _InterlockedAnd64((volatile signed __int64 *)(v13 + 48), 0LL);
        v52 = KeGetCurrentPrcb();
        v7 = v76;
        v9 = a1;
        LOWORD(a4) = v73;
        v53 = v52->SchedulerAssist;
        if ( v53 && v52->NestingLevel <= 1u )
        {
          v63 = v53[6]-- == 1;
LABEL_97:
          if ( v63 )
          {
            KiRemoveSystemWorkPriorityKick(v52);
            v9 = a1;
            LOWORD(a4) = v73;
            goto LABEL_99;
          }
        }
      }
      if ( v73 == *(_WORD *)(a4 + 144) )
        v31 = v7 & ~(v30 | *(_QWORD *)(a4 + 136));
      v9 = a1;
      *(_QWORD *)&v85 = v31;
      v32 = *(_QWORD *)(a1 + 192);
      v81 = v32;
      if ( (__int64 *)v32 != v17 && v32 != a4 && v31 )
      {
        if ( v73 != *(_WORD *)(v32 + 144) )
        {
LABEL_96:
          v33 = v31;
          goto LABEL_40;
        }
        v13 = KiSelectIdleProcessor(v7, a1, v32, a1, v6, v74);
        if ( !v13 )
        {
          v32 = v81;
          v9 = a1;
          a4 = v78;
          goto LABEL_38;
        }
        goto LABEL_17;
      }
LABEL_38:
      if ( v73 != *(_WORD *)(v32 + 144) )
        goto LABEL_96;
      v33 = v31 & ~*(_QWORD *)(v32 + 136);
LABEL_40:
      v5 = a5;
      v34 = (1LL << *((_BYTE *)v17 + 146)) | (1LL << *(_WORD *)(v32 + 146));
      v79 = 0;
      v35 = v17[16] & ~(v34 | (1 << *(_WORD *)(a4 + 146)));
LABEL_41:
      *(_QWORD *)&v85 = v33;
      while ( v33 )
      {
        NextNode = MmGetNextNode(*((unsigned __int16 *)v17 + 73), &v79);
        if ( NextNode == -1 )
          break;
        v12 = NextNode;
        v55 = v35;
        if ( _bittest64(&v55, NextNode) )
        {
          v81 = KeNodeBlock[NextNode];
          v13 = KiSelectIdleProcessor(v76, v9, v81, 0, a5, v74);
          if ( v13 )
          {
            v6 = a5;
            goto LABEL_17;
          }
          v9 = a1;
          v33 &= ~*(_QWORD *)(v81 + 136);
          goto LABEL_41;
        }
      }
      if ( (_BYTE)v74 )
        break;
      LOBYTE(v5) = 0;
      v86 = 0LL;
      v87 = 0LL;
      v80 = 0;
      v74 = v5;
      if ( KeSoftParkedQueueThreshold )
      {
        KeQueryReadyQueueStatsProcessor(v16, (unsigned int)&v80, (unsigned int)&v86, (unsigned int)&v80, (__int64)&v87);
        v12 = v86 + v87;
        v9 = a1;
        LOBYTE(v5) = v86 + v87 > (unsigned __int64)(unsigned int)KeSoftParkedQueueThreshold;
        v74 = (unsigned __int8)v5;
      }
      v6 = a5;
      a4 = v73;
      if ( !(_BYTE)v5 )
        break;
LABEL_99:
      v7 = v76;
    }
    v36 = v76 & *(_QWORD *)(v16 + 33856);
    if ( ((v36 - 1) & v36) == 0 )
      goto LABEL_59;
    v37 = *(unsigned __int8 **)(v16 + 33864);
    v38 = v37[593];
    v39 = v37[592];
    v40 = &v89[v38];
    v41 = v37[593];
    memmove(&v89[v38], v37 + 528, v37[592]);
    a4 = (unsigned int)(v38 + v39);
    v14 = *(unsigned __int8 *)(a2 + 195);
    v42 = -1;
    v43 = *(_QWORD *)(*(_QWORD *)(v16 + 192) + 360LL);
    if ( (KiHeteroSchedulerOptions & 1) != 0 )
    {
      if ( (KiHeteroSchedulerOptions & 2) == 0 )
        goto LABEL_51;
    }
    else if ( (KiVelocityFlags & 0x800) == 0 || !KeHeteroSystemQos )
    {
      goto LABEL_51;
    }
    if ( (v43 & v36) != 0 && (unsigned int)(unsigned __int8)*(_DWORD *)(a2 + 512) - 1 <= 1 )
    {
      v64 = v38;
      if ( (unsigned int)v38 >= (unsigned int)a4 )
        goto LABEL_57;
      v65 = &v89[v38];
      do
      {
        v12 = 1LL << v64;
        if ( ((1LL << v64) & v43 & v36) != 0 && *v65 < (char)v14 )
        {
          v14 = (unsigned __int8)*v65;
          v42 = v64;
        }
        ++v64;
        ++v65;
      }
      while ( v64 < (unsigned int)a4 );
      v41 = v38;
      if ( v42 >= 0 )
      {
LABEL_58:
        v12 = 0x140000000uLL;
        v16 = KiProcessorBlock[KiProcessorNumberToIndexMappingTable[64 * *(unsigned __int8 *)(v16 + 208) + v42]];
        goto LABEL_59;
      }
    }
LABEL_51:
    if ( (unsigned int)v38 < (unsigned int)a4 )
    {
      v44 = __ROL8__(1LL, v41);
      do
      {
        if ( (v44 & v36) != 0 && *v40 < (char)v14 )
        {
          v14 = (unsigned __int8)*v40;
          v42 = v38;
        }
        LODWORD(v38) = v38 + 1;
        v44 = __ROL8__(v44, 1);
        ++v40;
      }
      while ( (unsigned int)v38 < (unsigned int)a4 );
    }
LABEL_57:
    if ( v42 >= 0 )
      goto LABEL_58;
LABEL_59:
    v45 = KeGetCurrentPrcb();
    v46 = *(_QWORD **)(v16 + 192);
    v84 = 0;
    v47 = v45->SchedulerAssist;
    if ( v47 )
    {
      if ( v45->NestingLevel <= 1u )
      {
        v66 = v47[6];
        v47[6] = v66 + 1;
        if ( v66 == -1 )
LABEL_137:
          KiRemoveSystemWorkPriorityKick(v45);
      }
    }
    while ( _interlockedbittestandset64((volatile signed __int32 *)(v16 + 48), 0LL) )
    {
      v56 = v45->SchedulerAssist;
      if ( v56 )
      {
        if ( v45->NestingLevel <= 1u )
        {
          v67 = v56[6] - 1;
          v56[6] = v67;
          if ( !v67 )
            KiRemoveSystemWorkPriorityKick(v45);
        }
      }
      do
        KeYieldProcessorEx(&v84, v12, v14, a4);
      while ( *(_QWORD *)(v16 + 48) );
      v57 = v45->SchedulerAssist;
      if ( v57 )
      {
        if ( v45->NestingLevel <= 1u )
        {
          v68 = v57[6];
          v57[6] = v68 + 1;
          if ( v68 == -1 )
            goto LABEL_137;
        }
      }
    }
    LOBYTE(v5) = v74;
    v48 = (_BYTE)v74 ? v46[3] & v46[11] : 0LL;
    v6 = a5;
    if ( a5 )
      break;
    v7 = v76;
    if ( ((v48 | *v46) & v76) == 0 )
      break;
    _InterlockedAnd64((volatile signed __int64 *)(v16 + 48), 0LL);
    v52 = KeGetCurrentPrcb();
    v9 = a1;
    LOWORD(a4) = v73;
    v58 = v52->SchedulerAssist;
    if ( v58 && v52->NestingLevel <= 1u )
    {
      v63 = v58[6]-- == 1;
      goto LABEL_97;
    }
  }
  v49 = v88;
  *v88 = 0;
  if ( (*(_BYTE *)(v16 + 35) & 2) != 0 )
  {
    _InterlockedAnd64((volatile signed __int64 *)(v16 + 48), 0LL);
    v69 = KeGetCurrentPrcb();
    v70 = v69->SchedulerAssist;
    if ( v70 )
    {
      if ( v69->NestingLevel <= 1u )
      {
        v71 = v70[6] - 1;
        v70[6] = v71;
        if ( !v71 )
          KiRemoveSystemWorkPriorityKick(v69);
      }
    }
    v72 = KiSelectCandidateProcessor(v16, a2, -1LL, a4);
    v16 = v72;
    if ( !a5 && (*(_BYTE *)(v72 + 35) & 1) == 0 )
      *v49 = 1;
  }
  return v16;
}
