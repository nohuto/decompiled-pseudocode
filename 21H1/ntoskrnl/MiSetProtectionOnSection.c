/*
 * XREFs of MiSetProtectionOnSection @ 0x14021B170
 * Callers:
 *     MiAllocateVirtualMemory @ 0x1405ED060 (MiAllocateVirtualMemory.c)
 *     MmProtectVirtualMemory @ 0x14062CEF0 (MmProtectVirtualMemory.c)
 *     MiMarkSharedImageCfgBits @ 0x14063D3A8 (MiMarkSharedImageCfgBits.c)
 *     MiCommitPagefileBackedSection @ 0x140640EBC (MiCommitPagefileBackedSection.c)
 *     MiUnsecureVirtualMemoryAgainstWrites @ 0x1406C9AAC (MiUnsecureVirtualMemoryAgainstWrites.c)
 * Callees:
 *     MiGetProtoPteAddress @ 0x140207D20 (MiGetProtoPteAddress.c)
 *     MmAccessFault @ 0x14020C560 (MmAccessFault.c)
 *     MiFastLockLeafPageTable @ 0x14020DBA0 (MiFastLockLeafPageTable.c)
 *     MiUnlockWorkingSetShared @ 0x14020EC60 (MiUnlockWorkingSetShared.c)
 *     MiLockWorkingSetShared @ 0x140219640 (MiLockWorkingSetShared.c)
 *     MiMakeProtectionMask @ 0x14021A3B0 (MiMakeProtectionMask.c)
 *     MiChargeCommit @ 0x14021A460 (MiChargeCommit.c)
 *     MiVadPureReserve @ 0x14021AF70 (MiVadPureReserve.c)
 *     MiSanitizePfnProtection @ 0x14021C790 (MiSanitizePfnProtection.c)
 *     MiRevertValidPte @ 0x14021C800 (MiRevertValidPte.c)
 *     MiInsertTbFlushEntry @ 0x14021E270 (MiInsertTbFlushEntry.c)
 *     MiQueryAddressState @ 0x14021E510 (MiQueryAddressState.c)
 *     MiFreeWsleList @ 0x140220280 (MiFreeWsleList.c)
 *     MiSwizzleInvalidPte @ 0x1402233C0 (MiSwizzleInvalidPte.c)
 *     IS_PTE_NOT_DEMAND_ZERO @ 0x14022956C (IS_PTE_NOT_DEMAND_ZERO.c)
 *     KeYieldProcessorEx @ 0x140244550 (KeYieldProcessorEx.c)
 *     ExAcquirePushLockExclusiveEx @ 0x1402609E0 (ExAcquirePushLockExclusiveEx.c)
 *     KiLeaveGuardedRegionUnsafe @ 0x140260DE0 (KiLeaveGuardedRegionUnsafe.c)
 *     KeAbPostRelease @ 0x140263C10 (KeAbPostRelease.c)
 *     MiReturnCommit @ 0x14027D3E0 (MiReturnCommit.c)
 *     MiReturnFullProcessCharges @ 0x14027D4B0 (MiReturnFullProcessCharges.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x140291580 (MI_READ_PTE_LOCK_FREE.c)
 *     MiPteInShadowRange @ 0x140291700 (MiPteInShadowRange.c)
 *     MiCopyOnWrite @ 0x140291750 (MiCopyOnWrite.c)
 *     MiFlushTbList @ 0x140293410 (MiFlushTbList.c)
 *     MiGetUsedPtesHandle @ 0x14029EEF0 (MiGetUsedPtesHandle.c)
 *     MiReleasePageFileSpace @ 0x1402AB620 (MiReleasePageFileSpace.c)
 *     MiTryDeleteTransitionPte @ 0x1402AC860 (MiTryDeleteTransitionPte.c)
 *     MiSetProtectionOnTransitionPte @ 0x1402ACC58 (MiSetProtectionOnTransitionPte.c)
 *     MiLockLowestValidPageTable @ 0x1402ACFF0 (MiLockLowestValidPageTable.c)
 *     MiComputePageCommitment @ 0x1402AD4B0 (MiComputePageCommitment.c)
 *     MiGetWsleContents @ 0x1402AFD20 (MiGetWsleContents.c)
 *     MmIsAddressValidEx @ 0x1402B2510 (MmIsAddressValidEx.c)
 *     MiUnlockPageTableInternal @ 0x1402DB860 (MiUnlockPageTableInternal.c)
 *     KeShouldYieldProcessor @ 0x1402EE280 (KeShouldYieldProcessor.c)
 *     ExpWaitForSpinLockSharedAndAcquire @ 0x1402EF840 (ExpWaitForSpinLockSharedAndAcquire.c)
 *     MiWritePteShadow @ 0x1402F2F20 (MiWritePteShadow.c)
 *     MiPteHasShadow @ 0x1402F2F80 (MiPteHasShadow.c)
 *     MiLocateCloneAddress @ 0x1402FD5A4 (MiLocateCloneAddress.c)
 *     MiUnlockVa @ 0x14030B15C (MiUnlockVa.c)
 *     MiMakeProtoLeafValid @ 0x14030BB74 (MiMakeProtoLeafValid.c)
 *     MiDecreaseUsedPtesCount @ 0x140311760 (MiDecreaseUsedPtesCount.c)
 *     MiCountSharedPages @ 0x1403420A0 (MiCountSharedPages.c)
 *     MiPteNeedsCommitCharge @ 0x1403425D8 (MiPteNeedsCommitCharge.c)
 *     MiIsPrototypePteVadLookup @ 0x140345200 (MiIsPrototypePteVadLookup.c)
 *     ExfTryToWakePushLock @ 0x14035A680 (ExfTryToWakePushLock.c)
 *     __security_check_cookie @ 0x1403CC020 (__security_check_cookie.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403EC9E4 (KiRemoveSystemWorkPriorityKick.c)
 *     MI_PFN_IS_PROTO @ 0x1403ED8B8 (MI_PFN_IS_PROTO.c)
 *     KeBugCheckEx @ 0x1403F5E40 (KeBugCheckEx.c)
 *     MiFlushAllFilesystemPages @ 0x14052FAA8 (MiFlushAllFilesystemPages.c)
 *     MiCopyOnWriteCheckConditions @ 0x140556408 (MiCopyOnWriteCheckConditions.c)
 *     ExpAcquireSpinLockSharedAtDpcLevelInstrumented @ 0x1405AFFD4 (ExpAcquireSpinLockSharedAtDpcLevelInstrumented.c)
 *     MiChargeFullProcessCommitment @ 0x1405EDAE0 (MiChargeFullProcessCommitment.c)
 *     MiCommitPageTablesForVad @ 0x1405EDBB0 (MiCommitPageTablesForVad.c)
 *     MiReturnFullProcessCommitment @ 0x14062FA68 (MiReturnFullProcessCommitment.c)
 *     MiImageVadHotPatchEligible @ 0x1406C2E50 (MiImageVadHotPatchEligible.c)
 *     MiGetImageHotPatchTableAddress @ 0x1408C5878 (MiGetImageHotPatchTableAddress.c)
 */

