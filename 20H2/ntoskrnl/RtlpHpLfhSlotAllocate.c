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
  unsigned int v99; // edx
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
  unsigned int v115; // edx
  __int64 v116; // rcx
  __int64 v117; // rsi
  unsigned __int8 v118; // al
  ULONG_PTR v119; // rsi
  unsigned __int8 v120; // r13
  __int64 v121; // rax
  unsigned __int8 v122; // al
  struct _KTHREAD *v123; // r14
  unsigned int v124; // r8d
  unsigned __int8 v125; // r13
  unsigned __int8 v126; // al
  struct _KPRCB *v127; // r10
  _DWORD *v128; // r9
  int v129; // eax
  struct _KTHREAD *CurrentThread; // rsi
  unsigned int SessionId; // r8d
  unsigned __int8 v132; // si
  int v133; // r11d
  char v134; // cl
  int (__fastcall *v135)(__int64, __int64, _QWORD, __int64); // rax
  unsigned int v136; // r10d
  unsigned int v137; // esi
  __int64 v138; // rcx
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  int v142; // eax
  unsigned int v143; // r13d
  __int16 v144; // r13
  struct _KTHREAD *v145; // rbx
  ULONG_PTR v146; // r9
  unsigned __int8 v147; // r12
  unsigned int v148; // edx
  __int64 v149; // rcx
  __int64 v150; // rdi
  unsigned __int8 v151; // al
  unsigned __int8 v152; // al
  int v153; // eax
  unsigned __int8 v154; // r13
  unsigned int v155; // edx
  __int64 v156; // rcx
  __int64 v157; // r14
  unsigned __int8 v158; // al
  unsigned __int8 v159; // r13
  unsigned int v160; // edx
  __int64 v161; // rcx
  __int64 v162; // rsi
  unsigned __int8 v163; // al
  unsigned __int8 v164; // al
  __int64 v165; // rax
  unsigned __int8 v166; // al
  __int64 v167; // r8
  struct _KTHREAD *v168; // rsi
  unsigned int v169; // r8d
  unsigned __int8 v170; // r13
  unsigned int v171; // edx
  __int64 v172; // rcx
  __int64 v173; // r14
  __int64 v174; // rdx
  unsigned __int8 v175; // al
  unsigned __int8 v176; // al
  unsigned __int8 v177; // si
  struct _KPRCB *v178; // r10
  int v179; // eax
  ULONG_PTR v180; // r15
  struct _KTHREAD *v181; // rbx
  ULONG_PTR v182; // r9
  unsigned __int8 v183; // r14
  unsigned int v184; // edx
  __int64 v185; // rcx
  __int64 v186; // rdi
  __int64 v187; // rdx
  unsigned __int8 v188; // al
  int v189; // eax
  struct _KTHREAD *v190; // rbx
  unsigned int v191; // r8d
  unsigned __int8 v192; // r15
  unsigned int v193; // edx
  __int64 v194; // rcx
  __int64 v195; // rsi
  unsigned __int8 v196; // r12
  unsigned __int8 v197; // al
  int v198; // eax
  unsigned __int8 v199; // [rsp+40h] [rbp-C0h]
  unsigned __int8 v200; // [rsp+41h] [rbp-BFh]
  unsigned __int8 v201; // [rsp+41h] [rbp-BFh]
  unsigned __int8 v202; // [rsp+41h] [rbp-BFh]
  int v203; // [rsp+44h] [rbp-BCh]
  unsigned int v204; // [rsp+44h] [rbp-BCh]
  char v205; // [rsp+48h] [rbp-B8h] BYREF
  char v206[3]; // [rsp+49h] [rbp-B7h] BYREF
  unsigned int v207; // [rsp+4Ch] [rbp-B4h]
  int v208; // [rsp+50h] [rbp-B0h]
  __int64 v209; // [rsp+58h] [rbp-A8h]
  unsigned int v210; // [rsp+60h] [rbp-A0h]
  unsigned int v211; // [rsp+64h] [rbp-9Ch]
  int v212; // [rsp+68h] [rbp-98h]
  ULONG_PTR v213; // [rsp+70h] [rbp-90h]
  __int64 v214; // [rsp+78h] [rbp-88h]
  __int64 v215; // [rsp+80h] [rbp-80h]
  int v216; // [rsp+88h] [rbp-78h]
  int v217; // [rsp+8Ch] [rbp-74h]
  int v218; // [rsp+90h] [rbp-70h] BYREF
  int v219; // [rsp+94h] [rbp-6Ch]
  int v220; // [rsp+98h] [rbp-68h]
  int v221; // [rsp+9Ch] [rbp-64h]
  int v222; // [rsp+A0h] [rbp-60h]
  int v223; // [rsp+A4h] [rbp-5Ch]
  int v224; // [rsp+A8h] [rbp-58h]
  int v225; // [rsp+ACh] [rbp-54h] BYREF
  int v226; // [rsp+B0h] [rbp-50h]
  int v227; // [rsp+B4h] [rbp-4Ch]
  int v228; // [rsp+B8h] [rbp-48h]
  int v229; // [rsp+BCh] [rbp-44h]
  int v230; // [rsp+C0h] [rbp-40h]
  int v231; // [rsp+C8h] [rbp-38h]
  int v232; // [rsp+CCh] [rbp-34h]
  int v233; // [rsp+D0h] [rbp-30h]
  int v234; // [rsp+D4h] [rbp-2Ch]
  _QWORD v235[2]; // [rsp+D8h] [rbp-28h] BYREF
  _QWORD v236[11]; // [rsp+E8h] [rbp-18h] BYREF

  v5 = a3;
  v6 = a1;
  v199 = -1;
  v7 = 0;
  v207 = 0;
  v212 = 0;
  v8 = a3 + 16;
  v214 = 0LL;
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
              v212 = 1;
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
          v207 = 2;
          v86 = RtlpHpAcquireLockExclusive(v5 + 16, v85);
          v6 = a1;
          v199 = v86;
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
            v125 = v199;
            if ( v199 <= 0xFu && CurrentIrql >= 2u )
            {
              CurrentPrcb = KeGetCurrentPrcb();
              SchedulerAssist = CurrentPrcb->SchedulerAssist;
              v142 = ~(unsigned __int16)(-1LL << (v199 + 1));
              v94 = (v142 & SchedulerAssist[5]) == 0;
              SchedulerAssist[5] &= v142;
              if ( v94 )
              {
                KiRemoveSystemWorkPriorityKick(CurrentPrcb);
                __writecr8(v199);
                v13 = 0;
                v207 = 0;
                goto LABEL_8;
              }
            }
          }
          else
          {
            v125 = v199;
          }
          __writecr8(v125);
          v13 = 0;
          v207 = 0;
          goto LABEL_8;
        }
        if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)(v5 + 16), 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
          ExfTryToWakePushLock(v5 + 16);
        v234 = 0;
        CurrentThread = KeGetCurrentThread();
        if ( (unsigned int)MiGetSystemRegionType(v5 + 16) == 1 )
          SessionId = MmGetSessionIdEx(CurrentThread->ApcState.Process);
        else
          SessionId = -1;
        --CurrentThread->SpecialApcDisable;
        v154 = ++CurrentThread->AbAllocationRegionCount;
        v155 = ((char)CurrentThread->AbEntrySummary | (char)CurrentThread->AbOrphanedEntrySummary) ^ 0x3F;
        v94 = !_BitScanReverse((unsigned int *)&v156, v155);
        v233 = v156;
        if ( v94 )
          goto LABEL_262;
        while ( 1 )
        {
          v157 = (__int64)&CurrentThread->LockEntries[v156];
          v155 &= ~(1 << v156);
          if ( (*(_BYTE *)(v157 + 26) & 1) != 0
            && (*(_DWORD *)(v157 + 32) & 1) == 0
            && (*(_QWORD *)(v157 + 32) & 0x7FFFFFFFFFFFFFFCLL) == ((v5 + 16) & 0x7FFFFFFFFFFFFFFCLL)
            && *(_DWORD *)(v157 + 40) == SessionId )
          {
            *(_BYTE *)(v157 + 26) &= ~1u;
            if ( *(_QWORD *)(v157 + 32) )
              break;
          }
          v94 = !_BitScanReverse((unsigned int *)&v156, v155);
          v233 = v156;
          if ( v94 )
            goto LABEL_262;
        }
        if ( !v157 )
        {
LABEL_262:
          if ( (*((_DWORD *)&CurrentThread->0 + 1) & 0x10000) == 0 )
            KeBugCheckEx(0x162u, (ULONG_PTR)CurrentThread, v5 + 16, SessionId, 0LL);
        }
        else
        {
          *(_BYTE *)(v157 + 32) |= 2u;
          if ( *(__int64 *)(v157 + 32) < 0 )
            KiAbEntryRemoveFromTree((PRTL_BALANCED_NODE)v157);
          v234 = *(_DWORD *)(v157 + 88) & 0x1FFFF;
          *(_DWORD *)(v157 + 88) &= 0xFFFE0000;
          *(_BYTE *)(v157 + 25) &= ~1u;
          *(_QWORD *)(v157 + 32) = 0LL;
          v158 = 1 << ((signed __int64)(v157 - (unsigned __int64)CurrentThread->LockEntries) / 96);
          if ( v154 == 1 )
            CurrentThread->AbEntrySummary |= v158;
          else
            _InterlockedOr8((volatile signed __int8 *)&CurrentThread->AbOrphanedEntrySummary, v158);
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
        v207 = 0;
LABEL_8:
        v14 = 3LL;
        v15 = 2 * (*(unsigned __int16 *)(v12 + 34) + (unsigned __int64)*(unsigned __int8 *)(v12 + 39));
        v235[1] = v12 + 48;
        v16 = *(unsigned __int8 *)(v5 + 1);
        v235[0] = v15;
        LODWORD(v209) = *((unsigned __int8 *)RtlpSearchWidth + v16);
        v17 = (unsigned __int16)(WORD4(RtlpHpHeapGlobals) ^ *(_WORD *)(v12 + 40) ^ ((unsigned int)v12 >> 12));
        v18 = (DWORD2(RtlpHpHeapGlobals) ^ *(_DWORD *)(v12 + 40) ^ ((unsigned int)v12 >> 12)) >> 16;
        v19 = v18;
        v20 = v18;
        v210 = (unsigned __int16)(WORD4(RtlpHpHeapGlobals) ^ *(_WORD *)(v12 + 40) ^ ((unsigned int)v12 >> 12));
        if ( a4 >= (unsigned int)v17 )
          v14 = 1LL;
        if ( (*(_BYTE *)(a1 + 62) & 2) != 0 )
        {
          v21 = v210;
          v20 = v18;
          if ( a4 >= (unsigned int)v17 )
            v20 = v18;
        }
        else
        {
          v13 = RtlpLowFragHeapRandomData[(unsigned __int16)RtlpLfhIncrementDataSlot(v17, v18)];
          v21 = v210;
          if ( a4 >= v210 )
            v20 = v19;
        }
        v22 = RtlpLfhBlockBitmapAllocate((unsigned int)v235, *(unsigned __int16 *)(v12 + 36), v13, v209, v14);
        v25 = (unsigned int)v12 >> 12;
        LODWORD(v213) = v22;
        *(_WORD *)(v12 + 36) = v22;
        v26 = v20 + v22 * v21;
        if ( *(_BYTE *)(v12 + 45) <= 1u )
          goto LABEL_27;
        v27 = *(_BYTE *)(v12 + 44);
        v28 = *(unsigned __int16 *)(v12 + 46);
        v24 = 0LL;
        v218 = 0;
        v23 = v26 >> v27;
        v29 = *(unsigned __int16 *)(v12 + 40) ^ (unsigned __int16)((unsigned int)v12 >> 12);
        v205 = -1;
        v200 = -1;
        v211 = WORD4(RtlpHpHeapGlobals) ^ v29;
        v30 = 2 * v23;
        v31 = ((v26 + v211 - 1) >> v27) - (unsigned int)v23 + 1;
        v32 = (signed __int16 *)(2 * v23 + v12 + v28);
        _m_prefetchw(v32);
        v33 = &v32[v31];
        LODWORD(v209) = 0;
        v215 = 0LL;
        v208 = -1;
        if ( v32 >= v33 )
          goto LABEL_27;
        v34 = (unsigned __int64)v33;
        do
        {
          v35 = v200;
          while ( 1 )
          {
            v36 = *v32;
            while ( v36 > 0 )
            {
              v37 = v36;
              v36 = _InterlockedCompareExchange16(v32, v36 + 1, v36);
              if ( v37 == v36 )
              {
                v23 = (unsigned int)v209;
                v38 = v208;
                goto LABEL_21;
              }
            }
            if ( (_DWORD)v24 )
              break;
            v230 = 1;
            v89 = RtlpHpAcquireLockExclusive(v12 + 24, *(unsigned __int8 *)(a1 + 57));
            v24 = 1LL;
            v35 = v89;
            v200 = v89;
          }
          v38 = v208;
          if ( v36 )
          {
            v23 = (unsigned int)(v209 + 1);
            LODWORD(v209) = v209 + 1;
            v215 = v30 >> 1;
            if ( v208 == -1 )
            {
              v38 = v30 >> 1;
              v208 = v38;
            }
          }
          else
          {
            v23 = (unsigned int)(v209 - 1);
            LODWORD(v209) = v209 - 1;
          }
          *v32 = v36 + 1;
LABEL_21:
          ++v32;
          v30 += 2LL;
        }
        while ( (unsigned __int64)v32 < v34 );
        v5 = a3;
        v21 = v210;
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
          v110 = v215 - v38;
          v205 = v35;
          v111 = v38 << v108;
          v218 = v110 + 1;
          v112 = (v110 + 1) << v108;
          v113 = *(_QWORD *)v39;
          v208 = v111;
          if ( v109(v113, v12 + v111, v112, v24) < 0 )
          {
            v167 = v26;
            v41 = a1;
            RtlpHpLfhSubsegmentDecBlockCounts(a1, v12, v167, v211);
            if ( *(_BYTE *)(a1 + 57) )
            {
              ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(v12 + 24));
              if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && (v176 = KeGetCurrentIrql(), v176 <= 0xFu) )
              {
                v177 = v200;
                if ( v200 <= 0xFu && v176 >= 2u )
                {
                  v178 = KeGetCurrentPrcb();
                  v24 = (__int64)v178->SchedulerAssist;
                  v179 = ~(unsigned __int16)(-1LL << (v200 + 1));
                  v94 = (v179 & *(_DWORD *)(v24 + 20)) == 0;
                  v23 = (unsigned int)v179 & *(_DWORD *)(v24 + 20);
                  *(_DWORD *)(v24 + 20) = v23;
                  if ( v94 )
                    KiRemoveSystemWorkPriorityKick(v178);
                }
              }
              else
              {
                v177 = v200;
              }
              __writecr8(v177);
            }
            else
            {
              if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)(v12 + 24), 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
                ExfTryToWakePushLock(v12 + 24);
              v220 = 0;
              v168 = KeGetCurrentThread();
              if ( (unsigned int)MiGetSystemRegionType(v12 + 24) == 1 )
                v169 = MmGetSessionIdEx(v168->ApcState.Process);
              else
                v169 = -1;
              --v168->SpecialApcDisable;
              v170 = ++v168->AbAllocationRegionCount;
              v171 = ((char)v168->AbEntrySummary | (char)v168->AbOrphanedEntrySummary) ^ 0x3F;
              v94 = !_BitScanReverse((unsigned int *)&v172, v171);
              v219 = v172;
              if ( v94 )
              {
LABEL_353:
                if ( (*((_DWORD *)&v168->0 + 1) & 0x10000) == 0 )
                  KeBugCheckEx(0x162u, (ULONG_PTR)v168, v12 + 24, v169, 0LL);
              }
              else
              {
                while ( 1 )
                {
                  v173 = (__int64)&v168->LockEntries[v172];
                  v171 &= ~(1 << v172);
                  if ( (*(_BYTE *)(v173 + 26) & 1) != 0
                    && (*(_DWORD *)(v173 + 32) & 1) == 0
                    && (*(_QWORD *)(v173 + 32) & 0x7FFFFFFFFFFFFFFCLL) == ((v12 + 24) & 0x7FFFFFFFFFFFFFFCLL)
                    && *(_DWORD *)(v173 + 40) == v169 )
                  {
                    *(_BYTE *)(v173 + 26) &= ~1u;
                    if ( *(_QWORD *)(v173 + 32) )
                      break;
                  }
                  v94 = !_BitScanReverse((unsigned int *)&v172, v171);
                  v219 = v172;
                  if ( v94 )
                    goto LABEL_352;
                }
                if ( !v173 )
                {
LABEL_352:
                  v41 = a1;
                  goto LABEL_353;
                }
                *(_BYTE *)(v173 + 32) |= 2u;
                if ( *(__int64 *)(v173 + 32) < 0 )
                  KiAbEntryRemoveFromTree((PRTL_BALANCED_NODE)v173);
                v220 = *(_DWORD *)(v173 + 88) & 0x1FFFF;
                *(_DWORD *)(v173 + 88) &= 0xFFFE0000;
                *(_BYTE *)(v173 + 25) &= ~1u;
                *(_QWORD *)(v173 + 32) = 0LL;
                v174 = (unsigned __int128)((v173 - (unsigned __int64)v168->LockEntries) * (__int128)0x2AAAAAAAAAAAAAABLL) >> 64;
                v41 = a1;
                v175 = 1 << ((v174 >> 4) + (v174 < 0));
                if ( v170 == 1 )
                  v168->AbEntrySummary |= v175;
                else
                  _InterlockedOr8((volatile signed __int8 *)&v168->AbOrphanedEntrySummary, v175);
              }
              --v168->AbAllocationRegionCount;
              KiAbThreadRemoveBoosts((ULONG_PTR)v168);
              v94 = v168->SpecialApcDisable++ == -1;
              if ( v94 && ($C774EFD68449142D8271B1EC1EB7FB26 *)v168->ApcState.ApcListHead[0].Flink != &v168->152 )
                KiCheckForKernelApcDelivery();
              KiLeaveGuardedRegionUnsafe(KeGetCurrentThread());
            }
            v40 = 0LL;
            if ( (_DWORD)v213 != -1 )
              _InterlockedAnd64(
                (volatile signed __int64 *)(v12 + 8 * ((unsigned __int64)(unsigned int)(2 * v213) >> 6) + 48),
                ~(3LL << ((2 * v213) & 0x3F)));
