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
  __int64 v99; // rdx
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
  __int64 v119; // r8
  __int64 v120; // rdx
  __int64 v121; // rcx
  __int64 v122; // rsi
  unsigned __int8 v123; // al
  __int64 v124; // rdx
  __int64 v125; // rcx
  __int64 v126; // r8
  __int64 v127; // r9
  ULONG_PTR v128; // rsi
  KIRQL v129; // r13
  __int64 v130; // rax
  KIRQL v131; // al
  struct _KTHREAD *v132; // r14
  __int64 v133; // r8
  KIRQL v134; // r13
  unsigned __int8 v135; // al
  struct _KPRCB *v136; // r10
  _DWORD *v137; // r9
  int v138; // eax
  struct _KTHREAD *CurrentThread; // rsi
  __int64 SessionId; // r8
  unsigned __int8 v141; // si
  int v142; // r11d
  char v143; // cl
  int (__fastcall *v144)(__int64, __int64, _QWORD, __int64); // rax
  unsigned int v145; // r10d
  unsigned int v146; // esi
  __int64 v147; // rcx
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  int v151; // eax
  unsigned int v152; // r13d
  __int16 v153; // r13
  struct _KTHREAD *v154; // rbx
  ULONG_PTR v155; // r9
  unsigned __int8 v156; // r12
  __int64 v157; // rdx
  __int64 v158; // rcx
  __int64 v159; // rdi
  unsigned __int8 v160; // al
  __int64 v161; // rdx
  __int64 v162; // rcx
  __int64 v163; // r8
  __int64 v164; // r9
  unsigned __int8 v165; // al
  int v166; // eax
  unsigned __int8 v167; // r13
  __int64 v168; // rdx
  __int64 v169; // rcx
  __int64 v170; // r14
  unsigned __int8 v171; // al
  __int64 v172; // rdx
  __int64 v173; // rcx
  __int64 v174; // r8
  __int64 v175; // r9
  unsigned __int8 v176; // r13
  __int64 v177; // rdx
  __int64 v178; // r8
  __int64 v179; // rcx
  __int64 v180; // rsi
  unsigned __int8 v181; // al
  __int64 v182; // rdx
  __int64 v183; // rcx
  __int64 v184; // r8
  __int64 v185; // r9
  KIRQL v186; // al
  __int64 v187; // rax
  KIRQL v188; // al
  unsigned int v189; // r8d
  struct _KTHREAD *v190; // rsi
  __int64 v191; // r8
  unsigned __int8 v192; // r13
  __int64 v193; // rdx
  __int64 v194; // rcx
  __int64 v195; // r14
  __int64 v196; // rdx
  unsigned __int8 v197; // al
  __int64 v198; // rdx
  __int64 v199; // rcx
  __int64 v200; // r8
  __int64 v201; // r9
  unsigned __int8 v202; // al
  unsigned __int8 v203; // si
  struct _KPRCB *v204; // r10
  int v205; // eax
  ULONG_PTR v206; // r15
  struct _KTHREAD *v207; // rbx
  ULONG_PTR v208; // r9
  unsigned __int8 v209; // r14
  __int64 v210; // rdx
  __int64 v211; // r8
  __int64 v212; // rcx
  __int64 v213; // rdi
  __int64 v214; // rdx
  __int64 v215; // rdx
  __int64 v216; // rcx
  __int64 v217; // r8
  __int64 v218; // r9
  unsigned __int8 v219; // al
  int v220; // eax
  struct _KTHREAD *v221; // rbx
  __int64 v222; // r8
  unsigned __int8 v223; // r15
  __int64 v224; // rdx
  __int64 v225; // rcx
  __int64 v226; // rsi
  unsigned __int8 v227; // r12
  __int64 v228; // rdx
  __int64 v229; // rcx
  __int64 v230; // r8
  __int64 v231; // r9
  unsigned __int8 v232; // al
  int v233; // eax
  KIRQL v234; // [rsp+40h] [rbp-C0h]
  unsigned __int8 v235; // [rsp+41h] [rbp-BFh]
  unsigned __int8 v236; // [rsp+41h] [rbp-BFh]
  unsigned __int8 v237; // [rsp+41h] [rbp-BFh]
  int v238; // [rsp+44h] [rbp-BCh]
  unsigned int v239; // [rsp+44h] [rbp-BCh]
  char v240; // [rsp+48h] [rbp-B8h] BYREF
  char v241[3]; // [rsp+49h] [rbp-B7h] BYREF
  unsigned int v242; // [rsp+4Ch] [rbp-B4h]
  int v243; // [rsp+50h] [rbp-B0h]
  __int64 v244; // [rsp+58h] [rbp-A8h]
  unsigned int v245; // [rsp+60h] [rbp-A0h]
  int v246; // [rsp+64h] [rbp-9Ch]
  int v247; // [rsp+68h] [rbp-98h]
  ULONG_PTR v248; // [rsp+70h] [rbp-90h]
  __int64 v249; // [rsp+78h] [rbp-88h]
  __int64 v250; // [rsp+80h] [rbp-80h]
  int v251; // [rsp+88h] [rbp-78h]
  int v252; // [rsp+8Ch] [rbp-74h]
  int v253; // [rsp+90h] [rbp-70h] BYREF
  int v254; // [rsp+94h] [rbp-6Ch]
  int v255; // [rsp+98h] [rbp-68h]
  int v256; // [rsp+9Ch] [rbp-64h]
  int v257; // [rsp+A0h] [rbp-60h]
  int v258; // [rsp+A4h] [rbp-5Ch]
  int v259; // [rsp+A8h] [rbp-58h]
  int v260; // [rsp+ACh] [rbp-54h] BYREF
  int v261; // [rsp+B0h] [rbp-50h]
  int v262; // [rsp+B4h] [rbp-4Ch]
  int v263; // [rsp+B8h] [rbp-48h]
  int v264; // [rsp+BCh] [rbp-44h]
  int v265; // [rsp+C0h] [rbp-40h]
  int v266; // [rsp+C8h] [rbp-38h]
  int v267; // [rsp+CCh] [rbp-34h]
  int v268; // [rsp+D0h] [rbp-30h]
  int v269; // [rsp+D4h] [rbp-2Ch]
  _QWORD v270[2]; // [rsp+D8h] [rbp-28h] BYREF
  _QWORD v271[11]; // [rsp+E8h] [rbp-18h] BYREF

  v5 = a3;
  v6 = a1;
  v234 = -1;
  v7 = 0;
  v242 = 0;
  v247 = 0;
  v8 = a3 + 16;
  v249 = 0LL;
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
              v247 = 1;
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
          v242 = 2;
          v86 = RtlpHpAcquireLockExclusive((volatile LONG *)(v5 + 16), v85);
          v6 = a1;
          v234 = v86;
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
            v134 = v234;
            if ( v234 <= 0xFu && CurrentIrql >= 2u )
            {
              CurrentPrcb = KeGetCurrentPrcb();
              SchedulerAssist = CurrentPrcb->SchedulerAssist;
              v151 = ~(unsigned __int16)(-1LL << (v234 + 1));
              v94 = (v151 & SchedulerAssist[5]) == 0;
              SchedulerAssist[5] &= v151;
              if ( v94 )
              {
                KiRemoveSystemWorkPriorityKick(CurrentPrcb);
                __writecr8(v234);
                v13 = 0;
                v242 = 0;
                goto LABEL_8;
              }
            }
          }
          else
          {
            v134 = v234;
          }
          __writecr8(v134);
          v13 = 0;
          v242 = 0;
          goto LABEL_8;
        }
        if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)(v5 + 16), 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
          ExfTryToWakePushLock(v5 + 16);
        v269 = 0;
        CurrentThread = KeGetCurrentThread();
        if ( (unsigned int)MiGetSystemRegionType(v5 + 16) == 1 )
          SessionId = (unsigned int)MmGetSessionIdEx(CurrentThread->ApcState.Process);
        else
          SessionId = 0xFFFFFFFFLL;
        --CurrentThread->SpecialApcDisable;
        v167 = ++CurrentThread->AbAllocationRegionCount;
        LODWORD(v168) = ((char)CurrentThread->AbEntrySummary | (char)CurrentThread->AbOrphanedEntrySummary) ^ 0x3F;
        v94 = !_BitScanReverse((unsigned int *)&v169, v168);
        v268 = v169;
        if ( v94 )
          goto LABEL_262;
        while ( 1 )
        {
          v170 = (__int64)&CurrentThread->LockEntries[v169];
          v168 = ~(1 << v169) & (unsigned int)v168;
          if ( (*(_BYTE *)(v170 + 26) & 1) != 0
            && (*(_DWORD *)(v170 + 32) & 1) == 0
            && (*(_QWORD *)(v170 + 32) & 0x7FFFFFFFFFFFFFFCLL) == ((v5 + 16) & 0x7FFFFFFFFFFFFFFCLL)
            && *(_DWORD *)(v170 + 40) == (_DWORD)SessionId )
          {
            *(_BYTE *)(v170 + 26) &= ~1u;
            if ( *(_QWORD *)(v170 + 32) )
              break;
          }
          v94 = !_BitScanReverse((unsigned int *)&v169, v168);
          v268 = v169;
          if ( v94 )
            goto LABEL_262;
        }
        if ( !v170 )
        {
LABEL_262:
          if ( (*((_DWORD *)&CurrentThread->0 + 1) & 0x10000) == 0 )
            KeBugCheckEx(0x162u, (ULONG_PTR)CurrentThread, v5 + 16, (unsigned int)SessionId, 0LL);
        }
        else
        {
          *(_BYTE *)(v170 + 32) |= 2u;
          if ( *(__int64 *)(v170 + 32) < 0 )
            KiAbEntryRemoveFromTree(v170, v168, SessionId);
          v269 = *(_DWORD *)(v170 + 88) & 0x1FFFF;
          *(_DWORD *)(v170 + 88) &= 0xFFFE0000;
          *(_BYTE *)(v170 + 25) &= ~1u;
          *(_QWORD *)(v170 + 32) = 0LL;
          v171 = 1 << ((signed __int64)(v170 - (unsigned __int64)CurrentThread->LockEntries) / 96);
          if ( v167 == 1 )
            CurrentThread->AbEntrySummary |= v171;
          else
            _InterlockedOr8((volatile signed __int8 *)&CurrentThread->AbOrphanedEntrySummary, v171);
        }
        --CurrentThread->AbAllocationRegionCount;
        KiAbThreadRemoveBoosts((ULONG_PTR)CurrentThread);
        v94 = CurrentThread->SpecialApcDisable++ == -1;
        if ( v94
          && ($C774EFD68449142D8271B1EC1EB7FB26 *)CurrentThread->ApcState.ApcListHead[0].Flink != &CurrentThread->152 )
        {
          KiCheckForKernelApcDelivery(v173, v172, v174, v175);
        }
        KiLeaveGuardedRegionUnsafe(KeGetCurrentThread());
        v13 = 0;
        v242 = 0;
