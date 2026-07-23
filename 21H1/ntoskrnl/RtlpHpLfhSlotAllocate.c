/*
 * XREFs of RtlpHpLfhSlotAllocate @ 0x140250B40
 * Callers:
 *     ExAllocateHeapPool @ 0x14024FF10 (ExAllocateHeapPool.c)
 *     RtlpHpLfhBucketAllocate @ 0x14038EFE0 (RtlpHpLfhBucketAllocate.c)
 * Callees:
 *     RtlpHpLfhBucketGetSubsegment @ 0x140237AF4 (RtlpHpLfhBucketGetSubsegment.c)
 *     RtlpHpLfhSlotAddSubsegment @ 0x140237DA8 (RtlpHpLfhSlotAddSubsegment.c)
 *     RtlpHpLfhSubsegmentCreate @ 0x140237F10 (RtlpHpLfhSubsegmentCreate.c)
 *     RtlpHpAcquireLockShared @ 0x140238714 (RtlpHpAcquireLockShared.c)
 *     RtlpHpLfhSubsegmentFreeBlock @ 0x140238750 (RtlpHpLfhSubsegmentFreeBlock.c)
 *     RtlpHpLfhBucketAddSubsegment @ 0x140239674 (RtlpHpLfhBucketAddSubsegment.c)
 *     RtlpHpLfhSubsegmentDecBlockCounts @ 0x140239970 (RtlpHpLfhSubsegmentDecBlockCounts.c)
 *     RtlpHpAcquireLockExclusive @ 0x14023C5AC (RtlpHpAcquireLockExclusive.c)
 *     RtlpLfhBlockBitmapAllocate @ 0x1402521F0 (RtlpLfhBlockBitmapAllocate.c)
 *     MiGetSystemRegionType @ 0x1402609A0 (MiGetSystemRegionType.c)
 *     KiAbThreadRemoveBoosts @ 0x140260D50 (KiAbThreadRemoveBoosts.c)
 *     KiLeaveGuardedRegionUnsafe @ 0x140260DE0 (KiLeaveGuardedRegionUnsafe.c)
 *     MmGetSessionIdEx @ 0x140260EB0 (MmGetSessionIdEx.c)
 *     KeAbPostRelease @ 0x140263C10 (KeAbPostRelease.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x14026B750 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     ExReleaseSpinLockSharedFromDpcLevel @ 0x14027D690 (ExReleaseSpinLockSharedFromDpcLevel.c)
 *     RtlpHpLfhSubsegmentIncBlockCounts @ 0x1402FD194 (RtlpHpLfhSubsegmentIncBlockCounts.c)
 *     RtlpHpLfhBucketUpdateAffinityMapping @ 0x140310538 (RtlpHpLfhBucketUpdateAffinityMapping.c)
 *     KiAbEntryRemoveFromTree @ 0x1403410E0 (KiAbEntryRemoveFromTree.c)
 *     KiCheckForKernelApcDelivery @ 0x1403599E0 (KiCheckForKernelApcDelivery.c)
 *     ExfReleasePushLockShared @ 0x14035A580 (ExfReleasePushLockShared.c)
 *     ExfTryToWakePushLock @ 0x14035A680 (ExfTryToWakePushLock.c)
 *     RtlpHpLfhSubsegmentSetUnusedBytes @ 0x14038F334 (RtlpHpLfhSubsegmentSetUnusedBytes.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403EC9E4 (KiRemoveSystemWorkPriorityKick.c)
 *     RtlpLfhIncrementDataSlot @ 0x1403F1534 (RtlpLfhIncrementDataSlot.c)
 *     KeBugCheckEx @ 0x1403F5E40 (KeBugCheckEx.c)
 *     _guard_dispatch_icall @ 0x1403FE9E0 (_guard_dispatch_icall.c)
 */

