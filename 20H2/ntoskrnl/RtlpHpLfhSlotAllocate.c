/*
 * XREFs of RtlpHpLfhSlotAllocate @ 0x140212CB0
 * Callers:
 *     ExAllocateHeapPool @ 0x140212080 (ExAllocateHeapPool.c)
 *     RtlpHpLfhBucketAllocate @ 0x140392010 (RtlpHpLfhBucketAllocate.c)
 * Callees:
 *     RtlpLfhBlockBitmapAllocate @ 0x140214360 (RtlpLfhBlockBitmapAllocate.c)
 *     KeAbPostRelease @ 0x14021ED30 (KeAbPostRelease.c)
 *     MiGetSystemRegionType @ 0x140220A00 (MiGetSystemRegionType.c)
 *     KiAbThreadRemoveBoosts @ 0x140220DB0 (KiAbThreadRemoveBoosts.c)
 *     KiLeaveGuardedRegionUnsafe @ 0x140220E40 (KiLeaveGuardedRegionUnsafe.c)
 *     MmGetSessionIdEx @ 0x140220F10 (MmGetSessionIdEx.c)
 *     ExfReleasePushLockShared @ 0x140242A40 (ExfReleasePushLockShared.c)
 *     ExfTryToWakePushLock @ 0x140242B40 (ExfTryToWakePushLock.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x14027E490 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     ExReleaseSpinLockSharedFromDpcLevel @ 0x1402970F0 (ExReleaseSpinLockSharedFromDpcLevel.c)
 *     RtlpHpAcquireLockShared @ 0x1402D1620 (RtlpHpAcquireLockShared.c)
 *     RtlpHpLfhSubsegmentFreeBlock @ 0x1402D1660 (RtlpHpLfhSubsegmentFreeBlock.c)
 *     RtlpHpAcquireLockExclusive @ 0x1402D4324 (RtlpHpAcquireLockExclusive.c)
 *     KiCheckForKernelApcDelivery @ 0x1402DDA40 (KiCheckForKernelApcDelivery.c)
 *     KiAbEntryRemoveFromTree @ 0x1402F05E0 (KiAbEntryRemoveFromTree.c)
 *     RtlpHpLfhSubsegmentCreate @ 0x140309B20 (RtlpHpLfhSubsegmentCreate.c)
 *     RtlpHpLfhSubsegmentIncBlockCounts @ 0x14030C934 (RtlpHpLfhSubsegmentIncBlockCounts.c)
 *     RtlpHpLfhBucketGetSubsegment @ 0x1403107B4 (RtlpHpLfhBucketGetSubsegment.c)
 *     RtlpHpLfhBucketAddSubsegment @ 0x140310A68 (RtlpHpLfhBucketAddSubsegment.c)
 *     RtlpHpLfhSlotAddSubsegment @ 0x140310D64 (RtlpHpLfhSlotAddSubsegment.c)
 *     RtlpHpLfhSubsegmentDecBlockCounts @ 0x140319B9C (RtlpHpLfhSubsegmentDecBlockCounts.c)
 *     RtlpHpLfhBucketUpdateAffinityMapping @ 0x14031E918 (RtlpHpLfhBucketUpdateAffinityMapping.c)
 *     RtlpHpLfhSubsegmentSetUnusedBytes @ 0x140392364 (RtlpHpLfhSubsegmentSetUnusedBytes.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403F1DD4 (KiRemoveSystemWorkPriorityKick.c)
 *     RtlpLfhIncrementDataSlot @ 0x1403F6E54 (RtlpLfhIncrementDataSlot.c)
 *     KeBugCheckEx @ 0x1403FBCA0 (KeBugCheckEx.c)
 *     _guard_dispatch_icall @ 0x140405F40 (_guard_dispatch_icall.c)
 */