LABEL_8:
        v14 = 3LL;
        v15 = 2 * (*(unsigned __int16 *)(v12 + 34) + (unsigned __int64)*(unsigned __int8 *)(v12 + 39));
        v270[1] = v12 + 48;
        v16 = *(unsigned __int8 *)(v5 + 1);
        v270[0] = v15;
        LODWORD(v244) = *((unsigned __int8 *)RtlpSearchWidth + v16);
        v17 = (unsigned __int16)(WORD4(RtlpHpHeapGlobals) ^ *(_WORD *)(v12 + 40) ^ ((unsigned int)v12 >> 12));
        v18 = (DWORD2(RtlpHpHeapGlobals) ^ *(_DWORD *)(v12 + 40) ^ ((unsigned int)v12 >> 12)) >> 16;
        v19 = v18;
        v20 = v18;
        v245 = (unsigned __int16)(WORD4(RtlpHpHeapGlobals) ^ *(_WORD *)(v12 + 40) ^ ((unsigned int)v12 >> 12));
        if ( a4 >= (unsigned int)v17 )
          v14 = 1LL;
        if ( (*(_BYTE *)(a1 + 62) & 2) != 0 )
        {
          v21 = v245;
          v20 = v18;
          if ( a4 >= (unsigned int)v17 )
            v20 = v18;
        }
        else
        {
          v13 = *((unsigned __int8 *)RtlpLowFragHeapRandomData + (unsigned __int16)RtlpLfhIncrementDataSlot(v17, v18));
          v21 = v245;
          if ( a4 >= v245 )
            v20 = v19;
        }
        v22 = RtlpLfhBlockBitmapAllocate((unsigned int)v270, *(unsigned __int16 *)(v12 + 36), v13, v244, v14);
        v25 = (unsigned int)v12 >> 12;
        LODWORD(v248) = v22;
        *(_WORD *)(v12 + 36) = v22;
        v26 = v20 + v22 * v21;
        if ( *(_BYTE *)(v12 + 45) <= 1u )
          goto LABEL_27;
        v27 = *(_BYTE *)(v12 + 44);
        v28 = *(unsigned __int16 *)(v12 + 46);
        v24 = 0LL;
        v253 = 0;
        v23 = v26 >> v27;
        v29 = *(unsigned __int16 *)(v12 + 40) ^ (unsigned __int16)((unsigned int)v12 >> 12);
        v240 = -1;
        v235 = -1;
        v246 = WORD4(RtlpHpHeapGlobals) ^ v29;
        v30 = 2 * v23;
        v31 = ((v26 + v246 - 1) >> v27) - (unsigned int)v23 + 1;
        v32 = (signed __int16 *)(2 * v23 + v12 + v28);
        _m_prefetchw(v32);
        v33 = &v32[v31];
        LODWORD(v244) = 0;
        v250 = 0LL;
        v243 = -1;
        if ( v32 >= v33 )
          goto LABEL_27;
        v34 = (unsigned __int64)v33;
        do
        {
          v35 = v235;
          while ( 1 )
          {
            v36 = *v32;
            while ( v36 > 0 )
            {
              v37 = v36;
              v36 = _InterlockedCompareExchange16(v32, v36 + 1, v36);
              if ( v37 == v36 )
              {
                v23 = (unsigned int)v244;
                v38 = v243;
                goto LABEL_21;
              }
            }
            if ( (_DWORD)v24 )
              break;
            v265 = 1;
            v89 = RtlpHpAcquireLockExclusive((volatile LONG *)(v12 + 24), *(unsigned __int8 *)(a1 + 57));
            v24 = 1LL;
            v35 = v89;
            v235 = v89;
          }
          v38 = v243;
          if ( v36 )
          {
            v23 = (unsigned int)(v244 + 1);
            LODWORD(v244) = v244 + 1;
            v250 = v30 >> 1;
            if ( v243 == -1 )
            {
              v38 = v30 >> 1;
              v243 = v38;
            }
          }
          else
          {
            v23 = (unsigned int)(v244 - 1);
            LODWORD(v244) = v244 - 1;
          }
          *v32 = v36 + 1;
LABEL_21:
          ++v32;
          v30 += 2LL;
        }
        while ( (unsigned __int64)v32 < v34 );
        v5 = a3;
        v21 = v245;
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
          v114 = v250 - v38;
          v240 = v35;
          v115 = v38 << v112;
          v253 = v114 + 1;
          v116 = (v114 + 1) << v112;
          v117 = *(_QWORD *)v39;
          v243 = v115;
          if ( v113(v117, v12 + v115, v116, v24) < 0 )
          {
            v189 = v26;
            v41 = a1;
            RtlpHpLfhSubsegmentDecBlockCounts(a1, v12, v189, v246);
            if ( *(_BYTE *)(a1 + 57) )
            {
              ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(v12 + 24));
              if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && (v202 = KeGetCurrentIrql(), v202 <= 0xFu) )
              {
                v203 = v235;
                if ( v235 <= 0xFu && v202 >= 2u )
                {
                  v204 = KeGetCurrentPrcb();
                  v24 = (__int64)v204->SchedulerAssist;
                  v205 = ~(unsigned __int16)(-1LL << (v235 + 1));
                  v94 = (v205 & *(_DWORD *)(v24 + 20)) == 0;
                  v23 = (unsigned int)v205 & *(_DWORD *)(v24 + 20);
                  *(_DWORD *)(v24 + 20) = v23;
                  if ( v94 )
                    KiRemoveSystemWorkPriorityKick(v204);
                }
              }
              else
              {
                v203 = v235;
              }
              __writecr8(v203);
            }
            else
            {
              if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)(v12 + 24), 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
                ExfTryToWakePushLock(v12 + 24);
              v255 = 0;
              v190 = KeGetCurrentThread();
              if ( (unsigned int)MiGetSystemRegionType(v12 + 24) == 1 )
                v191 = (unsigned int)MmGetSessionIdEx(v190->ApcState.Process);
              else
                v191 = 0xFFFFFFFFLL;
              --v190->SpecialApcDisable;
              v192 = ++v190->AbAllocationRegionCount;
              LODWORD(v193) = ((char)v190->AbEntrySummary | (char)v190->AbOrphanedEntrySummary) ^ 0x3F;
              v94 = !_BitScanReverse((unsigned int *)&v194, v193);
              v254 = v194;
              if ( v94 )
              {
LABEL_353:
                if ( (*((_DWORD *)&v190->0 + 1) & 0x10000) == 0 )
                  KeBugCheckEx(0x162u, (ULONG_PTR)v190, v12 + 24, (unsigned int)v191, 0LL);
              }
              else
              {
                while ( 1 )
                {
                  v195 = (__int64)&v190->LockEntries[v194];
                  v193 = ~(1 << v194) & (unsigned int)v193;
                  if ( (*(_BYTE *)(v195 + 26) & 1) != 0
                    && (*(_DWORD *)(v195 + 32) & 1) == 0
                    && (*(_QWORD *)(v195 + 32) & 0x7FFFFFFFFFFFFFFCLL) == ((v12 + 24) & 0x7FFFFFFFFFFFFFFCLL)
                    && *(_DWORD *)(v195 + 40) == (_DWORD)v191 )
                  {
                    *(_BYTE *)(v195 + 26) &= ~1u;
                    if ( *(_QWORD *)(v195 + 32) )
                      break;
                  }
                  v94 = !_BitScanReverse((unsigned int *)&v194, v193);
                  v254 = v194;
                  if ( v94 )
                    goto LABEL_352;
                }
                if ( !v195 )
                {
LABEL_352:
                  v41 = a1;
                  goto LABEL_353;
                }
                *(_BYTE *)(v195 + 32) |= 2u;
                if ( *(__int64 *)(v195 + 32) < 0 )
                  KiAbEntryRemoveFromTree(v195, v193, v191);
                v255 = *(_DWORD *)(v195 + 88) & 0x1FFFF;
                *(_DWORD *)(v195 + 88) &= 0xFFFE0000;
                *(_BYTE *)(v195 + 25) &= ~1u;
                *(_QWORD *)(v195 + 32) = 0LL;
                v196 = (unsigned __int128)((v195 - (unsigned __int64)v190->LockEntries) * (__int128)0x2AAAAAAAAAAAAAABLL) >> 64;
                v41 = a1;
                v197 = 1 << ((v196 >> 4) + (v196 < 0));
                if ( v192 == 1 )
                  v190->AbEntrySummary |= v197;
                else
                  _InterlockedOr8((volatile signed __int8 *)&v190->AbOrphanedEntrySummary, v197);
              }
              --v190->AbAllocationRegionCount;
              KiAbThreadRemoveBoosts((ULONG_PTR)v190);
              v94 = v190->SpecialApcDisable++ == -1;
              if ( v94 && ($C774EFD68449142D8271B1EC1EB7FB26 *)v190->ApcState.ApcListHead[0].Flink != &v190->152 )
                KiCheckForKernelApcDelivery(v199, v198, v200, v201);
              KiLeaveGuardedRegionUnsafe(KeGetCurrentThread());
            }
            v40 = 0LL;
            if ( (_DWORD)v248 != -1 )
              _InterlockedAnd64(
                (volatile signed __int64 *)(v12 + 8 * ((unsigned __int64)(unsigned int)(2 * v248) >> 6) + 48),
                ~(3LL << ((2 * v248) & 0x3F)));