__int64 __fastcall RtlpHpLfhSlotAllocate(__int64 a1, __int64 a2, __int64 a3, unsigned int a4, unsigned int a5)
{
  __int64 v5; // r15
  __int64 v6; // r10
  int v7; // r13d
  ULONG_PTR v8; // r14
  unsigned int v9; // esi
  signed __int64 v10; // rdi
  signed __int64 v11; // rax
  unsigned __int64 v12; // rdi
  int v13; // r8d
  __int64 v14; // r12
  unsigned __int64 v15; // rcx
  __int64 v16; // rax
  __int64 v17; // rcx
  unsigned int v18; // r9d
  unsigned int v19; // r14d
  unsigned int v20; // esi
  unsigned int v21; // r13d
  int v22; // eax
  __int64 v23; // r8
  __int64 v24; // r9
  unsigned __int16 v25; // r11
  unsigned int v26; // r14d
  char v27; // cl
  __int64 v28; // rsi
  int v29; // edx
  __int64 v30; // r12
  __int64 v31; // rdx
  signed __int16 *v32; // rsi
  signed __int16 *v33; // rdx
  unsigned __int64 v34; // r13
  char v35; // r11
  signed __int16 v36; // ax
  signed __int16 v37; // tt
  int v38; // r10d
  __int64 v39; // rdx
  __int64 v40; // rsi
  __int64 v41; // r14
  __int64 Subsegment; // rdi
  __int64 v44; // r9
  unsigned __int16 v45; // dx
  __int64 v46; // rdi
  unsigned __int16 v47; // ax
  unsigned __int16 v48; // r14
  unsigned __int16 v49; // cx
  unsigned __int16 v50; // r12
  unsigned int v51; // r8d
  __int64 *v52; // r10
  _QWORD *v53; // r8
  __int64 **v54; // rcx
  __int64 v55; // rdx
  __int64 *v56; // rax
  __int64 *v57; // rax
  bool v58; // cc
  KIRQL v59; // r13
  __int64 v60; // r12
  unsigned __int64 v61; // rcx
  __int64 v62; // rax
  unsigned int v63; // r15d
  __int64 v64; // rdx
  unsigned int v65; // r14d
  unsigned int v66; // esi
  unsigned __int16 v67; // ax
  int v68; // r8d
  unsigned int v69; // eax
  unsigned int v70; // r14d
  char v71; // cl
  __int64 v72; // rsi
  __int64 v73; // rdx
  __int64 v74; // r12
  signed __int16 *v75; // rsi
  signed __int16 *v76; // rdx
  unsigned __int64 v77; // r15
  signed __int16 v78; // ax
  signed __int16 v79; // tt
  int v80; // r10d
  __int64 v81; // r11
  unsigned int v82; // r13d
  __int64 v83; // rdx
  __int64 v84; // r15
  int v85; // edx
  KIRQL v86; // al
  struct _KTHREAD *v87; // r13
  ULONG_PTR v88; // r9
  KIRQL v89; // al
  unsigned __int8 v90; // al
  struct _KPRCB *v91; // r10
  _DWORD *v92; // r9
  int v93; // eax
  bool v94; // zf
  unsigned __int8 v95; // si
  struct _KTHREAD *v96; // rsi
  ULONG_PTR v97; // r9
  unsigned __int8 v98; // r12
  unsigned int v99; // edx
  __int64 v100; // r8
  __int64 v101; // rcx
  __int64 v102; // r14
  __int64 v103; // rdx
  unsigned __int8 v104; // al
  __int64 v105; // rdx
  __int64 v106; // rcx
  __int64 v107; // r8
  __int64 v108; // r9
  unsigned __int8 v109; // al
  struct _KPRCB *v110; // r10
  int v111; // eax
  char v112; // cl
  int (__fastcall *v113)(__int64, unsigned __int64, _QWORD, __int64); // rax
  int v114; // esi
  unsigned int v115; // r10d
  unsigned int v116; // esi
  __int64 v117; // rcx
  ULONG_PTR v118; // r10
  unsigned int v119; // edx
  __int64 v120; // rcx
  __int64 v121; // rsi
  unsigned __int8 v122; // al
  __int64 v123; // rdx
  __int64 v124; // rcx
  __int64 v125; // r8
  __int64 v126; // r9
  ULONG_PTR v127; // rsi
  KIRQL v128; // r13
  __int64 v129; // rax
  KIRQL v130; // al
  struct _KTHREAD *v131; // r14
  unsigned int v132; // r8d
  KIRQL v133; // r13
  unsigned __int8 v134; // al
  struct _KPRCB *v135; // r10
  _DWORD *v136; // r9
  int v137; // eax
  struct _KTHREAD *CurrentThread; // rsi
  unsigned int SessionId; // r8d
  unsigned __int8 v140; // si
  int v141; // r11d
  char v142; // cl
  int (__fastcall *v143)(__int64, __int64, _QWORD, __int64); // rax
  unsigned int v144; // r10d
  unsigned int v145; // esi
  __int64 v146; // rcx
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  int v150; // eax
  unsigned int v151; // r13d
  __int16 v152; // r13
  struct _KTHREAD *v153; // rbx
  ULONG_PTR v154; // r9
  unsigned __int8 v155; // r12
  unsigned int v156; // edx
  __int64 v157; // rcx
  __int64 v158; // rdi
  unsigned __int8 v159; // al
  __int64 v160; // rdx
  __int64 v161; // rcx
  __int64 v162; // r8
  __int64 v163; // r9
  unsigned __int8 v164; // al
  int v165; // eax
  unsigned __int8 v166; // r13
  unsigned int v167; // edx
  __int64 v168; // rcx
  __int64 v169; // r14
  unsigned __int8 v170; // al
  __int64 v171; // rdx
  __int64 v172; // rcx
  __int64 v173; // r8
  __int64 v174; // r9
  unsigned __int8 v175; // r13
  unsigned int v176; // edx
  __int64 v177; // rcx
  __int64 v178; // rsi
  unsigned __int8 v179; // al
  __int64 v180; // rdx
  __int64 v181; // rcx
  __int64 v182; // r8
  __int64 v183; // r9
  KIRQL v184; // al
  __int64 v185; // rax
  KIRQL v186; // al
  unsigned int v187; // r8d
  struct _KTHREAD *v188; // rsi
  unsigned int v189; // r8d
  unsigned __int8 v190; // r13
  unsigned int v191; // edx
  __int64 v192; // rcx
  __int64 v193; // r14
  __int64 v194; // rdx
  unsigned __int8 v195; // al
  __int64 v196; // rdx
  __int64 v197; // rcx
  __int64 v198; // r8
  __int64 v199; // r9
  unsigned __int8 v200; // al
  unsigned __int8 v201; // si
  struct _KPRCB *v202; // r10
  int v203; // eax
  ULONG_PTR v204; // r15
  struct _KTHREAD *v205; // rbx
  ULONG_PTR v206; // r9
  unsigned __int8 v207; // r14
  unsigned int v208; // edx
  __int64 v209; // rcx
  __int64 v210; // rdi
  __int64 v211; // rdx
  __int64 v212; // rdx
  __int64 v213; // rcx
  __int64 v214; // r8
  __int64 v215; // r9
  unsigned __int8 v216; // al
  int v217; // eax
  struct _KTHREAD *v218; // rbx
  unsigned int v219; // r8d
  unsigned __int8 v220; // r15
  unsigned int v221; // edx
  __int64 v222; // rcx
  __int64 v223; // rsi
  unsigned __int8 v224; // r12
  __int64 v225; // rdx
  __int64 v226; // rcx
  __int64 v227; // r8
  __int64 v228; // r9
  unsigned __int8 v229; // al
  int v230; // eax
  KIRQL v231; // [rsp+40h] [rbp-C0h]
  unsigned __int8 v232; // [rsp+41h] [rbp-BFh]
  unsigned __int8 v233; // [rsp+41h] [rbp-BFh]
  unsigned __int8 v234; // [rsp+41h] [rbp-BFh]
  int v235; // [rsp+44h] [rbp-BCh]
  unsigned int v236; // [rsp+44h] [rbp-BCh]
  char v237; // [rsp+48h] [rbp-B8h] BYREF
  char v238[3]; // [rsp+49h] [rbp-B7h] BYREF
  unsigned int v239; // [rsp+4Ch] [rbp-B4h]
  int v240; // [rsp+50h] [rbp-B0h]
  __int64 v241; // [rsp+58h] [rbp-A8h]
  unsigned int v242; // [rsp+60h] [rbp-A0h]
  int v243; // [rsp+64h] [rbp-9Ch]
  int v244; // [rsp+68h] [rbp-98h]
  ULONG_PTR v245; // [rsp+70h] [rbp-90h]
  __int64 v246; // [rsp+78h] [rbp-88h]
  __int64 v247; // [rsp+80h] [rbp-80h]
  int v248; // [rsp+88h] [rbp-78h]
  int v249; // [rsp+8Ch] [rbp-74h]
  int v250; // [rsp+90h] [rbp-70h] BYREF
  int v251; // [rsp+94h] [rbp-6Ch]
  int v252; // [rsp+98h] [rbp-68h]
  int v253; // [rsp+9Ch] [rbp-64h]
  int v254; // [rsp+A0h] [rbp-60h]
  int v255; // [rsp+A4h] [rbp-5Ch]
  int v256; // [rsp+A8h] [rbp-58h]
  int v257; // [rsp+ACh] [rbp-54h] BYREF
  int v258; // [rsp+B0h] [rbp-50h]
  int v259; // [rsp+B4h] [rbp-4Ch]
  int v260; // [rsp+B8h] [rbp-48h]
  int v261; // [rsp+BCh] [rbp-44h]
  int v262; // [rsp+C0h] [rbp-40h]
  int v263; // [rsp+C8h] [rbp-38h]
  int v264; // [rsp+CCh] [rbp-34h]
  int v265; // [rsp+D0h] [rbp-30h]
  int v266; // [rsp+D4h] [rbp-2Ch]
  _QWORD v267[2]; // [rsp+D8h] [rbp-28h] BYREF
  _QWORD v268[11]; // [rsp+E8h] [rbp-18h] BYREF

  v5 = a3;
  v6 = a1;
  v231 = -1;
  v7 = 0;
  v239 = 0;
  v244 = 0;
  v8 = a3 + 16;
  v246 = 0LL;
  v9 = ((unsigned int)RtlpHpLfhPerfFlags >> 2) & 1;
  while ( 1 )
  {
    while ( 1 )
    {
      if ( v9 )
      {
        while ( 1 )
        {
          _m_prefetchw((const void *)(v5 + 56));
          v10 = *(_QWORD *)(v5 + 56);
          if ( (v10 & 0xFFF) != 0 )
          {
            while ( 1 )
            {
              v11 = _InterlockedCompareExchange64((volatile signed __int64 *)(v5 + 56), v10 - 1, v10);
              if ( v10 == v11 )
                break;
              v244 = 1;
              v10 = v11;
              if ( (v11 & 0xFFF) == 0 )
                goto LABEL_38;
            }
            v12 = v10 & 0xFFFFFFFFFFFFF000uLL;
            if ( v12 )
              break;
          }
LABEL_38:
          if ( v7 == 2 )
            goto LABEL_39;
          v85 = *(unsigned __int8 *)(v6 + 57);
          v7 = 2;
          v239 = 2;
          v86 = RtlpHpAcquireLockExclusive((volatile LONG *)(v5 + 16), v85);
          v6 = a1;
          v231 = v86;
        }
        if ( !v7 )
        {
          v13 = 0;
          goto LABEL_8;
        }
        if ( *(_BYTE *)(v6 + 57) )
        {
          ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(v5 + 16));
          if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && (CurrentIrql = KeGetCurrentIrql(), CurrentIrql <= 0xFu) )
          {
            v133 = v231;
            if ( v231 <= 0xFu && CurrentIrql >= 2u )
            {
              CurrentPrcb = KeGetCurrentPrcb();
              SchedulerAssist = CurrentPrcb->SchedulerAssist;
              v150 = ~(unsigned __int16)(-1LL << (v231 + 1));
              v94 = (v150 & SchedulerAssist[5]) == 0;
              SchedulerAssist[5] &= v150;
              if ( v94 )
              {
                KiRemoveSystemWorkPriorityKick(CurrentPrcb);
                __writecr8(v231);
                v13 = 0;
                v239 = 0;
                goto LABEL_8;
              }
            }
          }
          else
          {
            v133 = v231;
          }
          __writecr8(v133);
          v13 = 0;
          v239 = 0;
          goto LABEL_8;
        }
        if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)(v5 + 16), 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
          ExfTryToWakePushLock(v5 + 16);
        v266 = 0;
        CurrentThread = KeGetCurrentThread();
        if ( (unsigned int)MiGetSystemRegionType(v5 + 16) == 1 )
          SessionId = MmGetSessionIdEx(CurrentThread->ApcState.Process);
        else
          SessionId = -1;
        --CurrentThread->SpecialApcDisable;
        v166 = ++CurrentThread->AbAllocationRegionCount;
        v167 = ((char)CurrentThread->AbEntrySummary | (char)CurrentThread->AbOrphanedEntrySummary) ^ 0x3F;
        v94 = !_BitScanReverse((unsigned int *)&v168, v167);
        v265 = v168;
        if ( v94 )
          goto LABEL_262;
        while ( 1 )
        {
          v169 = (__int64)&CurrentThread->LockEntries[v168];
          v167 &= ~(1 << v168);
          if ( (*(_BYTE *)(v169 + 26) & 1) != 0
            && (*(_DWORD *)(v169 + 32) & 1) == 0
            && (*(_QWORD *)(v169 + 32) & 0x7FFFFFFFFFFFFFFCLL) == ((v5 + 16) & 0x7FFFFFFFFFFFFFFCLL)
            && *(_DWORD *)(v169 + 40) == SessionId )
          {
            *(_BYTE *)(v169 + 26) &= ~1u;
            if ( *(_QWORD *)(v169 + 32) )
              break;
          }
          v94 = !_BitScanReverse((unsigned int *)&v168, v167);
          v265 = v168;
          if ( v94 )
            goto LABEL_262;
        }
        if ( !v169 )
        {
LABEL_262:
          if ( (*((_DWORD *)&CurrentThread->0 + 1) & 0x10000) == 0 )
            KeBugCheckEx(0x162u, (ULONG_PTR)CurrentThread, v5 + 16, SessionId, 0LL);
        }
        else
        {
          *(_BYTE *)(v169 + 32) |= 2u;
          if ( *(__int64 *)(v169 + 32) < 0 )
            KiAbEntryRemoveFromTree((PRTL_BALANCED_NODE)v169);
          v266 = *(_DWORD *)(v169 + 88) & 0x1FFFF;
          *(_DWORD *)(v169 + 88) &= 0xFFFE0000;
          *(_BYTE *)(v169 + 25) &= ~1u;
          *(_QWORD *)(v169 + 32) = 0LL;
          v170 = 1 << ((signed __int64)(v169 - (unsigned __int64)CurrentThread->LockEntries) / 96);
          if ( v166 == 1 )
            CurrentThread->AbEntrySummary |= v170;
          else
            _InterlockedOr8((volatile signed __int8 *)&CurrentThread->AbOrphanedEntrySummary, v170);
        }
        --CurrentThread->AbAllocationRegionCount;
        KiAbThreadRemoveBoosts((ULONG_PTR)CurrentThread);
        v94 = CurrentThread->SpecialApcDisable++ == -1;
        if ( v94
          && ($C774EFD68449142D8271B1EC1EB7FB26 *)CurrentThread->ApcState.ApcListHead[0].Flink != &CurrentThread->152 )
        {
          KiCheckForKernelApcDelivery(v172, v171, v173, v174);
        }
        KiLeaveGuardedRegionUnsafe(KeGetCurrentThread());
        v13 = 0;
        v239 = 0;
LABEL_8:
        v14 = 3LL;
        v15 = 2 * (*(unsigned __int16 *)(v12 + 34) + (unsigned __int64)*(unsigned __int8 *)(v12 + 39));
        v267[1] = v12 + 48;
        v16 = *(unsigned __int8 *)(v5 + 1);
        v267[0] = v15;
        LODWORD(v241) = *((unsigned __int8 *)RtlpSearchWidth + v16);
        v17 = (unsigned __int16)(WORD4(RtlpHpHeapGlobals) ^ *(_WORD *)(v12 + 40) ^ ((unsigned int)v12 >> 12));
        v18 = (DWORD2(RtlpHpHeapGlobals) ^ *(_DWORD *)(v12 + 40) ^ ((unsigned int)v12 >> 12)) >> 16;
        v19 = v18;
        v20 = v18;
        v242 = (unsigned __int16)(WORD4(RtlpHpHeapGlobals) ^ *(_WORD *)(v12 + 40) ^ ((unsigned int)v12 >> 12));
        if ( a4 >= (unsigned int)v17 )
          v14 = 1LL;
        if ( (*(_BYTE *)(a1 + 62) & 2) != 0 )
        {
          v21 = v242;
          v20 = v18;
          if ( a4 >= (unsigned int)v17 )
            v20 = v18;
        }
        else
        {
          v13 = *((unsigned __int8 *)RtlpLowFragHeapRandomData + (unsigned __int16)RtlpLfhIncrementDataSlot(v17, v18));
          v21 = v242;
          if ( a4 >= v242 )
            v20 = v19;
        }
        v22 = RtlpLfhBlockBitmapAllocate((unsigned int)v267, *(unsigned __int16 *)(v12 + 36), v13, v241, v14);
        v25 = (unsigned int)v12 >> 12;
        LODWORD(v245) = v22;
        *(_WORD *)(v12 + 36) = v22;
        v26 = v20 + v22 * v21;
        if ( *(_BYTE *)(v12 + 45) <= 1u )
          goto LABEL_27;
        v27 = *(_BYTE *)(v12 + 44);
        v28 = *(unsigned __int16 *)(v12 + 46);
        v24 = 0LL;
        v250 = 0;
        v23 = v26 >> v27;
        v29 = *(unsigned __int16 *)(v12 + 40) ^ (unsigned __int16)((unsigned int)v12 >> 12);
        v237 = -1;
        v232 = -1;
        v243 = WORD4(RtlpHpHeapGlobals) ^ v29;
        v30 = 2 * v23;
        v31 = ((v26 + v243 - 1) >> v27) - (unsigned int)v23 + 1;
        v32 = (signed __int16 *)(2 * v23 + v12 + v28);
        _m_prefetchw(v32);
        v33 = &v32[v31];
        LODWORD(v241) = 0;
        v247 = 0LL;
        v240 = -1;
        if ( v32 >= v33 )
          goto LABEL_27;
        v34 = (unsigned __int64)v33;
        do
        {
          v35 = v232;
          while ( 1 )
          {
            v36 = *v32;
            while ( v36 > 0 )
            {
              v37 = v36;
              v36 = _InterlockedCompareExchange16(v32, v36 + 1, v36);
              if ( v37 == v36 )
              {
                v23 = (unsigned int)v241;
                v38 = v240;
                goto LABEL_21;
              }
            }
            if ( (_DWORD)v24 )
              break;
            v262 = 1;
            v89 = RtlpHpAcquireLockExclusive((volatile LONG *)(v12 + 24), *(unsigned __int8 *)(a1 + 57));
            v24 = 1LL;
            v35 = v89;
            v232 = v89;
          }
          v38 = v240;
          if ( v36 )
          {
            v23 = (unsigned int)(v241 + 1);
            LODWORD(v241) = v241 + 1;
            v247 = v30 >> 1;
            if ( v240 == -1 )
            {
              v38 = v30 >> 1;
              v240 = v38;
            }
          }
          else
          {
            v23 = (unsigned int)(v241 - 1);
            LODWORD(v241) = v241 - 1;
          }
          *v32 = v36 + 1;
LABEL_21:
          ++v32;
          v30 += 2LL;
        }
        while ( (unsigned __int64)v32 < v34 );
        v5 = a3;
        v21 = v242;
        if ( (_DWORD)v23 )
        {
          v23 = (unsigned int)((_DWORD)v23 << *(_BYTE *)(v12 + 44));
          v39 = a1;
          if ( (RtlpHpLfhPerfFlags & 0x20) != 0 )
            _InterlockedExchangeAdd64((volatile signed __int64 *)(*(__int16 *)(a1 + 58) + a1 + 24), (int)v23 / 4096);
        }
        else
        {
          v39 = a1;
        }
        if ( v38 != -1 )
        {
          v112 = *(_BYTE *)(v12 + 44);
          v113 = (int (__fastcall *)(__int64, unsigned __int64, _QWORD, __int64))(v39 ^ RtlpHpHeapGlobals ^ *(_QWORD *)(v39 + 24));
          v114 = v247 - v38;
          v237 = v35;
          v115 = v38 << v112;
          v250 = v114 + 1;
          v116 = (v114 + 1) << v112;
          v117 = *(_QWORD *)v39;
          v240 = v115;
          if ( v113(v117, v12 + v115, v116, v24) < 0 )
          {
            v187 = v26;
            v41 = a1;
            RtlpHpLfhSubsegmentDecBlockCounts(a1, v12, v187, v243);
            if ( *(_BYTE *)(a1 + 57) )
            {
              ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(v12 + 24));
              if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && (v200 = KeGetCurrentIrql(), v200 <= 0xFu) )
              {
                v201 = v232;
                if ( v232 <= 0xFu && v200 >= 2u )
                {
                  v202 = KeGetCurrentPrcb();
                  v24 = (__int64)v202->SchedulerAssist;
                  v203 = ~(unsigned __int16)(-1LL << (v232 + 1));
                  v94 = (v203 & *(_DWORD *)(v24 + 20)) == 0;
                  v23 = (unsigned int)v203 & *(_DWORD *)(v24 + 20);
                  *(_DWORD *)(v24 + 20) = v23;
                  if ( v94 )
                    KiRemoveSystemWorkPriorityKick(v202);
                }
              }
              else
              {
                v201 = v232;
              }
              __writecr8(v201);
            }
            else
            {
              if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)(v12 + 24), 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
                ExfTryToWakePushLock(v12 + 24);
              v252 = 0;
              v188 = KeGetCurrentThread();
              if ( (unsigned int)MiGetSystemRegionType(v12 + 24) == 1 )
                v189 = MmGetSessionIdEx(v188->ApcState.Process);
              else
                v189 = -1;
              --v188->SpecialApcDisable;
              v190 = ++v188->AbAllocationRegionCount;
              v191 = ((char)v188->AbEntrySummary | (char)v188->AbOrphanedEntrySummary) ^ 0x3F;
              v94 = !_BitScanReverse((unsigned int *)&v192, v191);
              v251 = v192;
              if ( v94 )
              {
LABEL_353:
                if ( (*((_DWORD *)&v188->0 + 1) & 0x10000) == 0 )
                  KeBugCheckEx(0x162u, (ULONG_PTR)v188, v12 + 24, v189, 0LL);
              }
              else
              {
                while ( 1 )
                {
                  v193 = (__int64)&v188->LockEntries[v192];
                  v191 &= ~(1 << v192);
                  if ( (*(_BYTE *)(v193 + 26) & 1) != 0
                    && (*(_DWORD *)(v193 + 32) & 1) == 0
                    && (*(_QWORD *)(v193 + 32) & 0x7FFFFFFFFFFFFFFCLL) == ((v12 + 24) & 0x7FFFFFFFFFFFFFFCLL)
                    && *(_DWORD *)(v193 + 40) == v189 )
                  {
                    *(_BYTE *)(v193 + 26) &= ~1u;
                    if ( *(_QWORD *)(v193 + 32) )
                      break;
                  }
                  v94 = !_BitScanReverse((unsigned int *)&v192, v191);
                  v251 = v192;
                  if ( v94 )
                    goto LABEL_352;
                }
                if ( !v193 )
                {
LABEL_352:
                  v41 = a1;
                  goto LABEL_353;
                }
                *(_BYTE *)(v193 + 32) |= 2u;
                if ( *(__int64 *)(v193 + 32) < 0 )
                  KiAbEntryRemoveFromTree((PRTL_BALANCED_NODE)v193);
                v252 = *(_DWORD *)(v193 + 88) & 0x1FFFF;
                *(_DWORD *)(v193 + 88) &= 0xFFFE0000;
                *(_BYTE *)(v193 + 25) &= ~1u;
                *(_QWORD *)(v193 + 32) = 0LL;
                v194 = (unsigned __int128)((v193 - (unsigned __int64)v188->LockEntries) * (__int128)0x2AAAAAAAAAAAAAABLL) >> 64;
                v41 = a1;
                v195 = 1 << ((v194 >> 4) + (v194 < 0));
                if ( v190 == 1 )
                  v188->AbEntrySummary |= v195;
                else
                  _InterlockedOr8((volatile signed __int8 *)&v188->AbOrphanedEntrySummary, v195);
              }
              --v188->AbAllocationRegionCount;
              KiAbThreadRemoveBoosts((ULONG_PTR)v188);
              v94 = v188->SpecialApcDisable++ == -1;
              if ( v94 && ($C774EFD68449142D8271B1EC1EB7FB26 *)v188->ApcState.ApcListHead[0].Flink != &v188->152 )
                KiCheckForKernelApcDelivery(v197, v196, v198, v199);
              KiLeaveGuardedRegionUnsafe(KeGetCurrentThread());
            }
            v40 = 0LL;
            if ( (_DWORD)v245 != -1 )
              _InterlockedAnd64(
                (volatile signed __int64 *)(v12 + 8 * ((unsigned __int64)(unsigned int)(2 * v245) >> 6) + 48),
                ~(3LL << ((2 * v245) & 0x3F)));
