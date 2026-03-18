/*
 * XREFs of KiNormalPriorityReadyScan @ 0x1402447EC
 * Callers:
 *     KiRetireDpcList @ 0x1402A8980 (KiRetireDpcList.c)
 * Callees:
 *     KiRemoveThreadFromReadyQueue @ 0x140210484 (KiRemoveThreadFromReadyQueue.c)
 *     KiSetPriorityBoost @ 0x14021050C (KiSetPriorityBoost.c)
 *     KiRemoveThreadFromSharedReadyQueue @ 0x140210C6C (KiRemoveThreadFromSharedReadyQueue.c)
 *     KiReleaseThreadLockSafe @ 0x140224100 (KiReleaseThreadLockSafe.c)
 *     KiShouldScanSharedReadyQueue @ 0x14029135C (KiShouldScanSharedReadyQueue.c)
 *     KiSetVpThreadSpinLockCount @ 0x1402B1050 (KiSetVpThreadSpinLockCount.c)
 *     KeYieldProcessorEx @ 0x1402F32E0 (KeYieldProcessorEx.c)
 *     KiInsertDeferredReadyList @ 0x1402F6970 (KiInsertDeferredReadyList.c)
 *     KiFlushSoftwareInterruptBatch @ 0x140340300 (KiFlushSoftwareInterruptBatch.c)
 *     KiDeferredReadySingleThread @ 0x1403405E0 (KiDeferredReadySingleThread.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x140418E4C (KiRemoveSystemWorkPriorityKick.c)
 *     KiReadGuestSchedulerAssistPriority @ 0x140577654 (KiReadGuestSchedulerAssistPriority.c)
 *     EtwTraceAntiStarvationBoost @ 0x14062D3AC (EtwTraceAntiStarvationBoost.c)
 */

