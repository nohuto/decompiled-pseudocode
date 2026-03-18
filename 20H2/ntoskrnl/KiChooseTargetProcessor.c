/*
 * XREFs of KiChooseTargetProcessor @ 0x14021AAC0
 * Callers:
 *     KiDeferredReadySingleThread @ 0x140219BA0 (KiDeferredReadySingleThread.c)
 * Callees:
 *     KiTryLocalThreadSchedule @ 0x14021B240 (KiTryLocalThreadSchedule.c)
 *     MmGetNextNode @ 0x14028738C (MmGetNextNode.c)
 *     KeYieldProcessorEx @ 0x1402DE380 (KeYieldProcessorEx.c)
 *     KiReduceByEffectiveIdleSmtSet @ 0x140313918 (KiReduceByEffectiveIdleSmtSet.c)
 *     KiSelectIdleProcessor @ 0x140390388 (KiSelectIdleProcessor.c)
 *     __security_check_cookie @ 0x1403CFAF0 (__security_check_cookie.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403F1DD4 (KiRemoveSystemWorkPriorityKick.c)
 *     memmove @ 0x140411040 (memmove.c)
 *     KeQueryReadyQueueStatsProcessor @ 0x140512998 (KeQueryReadyQueueStatsProcessor.c)
 *     KiFindRankBiasedIdleSmtSet @ 0x14051D71C (KiFindRankBiasedIdleSmtSet.c)
 *     KiSelectCandidateProcessor @ 0x1405240C4 (KiSelectCandidateProcessor.c)
 */