LABEL_29:
            if ( !v40 )
              RtlpHpLfhSubsegmentFreeBlock(v41, v12, 0LL, a5);
            if ( !v239 )
              goto LABEL_32;
            v204 = v5 + 16;
            if ( v239 == 2 )
            {
              if ( !*(_BYTE *)(v41 + 57) )
              {
                if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)v204, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
                  ExfTryToWakePushLock(v204);
                v256 = 0;
                v205 = KeGetCurrentThread();
                if ( (unsigned int)MiGetSystemRegionType(v204) == 1 )
                  v206 = (unsigned int)MmGetSessionIdEx(v205->ApcState.Process);
                else
                  v206 = 0xFFFFFFFFLL;
                --v205->SpecialApcDisable;
                v207 = ++v205->AbAllocationRegionCount;
                v208 = ((char)v205->AbEntrySummary | (char)v205->AbOrphanedEntrySummary) ^ 0x3F;
                v94 = !_BitScanReverse((unsigned int *)&v209, v208);
                v255 = v209;
                if ( v94 )
                  goto LABEL_391;
                while ( 1 )
                {
                  v210 = (__int64)&v205->LockEntries[v209];
                  v208 &= ~(1 << v209);
                  if ( (*(_BYTE *)(v210 + 26) & 1) != 0
                    && (*(_DWORD *)(v210 + 32) & 1) == 0
                    && (*(_QWORD *)(v210 + 32) & 0x7FFFFFFFFFFFFFFCLL) == (v204 & 0x7FFFFFFFFFFFFFFCLL)
                    && *(_DWORD *)(v210 + 40) == (_DWORD)v206 )
                  {
                    *(_BYTE *)(v210 + 26) &= ~1u;
                    if ( *(_QWORD *)(v210 + 32) )
                      break;
                  }
                  v94 = !_BitScanReverse((unsigned int *)&v209, v208);
                  v255 = v209;
                  if ( v94 )
                    goto LABEL_391;
                }
                if ( !v210 )
                {
LABEL_391:
                  if ( (*((_DWORD *)&v205->0 + 1) & 0x10000) == 0 )
                    KeBugCheckEx(0x162u, (ULONG_PTR)v205, v204, v206, 0LL);
                }
                else
                {
                  *(_BYTE *)(v210 + 32) |= 2u;
                  if ( *(__int64 *)(v210 + 32) < 0 )
                    KiAbEntryRemoveFromTree((PRTL_BALANCED_NODE)v210);
                  v256 = *(_DWORD *)(v210 + 88) & 0x1FFFF;
                  *(_DWORD *)(v210 + 88) &= 0xFFFE0000;
                  *(_BYTE *)(v210 + 25) &= ~1u;
                  *(_QWORD *)(v210 + 32) = 0LL;
                  v211 = (signed __int64)(v210 - (unsigned __int64)v205->LockEntries) / 96;
                  if ( v207 == 1 )
                    v205->AbEntrySummary |= 1 << v211;
                  else
                    _InterlockedOr8((volatile signed __int8 *)&v205->AbOrphanedEntrySummary, 1 << v211);
                }
                --v205->AbAllocationRegionCount;
                KiAbThreadRemoveBoosts((ULONG_PTR)v205);
                v94 = v205->SpecialApcDisable++ == -1;
                if ( v94 && ($C774EFD68449142D8271B1EC1EB7FB26 *)v205->ApcState.ApcListHead[0].Flink != &v205->152 )
                  KiCheckForKernelApcDelivery(v213, v212, v214, v215);
                goto LABEL_389;
              }
              ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)v204);
            }
            else
            {
              if ( !*(_BYTE *)(v41 + 57) )
              {
                if ( _InterlockedCompareExchange64((volatile signed __int64 *)v204, 0LL, 17LL) != 17 )
                  ExfReleasePushLockShared(v204);
                KeAbPostRelease(v204);
LABEL_389:
                KiLeaveGuardedRegionUnsafe(KeGetCurrentThread());
                goto LABEL_32;
              }
              ExReleaseSpinLockSharedFromDpcLevel((PEX_SPIN_LOCK)v204);
            }
            if ( KiIrqlFlags )
            {
              if ( (KiIrqlFlags & 1) != 0 )
              {
                v216 = KeGetCurrentIrql();
                if ( v216 <= 0xFu && v231 <= 0xFu && v216 >= 2u )
                {
                  v24 = (__int64)KeGetCurrentPrcb();
                  v217 = ~(unsigned __int16)(-1LL << (v231 + 1));
                  v23 = *(_QWORD *)(v24 + 33976);
                  v94 = (v217 & *(_DWORD *)(v23 + 20)) == 0;
                  *(_DWORD *)(v23 + 20) &= v217;
                  if ( v94 )
                    KiRemoveSystemWorkPriorityKick(v24);
                }
              }
            }
            __writecr8(v231);
            goto LABEL_32;
          }
          RtlpHpLfhSubsegmentIncBlockCounts(a1, v12, v240, v116, (__int64)&v250, 1, (__int64)&v237);
          v25 = (unsigned int)v12 >> 12;