LABEL_29:
            if ( !v40 )
              RtlpHpLfhSubsegmentFreeBlock(v41, v12, 0LL, a5);
            if ( !v207 )
              goto LABEL_32;
            v180 = v5 + 16;
            if ( v207 == 2 )
            {
              if ( !*(_BYTE *)(v41 + 57) )
              {
                if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)v180, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
                  ExfTryToWakePushLock(v180);
                v224 = 0;
                v181 = KeGetCurrentThread();
                if ( (unsigned int)MiGetSystemRegionType(v180) == 1 )
                  v182 = (unsigned int)MmGetSessionIdEx(v181->ApcState.Process);
                else
                  v182 = 0xFFFFFFFFLL;
                --v181->SpecialApcDisable;
                v183 = ++v181->AbAllocationRegionCount;
                v184 = ((char)v181->AbEntrySummary | (char)v181->AbOrphanedEntrySummary) ^ 0x3F;
                v94 = !_BitScanReverse((unsigned int *)&v185, v184);
                v223 = v185;
                if ( v94 )
                  goto LABEL_391;
                while ( 1 )
                {
                  v186 = (__int64)&v181->LockEntries[v185];
                  v184 &= ~(1 << v185);
                  if ( (*(_BYTE *)(v186 + 26) & 1) != 0
                    && (*(_DWORD *)(v186 + 32) & 1) == 0
                    && (*(_QWORD *)(v186 + 32) & 0x7FFFFFFFFFFFFFFCLL) == (v180 & 0x7FFFFFFFFFFFFFFCLL)
                    && *(_DWORD *)(v186 + 40) == (_DWORD)v182 )
                  {
                    *(_BYTE *)(v186 + 26) &= ~1u;
                    if ( *(_QWORD *)(v186 + 32) )
                      break;
                  }
                  v94 = !_BitScanReverse((unsigned int *)&v185, v184);
                  v223 = v185;
                  if ( v94 )
                    goto LABEL_391;
                }
                if ( !v186 )
                {
LABEL_391:
                  if ( (*((_DWORD *)&v181->0 + 1) & 0x10000) == 0 )
                    KeBugCheckEx(0x162u, (ULONG_PTR)v181, v180, v182, 0LL);
                }
                else
                {
                  *(_BYTE *)(v186 + 32) |= 2u;
                  if ( *(__int64 *)(v186 + 32) < 0 )
                    KiAbEntryRemoveFromTree((PRTL_BALANCED_NODE)v186);
                  v224 = *(_DWORD *)(v186 + 88) & 0x1FFFF;
                  *(_DWORD *)(v186 + 88) &= 0xFFFE0000;
                  *(_BYTE *)(v186 + 25) &= ~1u;
                  *(_QWORD *)(v186 + 32) = 0LL;
                  v187 = (signed __int64)(v186 - (unsigned __int64)v181->LockEntries) / 96;
                  if ( v183 == 1 )
                    v181->AbEntrySummary |= 1 << v187;
                  else
                    _InterlockedOr8((volatile signed __int8 *)&v181->AbOrphanedEntrySummary, 1 << v187);
                }
                --v181->AbAllocationRegionCount;
                KiAbThreadRemoveBoosts((ULONG_PTR)v181);
                v94 = v181->SpecialApcDisable++ == -1;
                if ( v94 && ($C774EFD68449142D8271B1EC1EB7FB26 *)v181->ApcState.ApcListHead[0].Flink != &v181->152 )
                  KiCheckForKernelApcDelivery();
                goto LABEL_389;
              }
              ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)v180);
            }
            else
            {
              if ( !*(_BYTE *)(v41 + 57) )
              {
                if ( _InterlockedCompareExchange64((volatile signed __int64 *)v180, 0LL, 17LL) != 17 )
                  ExfReleasePushLockShared(v180);
                KeAbPostRelease(v180);
LABEL_389:
                KiLeaveGuardedRegionUnsafe(KeGetCurrentThread());
                goto LABEL_32;
              }
              ExReleaseSpinLockSharedFromDpcLevel((PEX_SPIN_LOCK)v180);
            }
            if ( KiIrqlFlags )
            {
              if ( (KiIrqlFlags & 1) != 0 )
              {
                v188 = KeGetCurrentIrql();
                if ( v188 <= 0xFu && v199 <= 0xFu && v188 >= 2u )
                {
                  v24 = (__int64)KeGetCurrentPrcb();
                  v189 = ~(unsigned __int16)(-1LL << (v199 + 1));
                  v23 = *(_QWORD *)(v24 + 33976);
                  v94 = (v189 & *(_DWORD *)(v23 + 20)) == 0;
                  *(_DWORD *)(v23 + 20) &= v189;
                  if ( v94 )
                    KiRemoveSystemWorkPriorityKick(v24);
                }
              }
            }
            __writecr8(v199);
            goto LABEL_32;
          }
          RtlpHpLfhSubsegmentIncBlockCounts(a1, v12, v208, v112, (__int64)&v218, 1, (__int64)&v205);
          v25 = (unsigned int)v12 >> 12;
