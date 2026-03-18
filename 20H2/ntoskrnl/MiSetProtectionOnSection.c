/*
 * XREFs of MiSetProtectionOnSection @ 0x1402B5EC0
 * Callers:
 *     MiMarkSharedImageCfgBits @ 0x14062A758 (MiMarkSharedImageCfgBits.c)
 *     MiAllocateVirtualMemory @ 0x14067B2A0 (MiAllocateVirtualMemory.c)
 *     MmProtectVirtualMemory @ 0x14067CCB0 (MmProtectVirtualMemory.c)
 *     MiCommitPagefileBackedSection @ 0x1406B29C0 (MiCommitPagefileBackedSection.c)
 *     MiUnsecureVirtualMemoryAgainstWrites @ 0x1406BECB4 (MiUnsecureVirtualMemoryAgainstWrites.c)
 * Callees:
 *     MiPteInShadowRange @ 0x14021EA50 (MiPteInShadowRange.c)
 *     KeAbPostRelease @ 0x14021ED30 (KeAbPostRelease.c)
 *     ExAcquirePushLockExclusiveEx @ 0x140220A40 (ExAcquirePushLockExclusiveEx.c)
 *     KiLeaveGuardedRegionUnsafe @ 0x140220E40 (KiLeaveGuardedRegionUnsafe.c)
 *     MiReturnCommit @ 0x140230300 (MiReturnCommit.c)
 *     MiReturnFullProcessCharges @ 0x1402303D0 (MiReturnFullProcessCharges.c)
 *     MiComputePageCommitment @ 0x1402340F0 (MiComputePageCommitment.c)
 *     MiLockLowestValidPageTable @ 0x140236270 (MiLockLowestValidPageTable.c)
 *     MiSetProtectionOnTransitionPte @ 0x14023672C (MiSetProtectionOnTransitionPte.c)
 *     MiTryDeleteTransitionPte @ 0x140236A7C (MiTryDeleteTransitionPte.c)
 *     MiIsPrototypePteVadLookup @ 0x140236D50 (MiIsPrototypePteVadLookup.c)
 *     ExfTryToWakePushLock @ 0x140242B40 (ExfTryToWakePushLock.c)
 *     MmAccessFault @ 0x14026E3B0 (MmAccessFault.c)
 *     MiFastLockLeafPageTable @ 0x14026F9F0 (MiFastLockLeafPageTable.c)
 *     MiUnlockWorkingSetShared @ 0x140270AB0 (MiUnlockWorkingSetShared.c)
 *     MiLockWorkingSetShared @ 0x14027B490 (MiLockWorkingSetShared.c)
 *     MiMakeProtectionMask @ 0x14027C200 (MiMakeProtectionMask.c)
 *     MiChargeCommit @ 0x14027C2B0 (MiChargeCommit.c)
 *     MiVadPureReserve @ 0x14027D170 (MiVadPureReserve.c)
 *     MiCopyOnWrite @ 0x14028F8B0 (MiCopyOnWrite.c)
 *     MiFreeWsleList @ 0x1402AAA70 (MiFreeWsleList.c)
 *     MiSwizzleInvalidPte @ 0x1402AD3A0 (MiSwizzleInvalidPte.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x1402B12D0 (MI_READ_PTE_LOCK_FREE.c)
 *     MiQueryAddressState @ 0x1402B2B40 (MiQueryAddressState.c)
 *     MiGetProtoPteAddress @ 0x1402B3F50 (MiGetProtoPteAddress.c)
 *     MiSanitizePfnProtection @ 0x1402B74E0 (MiSanitizePfnProtection.c)
 *     MiRevertValidPte @ 0x1402B7550 (MiRevertValidPte.c)
 *     MiInsertTbFlushEntry @ 0x1402B8FC0 (MiInsertTbFlushEntry.c)
 *     MiFlushTbList @ 0x1402BFA90 (MiFlushTbList.c)
 *     MmIsAddressValidEx @ 0x1402CC2D0 (MmIsAddressValidEx.c)
 *     MiGetUsedPtesHandle @ 0x1402CC840 (MiGetUsedPtesHandle.c)
 *     MiGetWsleContents @ 0x1402D3CE0 (MiGetWsleContents.c)
 *     MiUnlockVa @ 0x1402D4B38 (MiUnlockVa.c)
 *     KeYieldProcessorEx @ 0x1402DE380 (KeYieldProcessorEx.c)
 *     KeShouldYieldProcessor @ 0x1402F80C0 (KeShouldYieldProcessor.c)
 *     MiCountSharedPages @ 0x1402FF4F0 (MiCountSharedPages.c)
 *     MiPteNeedsCommitCharge @ 0x1402FFA28 (MiPteNeedsCommitCharge.c)
 *     ExpWaitForSpinLockSharedAndAcquire @ 0x1402FFF60 (ExpWaitForSpinLockSharedAndAcquire.c)
 *     MiWritePteShadow @ 0x140313F2C (MiWritePteShadow.c)
 *     MiPteHasShadow @ 0x140313F8C (MiPteHasShadow.c)
 *     MiMakeProtoLeafValid @ 0x14031A4F4 (MiMakeProtoLeafValid.c)
 *     MiDecreaseUsedPtesCount @ 0x14031FD54 (MiDecreaseUsedPtesCount.c)
 *     MiLocateCloneAddress @ 0x140344118 (MiLocateCloneAddress.c)
 *     IS_PTE_NOT_DEMAND_ZERO @ 0x140349584 (IS_PTE_NOT_DEMAND_ZERO.c)
 *     MiReleasePageFileSpace @ 0x14034D3F4 (MiReleasePageFileSpace.c)
 *     MiUnlockPageTableInternal @ 0x14035B910 (MiUnlockPageTableInternal.c)
 *     __security_check_cookie @ 0x1403CFAF0 (__security_check_cookie.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403F1DD4 (KiRemoveSystemWorkPriorityKick.c)
 *     MI_PFN_IS_PROTO @ 0x1403F3080 (MI_PFN_IS_PROTO.c)
 *     KeBugCheckEx @ 0x1403FBCA0 (KeBugCheckEx.c)
 *     MiFlushAllFilesystemPages @ 0x140533AC8 (MiFlushAllFilesystemPages.c)
 *     MiCopyOnWriteCheckConditions @ 0x14055A428 (MiCopyOnWriteCheckConditions.c)
 *     ExpAcquireSpinLockSharedAtDpcLevelInstrumented @ 0x1405B4254 (ExpAcquireSpinLockSharedAtDpcLevelInstrumented.c)
 *     MiReturnFullProcessCommitment @ 0x14062645C (MiReturnFullProcessCommitment.c)
 *     MiChargeFullProcessCommitment @ 0x14067BD20 (MiChargeFullProcessCommitment.c)
 *     MiCommitPageTablesForVad @ 0x14067BDF0 (MiCommitPageTablesForVad.c)
 *     MiImageVadHotPatchEligible @ 0x140681898 (MiImageVadHotPatchEligible.c)
 *     MiGetImageHotPatchTableAddress @ 0x1408CCA08 (MiGetImageHotPatchTableAddress.c)
 */