LABEL_27:
          v40 = v12 + v26;
          if ( a4 < v21 )
          {
            v151 = v21 - a4;
            if ( v151 == 1 )
              v152 = 0x8000;
            else
              v152 = v151 & 0x3FFF;
            *(_WORD *)((WORD4(RtlpHpHeapGlobals) ^ *(unsigned __int16 *)(v12 + 40) ^ (unsigned __int64)v25) + v40 - 2) = v152;
          }
          v41 = a1;
          goto LABEL_29;
        }
        if ( (_DWORD)v24 )
        {
          if ( !*(_BYTE *)(v39 + 57) )
          {
            if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)(v12 + 24), 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
              ExfTryToWakePushLock(v12 + 24);
            v254 = 0;
            v96 = KeGetCurrentThread();
            v245 = (ULONG_PTR)v96;
            if ( (unsigned int)MiGetSystemRegionType(v12 + 24) == 1 )
              v97 = (unsigned int)MmGetSessionIdEx(v96->ApcState.Process);
            else
              v97 = 0xFFFFFFFFLL;
            --v96->SpecialApcDisable;
            v118 = (ULONG_PTR)v96;
            v234 = ++v96->AbAllocationRegionCount;
            v119 = ((char)v96->AbEntrySummary | (char)v96->AbOrphanedEntrySummary) ^ 0x3F;
            v94 = !_BitScanReverse((unsigned int *)&v120, v119);
            v253 = v120;
            if ( v94 )
              goto LABEL_155;
            while ( 1 )
            {
              v121 = *(_QWORD *)(v118 + 800) + 96 * v120;
              v119 &= ~(1 << v120);
              if ( (*(_BYTE *)(v121 + 26) & 1) != 0
                && (*(_DWORD *)(v121 + 32) & 1) == 0
                && (*(_QWORD *)(v121 + 32) & 0x7FFFFFFFFFFFFFFCLL) == ((v12 + 24) & 0x7FFFFFFFFFFFFFFCLL)
                && *(_DWORD *)(v121 + 40) == (_DWORD)v97 )
              {
                *(_BYTE *)(v121 + 26) &= ~1u;
                if ( *(_QWORD *)(v121 + 32) )
                  break;
              }
              v94 = !_BitScanReverse((unsigned int *)&v120, v119);
              v253 = v120;
              if ( v94 )
                goto LABEL_155;
            }
            if ( !v121 )
            {
LABEL_155:
              if ( (*(_DWORD *)(v118 + 120) & 0x10000) == 0 )
                KeBugCheckEx(0x162u, v118, v12 + 24, v97, 0LL);
            }
            else
            {
              *(_BYTE *)(v121 + 32) |= 2u;
              if ( *(__int64 *)(v121 + 32) < 0 )
              {
                KiAbEntryRemoveFromTree((PRTL_BALANCED_NODE)v121);
                v118 = v245;
              }
              v254 = *(_DWORD *)(v121 + 88) & 0x1FFFF;
              *(_DWORD *)(v121 + 88) &= 0xFFFE0000;
              *(_BYTE *)(v121 + 25) &= ~1u;
              *(_QWORD *)(v121 + 32) = 0LL;
              v122 = 1 << ((v121 - *(_QWORD *)(v118 + 800)) / 96);
              if ( v234 == 1 )
                *(_BYTE *)(v118 + 792) |= v122;
              else
                _InterlockedOr8((volatile signed __int8 *)(v118 + 870), v122);
            }
            --*(_BYTE *)(v118 + 794);
            KiAbThreadRemoveBoosts(v118);
            v127 = v245;
            v94 = (*(_WORD *)(v245 + 486))++ == 0xFFFF;
            if ( v94 && *(_QWORD *)(v127 + 152) != v127 + 152 )
              KiCheckForKernelApcDelivery(v124, v123, v125, v126);
            KiLeaveGuardedRegionUnsafe(KeGetCurrentThread());
            goto LABEL_26;
          }
          ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(v12 + 24));
          if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && (v109 = KeGetCurrentIrql(), v109 <= 0xFu) )
          {
            v95 = v232;
            if ( v232 <= 0xFu && v109 >= 2u )
            {
              v110 = KeGetCurrentPrcb();
              v24 = (__int64)v110->SchedulerAssist;
              v111 = ~(unsigned __int16)(-1LL << (v232 + 1));
              v94 = (v111 & *(_DWORD *)(v24 + 20)) == 0;
              v23 = (unsigned int)v111 & *(_DWORD *)(v24 + 20);
              *(_DWORD *)(v24 + 20) = v23;
              if ( v94 )
              {
                KiRemoveSystemWorkPriorityKick(v110);
                __writecr8(v232);
                goto LABEL_26;
              }
            }
          }
          else
          {
            v95 = v232;
          }
          __writecr8(v95);
        }