__int64 __fastcall KiChooseTargetProcessor(__int64 a1, __int64 a2, __int64 *a3, __int64 a4, char a5)
{
  char v5; // r12
  __int64 v6; // r10
  char v7; // r15
  __int64 v9; // r11
  __int64 v10; // rax
  __int64 v11; // rsi
  __int64 v12; // rbx
  __int64 v13; // rax
  char v14; // dl
  __int64 v15; // r14
  __int64 *v16; // rdi
  unsigned __int64 v17; // r15
  __int64 v18; // r8
  __int64 v19; // rax
  struct _KPRCB *CurrentPrcb; // rdi
  _DWORD *SchedulerAssist; // rcx
  char v22; // al
  __int64 v24; // rax
  __int64 v25; // rax
  __int64 v26; // rax
  char v27; // cl
  unsigned __int64 v28; // rax
  int v29; // ecx
  __int64 v30; // rdx
  __int64 v31; // rax
  __int64 v32; // r15
  __int64 v33; // rax
  __int64 v34; // r12
  __int64 v35; // rsi
  unsigned int v36; // esi
  __int64 v37; // r15
  unsigned __int8 *v38; // rdx
  __int64 v39; // rdi
  int v40; // ebx
  char *v41; // rsi
  char v42; // r12
  char v43; // r8
  int v44; // r10d
  __int64 v45; // r11
  __int64 v46; // rax
  struct _KPRCB *v47; // rbx
  _QWORD *v48; // rdi
  _DWORD *v49; // rcx
  __int64 v50; // rcx
  _DWORD *v51; // rdi
  _DWORD *v52; // rcx
  _DWORD *v53; // rcx
  struct _KPRCB *v54; // rcx
  _DWORD *v55; // rdx
  unsigned int NextNode; // eax
  __int64 v57; // rcx
  _DWORD *v58; // rcx
  _DWORD *v59; // rcx
  _DWORD *v60; // rdx
  char RankBiasedIdleSmtSet; // al
  int v62; // eax
  int v63; // eax
  int v64; // eax
  bool v65; // zf
  unsigned int v66; // ecx
  char *v67; // rbx
  int v68; // eax
  int v69; // eax
  int v70; // eax
  struct _KPRCB *v71; // rcx
  _DWORD *v72; // rdx
  int v73; // eax
  __int64 v74; // rax
  unsigned __int16 v75; // [rsp+30h] [rbp-B1h]
  char v76; // [rsp+34h] [rbp-ADh]
  __int64 v78; // [rsp+40h] [rbp-A1h]
  __int64 v79; // [rsp+48h] [rbp-99h] BYREF
  __int64 v80; // [rsp+50h] [rbp-91h]
  int v81; // [rsp+58h] [rbp-89h] BYREF
  int v82; // [rsp+5Ch] [rbp-85h] BYREF
  __int64 v83; // [rsp+60h] [rbp-81h]
  int v84; // [rsp+68h] [rbp-79h]
  int v85; // [rsp+6Ch] [rbp-75h] BYREF
  int v86; // [rsp+70h] [rbp-71h] BYREF
  __int128 v87; // [rsp+78h] [rbp-69h]
  __int64 v88; // [rsp+88h] [rbp-59h] BYREF
  __int64 v89; // [rsp+90h] [rbp-51h] BYREF
  _DWORD *v90; // [rsp+98h] [rbp-49h]
  _BYTE v91[64]; // [rsp+A0h] [rbp-41h] BYREF

  v5 = a5;
  v6 = *a3;
  v7 = 0;
  v90 = (_DWORD *)a4;
  LOWORD(a4) = *((_WORD *)a3 + 4);
  v9 = a1;
  v75 = a4;
  v81 = 0;
  v87 = 0LL;
  v78 = v6;
  v76 = 0;
  while ( 1 )
  {
    while ( 1 )
    {
      while ( 1 )
      {
        v10 = *(unsigned int *)(a2 + 536);
        LODWORD(v10) = v10 & 0x7FFFFFFF;
        WORD4(v87) = a4;
        v11 = KiProcessorBlock[v10];
        if ( (_WORD)a4 == *(unsigned __int8 *)(v9 + 208) )
        {
          v12 = KiTryLocalThreadSchedule(v9, v11, a2, v6, v5, v7);
          if ( v12 )
            goto LABEL_18;
          v6 = v78;
          v9 = a1;
        }
        v13 = *(unsigned int *)(a2 + 588);
        v12 = 0LL;
        a4 = *(_QWORD *)(v11 + 192);
        v14 = v76;
        v80 = a4;
        v15 = KiProcessorBlock[v13];
        *(_QWORD *)&v87 = v6;
        v16 = *(__int64 **)(v15 + 192);
        if ( (__int64 *)a4 == v16 )
          v12 = v11;
        v17 = *v16;
        v18 = v6 & *v16;
        v79 = v18;
        v19 = v18;
        if ( v76 )
        {
          if ( !v18 )
          {
            v17 = v16[3] & v16[11];
            v18 = v6 & v17;
            v79 = v6 & v17;
            v19 = v6 & v17;
            goto LABEL_8;
          }
LABEL_9:
          if ( (*((_BYTE *)v16 + 181) & 0x20) == 0 )
            goto LABEL_14;
          if ( v5 )
          {
            RankBiasedIdleSmtSet = KiFindRankBiasedIdleSmtSet(v15, &v79);
            v6 = v78;
            a4 = v80;
            if ( RankBiasedIdleSmtSet )
            {
              v18 = v79;
              goto LABEL_14;
            }
            v9 = a1;
          }
          v18 = v79;
          if ( (v79 & v16[1]) != 0 )
          {
            if ( v5
              && (unsigned int)((0x101010101010101LL
                               * ((((v17 - ((v17 >> 1) & 0x5555555555555555LL)) & 0x3333333333333333LL)
                                 + (((v17 - ((v17 >> 1) & 0x5555555555555555LL)) >> 2) & 0x3333333333333333LL)
                                 + ((((v17 - ((v17 >> 1) & 0x5555555555555555LL)) & 0x3333333333333333LL)
                                   + (((v17 - ((v17 >> 1) & 0x5555555555555555LL)) >> 2) & 0x3333333333333333LL)) >> 4)) & 0xF0F0F0F0F0F0F0FLL)) >> 32) >> 24 < KiPerfIsoEnabled )
            {
              goto LABEL_106;
            }
            v18 = v79 & v16[1];
            v79 = v18;
          }
          else
          {
            if ( v5 )
            {
LABEL_106:
              v14 = v76;
              goto LABEL_34;
            }
            if ( *(__int64 **)(v9 + 192) == v16 )
            {
              KiReduceByEffectiveIdleSmtSet(v9, &v79);
              v18 = v79;
              v6 = v78;
              a4 = v80;
            }
          }
LABEL_14:
          if ( (v18 & *(_QWORD *)(v15 + 200)) != 0 )
          {
            v12 = v15;
          }
          else if ( !v12 || (v18 & *(_QWORD *)(v12 + 200)) == 0 )
          {
            v24 = v18 & *(_QWORD *)(v15 + 33880);
            if ( v24 )
            {
              v18 &= *(_QWORD *)(v15 + 33880);
              v79 = v24;
            }
            else if ( v12 && (v25 = v18 & *(_QWORD *)(v12 + 33880)) != 0 )
            {
              v18 &= *(_QWORD *)(v12 + 33880);
              v79 = v25;
            }
            else if ( (KiCacheAwareScheduling & 1) != 0 )
            {
              v26 = v18 & *(_QWORD *)(v15 + 33896);
              if ( v26 )
              {
                v18 &= *(_QWORD *)(v15 + 33896);
                v79 = v26;
              }
              else if ( v12 )
              {
                if ( (v18 & *(_QWORD *)(v12 + 33896)) != 0 )
                  v18 &= *(_QWORD *)(v12 + 33896);
                v79 = v18;
              }
            }
            v27 = *(_BYTE *)(v15 + 209);
            _BitScanForward64(&v28, __ROR8__(v18, v27));
            v29 = ((_BYTE)v28 + v27) & 0x3F;
            v30 = v29 + (*(unsigned __int8 *)(v15 + 208) << 6);
            v84 = v29;
            v12 = KiProcessorBlock[KiProcessorNumberToIndexMappingTable[v30]];
          }
          if ( v12 )
            goto LABEL_17;
          goto LABEL_106;
        }
LABEL_8:
        if ( v19 )
          goto LABEL_9;
LABEL_34:
        v83 = v16[17];
        v31 = v83;
        v32 = v6 & ~v83;
        *(_QWORD *)&v87 = v32;
        if ( (__int64 *)a4 == v16 || !v32 || *(_WORD *)(a4 + 144) != v75 )
          break;
        v12 = KiSelectIdleProcessor(v6, a1, v80, v11, v5, v14);
        if ( !v12 )
        {
          v31 = v83;
          v6 = v78;
          a4 = v80;
          break;
        }
LABEL_17:
        v7 = v76;
LABEL_18:
        CurrentPrcb = KeGetCurrentPrcb();
        v85 = 0;
        SchedulerAssist = CurrentPrcb->SchedulerAssist;
        if ( SchedulerAssist )
        {
          if ( CurrentPrcb->NestingLevel <= 1u )
          {
            v62 = SchedulerAssist[6];
            SchedulerAssist[6] = v62 + 1;
            if ( v62 == -1 )
LABEL_113:
              KiRemoveSystemWorkPriorityKick(CurrentPrcb);
          }
        }
        while ( _interlockedbittestandset64((volatile signed __int32 *)(v12 + 48), 0LL) )
        {
          v52 = CurrentPrcb->SchedulerAssist;
          if ( v52 )
          {
            if ( CurrentPrcb->NestingLevel <= 1u )
            {
              v63 = v52[6] - 1;
              v52[6] = v63;
              if ( !v63 )
                KiRemoveSystemWorkPriorityKick(CurrentPrcb);
            }
          }
          do
            KeYieldProcessorEx(&v85);
          while ( *(_QWORD *)(v12 + 48) );
          v53 = CurrentPrcb->SchedulerAssist;
          if ( v53 )
          {
            if ( CurrentPrcb->NestingLevel <= 1u )
            {
              v64 = v53[6];
              v53[6] = v64 + 1;
              if ( v64 == -1 )
                goto LABEL_113;
            }
          }
        }
        v22 = *(_BYTE *)(v12 + 35);
        if ( !v22 || v7 && v22 == 6 )
        {
          *v90 = 1;
          return v12;
        }
        _InterlockedAnd64((volatile signed __int64 *)(v12 + 48), 0LL);
        v54 = KeGetCurrentPrcb();
        v6 = v78;
        v9 = a1;
        LOWORD(a4) = v75;
        v55 = v54->SchedulerAssist;
        if ( v55 && v54->NestingLevel <= 1u )
        {
          v65 = v55[6]-- == 1;
LABEL_97:
          if ( v65 )
          {
            KiRemoveSystemWorkPriorityKick(v54);
            v9 = a1;
            LOWORD(a4) = v75;
            goto LABEL_99;
          }
        }
      }
      if ( v75 == *(_WORD *)(a4 + 144) )
        v32 = v6 & ~(v31 | *(_QWORD *)(a4 + 136));
      v9 = a1;
      *(_QWORD *)&v87 = v32;
      v33 = *(_QWORD *)(a1 + 192);
      v83 = v33;
      if ( (__int64 *)v33 != v16 && v33 != a4 && v32 )
      {
        if ( v75 != *(_WORD *)(v33 + 144) )
        {
LABEL_96:
          v34 = v32;
          goto LABEL_40;
        }
        v12 = KiSelectIdleProcessor(v6, a1, v33, a1, v5, v76);
        if ( !v12 )
        {
          v33 = v83;
          v9 = a1;
          a4 = v80;
          goto LABEL_38;
        }
        goto LABEL_17;
      }
LABEL_38:
      if ( v75 != *(_WORD *)(v33 + 144) )
        goto LABEL_96;
      v34 = v32 & ~*(_QWORD *)(v33 + 136);
LABEL_40:
      v35 = (1LL << *((_BYTE *)v16 + 146)) | (1LL << *(_WORD *)(v33 + 146));
      v81 = 0;
      v36 = v16[16] & ~(v35 | (1 << *(_WORD *)(a4 + 146)));
LABEL_41:
      *(_QWORD *)&v87 = v34;
      while ( v34 )
      {
        NextNode = MmGetNextNode(*((unsigned __int16 *)v16 + 73), &v81);
        if ( NextNode == -1 )
          break;
        v57 = v36;
        if ( _bittest64(&v57, NextNode) )
        {
          v83 = KeNodeBlock[NextNode];
          v12 = KiSelectIdleProcessor(v78, v9, v83, 0, a5, v76);
          if ( v12 )
          {
            v5 = a5;
            goto LABEL_17;
          }
          v9 = a1;
          v34 &= ~*(_QWORD *)(v83 + 136);
          goto LABEL_41;
        }
      }
      if ( v76 )
        break;
      v7 = 0;
      v88 = 0LL;
      v89 = 0LL;
      v82 = 0;
      v76 = 0;
      if ( KeSoftParkedQueueThreshold )
      {
        KeQueryReadyQueueStatsProcessor(v15, (unsigned int)&v82, (unsigned int)&v88, (unsigned int)&v82, (__int64)&v89);
        v9 = a1;
        v7 = v88 + v89 > (unsigned __int64)(unsigned int)KeSoftParkedQueueThreshold;
        v76 = v7;
      }
      v5 = a5;
      a4 = v75;
      if ( !v7 )
        break;
LABEL_99:
      v6 = v78;
    }
    v37 = v78 & *(_QWORD *)(v15 + 33856);
    if ( ((v37 - 1) & v37) == 0 )
      goto LABEL_59;
    v38 = *(unsigned __int8 **)(v15 + 33864);
    v39 = v38[593];
    v40 = v38[592];
    v41 = &v91[v39];
    v42 = v38[593];
    memmove(&v91[v39], v38 + 528, v38[592]);
    a4 = (unsigned int)(v39 + v40);
    v43 = *(_BYTE *)(a2 + 195);
    v44 = -1;
    v45 = *(_QWORD *)(*(_QWORD *)(v15 + 192) + 360LL);
    if ( (KiHeteroSchedulerOptions & 1) != 0 )
    {
      if ( (KiHeteroSchedulerOptions & 2) == 0 )
        goto LABEL_51;
    }
    else if ( (KiVelocityFlags & 0x800) == 0 || !KeHeteroSystemQos )
    {
      goto LABEL_51;
    }
    if ( (v45 & v37) != 0 && (unsigned int)(unsigned __int8)*(_DWORD *)(a2 + 512) - 1 <= 1 )
    {
      v66 = v39;
      if ( (unsigned int)v39 >= (unsigned int)a4 )
        goto LABEL_57;
      v67 = &v91[v39];
      do
      {
        if ( ((1LL << v66) & v45 & v37) != 0 && *v67 < v43 )
        {
          v43 = *v67;
          v44 = v66;
        }
        ++v66;
        ++v67;
      }
      while ( v66 < (unsigned int)a4 );
      v42 = v39;
      if ( v44 >= 0 )
      {
LABEL_58:
        v15 = KiProcessorBlock[KiProcessorNumberToIndexMappingTable[64 * *(unsigned __int8 *)(v15 + 208) + v44]];
        goto LABEL_59;
      }
    }
LABEL_51:
    if ( (unsigned int)v39 < (unsigned int)a4 )
    {
      v46 = __ROL8__(1LL, v42);
      do
      {
        if ( (v46 & v37) != 0 && *v41 < v43 )
        {
          v43 = *v41;
          v44 = v39;
        }
        LODWORD(v39) = v39 + 1;
        v46 = __ROL8__(v46, 1);
        ++v41;
      }
      while ( (unsigned int)v39 < (unsigned int)a4 );
    }
LABEL_57:
    if ( v44 >= 0 )
      goto LABEL_58;
LABEL_59:
    v47 = KeGetCurrentPrcb();
    v48 = *(_QWORD **)(v15 + 192);
    v86 = 0;
    v49 = v47->SchedulerAssist;
    if ( v49 )
    {
      if ( v47->NestingLevel <= 1u )
      {
        v68 = v49[6];
        v49[6] = v68 + 1;
        if ( v68 == -1 )
LABEL_137:
          KiRemoveSystemWorkPriorityKick(v47);
      }
    }
    while ( _interlockedbittestandset64((volatile signed __int32 *)(v15 + 48), 0LL) )
    {
      v58 = v47->SchedulerAssist;
      if ( v58 )
      {
        if ( v47->NestingLevel <= 1u )
        {
          v69 = v58[6] - 1;
          v58[6] = v69;
          if ( !v69 )
            KiRemoveSystemWorkPriorityKick(v47);
        }
      }
      do
        KeYieldProcessorEx(&v86);
      while ( *(_QWORD *)(v15 + 48) );
      v59 = v47->SchedulerAssist;
      if ( v59 )
      {
        if ( v47->NestingLevel <= 1u )
        {
          v70 = v59[6];
          v59[6] = v70 + 1;
          if ( v70 == -1 )
            goto LABEL_137;
        }
      }
    }
    v7 = v76;
    v50 = v76 ? v48[3] & v48[11] : 0LL;
    v5 = a5;
    if ( a5 )
      break;
    v6 = v78;
    if ( ((v50 | *v48) & v78) == 0 )
      break;
    _InterlockedAnd64((volatile signed __int64 *)(v15 + 48), 0LL);
    v54 = KeGetCurrentPrcb();
    v9 = a1;
    LOWORD(a4) = v75;
    v60 = v54->SchedulerAssist;
    if ( v60 && v54->NestingLevel <= 1u )
    {
      v65 = v60[6]-- == 1;
      goto LABEL_97;
    }
  }
  v51 = v90;
  *v90 = 0;
  if ( (*(_BYTE *)(v15 + 35) & 2) != 0 )
  {
    _InterlockedAnd64((volatile signed __int64 *)(v15 + 48), 0LL);
    v71 = KeGetCurrentPrcb();
    v72 = v71->SchedulerAssist;
    if ( v72 )
    {
      if ( v71->NestingLevel <= 1u )
      {
        v73 = v72[6] - 1;
        v72[6] = v73;
        if ( !v73 )
          KiRemoveSystemWorkPriorityKick(v71);
      }
    }
    v74 = KiSelectCandidateProcessor(v15, a2, -1LL, a4);
    v15 = v74;
    if ( !a5 && (*(_BYTE *)(v74 + 35) & 1) == 0 )
      *v51 = 1;
  }
  return v15;
}