__int64 __fastcall MiSetProtectionOnSection(
        __int64 a1,
        ULONG_PTR a2,
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
  __int64 v14; // r9
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
  ULONG_PTR Flink; // rdx
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
  unsigned __int64 valid; // rax
  __int64 v63; // rdx
  int v64; // eax
  ULONG_PTR v65; // rdi
  unsigned __int64 v66; // rbx
  unsigned __int64 v67; // r13
  __int64 v68; // rax
  unsigned __int64 v69; // r15
  struct _LIST_ENTRY *v70; // rdx
  __int64 v71; // rax
  __int64 v72; // r15
  unsigned __int64 v73; // rdi
  __int64 v74; // r8
  __int64 v75; // r15
  __int64 v76; // r12
  unsigned __int64 v77; // rdx
  __int64 CloneAddress; // rbx
  __int64 v79; // rcx
  __int64 v80; // r9
  __int64 v81; // rcx
  __int64 v82; // r8
  __int64 v83; // r9
  __int64 v84; // r10
  unsigned __int64 v85; // rbx
  unsigned __int64 v86; // rdx
  struct _LIST_ENTRY *v87; // r8
  __int64 v88; // rax
  __int64 v89; // r8
  __int64 v90; // rdx
  unsigned __int64 v91; // rax
  unsigned __int64 v92; // r8
  _KPROCESS *v93; // rcx
  unsigned int v94; // eax
  __int64 v95; // rcx
  __int64 v96; // r8
  __int64 v97; // r9
  __int64 v98; // rdx
  __int64 v99; // r10
  struct _LIST_ENTRY *v100; // r8
  __int64 v101; // rax
  __int64 v102; // r8
  signed __int64 v103; // rax
  signed __int64 v104; // rtt
  __int64 v105; // r9
  __int64 v106; // rax
  ULONG_PTR v107; // r12
  ULONG_PTR v108; // rdi
  ULONG_PTR v109; // r15
  char v110; // bl
  __int64 v111; // r14
  _DWORD *v112; // rsi
  __int64 v113; // rcx
  unsigned __int64 v114; // rax
  __int64 v115; // rdi
  __int64 v116; // rdx
  unsigned __int64 v117; // rbx
  char v118; // al
  unsigned __int64 v119; // rdi
  __int64 v120; // rbx
  __int64 v121; // rcx
  __int64 v122; // r8
  __int64 v123; // r9
  bool v124; // zf
  int v125; // eax
  char v126; // r15
  ULONG_PTR UsedPtesHandle; // rax
  __int64 v128; // r13
  unsigned __int64 v129; // rbx
  __int64 v130; // rdx
  __int64 v131; // rcx
  __int64 v132; // r8
  __int64 v133; // r9
  struct _LIST_ENTRY *v134; // rax
  __int64 v135; // rax
  __int64 v136; // rdx
  __int64 v137; // rdx
  __int64 v138; // rcx
  __int64 v139; // r8
  __int64 v140; // r9
  struct _LIST_ENTRY *v141; // rdx
  __int64 v142; // rax
  __int64 v143; // rdx
  __int64 v144; // rbx
  char v145; // al
  __int64 v146; // rcx
  __int64 v147; // r8
  __int64 v148; // r9
  unsigned __int64 v149; // rax
  __int64 v150; // rcx
  __int64 v151; // r8
  __int64 v152; // r9
  unsigned __int64 v153; // rdx
  __int64 v154; // rsi
  __int64 v155; // rax
  __int64 v156; // r14
  __int64 v157; // rbx
  __int64 v158; // r8
  __int64 v159; // rdx
  unsigned __int64 v160; // r8
  unsigned int v162; // [rsp+58h] [rbp-A8h] BYREF
  ULONG_PTR BugCheckParameter2; // [rsp+60h] [rbp-A0h]
  ULONG_PTR v164; // [rsp+68h] [rbp-98h]
  unsigned __int64 v165; // [rsp+70h] [rbp-90h]
  int v166; // [rsp+78h] [rbp-88h]
  __int64 v167; // [rsp+80h] [rbp-80h]
  __int64 v168; // [rsp+88h] [rbp-78h] BYREF
  int v169; // [rsp+90h] [rbp-70h]
  unsigned int v170; // [rsp+94h] [rbp-6Ch]
  __int64 v171; // [rsp+98h] [rbp-68h] BYREF
  __int64 v172; // [rsp+A0h] [rbp-60h]
  unsigned int v173; // [rsp+A8h] [rbp-58h]
  __int16 v174; // [rsp+ACh] [rbp-54h] BYREF
  __int64 v175; // [rsp+B0h] [rbp-50h]
  ULONG_PTR v176; // [rsp+B8h] [rbp-48h]
  int v177; // [rsp+C0h] [rbp-40h]
  unsigned __int64 v178; // [rsp+C8h] [rbp-38h]
  unsigned __int64 v179; // [rsp+D0h] [rbp-30h]
  int v180; // [rsp+D8h] [rbp-28h] BYREF
  int v181; // [rsp+DCh] [rbp-24h] BYREF
  int v182; // [rsp+E0h] [rbp-20h] BYREF
  unsigned int v183; // [rsp+E4h] [rbp-1Ch]
  int v184; // [rsp+E8h] [rbp-18h] BYREF
  struct _KTHREAD *CurrentThread; // [rsp+F0h] [rbp-10h]
  __int64 v186; // [rsp+F8h] [rbp-8h]
  __int64 v187; // [rsp+100h] [rbp+0h] BYREF
  unsigned __int64 v188; // [rsp+108h] [rbp+8h] BYREF
  __int64 v189; // [rsp+110h] [rbp+10h]
  __int64 v190; // [rsp+118h] [rbp+18h] BYREF
  unsigned __int64 v191; // [rsp+120h] [rbp+20h] BYREF
  __int64 v192; // [rsp+128h] [rbp+28h]
  int v193; // [rsp+130h] [rbp+30h] BYREF
  __int16 v194; // [rsp+134h] [rbp+34h]
  __int16 v195; // [rsp+136h] [rbp+36h]
  __int64 v196; // [rsp+138h] [rbp+38h]
  __int64 v197; // [rsp+140h] [rbp+40h]
  __int64 v198; // [rsp+148h] [rbp+48h]
  __int128 v199; // [rsp+150h] [rbp+50h]
  __int128 v200; // [rsp+160h] [rbp+60h]
  __int128 v201; // [rsp+170h] [rbp+70h]
  __int128 v202; // [rsp+180h] [rbp+80h]
  __int128 v203; // [rsp+190h] [rbp+90h]
  __int128 v204; // [rsp+1A0h] [rbp+A0h]
  __int128 v205; // [rsp+1B0h] [rbp+B0h]
  __int128 v206; // [rsp+1C0h] [rbp+C0h]
  __int128 v207; // [rsp+1D0h] [rbp+D0h]
  __int64 v208; // [rsp+1E0h] [rbp+E0h]
  int v209; // [rsp+1F0h] [rbp+F0h] BYREF
  __int16 v210; // [rsp+1F4h] [rbp+F4h]
  __int16 v211; // [rsp+1F6h] [rbp+F6h]
  __int64 v212; // [rsp+1F8h] [rbp+F8h]
  __int64 v213; // [rsp+200h] [rbp+100h]
  __int64 v214; // [rsp+208h] [rbp+108h]
  __int128 v215; // [rsp+210h] [rbp+110h]
  __int128 v216; // [rsp+220h] [rbp+120h]
  __int128 v217; // [rsp+230h] [rbp+130h]
  __int128 v218; // [rsp+240h] [rbp+140h]
  __int128 v219; // [rsp+250h] [rbp+150h]
  __int128 v220; // [rsp+260h] [rbp+160h]
  __int128 v221; // [rsp+270h] [rbp+170h]
  __int128 v222; // [rsp+280h] [rbp+180h]
  __int128 v223; // [rsp+290h] [rbp+190h]
  __int64 v224; // [rsp+2A0h] [rbp+1A0h]

  v192 = a8;
  v164 = a2;
  v195 = 0;
  v208 = 0LL;
  v10 = a2;
  v211 = 0;
  v224 = 0LL;
  v11 = *(_DWORD *)(a2 + 48) & 0x70;
  v180 = 0;
  v190 = 0LL;
  v187 = 0LL;
  v162 = 0;
  v181 = 0;
  v168 = 0LL;
  v174 = 0;
  v199 = 0LL;
  v200 = 0LL;
  v201 = 0LL;
  v202 = 0LL;
  v203 = 0LL;
  v204 = 0LL;
  v205 = 0LL;
  v206 = 0LL;
  v207 = 0LL;
  v215 = 0LL;
  v216 = 0LL;
  v217 = 0LL;
  v218 = 0LL;
  v219 = 0LL;
  v220 = 0LL;
  v221 = 0LL;
  v222 = 0LL;
  v223 = 0LL;
  if ( v11 == 32 && (unsigned int)MiImageVadHotPatchEligible(a2) && MiGetImageHotPatchTableAddress(v10) <= a4 )
    return 3221225541LL;
  ProtectionMask = MiMakeProtectionMask(a5);
  v173 = ProtectionMask;
  v15 = ProtectionMask;
  if ( ProtectionMask == -1 )
    return 3221225541LL;
  v17 = ProtectionMask & 0xFFFFFFFE;
  v18 = ProtectionMask & 5;
  v178 = v14;
  v186 = v14;
  if ( v18 != 5 )
    v17 = v15;
  v212 = 20LL;
  v170 = v17;
  v19 = v14;
  v209 = 1;
  v210 = v14;
  v213 = v14;
  v214 = v14;
  v166 = v18;
  v20 = ((a3 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  BugCheckParameter2 = v20;
  v21 = ((a4 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  v177 = v14;
  v22 = v13 + 1664;
  CurrentThread = KeGetCurrentThread();
  v23 = *(_QWORD *)(v13 + 1680);
  v196 = 20LL;
  v193 = 1;
  v194 = 4;
  v197 = v14;
  v198 = v14;
  v176 = v21;
  v171 = v14;
  v172 = v13 + 1664;
  if ( *(_QWORD *)(v23 + 360) != v14 )
  {
    v24 = *(unsigned int *)(v10 + 52);
    LODWORD(v24) = v24 & 0x7FFFFFFF;
    if ( v24 | ((unsigned __int64)*(unsigned __int8 *)(v10 + 34) << 31) )
    {
      v25 = MiLockWorkingSetShared(v13 + 1664);
      MiComputePageCommitment(a3, a4, v10, v25, 0, &v171);
      MiUnlockWorkingSetShared(v22, v25);
      if ( v171 )
      {
        result = MiChargeFullProcessCommitment(a1, v171);
        if ( (int)result < 0 )
          return result;
      }
      v21 = v176;
      v20 = BugCheckParameter2;
    }
  }
  v179 = *(_QWORD *)(qword_140C4E4C8 + 8LL * *(unsigned __int16 *)(v22 + 174));
  if ( v166 != 5 )
    goto LABEL_21;
  v26 = MiCountSharedPages(v10, v20, v21);
  v19 = v26;
  if ( a6 == 1 )
  {
    v27 = ((__int64)(v176 - v20) >> 3) - v26;
    v124 = v27 == -1;
    v28 = v27 + 1;
    v178 = v28;
    if ( !v124 && !(unsigned int)MiChargeCommit(v179, v28, 0) )
    {
      if ( v171 )
        MiReturnFullProcessCommitment(a1, v171);
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
      v177 = 1;
      --CurrentThread->SpecialApcDisable;
      v29 = (volatile signed __int64 *)(a1 + 1232);
      ExAcquirePushLockExclusiveEx(a1 + 1232, 0LL);
      v30 = MiCommitPageTablesForVad(v10, a3);
      if ( v30 < 0 )
      {
        if ( (_InterlockedExchangeAdd64(v29, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
          ExfTryToWakePushLock(v29);
        KeAbPostRelease((ULONG_PTR)v29);
        KiLeaveGuardedRegionUnsafe((__int64)CurrentThread);
        if ( v178 )
        {
          MiReturnCommit(v179, v19);
        }
        else if ( v19 )
        {
          v31 = a1;
          MiReturnFullProcessCommitment(a1, v19);
          goto LABEL_28;
        }
        v31 = a1;
LABEL_28:
        if ( v171 )
          MiReturnFullProcessCommitment(v31, v171);
        return (unsigned int)v30;
      }
      v10 = v164;
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
    v169 = 1;
    v175 = 0LL;
    v36 = 0LL;
    v165 = 0LL;
    if ( v35 < 6u )
    {
      v39 = &dword_140C4F600;
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
      v36 = v165;
      LOBYTE(v37) = CurrentIrql;
      v167 = CurrentIrql;
    }
    else
    {
      v37 = KeGetCurrentIrql();
      v167 = v37;
      __writecr8(2uLL);
      if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && (unsigned __int8)v37 <= 0xFu )
      {
        v38 = KeGetCurrentPrcb()->SchedulerAssist;
        v38[5] |= ~((unsigned __int8)(1LL << ((unsigned __int8)v37 + 1)) - 1) & 4;
      }
    }
    MiQueryAddressState(a3, a3, v37, v164, 0LL, (int *)&v162, &v181, &v174, &v190, &v180);
    v49 = v164;
    *a7 = MmProtectToValue[v162];
    v50 = BugCheckParameter2;
    v51 = (*(_DWORD *)(v49 + 48) >> 12) & 0x3F;
    v183 = v51;
    while ( 1 )
    {
      while ( 1 )
      {
        while ( 1 )
        {
          if ( v50 > v176 )
          {
            MiFlushTbList(&v209, Flink);
            if ( v36 )
              MiUnlockPageTableInternal(v22);
            MiUnlockWorkingSetShared(v22, v37);
            if ( v177 == 1 )
            {
              if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)(a1 + 1232), 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
                ExfTryToWakePushLock((volatile signed __int64 *)(a1 + 1232));
              KeAbPostRelease(a1 + 1232);
              KiLeaveGuardedRegionUnsafe((__int64)CurrentThread);
            }
            v154 = v186;
            v155 = v178;
            if ( v186 && v166 == 5 )
            {
              v155 = v178 - v186;
              v154 = 0LL;
            }
            v156 = v179;
            if ( v155 )
              MiReturnCommit(v179, v155);
            v157 = v175;
            if ( v175 )
            {
              v158 = *(unsigned int *)(v49 + 52);
              LODWORD(v158) = v158 & 0x7FFFFFFF;
              v159 = v175 - v154;
              v160 = (((unsigned __int64)*(unsigned __int8 *)(v49 + 34) << 31) | v158) - v175;
              *(_DWORD *)(v49 + 52) ^= (*(_DWORD *)(v49 + 52) ^ v160) & 0x7FFFFFFF;
              *(_BYTE *)(v49 + 34) = v160 >> 31;
              MiReturnCommit(v156, v159);
              MiReturnFullProcessCharges(a1, v157);
            }
            if ( v171 )
              MiReturnFullProcessCommitment(a1, v171);
            return 0LL;
          }
          v52 = 0xFFFFFA8000000000uLL;
          v53 = 0x8000000000000000uLL;
          v54 = 0xFFFFF6FB7DBED7F8uLL;
          if ( (v50 & 0xFFF) == 0 || v169 == 1 )
          {
            v169 = 0;
            if ( v36 )
            {
              MiFlushTbList(&v209, Flink);
              MiUnlockPageTableInternal(v22);
            }
            v55 = &dword_140C4F600;
            if ( (*(_BYTE *)(v22 + 184) & 7) != 2 )
              v55 = (LONG *)(v22 + 192);
            if ( (*v55 & 0x40000000) != 0 || KeShouldYieldProcessor() )
            {
              MiUnlockWorkingSetShared(v22, v37);
              MiLockWorkingSetShared(v22);
            }
            v56 = ((v50 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
            v165 = v56;
            v191 = 0LL;
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
              v61 = BugCheckParameter2;
              valid = MiLockLowestValidPageTable(
                        (__int64)&Process[1].ActiveProcessorsPadding[6],
                        BugCheckParameter2,
                        &v191);
              if ( valid == v165 )
                goto LABEL_88;
              MiUnlockPageTableInternal(&Process[1].ActiveProcessorsPadding[6]);
              MiFlushTbList(&v209, v63);
              MiUnlockWorkingSetShared((__int64)&Process[1].ActiveProcessorsPadding[6], v167);
              v64 = MmAccessFault(((unsigned __int64)v51 << 57) | 0x100000000000002LL, v61, 0, 0LL);
              v65 = v64;
              if ( v64 < 0 )
              {
                MiFlushAllFilesystemPages(1LL);
                KeBugCheckEx(0x7Au, 1uLL, v65, (ULONG_PTR)Process, BugCheckParameter2);
              }
              MiLockWorkingSetShared((__int64)&Process[1].ActiveProcessorsPadding[6]);
              v56 = v165;
            }
            if ( v60 != 1 )
            {
              while ( 1 )
                v56 = ((v56 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
            }
LABEL_88:
            v50 = BugCheckParameter2;
            v53 = 0x8000000000000000uLL;
            v49 = v164;
            v54 = 0xFFFFF6FB7DBED7F8uLL;
            v52 = 0xFFFFFA8000000000uLL;
          }
          v66 = *(_QWORD *)v50;
          v67 = (__int64)(v50 << 25) >> 16;
          if ( v50 >= 0xFFFFF6FB7DBED000uLL
            && v50 <= 0xFFFFF6FB7DBED7F8uLL
            && (unsigned int)MiPteHasShadow(0xFFFFF6FB7DBED000uLL, Flink, 0x8000000000000000uLL, 0xFFFFF6FB7DBED7F8uLL)
            && (v66 & 1) != 0
            && ((v66 & 0x20) == 0 || (v66 & 0x42) == 0) )
          {
            Flink = (ULONG_PTR)KeGetCurrentThread()->ApcState.Process[1].ProcessListEntry.Flink;
            if ( Flink )
            {
              v68 = *(_QWORD *)(Flink + 8 * ((v50 >> 3) & 0x1FF));
              Flink = v66 | 0x20;
              if ( (v68 & 0x20) == 0 )
                Flink = v66;
              v66 = Flink;
              if ( (v68 & 0x42) != 0 )
                v66 = Flink | 0x42;
            }
          }
          v168 = v66;
          if ( (v66 & 1) == 0 )
            break;
          v69 = v66;
          if ( (unsigned __int64)&v168 >= 0xFFFFF6FB7DBED000uLL
            && (unsigned __int64)&v168 <= v54
            && (unsigned int)MiPteHasShadow(&v168, Flink, v53, v54)
            && ((v66 & 0x20) == 0 || (v66 & 0x42) == 0) )
          {
            v70 = KeGetCurrentThread()->ApcState.Process[1].ProcessListEntry.Flink;
            if ( v70 )
            {
              v69 = v66 | 0x20;
              v71 = *((_QWORD *)&v70->Flink + (((unsigned __int64)&v168 >> 3) & 0x1FF));
              if ( (v71 & 0x20) == 0 )
                v69 = v66;
              if ( (v71 & 0x42) != 0 )
                v69 |= 0x42uLL;
            }
          }
          v72 = (v69 >> 12) & 0xFFFFFFFFFLL;
          v189 = v72;
          v73 = v52 + 48 * v72;
          if ( (unsigned int)MI_PFN_IS_PROTO(v73) )
          {
            v75 = *(_QWORD *)(v73 + 8);
            v76 = v74 | v75;
            if ( (v74 | v75) == MiGetProtoPteAddress(v164, v67 >> 12, 0, &v187) )
            {
              LODWORD(v72) = v189;
              goto LABEL_122;
            }
            CloneAddress = 0LL;
            if ( (*(_QWORD *)(v73 + 40) & 0x1000000000LL) != 0 || v75 <= 0 )
            {
              CloneAddress = MiLocateCloneAddress(a1, v76);
              v77 = *(_QWORD *)(CloneAddress + 96);
              if ( *(_QWORD *)(*(_QWORD *)(v79 + 1680) + 360LL) <= v77 )
                CloneAddress = v80;
            }
            MiFlushTbList(&v209, v77);
            v50 = BugCheckParameter2;
            LODWORD(v37) = MiCopyOnWrite(v67, (ULONG_PTR *)BugCheckParameter2, -1LL, 0);
            if ( (int)v37 >= 0 )
            {
              if ( CloneAddress )
                --v171;
              goto LABEL_279;
            }
            v22 = v172;
            MiUnlockPageTableInternal(v172);
            MiUnlockWorkingSetShared(v22, v167);
            MiCopyOnWriteCheckConditions(v22, (unsigned int)v37);
            v169 = 1;
            v165 = 0LL;
            v36 = 0LL;
            MiLockWorkingSetShared(v22);
            LOBYTE(v37) = v167;
            v49 = v164;
          }
          else
          {
LABEL_122:
            if ( (a5 & 0x101) == 0 && (a6 != 1 || (unsigned int)MI_PFN_IS_PROTO(v73)) )
            {
              if ( !(unsigned int)MI_PFN_IS_PROTO(v73) )
              {
                v182 = 0;
                while ( _interlockedbittestandset64((volatile signed __int32 *)(v73 + 24), 0x3FuLL) )
                {
                  do
                    KeYieldProcessorEx(&v182);
                  while ( *(__int64 *)(v73 + 24) < 0 );
                }
                LODWORD(v99) = MiSanitizePfnProtection(v164, (*(_QWORD *)(v73 + 16) >> 5) & 0x1FLL, v170);
                v106 = 32 * (v99 & 0x1F);
                if ( v105 )
                  *(_QWORD *)(v73 + 16) = v106 | v105 & 0xFFFFFFFFFFFFFC1FuLL;
                else
                  *(_QWORD *)(v73 + 16) = MiSwizzleInvalidPte(v106);
                _InterlockedAnd64((volatile signed __int64 *)(v73 + 24), 0x7FFFFFFFFFFFFFFFuLL);
                goto LABEL_175;
              }
              if ( v166 != 5 && (v66 & 0x200) != 0 )
                ++v175;
              v85 = v84 + ((v67 >> 9) & 0x7FFFFFFFF8LL);
              v86 = *(_QWORD *)v85;
              if ( v85 >= 0xFFFFF6FB7DBED000uLL
                && v85 <= 0xFFFFF6FB7DBED7F8uLL
                && (unsigned int)MiPteHasShadow(v81, v86, v82, v83)
                && (v86 & 1) != 0
                && ((v86 & 0x20) == 0 || (v86 & 0x42) == 0) )
              {
                v87 = KeGetCurrentThread()->ApcState.Process[1].ProcessListEntry.Flink;
                if ( v87 )
                {
                  v88 = *((_QWORD *)&v87->Flink + ((v85 >> 3) & 0x1FF));
                  v89 = v86 | 0x20;
                  if ( (v88 & 0x20) == 0 )
                    v89 = v86;
                  v86 = v89;
                  if ( (v88 & 0x42) != 0 )
                    v86 = v89 | 0x42;
                }
              }
              v90 = (v86 >> 60) & 7;
              if ( !(_DWORD)v90 )
                goto LABEL_147;
              v91 = *(_QWORD *)v85;
              if ( (*(_QWORD *)v85 & 0x10) != 0 )
                goto LABEL_145;
              if ( (v91 & 8) != 0 )
              {
                v90 = (unsigned int)v90 | 0x18;
                goto LABEL_146;
              }
              if ( (v91 & 0x10) != 0 )
LABEL_145:
                v90 = (unsigned int)v90 | 8;
LABEL_146:
              if ( (_DWORD)v90 )
              {
LABEL_154:
                v162 = v90;
                v94 = MiSanitizePfnProtection(v164, v90, v173);
                v98 = *(_QWORD *)v85;
                v99 = v94;
                if ( v85 >= 0xFFFFF6FB7DBED000uLL
                  && v85 <= 0xFFFFF6FB7DBED7F8uLL
                  && (unsigned int)MiPteHasShadow(v95, v98, v96, v97)
                  && (v98 & 1) != 0
                  && ((v98 & 0x20) == 0 || (v98 & 0x42) == 0) )
                {
                  v100 = KeGetCurrentThread()->ApcState.Process[1].ProcessListEntry.Flink;
                  if ( v100 )
                  {
                    v101 = *((_QWORD *)&v100->Flink + ((v85 >> 3) & 0x1FF));
                    v102 = v98 | 0x20;
                    if ( (v101 & 0x20) == 0 )
                      v102 = v98;
                    v98 = v102;
                    if ( (v101 & 0x42) != 0 )
                      v98 = v102 | 0x42;
                  }
                }
                v103 = *(_QWORD *)v85;
                do
                {
                  v104 = v103;
                  v103 = _InterlockedCompareExchange64(
                           (volatile signed __int64 *)v85,
                           v98 & 0xF00000000000000LL | (v99 << 60) & 0x7F00000000000000LL | v103 & 0x80FFFFFFFFFFFFFFuLL,
                           v103);
                }
                while ( v104 != v103 );
LABEL_175:
                v107 = BugCheckParameter2;
                MiRevertValidPte(v164, BugCheckParameter2, v99, v72, (__int64)&v209);
                v50 = v107 + 8;
                BugCheckParameter2 = v50;
                goto LABEL_279;
              }
LABEL_147:
              v92 = ((unsigned __int64)MI_READ_PTE_LOCK_FREE(v73 + 16) >> 5) & 0x1F;
              if ( (*(_QWORD *)(v73 + 40) & 0x1000000000LL) != 0 || *(__int64 *)(v73 + 8) <= 0 )
              {
                v93 = KeGetCurrentThread()->ApcState.Process;
                if ( v93[1].Affinity.Bitmap[12]
                  && MiLocateCloneAddress(v93, *(_QWORD *)(v73 + 8) | 0x8000000000000000uLL) )
                {
                  LODWORD(v92) = MmMakeProtectNotWriteCopy[v92];
                }
                v90 = (unsigned int)v92;
              }
              else
              {
                v90 = (unsigned int)MmMakeProtectNotWriteCopy[v92];
              }
              goto LABEL_154;
            }
            Flink = BugCheckParameter2;
            v108 = BugCheckParameter2;
            v109 = (BugCheckParameter2 & 0xFFFFFFFFFFFFF000uLL) + 4088;
            if ( (BugCheckParameter2 & 0xFFFFFFFFFFFFF000uLL) == (v176 & 0xFFFFFFFFFFFFF000uLL) )
              v109 = v176;
            v110 = 0;
            if ( BugCheckParameter2 <= v109 )
            {
              v111 = v172;
              v112 = (_DWORD *)v192;
              while ( 1 )
              {
                v168 = MI_READ_PTE_LOCK_FREE(v108);
                if ( (v168 & 1) == 0
                  || (a5 & 0x101) == 0
                  && (a6 != 1
                   || (v114 = MI_READ_PTE_LOCK_FREE((unsigned __int64)&v168),
                       (unsigned int)MI_PFN_IS_PROTO(48 * ((v114 >> 12) & 0xFFFFFFFFFLL) - 0x58000000000LL))) )
                {
LABEL_192:
                  v51 = v183;
                  goto LABEL_193;
                }
                if ( (MiGetWsleContents(v113, v67) & 0xF) == 8 )
                  break;
                MiInsertTbFlushEntry(&v193, v67, 1LL, 0LL);
                if ( HIDWORD(v196) == (_DWORD)v196 )
                  goto LABEL_187;
LABEL_191:
                v108 += 8LL;
                v67 += 4096LL;
                if ( v108 > v109 )
                  goto LABEL_192;
              }
              v110 = 1;
              *v112 = 1;
LABEL_187:
              if ( HIDWORD(v196) )
                MiFreeWsleList(v111, (__int64)&v193, 0);
              if ( v110 == 1 )
              {
                MiUnlockVa(v111, v67);
                v110 = 0;
              }
              goto LABEL_191;
            }
LABEL_193:
            if ( !HIDWORD(v196) )
            {
              v50 = BugCheckParameter2;
              goto LABEL_279;
            }
            v22 = v172;
            MiFreeWsleList(v172, (__int64)&v193, 0);
            v50 = BugCheckParameter2;
            v36 = v165;
            LOBYTE(v37) = v167;
            v49 = v164;
          }
        }
        if ( (v66 & 0x400) == 0 )
          break;
        if ( MiIsPrototypePteVadLookup(v66) )
          goto LABEL_206;
        v115 = v66;
        if ( qword_140C4DDC0 && (v66 & 0x10) == 0 )
          v115 = v66 & ~qword_140C4DDC0;
        if ( v115 >> 16 == MiGetProtoPteAddress(v49, v67 >> 12, 0, &v187) )
        {
LABEL_206:
          if ( v166 != 5 && MiIsPrototypePteVadLookup(v66) && (v66 & 0xA0) == 0xA0 )
            ++v175;
          if ( MiIsPrototypePteVadLookup(v66) )
            v117 = v66 >> 5;
          else
            LODWORD(v117) = *(unsigned __int16 *)(*(_QWORD *)(v49 + 72) + 32LL) >> 1;
          v162 = v117 & 0x1F;
          v118 = MiSanitizePfnProtection(v49, v117 & 0x1F, v173);
          v168 = MiSwizzleInvalidPte(32 * (v118 & 0x1F | 0xFFFFFFFFF8000020uLL));
          v119 = v168;
          v120 = v168;
          if ( !MiPteInShadowRange(v50) )
            goto LABEL_276;
          if ( !(unsigned int)MiPteHasShadow(v121, Flink, v122, v123) )
            goto LABEL_273;
          v124 = HIBYTE(word_140C4DE88) == 0;
LABEL_269:
          v153 = v119;
          if ( v124 && (v119 & 1) != 0 )
            v153 = v119 | 0x8000000000000000uLL;
          *(_QWORD *)v50 = v153;
          MiWritePteShadow(v50, v153);
          v50 += 8LL;
          BugCheckParameter2 = v50;
          goto LABEL_279;
        }
        MiFlushTbList(&v209, v116);
        LOBYTE(v37) = v167;
        if ( (int)MiMakeProtoLeafValid(v50) < 0 )
        {
          v50 += 8LL;
          BugCheckParameter2 = v50;
        }
        v36 = v165;
        v22 = v172;
        v49 = v164;
        v169 = 1;
      }
      if ( (v66 & 0x800) == 0 )
        break;
      if ( a6 == 1 )
      {
        v125 = MiTryDeleteTransitionPte(v50);
        if ( v125 == 3 )
        {
          ++v186;
        }
        else if ( v125 == 1 )
        {
          goto LABEL_279;
        }
LABEL_225:
        _InterlockedExchangeAdd64((volatile signed __int64 *)(a1 + 1272), 0xFFFFFFFFFFFFFFFFuLL);
LABEL_226:
        UsedPtesHandle = MiGetUsedPtesHandle((__int64)(v50 << 25) >> 16, Flink);
        MiDecreaseUsedPtesCount(UsedPtesHandle, 1uLL);
        v126 = 1;
        goto LABEL_228;
      }
      if ( !(unsigned int)MiSetProtectionOnTransitionPte(v49, (_QWORD *)v50, v170, 1) )
        goto LABEL_277;
LABEL_279:
      v22 = v172;
      v36 = v165;
      LOBYTE(v37) = v167;
      v49 = v164;
    }
    v126 = 0;
    if ( a6 == 1 )
    {
      if ( v66 )
      {
        MiReleasePageFileSpace(v179, v66, 1LL);
        if ( (unsigned int)IS_PTE_NOT_DEMAND_ZERO(v66) )
          goto LABEL_225;
        goto LABEL_226;
      }
    }
    else if ( v66 )
    {
      v162 = (v66 >> 5) & 0x1F;
      v170 = MiSanitizePfnProtection(v164, (v66 >> 5) & 0x1F, v170);
      v119 = v66 ^ ((unsigned __int16)v66 ^ (unsigned __int16)(32 * v170)) & 0x3E0;
      v168 = v119;
      v120 = v119;
      if ( !MiPteInShadowRange(v50) )
        goto LABEL_276;
      if ( !(unsigned int)MiPteHasShadow(v150, Flink, v151, v152) )
      {
LABEL_273:
        if ( (HIDWORD(KeGetCurrentThread()->ApcState.Process[2].Header.WaitListHead.Flink) & 0x1000) != 0
          && (v119 & 1) != 0 )
        {
          v120 |= 0x8000000000000000uLL;
        }
LABEL_276:
        *(_QWORD *)v50 = v120;
LABEL_277:
        v50 += 8LL;
        BugCheckParameter2 = v50;
        goto LABEL_279;
      }
      v124 = HIBYTE(word_140C4DE88) == 0;
      goto LABEL_269;
    }
LABEL_228:
    v128 = (v67 >> 18) & 0x3FFFFFF8;
    v129 = *(_QWORD *)((unsigned int)v128 - 0x904C0000000LL);
    if ( MiPteInShadowRange((unsigned int)v128 - 0x904C0000000LL)
      && (unsigned int)MiPteHasShadow(v131, v130, v132, v133)
      && (v129 & 1) != 0
      && ((v129 & 0x20) == 0 || (v129 & 0x42) == 0) )
    {
      v134 = KeGetCurrentThread()->ApcState.Process[1].ProcessListEntry.Flink;
      if ( v134 )
      {
        v135 = *((_QWORD *)&v134->Flink + (((unsigned __int64)(unsigned int)(v128 + 0x40000000) >> 3) & 0x1FF));
        v136 = v129 | 0x20;
        if ( (v135 & 0x20) == 0 )
          v136 = v129;
        v129 = v136;
        if ( (v135 & 0x42) != 0 )
          v129 = v136 | 0x42;
      }
    }
    v188 = v129;
    if ( MiPteInShadowRange((unsigned __int64)&v188)
      && (unsigned int)MiPteHasShadow(v138, v137, v139, v140)
      && (v129 & 1) != 0
      && ((v129 & 0x20) == 0 || (v129 & 0x42) == 0) )
    {
      v141 = KeGetCurrentThread()->ApcState.Process[1].ProcessListEntry.Flink;
      if ( v141 )
      {
        v142 = *((_QWORD *)&v141->Flink + (((unsigned __int64)&v188 >> 3) & 0x1FF));
        v143 = v129 | 0x20;
        if ( (v142 & 0x20) == 0 )
          v143 = v129;
        v129 = v143;
        if ( (v142 & 0x42) != 0 )
          v129 = v143 | 0x42;
      }
    }
    v144 = 48 * ((v129 >> 12) & 0xFFFFFFFFFLL) - 0x58000000000LL;
    v184 = 0;
    while ( _interlockedbittestandset64((volatile signed __int32 *)(v144 + 24), 0x3FuLL) )
    {
      do
        KeYieldProcessorEx(&v184);
      while ( *(__int64 *)(v144 + 24) < 0 );
    }
    *(_QWORD *)(v144 + 16) ^= ((unsigned int)*(_QWORD *)(v144 + 16) ^ ((unsigned int)*(_QWORD *)(v144 + 16) + 0x10000)) & 0x3FF0000;
    _InterlockedAnd64((volatile signed __int64 *)(v144 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    MmIsAddressValidEx(*(_QWORD *)(v144 + 8) | 0x8000000000000000uLL);
    if ( v166 != 5 && (v126 == 1 || !(unsigned int)MiPteNeedsCommitCharge(v164, v50)) )
      ++v175;
    v162 = (*(unsigned __int16 *)(*(_QWORD *)(v164 + 72) + 32LL) >> 1) & 0x1F;
    v145 = MiSanitizePfnProtection(0LL, v162, v173);
    Flink = MiSwizzleInvalidPte(32 * (v145 & 0x1F | 0xFFFFFFFFF8000020uLL));
    v168 = Flink;
    if ( v50 < 0xFFFFF6FB7DBED000uLL || v50 > 0xFFFFF6FB7DBED7F8uLL )
      goto LABEL_265;
    if ( !(unsigned int)MiPteHasShadow(v146, Flink, v147, v148) )
    {
      if ( (HIDWORD(KeGetCurrentThread()->ApcState.Process[2].Header.WaitListHead.Flink) & 0x1000) != 0
        && (Flink & 1) != 0 )
      {
        Flink |= 0x8000000000000000uLL;
      }
LABEL_265:
      *(_QWORD *)v50 = Flink;
      v50 += 8LL;
      BugCheckParameter2 = v50;
      goto LABEL_279;
    }
    v149 = Flink;
    if ( !HIBYTE(word_140C4DE88) && (Flink & 1) != 0 )
      v149 = Flink | 0x8000000000000000uLL;
    *(_QWORD *)v50 = v149;
    MiWritePteShadow(v50, v149);
    v50 += 8LL;
    BugCheckParameter2 = v50;
    goto LABEL_279;
  }
  if ( v171 )
    MiReturnFullProcessCommitment(a1, v171);
  return (unsigned int)v32;
}