LABEL_26:
        v25 = (unsigned int)v12 >> 12;
        goto LABEL_27;
      }
      if ( !v7 )
      {
        v7 = 1;
        v184 = RtlpHpAcquireLockShared((volatile LONG *)v8, *(unsigned __int8 *)(v6 + 57));
        v6 = a1;
        v231 = v184;
      }
LABEL_39:
      if ( *(_QWORD *)(v5 + 8) )
        break;
      if ( v7 == 2 )
      {
        if ( *(_BYTE *)(v6 + 57) )
        {
          ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)v8);
          goto LABEL_173;
        }
        if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)v8, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
          ExfTryToWakePushLock(v8);
        v249 = 0;
        v131 = KeGetCurrentThread();
        if ( (unsigned int)MiGetSystemRegionType(v5 + 16) == 1 )
          v132 = MmGetSessionIdEx(v131->ApcState.Process);
        else
          v132 = -1;
        --v131->SpecialApcDisable;
        v155 = ++v131->AbAllocationRegionCount;
        v156 = ((char)v131->AbEntrySummary | (char)v131->AbOrphanedEntrySummary) ^ 0x3F;
        v94 = !_BitScanReverse((unsigned int *)&v157, v156);
        v264 = v157;
        if ( v94 )
          goto LABEL_244;
        while ( 1 )
        {
          v158 = (__int64)&v131->LockEntries[v157];
          v156 &= ~(1 << v157);
          if ( (*(_BYTE *)(v158 + 26) & 1) != 0
            && (*(_DWORD *)(v158 + 32) & 1) == 0
            && (*(_QWORD *)(v158 + 32) & 0x7FFFFFFFFFFFFFFCLL) == ((v5 + 16) & 0x7FFFFFFFFFFFFFFCLL)
            && *(_DWORD *)(v158 + 40) == v132 )
          {
            *(_BYTE *)(v158 + 26) &= ~1u;
            if ( *(_QWORD *)(v158 + 32) )
              break;
          }
          v94 = !_BitScanReverse((unsigned int *)&v157, v156);
          v264 = v157;
          if ( v94 )
            goto LABEL_244;
        }
        if ( !v158 )
        {
LABEL_244:
          if ( (*((_DWORD *)&v131->0 + 1) & 0x10000) == 0 )
            KeBugCheckEx(0x162u, (ULONG_PTR)v131, v5 + 16, v132, 0LL);
        }
        else
        {
          *(_BYTE *)(v158 + 32) |= 2u;
          if ( *(__int64 *)(v158 + 32) < 0 )
            KiAbEntryRemoveFromTree((PRTL_BALANCED_NODE)v158);
          v249 = 0;
          v249 = *(_DWORD *)(v158 + 88) & 0x1FFFF;
          *(_DWORD *)(v158 + 88) &= 0xFFFE0000;
          *(_BYTE *)(v158 + 25) &= ~1u;
          *(_QWORD *)(v158 + 32) = 0LL;
          v159 = 1 << ((signed __int64)(v158 - (unsigned __int64)v131->LockEntries) / 96);
          if ( v155 == 1 )
            v131->AbEntrySummary |= v159;
          else
            _InterlockedOr8((volatile signed __int8 *)&v131->AbOrphanedEntrySummary, v159);
        }
        --v131->AbAllocationRegionCount;
        KiAbThreadRemoveBoosts((ULONG_PTR)v131);
        v94 = v131->SpecialApcDisable++ == -1;
        if ( v94 && ($C774EFD68449142D8271B1EC1EB7FB26 *)v131->ApcState.ApcListHead[0].Flink != &v131->152 )
          KiCheckForKernelApcDelivery(v161, v160, v162, v163);
        KiLeaveGuardedRegionUnsafe(KeGetCurrentThread());
        v8 = v5 + 16;
      }
      else
      {
        if ( *(_BYTE *)(v6 + 57) )
        {
          ExReleaseSpinLockSharedFromDpcLevel((PEX_SPIN_LOCK)v8);
LABEL_173:
          if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && (v134 = KeGetCurrentIrql(), v134 <= 0xFu) )
          {
            v128 = v231;
            if ( v231 <= 0xFu && v134 >= 2u )
            {
              v135 = KeGetCurrentPrcb();
              v136 = v135->SchedulerAssist;
              v137 = ~(unsigned __int16)(-1LL << (v231 + 1));
              v94 = (v137 & v136[5]) == 0;
              v136[5] &= v137;
              if ( v94 )
                KiRemoveSystemWorkPriorityKick(v135);
            }
          }
          else
          {
            v128 = v231;
          }
          __writecr8(v128);
          goto LABEL_176;
        }
        if ( _InterlockedCompareExchange64((volatile signed __int64 *)v8, 0LL, 17LL) != 17 )
          ExfReleasePushLockShared(v8);
        KeAbPostRelease(v8);
        KiLeaveGuardedRegionUnsafe(KeGetCurrentThread());
      }