LABEL_29:
            if ( !v40 )
              RtlpHpLfhSubsegmentFreeBlock(v41, v12, 0LL, a5);
            if ( !v242 )
              goto LABEL_32;
            v206 = v5 + 16;
            if ( v242 == 2 )
            {
              if ( !*(_BYTE *)(v41 + 57) )
              {
                if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)v206, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
                  ExfTryToWakePushLock(v206);
                v259 = 0;
                v207 = KeGetCurrentThread();
                if ( (unsigned int)MiGetSystemRegionType(v206) == 1 )
                  v208 = (unsigned int)MmGetSessionIdEx(v207->ApcState.Process);
                else
                  v208 = 0xFFFFFFFFLL;
                --v207->SpecialApcDisable;
                v209 = ++v207->AbAllocationRegionCount;
                LODWORD(v210) = ((char)v207->AbEntrySummary | (char)v207->AbOrphanedEntrySummary) ^ 0x3F;
                v211 = v206 & 0x7FFFFFFFFFFFFFFCLL;
                v94 = !_BitScanReverse((unsigned int *)&v212, v210);
                v258 = v212;
                if ( v94 )
                  goto LABEL_391;
                while ( 1 )
                {
                  v213 = (__int64)&v207->LockEntries[v212];
                  v210 = ~(1 << v212) & (unsigned int)v210;
                  if ( (*(_BYTE *)(v213 + 26) & 1) != 0
                    && (*(_DWORD *)(v213 + 32) & 1) == 0
                    && (*(_QWORD *)(v213 + 32) & 0x7FFFFFFFFFFFFFFCLL) == v211
                    && *(_DWORD *)(v213 + 40) == (_DWORD)v208 )
                  {
                    *(_BYTE *)(v213 + 26) &= ~1u;
                    if ( *(_QWORD *)(v213 + 32) )
                      break;
                  }
                  v94 = !_BitScanReverse((unsigned int *)&v212, v210);
                  v258 = v212;
                  if ( v94 )
                    goto LABEL_391;
                }
                if ( !v213 )
                {
LABEL_391:
                  if ( (*((_DWORD *)&v207->0 + 1) & 0x10000) == 0 )
                    KeBugCheckEx(0x162u, (ULONG_PTR)v207, v206, v208, 0LL);
                }
                else
                {
                  *(_BYTE *)(v213 + 32) |= 2u;
                  if ( *(__int64 *)(v213 + 32) < 0 )
                    KiAbEntryRemoveFromTree(v213, v210, v211);
                  v259 = *(_DWORD *)(v213 + 88) & 0x1FFFF;
                  *(_DWORD *)(v213 + 88) &= 0xFFFE0000;
                  *(_BYTE *)(v213 + 25) &= ~1u;
                  *(_QWORD *)(v213 + 32) = 0LL;
                  v214 = (signed __int64)(v213 - (unsigned __int64)v207->LockEntries) / 96;
                  if ( v209 == 1 )
                    v207->AbEntrySummary |= 1 << v214;
                  else
                    _InterlockedOr8((volatile signed __int8 *)&v207->AbOrphanedEntrySummary, 1 << v214);
                }
                --v207->AbAllocationRegionCount;
                KiAbThreadRemoveBoosts((ULONG_PTR)v207);
                v94 = v207->SpecialApcDisable++ == -1;
                if ( v94 && ($C774EFD68449142D8271B1EC1EB7FB26 *)v207->ApcState.ApcListHead[0].Flink != &v207->152 )
                  KiCheckForKernelApcDelivery(v216, v215, v217, v218);
                goto LABEL_389;
              }
              ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)v206);
            }
            else
            {
              if ( !*(_BYTE *)(v41 + 57) )
              {
                if ( _InterlockedCompareExchange64((volatile signed __int64 *)v206, 0LL, 17LL) != 17 )
                  ExfReleasePushLockShared(v206);
                KeAbPostRelease(v206);
LABEL_389:
                KiLeaveGuardedRegionUnsafe(KeGetCurrentThread());
                goto LABEL_32;
              }
              ExReleaseSpinLockSharedFromDpcLevel((PEX_SPIN_LOCK)v206);
            }
            if ( KiIrqlFlags )
            {
              if ( (KiIrqlFlags & 1) != 0 )
              {
                v219 = KeGetCurrentIrql();
                if ( v219 <= 0xFu && v234 <= 0xFu && v219 >= 2u )
                {
                  v24 = (__int64)KeGetCurrentPrcb();
                  v220 = ~(unsigned __int16)(-1LL << (v234 + 1));
                  v23 = *(_QWORD *)(v24 + 33976);
                  v94 = (v220 & *(_DWORD *)(v23 + 20)) == 0;
                  *(_DWORD *)(v23 + 20) &= v220;
                  if ( v94 )
                    KiRemoveSystemWorkPriorityKick(v24);
                }
              }
            }
            __writecr8(v234);
            goto LABEL_32;
          }
          RtlpHpLfhSubsegmentIncBlockCounts(a1, v12, v243, v116, (__int64)&v253, 1, (__int64)&v240);
          v25 = (unsigned int)v12 >> 12;