unsigned __int64 __fastcall RtlpHpLfhSlotAllocate(__int64 a1, __int64 a2, __int64 a3, unsigned int a4, unsigned int a5)
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
  unsigned __int64 v40; // rsi
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
  _QWORD *v56; // rax
  __int64 ***v57; // rax
  bool v58; // cc
  unsigned __int8 v59; // r13
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
  __int64 v85; // rdx
  unsigned __int8 v86; // al
  struct _KTHREAD *v87; // r13
  ULONG_PTR v88; // r9
  unsigned __int8 v89; // al
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
  unsigned __int8 v105; // al
  struct _KPRCB *v106; // r10
  int v107; // eax
  char v108; // cl
  int (__fastcall *v109)(__int64, unsigned __int64, _QWORD, __int64); // rax
  int v110; // esi
  unsigned int v111; // r10d
  unsigned int v112; // esi
  __int64 v113; // rcx
  ULONG_PTR v114; // r10
  __int64 v115; // r8
  __int64 v116; // rdx
  __int64 v117; // rcx
  __int64 v118; // rsi
  unsigned __int8 v119; // al
  ULONG_PTR v120; // rsi
  unsigned __int8 v121; // r13
  __int64 v122; // rax
  unsigned __int8 v123; // al
  struct _KTHREAD *v124; // r14
  __int64 v125; // r8
  unsigned __int8 v126; // r13
  unsigned __int8 v127; // al
  struct _KPRCB *v128; // r10
  _DWORD *v129; // r9
  int v130; // eax
  struct _KTHREAD *CurrentThread; // rsi
  __int64 SessionId; // r8
  unsigned __int8 v133; // si
  int v134; // r11d
  char v135; // cl
  int (__fastcall *v136)(__int64, __int64, _QWORD, __int64); // rax
  unsigned int v137; // r10d
  unsigned int v138; // esi
  __int64 v139; // rcx
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  int v143; // eax
  unsigned int v144; // r13d
  __int16 v145; // r13
  struct _KTHREAD *v146; // rbx
  ULONG_PTR v147; // r9
  unsigned __int8 v148; // r12
  __int64 v149; // rdx
  __int64 v150; // rcx
  __int64 v151; // rdi
  unsigned __int8 v152; // al
  unsigned __int8 v153; // al
  int v154; // eax
  unsigned __int8 v155; // r13
  __int64 v156; // rdx
  __int64 v157; // rcx
  __int64 v158; // r14
  unsigned __int8 v159; // al
  unsigned __int8 v160; // r13
  __int64 v161; // rdx
  __int64 v162; // r8
  __int64 v163; // rcx
  __int64 v164; // rsi
  unsigned __int8 v165; // al
  unsigned __int8 v166; // al
  __int64 v167; // rax
  unsigned __int8 v168; // al
  __int64 v169; // r8
  struct _KTHREAD *v170; // rsi
  __int64 v171; // r8
  unsigned __int8 v172; // r13
  __int64 v173; // rdx
  __int64 v174; // rcx
  __int64 v175; // r14
  __int64 v176; // rdx
  unsigned __int8 v177; // al
  unsigned __int8 v178; // al
  unsigned __int8 v179; // si
  struct _KPRCB *v180; // r10
  int v181; // eax
  ULONG_PTR v182; // r15
  struct _KTHREAD *v183; // rbx
  ULONG_PTR v184; // r9
  unsigned __int8 v185; // r14
  __int64 v186; // rdx
  __int64 v187; // r8
  __int64 v188; // rcx
  __int64 v189; // rdi
  __int64 v190; // rdx
  unsigned __int8 v191; // al
  int v192; // eax
  struct _KTHREAD *v193; // rbx
  __int64 v194; // r8
  unsigned __int8 v195; // r15
  __int64 v196; // rdx
  __int64 v197; // rcx
  __int64 v198; // rsi
  unsigned __int8 v199; // r12
  unsigned __int8 v200; // al
  int v201; // eax
  unsigned __int8 v202; // [rsp+40h] [rbp-C0h]
  unsigned __int8 v203; // [rsp+41h] [rbp-BFh]
  unsigned __int8 v204; // [rsp+41h] [rbp-BFh]
  unsigned __int8 v205; // [rsp+41h] [rbp-BFh]
  int v206; // [rsp+44h] [rbp-BCh]
  unsigned int v207; // [rsp+44h] [rbp-BCh]
  char v208; // [rsp+48h] [rbp-B8h] BYREF
  char v209[3]; // [rsp+49h] [rbp-B7h] BYREF
  unsigned int v210; // [rsp+4Ch] [rbp-B4h]
  int v211; // [rsp+50h] [rbp-B0h]
  __int64 v212; // [rsp+58h] [rbp-A8h]
  unsigned int v213; // [rsp+60h] [rbp-A0h]
  unsigned int v214; // [rsp+64h] [rbp-9Ch]
  int v215; // [rsp+68h] [rbp-98h]
  ULONG_PTR v216; // [rsp+70h] [rbp-90h]
  __int64 v217; // [rsp+78h] [rbp-88h]
  __int64 v218; // [rsp+80h] [rbp-80h]
  int v219; // [rsp+88h] [rbp-78h]
  int v220; // [rsp+8Ch] [rbp-74h]
  int v221; // [rsp+90h] [rbp-70h] BYREF
  int v222; // [rsp+94h] [rbp-6Ch]
  int v223; // [rsp+98h] [rbp-68h]
  int v224; // [rsp+9Ch] [rbp-64h]
  int v225; // [rsp+A0h] [rbp-60h]
  int v226; // [rsp+A4h] [rbp-5Ch]
  int v227; // [rsp+A8h] [rbp-58h]
  int v228; // [rsp+ACh] [rbp-54h] BYREF
  int v229; // [rsp+B0h] [rbp-50h]
  int v230; // [rsp+B4h] [rbp-4Ch]
  int v231; // [rsp+B8h] [rbp-48h]
  int v232; // [rsp+BCh] [rbp-44h]
  int v233; // [rsp+C0h] [rbp-40h]
  int v234; // [rsp+C8h] [rbp-38h]
  int v235; // [rsp+CCh] [rbp-34h]
  int v236; // [rsp+D0h] [rbp-30h]
  int v237; // [rsp+D4h] [rbp-2Ch]
  _QWORD v238[2]; // [rsp+D8h] [rbp-28h] BYREF
  _QWORD v239[11]; // [rsp+E8h] [rbp-18h] BYREF

  v5 = a3;
  v6 = a1;
  v202 = -1;
  v7 = 0;
  v210 = 0;
  v215 = 0;
  v8 = a3 + 16;
  v217 = 0LL;
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
              v215 = 1;
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
          v210 = 2;
          v86 = RtlpHpAcquireLockExclusive(v5 + 16, v85);
          v6 = a1;
          v202 = v86;
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
            v126 = v202;
            if ( v202 <= 0xFu && CurrentIrql >= 2u )
            {
              CurrentPrcb = KeGetCurrentPrcb();
              SchedulerAssist = CurrentPrcb->SchedulerAssist;
              v143 = ~(unsigned __int16)(-1LL << (v202 + 1));
              v94 = (v143 & SchedulerAssist[5]) == 0;
              SchedulerAssist[5] &= v143;
              if ( v94 )
              {
                KiRemoveSystemWorkPriorityKick(CurrentPrcb);
                __writecr8(v202);
                v13 = 0;
                v210 = 0;
                goto LABEL_8;
              }
            }
          }
          else
          {
            v126 = v202;
          }
          __writecr8(v126);
          v13 = 0;
          v210 = 0;
          goto LABEL_8;
        }
        if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)(v5 + 16), 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
          ExfTryToWakePushLock(v5 + 16);
        v237 = 0;
        CurrentThread = KeGetCurrentThread();
        if ( (unsigned int)MiGetSystemRegionType(v5 + 16) == 1 )
          SessionId = (unsigned int)MmGetSessionIdEx(CurrentThread->ApcState.Process);
        else
          SessionId = 0xFFFFFFFFLL;
        --CurrentThread->SpecialApcDisable;
        v155 = ++CurrentThread->AbAllocationRegionCount;
        LODWORD(v156) = ((char)CurrentThread->AbEntrySummary | (char)CurrentThread->AbOrphanedEntrySummary) ^ 0x3F;
        v94 = !_BitScanReverse((unsigned int *)&v157, v156);
        v236 = v157;
        if ( v94 )
          goto LABEL_262;
        while ( 1 )
        {
          v158 = (__int64)&CurrentThread->LockEntries[v157];
          v156 = ~(1 << v157) & (unsigned int)v156;
          if ( (*(_BYTE *)(v158 + 26) & 1) != 0
            && (*(_DWORD *)(v158 + 32) & 1) == 0
            && (*(_QWORD *)(v158 + 32) & 0x7FFFFFFFFFFFFFFCLL) == ((v5 + 16) & 0x7FFFFFFFFFFFFFFCLL)
            && *(_DWORD *)(v158 + 40) == (_DWORD)SessionId )
          {
            *(_BYTE *)(v158 + 26) &= ~1u;
            if ( *(_QWORD *)(v158 + 32) )
              break;
          }
          v94 = !_BitScanReverse((unsigned int *)&v157, v156);
          v236 = v157;
          if ( v94 )
            goto LABEL_262;
        }
        if ( !v158 )
        {
LABEL_262:
          if ( (*((_DWORD *)&CurrentThread->0 + 1) & 0x10000) == 0 )
            KeBugCheckEx(0x162u, (ULONG_PTR)CurrentThread, v5 + 16, (unsigned int)SessionId, 0LL);
        }
        else
        {
          *(_BYTE *)(v158 + 32) |= 2u;
          if ( *(__int64 *)(v158 + 32) < 0 )
            KiAbEntryRemoveFromTree(v158, v156, SessionId);
          v237 = *(_DWORD *)(v158 + 88) & 0x1FFFF;
          *(_DWORD *)(v158 + 88) &= 0xFFFE0000;
          *(_BYTE *)(v158 + 25) &= ~1u;
          *(_QWORD *)(v158 + 32) = 0LL;
          v159 = 1 << ((signed __int64)(v158 - (unsigned __int64)CurrentThread->LockEntries) / 96);
          if ( v155 == 1 )
            CurrentThread->AbEntrySummary |= v159;
          else
            _InterlockedOr8((volatile signed __int8 *)&CurrentThread->AbOrphanedEntrySummary, v159);
        }
        --CurrentThread->AbAllocationRegionCount;
        KiAbThreadRemoveBoosts((ULONG_PTR)CurrentThread);
        v94 = CurrentThread->SpecialApcDisable++ == -1;
        if ( v94
          && ($C774EFD68449142D8271B1EC1EB7FB26 *)CurrentThread->ApcState.ApcListHead[0].Flink != &CurrentThread->152 )
        {
          KiCheckForKernelApcDelivery();
        }
        KiLeaveGuardedRegionUnsafe(KeGetCurrentThread());
        v13 = 0;
        v210 = 0;