LABEL_176:
      Subsegment = RtlpHpLfhBucketGetSubsegment(a2, *(unsigned __int8 *)(a1 + 57));
      if ( !Subsegment )
      {
        Subsegment = RtlpHpLfhSubsegmentCreate(a1, a2, a5);
        if ( !Subsegment )
        {
          v40 = 0LL;
          goto LABEL_33;
        }
      }
      v7 = 2;
      v239 = 2;
      v231 = RtlpHpAcquireLockExclusive((volatile LONG *)v8, *(unsigned __int8 *)(a1 + 57));
      v129 = RtlpHpLfhSlotAddSubsegment(v5, Subsegment);
      v6 = a1;
      v246 = v129;
    }
    v44 = v5 + 24;
    v45 = 1;
    v46 = *(_QWORD *)(v5 + 24);
    if ( v9 )
      v45 = 4096;
    if ( v46 == v44 )
      goto LABEL_308;
LABEL_43:
    v47 = *(_WORD *)(v46 + 32);
    v244 = 0;
    while ( 1 )
    {
      if ( v45 < v47 )
      {
        v48 = v45;
      }
      else
      {
        v48 = v47;
        if ( v7 == 1 )
        {
          v46 = *(_QWORD *)v46;
          if ( v46 == v44 )
          {
            v8 = v5 + 16;
LABEL_308:
            v46 = 0LL;
            goto LABEL_64;
          }
          goto LABEL_43;
        }
      }
      v49 = v47 - v48;
      v47 = _InterlockedCompareExchange16((volatile signed __int16 *)(v46 + 32), v47 - v48, v47);
      v50 = v48;
      v51 = v48 + v49;
      if ( v47 == v51 )
        break;
      if ( v47 < v51 )
        v244 = 1;
    }
    if ( *(_WORD *)(v46 + 32) )
      goto LABEL_62;
    v52 = (__int64 *)v46;
    switch ( *(_BYTE *)(v46 + 38) )
    {
      case 0:
        v53 = (_QWORD *)(v5 + 8);
        goto LABEL_50;
      case 1:
        v44 = v5 + 40;
        v53 = 0LL;
LABEL_50:
        v54 = (__int64 **)(v5 + 40);
        if ( v44 )
        {
          v55 = *(_QWORD *)v46;
          v56 = *(__int64 **)(v46 + 8);
          if ( *(_QWORD *)(*(_QWORD *)v46 + 8LL) == v46 && *v56 == v46 )
          {
            *v56 = v55;
            *(_QWORD *)(v55 + 8) = v56;
            if ( v53 )
              --*v53;
            goto LABEL_55;
          }
LABEL_408:
          __fastfail(3u);
        }
LABEL_55:
        *(_BYTE *)(v46 + 38) = 1;
        if ( v5 != -40 )
        {
          v57 = *(__int64 **)(v5 + 48);
          if ( (__int64 **)*v57 != v54 )
            goto LABEL_408;
          *(_QWORD *)v46 = v54;
          *(_QWORD *)(v46 + 8) = v57;
          v52 = 0LL;
          *v57 = v46;
          *(_QWORD *)(v5 + 48) = v46;
        }
        if ( (*(_BYTE *)v5 & 1) == 0 && *(_QWORD *)(v5 + 8) > 8uLL )
        {
          v52 = *v54;
          v185 = **v54;
          if ( (__int64 **)(*v54)[1] != v54 || *(__int64 **)(v185 + 8) != v52 )
            goto LABEL_408;
          *v54 = (__int64 *)v185;
          *(_QWORD *)(v185 + 8) = v54;
          --MEMORY[0];
          *((_BYTE *)v52 + 38) = 2;
        }
        if ( v52 && *((_BYTE *)v52 + 38) == 2 )
          v52[2] = 0LL;
        break;
      case 2:
        v44 = 0LL;
        v53 = 0LL;
        goto LABEL_50;
    }
    v6 = a1;
LABEL_62:
    v58 = v48 <= 1u;
    v8 = v5 + 16;
    if ( !v58 )
      *(_QWORD *)(v5 + 56) = v46 ^ ((unsigned __int16)(v50 - 1) ^ (unsigned __int16)v46) & 0xFFF;
LABEL_64:
    if ( v7 == 2 )
    {
      if ( *(_BYTE *)(v6 + 57) )
      {
        ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)v8);