__int64 __fastcall MiSetProtectionOnSection(
        __int64 a1,
        __int64 a2,
        unsigned __int64 a3,
        unsigned __int64 a4,
        unsigned int a5,
        int a6,
        _DWORD *a7,
        __int64 a8)
{
  __int64 v10; // r14
  char v11; // al
  unsigned int ProtectionMask; // eax
  __int64 v13; // r8
  unsigned __int64 v14; // r9
  unsigned int v15; // ecx
  __int64 result; // rax
  unsigned int v17; // edx
  int v18; // eax
  __int64 v19; // rdi
  __int64 v20; // rbx
  __int64 v21; // rdx
  __int64 v22; // r13
  __int64 v23; // rax
  __int64 v24; // rax
  unsigned __int8 v25; // bl
  __int64 v26; // rax
  __int64 v27; // rax
  unsigned __int64 v28; // rax
  volatile signed __int64 *v29; // rbx
  int v30; // r14d
  __int64 v31; // rbx
  int v32; // ebx
  __int64 v33; // rdx
  unsigned __int64 v34; // rdx
  unsigned __int8 v35; // al
  unsigned __int64 v36; // rbx
  __int64 v37; // rdi
  _DWORD *v38; // r9
  LONG *v39; // rbx
  unsigned __int8 CurrentIrql; // r14
  _DWORD *SchedulerAssist; // r9
  struct _KPRCB *CurrentPrcb; // rdi
  _DWORD *v43; // rcx
  int v44; // eax
  signed __int32 v45; // ett
  _DWORD *v46; // rcx
  int v47; // eax
  __int64 Flink; // rdx
  __int64 v49; // r15
  ULONG_PTR v50; // r12
  unsigned int v51; // r14d
  unsigned __int64 v52; // r11
  unsigned __int64 v53; // r8
  unsigned __int64 v54; // r9
  LONG *v55; // rax
  unsigned __int64 v56; // rdi
  _KPROCESS *Process; // r13
  unsigned __int64 v58; // r15
  int v59; // r12d
  int v60; // eax
  ULONG_PTR v61; // rdi
  __int64 valid; // rax
  int v63; // eax
  ULONG_PTR v64; // rdi
  unsigned __int64 v65; // rbx
  unsigned __int64 v66; // r13
  __int64 v67; // rax
  unsigned __int64 v68; // r15
  __int64 v69; // rax
  __int64 v70; // r15
  unsigned __int64 v71; // rdi
  __int64 v72; // rdx
  __int64 v73; // r8
  __int64 v74; // r15
  __int64 v75; // r12
  __int64 CloneAddress; // rbx
  __int64 v77; // rcx
  __int64 v78; // r9
  __int64 v79; // rcx
  __int64 v80; // r9
  __int64 v81; // r10
  unsigned __int64 v82; // rbx
  unsigned __int64 v83; // rdx
  struct _LIST_ENTRY *v84; // r8
  __int64 v85; // rax
  __int64 v86; // r8
  __int64 v87; // rdx
  unsigned __int64 v88; // rax
  unsigned __int64 v89; // r8
  _KPROCESS *v90; // rcx
  unsigned int v91; // eax
  __int64 v92; // rcx
  __int64 v93; // rdx
  __int64 v94; // r10
  struct _LIST_ENTRY *v95; // r8
  __int64 v96; // rax
  __int64 v97; // r8
  signed __int64 v98; // rax
  signed __int64 v99; // rtt
  __int64 v100; // r9
  __int64 v101; // rax
  ULONG_PTR v102; // r12
  ULONG_PTR v103; // rdi
  ULONG_PTR v104; // r15
  char v105; // bl
  __int64 v106; // r14
  _DWORD *v107; // rsi
  __int64 v108; // rcx
  unsigned __int64 v109; // rax
  __int64 v110; // rdx
  __int64 v111; // r8
  __int64 v112; // rdi
  __int64 v113; // r9
  unsigned __int64 v114; // rbx
  char v115; // al
  unsigned __int64 v116; // rdi
  __int64 v117; // rbx
  __int64 v118; // rdx
  __int64 v119; // rcx
  bool v120; // zf
  int v121; // eax
  char v122; // r15
  ULONG_PTR UsedPtesHandle; // rax
  __int64 v124; // r13
  unsigned __int64 v125; // rbx
  unsigned int v126; // edi
  __int64 v127; // rdx
  __int64 v128; // rcx
  struct _LIST_ENTRY *v129; // rax
  __int64 v130; // rax
  __int64 v131; // rdx
  __int64 v132; // rcx
  struct _LIST_ENTRY *v133; // rdx
  __int64 v134; // rax
  __int64 v135; // rdx
  __int64 v136; // rbx
  __int64 v137; // r9
  char v138; // al
  __int64 v139; // rcx
  unsigned __int64 v140; // rax
  __int64 v141; // rdx
  __int64 v142; // rcx
  unsigned __int64 v143; // rdx
  unsigned __int64 v144; // rsi
  unsigned __int64 v145; // rax
  __int64 v146; // r14
  __int64 v147; // rbx
  __int64 v148; // r8
  __int64 v149; // rdx
  unsigned __int64 v150; // r8
  unsigned int v152; // [rsp+58h] [rbp-A8h] BYREF
  ULONG_PTR BugCheckParameter1; // [rsp+60h] [rbp-A0h]
  __int64 v154; // [rsp+68h] [rbp-98h]
  unsigned __int64 v155; // [rsp+70h] [rbp-90h]
  int v156; // [rsp+78h] [rbp-88h]
  __int64 v157; // [rsp+80h] [rbp-80h]
  __int64 v158; // [rsp+88h] [rbp-78h] BYREF
  int v159; // [rsp+90h] [rbp-70h]
  unsigned int v160; // [rsp+94h] [rbp-6Ch]
  unsigned __int64 v161; // [rsp+98h] [rbp-68h] BYREF
  __int64 v162; // [rsp+A0h] [rbp-60h]
  unsigned int v163; // [rsp+A8h] [rbp-58h]
  __int16 v164; // [rsp+ACh] [rbp-54h] BYREF
  __int64 v165; // [rsp+B0h] [rbp-50h]
  unsigned __int64 v166; // [rsp+B8h] [rbp-48h]
  int v167; // [rsp+C0h] [rbp-40h]
  unsigned __int64 v168; // [rsp+C8h] [rbp-38h]
  __int64 v169; // [rsp+D0h] [rbp-30h]
  int v170; // [rsp+D8h] [rbp-28h] BYREF
  int v171; // [rsp+DCh] [rbp-24h] BYREF
  int v172; // [rsp+E0h] [rbp-20h] BYREF
  unsigned int v173; // [rsp+E4h] [rbp-1Ch]
  int v174; // [rsp+E8h] [rbp-18h] BYREF
  struct _KTHREAD *CurrentThread; // [rsp+F0h] [rbp-10h]
  unsigned __int64 v176; // [rsp+F8h] [rbp-8h]
  __int64 v177; // [rsp+100h] [rbp+0h] BYREF
  unsigned __int64 v178; // [rsp+108h] [rbp+8h] BYREF
  __int64 v179; // [rsp+110h] [rbp+10h]
  __int64 v180; // [rsp+118h] [rbp+18h] BYREF
  __int64 v181; // [rsp+120h] [rbp+20h] BYREF
  __int64 v182; // [rsp+128h] [rbp+28h]
  int v183; // [rsp+130h] [rbp+30h] BYREF
  __int16 v184; // [rsp+134h] [rbp+34h]
  __int16 v185; // [rsp+136h] [rbp+36h]
  __int64 v186; // [rsp+138h] [rbp+38h]
  unsigned __int64 v187; // [rsp+140h] [rbp+40h]
  unsigned __int64 v188; // [rsp+148h] [rbp+48h]
  __int128 v189; // [rsp+150h] [rbp+50h]
  __int128 v190; // [rsp+160h] [rbp+60h]
  __int128 v191; // [rsp+170h] [rbp+70h]
  __int128 v192; // [rsp+180h] [rbp+80h]
  __int128 v193; // [rsp+190h] [rbp+90h]
  __int128 v194; // [rsp+1A0h] [rbp+A0h]
  __int128 v195; // [rsp+1B0h] [rbp+B0h]
  __int128 v196; // [rsp+1C0h] [rbp+C0h]
  __int128 v197; // [rsp+1D0h] [rbp+D0h]
  __int64 v198; // [rsp+1E0h] [rbp+E0h]
  int v199; // [rsp+1F0h] [rbp+F0h] BYREF
  __int16 v200; // [rsp+1F4h] [rbp+F4h]
  __int16 v201; // [rsp+1F6h] [rbp+F6h]
  __int64 v202; // [rsp+1F8h] [rbp+F8h]
  unsigned __int64 v203; // [rsp+200h] [rbp+100h]
  unsigned __int64 v204; // [rsp+208h] [rbp+108h]
  __int128 v205; // [rsp+210h] [rbp+110h]
  __int128 v206; // [rsp+220h] [rbp+120h]
  __int128 v207; // [rsp+230h] [rbp+130h]
  __int128 v208; // [rsp+240h] [rbp+140h]
  __int128 v209; // [rsp+250h] [rbp+150h]
  __int128 v210; // [rsp+260h] [rbp+160h]
  __int128 v211; // [rsp+270h] [rbp+170h]
  __int128 v212; // [rsp+280h] [rbp+180h]
  __int128 v213; // [rsp+290h] [rbp+190h]
  __int64 v214; // [rsp+2A0h] [rbp+1A0h]

  v182 = a8;
  v154 = a2;
  v185 = 0;
  v198 = 0LL;
  v10 = a2;
  v201 = 0;
  v214 = 0LL;
  v11 = *(_DWORD *)(a2 + 48) & 0x70;
  v170 = 0;
  v180 = 0LL;
  v177 = 0LL;
  v152 = 0;
  v171 = 0;
  v158 = 0LL;
  v164 = 0;
  v189 = 0LL;
  v190 = 0LL;
  v191 = 0LL;
  v192 = 0LL;
  v193 = 0LL;
  v194 = 0LL;
  v195 = 0LL;
  v196 = 0LL;
  v197 = 0LL;
  v205 = 0LL;
  v206 = 0LL;
  v207 = 0LL;
  v208 = 0LL;
  v209 = 0LL;
  v210 = 0LL;
  v211 = 0LL;
  v212 = 0LL;
  v213 = 0LL;
  if ( v11 == 32 && (unsigned int)MiImageVadHotPatchEligible(a2) && MiGetImageHotPatchTableAddress(v10) <= a4 )
    return 3221225541LL;
  ProtectionMask = MiMakeProtectionMask(a5);
  v163 = ProtectionMask;
  v15 = ProtectionMask;
  if ( ProtectionMask == -1 )
    return 3221225541LL;
  v17 = ProtectionMask & 0xFFFFFFFE;
  v18 = ProtectionMask & 5;
  v168 = v14;
  v176 = v14;
  if ( v18 != 5 )
    v17 = v15;
  v202 = 20LL;
  v160 = v17;
  v19 = v14;
  v199 = 1;
  v200 = v14;
  v203 = v14;
  v204 = v14;
  v156 = v18;
  v20 = ((a3 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  BugCheckParameter1 = v20;
  v21 = ((a4 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  v167 = v14;
  v22 = v13 + 1664;
  CurrentThread = KeGetCurrentThread();
  v23 = *(_QWORD *)(v13 + 1680);
  v186 = 20LL;
  v183 = 1;
  v184 = 4;
  v187 = v14;
  v188 = v14;
  v166 = v21;
  v161 = v14;
  v162 = v13 + 1664;
  if ( *(_QWORD *)(v23 + 360) != v14 )
  {
    v24 = *(unsigned int *)(v10 + 52);
    LODWORD(v24) = v24 & 0x7FFFFFFF;
    if ( v24 | ((unsigned __int64)*(unsigned __int8 *)(v10 + 34) << 31) )
    {
      v25 = MiLockWorkingSetShared(v13 + 1664);
      MiComputePageCommitment(a3, a4, v10, v25, 0, (__int64)&v161);
      MiUnlockWorkingSetShared(v22, v25);
      if ( v161 )
      {
        result = MiChargeFullProcessCommitment(a1, v161);
        if ( (int)result < 0 )
          return result;
      }
      v21 = v166;
      v20 = BugCheckParameter1;
    }
  }
  v169 = *(_QWORD *)(qword_140C4E588 + 8LL * *(unsigned __int16 *)(v22 + 174));
  if ( v156 != 5 )
    goto LABEL_21;
  v26 = MiCountSharedPages(v10, v20, v21);
  v19 = v26;
  if ( a6 == 1 )
  {
    v27 = ((__int64)(v166 - v20) >> 3) - v26;
    v120 = v27 == -1;
    v28 = v27 + 1;
    v168 = v28;
    if ( !v120 && !(unsigned int)MiChargeCommit(v169, v28, 0) )
    {
      if ( v161 )
        MiReturnFullProcessCommitment(a1, v161);
      return 3221225773LL;
    }
    v19 = 0LL;
    goto LABEL_21;
  }
  if ( !v26 || (v32 = MiChargeFullProcessCommitment(a1, v26), v32 >= 0) )
  {
LABEL_21:
    if ( (unsigned int)MiVadPureReserve(v10) == 1 )
    {
      v167 = 1;
      --CurrentThread->SpecialApcDisable;
      v29 = (volatile signed __int64 *)(a1 + 1232);
      ExAcquirePushLockExclusiveEx(a1 + 1232, 0LL);
      v30 = MiCommitPageTablesForVad(v10, a3, a4);
      if ( v30 < 0 )
      {
        if ( (_InterlockedExchangeAdd64(v29, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
          ExfTryToWakePushLock(v29);
        KeAbPostRelease((ULONG_PTR)v29);
        KiLeaveGuardedRegionUnsafe(CurrentThread);
        if ( v168 )
        {
          MiReturnCommit(v169, v19);
        }
        else if ( v19 )
        {
          v31 = a1;
          MiReturnFullProcessCommitment(a1, v19);
          goto LABEL_28;
        }
        v31 = a1;
LABEL_28:
        if ( v161 )
          MiReturnFullProcessCommitment(v31, v161);
        return (unsigned int)v30;
      }
      v10 = v154;
    }
    if ( v19 )
    {
      v33 = *(unsigned int *)(v10 + 52);
      LODWORD(v33) = v33 & 0x7FFFFFFF;
      v34 = v19 + (((unsigned __int64)*(unsigned __int8 *)(v10 + 34) << 31) | v33);
      *(_DWORD *)(v10 + 52) ^= (*(_DWORD *)(v10 + 52) ^ v34) & 0x7FFFFFFF;
      *(_BYTE *)(v10 + 34) = v34 >> 31;
    }
    v35 = *(_BYTE *)(v22 + 184) & 7;
    v159 = 1;
    v165 = 0LL;
    v36 = 0LL;
    v155 = 0LL;
    if ( v35 < 6u )
    {
      v39 = &dword_140C4F6C0;
      if ( v35 != 2 )
        v39 = (LONG *)(v22 + 192);
      CurrentIrql = KeGetCurrentIrql();
      __writecr8(2uLL);
      if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu )
      {
        SchedulerAssist = KeGetCurrentPrcb()->SchedulerAssist;
        SchedulerAssist[5] |= (-1 << (CurrentIrql + 1)) & 4;
      }
      if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
      {
        ExpAcquireSpinLockSharedAtDpcLevelInstrumented(v39, CurrentIrql);
      }
      else
      {
        CurrentPrcb = KeGetCurrentPrcb();
        v43 = CurrentPrcb->SchedulerAssist;
        if ( v43 )
        {
          if ( CurrentPrcb->NestingLevel <= 1u )
          {
            v44 = v43[6];
            v43[6] = v44 + 1;
            if ( v44 == -1 )
              KiRemoveSystemWorkPriorityKick(CurrentPrcb);
          }
        }
        _m_prefetchw(v39);
        v45 = *v39 & 0x7FFFFFFF;
        if ( v45 != _InterlockedCompareExchange(v39, v45 + 1, v45) )
        {
          v46 = CurrentPrcb->SchedulerAssist;
          if ( v46 )
          {
            if ( CurrentPrcb->NestingLevel <= 1u )
            {
              v47 = v46[6] - 1;
              v46[6] = v47;
              if ( !v47 )
                KiRemoveSystemWorkPriorityKick(CurrentPrcb);
            }
          }
          ExpWaitForSpinLockSharedAndAcquire(v39, CurrentIrql);
        }
      }
      if ( v39[1] )
        _InterlockedExchange(v39 + 1, 0);
      v36 = v155;
      LOBYTE(v37) = CurrentIrql;
      v157 = CurrentIrql;
    }
    else
    {
      v37 = KeGetCurrentIrql();
      v157 = v37;
      __writecr8(2uLL);
      if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && (unsigned __int8)v37 <= 0xFu )
      {
        v38 = KeGetCurrentPrcb()->SchedulerAssist;
        v38[5] |= ~((unsigned __int8)(1LL << ((unsigned __int8)v37 + 1)) - 1) & 4;
      }
    }
    MiQueryAddressState(
      a3,
      a3,
      (unsigned __int8)v37,
      v154,
      0LL,
      (__int64)&v152,
      (__int64)&v171,
      (__int64)&v164,
      (__int64)&v180,
      (__int64)&v170);
    v49 = v154;
    *a7 = MmProtectToValue[v152];
    v50 = BugCheckParameter1;
    v51 = (*(_DWORD *)(v49 + 48) >> 12) & 0x3F;
    v173 = v51;
    while ( 1 )
    {
      while ( 1 )
      {
        while ( 1 )
        {
          if ( v50 > v166 )
          {
            MiFlushTbList(&v199);
            if ( v36 )
              MiUnlockPageTableInternal(v22, v36);
            MiUnlockWorkingSetShared(v22, v37);
            if ( v167 == 1 )
            {
              if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)(a1 + 1232), 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
                ExfTryToWakePushLock(a1 + 1232);
              KeAbPostRelease(a1 + 1232);
              KiLeaveGuardedRegionUnsafe(CurrentThread);
            }
            v144 = v176;
            v145 = v168;
            if ( v176 && v156 == 5 )
            {
              v145 = v168 - v176;
              v144 = 0LL;
            }
            v146 = v169;
            if ( v145 )
              MiReturnCommit(v169, v145);
            v147 = v165;
            if ( v165 )
            {
              v148 = *(unsigned int *)(v49 + 52);
              LODWORD(v148) = v148 & 0x7FFFFFFF;
              v149 = v165 - v144;
              v150 = (((unsigned __int64)*(unsigned __int8 *)(v49 + 34) << 31) | v148) - v165;
              *(_DWORD *)(v49 + 52) ^= (*(_DWORD *)(v49 + 52) ^ v150) & 0x7FFFFFFF;
              *(_BYTE *)(v49 + 34) = v150 >> 31;
              MiReturnCommit(v146, v149);
              MiReturnFullProcessCharges(a1, v147);
            }
            if ( v161 )
              MiReturnFullProcessCommitment(a1, v161);
            return 0LL;
          }
          v52 = 0xFFFFFA8000000000uLL;
          v53 = 0x8000000000000000uLL;
          v54 = 0xFFFFF6FB7DBED7F8uLL;
          if ( (v50 & 0xFFF) == 0 || v159 == 1 )
          {
            v159 = 0;
            if ( v36 )
            {
              MiFlushTbList(&v199);
              MiUnlockPageTableInternal(v22, v36);
            }
            v55 = &dword_140C4F6C0;
            if ( (*(_BYTE *)(v22 + 184) & 7) != 2 )
              v55 = (LONG *)(v22 + 192);
            if ( (*v55 & 0x40000000) != 0 || KeShouldYieldProcessor() )
            {
              MiUnlockWorkingSetShared(v22, v37);
              MiLockWorkingSetShared(v22);
            }
            v56 = ((v50 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
            v155 = v56;
            v181 = 0LL;
            Process = KeGetCurrentThread()->ApcState.Process;
            v58 = (__int64)(v50 << 25) >> 16;
            if ( v58 < 0xFFFFF68000000000uLL || (v59 = 0, v58 > 0xFFFFF6FFFFFFFFFFuLL) )
              v59 = 1;
            while ( 1 )
            {
              if ( v59 )
              {
                v60 = MiFastLockLeafPageTable((__int64)&Process[1].ActiveProcessorsPadding[6], v58, 0);
                if ( v60 )
                  break;
              }
              v61 = BugCheckParameter1;
              valid = MiLockLowestValidPageTable(&Process[1].ActiveProcessorsPadding[6], BugCheckParameter1, &v181);
              if ( valid == v155 )
                goto LABEL_88;
              MiUnlockPageTableInternal(&Process[1].ActiveProcessorsPadding[6], valid);
              MiFlushTbList(&v199);
              MiUnlockWorkingSetShared((__int64)&Process[1].ActiveProcessorsPadding[6], v157);
              v63 = MmAccessFault(((unsigned __int64)v51 << 57) | 0x100000000000002LL, v61, 0, 0LL);
              v64 = v63;
              if ( v63 < 0 )
              {
                MiFlushAllFilesystemPages(1LL);
                KeBugCheckEx(0x7Au, 1uLL, v64, (ULONG_PTR)Process, BugCheckParameter1);
              }
              MiLockWorkingSetShared((__int64)&Process[1].ActiveProcessorsPadding[6]);
              v56 = v155;
            }
            if ( v60 != 1 )
            {
              while ( 1 )
                v56 = ((v56 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
            }
LABEL_88:
            v50 = BugCheckParameter1;
            v53 = 0x8000000000000000uLL;
            v49 = v154;
            v54 = 0xFFFFF6FB7DBED7F8uLL;
            v52 = 0xFFFFFA8000000000uLL;
          }
          v65 = *(_QWORD *)v50;
          v66 = (__int64)(v50 << 25) >> 16;
          if ( v50 >= 0xFFFFF6FB7DBED000uLL
            && v50 <= 0xFFFFF6FB7DBED7F8uLL
            && (unsigned int)MiPteHasShadow(0xFFFFF6FB7DBED000uLL, Flink)
            && (v65 & 1) != 0
            && ((v65 & 0x20) == 0 || (v65 & 0x42) == 0) )
          {
            Flink = (__int64)KeGetCurrentThread()->ApcState.Process[1].ProcessListEntry.Flink;
            if ( Flink )
            {
              v67 = *(_QWORD *)(Flink + 8 * ((v50 >> 3) & 0x1FF));
              Flink = v65 | 0x20;
              if ( (v67 & 0x20) == 0 )
                Flink = v65;
              v65 = Flink;
              if ( (v67 & 0x42) != 0 )
                v65 = Flink | 0x42;
            }
          }
          v158 = v65;
          if ( (v65 & 1) == 0 )
            break;
          v68 = v65;
          if ( (unsigned __int64)&v158 >= 0xFFFFF6FB7DBED000uLL
            && (unsigned __int64)&v158 <= v54
            && (unsigned int)MiPteHasShadow(&v158, Flink)
            && ((v65 & 0x20) == 0 || (v65 & 0x42) == 0) )
          {
            Flink = (__int64)KeGetCurrentThread()->ApcState.Process[1].ProcessListEntry.Flink;
            if ( Flink )
            {
              v68 = v65 | 0x20;
              v69 = *(_QWORD *)(Flink + 8 * (((unsigned __int64)&v158 >> 3) & 0x1FF));
              if ( (v69 & 0x20) == 0 )
                v68 = v65;
              if ( (v69 & 0x42) != 0 )
                v68 |= 0x42uLL;
            }
          }
          v70 = (v68 >> 12) & 0xFFFFFFFFFLL;
          v179 = v70;
          v71 = v52 + 48 * v70;
          if ( (unsigned int)MI_PFN_IS_PROTO(v71, Flink, v53) )
          {
            v74 = *(_QWORD *)(v71 + 8);
            v75 = v73 | v74;
            if ( (v73 | v74) == MiGetProtoPteAddress(v154, v66 >> 12, 0, &v177) )
            {
              LODWORD(v70) = v179;
              goto LABEL_122;
            }
            CloneAddress = 0LL;
            if ( (*(_QWORD *)(v71 + 40) & 0x1000000000LL) != 0 || v74 <= 0 )
            {
              CloneAddress = MiLocateCloneAddress(a1, v75);
              if ( *(_QWORD *)(*(_QWORD *)(v77 + 1680) + 360LL) <= *(_QWORD *)(CloneAddress + 96) )
                CloneAddress = v78;
            }
            MiFlushTbList(&v199);
            v50 = BugCheckParameter1;
            LODWORD(v37) = MiCopyOnWrite(v66, BugCheckParameter1, -1LL);
            if ( (int)v37 >= 0 )
            {
              if ( CloneAddress )
                --v161;
              goto LABEL_279;
            }
            v22 = v162;
            MiUnlockPageTableInternal(v162, v155);
            MiUnlockWorkingSetShared(v22, v157);
            MiCopyOnWriteCheckConditions(v22, (unsigned int)v37);
            v159 = 1;
            v155 = 0LL;
            v36 = 0LL;
            MiLockWorkingSetShared(v22);
            LOBYTE(v37) = v157;
            v49 = v154;
          }
          else
          {
LABEL_122:
            if ( (a5 & 0x101) == 0 && (a6 != 1 || (unsigned int)MI_PFN_IS_PROTO(v71, v72, v73)) )
            {
              if ( !(unsigned int)MI_PFN_IS_PROTO(v71, v72, v73) )
              {
                v172 = 0;
                while ( _interlockedbittestandset64((volatile signed __int32 *)(v71 + 24), 0x3FuLL) )
                {
                  do
                    KeYieldProcessorEx(&v172);
                  while ( *(__int64 *)(v71 + 24) < 0 );
                }
                LODWORD(v94) = MiSanitizePfnProtection(
                                 v154,
                                 (*(_QWORD *)(v71 + 16) >> 5) & 0x1FLL,
                                 v160,
                                 *(_QWORD *)(v71 + 16));
                v101 = 32 * (v94 & 0x1F);
                if ( v100 )
                  *(_QWORD *)(v71 + 16) = v101 | v100 & 0xFFFFFFFFFFFFFC1FuLL;
                else
                  *(_QWORD *)(v71 + 16) = MiSwizzleInvalidPte(v101);
                _InterlockedAnd64((volatile signed __int64 *)(v71 + 24), 0x7FFFFFFFFFFFFFFFuLL);
                goto LABEL_175;
              }
              if ( v156 != 5 && (v65 & 0x200) != 0 )
                ++v165;
              v82 = v81 + ((v66 >> 9) & 0x7FFFFFFFF8LL);
              v83 = *(_QWORD *)v82;
              if ( v82 >= 0xFFFFF6FB7DBED000uLL
                && v82 <= 0xFFFFF6FB7DBED7F8uLL
                && (unsigned int)MiPteHasShadow(v79, v83)
                && (v83 & 1) != 0
                && ((v83 & 0x20) == 0 || (v83 & 0x42) == 0) )
              {
                v84 = KeGetCurrentThread()->ApcState.Process[1].ProcessListEntry.Flink;
                if ( v84 )
                {
                  v85 = *((_QWORD *)&v84->Flink + ((v82 >> 3) & 0x1FF));
                  v86 = v83 | 0x20;
                  if ( (v85 & 0x20) == 0 )
                    v86 = v83;
                  v83 = v86;
                  if ( (v85 & 0x42) != 0 )
                    v83 = v86 | 0x42;
                }
              }
              v87 = (v83 >> 60) & 7;
              if ( !(_DWORD)v87 )
                goto LABEL_147;
              v88 = *(_QWORD *)v82;
              if ( (*(_QWORD *)v82 & 0x10) != 0 )
                goto LABEL_145;
              if ( (v88 & 8) != 0 )
              {
                v87 = (unsigned int)v87 | 0x18;
                goto LABEL_146;
              }
              if ( (v88 & 0x10) != 0 )
LABEL_145:
                v87 = (unsigned int)v87 | 8;
LABEL_146:
              if ( (_DWORD)v87 )
              {
LABEL_154:
                v152 = v87;
                v91 = MiSanitizePfnProtection(v154, v87, v163, v80);
                v93 = *(_QWORD *)v82;
                v94 = v91;
                if ( v82 >= 0xFFFFF6FB7DBED000uLL
                  && v82 <= 0xFFFFF6FB7DBED7F8uLL
                  && (unsigned int)MiPteHasShadow(v92, v93)
                  && (v93 & 1) != 0
                  && ((v93 & 0x20) == 0 || (v93 & 0x42) == 0) )
                {
                  v95 = KeGetCurrentThread()->ApcState.Process[1].ProcessListEntry.Flink;
                  if ( v95 )
                  {
                    v96 = *((_QWORD *)&v95->Flink + ((v82 >> 3) & 0x1FF));
                    v97 = v93 | 0x20;
                    if ( (v96 & 0x20) == 0 )
                      v97 = v93;
                    v93 = v97;
                    if ( (v96 & 0x42) != 0 )
                      v93 = v97 | 0x42;
                  }
                }
                v98 = *(_QWORD *)v82;
                do
                {
                  v99 = v98;
                  v98 = _InterlockedCompareExchange64(
                          (volatile signed __int64 *)v82,
                          v93 & 0xF00000000000000LL | (v94 << 60) & 0x7F00000000000000LL | v98 & 0x80FFFFFFFFFFFFFFuLL,
                          v98);
                }
                while ( v99 != v98 );
LABEL_175:
                v102 = BugCheckParameter1;
                MiRevertValidPte(v154, BugCheckParameter1, v94, v70, (__int64)&v199);
                v50 = v102 + 8;
                BugCheckParameter1 = v50;
                goto LABEL_279;
              }
LABEL_147:
              v89 = ((unsigned __int64)MI_READ_PTE_LOCK_FREE(v71 + 16) >> 5) & 0x1F;
              if ( (*(_QWORD *)(v71 + 40) & 0x1000000000LL) != 0 || *(__int64 *)(v71 + 8) <= 0 )
              {
                v90 = KeGetCurrentThread()->ApcState.Process;
                if ( v90[1].Affinity.Bitmap[12]
                  && MiLocateCloneAddress(v90, *(_QWORD *)(v71 + 8) | 0x8000000000000000uLL) )
                {
                  LODWORD(v89) = MmMakeProtectNotWriteCopy[v89];
                }
                v87 = (unsigned int)v89;
              }
              else
              {
                v87 = (unsigned int)MmMakeProtectNotWriteCopy[v89];
              }
              goto LABEL_154;
            }
            Flink = BugCheckParameter1;
            v103 = BugCheckParameter1;
            v104 = (BugCheckParameter1 & 0xFFFFFFFFFFFFF000uLL) + 4088;
            if ( (BugCheckParameter1 & 0xFFFFFFFFFFFFF000uLL) == (v166 & 0xFFFFFFFFFFFFF000uLL) )
              v104 = v166;
            v105 = 0;
            if ( BugCheckParameter1 <= v104 )
            {
              v106 = v162;
              v107 = (_DWORD *)v182;
              while ( 1 )
              {
                v158 = MI_READ_PTE_LOCK_FREE(v103);
                if ( (v158 & 1) == 0
                  || (a5 & 0x101) == 0
                  && (a6 != 1
                   || (v109 = MI_READ_PTE_LOCK_FREE(&v158),
                       (unsigned int)MI_PFN_IS_PROTO(48 * ((v109 >> 12) & 0xFFFFFFFFFLL) - 0x58000000000LL, v110, v111))) )
                {
LABEL_192:
                  v51 = v173;
                  goto LABEL_193;
                }
                if ( (MiGetWsleContents(v108, v66) & 0xF) == 8 )
                  break;
                MiInsertTbFlushEntry(&v183, v66, 1LL, 0LL);
                if ( HIDWORD(v186) == (_DWORD)v186 )
                  goto LABEL_187;
LABEL_191:
                v103 += 8LL;
                v66 += 4096LL;
                if ( v103 > v104 )
                  goto LABEL_192;
              }
              v105 = 1;
              *v107 = 1;
LABEL_187:
              if ( HIDWORD(v186) )
                MiFreeWsleList(v106, &v183, 0LL);
              if ( v105 == 1 )
              {
                MiUnlockVa(v106, v66);
                v105 = 0;
              }
              goto LABEL_191;
            }
LABEL_193:
            if ( !HIDWORD(v186) )
            {
              v50 = BugCheckParameter1;
              goto LABEL_279;
            }
            v22 = v162;
            MiFreeWsleList(v162, &v183, 0LL);
            v50 = BugCheckParameter1;
            v36 = v155;
            LOBYTE(v37) = v157;
            v49 = v154;
          }
        }
        if ( (v65 & 0x400) == 0 )
          break;
        if ( (unsigned int)MiIsPrototypePteVadLookup(v65) )
          goto LABEL_206;
        v112 = v65;
        if ( qword_140C4DE80 && (v65 & 0x10) == 0 )
          v112 = v65 & ~qword_140C4DE80;
        if ( v112 >> 16 == MiGetProtoPteAddress(v49, v66 >> 12, 0, &v177) )
        {
LABEL_206:
          if ( v156 != 5 && (unsigned int)MiIsPrototypePteVadLookup(v65) && (v65 & 0xA0) == 0xA0 )
            ++v165;
          if ( (unsigned int)MiIsPrototypePteVadLookup(v65) )
            v114 = v65 >> 5;
          else
            LODWORD(v114) = *(unsigned __int16 *)(*(_QWORD *)(v49 + 72) + 32LL) >> 1;
          v152 = v114 & 0x1F;
          v115 = MiSanitizePfnProtection(v49, v114 & 0x1F, v163, v113);
          v158 = MiSwizzleInvalidPte(32 * (v115 & 0x1F | 0xFFFFFFFFF8000020uLL));
          v116 = v158;
          v117 = v158;
          if ( !(unsigned int)MiPteInShadowRange(v50, v118) )
            goto LABEL_276;
          if ( !(unsigned int)MiPteHasShadow(v119, Flink) )
            goto LABEL_273;
          v120 = HIBYTE(word_140C4DF48) == 0;
LABEL_269:
          v143 = v116;
          if ( v120 && (v116 & 1) != 0 )
            v143 = v116 | 0x8000000000000000uLL;
          *(_QWORD *)v50 = v143;
          MiWritePteShadow(v50, v143);
          v50 += 8LL;
          BugCheckParameter1 = v50;
          goto LABEL_279;
        }
        MiFlushTbList(&v199);
        LOBYTE(v37) = v157;
        if ( (int)MiMakeProtoLeafValid(v50) < 0 )
        {
          v50 += 8LL;
          BugCheckParameter1 = v50;
        }
        v36 = v155;
        v22 = v162;
        v49 = v154;
        v159 = 1;
      }
      if ( (v65 & 0x800) == 0 )
        break;
      if ( a6 == 1 )
      {
        v121 = MiTryDeleteTransitionPte(v50);
        if ( v121 == 3 )
        {
          ++v176;
        }
        else if ( v121 == 1 )
        {
          goto LABEL_279;
        }
LABEL_225:
        _InterlockedExchangeAdd64((volatile signed __int64 *)(a1 + 1272), 0xFFFFFFFFFFFFFFFFuLL);
LABEL_226:
        UsedPtesHandle = MiGetUsedPtesHandle((__int64)(v50 << 25) >> 16);
        MiDecreaseUsedPtesCount(UsedPtesHandle, 1uLL);
        v122 = 1;
        goto LABEL_228;
      }
      if ( !(unsigned int)MiSetProtectionOnTransitionPte(v49, v50, v160, 1LL) )
        goto LABEL_277;
LABEL_279:
      v22 = v162;
      v36 = v155;
      LOBYTE(v37) = v157;
      v49 = v154;
    }
    v122 = 0;
    if ( a6 == 1 )
    {
      if ( v65 )
      {
        MiReleasePageFileSpace(v169, v65, 1LL, v54);
        if ( (unsigned int)IS_PTE_NOT_DEMAND_ZERO(v65) )
          goto LABEL_225;
        goto LABEL_226;
      }
    }
    else if ( v65 )
    {
      v152 = (v65 >> 5) & 0x1F;
      v160 = MiSanitizePfnProtection(v154, (v65 >> 5) & 0x1F, v160, v54);
      v116 = v65 ^ ((unsigned __int16)v65 ^ (unsigned __int16)(32 * v160)) & 0x3E0;
      v158 = v116;
      v117 = v116;
      if ( !(unsigned int)MiPteInShadowRange(v50, v141) )
        goto LABEL_276;
      if ( !(unsigned int)MiPteHasShadow(v142, Flink) )
      {
LABEL_273:
        if ( (HIDWORD(KeGetCurrentThread()->ApcState.Process[2].Header.WaitListHead.Flink) & 0x1000) != 0
          && (v116 & 1) != 0 )
        {
          v117 |= 0x8000000000000000uLL;
        }
LABEL_276:
        *(_QWORD *)v50 = v117;
LABEL_277:
        v50 += 8LL;
        BugCheckParameter1 = v50;
        goto LABEL_279;
      }
      v120 = HIBYTE(word_140C4DF48) == 0;
      goto LABEL_269;
    }
LABEL_228:
    v124 = (v66 >> 18) & 0x3FFFFFF8;
    v125 = *(_QWORD *)((unsigned int)v124 - 0x904C0000000LL);
    v126 = v124 + 0x40000000;
    if ( (unsigned int)MiPteInShadowRange((unsigned int)v124 - 0x904C0000000LL, Flink)
      && (unsigned int)MiPteHasShadow(v128, v127)
      && (v125 & 1) != 0
      && ((v125 & 0x20) == 0 || (v125 & 0x42) == 0) )
    {
      v127 = v126;
      v129 = KeGetCurrentThread()->ApcState.Process[1].ProcessListEntry.Flink;
      if ( v129 )
      {
        v130 = *((_QWORD *)&v129->Flink + (((unsigned __int64)v126 >> 3) & 0x1FF));
        v127 = v125 | 0x20;
        if ( (v130 & 0x20) == 0 )
          v127 = v125;
        v125 = v127;
        if ( (v130 & 0x42) != 0 )
          v125 = v127 | 0x42;
      }
    }
    v178 = v125;
    if ( (unsigned int)MiPteInShadowRange(&v178, v127)
      && (unsigned int)MiPteHasShadow(v132, v131)
      && (v125 & 1) != 0
      && ((v125 & 0x20) == 0 || (v125 & 0x42) == 0) )
    {
      v133 = KeGetCurrentThread()->ApcState.Process[1].ProcessListEntry.Flink;
      if ( v133 )
      {
        v134 = *((_QWORD *)&v133->Flink + (((unsigned __int64)&v178 >> 3) & 0x1FF));
        v135 = v125 | 0x20;
        if ( (v134 & 0x20) == 0 )
          v135 = v125;
        v125 = v135;
        if ( (v134 & 0x42) != 0 )
          v125 = v135 | 0x42;
      }
    }
    v136 = 48 * ((v125 >> 12) & 0xFFFFFFFFFLL) - 0x58000000000LL;
    v174 = 0;
    while ( _interlockedbittestandset64((volatile signed __int32 *)(v136 + 24), 0x3FuLL) )
    {
      do
        KeYieldProcessorEx(&v174);
      while ( *(__int64 *)(v136 + 24) < 0 );
    }
    *(_QWORD *)(v136 + 16) ^= ((unsigned int)*(_QWORD *)(v136 + 16) ^ ((unsigned int)*(_QWORD *)(v136 + 16) + 0x10000)) & 0x3FF0000;
    _InterlockedAnd64((volatile signed __int64 *)(v136 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    MmIsAddressValidEx(*(_QWORD *)(v136 + 8) | 0x8000000000000000uLL);
    if ( v156 != 5 && (v122 == 1 || !(unsigned int)MiPteNeedsCommitCharge(v154, v50)) )
      ++v165;
    v152 = (*(unsigned __int16 *)(*(_QWORD *)(v154 + 72) + 32LL) >> 1) & 0x1F;
    v138 = MiSanitizePfnProtection(0LL, v152, v163, v137);
    Flink = MiSwizzleInvalidPte(32 * (v138 & 0x1F | 0xFFFFFFFFF8000020uLL));
    v158 = Flink;
    if ( v50 < 0xFFFFF6FB7DBED000uLL || v50 > 0xFFFFF6FB7DBED7F8uLL )
      goto LABEL_265;
    if ( !(unsigned int)MiPteHasShadow(v139, Flink) )
    {
      if ( (HIDWORD(KeGetCurrentThread()->ApcState.Process[2].Header.WaitListHead.Flink) & 0x1000) != 0
        && (Flink & 1) != 0 )
      {
        Flink |= 0x8000000000000000uLL;
      }
LABEL_265:
      *(_QWORD *)v50 = Flink;
      v50 += 8LL;
      BugCheckParameter1 = v50;
      goto LABEL_279;
    }
    v140 = Flink;
    if ( !HIBYTE(word_140C4DF48) && (Flink & 1) != 0 )
      v140 = Flink | 0x8000000000000000uLL;
    *(_QWORD *)v50 = v140;
    MiWritePteShadow(v50, v140);
    v50 += 8LL;
    BugCheckParameter1 = v50;
    goto LABEL_279;
  }
  if ( v161 )
    MiReturnFullProcessCommitment(a1, v161);
  return (unsigned int)v32;
}