LABEL_8:
        v14 = 3LL;
        v15 = 2 * (*(unsigned __int16 *)(v12 + 34) + (unsigned __int64)*(unsigned __int8 *)(v12 + 39));
        v238[1] = v12 + 48;
        v16 = *(unsigned __int8 *)(v5 + 1);
        v238[0] = v15;
        LODWORD(v212) = *((unsigned __int8 *)RtlpSearchWidth + v16);
        v17 = (unsigned __int16)(WORD4(RtlpHpHeapGlobals) ^ *(_WORD *)(v12 + 40) ^ ((unsigned int)v12 >> 12));
        v18 = (DWORD2(RtlpHpHeapGlobals) ^ *(_DWORD *)(v12 + 40) ^ ((unsigned int)v12 >> 12)) >> 16;
        v19 = v18;
        v20 = v18;
        v213 = (unsigned __int16)(WORD4(RtlpHpHeapGlobals) ^ *(_WORD *)(v12 + 40) ^ ((unsigned int)v12 >> 12));
        if ( a4 >= (unsigned int)v17 )
          v14 = 1LL;
        if ( (*(_BYTE *)(a1 + 62) & 2) != 0 )
        {
          v21 = v213;
          v20 = v18;
          if ( a4 >= (unsigned int)v17 )
            v20 = v18;
        }
        else
        {
          v13 = RtlpLowFragHeapRandomData[(unsigned __int16)RtlpLfhIncrementDataSlot(v17, v18)];
          v21 = v213;
          if ( a4 >= v213 )
            v20 = v19;
        }
        v22 = RtlpLfhBlockBitmapAllocate((unsigned int)v238, *(unsigned __int16 *)(v12 + 36), v13, v212, v14);
        v25 = (unsigned int)v12 >> 12;
        LODWORD(v216) = v22;
        *(_WORD *)(v12 + 36) = v22;
        v26 = v20 + v22 * v21;
        if ( *(_BYTE *)(v12 + 45) <= 1u )
          goto LABEL_27;
        v27 = *(_BYTE *)(v12 + 44);
        v28 = *(unsigned __int16 *)(v12 + 46);
        v24 = 0LL;
        v221 = 0;
        v23 = v26 >> v27;
        v29 = *(unsigned __int16 *)(v12 + 40) ^ (unsigned __int16)((unsigned int)v12 >> 12);
        v208 = -1;
        v203 = -1;
        v214 = WORD4(RtlpHpHeapGlobals) ^ v29;
        v30 = 2 * v23;
        v31 = ((v26 + v214 - 1) >> v27) - (unsigned int)v23 + 1;
        v32 = (signed __int16 *)(2 * v23 + v12 + v28);
        _m_prefetchw(v32);
        v33 = &v32[v31];
        LODWORD(v212) = 0;
        v218 = 0LL;
        v211 = -1;
        if ( v32 >= v33 )
          goto LABEL_27;
        v34 = (unsigned __int64)v33;
        do
        {
          v35 = v203;
          while ( 1 )
          {
            v36 = *v32;
            while ( v36 > 0 )
            {
              v37 = v36;
              v36 = _InterlockedCompareExchange16(v32, v36 + 1, v36);
              if ( v37 == v36 )
              {
                v23 = (unsigned int)v212;
                v38 = v211;
                goto LABEL_21;
              }
            }
            if ( (_DWORD)v24 )
              break;
            v233 = 1;
            v89 = RtlpHpAcquireLockExclusive(v12 + 24, *(unsigned __int8 *)(a1 + 57));
            v24 = 1LL;
            v35 = v89;
            v203 = v89;
          }
          v38 = v211;
          if ( v36 )
          {
            v23 = (unsigned int)(v212 + 1);
            LODWORD(v212) = v212 + 1;
            v218 = v30 >> 1;
            if ( v211 == -1 )
            {
              v38 = v30 >> 1;
              v211 = v38;
            }
          }
          else
          {
            v23 = (unsigned int)(v212 - 1);
            LODWORD(v212) = v212 - 1;
          }
          *v32 = v36 + 1;
LABEL_21:
          ++v32;
          v30 += 2LL;
        }
        while ( (unsigned __int64)v32 < v34 );
        v5 = a3;
        v21 = v213;
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
          v108 = *(_BYTE *)(v12 + 44);
          v109 = (int (__fastcall *)(__int64, unsigned __int64, _QWORD, __int64))(v39 ^ RtlpHpHeapGlobals ^ *(_QWORD *)(v39 + 24));
          v110 = v218 - v38;
          v208 = v35;
          v111 = v38 << v108;
          v221 = v110 + 1;
          v112 = (v110 + 1) << v108;
          v113 = *(_QWORD *)v39;
          v211 = v111;
          if ( v109(v113, v12 + v111, v112, v24) < 0 )
          {
            v169 = v26;
            v41 = a1;
            RtlpHpLfhSubsegmentDecBlockCounts(a1, v12, v169, v214);
            if ( *(_BYTE *)(a1 + 57) )
            {
              ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(v12 + 24));
              if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && (v178 = KeGetCurrentIrql(), v178 <= 0xFu) )
              {
                v179 = v203;
                if ( v203 <= 0xFu && v178 >= 2u )
                {
                  v180 = KeGetCurrentPrcb();
                  v24 = (__int64)v180->SchedulerAssist;
                  v181 = ~(unsigned __int16)(-1LL << (v203 + 1));
                  v94 = (v181 & *(_DWORD *)(v24 + 20)) == 0;
                  v23 = (unsigned int)v181 & *(_DWORD *)(v24 + 20);
                  *(_DWORD *)(v24 + 20) = v23;
                  if ( v94 )
                    KiRemoveSystemWorkPriorityKick(v180);
                }
              }
              else
              {
                v179 = v203;
              }
              __writecr8(v179);
            }
            else
            {
              if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)(v12 + 24), 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
                ExfTryToWakePushLock(v12 + 24);
              v223 = 0;
              v170 = KeGetCurrentThread();
              if ( (unsigned int)MiGetSystemRegionType(v12 + 24) == 1 )
                v171 = (unsigned int)MmGetSessionIdEx(v170->ApcState.Process);
              else
                v171 = 0xFFFFFFFFLL;
              --v170->SpecialApcDisable;
              v172 = ++v170->AbAllocationRegionCount;
              LODWORD(v173) = ((char)v170->AbEntrySummary | (char)v170->AbOrphanedEntrySummary) ^ 0x3F;
              v94 = !_BitScanReverse((unsigned int *)&v174, v173);
              v222 = v174;
              if ( v94 )
              {
LABEL_353:
                if ( (*((_DWORD *)&v170->0 + 1) & 0x10000) == 0 )
                  KeBugCheckEx(0x162u, (ULONG_PTR)v170, v12 + 24, (unsigned int)v171, 0LL);
              }
              else
              {
                while ( 1 )
                {
                  v175 = (__int64)&v170->LockEntries[v174];
                  v173 = ~(1 << v174) & (unsigned int)v173;
                  if ( (*(_BYTE *)(v175 + 26) & 1) != 0
                    && (*(_DWORD *)(v175 + 32) & 1) == 0
                    && (*(_QWORD *)(v175 + 32) & 0x7FFFFFFFFFFFFFFCLL) == ((v12 + 24) & 0x7FFFFFFFFFFFFFFCLL)
                    && *(_DWORD *)(v175 + 40) == (_DWORD)v171 )
                  {
                    *(_BYTE *)(v175 + 26) &= ~1u;
                    if ( *(_QWORD *)(v175 + 32) )
                      break;
                  }
                  v94 = !_BitScanReverse((unsigned int *)&v174, v173);
                  v222 = v174;
                  if ( v94 )
                    goto LABEL_352;
                }
                if ( !v175 )
                {
LABEL_352:
                  v41 = a1;
                  goto LABEL_353;
                }
                *(_BYTE *)(v175 + 32) |= 2u;
                if ( *(__int64 *)(v175 + 32) < 0 )
                  KiAbEntryRemoveFromTree(v175, v173, v171);
                v223 = *(_DWORD *)(v175 + 88) & 0x1FFFF;
                *(_DWORD *)(v175 + 88) &= 0xFFFE0000;
                *(_BYTE *)(v175 + 25) &= ~1u;
                *(_QWORD *)(v175 + 32) = 0LL;
                v176 = (unsigned __int128)((v175 - (unsigned __int64)v170->LockEntries) * (__int128)0x2AAAAAAAAAAAAAABLL) >> 64;
                v41 = a1;
                v177 = 1 << ((v176 >> 4) + (v176 < 0));
                if ( v172 == 1 )
                  v170->AbEntrySummary |= v177;
                else
                  _InterlockedOr8((volatile signed __int8 *)&v170->AbOrphanedEntrySummary, v177);
              }
              --v170->AbAllocationRegionCount;
              KiAbThreadRemoveBoosts((ULONG_PTR)v170);
              v94 = v170->SpecialApcDisable++ == -1;
              if ( v94 && ($C774EFD68449142D8271B1EC1EB7FB26 *)v170->ApcState.ApcListHead[0].Flink != &v170->152 )
                KiCheckForKernelApcDelivery();
              KiLeaveGuardedRegionUnsafe(KeGetCurrentThread());
            }
            v40 = 0LL;
            if ( (_DWORD)v216 != -1 )
              _InterlockedAnd64(
                (volatile signed __int64 *)(v12 + 8 * ((unsigned __int64)(unsigned int)(2 * v216) >> 6) + 48),
                ~(3LL << ((2 * v216) & 0x3F)));
