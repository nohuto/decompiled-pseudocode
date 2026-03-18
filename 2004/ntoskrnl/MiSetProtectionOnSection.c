/*
 * XREFs of MiSetProtectionOnSection @ 0x1402ADDF0
 * Callers:
 *     MmProtectVirtualMemory @ 0x1405F7EB0 (MmProtectVirtualMemory.c)
 *     MiMarkSharedImageCfgBits @ 0x140608258 (MiMarkSharedImageCfgBits.c)
 *     MiCommitPagefileBackedSection @ 0x14060BD6C (MiCommitPagefileBackedSection.c)
 *     MiAllocateVirtualMemory @ 0x140696560 (MiAllocateVirtualMemory.c)
 *     MiUnsecureVirtualMemoryAgainstWrites @ 0x1406EAC5C (MiUnsecureVirtualMemoryAgainstWrites.c)
 * Callees:
 *     ExAcquirePushLockExclusiveEx @ 0x140207AC0 (ExAcquirePushLockExclusiveEx.c)
 *     KiLeaveGuardedRegionUnsafe @ 0x140207EC0 (KiLeaveGuardedRegionUnsafe.c)
 *     KeAbPostRelease @ 0x14020ACF0 (KeAbPostRelease.c)
 *     MiReturnCommit @ 0x140224390 (MiReturnCommit.c)
 *     MiReturnFullProcessCharges @ 0x140224460 (MiReturnFullProcessCharges.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x140238530 (MI_READ_PTE_LOCK_FREE.c)
 *     MiPteInShadowRange @ 0x1402386B0 (MiPteInShadowRange.c)
 *     MiCopyOnWrite @ 0x140238700 (MiCopyOnWrite.c)
 *     MiFlushTbList @ 0x14023A3C0 (MiFlushTbList.c)
 *     MiGetUsedPtesHandle @ 0x140245EC0 (MiGetUsedPtesHandle.c)
 *     MiReleasePageFileSpace @ 0x1402525F0 (MiReleasePageFileSpace.c)
 *     MiTryDeleteTransitionPte @ 0x140253830 (MiTryDeleteTransitionPte.c)
 *     MiSetProtectionOnTransitionPte @ 0x140253C28 (MiSetProtectionOnTransitionPte.c)
 *     MiLockLowestValidPageTable @ 0x140253FC0 (MiLockLowestValidPageTable.c)
 *     MiComputePageCommitment @ 0x140254480 (MiComputePageCommitment.c)
 *     MiGetWsleContents @ 0x140256CF0 (MiGetWsleContents.c)
 *     MmIsAddressValidEx @ 0x1402594E0 (MmIsAddressValidEx.c)
 *     ExfTryToWakePushLock @ 0x1402749E0 (ExfTryToWakePushLock.c)
 *     MiUnlockPageTableInternal @ 0x140278B10 (MiUnlockPageTableInternal.c)
 *     KeYieldProcessorEx @ 0x140280C50 (KeYieldProcessorEx.c)
 *     MiGetProtoPteAddress @ 0x14029A830 (MiGetProtoPteAddress.c)
 *     MmAccessFault @ 0x14029F070 (MmAccessFault.c)
 *     MiFastLockLeafPageTable @ 0x1402A06B0 (MiFastLockLeafPageTable.c)
 *     MiUnlockWorkingSetShared @ 0x1402A1770 (MiUnlockWorkingSetShared.c)
 *     MiLockWorkingSetShared @ 0x1402AC150 (MiLockWorkingSetShared.c)
 *     MiMakeProtectionMask @ 0x1402ACEC0 (MiMakeProtectionMask.c)
 *     MiChargeCommit @ 0x1402ACF70 (MiChargeCommit.c)
 *     MiVadPureReserve @ 0x1402ADBF0 (MiVadPureReserve.c)
 *     MiSanitizePfnProtection @ 0x1402AF410 (MiSanitizePfnProtection.c)
 *     MiRevertValidPte @ 0x1402AF480 (MiRevertValidPte.c)
 *     MiInsertTbFlushEntry @ 0x1402B0EF0 (MiInsertTbFlushEntry.c)
 *     MiQueryAddressState @ 0x1402B1190 (MiQueryAddressState.c)
 *     MiFreeWsleList @ 0x1402B2F00 (MiFreeWsleList.c)
 *     MiSwizzleInvalidPte @ 0x1402B6040 (MiSwizzleInvalidPte.c)
 *     IS_PTE_NOT_DEMAND_ZERO @ 0x1402BC1EC (IS_PTE_NOT_DEMAND_ZERO.c)
 *     MiCountSharedPages @ 0x140312D60 (MiCountSharedPages.c)
 *     MiPteNeedsCommitCharge @ 0x140313298 (MiPteNeedsCommitCharge.c)
 *     MiIsPrototypePteVadLookup @ 0x140315EC0 (MiIsPrototypePteVadLookup.c)
 *     KeShouldYieldProcessor @ 0x140327BB0 (KeShouldYieldProcessor.c)
 *     ExpWaitForSpinLockSharedAndAcquire @ 0x140329910 (ExpWaitForSpinLockSharedAndAcquire.c)
 *     MiWritePteShadow @ 0x14032ECC0 (MiWritePteShadow.c)
 *     MiPteHasShadow @ 0x14032ED20 (MiPteHasShadow.c)
 *     MiLocateCloneAddress @ 0x14033A8E4 (MiLocateCloneAddress.c)
 *     MiUnlockVa @ 0x1403479AC (MiUnlockVa.c)
 *     MiMakeProtoLeafValid @ 0x140349AB4 (MiMakeProtoLeafValid.c)
 *     MiDecreaseUsedPtesCount @ 0x14034EF54 (MiDecreaseUsedPtesCount.c)
 *     __security_check_cookie @ 0x1403CCE60 (__security_check_cookie.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403EDAA4 (KiRemoveSystemWorkPriorityKick.c)
 *     MI_PFN_IS_PROTO @ 0x1403EEC18 (MI_PFN_IS_PROTO.c)
 *     KeBugCheckEx @ 0x1403F70D0 (KeBugCheckEx.c)
 *     MiFlushAllFilesystemPages @ 0x1405300F8 (MiFlushAllFilesystemPages.c)
 *     MiCopyOnWriteCheckConditions @ 0x140556A58 (MiCopyOnWriteCheckConditions.c)
 *     ExpAcquireSpinLockSharedAtDpcLevelInstrumented @ 0x1405B06F4 (ExpAcquireSpinLockSharedAtDpcLevelInstrumented.c)
 *     MiReturnFullProcessCommitment @ 0x1405FAA28 (MiReturnFullProcessCommitment.c)
 *     MiChargeFullProcessCommitment @ 0x140696FE0 (MiChargeFullProcessCommitment.c)
 *     MiCommitPageTablesForVad @ 0x1406970B0 (MiCommitPageTablesForVad.c)
 *     MiImageVadHotPatchEligible @ 0x1406E33D0 (MiImageVadHotPatchEligible.c)
 *     MiGetImageHotPatchTableAddress @ 0x1408C6BC8 (MiGetImageHotPatchTableAddress.c)
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
  unsigned __int64 valid; // rax
  _KPROCESS *v63; // rdx
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
  _KPROCESS *v77; // rdx
  __int64 CloneAddress; // rbx
  __int64 v79; // rcx
  __int64 v80; // r9
  __int64 v81; // rdx
  __int64 v82; // rcx
  __int64 v83; // r8
  __int64 v84; // r9
  __int64 v85; // r10
  unsigned __int64 v86; // rbx
  unsigned __int64 v87; // rdx
  struct _LIST_ENTRY *v88; // r8
  __int64 v89; // rax
  __int64 v90; // r8
  __int64 v91; // rdx
  unsigned __int64 v92; // rax
  unsigned __int64 v93; // r8
  _KPROCESS *v94; // rcx
  unsigned int v95; // eax
  __int64 v96; // rcx
  __int64 v97; // r8
  __int64 v98; // r9
  __int64 v99; // rdx
  __int64 v100; // r10
  struct _LIST_ENTRY *v101; // r8
  __int64 v102; // rax
  __int64 v103; // r8
  signed __int64 v104; // rax
  signed __int64 v105; // rtt
  __int64 v106; // rdx
  __int64 v107; // r8
  __int64 v108; // r9
  __int64 v109; // rax
  ULONG_PTR v110; // r12
  ULONG_PTR v111; // rdi
  ULONG_PTR v112; // r15
  char v113; // bl
  __int64 v114; // r14
  _DWORD *v115; // rsi
  __int64 v116; // rcx
  unsigned __int64 v117; // rax
  _KPROCESS *v118; // rdx
  __int64 v119; // r8
  __int64 v120; // r9
  __int64 v121; // rdi
  unsigned __int64 v122; // rbx
  char v123; // al
  __int64 v124; // rdx
  __int64 v125; // r8
  __int64 v126; // r9
  unsigned __int64 v127; // rdi
  __int64 v128; // rbx
  __int64 v129; // rcx
  __int64 v130; // r8
  __int64 v131; // r9
  bool v132; // zf
  int v133; // eax
  char v134; // r15
  ULONG_PTR UsedPtesHandle; // rax
  __int64 v136; // r13
  unsigned __int64 v137; // rbx
  __int64 v138; // rdx
  __int64 v139; // rcx
  __int64 v140; // r8
  __int64 v141; // r9
  struct _LIST_ENTRY *v142; // rax
  __int64 v143; // rax
  __int64 v144; // rdx
  __int64 v145; // rdx
  __int64 v146; // rcx
  __int64 v147; // r8
  __int64 v148; // r9
  __int64 v149; // rax
  __int64 v150; // rbx
  char v151; // al
  __int64 v152; // rdx
  __int64 v153; // r8
  __int64 v154; // r9
  __int64 v155; // rcx
  __int64 v156; // r8
  __int64 v157; // r9
  unsigned __int64 v158; // rax
  __int64 v159; // rcx
  __int64 v160; // r8
  __int64 v161; // r9
  unsigned __int64 v162; // rdx
  __int64 v163; // rsi
  __int64 v164; // rax
  __int64 v165; // r14
  __int64 v166; // rbx
  __int64 v167; // r8
  __int64 v168; // rdx
  unsigned __int64 v169; // r8
  unsigned int v171; // [rsp+58h] [rbp-A8h] BYREF
  ULONG_PTR BugCheckParameter2; // [rsp+60h] [rbp-A0h]
  __int64 v173; // [rsp+68h] [rbp-98h]
  unsigned __int64 v174; // [rsp+70h] [rbp-90h]
  int v175; // [rsp+78h] [rbp-88h]
  __int64 v176; // [rsp+80h] [rbp-80h]
  __int64 v177; // [rsp+88h] [rbp-78h] BYREF
  int v178; // [rsp+90h] [rbp-70h]
  unsigned int v179; // [rsp+94h] [rbp-6Ch]
  __int64 v180; // [rsp+98h] [rbp-68h] BYREF
  __int64 v181; // [rsp+A0h] [rbp-60h]
  unsigned int v182; // [rsp+A8h] [rbp-58h]
  __int16 v183; // [rsp+ACh] [rbp-54h] BYREF
  __int64 v184; // [rsp+B0h] [rbp-50h]
  ULONG_PTR v185; // [rsp+B8h] [rbp-48h]
  int v186; // [rsp+C0h] [rbp-40h]
  unsigned __int64 v187; // [rsp+C8h] [rbp-38h]
  __int64 v188; // [rsp+D0h] [rbp-30h]
  int v189; // [rsp+D8h] [rbp-28h] BYREF
  int v190; // [rsp+DCh] [rbp-24h] BYREF
  int v191; // [rsp+E0h] [rbp-20h] BYREF
  unsigned int v192; // [rsp+E4h] [rbp-1Ch]
  int v193; // [rsp+E8h] [rbp-18h] BYREF
  struct _KTHREAD *CurrentThread; // [rsp+F0h] [rbp-10h]
  __int64 v195; // [rsp+F8h] [rbp-8h]
  __int64 v196; // [rsp+100h] [rbp+0h] BYREF
  unsigned __int64 v197; // [rsp+108h] [rbp+8h] BYREF
  __int64 v198; // [rsp+110h] [rbp+10h]
  __int64 v199; // [rsp+118h] [rbp+18h] BYREF
  unsigned __int64 v200; // [rsp+120h] [rbp+20h] BYREF
  __int64 v201; // [rsp+128h] [rbp+28h]
  int v202; // [rsp+130h] [rbp+30h] BYREF
  __int16 v203; // [rsp+134h] [rbp+34h]
  __int16 v204; // [rsp+136h] [rbp+36h]
  __int64 v205; // [rsp+138h] [rbp+38h]
  __int64 v206; // [rsp+140h] [rbp+40h]
  __int64 v207; // [rsp+148h] [rbp+48h]
  __int128 v208; // [rsp+150h] [rbp+50h]
  __int128 v209; // [rsp+160h] [rbp+60h]
  __int128 v210; // [rsp+170h] [rbp+70h]
  __int128 v211; // [rsp+180h] [rbp+80h]
  __int128 v212; // [rsp+190h] [rbp+90h]
  __int128 v213; // [rsp+1A0h] [rbp+A0h]
  __int128 v214; // [rsp+1B0h] [rbp+B0h]
  __int128 v215; // [rsp+1C0h] [rbp+C0h]
  __int128 v216; // [rsp+1D0h] [rbp+D0h]
  __int64 v217; // [rsp+1E0h] [rbp+E0h]
  int v218; // [rsp+1F0h] [rbp+F0h] BYREF
  __int16 v219; // [rsp+1F4h] [rbp+F4h]
  __int16 v220; // [rsp+1F6h] [rbp+F6h]
  __int64 v221; // [rsp+1F8h] [rbp+F8h]
  __int64 v222; // [rsp+200h] [rbp+100h]
  __int64 v223; // [rsp+208h] [rbp+108h]
  __int128 v224; // [rsp+210h] [rbp+110h]
  __int128 v225; // [rsp+220h] [rbp+120h]
  __int128 v226; // [rsp+230h] [rbp+130h]
  __int128 v227; // [rsp+240h] [rbp+140h]
  __int128 v228; // [rsp+250h] [rbp+150h]
  __int128 v229; // [rsp+260h] [rbp+160h]
  __int128 v230; // [rsp+270h] [rbp+170h]
  __int128 v231; // [rsp+280h] [rbp+180h]
  __int128 v232; // [rsp+290h] [rbp+190h]
  __int64 v233; // [rsp+2A0h] [rbp+1A0h]

  v201 = a8;
  v173 = a2;
  v204 = 0;
  v217 = 0LL;
  v10 = a2;
  v220 = 0;
  v233 = 0LL;
  v11 = *(_DWORD *)(a2 + 48) & 0x70;
  v189 = 0;
  v199 = 0LL;
  v196 = 0LL;
  v171 = 0;
  v190 = 0;
  v177 = 0LL;
  v183 = 0;
  v208 = 0LL;
  v209 = 0LL;
  v210 = 0LL;
  v211 = 0LL;
  v212 = 0LL;
  v213 = 0LL;
  v214 = 0LL;
  v215 = 0LL;
  v216 = 0LL;
  v224 = 0LL;
  v225 = 0LL;
  v226 = 0LL;
  v227 = 0LL;
  v228 = 0LL;
  v229 = 0LL;
  v230 = 0LL;
  v231 = 0LL;
  v232 = 0LL;
  if ( v11 == 32 && (unsigned int)MiImageVadHotPatchEligible(a2) && MiGetImageHotPatchTableAddress(v10) <= a4 )
    return 3221225541LL;
  ProtectionMask = MiMakeProtectionMask(a5);
  v182 = ProtectionMask;
  v15 = ProtectionMask;
  if ( ProtectionMask == -1 )
    return 3221225541LL;
  v17 = ProtectionMask & 0xFFFFFFFE;
  v18 = ProtectionMask & 5;
  v187 = v14;
  v195 = v14;
  if ( v18 != 5 )
    v17 = v15;
  v221 = 20LL;
  v179 = v17;
  v19 = v14;
  v218 = 1;
  v219 = v14;
  v222 = v14;
  v223 = v14;
  v175 = v18;
  v20 = ((a3 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  BugCheckParameter2 = v20;
  v21 = ((a4 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  v186 = v14;
  v22 = v13 + 1664;
  CurrentThread = KeGetCurrentThread();
  v23 = *(_QWORD *)(v13 + 1680);
  v205 = 20LL;
  v202 = 1;
  v203 = 4;
  v206 = v14;
  v207 = v14;
  v185 = v21;
  v180 = v14;
  v181 = v13 + 1664;
  if ( *(_QWORD *)(v23 + 360) != v14 )
  {
    v24 = *(unsigned int *)(v10 + 52);
    LODWORD(v24) = v24 & 0x7FFFFFFF;
    if ( v24 | ((unsigned __int64)*(unsigned __int8 *)(v10 + 34) << 31) )
    {
      v25 = MiLockWorkingSetShared(v13 + 1664);
      MiComputePageCommitment(a3, a4, v10, v25, 0, &v180);
      MiUnlockWorkingSetShared(v22, v25);
      if ( v180 )
      {
        result = MiChargeFullProcessCommitment(a1, v180);
        if ( (int)result < 0 )
          return result;
      }
      v21 = v185;
      v20 = BugCheckParameter2;
    }
  }
  v188 = *(_QWORD *)(qword_140C4E448 + 8LL * *(unsigned __int16 *)(v22 + 174));
  if ( v175 != 5 )
    goto LABEL_21;
  v26 = MiCountSharedPages(v10, v20, v21);
  v19 = v26;
  if ( a6 == 1 )
  {
    v27 = ((__int64)(v185 - v20) >> 3) - v26;
    v132 = v27 == -1;
    v28 = v27 + 1;
    v187 = v28;
    if ( !v132 && !(unsigned int)MiChargeCommit(v188, v28, 0) )
    {
      if ( v180 )
        MiReturnFullProcessCommitment(a1);
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
      v186 = 1;
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
        if ( v187 )
        {
          MiReturnCommit(v188, v19);
        }
        else if ( v19 )
        {
          v31 = a1;
          MiReturnFullProcessCommitment(a1);
          goto LABEL_28;
        }
        v31 = a1;
LABEL_28:
        if ( v180 )
          MiReturnFullProcessCommitment(v31);
        return (unsigned int)v30;
      }
      v10 = v173;
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
    v178 = 1;
    v184 = 0LL;
    v36 = 0LL;
    v174 = 0LL;
    if ( v35 < 6u )
    {
      v39 = &dword_140C4F580;
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
      v36 = v174;
      LOBYTE(v37) = CurrentIrql;
      v176 = CurrentIrql;
    }
    else
    {
      v37 = KeGetCurrentIrql();
      v176 = v37;
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
      v173,
      0LL,
      (__int64)&v171,
      (__int64)&v190,
      (__int64)&v183,
      (__int64)&v199,
      (__int64)&v189);
    v49 = v173;
    *a7 = MmProtectToValue[v171];
    v50 = BugCheckParameter2;
    v51 = (*(_DWORD *)(v49 + 48) >> 12) & 0x3F;
    v192 = v51;
    while ( 1 )
    {
      while ( 1 )
      {
        while ( 1 )
        {
          if ( v50 > v185 )
          {
            MiFlushTbList((__int64)&v218, (_KPROCESS *)Flink);
            if ( v36 )
              MiUnlockPageTableInternal(v22, v36);
            MiUnlockWorkingSetShared(v22, v37);
            if ( v186 == 1 )
            {
              if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)(a1 + 1232), 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
                ExfTryToWakePushLock((volatile signed __int64 *)(a1 + 1232));
              KeAbPostRelease(a1 + 1232);
              KiLeaveGuardedRegionUnsafe((__int64)CurrentThread);
            }
            v163 = v195;
            v164 = v187;
            if ( v195 && v175 == 5 )
            {
              v164 = v187 - v195;
              v163 = 0LL;
            }
            v165 = v188;
            if ( v164 )
              MiReturnCommit(v188, v164);
            v166 = v184;
            if ( v184 )
            {
              v167 = *(unsigned int *)(v49 + 52);
              LODWORD(v167) = v167 & 0x7FFFFFFF;
              v168 = v184 - v163;
              v169 = (((unsigned __int64)*(unsigned __int8 *)(v49 + 34) << 31) | v167) - v184;
              *(_DWORD *)(v49 + 52) ^= (*(_DWORD *)(v49 + 52) ^ v169) & 0x7FFFFFFF;
              *(_BYTE *)(v49 + 34) = v169 >> 31;
              MiReturnCommit(v165, v168);
              MiReturnFullProcessCharges(a1, v166);
            }
            if ( v180 )
              MiReturnFullProcessCommitment(a1);
            return 0LL;
          }
          v52 = 0xFFFFFA8000000000uLL;
          v53 = 0x8000000000000000uLL;
          v54 = 0xFFFFF6FB7DBED7F8uLL;
          if ( (v50 & 0xFFF) == 0 || v178 == 1 )
          {
            v178 = 0;
            if ( v36 )
            {
              MiFlushTbList((__int64)&v218, (_KPROCESS *)Flink);
              MiUnlockPageTableInternal(v22, v36);
            }
            v55 = &dword_140C4F580;
            if ( (*(_BYTE *)(v22 + 184) & 7) != 2 )
              v55 = (LONG *)(v22 + 192);
            if ( (*v55 & 0x40000000) != 0 || KeShouldYieldProcessor() )
            {
              MiUnlockWorkingSetShared(v22, v37);
              MiLockWorkingSetShared(v22);
            }
            v56 = ((v50 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
            v174 = v56;
            v200 = 0LL;
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
                        &v200);
              if ( valid == v174 )
                goto LABEL_88;
              MiUnlockPageTableInternal((__int64)&Process[1].ActiveProcessorsPadding[6], valid);
              MiFlushTbList((__int64)&v218, v63);
              MiUnlockWorkingSetShared((__int64)&Process[1].ActiveProcessorsPadding[6], v176);
              v64 = MmAccessFault(((unsigned __int64)v51 << 57) | 0x100000000000002LL, v61, 0, 0LL);
              v65 = v64;
              if ( v64 < 0 )
              {
                MiFlushAllFilesystemPages(1LL);
                KeBugCheckEx(0x7Au, 1uLL, v65, (ULONG_PTR)Process, BugCheckParameter2);
              }
              MiLockWorkingSetShared((__int64)&Process[1].ActiveProcessorsPadding[6]);
              v56 = v174;
            }
            if ( v60 != 1 )
            {
              while ( 1 )
                v56 = ((v56 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
            }
LABEL_88:
            v50 = BugCheckParameter2;
            v53 = 0x8000000000000000uLL;
            v49 = v173;
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
            Flink = (__int64)KeGetCurrentThread()->ApcState.Process[1].ProcessListEntry.Flink;
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
          v177 = v66;
          if ( (v66 & 1) == 0 )
            break;
          v69 = v66;
          if ( (unsigned __int64)&v177 >= 0xFFFFF6FB7DBED000uLL
            && (unsigned __int64)&v177 <= v54
            && (unsigned int)MiPteHasShadow(&v177, Flink, v53, v54)
            && ((v66 & 0x20) == 0 || (v66 & 0x42) == 0) )
          {
            v70 = KeGetCurrentThread()->ApcState.Process[1].ProcessListEntry.Flink;
            if ( v70 )
            {
              v69 = v66 | 0x20;
              v71 = *((_QWORD *)&v70->Flink + (((unsigned __int64)&v177 >> 3) & 0x1FF));
              if ( (v71 & 0x20) == 0 )
                v69 = v66;
              if ( (v71 & 0x42) != 0 )
                v69 |= 0x42uLL;
            }
          }
          v72 = (v69 >> 12) & 0xFFFFFFFFFLL;
          v198 = v72;
          v73 = v52 + 48 * v72;
          if ( (unsigned int)MI_PFN_IS_PROTO(v73) )
          {
            v75 = *(_QWORD *)(v73 + 8);
            v76 = v74 | v75;
            if ( (v74 | v75) == MiGetProtoPteAddress(v173, v67 >> 12, 0, &v196) )
            {
              LODWORD(v72) = v198;
              goto LABEL_122;
            }
            CloneAddress = 0LL;
            if ( (*(_QWORD *)(v73 + 40) & 0x1000000000LL) != 0 || v75 <= 0 )
            {
              CloneAddress = MiLocateCloneAddress(a1, v76);
              v77 = *(_KPROCESS **)(CloneAddress + 96);
              if ( *(_QWORD *)(*(_QWORD *)(v79 + 1680) + 360LL) <= (unsigned __int64)v77 )
                CloneAddress = v80;
            }
            MiFlushTbList((__int64)&v218, v77);
            v50 = BugCheckParameter2;
            LODWORD(v37) = MiCopyOnWrite(v67, (ULONG_PTR *)BugCheckParameter2, -1LL, 0);
            if ( (int)v37 >= 0 )
            {
              if ( CloneAddress )
                --v180;
              goto LABEL_279;
            }
            v22 = v181;
            MiUnlockPageTableInternal(v181, v174);
            MiUnlockWorkingSetShared(v22, v176);
            MiCopyOnWriteCheckConditions(v22, (unsigned int)v37);
            v178 = 1;
            v174 = 0LL;
            v36 = 0LL;
            MiLockWorkingSetShared(v22);
            LOBYTE(v37) = v176;
            v49 = v173;
          }
          else
          {
LABEL_122:
            if ( (a5 & 0x101) == 0 && (a6 != 1 || (unsigned int)MI_PFN_IS_PROTO(v73)) )
            {
              if ( !(unsigned int)MI_PFN_IS_PROTO(v73) )
              {
                v191 = 0;
                while ( _interlockedbittestandset64((volatile signed __int32 *)(v73 + 24), 0x3FuLL) )
                {
                  do
                    KeYieldProcessorEx(&v191, v81, v83, v84);
                  while ( *(__int64 *)(v73 + 24) < 0 );
                }
                LODWORD(v100) = MiSanitizePfnProtection(v173, (*(_QWORD *)(v73 + 16) >> 5) & 0x1FLL, v179);
                v109 = 32 * (v100 & 0x1F);
                if ( v108 )
                  *(_QWORD *)(v73 + 16) = v109 | v108 & 0xFFFFFFFFFFFFFC1FuLL;
                else
                  *(_QWORD *)(v73 + 16) = MiSwizzleInvalidPte(v109, v106, v107, 0LL);
                _InterlockedAnd64((volatile signed __int64 *)(v73 + 24), 0x7FFFFFFFFFFFFFFFuLL);
                goto LABEL_175;
              }
              if ( v175 != 5 && (v66 & 0x200) != 0 )
                ++v184;
              v86 = v85 + ((v67 >> 9) & 0x7FFFFFFFF8LL);
              v87 = *(_QWORD *)v86;
              if ( v86 >= 0xFFFFF6FB7DBED000uLL
                && v86 <= 0xFFFFF6FB7DBED7F8uLL
                && (unsigned int)MiPteHasShadow(v82, v87, v83, v84)
                && (v87 & 1) != 0
                && ((v87 & 0x20) == 0 || (v87 & 0x42) == 0) )
              {
                v88 = KeGetCurrentThread()->ApcState.Process[1].ProcessListEntry.Flink;
                if ( v88 )
                {
                  v89 = *((_QWORD *)&v88->Flink + ((v86 >> 3) & 0x1FF));
                  v90 = v87 | 0x20;
                  if ( (v89 & 0x20) == 0 )
                    v90 = v87;
                  v87 = v90;
                  if ( (v89 & 0x42) != 0 )
                    v87 = v90 | 0x42;
                }
              }
              v91 = (v87 >> 60) & 7;
              if ( !(_DWORD)v91 )
                goto LABEL_147;
              v92 = *(_QWORD *)v86;
              if ( (*(_QWORD *)v86 & 0x10) != 0 )
                goto LABEL_145;
              if ( (v92 & 8) != 0 )
              {
                v91 = (unsigned int)v91 | 0x18;
                goto LABEL_146;
              }
              if ( (v92 & 0x10) != 0 )
LABEL_145:
                v91 = (unsigned int)v91 | 8;
LABEL_146:
              if ( (_DWORD)v91 )
              {
LABEL_154:
                v171 = v91;
                v95 = MiSanitizePfnProtection(v173, v91, v182);
                v99 = *(_QWORD *)v86;
                v100 = v95;
                if ( v86 >= 0xFFFFF6FB7DBED000uLL
                  && v86 <= 0xFFFFF6FB7DBED7F8uLL
                  && (unsigned int)MiPteHasShadow(v96, v99, v97, v98)
                  && (v99 & 1) != 0
                  && ((v99 & 0x20) == 0 || (v99 & 0x42) == 0) )
                {
                  v101 = KeGetCurrentThread()->ApcState.Process[1].ProcessListEntry.Flink;
                  if ( v101 )
                  {
                    v102 = *((_QWORD *)&v101->Flink + ((v86 >> 3) & 0x1FF));
                    v103 = v99 | 0x20;
                    if ( (v102 & 0x20) == 0 )
                      v103 = v99;
                    v99 = v103;
                    if ( (v102 & 0x42) != 0 )
                      v99 = v103 | 0x42;
                  }
                }
                v104 = *(_QWORD *)v86;
                do
                {
                  v105 = v104;
                  v104 = _InterlockedCompareExchange64(
                           (volatile signed __int64 *)v86,
                           v99 & 0xF00000000000000LL | (v100 << 60) & 0x7F00000000000000LL | v104 & 0x80FFFFFFFFFFFFFFuLL,
                           v104);
                }
                while ( v105 != v104 );
LABEL_175:
                v110 = BugCheckParameter2;
                MiRevertValidPte(v173, BugCheckParameter2, v100, v72, (__int64)&v218);
                v50 = v110 + 8;
                BugCheckParameter2 = v50;
                goto LABEL_279;
              }
LABEL_147:
              v93 = ((unsigned __int64)MI_READ_PTE_LOCK_FREE(v73 + 16) >> 5) & 0x1F;
              if ( (*(_QWORD *)(v73 + 40) & 0x1000000000LL) != 0 || *(__int64 *)(v73 + 8) <= 0 )
              {
                v94 = KeGetCurrentThread()->ApcState.Process;
                if ( v94[1].Affinity.Bitmap[12]
                  && MiLocateCloneAddress(v94, *(_QWORD *)(v73 + 8) | 0x8000000000000000uLL) )
                {
                  LODWORD(v93) = MmMakeProtectNotWriteCopy[v93];
                }
                v91 = (unsigned int)v93;
              }
              else
              {
                v91 = (unsigned int)MmMakeProtectNotWriteCopy[v93];
              }
              goto LABEL_154;
            }
            Flink = BugCheckParameter2;
            v111 = BugCheckParameter2;
            v112 = (BugCheckParameter2 & 0xFFFFFFFFFFFFF000uLL) + 4088;
            if ( (BugCheckParameter2 & 0xFFFFFFFFFFFFF000uLL) == (v185 & 0xFFFFFFFFFFFFF000uLL) )
              v112 = v185;
            v113 = 0;
            if ( BugCheckParameter2 <= v112 )
            {
              v114 = v181;
              v115 = (_DWORD *)v201;
              while ( 1 )
              {
                v177 = MI_READ_PTE_LOCK_FREE(v111);
                if ( (v177 & 1) == 0
                  || (a5 & 0x101) == 0
                  && (a6 != 1
                   || (v117 = MI_READ_PTE_LOCK_FREE((unsigned __int64)&v177),
                       (unsigned int)MI_PFN_IS_PROTO(48 * ((v117 >> 12) & 0xFFFFFFFFFLL) - 0x58000000000LL))) )
                {
LABEL_192:
                  v51 = v192;
                  goto LABEL_193;
                }
                if ( (MiGetWsleContents(v116, v67) & 0xF) == 8 )
                  break;
                MiInsertTbFlushEntry(&v202, v67, 1LL, 0LL);
                if ( HIDWORD(v205) == (_DWORD)v205 )
                  goto LABEL_187;
LABEL_191:
                v111 += 8LL;
                v67 += 4096LL;
                if ( v111 > v112 )
                  goto LABEL_192;
              }
              v113 = 1;
              *v115 = 1;
LABEL_187:
              if ( HIDWORD(v205) )
                MiFreeWsleList(v114, &v202, 0LL);
              if ( v113 == 1 )
              {
                MiUnlockVa(v114, v67);
                v113 = 0;
              }
              goto LABEL_191;
            }
LABEL_193:
            if ( !HIDWORD(v205) )
            {
              v50 = BugCheckParameter2;
              goto LABEL_279;
            }
            v22 = v181;
            MiFreeWsleList(v181, &v202, 0LL);
            v50 = BugCheckParameter2;
            v36 = v174;
            LOBYTE(v37) = v176;
            v49 = v173;
          }
        }
        if ( (v66 & 0x400) == 0 )
          break;
        if ( (unsigned int)MiIsPrototypePteVadLookup(v66, Flink, v53, v54) )
          goto LABEL_206;
        v121 = v66;
        if ( qword_140C4DD40 && (v66 & 0x10) == 0 )
          v121 = v66 & ~qword_140C4DD40;
        if ( v121 >> 16 == MiGetProtoPteAddress(v49, v67 >> 12, 0, &v196) )
        {
LABEL_206:
          if ( v175 != 5 && (unsigned int)MiIsPrototypePteVadLookup(v66, v118, v119, v120) && (v66 & 0xA0) == 0xA0 )
            ++v184;
          if ( (unsigned int)MiIsPrototypePteVadLookup(v66, v118, v119, v120) )
            v122 = v66 >> 5;
          else
            LODWORD(v122) = *(unsigned __int16 *)(*(_QWORD *)(v49 + 72) + 32LL) >> 1;
          v171 = v122 & 0x1F;
          v123 = MiSanitizePfnProtection(v49, v122 & 0x1F, v182);
          v177 = MiSwizzleInvalidPte(32 * (v123 & 0x1F | 0xFFFFFFFFF8000020uLL), v124, v125, v126);
          v127 = v177;
          v128 = v177;
          if ( !MiPteInShadowRange(v50) )
            goto LABEL_276;
          if ( !(unsigned int)MiPteHasShadow(v129, Flink, v130, v131) )
            goto LABEL_273;
          v132 = HIBYTE(word_140C4DE08) == 0;
LABEL_269:
          v162 = v127;
          if ( v132 && (v127 & 1) != 0 )
            v162 = v127 | 0x8000000000000000uLL;
          *(_QWORD *)v50 = v162;
          MiWritePteShadow(v50, v162);
          v50 += 8LL;
          BugCheckParameter2 = v50;
          goto LABEL_279;
        }
        MiFlushTbList((__int64)&v218, v118);
        LOBYTE(v37) = v176;
        if ( (int)MiMakeProtoLeafValid(v50) < 0 )
        {
          v50 += 8LL;
          BugCheckParameter2 = v50;
        }
        v36 = v174;
        v22 = v181;
        v49 = v173;
        v178 = 1;
      }
      if ( (v66 & 0x800) == 0 )
        break;
      if ( a6 == 1 )
      {
        v133 = MiTryDeleteTransitionPte(v50);
        if ( v133 == 3 )
        {
          ++v195;
        }
        else if ( v133 == 1 )
        {
          goto LABEL_279;
        }
LABEL_225:
        _InterlockedExchangeAdd64((volatile signed __int64 *)(a1 + 1272), 0xFFFFFFFFFFFFFFFFuLL);
LABEL_226:
        UsedPtesHandle = MiGetUsedPtesHandle((__int64)(v50 << 25) >> 16);
        MiDecreaseUsedPtesCount(UsedPtesHandle, 1uLL);
        v134 = 1;
        goto LABEL_228;
      }
      if ( !(unsigned int)MiSetProtectionOnTransitionPte(v49, (unsigned __int64 *)v50, v179, 1LL) )
        goto LABEL_277;
LABEL_279:
      v22 = v181;
      v36 = v174;
      LOBYTE(v37) = v176;
      v49 = v173;
    }
    v134 = 0;
    if ( a6 == 1 )
    {
      if ( v66 )
      {
        MiReleasePageFileSpace(v188, v66);
        if ( (unsigned int)IS_PTE_NOT_DEMAND_ZERO(v66) )
          goto LABEL_225;
        goto LABEL_226;
      }
    }
    else if ( v66 )
    {
      v171 = (v66 >> 5) & 0x1F;
      v179 = MiSanitizePfnProtection(v173, (v66 >> 5) & 0x1F, v179);
      v127 = v66 ^ ((unsigned __int16)v66 ^ (unsigned __int16)(32 * v179)) & 0x3E0;
      v177 = v127;
      v128 = v127;
      if ( !MiPteInShadowRange(v50) )
        goto LABEL_276;
      if ( !(unsigned int)MiPteHasShadow(v159, Flink, v160, v161) )
      {
LABEL_273:
        if ( (HIDWORD(KeGetCurrentThread()->ApcState.Process[2].Header.WaitListHead.Flink) & 0x1000) != 0
          && (v127 & 1) != 0 )
        {
          v128 |= 0x8000000000000000uLL;
        }
LABEL_276:
        *(_QWORD *)v50 = v128;
LABEL_277:
        v50 += 8LL;
        BugCheckParameter2 = v50;
        goto LABEL_279;
      }
      v132 = HIBYTE(word_140C4DE08) == 0;
      goto LABEL_269;
    }
LABEL_228:
    v136 = (v67 >> 18) & 0x3FFFFFF8;
    v137 = *(_QWORD *)((unsigned int)v136 - 0x904C0000000LL);
    if ( MiPteInShadowRange((unsigned int)v136 - 0x904C0000000LL)
      && (unsigned int)MiPteHasShadow(v139, v138, v140, v141)
      && (v137 & 1) != 0
      && ((v137 & 0x20) == 0 || (v137 & 0x42) == 0) )
    {
      v142 = KeGetCurrentThread()->ApcState.Process[1].ProcessListEntry.Flink;
      if ( v142 )
      {
        v143 = *((_QWORD *)&v142->Flink + (((unsigned __int64)(unsigned int)(v136 + 0x40000000) >> 3) & 0x1FF));
        v144 = v137 | 0x20;
        if ( (v143 & 0x20) == 0 )
          v144 = v137;
        v137 = v144;
        if ( (v143 & 0x42) != 0 )
          v137 = v144 | 0x42;
      }
    }
    v197 = v137;
    if ( MiPteInShadowRange((unsigned __int64)&v197)
      && (unsigned int)MiPteHasShadow(v146, v145, v147, v148)
      && (v137 & 1) != 0
      && ((v137 & 0x20) == 0 || (v137 & 0x42) == 0) )
    {
      v145 = (__int64)KeGetCurrentThread()->ApcState.Process[1].ProcessListEntry.Flink;
      if ( v145 )
      {
        v149 = *(_QWORD *)(v145 + 8 * (((unsigned __int64)&v197 >> 3) & 0x1FF));
        v145 = v137 | 0x20;
        if ( (v149 & 0x20) == 0 )
          v145 = v137;
        v137 = v145;
        if ( (v149 & 0x42) != 0 )
          v137 = v145 | 0x42;
      }
    }
    v150 = 48 * ((v137 >> 12) & 0xFFFFFFFFFLL) - 0x58000000000LL;
    v193 = 0;
    while ( _interlockedbittestandset64((volatile signed __int32 *)(v150 + 24), 0x3FuLL) )
    {
      do
        KeYieldProcessorEx(&v193, v145, v147, v148);
      while ( *(__int64 *)(v150 + 24) < 0 );
    }
    *(_QWORD *)(v150 + 16) ^= ((unsigned int)*(_QWORD *)(v150 + 16) ^ ((unsigned int)*(_QWORD *)(v150 + 16) + 0x10000)) & 0x3FF0000;
    _InterlockedAnd64((volatile signed __int64 *)(v150 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    MmIsAddressValidEx(*(_QWORD *)(v150 + 8) | 0x8000000000000000uLL);
    if ( v175 != 5 && (v134 == 1 || !(unsigned int)MiPteNeedsCommitCharge(v173, v50)) )
      ++v184;
    v171 = (*(unsigned __int16 *)(*(_QWORD *)(v173 + 72) + 32LL) >> 1) & 0x1F;
    v151 = MiSanitizePfnProtection(0LL, v171, v182);
    Flink = MiSwizzleInvalidPte(32 * (v151 & 0x1F | 0xFFFFFFFFF8000020uLL), v152, v153, v154);
    v177 = Flink;
    if ( v50 < 0xFFFFF6FB7DBED000uLL || v50 > 0xFFFFF6FB7DBED7F8uLL )
      goto LABEL_265;
    if ( !(unsigned int)MiPteHasShadow(v155, Flink, v156, v157) )
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
    v158 = Flink;
    if ( !HIBYTE(word_140C4DE08) && (Flink & 1) != 0 )
      v158 = Flink | 0x8000000000000000uLL;
    *(_QWORD *)v50 = v158;
    MiWritePteShadow(v50, v158);
    v50 += 8LL;
    BugCheckParameter2 = v50;
    goto LABEL_279;
  }
  if ( v180 )
    MiReturnFullProcessCommitment(a1);
  return (unsigned int)v32;
}