LABEL_67:
        if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && (v90 = KeGetCurrentIrql(), v90 <= 0xFu) )
        {
          v59 = v231;
          if ( v231 <= 0xFu && v90 >= 2u )
          {
            v91 = KeGetCurrentPrcb();
            v92 = v91->SchedulerAssist;
            v93 = ~(unsigned __int16)(-1LL << (v231 + 1));
            v94 = (v93 & v92[5]) == 0;
            v92[5] &= v93;
            if ( v94 )
              KiRemoveSystemWorkPriorityKick(v91);
          }
        }
        else
        {
          v59 = v231;
        }
        __writecr8(v59);
      }
      else
      {
        if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)v8, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
          ExfTryToWakePushLock(v8);
        v248 = 0;
        v87 = KeGetCurrentThread();
        v88 = (unsigned int)MiGetSystemRegionType(v8) == 1
            ? (unsigned int)MmGetSessionIdEx(v87->ApcState.Process)
            : 0xFFFFFFFFLL;
        --v87->SpecialApcDisable;
        v98 = ++v87->AbAllocationRegionCount;
        v99 = ((char)v87->AbEntrySummary | (char)v87->AbOrphanedEntrySummary) ^ 0x3F;
        v100 = v8 & 0x7FFFFFFFFFFFFFFCLL;
        v94 = !_BitScanReverse((unsigned int *)&v101, v99);
        v263 = v101;
        if ( v94 )
        {
LABEL_125:
          if ( (*((_DWORD *)&v87->0 + 1) & 0x10000) == 0 )
            KeBugCheckEx(0x162u, (ULONG_PTR)v87, v8, v88, 0LL);
        }
        else
        {
          while ( 1 )
          {
            v102 = (__int64)&v87->LockEntries[v101];
            v99 &= ~(1 << v101);
            if ( (*(_BYTE *)(v102 + 26) & 1) != 0
              && (*(_DWORD *)(v102 + 32) & 1) == 0
              && (*(_QWORD *)(v102 + 32) & 0x7FFFFFFFFFFFFFFCLL) == v100
              && *(_DWORD *)(v102 + 40) == (_DWORD)v88 )
            {
              *(_BYTE *)(v102 + 26) &= ~1u;
              if ( *(_QWORD *)(v102 + 32) )
                break;
            }
            v94 = !_BitScanReverse((unsigned int *)&v101, v99);
            v263 = v101;
            if ( v94 )
              goto LABEL_124;
          }
          if ( !v102 )
          {
LABEL_124:
            v8 = v5 + 16;
            goto LABEL_125;
          }
          *(_BYTE *)(v102 + 32) |= 2u;
          if ( *(__int64 *)(v102 + 32) < 0 )
            KiAbEntryRemoveFromTree((PRTL_BALANCED_NODE)v102);
          v248 = 0;
          v248 = *(_DWORD *)(v102 + 88) & 0x1FFFF;
          *(_DWORD *)(v102 + 88) &= 0xFFFE0000;
          *(_BYTE *)(v102 + 25) &= ~1u;
          *(_QWORD *)(v102 + 32) = 0LL;
          v103 = (unsigned __int128)((v102 - (unsigned __int64)v87->LockEntries) * (__int128)0x2AAAAAAAAAAAAAABLL) >> 64;
          v8 = v5 + 16;
          v104 = 1 << ((v103 >> 4) + (v103 < 0));
          if ( v98 == 1 )
            v87->AbEntrySummary |= v104;
          else
            _InterlockedOr8((volatile signed __int8 *)&v87->AbOrphanedEntrySummary, v104);
        }
        --v87->AbAllocationRegionCount;
        KiAbThreadRemoveBoosts((ULONG_PTR)v87);
        v94 = v87->SpecialApcDisable++ == -1;
        if ( v94 && ($C774EFD68449142D8271B1EC1EB7FB26 *)v87->ApcState.ApcListHead[0].Flink != &v87->152 )
          KiCheckForKernelApcDelivery(v106, v105, v107, v108);
        KiLeaveGuardedRegionUnsafe(KeGetCurrentThread());
      }
    }
    else
    {
      if ( *(_BYTE *)(v6 + 57) )
      {
        ExReleaseSpinLockSharedFromDpcLevel((PEX_SPIN_LOCK)v8);
        goto LABEL_67;
      }
      if ( _InterlockedCompareExchange64((volatile signed __int64 *)v8, 0LL, 17LL) != 17 )
        ExfReleasePushLockShared(v8);
      KeAbPostRelease(v8);
      KiLeaveGuardedRegionUnsafe(KeGetCurrentThread());
    }
    if ( v46 )
      break;
    v7 = 2;
    v239 = 2;
    v186 = RtlpHpAcquireLockExclusive((volatile LONG *)v8, *(unsigned __int8 *)(a1 + 57));
    v6 = a1;
    v231 = v186;
  }
  v60 = 3LL;
  v61 = 2 * (*(unsigned __int16 *)(v46 + 34) + (unsigned __int64)*(unsigned __int8 *)(v46 + 39));
  v268[1] = v46 + 48;
  v62 = *(unsigned __int8 *)(v5 + 1);
  v268[0] = v61;
  v243 = (unsigned int)v46 >> 12;
  LODWORD(v245) = *((unsigned __int8 *)RtlpSearchWidth + v62);
  v63 = (unsigned __int16)(WORD4(RtlpHpHeapGlobals) ^ ((unsigned int)v46 >> 12) ^ *(_WORD *)(v46 + 40));
  v64 = (DWORD2(RtlpHpHeapGlobals) ^ ((unsigned int)v46 >> 12) ^ *(_DWORD *)(v46 + 40)) >> 16;
  v65 = (DWORD2(RtlpHpHeapGlobals) ^ ((unsigned int)v46 >> 12) ^ *(_DWORD *)(v46 + 40)) >> 16;
  v66 = v65;
  v262 = v63;
  if ( a4 >= v63 )
    v60 = 1LL;
  if ( (*(_BYTE *)(a1 + 62) & 2) != 0 )
  {
    v66 = v64;
    v68 = 0;
    if ( a4 >= v63 )
      v66 = v64;
  }
  else
  {
    v67 = RtlpLfhIncrementDataSlot(v64, v64);
    if ( a4 >= v63 )
      v66 = v65;
    v68 = *((unsigned __int8 *)RtlpLowFragHeapRandomData + v67);
  }
  v69 = RtlpLfhBlockBitmapAllocate((unsigned int)v268, *(unsigned __int16 *)(v46 + 36), v68, v245, v60);
  v242 = v69;
  *(_WORD *)(v46 + 36) = v69;
  v70 = v66 + v69 * v63;
  if ( *(_BYTE *)(v46 + 45) <= 1u )
    goto LABEL_89;
  v71 = *(_BYTE *)(v46 + 44);
  v24 = 0LL;
  v72 = v46 + *(unsigned __int16 *)(v46 + 46);
  v23 = v70 >> v71;
  v243 = WORD4(RtlpHpHeapGlobals) ^ (unsigned __int16)v243 ^ *(unsigned __int16 *)(v46 + 40);
  v257 = 0;
  v238[0] = -1;
  v73 = ((v70 + v243 - 1) >> v71) - (unsigned int)v23 + 1;
  v233 = -1;
  v74 = 2 * v23;
  v75 = (signed __int16 *)(2 * v23 + v72);
  _m_prefetchw(v75);
  v241 = 0LL;
  v76 = &v75[v73];
  v239 = 0;
  v235 = -1;
  if ( v75 >= v76 )
    goto LABEL_89;
  v77 = (unsigned __int64)v76;
  do
  {
    while ( 1 )
    {
      v78 = *v75;
      while ( v78 > 0 )
      {
        v79 = v78;
        v78 = _InterlockedCompareExchange16(v75, v78 + 1, v78);
        if ( v79 == v78 )
        {
          v23 = v239;
          v80 = v235;
          LODWORD(v81) = v241;
          goto LABEL_84;
        }
      }
      if ( (_DWORD)v24 )
        break;
      LODWORD(v245) = 1;
      v130 = RtlpHpAcquireLockExclusive((volatile LONG *)(v46 + 24), *(unsigned __int8 *)(a1 + 57));
      v24 = 1LL;
      v233 = v130;
    }
    v80 = v235;
    if ( v78 )
    {
      v23 = v239 + 1;
      v81 = v74 >> 1;
      ++v239;
      v241 = v74 >> 1;
      if ( v235 == -1 )
      {
        v80 = v74 >> 1;
        v235 = v80;
      }
    }
    else
    {
      LODWORD(v81) = v241;
      v23 = --v239;
    }
    *v75 = v78 + 1;
LABEL_84:
    ++v75;
    v74 += 2LL;
  }
  while ( (unsigned __int64)v75 < v77 );
  v63 = v262;
  v82 = v242;
  if ( (_DWORD)v23 )
  {
    v23 = (unsigned int)((_DWORD)v23 << *(_BYTE *)(v46 + 44));
    v83 = a1;
    if ( (RtlpHpLfhPerfFlags & 0x20) != 0 )
      _InterlockedExchangeAdd64((volatile signed __int64 *)(*(__int16 *)(a1 + 58) + a1 + 24), (int)v23 / 4096);
  }
  else
  {
    v83 = a1;
  }
  if ( v80 == -1 )
  {
    if ( !(_DWORD)v24 )
      goto LABEL_89;
    if ( *(_BYTE *)(v83 + 57) )
    {
      ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(v46 + 24));
      if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && (v164 = KeGetCurrentIrql(), v164 <= 0xFu) )
      {
        v140 = v233;
        if ( v233 <= 0xFu && v164 >= 2u )
        {
          v24 = (__int64)KeGetCurrentPrcb();
          v165 = ~(unsigned __int16)(-1LL << (v233 + 1));
          v23 = *(_QWORD *)(v24 + 33976);
          v94 = (v165 & *(_DWORD *)(v23 + 20)) == 0;
          *(_DWORD *)(v23 + 20) &= v165;
          if ( v94 )
          {
            KiRemoveSystemWorkPriorityKick(v24);
            __writecr8(v233);
            goto LABEL_89;
          }
        }
      }
      else
      {
        v140 = v233;
      }
      __writecr8(v140);
      goto LABEL_89;
    }
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)(v46 + 24), 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock(v46 + 24);
    v261 = 0;
    v153 = KeGetCurrentThread();
    if ( (unsigned int)MiGetSystemRegionType(v46 + 24) == 1 )
      v154 = (unsigned int)MmGetSessionIdEx(v153->ApcState.Process);
    else
      v154 = 0xFFFFFFFFLL;
    --v153->SpecialApcDisable;
    v175 = ++v153->AbAllocationRegionCount;
    v176 = ((char)v153->AbEntrySummary | (char)v153->AbOrphanedEntrySummary) ^ 0x3F;
    v94 = !_BitScanReverse((unsigned int *)&v177, v176);
    v260 = v177;
    if ( v94 )
      goto LABEL_282;
    while ( 1 )
    {
      v178 = (__int64)&v153->LockEntries[v177];
      v176 &= ~(1 << v177);
      if ( (*(_BYTE *)(v178 + 26) & 1) != 0
        && (*(_DWORD *)(v178 + 32) & 1) == 0
        && (*(_QWORD *)(v178 + 32) & 0x7FFFFFFFFFFFFFFCLL) == ((v46 + 24) & 0x7FFFFFFFFFFFFFFCLL)
        && *(_DWORD *)(v178 + 40) == (_DWORD)v154 )
      {
        *(_BYTE *)(v178 + 26) &= ~1u;
        if ( *(_QWORD *)(v178 + 32) )
          break;
      }
      v94 = !_BitScanReverse((unsigned int *)&v177, v176);
      v260 = v177;
      if ( v94 )
        goto LABEL_282;
    }
    if ( !v178 )
    {
LABEL_282:
      if ( (*((_DWORD *)&v153->0 + 1) & 0x10000) == 0 )
        KeBugCheckEx(0x162u, (ULONG_PTR)v153, v46 + 24, v154, 0LL);
    }
    else
    {
      *(_BYTE *)(v178 + 32) |= 2u;
      if ( *(__int64 *)(v178 + 32) < 0 )
        KiAbEntryRemoveFromTree((PRTL_BALANCED_NODE)v178);
      v261 = *(_DWORD *)(v178 + 88) & 0x1FFFF;
      *(_DWORD *)(v178 + 88) &= 0xFFFE0000;
      *(_BYTE *)(v178 + 25) &= ~1u;
      *(_QWORD *)(v178 + 32) = 0LL;
      v179 = 1 << ((signed __int64)(v178 - (unsigned __int64)v153->LockEntries) / 96);
      if ( v175 == 1 )
        v153->AbEntrySummary |= v179;
      else
        _InterlockedOr8((volatile signed __int8 *)&v153->AbOrphanedEntrySummary, v179);
    }
    --v153->AbAllocationRegionCount;
    KiAbThreadRemoveBoosts((ULONG_PTR)v153);
    v94 = v153->SpecialApcDisable++ == -1;
    if ( v94 && ($C774EFD68449142D8271B1EC1EB7FB26 *)v153->ApcState.ApcListHead[0].Flink != &v153->152 )
      KiCheckForKernelApcDelivery(v181, v180, v182, v183);
    KiLeaveGuardedRegionUnsafe(KeGetCurrentThread());