LABEL_29:
            if ( !v40 )
              RtlpHpLfhSubsegmentFreeBlock(v41, v12, 0LL, a5);
            if ( !v210 )
              goto LABEL_32;
            v182 = v5 + 16;
            if ( v210 == 2 )
            {
              if ( !*(_BYTE *)(v41 + 57) )
              {
                if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)v182, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
                  ExfTryToWakePushLock(v182);
                v227 = 0;
                v183 = KeGetCurrentThread();
                if ( (unsigned int)MiGetSystemRegionType(v182) == 1 )
                  v184 = (unsigned int)MmGetSessionIdEx(v183->ApcState.Process);
                else
                  v184 = 0xFFFFFFFFLL;
                --v183->SpecialApcDisable;
                v185 = ++v183->AbAllocationRegionCount;
                LODWORD(v186) = ((char)v183->AbEntrySummary | (char)v183->AbOrphanedEntrySummary) ^ 0x3F;
                v187 = v182 & 0x7FFFFFFFFFFFFFFCLL;
                v94 = !_BitScanReverse((unsigned int *)&v188, v186);
                v226 = v188;
                if ( v94 )
                  goto LABEL_391;
                while ( 1 )
                {
                  v189 = (__int64)&v183->LockEntries[v188];
                  v186 = ~(1 << v188) & (unsigned int)v186;
                  if ( (*(_BYTE *)(v189 + 26) & 1) != 0
                    && (*(_DWORD *)(v189 + 32) & 1) == 0
                    && (*(_QWORD *)(v189 + 32) & 0x7FFFFFFFFFFFFFFCLL) == v187
                    && *(_DWORD *)(v189 + 40) == (_DWORD)v184 )
                  {
                    *(_BYTE *)(v189 + 26) &= ~1u;
                    if ( *(_QWORD *)(v189 + 32) )
                      break;
                  }
                  v94 = !_BitScanReverse((unsigned int *)&v188, v186);
                  v226 = v188;
                  if ( v94 )
                    goto LABEL_391;
                }
                if ( !v189 )
                {
LABEL_391:
                  if ( (*((_DWORD *)&v183->0 + 1) & 0x10000) == 0 )
                    KeBugCheckEx(0x162u, (ULONG_PTR)v183, v182, v184, 0LL);
                }
                else
                {
                  *(_BYTE *)(v189 + 32) |= 2u;
                  if ( *(__int64 *)(v189 + 32) < 0 )
                    KiAbEntryRemoveFromTree(v189, v186, v187);
                  v227 = *(_DWORD *)(v189 + 88) & 0x1FFFF;
                  *(_DWORD *)(v189 + 88) &= 0xFFFE0000;
                  *(_BYTE *)(v189 + 25) &= ~1u;
                  *(_QWORD *)(v189 + 32) = 0LL;
                  v190 = (signed __int64)(v189 - (unsigned __int64)v183->LockEntries) / 96;
                  if ( v185 == 1 )
                    v183->AbEntrySummary |= 1 << v190;
                  else
                    _InterlockedOr8((volatile signed __int8 *)&v183->AbOrphanedEntrySummary, 1 << v190);
                }
                --v183->AbAllocationRegionCount;
                KiAbThreadRemoveBoosts((ULONG_PTR)v183);
                v94 = v183->SpecialApcDisable++ == -1;
                if ( v94 && ($C774EFD68449142D8271B1EC1EB7FB26 *)v183->ApcState.ApcListHead[0].Flink != &v183->152 )
                  KiCheckForKernelApcDelivery();
                goto LABEL_389;
              }
              ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)v182);
            }
            else
            {
              if ( !*(_BYTE *)(v41 + 57) )
              {
                if ( _InterlockedCompareExchange64((volatile signed __int64 *)v182, 0LL, 17LL) != 17 )
                  ExfReleasePushLockShared(v182);
                KeAbPostRelease(v182);
LABEL_389:
                KiLeaveGuardedRegionUnsafe(KeGetCurrentThread());
                goto LABEL_32;
              }
              ExReleaseSpinLockSharedFromDpcLevel((PEX_SPIN_LOCK)v182);
            }
            if ( KiIrqlFlags )
            {
              if ( (KiIrqlFlags & 1) != 0 )
              {
                v191 = KeGetCurrentIrql();
                if ( v191 <= 0xFu && v202 <= 0xFu && v191 >= 2u )
                {
                  v24 = (__int64)KeGetCurrentPrcb();
                  v192 = ~(unsigned __int16)(-1LL << (v202 + 1));
                  v23 = *(_QWORD *)(v24 + 33976);
                  v94 = (v192 & *(_DWORD *)(v23 + 20)) == 0;
                  *(_DWORD *)(v23 + 20) &= v192;
                  if ( v94 )
                    KiRemoveSystemWorkPriorityKick(v24);
                }
              }
            }
            __writecr8(v202);
            goto LABEL_32;
          }
          RtlpHpLfhSubsegmentIncBlockCounts(a1, v12, v211, v112, (__int64)&v221, 1, (__int64)&v208);
          v25 = (unsigned int)v12 >> 12;
