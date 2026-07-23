/*
 * XREFs of MiSetProtectionOnSection @ 0x14033D9C0
 * Callers:
 *     MiCommitPagefileBackedSection @ 0x1405FAC44 (MiCommitPagefileBackedSection.c)
 *     MiUnsecureVirtualMemoryAgainstWrites @ 0x140689564 (MiUnsecureVirtualMemoryAgainstWrites.c)
 *     MiAllocateVirtualMemory @ 0x1406E7DB0 (MiAllocateVirtualMemory.c)
 *     MmProtectVirtualMemory @ 0x1406E97C0 (MmProtectVirtualMemory.c)
 *     MiMarkSharedImageCfgBits @ 0x1407009E4 (MiMarkSharedImageCfgBits.c)
 * Callees:
 *     MiUnlockPageTableInternal @ 0x140202790 (MiUnlockPageTableInternal.c)
 *     MiCountSharedPages @ 0x140209600 (MiCountSharedPages.c)
 *     MiPteNeedsCommitCharge @ 0x140209B38 (MiPteNeedsCommitCharge.c)
 *     MiIsPrototypePteVadLookup @ 0x14020A670 (MiIsPrototypePteVadLookup.c)
 *     KeShouldYieldProcessor @ 0x140211F40 (KeShouldYieldProcessor.c)
 *     ExpWaitForSpinLockSharedAndAcquire @ 0x140213930 (ExpWaitForSpinLockSharedAndAcquire.c)
 *     MiTryDeleteTransitionPte @ 0x140224A38 (MiTryDeleteTransitionPte.c)
 *     MiSetProtectionOnTransitionPte @ 0x140224A84 (MiSetProtectionOnTransitionPte.c)
 *     MiWritePteShadow @ 0x140234B9C (MiWritePteShadow.c)
 *     MiPteHasShadow @ 0x140234BFC (MiPteHasShadow.c)
 *     MiMakeProtoLeafValid @ 0x14023B164 (MiMakeProtoLeafValid.c)
 *     MiDecreaseUsedPtesCount @ 0x14023F794 (MiDecreaseUsedPtesCount.c)
 *     MiUnlockVa @ 0x14025DAA0 (MiUnlockVa.c)
 *     MiGetWsleContents @ 0x14025ECE0 (MiGetWsleContents.c)
 *     MmAccessFault @ 0x1402B1990 (MmAccessFault.c)
 *     MiFastLockLeafPageTable @ 0x1402B2FD0 (MiFastLockLeafPageTable.c)
 *     MiUnlockWorkingSetShared @ 0x1402B4090 (MiUnlockWorkingSetShared.c)
 *     MiLockWorkingSetShared @ 0x1402BE5B0 (MiLockWorkingSetShared.c)
 *     MiMakeProtectionMask @ 0x1402BF320 (MiMakeProtectionMask.c)
 *     MiChargeCommit @ 0x1402BF3D0 (MiChargeCommit.c)
 *     MiVadPureReserve @ 0x1402C0290 (MiVadPureReserve.c)
 *     IS_PTE_NOT_DEMAND_ZERO @ 0x1402E08FC (IS_PTE_NOT_DEMAND_ZERO.c)
 *     MiLocateCloneAddress @ 0x1402E3758 (MiLocateCloneAddress.c)
 *     MiCopyOnWrite @ 0x1402E3B50 (MiCopyOnWrite.c)
 *     KeYieldProcessorEx @ 0x1402EFAD0 (KeYieldProcessorEx.c)
 *     ExfTryToWakePushLock @ 0x1402FC2C0 (ExfTryToWakePushLock.c)
 *     MiReleasePageFileSpace @ 0x14030DEA4 (MiReleasePageFileSpace.c)
 *     MiLockLowestValidPageTable @ 0x140310310 (MiLockLowestValidPageTable.c)
 *     MmIsAddressValidEx @ 0x140317240 (MmIsAddressValidEx.c)
 *     MiGetUsedPtesHandle @ 0x1403177B0 (MiGetUsedPtesHandle.c)
 *     MiComputePageCommitment @ 0x1403178B0 (MiComputePageCommitment.c)
 *     MiReturnCommit @ 0x140322FF0 (MiReturnCommit.c)
 *     MiReturnFullProcessCharges @ 0x1403230C0 (MiReturnFullProcessCharges.c)
 *     MiFreeWsleList @ 0x140332070 (MiFreeWsleList.c)
 *     MiSwizzleInvalidPte @ 0x140334CE0 (MiSwizzleInvalidPte.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x140338C10 (MI_READ_PTE_LOCK_FREE.c)
 *     MiQueryAddressState @ 0x14033A480 (MiQueryAddressState.c)
 *     MiGetProtoPteAddress @ 0x14033B890 (MiGetProtoPteAddress.c)
 *     MiSanitizePfnProtection @ 0x14033EFE0 (MiSanitizePfnProtection.c)
 *     MiRevertValidPte @ 0x14033F050 (MiRevertValidPte.c)
 *     MiInsertTbFlushEntry @ 0x140340AC0 (MiInsertTbFlushEntry.c)
 *     MiFlushTbList @ 0x140346270 (MiFlushTbList.c)
 *     MiPteInShadowRange @ 0x140353840 (MiPteInShadowRange.c)
 *     KeAbPostRelease @ 0x1403539D0 (KeAbPostRelease.c)
 *     ExAcquirePushLockExclusiveEx @ 0x1403556E0 (ExAcquirePushLockExclusiveEx.c)
 *     KiLeaveGuardedRegionUnsafe @ 0x140355AE0 (KiLeaveGuardedRegionUnsafe.c)
 *     __security_check_cookie @ 0x1403D05D0 (__security_check_cookie.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403F3684 (KiRemoveSystemWorkPriorityKick.c)
 *     MI_PFN_IS_PROTO @ 0x1403F48C8 (MI_PFN_IS_PROTO.c)
 *     KeBugCheckEx @ 0x1403FE0D0 (KeBugCheckEx.c)
 *     MiFlushAllFilesystemPages @ 0x140535808 (MiFlushAllFilesystemPages.c)
 *     MiCopyOnWriteCheckConditions @ 0x14055C138 (MiCopyOnWriteCheckConditions.c)
 *     ExpAcquireSpinLockSharedAtDpcLevelInstrumented @ 0x1405B5E94 (ExpAcquireSpinLockSharedAtDpcLevelInstrumented.c)
 *     MiChargeFullProcessCommitment @ 0x1406E8830 (MiChargeFullProcessCommitment.c)
 *     MiCommitPageTablesForVad @ 0x1406E8900 (MiCommitPageTablesForVad.c)
 *     MiReturnFullProcessCommitment @ 0x140705C18 (MiReturnFullProcessCommitment.c)
 *     MiImageVadHotPatchEligible @ 0x1407077F8 (MiImageVadHotPatchEligible.c)
 *     MiGetImageHotPatchTableAddress @ 0x1408CA328 (MiGetImageHotPatchTableAddress.c)
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
  char *v14; // r9
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
  __int64 v48; // r15
  ULONG_PTR v49; // r12
  unsigned int v50; // r14d
  unsigned __int64 v51; // r11
  unsigned __int64 v52; // r9
  LONG *v53; // rax
  __int64 v54; // rdx
  __int64 v55; // r8
  _DWORD *v56; // r9
  unsigned __int64 v57; // rdi
  _KPROCESS *Process; // r13
  unsigned __int64 v59; // r15
  int v60; // r12d
  int v61; // eax
  ULONG_PTR v62; // rdi
  unsigned __int64 valid; // rax
  int v64; // eax
  __int64 v65; // rdx
  __int64 v66; // r8
  _DWORD *v67; // r9
  ULONG_PTR v68; // rdi
  unsigned __int64 v69; // rbx
  ULONG_PTR v70; // r13
  struct _LIST_ENTRY *Flink; // rdx
  __int64 v72; // rax
  __int64 v73; // rdx
  unsigned __int64 v74; // r15
  struct _LIST_ENTRY *v75; // rdx
  __int64 v76; // rax
  __int64 v77; // r15
  unsigned __int64 v78; // rdi
  __int64 v79; // r8
  __int64 v80; // r15
  unsigned __int64 v81; // r12
  _QWORD *CloneAddress; // rbx
  __int64 v83; // rcx
  _QWORD *v84; // r9
  __int64 v85; // rdx
  __int64 v86; // r8
  _DWORD *v87; // r9
  __int64 v88; // rdx
  __int64 v89; // r8
  __int64 v90; // r9
  __int64 v91; // r10
  unsigned __int64 v92; // rbx
  unsigned __int64 v93; // rdx
  struct _LIST_ENTRY *v94; // r8
  __int64 v95; // rax
  __int64 v96; // r8
  __int64 v97; // rdx
  unsigned __int64 v98; // rax
  unsigned __int64 v99; // r8
  _KPROCESS *v100; // rcx
  unsigned int v101; // eax
  __int64 v102; // rdx
  __int64 v103; // r10
  struct _LIST_ENTRY *v104; // r8
  __int64 v105; // rax
  __int64 v106; // r8
  signed __int64 v107; // rax
  signed __int64 v108; // rtt
  __int64 v109; // r9
  __int64 v110; // rax
  ULONG_PTR v111; // r12
  ULONG_PTR v112; // rdi
  ULONG_PTR v113; // r15
  char v114; // bl
  __int64 v115; // r14
  _DWORD *v116; // rsi
  __int64 v117; // rcx
  unsigned __int64 v118; // rax
  __int64 v119; // rdi
  unsigned __int64 v120; // rbx
  char v121; // al
  unsigned __int64 v122; // rdi
  __int64 v123; // rbx
  bool v124; // zf
  int v125; // eax
  char v126; // r15
  ULONG_PTR UsedPtesHandle; // rax
  __int64 v128; // r13
  unsigned __int64 v129; // rbx
  struct _LIST_ENTRY *v130; // rax
  __int64 v131; // rax
  __int64 v132; // rdx
  __int64 v133; // rdx
  __int64 v134; // r8
  __int64 v135; // r9
  __int64 v136; // rax
  __int64 v137; // rbx
  char v138; // al
  __int64 v139; // rdx
  unsigned __int64 v140; // rax
  unsigned __int64 v141; // rdx
  _DWORD *v142; // rsi
  __int64 v143; // rax
  __int64 v144; // r14
  __int64 v145; // rbx
  __int64 v146; // r8
  __int64 v147; // rdx
  unsigned __int64 v148; // r8
  unsigned int v150; // [rsp+58h] [rbp-A8h] BYREF
  ULONG_PTR BugCheckParameter1; // [rsp+60h] [rbp-A0h]
  ULONG_PTR v152; // [rsp+68h] [rbp-98h]
  unsigned __int64 v153; // [rsp+70h] [rbp-90h]
  int v154; // [rsp+78h] [rbp-88h]
  __int64 v155; // [rsp+80h] [rbp-80h]
  __int64 v156; // [rsp+88h] [rbp-78h] BYREF
  int v157; // [rsp+90h] [rbp-70h]
  unsigned int v158; // [rsp+94h] [rbp-6Ch]
  _DWORD *v159; // [rsp+98h] [rbp-68h] BYREF
  __int64 v160; // [rsp+A0h] [rbp-60h]
  unsigned int v161; // [rsp+A8h] [rbp-58h]
  __int16 v162; // [rsp+ACh] [rbp-54h] BYREF
  __int64 v163; // [rsp+B0h] [rbp-50h]
  ULONG_PTR v164; // [rsp+B8h] [rbp-48h]
  int v165; // [rsp+C0h] [rbp-40h]
  char *v166; // [rsp+C8h] [rbp-38h]
  __int64 v167; // [rsp+D0h] [rbp-30h]
  int v168; // [rsp+D8h] [rbp-28h] BYREF
  int v169; // [rsp+DCh] [rbp-24h] BYREF
  int v170; // [rsp+E0h] [rbp-20h] BYREF
  unsigned int v171; // [rsp+E4h] [rbp-1Ch]
  int v172; // [rsp+E8h] [rbp-18h] BYREF
  struct _KTHREAD *CurrentThread; // [rsp+F0h] [rbp-10h]
  _DWORD *v174; // [rsp+F8h] [rbp-8h]
  __int64 v175; // [rsp+100h] [rbp+0h] BYREF
  unsigned __int64 v176; // [rsp+108h] [rbp+8h] BYREF
  __int64 v177; // [rsp+110h] [rbp+10h]
  __int64 v178; // [rsp+118h] [rbp+18h] BYREF
  unsigned __int64 v179; // [rsp+120h] [rbp+20h] BYREF
  __int64 v180; // [rsp+128h] [rbp+28h]
  int v181; // [rsp+130h] [rbp+30h] BYREF
  __int16 v182; // [rsp+134h] [rbp+34h]
  __int16 v183; // [rsp+136h] [rbp+36h]
  __int64 v184; // [rsp+138h] [rbp+38h]
  char *v185; // [rsp+140h] [rbp+40h]
  char *v186; // [rsp+148h] [rbp+48h]
  __int128 v187; // [rsp+150h] [rbp+50h]
  __int128 v188; // [rsp+160h] [rbp+60h]
  __int128 v189; // [rsp+170h] [rbp+70h]
  __int128 v190; // [rsp+180h] [rbp+80h]
  __int128 v191; // [rsp+190h] [rbp+90h]
  __int128 v192; // [rsp+1A0h] [rbp+A0h]
  __int128 v193; // [rsp+1B0h] [rbp+B0h]
  __int128 v194; // [rsp+1C0h] [rbp+C0h]
  __int128 v195; // [rsp+1D0h] [rbp+D0h]
  __int64 v196; // [rsp+1E0h] [rbp+E0h]
  int v197; // [rsp+1F0h] [rbp+F0h] BYREF
  __int16 v198; // [rsp+1F4h] [rbp+F4h]
  __int16 v199; // [rsp+1F6h] [rbp+F6h]
  __int64 v200; // [rsp+1F8h] [rbp+F8h]
  char *v201; // [rsp+200h] [rbp+100h]
  char *v202; // [rsp+208h] [rbp+108h]
  __int128 v203; // [rsp+210h] [rbp+110h]
  __int128 v204; // [rsp+220h] [rbp+120h]
  __int128 v205; // [rsp+230h] [rbp+130h]
  __int128 v206; // [rsp+240h] [rbp+140h]
  __int128 v207; // [rsp+250h] [rbp+150h]
  __int128 v208; // [rsp+260h] [rbp+160h]
  __int128 v209; // [rsp+270h] [rbp+170h]
  __int128 v210; // [rsp+280h] [rbp+180h]
  __int128 v211; // [rsp+290h] [rbp+190h]
  __int64 v212; // [rsp+2A0h] [rbp+1A0h]

  v180 = a8;
  v152 = a2;
  v183 = 0;
  v196 = 0LL;
  v10 = a2;
  v199 = 0;
  v212 = 0LL;
  v11 = *(_DWORD *)(a2 + 48) & 0x70;
  v168 = 0;
  v178 = 0LL;
  v175 = 0LL;
  v150 = 0;
  v169 = 0;
  v156 = 0LL;
  v162 = 0;
  v187 = 0LL;
  v188 = 0LL;
  v189 = 0LL;
  v190 = 0LL;
  v191 = 0LL;
  v192 = 0LL;
  v193 = 0LL;
  v194 = 0LL;
  v195 = 0LL;
  v203 = 0LL;
  v204 = 0LL;
  v205 = 0LL;
  v206 = 0LL;
  v207 = 0LL;
  v208 = 0LL;
  v209 = 0LL;
  v210 = 0LL;
  v211 = 0LL;
  if ( v11 == 32 && (unsigned int)MiImageVadHotPatchEligible(a2) && MiGetImageHotPatchTableAddress(v10) <= a4 )
    return 3221225541LL;
  ProtectionMask = MiMakeProtectionMask(a5);
  v161 = ProtectionMask;
  v15 = ProtectionMask;
  if ( ProtectionMask == -1 )
    return 3221225541LL;
  v17 = ProtectionMask & 0xFFFFFFFE;
  v18 = ProtectionMask & 5;
  v166 = v14;
  v174 = v14;
  if ( v18 != 5 )
    v17 = v15;
  v200 = 20LL;
  v158 = v17;
  v19 = (__int64)v14;
  v197 = 1;
  v198 = (__int16)v14;
  v201 = v14;
  v202 = v14;
  v154 = v18;
  v20 = ((a3 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  BugCheckParameter1 = v20;
  v21 = ((a4 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  v165 = (int)v14;
  v22 = v13 + 1664;
  CurrentThread = KeGetCurrentThread();
  v23 = *(_QWORD *)(v13 + 1680);
  v184 = 20LL;
  v181 = 1;
  v182 = 4;
  v185 = v14;
  v186 = v14;
  v164 = v21;
  v159 = v14;
  v160 = v13 + 1664;
  if ( *(char **)(v23 + 360) != v14 )
  {
    v24 = *(unsigned int *)(v10 + 52);
    LODWORD(v24) = v24 & 0x7FFFFFFF;
    if ( v24 | ((unsigned __int64)*(unsigned __int8 *)(v10 + 34) << 31) )
    {
      v25 = MiLockWorkingSetShared(v13 + 1664, v21, v13, v14);
      MiComputePageCommitment(a3, a4, v10, v25, 0, &v159);
      MiUnlockWorkingSetShared(v22, v25);
      if ( v159 )
      {
        result = MiChargeFullProcessCommitment(a1, v159);
        if ( (int)result < 0 )
          return result;
      }
      v21 = v164;
      v20 = BugCheckParameter1;
    }
  }
  v167 = *(_QWORD *)(qword_140C4E688 + 8LL * *(unsigned __int16 *)(v22 + 174));
  if ( v154 != 5 )
    goto LABEL_21;
  v26 = MiCountSharedPages(v10, v20, v21);
  v19 = v26;
  if ( a6 == 1 )
  {
    v27 = ((__int64)(v164 - v20) >> 3) - v26;
    v124 = v27 == -1;
    v28 = v27 + 1;
    v166 = (char *)v28;
    if ( !v124 && !(unsigned int)MiChargeCommit(v167, v28, 0) )
    {
      if ( v159 )
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
      v165 = 1;
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
        if ( v166 )
        {
          MiReturnCommit(v167, v19);
        }
        else if ( v19 )
        {
          v31 = a1;
          MiReturnFullProcessCommitment(a1);
          goto LABEL_28;
        }
        v31 = a1;
LABEL_28:
        if ( v159 )
          MiReturnFullProcessCommitment(v31);
        return (unsigned int)v30;
      }
      v10 = v152;
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
    v157 = 1;
    v163 = 0LL;
    v36 = 0LL;
    v153 = 0LL;
    if ( v35 < 6u )
    {
      v39 = &dword_140C4F7C0;
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
      v36 = v153;
      LOBYTE(v37) = CurrentIrql;
      v155 = CurrentIrql;
    }
    else
    {
      v37 = KeGetCurrentIrql();
      v155 = v37;
      __writecr8(2uLL);
      if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && (unsigned __int8)v37 <= 0xFu )
      {
        v38 = KeGetCurrentPrcb()->SchedulerAssist;
        v38[5] |= ~((unsigned __int8)(1LL << ((unsigned __int8)v37 + 1)) - 1) & 4;
      }
    }
    MiQueryAddressState(a3, a3, v37, v152, 0LL, (int *)&v150, &v169, &v162, &v178, &v168);
    v48 = v152;
    *a7 = MmProtectToValue[v150];
    v49 = BugCheckParameter1;
    v50 = (*(_DWORD *)(v48 + 48) >> 12) & 0x3F;
    v171 = v50;
    while ( 1 )
    {
      while ( 1 )
      {
        while ( 1 )
        {
          if ( v49 > v164 )
          {
            MiFlushTbList(&v197);
            if ( v36 )
              MiUnlockPageTableInternal(v22, v36);
            MiUnlockWorkingSetShared(v22, v37);
            if ( v165 == 1 )
            {
              if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)(a1 + 1232), 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
                ExfTryToWakePushLock(a1 + 1232);
              KeAbPostRelease(a1 + 1232);
              KiLeaveGuardedRegionUnsafe(CurrentThread);
            }
            v142 = v174;
            v143 = (__int64)v166;
            if ( v174 && v154 == 5 )
            {
              v143 = v166 - (char *)v174;
              v142 = 0LL;
            }
            v144 = v167;
            if ( v143 )
              MiReturnCommit(v167, v143);
            v145 = v163;
            if ( v163 )
            {
              v146 = *(unsigned int *)(v48 + 52);
              LODWORD(v146) = v146 & 0x7FFFFFFF;
              v147 = v163 - (_QWORD)v142;
              v148 = (((unsigned __int64)*(unsigned __int8 *)(v48 + 34) << 31) | v146) - v163;
              *(_DWORD *)(v48 + 52) ^= (*(_DWORD *)(v48 + 52) ^ v148) & 0x7FFFFFFF;
              *(_BYTE *)(v48 + 34) = v148 >> 31;
              MiReturnCommit(v144, v147);
              MiReturnFullProcessCharges(a1, v145);
            }
            if ( v159 )
              MiReturnFullProcessCommitment(a1);
            return 0LL;
          }
          v51 = 0xFFFFFA8000000000uLL;
          v52 = 0xFFFFF6FB7DBED7F8uLL;
          if ( (v49 & 0xFFF) == 0 || v157 == 1 )
          {
            v157 = 0;
            if ( v36 )
            {
              MiFlushTbList(&v197);
              MiUnlockPageTableInternal(v22, v36);
            }
            v53 = &dword_140C4F7C0;
            if ( (*(_BYTE *)(v22 + 184) & 7) != 2 )
              v53 = (LONG *)(v22 + 192);
            if ( (*v53 & 0x40000000) != 0 || KeShouldYieldProcessor() )
            {
              MiUnlockWorkingSetShared(v22, v37);
              MiLockWorkingSetShared(v22, v54, v55, v56);
            }
            v57 = ((v49 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
            v153 = v57;
            v179 = 0LL;
            Process = KeGetCurrentThread()->ApcState.Process;
            v59 = (__int64)(v49 << 25) >> 16;
            if ( v59 < 0xFFFFF68000000000uLL || (v60 = 0, v59 > 0xFFFFF6FFFFFFFFFFuLL) )
              v60 = 1;
            while ( 1 )
            {
              if ( v60 )
              {
                v61 = MiFastLockLeafPageTable((__int64)&Process[1].ActiveProcessorsPadding[6], v59, 0);
                if ( v61 )
                  break;
              }
              v62 = BugCheckParameter1;
              valid = MiLockLowestValidPageTable(
                        (__int64)&Process[1].ActiveProcessorsPadding[6],
                        BugCheckParameter1,
                        &v179);
              if ( valid == v153 )
                goto LABEL_88;
              MiUnlockPageTableInternal((__int64)&Process[1].ActiveProcessorsPadding[6], valid);
              MiFlushTbList(&v197);
              MiUnlockWorkingSetShared((__int64)&Process[1].ActiveProcessorsPadding[6], v155);
              v64 = MmAccessFault(((unsigned __int64)v50 << 57) | 0x100000000000002LL, v62, 0, 0LL);
              v68 = v64;
              if ( v64 < 0 )
              {
                MiFlushAllFilesystemPages(1LL);
                KeBugCheckEx(0x7Au, 1uLL, v68, (ULONG_PTR)Process, BugCheckParameter1);
              }
              MiLockWorkingSetShared((__int64)&Process[1].ActiveProcessorsPadding[6], v65, v66, v67);
              v57 = v153;
            }
            if ( v61 != 1 )
            {
              while ( 1 )
                v57 = ((v57 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
            }
LABEL_88:
            v49 = BugCheckParameter1;
            v48 = v152;
            v52 = 0xFFFFF6FB7DBED7F8uLL;
            v51 = 0xFFFFFA8000000000uLL;
          }
          v69 = *(_QWORD *)v49;
          v70 = (__int64)(v49 << 25) >> 16;
          if ( v49 >= 0xFFFFF6FB7DBED000uLL
            && v49 <= 0xFFFFF6FB7DBED7F8uLL
            && (unsigned int)MiPteHasShadow()
            && (v69 & 1) != 0
            && ((v69 & 0x20) == 0 || (v69 & 0x42) == 0) )
          {
            Flink = KeGetCurrentThread()->ApcState.Process[1].ProcessListEntry.Flink;
            if ( Flink )
            {
              v72 = *((_QWORD *)&Flink->Flink + ((v49 >> 3) & 0x1FF));
              v73 = v69 | 0x20;
              if ( (v72 & 0x20) == 0 )
                v73 = v69;
              v69 = v73;
              if ( (v72 & 0x42) != 0 )
                v69 = v73 | 0x42;
            }
          }
          v156 = v69;
          if ( (v69 & 1) == 0 )
            break;
          v74 = v69;
          if ( (unsigned __int64)&v156 >= 0xFFFFF6FB7DBED000uLL
            && (unsigned __int64)&v156 <= v52
            && (unsigned int)MiPteHasShadow()
            && ((v69 & 0x20) == 0 || (v69 & 0x42) == 0) )
          {
            v75 = KeGetCurrentThread()->ApcState.Process[1].ProcessListEntry.Flink;
            if ( v75 )
            {
              v74 = v69 | 0x20;
              v76 = *((_QWORD *)&v75->Flink + (((unsigned __int64)&v156 >> 3) & 0x1FF));
              if ( (v76 & 0x20) == 0 )
                v74 = v69;
              if ( (v76 & 0x42) != 0 )
                v74 |= 0x42uLL;
            }
          }
          v77 = (v74 >> 12) & 0xFFFFFFFFFLL;
          v177 = v77;
          v78 = v51 + 48 * v77;
          if ( (unsigned int)MI_PFN_IS_PROTO(v78) )
          {
            v80 = *(_QWORD *)(v78 + 8);
            v81 = v79 | v80;
            if ( (v79 | v80) == MiGetProtoPteAddress(v152, v70 >> 12, 0, &v175) )
            {
              LODWORD(v77) = v177;
              goto LABEL_122;
            }
            CloneAddress = 0LL;
            if ( (*(_QWORD *)(v78 + 40) & 0x1000000000LL) != 0 || v80 <= 0 )
            {
              CloneAddress = MiLocateCloneAddress(a1, v81);
              if ( *(_QWORD *)(*(_QWORD *)(v83 + 1680) + 360LL) <= CloneAddress[12] )
                CloneAddress = v84;
            }
            MiFlushTbList(&v197);
            v49 = BugCheckParameter1;
            LODWORD(v37) = MiCopyOnWrite(v70, (ULONG_PTR *)BugCheckParameter1, -1LL, 0);
            if ( (int)v37 >= 0 )
            {
              if ( CloneAddress )
                v159 = (_DWORD *)((char *)v159 - 1);
              goto LABEL_279;
            }
            v22 = v160;
            MiUnlockPageTableInternal(v160, v153);
            MiUnlockWorkingSetShared(v22, v155);
            MiCopyOnWriteCheckConditions(v22, (unsigned int)v37);
            v157 = 1;
            v153 = 0LL;
            v36 = 0LL;
            MiLockWorkingSetShared(v22, v85, v86, v87);
            LOBYTE(v37) = v155;
            v48 = v152;
          }
          else
          {
LABEL_122:
            if ( (a5 & 0x101) == 0 && (a6 != 1 || (unsigned int)MI_PFN_IS_PROTO(v78)) )
            {
              if ( !(unsigned int)MI_PFN_IS_PROTO(v78) )
              {
                v170 = 0;
                while ( _interlockedbittestandset64((volatile signed __int32 *)(v78 + 24), 0x3FuLL) )
                {
                  do
                    KeYieldProcessorEx(&v170, v88, v89, v90);
                  while ( *(__int64 *)(v78 + 24) < 0 );
                }
                LODWORD(v103) = MiSanitizePfnProtection(v152, (*(_QWORD *)(v78 + 16) >> 5) & 0x1FLL, v158);
                v110 = 32 * (v103 & 0x1F);
                if ( v109 )
                  *(_QWORD *)(v78 + 16) = v110 | v109 & 0xFFFFFFFFFFFFFC1FuLL;
                else
                  *(_QWORD *)(v78 + 16) = MiSwizzleInvalidPte(v110);
                _InterlockedAnd64((volatile signed __int64 *)(v78 + 24), 0x7FFFFFFFFFFFFFFFuLL);
                goto LABEL_175;
              }
              if ( v154 != 5 && (v69 & 0x200) != 0 )
                ++v163;
              v92 = v91 + ((v70 >> 9) & 0x7FFFFFFFF8LL);
              v93 = *(_QWORD *)v92;
              if ( v92 >= 0xFFFFF6FB7DBED000uLL
                && v92 <= 0xFFFFF6FB7DBED7F8uLL
                && (unsigned int)MiPteHasShadow()
                && (v93 & 1) != 0
                && ((v93 & 0x20) == 0 || (v93 & 0x42) == 0) )
              {
                v94 = KeGetCurrentThread()->ApcState.Process[1].ProcessListEntry.Flink;
                if ( v94 )
                {
                  v95 = *((_QWORD *)&v94->Flink + ((v92 >> 3) & 0x1FF));
                  v96 = v93 | 0x20;
                  if ( (v95 & 0x20) == 0 )
                    v96 = v93;
                  v93 = v96;
                  if ( (v95 & 0x42) != 0 )
                    v93 = v96 | 0x42;
                }
              }
              v97 = (v93 >> 60) & 7;
              if ( !(_DWORD)v97 )
                goto LABEL_147;
              v98 = *(_QWORD *)v92;
              if ( (*(_QWORD *)v92 & 0x10) != 0 )
                goto LABEL_145;
              if ( (v98 & 8) != 0 )
              {
                v97 = (unsigned int)v97 | 0x18;
                goto LABEL_146;
              }
              if ( (v98 & 0x10) != 0 )
LABEL_145:
                v97 = (unsigned int)v97 | 8;
LABEL_146:
              if ( (_DWORD)v97 )
              {
LABEL_154:
                v150 = v97;
                v101 = MiSanitizePfnProtection(v152, v97, v161);
                v102 = *(_QWORD *)v92;
                v103 = v101;
                if ( v92 >= 0xFFFFF6FB7DBED000uLL
                  && v92 <= 0xFFFFF6FB7DBED7F8uLL
                  && (unsigned int)MiPteHasShadow()
                  && (v102 & 1) != 0
                  && ((v102 & 0x20) == 0 || (v102 & 0x42) == 0) )
                {
                  v104 = KeGetCurrentThread()->ApcState.Process[1].ProcessListEntry.Flink;
                  if ( v104 )
                  {
                    v105 = *((_QWORD *)&v104->Flink + ((v92 >> 3) & 0x1FF));
                    v106 = v102 | 0x20;
                    if ( (v105 & 0x20) == 0 )
                      v106 = v102;
                    v102 = v106;
                    if ( (v105 & 0x42) != 0 )
                      v102 = v106 | 0x42;
                  }
                }
                v107 = *(_QWORD *)v92;
                do
                {
                  v108 = v107;
                  v107 = _InterlockedCompareExchange64(
                           (volatile signed __int64 *)v92,
                           v102 & 0xF00000000000000LL | (v103 << 60) & 0x7F00000000000000LL | v107 & 0x80FFFFFFFFFFFFFFuLL,
                           v107);
                }
                while ( v108 != v107 );
LABEL_175:
                v111 = BugCheckParameter1;
                MiRevertValidPte(v152, BugCheckParameter1, v103, v77, (__int64)&v197);
                v49 = v111 + 8;
                BugCheckParameter1 = v49;
                goto LABEL_279;
              }
LABEL_147:
              v99 = ((unsigned __int64)MI_READ_PTE_LOCK_FREE(v78 + 16) >> 5) & 0x1F;
              if ( (*(_QWORD *)(v78 + 40) & 0x1000000000LL) != 0 || *(__int64 *)(v78 + 8) <= 0 )
              {
                v100 = KeGetCurrentThread()->ApcState.Process;
                if ( v100[1].Affinity.Bitmap[12]
                  && MiLocateCloneAddress((__int64)v100, *(_QWORD *)(v78 + 8) | 0x8000000000000000uLL) )
                {
                  LODWORD(v99) = MmMakeProtectNotWriteCopy[v99];
                }
                v97 = (unsigned int)v99;
              }
              else
              {
                v97 = (unsigned int)MmMakeProtectNotWriteCopy[v99];
              }
              goto LABEL_154;
            }
            v112 = BugCheckParameter1;
            v113 = (BugCheckParameter1 & 0xFFFFFFFFFFFFF000uLL) + 4088;
            if ( (BugCheckParameter1 & 0xFFFFFFFFFFFFF000uLL) == (v164 & 0xFFFFFFFFFFFFF000uLL) )
              v113 = v164;
            v114 = 0;
            if ( BugCheckParameter1 <= v113 )
            {
              v115 = v160;
              v116 = (_DWORD *)v180;
              while ( 1 )
              {
                v156 = MI_READ_PTE_LOCK_FREE(v112);
                if ( (v156 & 1) == 0
                  || (a5 & 0x101) == 0
                  && (a6 != 1
                   || (v118 = MI_READ_PTE_LOCK_FREE((unsigned __int64)&v156),
                       (unsigned int)MI_PFN_IS_PROTO(48 * ((v118 >> 12) & 0xFFFFFFFFFLL) - 0x58000000000LL))) )
                {
LABEL_192:
                  v50 = v171;
                  goto LABEL_193;
                }
                if ( (MiGetWsleContents(v117, v70) & 0xF) == 8 )
                  break;
                MiInsertTbFlushEntry(&v181, v70, 1LL, 0LL);
                if ( HIDWORD(v184) == (_DWORD)v184 )
                  goto LABEL_187;
LABEL_191:
                v112 += 8LL;
                v70 += 4096LL;
                if ( v112 > v113 )
                  goto LABEL_192;
              }
              v114 = 1;
              *v116 = 1;
LABEL_187:
              if ( HIDWORD(v184) )
                MiFreeWsleList(v115, (__int64)&v181, 0);
              if ( v114 == 1 )
              {
                MiUnlockVa(v115, v70);
                v114 = 0;
              }
              goto LABEL_191;
            }
LABEL_193:
            if ( !HIDWORD(v184) )
            {
              v49 = BugCheckParameter1;
              goto LABEL_279;
            }
            v22 = v160;
            MiFreeWsleList(v160, (__int64)&v181, 0);
            v49 = BugCheckParameter1;
            v36 = v153;
            LOBYTE(v37) = v155;
            v48 = v152;
          }
        }
        if ( (v69 & 0x400) == 0 )
          break;
        if ( MiIsPrototypePteVadLookup(v69) )
          goto LABEL_206;
        v119 = v69;
        if ( qword_140C4DF80 && (v69 & 0x10) == 0 )
          v119 = v69 & ~qword_140C4DF80;
        if ( v119 >> 16 == MiGetProtoPteAddress(v48, v70 >> 12, 0, &v175) )
        {
LABEL_206:
          if ( v154 != 5 && MiIsPrototypePteVadLookup(v69) && (v69 & 0xA0) == 0xA0 )
            ++v163;
          if ( MiIsPrototypePteVadLookup(v69) )
            v120 = v69 >> 5;
          else
            LODWORD(v120) = *(unsigned __int16 *)(*(_QWORD *)(v48 + 72) + 32LL) >> 1;
          v150 = v120 & 0x1F;
          v121 = MiSanitizePfnProtection(v48, v120 & 0x1F, v161);
          v156 = MiSwizzleInvalidPte(32 * (v121 & 0x1F | 0xFFFFFFFFF8000020uLL));
          v122 = v156;
          v123 = v156;
          if ( !(unsigned int)MiPteInShadowRange(v49) )
            goto LABEL_276;
          if ( !(unsigned int)MiPteHasShadow() )
            goto LABEL_273;
          v124 = HIBYTE(word_140C4E048) == 0;
LABEL_269:
          v141 = v122;
          if ( v124 && (v122 & 1) != 0 )
            v141 = v122 | 0x8000000000000000uLL;
          *(_QWORD *)v49 = v141;
          MiWritePteShadow(v49, v141);
          v49 += 8LL;
          BugCheckParameter1 = v49;
          goto LABEL_279;
        }
        MiFlushTbList(&v197);
        LOBYTE(v37) = v155;
        if ( (int)MiMakeProtoLeafValid(v49, 1LL, v155) < 0 )
        {
          v49 += 8LL;
          BugCheckParameter1 = v49;
        }
        v36 = v153;
        v22 = v160;
        v48 = v152;
        v157 = 1;
      }
      if ( (v69 & 0x800) == 0 )
        break;
      if ( a6 == 1 )
      {
        v125 = MiTryDeleteTransitionPte(v49);
        if ( v125 == 3 )
        {
          v174 = (_DWORD *)((char *)v174 + 1);
        }
        else if ( v125 == 1 )
        {
          goto LABEL_279;
        }
LABEL_225:
        _InterlockedExchangeAdd64((volatile signed __int64 *)(a1 + 1272), 0xFFFFFFFFFFFFFFFFuLL);
LABEL_226:
        UsedPtesHandle = MiGetUsedPtesHandle((__int64)(v49 << 25) >> 16);
        MiDecreaseUsedPtesCount(UsedPtesHandle, 1uLL);
        v126 = 1;
        goto LABEL_228;
      }
      if ( !(unsigned int)MiSetProtectionOnTransitionPte(v48, (_QWORD *)v49, v158, 1) )
        goto LABEL_277;
LABEL_279:
      v22 = v160;
      v36 = v153;
      LOBYTE(v37) = v155;
      v48 = v152;
    }
    v126 = 0;
    if ( a6 == 1 )
    {
      if ( v69 )
      {
        MiReleasePageFileSpace(v167, v69, 1);
        if ( IS_PTE_NOT_DEMAND_ZERO(v69) )
          goto LABEL_225;
        goto LABEL_226;
      }
    }
    else if ( v69 )
    {
      v150 = (v69 >> 5) & 0x1F;
      v158 = MiSanitizePfnProtection(v152, (v69 >> 5) & 0x1F, v158);
      v122 = v69 ^ ((unsigned __int16)v69 ^ (unsigned __int16)(32 * v158)) & 0x3E0;
      v156 = v122;
      v123 = v122;
      if ( !(unsigned int)MiPteInShadowRange(v49) )
        goto LABEL_276;
      if ( !(unsigned int)MiPteHasShadow() )
      {
LABEL_273:
        if ( (HIDWORD(KeGetCurrentThread()->ApcState.Process[2].Header.WaitListHead.Flink) & 0x1000) != 0
          && (v122 & 1) != 0 )
        {
          v123 |= 0x8000000000000000uLL;
        }
LABEL_276:
        *(_QWORD *)v49 = v123;
LABEL_277:
        v49 += 8LL;
        BugCheckParameter1 = v49;
        goto LABEL_279;
      }
      v124 = HIBYTE(word_140C4E048) == 0;
      goto LABEL_269;
    }
LABEL_228:
    v128 = (v70 >> 18) & 0x3FFFFFF8;
    v129 = *(_QWORD *)((unsigned int)v128 - 0x904C0000000LL);
    if ( (unsigned int)MiPteInShadowRange((unsigned int)v128 - 0x904C0000000LL)
      && (unsigned int)MiPteHasShadow()
      && (v129 & 1) != 0
      && ((v129 & 0x20) == 0 || (v129 & 0x42) == 0) )
    {
      v130 = KeGetCurrentThread()->ApcState.Process[1].ProcessListEntry.Flink;
      if ( v130 )
      {
        v131 = *((_QWORD *)&v130->Flink + (((unsigned __int64)(unsigned int)(v128 + 0x40000000) >> 3) & 0x1FF));
        v132 = v129 | 0x20;
        if ( (v131 & 0x20) == 0 )
          v132 = v129;
        v129 = v132;
        if ( (v131 & 0x42) != 0 )
          v129 = v132 | 0x42;
      }
    }
    v176 = v129;
    if ( (unsigned int)MiPteInShadowRange(&v176)
      && (unsigned int)MiPteHasShadow()
      && (v129 & 1) != 0
      && ((v129 & 0x20) == 0 || (v129 & 0x42) == 0) )
    {
      v133 = (__int64)KeGetCurrentThread()->ApcState.Process[1].ProcessListEntry.Flink;
      if ( v133 )
      {
        v136 = *(_QWORD *)(v133 + 8 * (((unsigned __int64)&v176 >> 3) & 0x1FF));
        v133 = v129 | 0x20;
        if ( (v136 & 0x20) == 0 )
          v133 = v129;
        v129 = v133;
        if ( (v136 & 0x42) != 0 )
          v129 = v133 | 0x42;
      }
    }
    v137 = 48 * ((v129 >> 12) & 0xFFFFFFFFFLL) - 0x58000000000LL;
    v172 = 0;
    while ( _interlockedbittestandset64((volatile signed __int32 *)(v137 + 24), 0x3FuLL) )
    {
      do
        KeYieldProcessorEx(&v172, v133, v134, v135);
      while ( *(__int64 *)(v137 + 24) < 0 );
    }
    *(_QWORD *)(v137 + 16) ^= ((unsigned int)*(_QWORD *)(v137 + 16) ^ ((unsigned int)*(_QWORD *)(v137 + 16) + 0x10000)) & 0x3FF0000;
    _InterlockedAnd64((volatile signed __int64 *)(v137 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    MmIsAddressValidEx(*(_QWORD *)(v137 + 8) | 0x8000000000000000uLL);
    if ( v154 != 5 && (v126 == 1 || !MiPteNeedsCommitCharge(v152, v49)) )
      ++v163;
    v150 = (*(unsigned __int16 *)(*(_QWORD *)(v152 + 72) + 32LL) >> 1) & 0x1F;
    v138 = MiSanitizePfnProtection(0LL, v150, v161);
    v139 = MiSwizzleInvalidPte(32 * (v138 & 0x1F | 0xFFFFFFFFF8000020uLL));
    v156 = v139;
    if ( v49 < 0xFFFFF6FB7DBED000uLL || v49 > 0xFFFFF6FB7DBED7F8uLL )
      goto LABEL_265;
    if ( !(unsigned int)MiPteHasShadow() )
    {
      if ( (HIDWORD(KeGetCurrentThread()->ApcState.Process[2].Header.WaitListHead.Flink) & 0x1000) != 0
        && (v139 & 1) != 0 )
      {
        v139 |= 0x8000000000000000uLL;
      }
LABEL_265:
      *(_QWORD *)v49 = v139;
      v49 += 8LL;
      BugCheckParameter1 = v49;
      goto LABEL_279;
    }
    v140 = v139;
    if ( !HIBYTE(word_140C4E048) && (v139 & 1) != 0 )
      v140 = v139 | 0x8000000000000000uLL;
    *(_QWORD *)v49 = v140;
    MiWritePteShadow(v49, v140);
    v49 += 8LL;
    BugCheckParameter1 = v49;
    goto LABEL_279;
  }
  if ( v159 )
    MiReturnFullProcessCommitment(a1);
  return (unsigned int)v32;
}