LABEL_89:
    v40 = v46 + v70;
    if ( a4 < v63 )
      RtlpHpLfhSubsegmentSetUnusedBytes(v46, v46 + v70, v63 - a4, v24);
    v84 = a1;
  }
  else
  {
    v141 = v81 - v80;
    v142 = *(_BYTE *)(v46 + 44);
    v143 = (int (__fastcall *)(__int64, __int64, _QWORD, __int64))(v83 ^ RtlpHpHeapGlobals ^ *(_QWORD *)(v83 + 24));
    v144 = v80 << v142;
    v257 = v141 + 1;
    v145 = (v141 + 1) << v142;
    v146 = *(_QWORD *)v83;
    v238[0] = v233;
    v236 = v144;
    if ( v143(v146, v46 + v144, v145, v24) >= 0 )
    {
      RtlpHpLfhSubsegmentIncBlockCounts(a1, v46, v236, v145, (__int64)&v257, 1, (__int64)v238);
      goto LABEL_89;
    }
    v84 = a1;
    RtlpHpLfhSubsegmentDecBlockCounts(a1, v46, v70, v243);
    if ( *(_BYTE *)(a1 + 57) )
    {
      ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(v46 + 24));
      if ( KiIrqlFlags )
      {
        if ( (KiIrqlFlags & 1) != 0 )
        {
          v229 = KeGetCurrentIrql();
          if ( v229 <= 0xFu && v233 <= 0xFu && v229 >= 2u )
          {
            v24 = (__int64)KeGetCurrentPrcb();
            v230 = ~(unsigned __int16)(-1LL << (v233 + 1));
            v23 = *(_QWORD *)(v24 + 33976);
            v94 = (v230 & *(_DWORD *)(v23 + 20)) == 0;
            *(_DWORD *)(v23 + 20) &= v230;
            if ( v94 )
              KiRemoveSystemWorkPriorityKick(v24);
          }
        }
      }
      __writecr8(v233);
      v40 = 0LL;
    }
    else
    {
      if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)(v46 + 24), 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
        ExfTryToWakePushLock(v46 + 24);
      v40 = 0LL;
      v259 = 0;
      v218 = KeGetCurrentThread();
      if ( (unsigned int)MiGetSystemRegionType(v46 + 24) == 1 )
        v219 = MmGetSessionIdEx(v218->ApcState.Process);
      else
        v219 = -1;
      --v218->SpecialApcDisable;
      v220 = ++v218->AbAllocationRegionCount;
      v221 = ((char)v218->AbEntrySummary | (char)v218->AbOrphanedEntrySummary) ^ 0x3F;
      v94 = !_BitScanReverse((unsigned int *)&v222, v221);
      v258 = v222;
      if ( v94 )
      {
LABEL_433:
        if ( (*((_DWORD *)&v218->0 + 1) & 0x10000) == 0 )
          KeBugCheckEx(0x162u, (ULONG_PTR)v218, v46 + 24, v219, 0LL);
      }
      else
      {
        while ( 1 )
        {
          v223 = (__int64)&v218->LockEntries[v222];
          v221 &= ~(1 << v222);
          if ( (*(_BYTE *)(v223 + 26) & 1) != 0
            && (*(_DWORD *)(v223 + 32) & 1) == 0
            && (*(_QWORD *)(v223 + 32) & 0x7FFFFFFFFFFFFFFCLL) == ((v46 + 24) & 0x7FFFFFFFFFFFFFFCLL)
            && *(_DWORD *)(v223 + 40) == v219 )
          {
            *(_BYTE *)(v223 + 26) &= ~1u;
            if ( *(_QWORD *)(v223 + 32) )
              break;
          }
          v94 = !_BitScanReverse((unsigned int *)&v222, v221);
          v258 = v222;
          if ( v94 )
            goto LABEL_432;
        }
        if ( !v223 )
        {
LABEL_432:
          v40 = 0LL;
          goto LABEL_433;
        }
        *(_BYTE *)(v223 + 32) |= 2u;
        if ( *(__int64 *)(v223 + 32) < 0 )
          KiAbEntryRemoveFromTree((PRTL_BALANCED_NODE)v223);
        v259 = *(_DWORD *)(v223 + 88) & 0x1FFFF;
        *(_DWORD *)(v223 + 88) &= 0xFFFE0000;
        *(_BYTE *)(v223 + 25) &= ~1u;
        *(_QWORD *)(v223 + 32) = 0LL;
        v224 = 1 << ((char)(v223 - LOBYTE(v218->LockEntries)) / 96);
        if ( v220 == 1 )
          v218->AbEntrySummary |= v224;
        else
          _InterlockedOr8((volatile signed __int8 *)&v218->AbOrphanedEntrySummary, v224);
        v40 = 0LL;
      }
      --v218->AbAllocationRegionCount;
      KiAbThreadRemoveBoosts((ULONG_PTR)v218);
      v94 = v218->SpecialApcDisable++ == -1;
      if ( v94 && ($C774EFD68449142D8271B1EC1EB7FB26 *)v218->ApcState.ApcListHead[0].Flink != &v218->152 )
        KiCheckForKernelApcDelivery(v226, v225, v227, v228);
      KiLeaveGuardedRegionUnsafe(KeGetCurrentThread());
      v84 = a1;
    }
    if ( v82 != -1 )
      _InterlockedAnd64(
        (volatile signed __int64 *)(v46 + 8 * ((unsigned __int64)(2 * v82) >> 6) + 48),
        ~(3LL << ((2 * v82) & 0x3F)));
  }
  if ( !v40 )
    RtlpHpLfhSubsegmentFreeBlock(v84, v46, 0LL, a5);
LABEL_32:
  Subsegment = v246;
LABEL_33:
  if ( v244 )
    RtlpHpLfhBucketUpdateAffinityMapping(a1, a2, v23, v24);
  if ( Subsegment )
    RtlpHpLfhBucketAddSubsegment(a1, a2, Subsegment, a5);
  return v40;
}