LABEL_27:
          v40 = v12 + v26;
          if ( a4 < v21 )
          {
            v144 = v21 - a4;
            if ( v144 == 1 )
              v145 = 0x8000;
            else
              v145 = v144 & 0x3FFF;
            *(_WORD *)((WORD4(RtlpHpHeapGlobals) ^ *(unsigned __int16 *)(v12 + 40) ^ (unsigned __int64)v25) + v40 - 2) = v145;
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
            v225 = 0;
            v96 = KeGetCurrentThread();
            v216 = (ULONG_PTR)v96;
            if ( (unsigned int)MiGetSystemRegionType(v12 + 24) == 1 )
              v97 = (unsigned int)MmGetSessionIdEx(v96->ApcState.Process);
            else
              v97 = 0xFFFFFFFFLL;
            --v96->SpecialApcDisable;
            v114 = (ULONG_PTR)v96;
            v205 = ++v96->AbAllocationRegionCount;
            v115 = (v12 + 24) & 0x7FFFFFFFFFFFFFFCLL;
            LODWORD(v116) = ((char)v96->AbEntrySummary | (char)v96->AbOrphanedEntrySummary) ^ 0x3F;
            v94 = !_BitScanReverse((unsigned int *)&v117, v116);
            v224 = v117;
            if ( v94 )
              goto LABEL_155;
            while ( 1 )
            {
              v118 = *(_QWORD *)(v114 + 800) + 96 * v117;
              v116 = ~(1 << v117) & (unsigned int)v116;
              if ( (*(_BYTE *)(v118 + 26) & 1) != 0
                && (*(_DWORD *)(v118 + 32) & 1) == 0
                && (*(_QWORD *)(v118 + 32) & 0x7FFFFFFFFFFFFFFCLL) == v115
                && *(_DWORD *)(v118 + 40) == (_DWORD)v97 )
              {
                *(_BYTE *)(v118 + 26) &= ~1u;
                if ( *(_QWORD *)(v118 + 32) )
                  break;
              }
              v94 = !_BitScanReverse((unsigned int *)&v117, v116);
              v224 = v117;
              if ( v94 )
                goto LABEL_155;
            }
            if ( !v118 )
            {
LABEL_155:
              if ( (*(_DWORD *)(v114 + 120) & 0x10000) == 0 )
                KeBugCheckEx(0x162u, v114, v12 + 24, v97, 0LL);
            }
            else
            {
              *(_BYTE *)(v118 + 32) |= 2u;
              if ( *(__int64 *)(v118 + 32) < 0 )
              {
                KiAbEntryRemoveFromTree(v118, v116, v115);
                v114 = v216;
              }
              v225 = *(_DWORD *)(v118 + 88) & 0x1FFFF;
              *(_DWORD *)(v118 + 88) &= 0xFFFE0000;
              *(_BYTE *)(v118 + 25) &= ~1u;
              *(_QWORD *)(v118 + 32) = 0LL;
              v119 = 1 << ((v118 - *(_QWORD *)(v114 + 800)) / 96);
              if ( v205 == 1 )
                *(_BYTE *)(v114 + 792) |= v119;
              else
                _InterlockedOr8((volatile signed __int8 *)(v114 + 870), v119);
            }
            --*(_BYTE *)(v114 + 794);
            KiAbThreadRemoveBoosts(v114);
            v120 = v216;
            v94 = (*(_WORD *)(v216 + 486))++ == 0xFFFF;
            if ( v94 && *(_QWORD *)(v120 + 152) != v120 + 152 )
              KiCheckForKernelApcDelivery();
            KiLeaveGuardedRegionUnsafe(KeGetCurrentThread());
            goto LABEL_26;
          }
          ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(v12 + 24));
          if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && (v105 = KeGetCurrentIrql(), v105 <= 0xFu) )
          {
            v95 = v203;
            if ( v203 <= 0xFu && v105 >= 2u )
            {
              v106 = KeGetCurrentPrcb();
              v24 = (__int64)v106->SchedulerAssist;
              v107 = ~(unsigned __int16)(-1LL << (v203 + 1));
              v94 = (v107 & *(_DWORD *)(v24 + 20)) == 0;
              v23 = (unsigned int)v107 & *(_DWORD *)(v24 + 20);
              *(_DWORD *)(v24 + 20) = v23;
              if ( v94 )
              {
                KiRemoveSystemWorkPriorityKick(v106);
                __writecr8(v203);
                goto LABEL_26;
              }
            }
          }
          else
          {
            v95 = v203;
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
        v166 = RtlpHpAcquireLockShared(v8, *(unsigned __int8 *)(v6 + 57));
        v6 = a1;
        v202 = v166;
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
        v220 = 0;
        v124 = KeGetCurrentThread();
        if ( (unsigned int)MiGetSystemRegionType(v5 + 16) == 1 )
          v125 = (unsigned int)MmGetSessionIdEx(v124->ApcState.Process);
        else
          v125 = 0xFFFFFFFFLL;
        --v124->SpecialApcDisable;
        v148 = ++v124->AbAllocationRegionCount;
        LODWORD(v149) = ((char)v124->AbEntrySummary | (char)v124->AbOrphanedEntrySummary) ^ 0x3F;
        v94 = !_BitScanReverse((unsigned int *)&v150, v149);
        v235 = v150;
        if ( v94 )
          goto LABEL_244;
        while ( 1 )
        {
          v151 = (__int64)&v124->LockEntries[v150];
          v149 = ~(1 << v150) & (unsigned int)v149;
          if ( (*(_BYTE *)(v151 + 26) & 1) != 0
            && (*(_DWORD *)(v151 + 32) & 1) == 0
            && (*(_QWORD *)(v151 + 32) & 0x7FFFFFFFFFFFFFFCLL) == ((v5 + 16) & 0x7FFFFFFFFFFFFFFCLL)
            && *(_DWORD *)(v151 + 40) == (_DWORD)v125 )
          {
            *(_BYTE *)(v151 + 26) &= ~1u;
            if ( *(_QWORD *)(v151 + 32) )
              break;
          }
          v94 = !_BitScanReverse((unsigned int *)&v150, v149);
          v235 = v150;
          if ( v94 )
            goto LABEL_244;
        }
        if ( !v151 )
        {
LABEL_244:
          if ( (*((_DWORD *)&v124->0 + 1) & 0x10000) == 0 )
            KeBugCheckEx(0x162u, (ULONG_PTR)v124, v5 + 16, (unsigned int)v125, 0LL);
        }
        else
        {
          *(_BYTE *)(v151 + 32) |= 2u;
          if ( *(__int64 *)(v151 + 32) < 0 )
            KiAbEntryRemoveFromTree(v151, v149, v125);
          v220 = 0;
          v220 = *(_DWORD *)(v151 + 88) & 0x1FFFF;
          *(_DWORD *)(v151 + 88) &= 0xFFFE0000;
          *(_BYTE *)(v151 + 25) &= ~1u;
          *(_QWORD *)(v151 + 32) = 0LL;
          v152 = 1 << ((signed __int64)(v151 - (unsigned __int64)v124->LockEntries) / 96);
          if ( v148 == 1 )
            v124->AbEntrySummary |= v152;
          else
            _InterlockedOr8((volatile signed __int8 *)&v124->AbOrphanedEntrySummary, v152);
        }
        --v124->AbAllocationRegionCount;
        KiAbThreadRemoveBoosts((ULONG_PTR)v124);
        v94 = v124->SpecialApcDisable++ == -1;
        if ( v94 && ($C774EFD68449142D8271B1EC1EB7FB26 *)v124->ApcState.ApcListHead[0].Flink != &v124->152 )
          KiCheckForKernelApcDelivery();
        KiLeaveGuardedRegionUnsafe(KeGetCurrentThread());
        v8 = v5 + 16;
      }
      else
      {
        if ( *(_BYTE *)(v6 + 57) )
        {
          ExReleaseSpinLockSharedFromDpcLevel((PEX_SPIN_LOCK)v8);
LABEL_173:
          if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && (v127 = KeGetCurrentIrql(), v127 <= 0xFu) )
          {
            v121 = v202;
            if ( v202 <= 0xFu && v127 >= 2u )
            {
              v128 = KeGetCurrentPrcb();
              v129 = v128->SchedulerAssist;
              v130 = ~(unsigned __int16)(-1LL << (v202 + 1));
              v94 = (v130 & v129[5]) == 0;
              v129[5] &= v130;
              if ( v94 )
                KiRemoveSystemWorkPriorityKick(v128);
            }
          }
          else
          {
            v121 = v202;
          }
          __writecr8(v121);
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
      v210 = 2;
      v202 = RtlpHpAcquireLockExclusive(v8, *(unsigned __int8 *)(a1 + 57));
      v122 = RtlpHpLfhSlotAddSubsegment(v5, Subsegment);
      v6 = a1;
      v217 = v122;
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
    v215 = 0;
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
        v215 = 1;
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
          v56 = *(_QWORD **)(v46 + 8);
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
          v57 = *(__int64 ****)(v5 + 48);
          if ( *v57 != v54 )
            goto LABEL_408;
          *(_QWORD *)v46 = v54;
          *(_QWORD *)(v46 + 8) = v57;
          v52 = 0LL;
          *v57 = (__int64 **)v46;
          *(_QWORD *)(v5 + 48) = v46;
        }
        if ( (*(_BYTE *)v5 & 1) == 0 && *(_QWORD *)(v5 + 8) > 8uLL )
        {
          v52 = *v54;
          v167 = **v54;
          if ( (__int64 **)(*v54)[1] != v54 || *(__int64 **)(v167 + 8) != v52 )
            goto LABEL_408;
          *v54 = (__int64 *)v167;
          *(_QWORD *)(v167 + 8) = v54;
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
          v59 = v202;
          if ( v202 <= 0xFu && v90 >= 2u )
          {
            v91 = KeGetCurrentPrcb();
            v92 = v91->SchedulerAssist;
            v93 = ~(unsigned __int16)(-1LL << (v202 + 1));
            v94 = (v93 & v92[5]) == 0;
            v92[5] &= v93;
            if ( v94 )
              KiRemoveSystemWorkPriorityKick(v91);
          }
        }
        else
        {
          v59 = v202;
        }
        __writecr8(v59);
      }
      else
      {
        if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)v8, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
          ExfTryToWakePushLock(v8);
        v219 = 0;
        v87 = KeGetCurrentThread();
        v88 = (unsigned int)MiGetSystemRegionType(v8) == 1
            ? (unsigned int)MmGetSessionIdEx(v87->ApcState.Process)
            : 0xFFFFFFFFLL;
        --v87->SpecialApcDisable;
        v98 = ++v87->AbAllocationRegionCount;
        LODWORD(v99) = ((char)v87->AbEntrySummary | (char)v87->AbOrphanedEntrySummary) ^ 0x3F;
        v100 = v8 & 0x7FFFFFFFFFFFFFFCLL;
        v94 = !_BitScanReverse((unsigned int *)&v101, v99);
        v234 = v101;
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
            v234 = v101;
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
          v219 = 0;
          v219 = *(_DWORD *)(v102 + 88) & 0x1FFFF;
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
          KiCheckForKernelApcDelivery();
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
    v210 = 2;
    v168 = RtlpHpAcquireLockExclusive(v8, *(unsigned __int8 *)(a1 + 57));
    v6 = a1;
    v202 = v168;
  }
  v60 = 3LL;
  v61 = 2 * (*(unsigned __int16 *)(v46 + 34) + (unsigned __int64)*(unsigned __int8 *)(v46 + 39));
  v239[1] = v46 + 48;
  v62 = *(unsigned __int8 *)(v5 + 1);
  v239[0] = v61;
  v214 = (unsigned int)v46 >> 12;
  LODWORD(v216) = *((unsigned __int8 *)RtlpSearchWidth + v62);
  v63 = (unsigned __int16)(WORD4(RtlpHpHeapGlobals) ^ ((unsigned int)v46 >> 12) ^ *(_WORD *)(v46 + 40));
  v64 = (DWORD2(RtlpHpHeapGlobals) ^ ((unsigned int)v46 >> 12) ^ *(_DWORD *)(v46 + 40)) >> 16;
  v65 = (DWORD2(RtlpHpHeapGlobals) ^ ((unsigned int)v46 >> 12) ^ *(_DWORD *)(v46 + 40)) >> 16;
  v66 = v65;
  v233 = v63;
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
    v68 = RtlpLowFragHeapRandomData[v67];
  }
  v69 = RtlpLfhBlockBitmapAllocate((unsigned int)v239, *(unsigned __int16 *)(v46 + 36), v68, v216, v60);
  v213 = v69;
  *(_WORD *)(v46 + 36) = v69;
  v70 = v66 + v69 * v63;
  if ( *(_BYTE *)(v46 + 45) <= 1u )
    goto LABEL_89;
  v71 = *(_BYTE *)(v46 + 44);
  v24 = 0LL;
  v72 = v46 + *(unsigned __int16 *)(v46 + 46);
  v23 = v70 >> v71;
  v214 = WORD4(RtlpHpHeapGlobals) ^ (unsigned __int16)v214 ^ *(unsigned __int16 *)(v46 + 40);
  v228 = 0;
  v209[0] = -1;
  v73 = ((v70 + v214 - 1) >> v71) - (unsigned int)v23 + 1;
  v204 = -1;
  v74 = 2 * v23;
  v75 = (signed __int16 *)(2 * v23 + v72);
  _m_prefetchw(v75);
  v212 = 0LL;
  v76 = &v75[v73];
  v210 = 0;
  v206 = -1;
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
          v23 = v210;
          v80 = v206;
          LODWORD(v81) = v212;
          goto LABEL_84;
        }
      }
      if ( (_DWORD)v24 )
        break;
      LODWORD(v216) = 1;
      v123 = RtlpHpAcquireLockExclusive(v46 + 24, *(unsigned __int8 *)(a1 + 57));
      v24 = 1LL;
      v204 = v123;
    }
    v80 = v206;
    if ( v78 )
    {
      v23 = v210 + 1;
      v81 = v74 >> 1;
      ++v210;
      v212 = v74 >> 1;
      if ( v206 == -1 )
      {
        v80 = v74 >> 1;
        v206 = v80;
      }
    }
    else
    {
      LODWORD(v81) = v212;
      v23 = --v210;
    }
    *v75 = v78 + 1;