LABEL_27:
          v40 = v12 + v26;
          if ( a4 < v21 )
          {
            v152 = v21 - a4;
            if ( v152 == 1 )
              v153 = 0x8000;
            else
              v153 = v152 & 0x3FFF;
            *(_WORD *)((WORD4(RtlpHpHeapGlobals) ^ *(unsigned __int16 *)(v12 + 40) ^ (unsigned __int64)v25) + v40 - 2) = v153;
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
            v257 = 0;
            v96 = KeGetCurrentThread();
            v248 = (ULONG_PTR)v96;
            if ( (unsigned int)MiGetSystemRegionType(v12 + 24) == 1 )
              v97 = (unsigned int)MmGetSessionIdEx(v96->ApcState.Process);
            else
              v97 = 0xFFFFFFFFLL;
            --v96->SpecialApcDisable;
            v118 = (ULONG_PTR)v96;
            v237 = ++v96->AbAllocationRegionCount;
            v119 = (v12 + 24) & 0x7FFFFFFFFFFFFFFCLL;
            LODWORD(v120) = ((char)v96->AbEntrySummary | (char)v96->AbOrphanedEntrySummary) ^ 0x3F;
            v94 = !_BitScanReverse((unsigned int *)&v121, v120);
            v256 = v121;
            if ( v94 )
              goto LABEL_155;
            while ( 1 )
            {
              v122 = *(_QWORD *)(v118 + 800) + 96 * v121;
              v120 = ~(1 << v121) & (unsigned int)v120;
              if ( (*(_BYTE *)(v122 + 26) & 1) != 0
                && (*(_DWORD *)(v122 + 32) & 1) == 0
                && (*(_QWORD *)(v122 + 32) & 0x7FFFFFFFFFFFFFFCLL) == v119
                && *(_DWORD *)(v122 + 40) == (_DWORD)v97 )
              {
                *(_BYTE *)(v122 + 26) &= ~1u;
                if ( *(_QWORD *)(v122 + 32) )
                  break;
              }
              v94 = !_BitScanReverse((unsigned int *)&v121, v120);
              v256 = v121;
              if ( v94 )
                goto LABEL_155;
            }
            if ( !v122 )
            {
LABEL_155:
              if ( (*(_DWORD *)(v118 + 120) & 0x10000) == 0 )
                KeBugCheckEx(0x162u, v118, v12 + 24, v97, 0LL);
            }
            else
            {
              *(_BYTE *)(v122 + 32) |= 2u;
              if ( *(__int64 *)(v122 + 32) < 0 )
              {
                KiAbEntryRemoveFromTree(v122, v120, v119);
                v118 = v248;
              }
              v257 = *(_DWORD *)(v122 + 88) & 0x1FFFF;
              *(_DWORD *)(v122 + 88) &= 0xFFFE0000;
              *(_BYTE *)(v122 + 25) &= ~1u;
              *(_QWORD *)(v122 + 32) = 0LL;
              v123 = 1 << ((v122 - *(_QWORD *)(v118 + 800)) / 96);
              if ( v237 == 1 )
                *(_BYTE *)(v118 + 792) |= v123;
              else
                _InterlockedOr8((volatile signed __int8 *)(v118 + 870), v123);
            }
            --*(_BYTE *)(v118 + 794);
            KiAbThreadRemoveBoosts(v118);
            v128 = v248;
            v94 = (*(_WORD *)(v248 + 486))++ == 0xFFFF;
            if ( v94 && *(_QWORD *)(v128 + 152) != v128 + 152 )
              KiCheckForKernelApcDelivery(v125, v124, v126, v127);
            KiLeaveGuardedRegionUnsafe(KeGetCurrentThread());
            goto LABEL_26;
          }
          ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(v12 + 24));
          if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && (v109 = KeGetCurrentIrql(), v109 <= 0xFu) )
          {
            v95 = v235;
            if ( v235 <= 0xFu && v109 >= 2u )
            {
              v110 = KeGetCurrentPrcb();
              v24 = (__int64)v110->SchedulerAssist;
              v111 = ~(unsigned __int16)(-1LL << (v235 + 1));
              v94 = (v111 & *(_DWORD *)(v24 + 20)) == 0;
              v23 = (unsigned int)v111 & *(_DWORD *)(v24 + 20);
              *(_DWORD *)(v24 + 20) = v23;
              if ( v94 )
              {
                KiRemoveSystemWorkPriorityKick(v110);
                __writecr8(v235);
                goto LABEL_26;
              }
            }
          }
          else
          {
            v95 = v235;
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
        v186 = RtlpHpAcquireLockShared((volatile LONG *)v8, *(unsigned __int8 *)(v6 + 57));
        v6 = a1;
        v234 = v186;
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
        v252 = 0;
        v132 = KeGetCurrentThread();
        if ( (unsigned int)MiGetSystemRegionType(v5 + 16) == 1 )
          v133 = (unsigned int)MmGetSessionIdEx(v132->ApcState.Process);
        else
          v133 = 0xFFFFFFFFLL;
        --v132->SpecialApcDisable;
        v156 = ++v132->AbAllocationRegionCount;
        LODWORD(v157) = ((char)v132->AbEntrySummary | (char)v132->AbOrphanedEntrySummary) ^ 0x3F;
        v94 = !_BitScanReverse((unsigned int *)&v158, v157);
        v267 = v158;
        if ( v94 )
          goto LABEL_244;
        while ( 1 )
        {
          v159 = (__int64)&v132->LockEntries[v158];
          v157 = ~(1 << v158) & (unsigned int)v157;
          if ( (*(_BYTE *)(v159 + 26) & 1) != 0
            && (*(_DWORD *)(v159 + 32) & 1) == 0
            && (*(_QWORD *)(v159 + 32) & 0x7FFFFFFFFFFFFFFCLL) == ((v5 + 16) & 0x7FFFFFFFFFFFFFFCLL)
            && *(_DWORD *)(v159 + 40) == (_DWORD)v133 )
          {
            *(_BYTE *)(v159 + 26) &= ~1u;
            if ( *(_QWORD *)(v159 + 32) )
              break;
          }
          v94 = !_BitScanReverse((unsigned int *)&v158, v157);
          v267 = v158;
          if ( v94 )
            goto LABEL_244;
        }
        if ( !v159 )
        {
LABEL_244:
          if ( (*((_DWORD *)&v132->0 + 1) & 0x10000) == 0 )
            KeBugCheckEx(0x162u, (ULONG_PTR)v132, v5 + 16, (unsigned int)v133, 0LL);
        }
        else
        {
          *(_BYTE *)(v159 + 32) |= 2u;
          if ( *(__int64 *)(v159 + 32) < 0 )
            KiAbEntryRemoveFromTree(v159, v157, v133);
          v252 = 0;
          v252 = *(_DWORD *)(v159 + 88) & 0x1FFFF;
          *(_DWORD *)(v159 + 88) &= 0xFFFE0000;
          *(_BYTE *)(v159 + 25) &= ~1u;
          *(_QWORD *)(v159 + 32) = 0LL;
          v160 = 1 << ((signed __int64)(v159 - (unsigned __int64)v132->LockEntries) / 96);
          if ( v156 == 1 )
            v132->AbEntrySummary |= v160;
          else
            _InterlockedOr8((volatile signed __int8 *)&v132->AbOrphanedEntrySummary, v160);
        }
        --v132->AbAllocationRegionCount;
        KiAbThreadRemoveBoosts((ULONG_PTR)v132);
        v94 = v132->SpecialApcDisable++ == -1;
        if ( v94 && ($C774EFD68449142D8271B1EC1EB7FB26 *)v132->ApcState.ApcListHead[0].Flink != &v132->152 )
          KiCheckForKernelApcDelivery(v162, v161, v163, v164);
        KiLeaveGuardedRegionUnsafe(KeGetCurrentThread());
        v8 = v5 + 16;
      }
      else
      {
        if ( *(_BYTE *)(v6 + 57) )
        {
          ExReleaseSpinLockSharedFromDpcLevel((PEX_SPIN_LOCK)v8);
LABEL_173:
          if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && (v135 = KeGetCurrentIrql(), v135 <= 0xFu) )
          {
            v129 = v234;
            if ( v234 <= 0xFu && v135 >= 2u )
            {
              v136 = KeGetCurrentPrcb();
              v137 = v136->SchedulerAssist;
              v138 = ~(unsigned __int16)(-1LL << (v234 + 1));
              v94 = (v138 & v137[5]) == 0;
              v137[5] &= v138;
              if ( v94 )
                KiRemoveSystemWorkPriorityKick(v136);
            }
          }
          else
          {
            v129 = v234;
          }
          __writecr8(v129);
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
      v242 = 2;
      v234 = RtlpHpAcquireLockExclusive((volatile LONG *)v8, *(unsigned __int8 *)(a1 + 57));
      v130 = RtlpHpLfhSlotAddSubsegment(v5, Subsegment);
      v6 = a1;
      v249 = v130;
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
    v247 = 0;
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
        v247 = 1;
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
          v187 = **v54;
          if ( (__int64 **)(*v54)[1] != v54 || *(__int64 **)(v187 + 8) != v52 )
            goto LABEL_408;
          *v54 = (__int64 *)v187;
          *(_QWORD *)(v187 + 8) = v54;
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
          v59 = v234;
          if ( v234 <= 0xFu && v90 >= 2u )
          {
            v91 = KeGetCurrentPrcb();
            v92 = v91->SchedulerAssist;
            v93 = ~(unsigned __int16)(-1LL << (v234 + 1));
            v94 = (v93 & v92[5]) == 0;
            v92[5] &= v93;
            if ( v94 )
              KiRemoveSystemWorkPriorityKick(v91);
          }
        }
        else
        {
          v59 = v234;
        }
        __writecr8(v59);
      }
      else
      {
        if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)v8, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
          ExfTryToWakePushLock(v8);
        v251 = 0;
        v87 = KeGetCurrentThread();
        v88 = (unsigned int)MiGetSystemRegionType(v8) == 1
            ? (unsigned int)MmGetSessionIdEx(v87->ApcState.Process)
            : 0xFFFFFFFFLL;
        --v87->SpecialApcDisable;
        v98 = ++v87->AbAllocationRegionCount;
        LODWORD(v99) = ((char)v87->AbEntrySummary | (char)v87->AbOrphanedEntrySummary) ^ 0x3F;
        v100 = v8 & 0x7FFFFFFFFFFFFFFCLL;
        v94 = !_BitScanReverse((unsigned int *)&v101, v99);
        v266 = v101;
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
            v99 = ~(1 << v101) & (unsigned int)v99;
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
            v266 = v101;
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
            KiAbEntryRemoveFromTree(v102, v99, v100);
          v251 = 0;
          v251 = *(_DWORD *)(v102 + 88) & 0x1FFFF;
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
    v242 = 2;
    v188 = RtlpHpAcquireLockExclusive((volatile LONG *)v8, *(unsigned __int8 *)(a1 + 57));
    v6 = a1;
    v234 = v188;
  }
  v60 = 3LL;
  v61 = 2 * (*(unsigned __int16 *)(v46 + 34) + (unsigned __int64)*(unsigned __int8 *)(v46 + 39));
  v271[1] = v46 + 48;
  v62 = *(unsigned __int8 *)(v5 + 1);
  v271[0] = v61;
  v246 = (unsigned int)v46 >> 12;
  LODWORD(v248) = *((unsigned __int8 *)RtlpSearchWidth + v62);
  v63 = (unsigned __int16)(WORD4(RtlpHpHeapGlobals) ^ ((unsigned int)v46 >> 12) ^ *(_WORD *)(v46 + 40));
  v64 = (DWORD2(RtlpHpHeapGlobals) ^ ((unsigned int)v46 >> 12) ^ *(_DWORD *)(v46 + 40)) >> 16;
  v65 = (DWORD2(RtlpHpHeapGlobals) ^ ((unsigned int)v46 >> 12) ^ *(_DWORD *)(v46 + 40)) >> 16;
  v66 = v65;
  v265 = v63;
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
  v69 = RtlpLfhBlockBitmapAllocate((unsigned int)v271, *(unsigned __int16 *)(v46 + 36), v68, v248, v60);
  v245 = v69;
  *(_WORD *)(v46 + 36) = v69;
  v70 = v66 + v69 * v63;
  if ( *(_BYTE *)(v46 + 45) <= 1u )
    goto LABEL_89;
  v71 = *(_BYTE *)(v46 + 44);
  v24 = 0LL;
  v72 = v46 + *(unsigned __int16 *)(v46 + 46);
  v23 = v70 >> v71;
  v246 = WORD4(RtlpHpHeapGlobals) ^ (unsigned __int16)v246 ^ *(unsigned __int16 *)(v46 + 40);
  v260 = 0;
  v241[0] = -1;
  v73 = ((v70 + v246 - 1) >> v71) - (unsigned int)v23 + 1;
  v236 = -1;
  v74 = 2 * v23;
  v75 = (signed __int16 *)(2 * v23 + v72);
  _m_prefetchw(v75);
  v244 = 0LL;
  v76 = &v75[v73];
  v242 = 0;
  v238 = -1;
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
          v23 = v242;
          v80 = v238;
          LODWORD(v81) = v244;
          goto LABEL_84;
        }
      }
      if ( (_DWORD)v24 )
        break;
      LODWORD(v248) = 1;
      v131 = RtlpHpAcquireLockExclusive((volatile LONG *)(v46 + 24), *(unsigned __int8 *)(a1 + 57));
      v24 = 1LL;
      v236 = v131;
    }
    v80 = v238;
    if ( v78 )
    {
      v23 = v242 + 1;
      v81 = v74 >> 1;
      ++v242;
      v244 = v74 >> 1;
      if ( v238 == -1 )
      {
        v80 = v74 >> 1;
        v238 = v80;
      }
    }
    else
    {
      LODWORD(v81) = v244;
      v23 = --v242;
    }
    *v75 = v78 + 1;