LABEL_27:
          v40 = v12 + v26;
          if ( a4 < v21 )
          {
            v143 = v21 - a4;
            if ( v143 == 1 )
              v144 = 0x8000;
            else
              v144 = v143 & 0x3FFF;
            *(_WORD *)((WORD4(RtlpHpHeapGlobals) ^ *(unsigned __int16 *)(v12 + 40) ^ (unsigned __int64)v25) + v40 - 2) = v144;
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
            v222 = 0;
            v96 = KeGetCurrentThread();
            v213 = (ULONG_PTR)v96;
            if ( (unsigned int)MiGetSystemRegionType(v12 + 24) == 1 )
              v97 = (unsigned int)MmGetSessionIdEx(v96->ApcState.Process);
            else
              v97 = 0xFFFFFFFFLL;
            --v96->SpecialApcDisable;
            v114 = (ULONG_PTR)v96;
            v202 = ++v96->AbAllocationRegionCount;
            v115 = ((char)v96->AbEntrySummary | (char)v96->AbOrphanedEntrySummary) ^ 0x3F;
            v94 = !_BitScanReverse((unsigned int *)&v116, v115);
            v221 = v116;
            if ( v94 )
              goto LABEL_155;
            while ( 1 )
            {
              v117 = *(_QWORD *)(v114 + 800) + 96 * v116;
              v115 &= ~(1 << v116);
              if ( (*(_BYTE *)(v117 + 26) & 1) != 0
                && (*(_DWORD *)(v117 + 32) & 1) == 0
                && (*(_QWORD *)(v117 + 32) & 0x7FFFFFFFFFFFFFFCLL) == ((v12 + 24) & 0x7FFFFFFFFFFFFFFCLL)
                && *(_DWORD *)(v117 + 40) == (_DWORD)v97 )
              {
                *(_BYTE *)(v117 + 26) &= ~1u;
                if ( *(_QWORD *)(v117 + 32) )
                  break;
              }
              v94 = !_BitScanReverse((unsigned int *)&v116, v115);
              v221 = v116;
              if ( v94 )
                goto LABEL_155;
            }
            if ( !v117 )
            {
LABEL_155:
              if ( (*(_DWORD *)(v114 + 120) & 0x10000) == 0 )
                KeBugCheckEx(0x162u, v114, v12 + 24, v97, 0LL);
            }
            else
            {
              *(_BYTE *)(v117 + 32) |= 2u;
              if ( *(__int64 *)(v117 + 32) < 0 )
              {
                KiAbEntryRemoveFromTree((PRTL_BALANCED_NODE)v117);
                v114 = v213;
              }
              v222 = *(_DWORD *)(v117 + 88) & 0x1FFFF;
              *(_DWORD *)(v117 + 88) &= 0xFFFE0000;
              *(_BYTE *)(v117 + 25) &= ~1u;
              *(_QWORD *)(v117 + 32) = 0LL;
              v118 = 1 << ((v117 - *(_QWORD *)(v114 + 800)) / 96);
              if ( v202 == 1 )
                *(_BYTE *)(v114 + 792) |= v118;
              else
                _InterlockedOr8((volatile signed __int8 *)(v114 + 870), v118);
            }
            --*(_BYTE *)(v114 + 794);
            KiAbThreadRemoveBoosts(v114);
            v119 = v213;
            v94 = (*(_WORD *)(v213 + 486))++ == 0xFFFF;
            if ( v94 && *(_QWORD *)(v119 + 152) != v119 + 152 )
              KiCheckForKernelApcDelivery();
            KiLeaveGuardedRegionUnsafe(KeGetCurrentThread());
            goto LABEL_26;
          }
          ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(v12 + 24));
          if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && (v105 = KeGetCurrentIrql(), v105 <= 0xFu) )
          {
            v95 = v200;
            if ( v200 <= 0xFu && v105 >= 2u )
            {
              v106 = KeGetCurrentPrcb();
              v24 = (__int64)v106->SchedulerAssist;
              v107 = ~(unsigned __int16)(-1LL << (v200 + 1));
              v94 = (v107 & *(_DWORD *)(v24 + 20)) == 0;
              v23 = (unsigned int)v107 & *(_DWORD *)(v24 + 20);
              *(_DWORD *)(v24 + 20) = v23;
              if ( v94 )
              {
                KiRemoveSystemWorkPriorityKick(v106);
                __writecr8(v200);
                goto LABEL_26;
              }
            }
          }
          else
          {
            v95 = v200;
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
        v164 = RtlpHpAcquireLockShared(v8, *(unsigned __int8 *)(v6 + 57));
        v6 = a1;
        v199 = v164;
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
        v217 = 0;
        v123 = KeGetCurrentThread();
        if ( (unsigned int)MiGetSystemRegionType(v5 + 16) == 1 )
          v124 = MmGetSessionIdEx(v123->ApcState.Process);
        else
          v124 = -1;
        --v123->SpecialApcDisable;
        v147 = ++v123->AbAllocationRegionCount;
        v148 = ((char)v123->AbEntrySummary | (char)v123->AbOrphanedEntrySummary) ^ 0x3F;
        v94 = !_BitScanReverse((unsigned int *)&v149, v148);
        v232 = v149;
        if ( v94 )
          goto LABEL_244;
        while ( 1 )
        {
          v150 = (__int64)&v123->LockEntries[v149];
          v148 &= ~(1 << v149);
          if ( (*(_BYTE *)(v150 + 26) & 1) != 0
            && (*(_DWORD *)(v150 + 32) & 1) == 0
            && (*(_QWORD *)(v150 + 32) & 0x7FFFFFFFFFFFFFFCLL) == ((v5 + 16) & 0x7FFFFFFFFFFFFFFCLL)
            && *(_DWORD *)(v150 + 40) == v124 )
          {
            *(_BYTE *)(v150 + 26) &= ~1u;
            if ( *(_QWORD *)(v150 + 32) )
              break;
          }
          v94 = !_BitScanReverse((unsigned int *)&v149, v148);
          v232 = v149;
          if ( v94 )
            goto LABEL_244;
        }
        if ( !v150 )
        {
LABEL_244:
          if ( (*((_DWORD *)&v123->0 + 1) & 0x10000) == 0 )
            KeBugCheckEx(0x162u, (ULONG_PTR)v123, v5 + 16, v124, 0LL);
        }
        else
        {
          *(_BYTE *)(v150 + 32) |= 2u;
          if ( *(__int64 *)(v150 + 32) < 0 )
            KiAbEntryRemoveFromTree((PRTL_BALANCED_NODE)v150);
          v217 = 0;
          v217 = *(_DWORD *)(v150 + 88) & 0x1FFFF;
          *(_DWORD *)(v150 + 88) &= 0xFFFE0000;
          *(_BYTE *)(v150 + 25) &= ~1u;
          *(_QWORD *)(v150 + 32) = 0LL;
          v151 = 1 << ((signed __int64)(v150 - (unsigned __int64)v123->LockEntries) / 96);
          if ( v147 == 1 )
            v123->AbEntrySummary |= v151;
          else
            _InterlockedOr8((volatile signed __int8 *)&v123->AbOrphanedEntrySummary, v151);
        }
        --v123->AbAllocationRegionCount;
        KiAbThreadRemoveBoosts((ULONG_PTR)v123);
        v94 = v123->SpecialApcDisable++ == -1;
        if ( v94 && ($C774EFD68449142D8271B1EC1EB7FB26 *)v123->ApcState.ApcListHead[0].Flink != &v123->152 )
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
          if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && (v126 = KeGetCurrentIrql(), v126 <= 0xFu) )
          {
            v120 = v199;
            if ( v199 <= 0xFu && v126 >= 2u )
            {
              v127 = KeGetCurrentPrcb();
              v128 = v127->SchedulerAssist;
              v129 = ~(unsigned __int16)(-1LL << (v199 + 1));
              v94 = (v129 & v128[5]) == 0;
              v128[5] &= v129;
              if ( v94 )
                KiRemoveSystemWorkPriorityKick(v127);
            }
          }
          else
          {
            v120 = v199;
          }
          __writecr8(v120);
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
      v207 = 2;
      v199 = RtlpHpAcquireLockExclusive(v8, *(unsigned __int8 *)(a1 + 57));
      v121 = RtlpHpLfhSlotAddSubsegment(v5, Subsegment);
      v6 = a1;
      v214 = v121;
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
    v212 = 0;
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
        v212 = 1;
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
          v165 = **v54;
          if ( (__int64 **)(*v54)[1] != v54 || *(__int64 **)(v165 + 8) != v52 )
            goto LABEL_408;
          *v54 = (__int64 *)v165;
          *(_QWORD *)(v165 + 8) = v54;
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
          v59 = v199;
          if ( v199 <= 0xFu && v90 >= 2u )
          {
            v91 = KeGetCurrentPrcb();
            v92 = v91->SchedulerAssist;
            v93 = ~(unsigned __int16)(-1LL << (v199 + 1));
            v94 = (v93 & v92[5]) == 0;
            v92[5] &= v93;
            if ( v94 )
              KiRemoveSystemWorkPriorityKick(v91);
          }
        }
        else
        {
          v59 = v199;
        }
        __writecr8(v59);
      }
      else
      {
        if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)v8, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
          ExfTryToWakePushLock(v8);
        v216 = 0;
        v87 = KeGetCurrentThread();
        v88 = (unsigned int)MiGetSystemRegionType(v8) == 1
            ? (unsigned int)MmGetSessionIdEx(v87->ApcState.Process)
            : 0xFFFFFFFFLL;
        --v87->SpecialApcDisable;
        v98 = ++v87->AbAllocationRegionCount;
        v99 = ((char)v87->AbEntrySummary | (char)v87->AbOrphanedEntrySummary) ^ 0x3F;
        v100 = v8 & 0x7FFFFFFFFFFFFFFCLL;
        v94 = !_BitScanReverse((unsigned int *)&v101, v99);
        v231 = v101;
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
            v231 = v101;
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
          v216 = 0;
          v216 = *(_DWORD *)(v102 + 88) & 0x1FFFF;
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
    v207 = 2;
    v166 = RtlpHpAcquireLockExclusive(v8, *(unsigned __int8 *)(a1 + 57));
    v6 = a1;
    v199 = v166;
  }
  v60 = 3LL;
  v61 = 2 * (*(unsigned __int16 *)(v46 + 34) + (unsigned __int64)*(unsigned __int8 *)(v46 + 39));
  v236[1] = v46 + 48;
  v62 = *(unsigned __int8 *)(v5 + 1);
  v236[0] = v61;
  v211 = (unsigned int)v46 >> 12;
  LODWORD(v213) = *((unsigned __int8 *)RtlpSearchWidth + v62);
  v63 = (unsigned __int16)(WORD4(RtlpHpHeapGlobals) ^ ((unsigned int)v46 >> 12) ^ *(_WORD *)(v46 + 40));
  v64 = (DWORD2(RtlpHpHeapGlobals) ^ ((unsigned int)v46 >> 12) ^ *(_DWORD *)(v46 + 40)) >> 16;
  v65 = (DWORD2(RtlpHpHeapGlobals) ^ ((unsigned int)v46 >> 12) ^ *(_DWORD *)(v46 + 40)) >> 16;
  v66 = v65;
  v230 = v63;
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
  v69 = RtlpLfhBlockBitmapAllocate((unsigned int)v236, *(unsigned __int16 *)(v46 + 36), v68, v213, v60);
  v210 = v69;
  *(_WORD *)(v46 + 36) = v69;
  v70 = v66 + v69 * v63;
  if ( *(_BYTE *)(v46 + 45) <= 1u )
    goto LABEL_89;
  v71 = *(_BYTE *)(v46 + 44);
  v24 = 0LL;
  v72 = v46 + *(unsigned __int16 *)(v46 + 46);
  v23 = v70 >> v71;
  v211 = WORD4(RtlpHpHeapGlobals) ^ (unsigned __int16)v211 ^ *(unsigned __int16 *)(v46 + 40);
  v225 = 0;
  v206[0] = -1;
  v73 = ((v70 + v211 - 1) >> v71) - (unsigned int)v23 + 1;
  v201 = -1;
  v74 = 2 * v23;
  v75 = (signed __int16 *)(2 * v23 + v72);
  _m_prefetchw(v75);
  v209 = 0LL;
  v76 = &v75[v73];
  v207 = 0;
  v203 = -1;
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
          v23 = v207;
          v80 = v203;
          LODWORD(v81) = v209;
          goto LABEL_84;
        }
      }
      if ( (_DWORD)v24 )
        break;
      LODWORD(v213) = 1;
      v122 = RtlpHpAcquireLockExclusive(v46 + 24, *(unsigned __int8 *)(a1 + 57));
      v24 = 1LL;
      v201 = v122;
    }
    v80 = v203;
    if ( v78 )
    {
      v23 = v207 + 1;
      v81 = v74 >> 1;
      ++v207;
      v209 = v74 >> 1;
      if ( v203 == -1 )
      {
        v80 = v74 >> 1;
        v203 = v80;
      }
    }
    else
    {
      LODWORD(v81) = v209;
      v23 = --v207;
    }
    *v75 = v78 + 1;