__int64 __fastcall KiNormalPriorityReadyScan(__int64 a1)
{
  __int64 v1; // r15
  int ShouldScanSharedReadyQueue; // eax
  __int64 v3; // rcx
  __int64 v4; // r12
  int v5; // r8d
  char v6; // r13
  struct _KPRCB *CurrentPrcb; // rbx
  _DWORD *SchedulerAssist; // rcx
  int v9; // ebx
  int v10; // edx
  unsigned int v11; // ebx
  unsigned int v12; // eax
  int v13; // r15d
  _QWORD **v14; // r14
  _QWORD *v15; // rsi
  __int64 v16; // rdi
  bool v17; // cl
  bool v18; // zf
  int v19; // r8d
  struct _KPRCB *v20; // rcx
  _DWORD *v21; // rdx
  _QWORD *v22; // rsi
  unsigned int v23; // r15d
  struct _KPRCB *v24; // rbx
  _DWORD *v25; // rcx
  int v26; // ebx
  __int64 v28; // rdx
  int v29; // r11d
  __int64 v30; // r13
  __int64 v31; // r12
  __int64 v32; // rdi
  char v33; // r14
  unsigned __int64 v34; // rdx
  struct _KPRCB *v35; // rbx
  _DWORD *v36; // rcx
  int v37; // ebx
  _QWORD *v38; // rbx
  char v39; // di
  int v40; // r13d
  __int64 v41; // rdx
  int v42; // r11d
  unsigned int v43; // ebx
  unsigned int v44; // eax
  int v45; // ebx
  char v46; // r12
  int v47; // r13d
  unsigned int v48; // r12d
  _QWORD **v49; // r14
  _QWORD *v50; // rsi
  _QWORD *v51; // rdi
  bool v52; // cl
  _QWORD *v53; // r15
  _QWORD *v54; // rsi
  int v55; // eax
  __int64 v56; // rdx
  int v57; // r10d
  _DWORD *v58; // rcx
  _DWORD *v59; // rcx
  unsigned int v60; // r12d
  struct _KPRCB *v61; // rcx
  _DWORD *v62; // rdx
  __int64 v63; // rbx
  char v64; // r14
  unsigned __int64 v65; // r15
  struct _KPRCB *v66; // rdi
  _DWORD *v67; // rcx
  int v68; // edi
  _QWORD *v69; // rbx
  char v70; // di
  struct _KPRCB *v71; // rbx
  int v72; // eax
  int v73; // eax
  int v74; // eax
  int GuestSchedulerAssistPriority; // eax
  int v76; // eax
  int v77; // eax
  _DWORD *v78; // rcx
  int v79; // eax
  int v80; // eax
  int v81; // eax
  int v82; // eax
  struct _KPRCB *v83; // rcx
  _DWORD *v84; // rdx
  int v85; // eax
  int v86; // r12d
  __int64 v87; // r13
  int v88; // eax
  _DWORD *v89; // rcx
  int v90; // eax
  _DWORD *v91; // rcx
  int v92; // eax
  _DWORD *v93; // rcx
  int v94; // eax
  int v95; // [rsp+30h] [rbp-49h]
  unsigned int v96; // [rsp+30h] [rbp-49h]
  unsigned int v97; // [rsp+34h] [rbp-45h]
  char v98; // [rsp+34h] [rbp-45h]
  int v99; // [rsp+38h] [rbp-41h]
  char v100; // [rsp+40h] [rbp-39h]
  unsigned __int64 v101; // [rsp+40h] [rbp-39h]
  unsigned int v102; // [rsp+40h] [rbp-39h]
  _DWORD v103[2]; // [rsp+48h] [rbp-31h] BYREF
  int v104; // [rsp+50h] [rbp-29h] BYREF
  _DWORD v105[2]; // [rsp+54h] [rbp-25h] BYREF
  int v106; // [rsp+5Ch] [rbp-1Dh] BYREF
  _QWORD *v107; // [rsp+60h] [rbp-19h] BYREF
  _QWORD *v108; // [rsp+68h] [rbp-11h] BYREF
  __int64 v109; // [rsp+70h] [rbp-9h]
  _QWORD *v110; // [rsp+78h] [rbp-1h] BYREF
  _QWORD *v111; // [rsp+80h] [rbp+7h] BYREF
  __int64 v112; // [rsp+E0h] [rbp+67h] BYREF
  int v113; // [rsp+E8h] [rbp+6Fh]
  int v114; // [rsp+F0h] [rbp+77h]
  int v115; // [rsp+F8h] [rbp+7Fh]

  v112 = a1;
  v1 = a1;
  ShouldScanSharedReadyQueue = KiShouldScanSharedReadyQueue();
  v115 = 16;
  if ( ShouldScanSharedReadyQueue )
  {
    v4 = *(_QWORD *)(v3 + 34888);
    v109 = v4;
    if ( (*(_DWORD *)(v4 + 8) & 0x300) != 0 )
    {
      v5 = KiNormalPriorityBoostMaximumThreadReadyCount * *(unsigned __int8 *)(v4 + 660);
      v110 = 0LL;
      v6 = *(_BYTE *)(v4 + 659);
      CurrentPrcb = KeGetCurrentPrcb();
      v103[0] = 0;
      v114 = v5;
      v100 = v6;
      while ( 1 )
      {
        SchedulerAssist = CurrentPrcb->SchedulerAssist;
        if ( SchedulerAssist )
        {
          if ( CurrentPrcb->NestingLevel <= 1u )
          {
            v72 = SchedulerAssist[6];
            SchedulerAssist[6] = v72 + 1;
            if ( v72 == -1 )
              KiRemoveSystemWorkPriorityKick(CurrentPrcb);
          }
        }
        if ( !_interlockedbittestandset64((volatile signed __int32 *)v4, 0LL) )
          break;
        v59 = CurrentPrcb->SchedulerAssist;
        if ( v59 )
        {
          if ( CurrentPrcb->NestingLevel <= 1u )
          {
            v73 = v59[6] - 1;
            v59[6] = v73;
            if ( !v73 )
              KiRemoveSystemWorkPriorityKick(CurrentPrcb);
          }
        }
        do
          KeYieldProcessorEx(v103);
        while ( *(_QWORD *)v4 );
      }
      v9 = *(_DWORD *)(v4 + 8) & 0x300;
      if ( v9 )
      {
        v10 = 16;
        v113 = 16;
        v97 = KiCyclesPerClockQuantum * KiNormalPriorityBoostingPeriodMultiplier;
        v95 = MEMORY[0xFFFFF78000000320] - KiNormalPriorityBoostReadyTimeTicks;
        v11 = __ROR4__(v9, v6);
        do
        {
          _BitScanForward(&v12, v11);
          v11 ^= 1 << v12;
          v103[1] = v12;
          v13 = ((_BYTE)v12 + v6) & 0x1F;
          v14 = (_QWORD **)(v4 + 16 + 16LL * (((_BYTE)v12 + v6) & 0x1F));
          v15 = *v14;
          do
          {
            v16 = (__int64)(v15 - 27);
            v17 = 0;
            v18 = (*(_DWORD *)(v15 - 12) & 0x400000) == 0;
            v15 = (_QWORD *)*v15;
            if ( !v18 )
            {
              GuestSchedulerAssistPriority = KiReadGuestSchedulerAssistPriority(v16, 0LL);
              v10 = v113;
              v17 = GuestSchedulerAssistPriority != *(_DWORD *)(v16 + 1024);
            }
            if ( v95 - *(_DWORD *)(v16 + 436) > 0 || v17 )
            {
              KiRemoveThreadFromSharedReadyQueue(v4, v16, v13);
              KiInsertDeferredReadyList(&v110, v28);
              v19 = v114;
              v10 = v113;
              if ( v29 > 0 )
                v19 = --v114;
            }
            else
            {
              v19 = v114;
            }
            v113 = --v10;
          }
          while ( v15 != v14 && v19 && v10 );
          v6 = v100;
        }
        while ( v11 && v19 && v10 );
        _InterlockedAnd64((volatile signed __int64 *)v4, 0LL);
        v20 = KeGetCurrentPrcb();
        v21 = v20->SchedulerAssist;
        if ( v21 )
        {
          if ( v20->NestingLevel <= 1u )
          {
            v76 = v21[6] - 1;
            v21[6] = v76;
            if ( !v76 )
              KiRemoveSystemWorkPriorityKick(v20);
          }
        }
        v22 = v110;
        if ( v110 )
        {
          v30 = v112;
          v31 = v112 + 12760;
          do
          {
            v32 = (__int64)(v22 - 27);
            v33 = 0;
            v34 = *(v22 - 18);
            v35 = KeGetCurrentPrcb();
            v104 = 0;
            v22 = (_QWORD *)*v22;
            v101 = v34;
            while ( 1 )
            {
              v36 = v35->SchedulerAssist;
              if ( v36 )
              {
                if ( v35->NestingLevel <= 1u )
                {
                  v77 = v36[6];
                  v36[6] = v77 + 1;
                  if ( v77 == -1 )
                    KiRemoveSystemWorkPriorityKick(v35);
                }
              }
              if ( !_interlockedbittestandset64((volatile signed __int32 *)(v32 + 64), 0LL) )
                break;
              v78 = v35->SchedulerAssist;
              if ( v78 )
              {
                if ( v35->NestingLevel <= 1u )
                {
                  v79 = v78[6] - 1;
                  v78[6] = v79;
                  if ( !v79 )
                    KiRemoveSystemWorkPriorityKick(v35);
                }
              }
              do
                KeYieldProcessorEx(&v104);
              while ( *(_QWORD *)(v32 + 64) );
            }
            v37 = *(char *)(v32 + 195);
            if ( v95 - *(_DWORD *)(v32 + 436) > 0 && v37 < 11 )
            {
              v33 = 1;
              KiSetPriorityBoost(0LL, v32, 11, v101, v97);
            }
            KiReleaseThreadLockSafe(v32);
            if ( v33 && (BYTE8(PerfGlobalGroupMask) & 1) != 0 )
              EtwTraceAntiStarvationBoost(v32, (unsigned int)v37);
            v38 = (_QWORD *)(v32 + 216);
            v39 = 0;
            *v38 = 0LL;
            v107 = 0LL;
            do
            {
              KiDeferredReadySingleThread(v30, v38 - 27, &v107);
              v38 = v107;
              ++v39;
              if ( v107 )
                v107 = (_QWORD *)*v107;
              if ( (v39 & 0xF) == 0 )
                KiFlushSoftwareInterruptBatch(v31);
            }
            while ( v38 );
            KiFlushSoftwareInterruptBatch(v31);
          }
          while ( v22 );
          v4 = v109;
        }
        if ( v114 && v113 )
        {
          LOBYTE(v23) = 8;
        }
        else
        {
          v23 = v13 + 1;
          if ( v23 > 9 )
            LOBYTE(v23) = 8;
        }
      }
      else
      {
        _InterlockedAnd64((volatile signed __int64 *)v4, 0LL);
        v61 = KeGetCurrentPrcb();
        v62 = v61->SchedulerAssist;
        if ( v62 )
        {
          if ( v61->NestingLevel <= 1u )
          {
            v74 = v62[6] - 1;
            v62[6] = v74;
            if ( !v74 )
              KiRemoveSystemWorkPriorityKick(v61);
          }
        }
        LOBYTE(v23) = 8;
      }
      *(_BYTE *)(v4 + 659) = v23;
      v1 = v112;
    }
  }
  v24 = KeGetCurrentPrcb();
  v105[0] = 0;
  while ( 1 )
  {
    v25 = v24->SchedulerAssist;
    if ( v25 )
    {
      if ( v24->NestingLevel <= 1u )
      {
        v80 = v25[6];
        v25[6] = v80 + 1;
        if ( v80 == -1 )
          KiRemoveSystemWorkPriorityKick(v24);
      }
    }
    if ( !_interlockedbittestandset64((volatile signed __int32 *)(v1 + 48), 0LL) )
      break;
    v58 = v24->SchedulerAssist;
    if ( v58 )
    {
      if ( v24->NestingLevel <= 1u )
      {
        v81 = v58[6] - 1;
        v58[6] = v81;
        if ( !v81 )
          KiRemoveSystemWorkPriorityKick(v24);
      }
    }
    do
      KeYieldProcessorEx(v105);
    while ( *(_QWORD *)(v1 + 48) );
  }
  v26 = *(_DWORD *)(v1 + 32472) & 0x300;
  if ( v26 )
  {
    v40 = *(_DWORD *)(v1 + 32484);
    v41 = v1 + 32576;
    v111 = 0LL;
    v42 = KiNormalPriorityBoostMaximumThreadReadyCount;
    v98 = v40;
    v109 = v1 + 32576;
    v102 = KiCyclesPerClockQuantum * KiNormalPriorityBoostingPeriodMultiplier;
    v114 = MEMORY[0xFFFFF78000000320] - KiNormalPriorityBoostReadyTimeTicks;
    v43 = __ROR4__(v26, v40);
    v113 = KiNormalPriorityBoostMaximumThreadReadyCount;
    do
    {
      _BitScanForward(&v44, v43);
      v105[1] = v44;
      v99 = v43 ^ (1 << v44);
      v45 = v115;
      v46 = v44 + v40;
      v47 = v114;
      v48 = v46 & 0x1F;
      v49 = (_QWORD **)(v41 + 16LL * v48);
      v96 = v48;
      v50 = *v49;
      do
      {
        v51 = v50 - 27;
        v52 = 0;
        v18 = (*(_DWORD *)(v50 - 12) & 0x400000) == 0;
        v53 = v50;
        v50 = (_QWORD *)*v50;
        if ( !v18 )
        {
          v82 = KiReadGuestSchedulerAssistPriority(v51, 0LL);
          v42 = v113;
          v52 = v82 != *((_DWORD *)v51 + 256);
        }
        if ( v47 - *((_DWORD *)v51 + 109) > 0 || v52 )
        {
          v56 = (__int64)v53;
          v1 = v112;
          KiRemoveThreadFromReadyQueue(v112, v56, v48);
          KiInsertDeferredReadyList(&v111, v51);
          if ( v57 > 0 )
            v113 = --v42;
        }
        else
        {
          v1 = v112;
        }
        --v45;
      }
      while ( v50 != v49 && v42 && v45 );
      LOBYTE(v40) = v98;
      v115 = v45;
      v43 = v99;
      if ( !v99 )
        break;
      if ( !v42 )
        break;
      v41 = v109;
    }
    while ( v115 );
    v54 = v111;
    if ( v111 )
    {
      _InterlockedAnd64((volatile signed __int64 *)(v1 + 48), 0LL);
      v83 = KeGetCurrentPrcb();
      v84 = v83->SchedulerAssist;
      if ( v84 )
      {
        if ( v83->NestingLevel <= 1u )
        {
          v85 = v84[6] - 1;
          v84[6] = v85;
          if ( !v85 )
            KiRemoveSystemWorkPriorityKick(v83);
        }
      }
      v86 = v114;
      v87 = v1 + 12760;
      do
      {
        v63 = (__int64)(v54 - 27);
        v64 = 0;
        v65 = *(v54 - 18);
        v66 = KeGetCurrentPrcb();
        v106 = 0;
        v54 = (_QWORD *)*v54;
        while ( 1 )
        {
          v67 = v66->SchedulerAssist;
          if ( v67 )
          {
            if ( v66->NestingLevel <= 1u )
            {
              v88 = v67[6];
              v67[6] = v88 + 1;
              if ( v88 == -1 )
                KiRemoveSystemWorkPriorityKick(v66);
            }
          }
          if ( !_interlockedbittestandset64((volatile signed __int32 *)(v63 + 64), 0LL) )
            break;
          v89 = v66->SchedulerAssist;
          if ( v89 )
          {
            if ( v66->NestingLevel <= 1u )
            {
              v90 = v89[6] - 1;
              v89[6] = v90;
              if ( !v90 )
                KiRemoveSystemWorkPriorityKick(v66);
            }
          }
          do
            KeYieldProcessorEx(&v106);
          while ( *(_QWORD *)(v63 + 64) );
        }
        v68 = *(char *)(v63 + 195);
        if ( v86 - *(_DWORD *)(v63 + 436) > 0 && v68 < 11 )
        {
          v64 = 1;
          KiSetPriorityBoost(0LL, v63, 11, v65, v102);
        }
        KiReleaseThreadLockSafe(v63);
        if ( v64 && (BYTE8(PerfGlobalGroupMask) & 1) != 0 )
          EtwTraceAntiStarvationBoost(v63, (unsigned int)v68);
        v1 = v112;
        v69 = (_QWORD *)(v63 + 216);
        v70 = 0;
        *v69 = 0LL;
        v108 = 0LL;
        do
        {
          KiDeferredReadySingleThread(v1, v69 - 27, &v108);
          v69 = v108;
          ++v70;
          if ( v108 )
            v108 = (_QWORD *)*v108;
          if ( (v70 & 0xF) == 0 )
            KiFlushSoftwareInterruptBatch(v87);
        }
        while ( v69 );
        KiFlushSoftwareInterruptBatch(v87);
      }
      while ( v54 );
      v71 = KeGetCurrentPrcb();
      LODWORD(v112) = 0;
      v48 = v96;
      while ( 1 )
      {
        v91 = v71->SchedulerAssist;
        if ( v91 )
        {
          if ( v71->NestingLevel <= 1u )
          {
            v92 = v91[6];
            v91[6] = v92 + 1;
            if ( v92 == -1 )
              KiRemoveSystemWorkPriorityKick(v71);
          }
        }
        if ( !_interlockedbittestandset64((volatile signed __int32 *)(v1 + 48), 0LL) )
          break;
        v93 = v71->SchedulerAssist;
        if ( v93 )
        {
          if ( v71->NestingLevel <= 1u )
          {
            v94 = v93[6] - 1;
            v93[6] = v94;
            if ( !v94 )
              KiRemoveSystemWorkPriorityKick(v71);
          }
        }
        do
          KeYieldProcessorEx(&v112);
        while ( *(_QWORD *)(v1 + 48) );
      }
    }
    if ( v113 && v115 )
    {
      v55 = 8;
    }
    else
    {
      v60 = v48 + 1;
      if ( v60 > 9 )
        v60 = 8;
      v55 = v60;
    }
    *(_DWORD *)(v1 + 32484) = v55;
  }
  *(_DWORD *)(v1 + 32488) = KiNormalPriorityBoostScanLatencyTicks + MEMORY[0xFFFFF78000000320];
  _InterlockedAnd64((volatile signed __int64 *)(v1 + 48), 0LL);
  return KiSetVpThreadSpinLockCount(KeGetCurrentPrcb(), 0LL);
}