LABEL_84:
    ++v75;
    v74 += 2LL;
  }
  while ( (unsigned __int64)v75 < v77 );
  v63 = v265;
  v82 = v245;
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
      if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && (v165 = KeGetCurrentIrql(), v165 <= 0xFu) )
      {
        v141 = v236;
        if ( v236 <= 0xFu && v165 >= 2u )
        {
          v24 = (__int64)KeGetCurrentPrcb();
          v166 = ~(unsigned __int16)(-1LL << (v236 + 1));
          v23 = *(_QWORD *)(v24 + 33976);
          v94 = (v166 & *(_DWORD *)(v23 + 20)) == 0;
          *(_DWORD *)(v23 + 20) &= v166;
          if ( v94 )
          {
            KiRemoveSystemWorkPriorityKick(v24);
            __writecr8(v236);
            goto LABEL_89;
          }
        }
      }
      else
      {
        v141 = v236;
      }
      __writecr8(v141);
      goto LABEL_89;
    }
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)(v46 + 24), 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock(v46 + 24);
    v264 = 0;
    v154 = KeGetCurrentThread();
    if ( (unsigned int)MiGetSystemRegionType(v46 + 24) == 1 )
      v155 = (unsigned int)MmGetSessionIdEx(v154->ApcState.Process);
    else
      v155 = 0xFFFFFFFFLL;
    --v154->SpecialApcDisable;
    v176 = ++v154->AbAllocationRegionCount;
    LODWORD(v177) = ((char)v154->AbEntrySummary | (char)v154->AbOrphanedEntrySummary) ^ 0x3F;
    v178 = (v46 + 24) & 0x7FFFFFFFFFFFFFFCLL;
    v94 = !_BitScanReverse((unsigned int *)&v179, v177);
    v263 = v179;
    if ( v94 )
      goto LABEL_282;
    while ( 1 )
    {
      v180 = (__int64)&v154->LockEntries[v179];
      v177 = ~(1 << v179) & (unsigned int)v177;
      if ( (*(_BYTE *)(v180 + 26) & 1) != 0
        && (*(_DWORD *)(v180 + 32) & 1) == 0
        && (*(_QWORD *)(v180 + 32) & 0x7FFFFFFFFFFFFFFCLL) == v178
        && *(_DWORD *)(v180 + 40) == (_DWORD)v155 )
      {
        *(_BYTE *)(v180 + 26) &= ~1u;
        if ( *(_QWORD *)(v180 + 32) )
          break;
      }
      v94 = !_BitScanReverse((unsigned int *)&v179, v177);
      v263 = v179;
      if ( v94 )
        goto LABEL_282;
    }
    if ( !v180 )
    {
LABEL_282:
      if ( (*((_DWORD *)&v154->0 + 1) & 0x10000) == 0 )
        KeBugCheckEx(0x162u, (ULONG_PTR)v154, v46 + 24, v155, 0LL);
    }
    else
    {
      *(_BYTE *)(v180 + 32) |= 2u;
      if ( *(__int64 *)(v180 + 32) < 0 )
        KiAbEntryRemoveFromTree(v180, v177, v178);
      v264 = *(_DWORD *)(v180 + 88) & 0x1FFFF;
      *(_DWORD *)(v180 + 88) &= 0xFFFE0000;
      *(_BYTE *)(v180 + 25) &= ~1u;
      *(_QWORD *)(v180 + 32) = 0LL;
      v181 = 1 << ((signed __int64)(v180 - (unsigned __int64)v154->LockEntries) / 96);
      if ( v176 == 1 )
        v154->AbEntrySummary |= v181;
      else
        _InterlockedOr8((volatile signed __int8 *)&v154->AbOrphanedEntrySummary, v181);
    }
    --v154->AbAllocationRegionCount;
    KiAbThreadRemoveBoosts((ULONG_PTR)v154);
    v94 = v154->SpecialApcDisable++ == -1;
    if ( v94 && ($C774EFD68449142D8271B1EC1EB7FB26 *)v154->ApcState.ApcListHead[0].Flink != &v154->152 )
      KiCheckForKernelApcDelivery(v183, v182, v184, v185);
    KiLeaveGuardedRegionUnsafe(KeGetCurrentThread());