LABEL_84:
    ++v75;
    v74 += 2LL;
  }
  while ( (unsigned __int64)v75 < v77 );
  v63 = v233;
  v82 = v213;
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
      if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && (v153 = KeGetCurrentIrql(), v153 <= 0xFu) )
      {
        v133 = v204;
        if ( v204 <= 0xFu && v153 >= 2u )
        {
          v24 = (__int64)KeGetCurrentPrcb();
          v154 = ~(unsigned __int16)(-1LL << (v204 + 1));
          v23 = *(_QWORD *)(v24 + 33976);
          v94 = (v154 & *(_DWORD *)(v23 + 20)) == 0;
          *(_DWORD *)(v23 + 20) &= v154;
          if ( v94 )
          {
            KiRemoveSystemWorkPriorityKick(v24);
            __writecr8(v204);
            goto LABEL_89;
          }
        }
      }
      else
      {
        v133 = v204;
      }
      __writecr8(v133);
      goto LABEL_89;
    }
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)(v46 + 24), 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock(v46 + 24);
    v232 = 0;
    v146 = KeGetCurrentThread();
    if ( (unsigned int)MiGetSystemRegionType(v46 + 24) == 1 )
      v147 = (unsigned int)MmGetSessionIdEx(v146->ApcState.Process);
    else
      v147 = 0xFFFFFFFFLL;
    --v146->SpecialApcDisable;
    v160 = ++v146->AbAllocationRegionCount;
    LODWORD(v161) = ((char)v146->AbEntrySummary | (char)v146->AbOrphanedEntrySummary) ^ 0x3F;
    v162 = (v46 + 24) & 0x7FFFFFFFFFFFFFFCLL;
    v94 = !_BitScanReverse((unsigned int *)&v163, v161);
    v231 = v163;
    if ( v94 )
      goto LABEL_282;
    while ( 1 )
    {
      v164 = (__int64)&v146->LockEntries[v163];
      v161 = ~(1 << v163) & (unsigned int)v161;
      if ( (*(_BYTE *)(v164 + 26) & 1) != 0
        && (*(_DWORD *)(v164 + 32) & 1) == 0
        && (*(_QWORD *)(v164 + 32) & 0x7FFFFFFFFFFFFFFCLL) == v162
        && *(_DWORD *)(v164 + 40) == (_DWORD)v147 )
      {
        *(_BYTE *)(v164 + 26) &= ~1u;
        if ( *(_QWORD *)(v164 + 32) )
          break;
      }
      v94 = !_BitScanReverse((unsigned int *)&v163, v161);
      v231 = v163;
      if ( v94 )
        goto LABEL_282;
    }
    if ( !v164 )
    {
LABEL_282:
      if ( (*((_DWORD *)&v146->0 + 1) & 0x10000) == 0 )
        KeBugCheckEx(0x162u, (ULONG_PTR)v146, v46 + 24, v147, 0LL);
    }
    else
    {
      *(_BYTE *)(v164 + 32) |= 2u;
      if ( *(__int64 *)(v164 + 32) < 0 )
        KiAbEntryRemoveFromTree(v164, v161, v162);
      v232 = *(_DWORD *)(v164 + 88) & 0x1FFFF;
      *(_DWORD *)(v164 + 88) &= 0xFFFE0000;
      *(_BYTE *)(v164 + 25) &= ~1u;
      *(_QWORD *)(v164 + 32) = 0LL;
      v165 = 1 << ((signed __int64)(v164 - (unsigned __int64)v146->LockEntries) / 96);
      if ( v160 == 1 )
        v146->AbEntrySummary |= v165;
      else
        _InterlockedOr8((volatile signed __int8 *)&v146->AbOrphanedEntrySummary, v165);
    }
    --v146->AbAllocationRegionCount;
    KiAbThreadRemoveBoosts((ULONG_PTR)v146);
    v94 = v146->SpecialApcDisable++ == -1;
    if ( v94 && ($C774EFD68449142D8271B1EC1EB7FB26 *)v146->ApcState.ApcListHead[0].Flink != &v146->152 )
      KiCheckForKernelApcDelivery();
    KiLeaveGuardedRegionUnsafe(KeGetCurrentThread());