LABEL_84:
    ++v75;
    v74 += 2LL;
  }
  while ( (unsigned __int64)v75 < v77 );
  v63 = v230;
  v82 = v210;
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
      if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && (v152 = KeGetCurrentIrql(), v152 <= 0xFu) )
      {
        v132 = v201;
        if ( v201 <= 0xFu && v152 >= 2u )
        {
          v24 = (__int64)KeGetCurrentPrcb();
          v153 = ~(unsigned __int16)(-1LL << (v201 + 1));
          v23 = *(_QWORD *)(v24 + 33976);
          v94 = (v153 & *(_DWORD *)(v23 + 20)) == 0;
          *(_DWORD *)(v23 + 20) &= v153;
          if ( v94 )
          {
            KiRemoveSystemWorkPriorityKick(v24);
            __writecr8(v201);
            goto LABEL_89;
          }
        }
      }
      else
      {
        v132 = v201;
      }
      __writecr8(v132);
      goto LABEL_89;
    }
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)(v46 + 24), 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock(v46 + 24);
    v229 = 0;
    v145 = KeGetCurrentThread();
    if ( (unsigned int)MiGetSystemRegionType(v46 + 24) == 1 )
      v146 = (unsigned int)MmGetSessionIdEx(v145->ApcState.Process);
    else
      v146 = 0xFFFFFFFFLL;
    --v145->SpecialApcDisable;
    v159 = ++v145->AbAllocationRegionCount;
    v160 = ((char)v145->AbEntrySummary | (char)v145->AbOrphanedEntrySummary) ^ 0x3F;
    v94 = !_BitScanReverse((unsigned int *)&v161, v160);
    v228 = v161;
    if ( v94 )
      goto LABEL_282;
    while ( 1 )
    {
      v162 = (__int64)&v145->LockEntries[v161];
      v160 &= ~(1 << v161);
      if ( (*(_BYTE *)(v162 + 26) & 1) != 0
        && (*(_DWORD *)(v162 + 32) & 1) == 0
        && (*(_QWORD *)(v162 + 32) & 0x7FFFFFFFFFFFFFFCLL) == ((v46 + 24) & 0x7FFFFFFFFFFFFFFCLL)
        && *(_DWORD *)(v162 + 40) == (_DWORD)v146 )
      {
        *(_BYTE *)(v162 + 26) &= ~1u;
        if ( *(_QWORD *)(v162 + 32) )
          break;
      }
      v94 = !_BitScanReverse((unsigned int *)&v161, v160);
      v228 = v161;
      if ( v94 )
        goto LABEL_282;
    }
    if ( !v162 )
    {
LABEL_282:
      if ( (*((_DWORD *)&v145->0 + 1) & 0x10000) == 0 )
        KeBugCheckEx(0x162u, (ULONG_PTR)v145, v46 + 24, v146, 0LL);
    }
    else
    {
      *(_BYTE *)(v162 + 32) |= 2u;
      if ( *(__int64 *)(v162 + 32) < 0 )
        KiAbEntryRemoveFromTree((PRTL_BALANCED_NODE)v162);
      v229 = *(_DWORD *)(v162 + 88) & 0x1FFFF;
      *(_DWORD *)(v162 + 88) &= 0xFFFE0000;
      *(_BYTE *)(v162 + 25) &= ~1u;
      *(_QWORD *)(v162 + 32) = 0LL;
      v163 = 1 << ((signed __int64)(v162 - (unsigned __int64)v145->LockEntries) / 96);
      if ( v159 == 1 )
        v145->AbEntrySummary |= v163;
      else
        _InterlockedOr8((volatile signed __int8 *)&v145->AbOrphanedEntrySummary, v163);
    }
    --v145->AbAllocationRegionCount;
    KiAbThreadRemoveBoosts((ULONG_PTR)v145);
    v94 = v145->SpecialApcDisable++ == -1;
    if ( v94 && ($C774EFD68449142D8271B1EC1EB7FB26 *)v145->ApcState.ApcListHead[0].Flink != &v145->152 )
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
    v133 = v81 - v80;
    v134 = *(_BYTE *)(v46 + 44);
    v135 = (int (__fastcall *)(__int64, __int64, _QWORD, __int64))(v83 ^ RtlpHpHeapGlobals ^ *(_QWORD *)(v83 + 24));
    v136 = v80 << v134;
    v225 = v133 + 1;
    v137 = (v133 + 1) << v134;
    v138 = *(_QWORD *)v83;
    v206[0] = v201;
    v204 = v136;
    if ( v135(v138, v46 + v136, v137, v24) >= 0 )
    {
      RtlpHpLfhSubsegmentIncBlockCounts(a1, v46, v204, v137, (__int64)&v225, 1, (__int64)v206);
      goto LABEL_89;
    }
    v84 = a1;
    RtlpHpLfhSubsegmentDecBlockCounts(a1, v46, v70, v211);
    if ( *(_BYTE *)(a1 + 57) )
    {
      ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(v46 + 24));
      if ( KiIrqlFlags )
      {
        if ( (KiIrqlFlags & 1) != 0 )
        {
          v197 = KeGetCurrentIrql();
          if ( v197 <= 0xFu && v201 <= 0xFu && v197 >= 2u )
          {
            v24 = (__int64)KeGetCurrentPrcb();
            v198 = ~(unsigned __int16)(-1LL << (v201 + 1));
            v23 = *(_QWORD *)(v24 + 33976);
            v94 = (v198 & *(_DWORD *)(v23 + 20)) == 0;
            *(_DWORD *)(v23 + 20) &= v198;
            if ( v94 )
              KiRemoveSystemWorkPriorityKick(v24);
          }
        }
      }
      __writecr8(v201);
      v40 = 0LL;
    }
    else
    {
      if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)(v46 + 24), 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
        ExfTryToWakePushLock(v46 + 24);
      v40 = 0LL;
      v227 = 0;
      v190 = KeGetCurrentThread();
      if ( (unsigned int)MiGetSystemRegionType(v46 + 24) == 1 )
        v191 = MmGetSessionIdEx(v190->ApcState.Process);
      else
        v191 = -1;
      --v190->SpecialApcDisable;
      v192 = ++v190->AbAllocationRegionCount;
      v193 = ((char)v190->AbEntrySummary | (char)v190->AbOrphanedEntrySummary) ^ 0x3F;
      v94 = !_BitScanReverse((unsigned int *)&v194, v193);
      v226 = v194;
      if ( v94 )
      {
LABEL_433:
        if ( (*((_DWORD *)&v190->0 + 1) & 0x10000) == 0 )
          KeBugCheckEx(0x162u, (ULONG_PTR)v190, v46 + 24, v191, 0LL);
      }
      else
      {
        while ( 1 )
        {
          v195 = (__int64)&v190->LockEntries[v194];
          v193 &= ~(1 << v194);
          if ( (*(_BYTE *)(v195 + 26) & 1) != 0
            && (*(_DWORD *)(v195 + 32) & 1) == 0
            && (*(_QWORD *)(v195 + 32) & 0x7FFFFFFFFFFFFFFCLL) == ((v46 + 24) & 0x7FFFFFFFFFFFFFFCLL)
            && *(_DWORD *)(v195 + 40) == v191 )
          {
            *(_BYTE *)(v195 + 26) &= ~1u;
            if ( *(_QWORD *)(v195 + 32) )
              break;
          }
          v94 = !_BitScanReverse((unsigned int *)&v194, v193);
          v226 = v194;
          if ( v94 )
            goto LABEL_432;
        }
        if ( !v195 )
        {
LABEL_432:
          v40 = 0LL;
          goto LABEL_433;
        }
        *(_BYTE *)(v195 + 32) |= 2u;
        if ( *(__int64 *)(v195 + 32) < 0 )
          KiAbEntryRemoveFromTree((PRTL_BALANCED_NODE)v195);
        v227 = *(_DWORD *)(v195 + 88) & 0x1FFFF;
        *(_DWORD *)(v195 + 88) &= 0xFFFE0000;
        *(_BYTE *)(v195 + 25) &= ~1u;
        *(_QWORD *)(v195 + 32) = 0LL;
        v196 = 1 << ((char)(v195 - LOBYTE(v190->LockEntries)) / 96);
        if ( v192 == 1 )
          v190->AbEntrySummary |= v196;
        else
          _InterlockedOr8((volatile signed __int8 *)&v190->AbOrphanedEntrySummary, v196);
        v40 = 0LL;
      }
      --v190->AbAllocationRegionCount;
      KiAbThreadRemoveBoosts((ULONG_PTR)v190);
      v94 = v190->SpecialApcDisable++ == -1;
      if ( v94 && ($C774EFD68449142D8271B1EC1EB7FB26 *)v190->ApcState.ApcListHead[0].Flink != &v190->152 )
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
  Subsegment = v214;
LABEL_33:
  if ( v212 )
    RtlpHpLfhBucketUpdateAffinityMapping(a1, a2, v23, v24);
  if ( Subsegment )
    RtlpHpLfhBucketAddSubsegment(a1, a2, Subsegment, a5);
  return v40;
}