LABEL_89:
    v40 = v46 + v70;
    if ( a4 < v63 )
      RtlpHpLfhSubsegmentSetUnusedBytes(v46, v46 + v70, v63 - a4, v24);
    v84 = a1;
  }
  else
  {
    v142 = v81 - v80;
    v143 = *(_BYTE *)(v46 + 44);
    v144 = (int (__fastcall *)(__int64, __int64, _QWORD, __int64))(v83 ^ RtlpHpHeapGlobals ^ *(_QWORD *)(v83 + 24));
    v145 = v80 << v143;
    v260 = v142 + 1;
    v146 = (v142 + 1) << v143;
    v147 = *(_QWORD *)v83;
    v241[0] = v236;
    v239 = v145;
    if ( v144(v147, v46 + v145, v146, v24) >= 0 )
    {
      RtlpHpLfhSubsegmentIncBlockCounts(a1, v46, v239, v146, (__int64)&v260, 1, (__int64)v241);
      goto LABEL_89;
    }
    v84 = a1;
    RtlpHpLfhSubsegmentDecBlockCounts(a1, v46, v70, v246);
    if ( *(_BYTE *)(a1 + 57) )
    {
      ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(v46 + 24));
      if ( KiIrqlFlags )
      {
        if ( (KiIrqlFlags & 1) != 0 )
        {
          v232 = KeGetCurrentIrql();
          if ( v232 <= 0xFu && v236 <= 0xFu && v232 >= 2u )
          {
            v24 = (__int64)KeGetCurrentPrcb();
            v233 = ~(unsigned __int16)(-1LL << (v236 + 1));
            v23 = *(_QWORD *)(v24 + 33976);
            v94 = (v233 & *(_DWORD *)(v23 + 20)) == 0;
            *(_DWORD *)(v23 + 20) &= v233;
            if ( v94 )
              KiRemoveSystemWorkPriorityKick(v24);
          }
        }
      }
      __writecr8(v236);
      v40 = 0LL;
    }
    else
    {
      if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)(v46 + 24), 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
        ExfTryToWakePushLock(v46 + 24);
      v40 = 0LL;
      v262 = 0;
      v221 = KeGetCurrentThread();
      if ( (unsigned int)MiGetSystemRegionType(v46 + 24) == 1 )
        v222 = (unsigned int)MmGetSessionIdEx(v221->ApcState.Process);
      else
        v222 = 0xFFFFFFFFLL;
      --v221->SpecialApcDisable;
      v223 = ++v221->AbAllocationRegionCount;
      LODWORD(v224) = ((char)v221->AbEntrySummary | (char)v221->AbOrphanedEntrySummary) ^ 0x3F;
      v94 = !_BitScanReverse((unsigned int *)&v225, v224);
      v261 = v225;
      if ( v94 )
      {
LABEL_433:
        if ( (*((_DWORD *)&v221->0 + 1) & 0x10000) == 0 )
          KeBugCheckEx(0x162u, (ULONG_PTR)v221, v46 + 24, (unsigned int)v222, 0LL);
      }
      else
      {
        while ( 1 )
        {
          v226 = (__int64)&v221->LockEntries[v225];
          v224 = ~(1 << v225) & (unsigned int)v224;
          if ( (*(_BYTE *)(v226 + 26) & 1) != 0
            && (*(_DWORD *)(v226 + 32) & 1) == 0
            && (*(_QWORD *)(v226 + 32) & 0x7FFFFFFFFFFFFFFCLL) == ((v46 + 24) & 0x7FFFFFFFFFFFFFFCLL)
            && *(_DWORD *)(v226 + 40) == (_DWORD)v222 )
          {
            *(_BYTE *)(v226 + 26) &= ~1u;
            if ( *(_QWORD *)(v226 + 32) )
              break;
          }
          v94 = !_BitScanReverse((unsigned int *)&v225, v224);
          v261 = v225;
          if ( v94 )
            goto LABEL_432;
        }
        if ( !v226 )
        {
LABEL_432:
          v40 = 0LL;
          goto LABEL_433;
        }
        *(_BYTE *)(v226 + 32) |= 2u;
        if ( *(__int64 *)(v226 + 32) < 0 )
          KiAbEntryRemoveFromTree(v226, v224, v222);
        v262 = *(_DWORD *)(v226 + 88) & 0x1FFFF;
        *(_DWORD *)(v226 + 88) &= 0xFFFE0000;
        *(_BYTE *)(v226 + 25) &= ~1u;
        *(_QWORD *)(v226 + 32) = 0LL;
        v227 = 1 << ((char)(v226 - LOBYTE(v221->LockEntries)) / 96);
        if ( v223 == 1 )
          v221->AbEntrySummary |= v227;
        else
          _InterlockedOr8((volatile signed __int8 *)&v221->AbOrphanedEntrySummary, v227);
        v40 = 0LL;
      }
      --v221->AbAllocationRegionCount;
      KiAbThreadRemoveBoosts((ULONG_PTR)v221);
      v94 = v221->SpecialApcDisable++ == -1;
      if ( v94 && ($C774EFD68449142D8271B1EC1EB7FB26 *)v221->ApcState.ApcListHead[0].Flink != &v221->152 )
        KiCheckForKernelApcDelivery(v229, v228, v230, v231);
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
  Subsegment = v249;
LABEL_33:
  if ( v247 )
    RtlpHpLfhBucketUpdateAffinityMapping(a1, a2, v23, v24);
  if ( Subsegment )
    RtlpHpLfhBucketAddSubsegment(a1, a2, Subsegment, a5);
  return v40;
}