LABEL_89:
    v40 = v46 + v70;
    if ( a4 < v63 )
      RtlpHpLfhSubsegmentSetUnusedBytes(v46, v46 + v70, v63 - a4, v24);
    v84 = a1;
  }
  else
  {
    v134 = v81 - v80;
    v135 = *(_BYTE *)(v46 + 44);
    v136 = (int (__fastcall *)(__int64, __int64, _QWORD, __int64))(v83 ^ RtlpHpHeapGlobals ^ *(_QWORD *)(v83 + 24));
    v137 = v80 << v135;
    v228 = v134 + 1;
    v138 = (v134 + 1) << v135;
    v139 = *(_QWORD *)v83;
    v209[0] = v204;
    v207 = v137;
    if ( v136(v139, v46 + v137, v138, v24) >= 0 )
    {
      RtlpHpLfhSubsegmentIncBlockCounts(a1, v46, v207, v138, (__int64)&v228, 1, (__int64)v209);
      goto LABEL_89;
    }
    v84 = a1;
    RtlpHpLfhSubsegmentDecBlockCounts(a1, v46, v70, v214);
    if ( *(_BYTE *)(a1 + 57) )
    {
      ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(v46 + 24));
      if ( KiIrqlFlags )
      {
        if ( (KiIrqlFlags & 1) != 0 )
        {
          v200 = KeGetCurrentIrql();
          if ( v200 <= 0xFu && v204 <= 0xFu && v200 >= 2u )
          {
            v24 = (__int64)KeGetCurrentPrcb();
            v201 = ~(unsigned __int16)(-1LL << (v204 + 1));
            v23 = *(_QWORD *)(v24 + 33976);
            v94 = (v201 & *(_DWORD *)(v23 + 20)) == 0;
            *(_DWORD *)(v23 + 20) &= v201;
            if ( v94 )
              KiRemoveSystemWorkPriorityKick(v24);
          }
        }
      }
      __writecr8(v204);
      v40 = 0LL;
    }
    else
    {
      if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)(v46 + 24), 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
        ExfTryToWakePushLock(v46 + 24);
      v40 = 0LL;
      v230 = 0;
      v193 = KeGetCurrentThread();
      if ( (unsigned int)MiGetSystemRegionType(v46 + 24) == 1 )
        v194 = (unsigned int)MmGetSessionIdEx(v193->ApcState.Process);
      else
        v194 = 0xFFFFFFFFLL;
      --v193->SpecialApcDisable;
      v195 = ++v193->AbAllocationRegionCount;
      LODWORD(v196) = ((char)v193->AbEntrySummary | (char)v193->AbOrphanedEntrySummary) ^ 0x3F;
      v94 = !_BitScanReverse((unsigned int *)&v197, v196);
      v229 = v197;
      if ( v94 )
      {
LABEL_433:
        if ( (*((_DWORD *)&v193->0 + 1) & 0x10000) == 0 )
          KeBugCheckEx(0x162u, (ULONG_PTR)v193, v46 + 24, (unsigned int)v194, 0LL);
      }
      else
      {
        while ( 1 )
        {
          v198 = (__int64)&v193->LockEntries[v197];
          v196 = ~(1 << v197) & (unsigned int)v196;
          if ( (*(_BYTE *)(v198 + 26) & 1) != 0
            && (*(_DWORD *)(v198 + 32) & 1) == 0
            && (*(_QWORD *)(v198 + 32) & 0x7FFFFFFFFFFFFFFCLL) == ((v46 + 24) & 0x7FFFFFFFFFFFFFFCLL)
            && *(_DWORD *)(v198 + 40) == (_DWORD)v194 )
          {
            *(_BYTE *)(v198 + 26) &= ~1u;
            if ( *(_QWORD *)(v198 + 32) )
              break;
          }
          v94 = !_BitScanReverse((unsigned int *)&v197, v196);
          v229 = v197;
          if ( v94 )
            goto LABEL_432;
        }
        if ( !v198 )
        {
LABEL_432:
          v40 = 0LL;
          goto LABEL_433;
        }
        *(_BYTE *)(v198 + 32) |= 2u;
        if ( *(__int64 *)(v198 + 32) < 0 )
          KiAbEntryRemoveFromTree(v198, v196, v194);
        v230 = *(_DWORD *)(v198 + 88) & 0x1FFFF;
        *(_DWORD *)(v198 + 88) &= 0xFFFE0000;
        *(_BYTE *)(v198 + 25) &= ~1u;
        *(_QWORD *)(v198 + 32) = 0LL;
        v199 = 1 << ((char)(v198 - LOBYTE(v193->LockEntries)) / 96);
        if ( v195 == 1 )
          v193->AbEntrySummary |= v199;
        else
          _InterlockedOr8((volatile signed __int8 *)&v193->AbOrphanedEntrySummary, v199);
        v40 = 0LL;
      }
      --v193->AbAllocationRegionCount;
      KiAbThreadRemoveBoosts((ULONG_PTR)v193);
      v94 = v193->SpecialApcDisable++ == -1;
      if ( v94 && ($C774EFD68449142D8271B1EC1EB7FB26 *)v193->ApcState.ApcListHead[0].Flink != &v193->152 )
        KiCheckForKernelApcDelivery();
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
  Subsegment = v217;
LABEL_33:
  if ( v215 )
    RtlpHpLfhBucketUpdateAffinityMapping(a1, a2, v23, v24);
  if ( Subsegment )
    RtlpHpLfhBucketAddSubsegment(a1, a2, Subsegment, a5);
  return v40;
}
