/*
 * XREFs of MiSetProtectionOnSection @ 0x140332C70
 * Callers:
 *     MiAllocateVirtualMemory @ 0x1405F8650 (MiAllocateVirtualMemory.c)
 *     MmProtectVirtualMemory @ 0x1405FA060 (MmProtectVirtualMemory.c)
 *     MiUnsecureVirtualMemoryAgainstWrites @ 0x14061F8F4 (MiUnsecureVirtualMemoryAgainstWrites.c)
 *     MiCommitPagefileBackedSection @ 0x14069BA84 (MiCommitPagefileBackedSection.c)
 *     MiMarkSharedImageCfgBits @ 0x1406E9604 (MiMarkSharedImageCfgBits.c)
 * Callees:
 *     MmAccessFault @ 0x14020D090 (MmAccessFault.c)
 *     MiFastLockLeafPageTable @ 0x14020E6D0 (MiFastLockLeafPageTable.c)
 *     MiUnlockWorkingSetShared @ 0x14020F790 (MiUnlockWorkingSetShared.c)
 *     MiLockWorkingSetShared @ 0x140219CB0 (MiLockWorkingSetShared.c)
 *     MiMakeProtectionMask @ 0x14021AA20 (MiMakeProtectionMask.c)
 *     MiChargeCommit @ 0x14021AAD0 (MiChargeCommit.c)
 *     MiVadPureReserve @ 0x14021B990 (MiVadPureReserve.c)
 *     IS_PTE_NOT_DEMAND_ZERO @ 0x14023C0AC (IS_PTE_NOT_DEMAND_ZERO.c)
 *     MiLocateCloneAddress @ 0x14023EF08 (MiLocateCloneAddress.c)
 *     MiCopyOnWrite @ 0x14023F300 (MiCopyOnWrite.c)
 *     KeYieldProcessorEx @ 0x14024B280 (KeYieldProcessorEx.c)
 *     MiUnlockVa @ 0x14026FB00 (MiUnlockVa.c)
 *     MiGetWsleContents @ 0x140270D40 (MiGetWsleContents.c)
 *     MiUnlockPageTableInternal @ 0x1402855F0 (MiUnlockPageTableInternal.c)
 *     MiCountSharedPages @ 0x14028C460 (MiCountSharedPages.c)
 *     MiPteNeedsCommitCharge @ 0x14028C998 (MiPteNeedsCommitCharge.c)
 *     MiIsPrototypePteVadLookup @ 0x14028D4D0 (MiIsPrototypePteVadLookup.c)
 *     KeShouldYieldProcessor @ 0x140293FD0 (KeShouldYieldProcessor.c)
 *     ExpWaitForSpinLockSharedAndAcquire @ 0x14029BF60 (ExpWaitForSpinLockSharedAndAcquire.c)
 *     MiWritePteShadow @ 0x1402B69BC (MiWritePteShadow.c)
 *     MiPteHasShadow @ 0x1402B6A1C (MiPteHasShadow.c)
 *     MiMakeProtoLeafValid @ 0x1402BCAB4 (MiMakeProtoLeafValid.c)
 *     MiDecreaseUsedPtesCount @ 0x1402C12F4 (MiDecreaseUsedPtesCount.c)
 *     ExfTryToWakePushLock @ 0x1402F1570 (ExfTryToWakePushLock.c)
 *     MiReleasePageFileSpace @ 0x140303154 (MiReleasePageFileSpace.c)
 *     MiLockLowestValidPageTable @ 0x1403055C0 (MiLockLowestValidPageTable.c)
 *     MmIsAddressValidEx @ 0x14030C4F0 (MmIsAddressValidEx.c)
 *     MiGetUsedPtesHandle @ 0x14030CA60 (MiGetUsedPtesHandle.c)
 *     MiComputePageCommitment @ 0x14030CB60 (MiComputePageCommitment.c)
 *     MiReturnCommit @ 0x1403182A0 (MiReturnCommit.c)
 *     MiReturnFullProcessCharges @ 0x140318370 (MiReturnFullProcessCharges.c)
 *     MiFreeWsleList @ 0x140327320 (MiFreeWsleList.c)
 *     MiSwizzleInvalidPte @ 0x140329F90 (MiSwizzleInvalidPte.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x14032DEC0 (MI_READ_PTE_LOCK_FREE.c)
 *     MiQueryAddressState @ 0x14032F730 (MiQueryAddressState.c)
 *     MiGetProtoPteAddress @ 0x140330B40 (MiGetProtoPteAddress.c)
 *     MiSanitizePfnProtection @ 0x140334290 (MiSanitizePfnProtection.c)
 *     MiRevertValidPte @ 0x140334300 (MiRevertValidPte.c)
 *     MiInsertTbFlushEntry @ 0x140335D70 (MiInsertTbFlushEntry.c)
 *     MiFlushTbList @ 0x14033B520 (MiFlushTbList.c)
 *     MiPteInShadowRange @ 0x140348AF0 (MiPteInShadowRange.c)
 *     KeAbPostRelease @ 0x140348C80 (KeAbPostRelease.c)
 *     ExAcquirePushLockExclusiveEx @ 0x14034A990 (ExAcquirePushLockExclusiveEx.c)
 *     KiLeaveGuardedRegionUnsafe @ 0x14034AD90 (KiLeaveGuardedRegionUnsafe.c)
 *     MiTryDeleteTransitionPte @ 0x1403645C8 (MiTryDeleteTransitionPte.c)
 *     MiSetProtectionOnTransitionPte @ 0x140364614 (MiSetProtectionOnTransitionPte.c)
 *     __security_check_cookie @ 0x1403D0460 (__security_check_cookie.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403F3684 (KiRemoveSystemWorkPriorityKick.c)
 *     MI_PFN_IS_PROTO @ 0x1403F48C8 (MI_PFN_IS_PROTO.c)
 *     KeBugCheckEx @ 0x1403FDEF0 (KeBugCheckEx.c)
 *     MiFlushAllFilesystemPages @ 0x1405355C8 (MiFlushAllFilesystemPages.c)
 *     MiCopyOnWriteCheckConditions @ 0x14055BEF8 (MiCopyOnWriteCheckConditions.c)
 *     ExpAcquireSpinLockSharedAtDpcLevelInstrumented @ 0x1405B5C64 (ExpAcquireSpinLockSharedAtDpcLevelInstrumented.c)
 *     MiChargeFullProcessCommitment @ 0x1405F90D0 (MiChargeFullProcessCommitment.c)
 *     MiCommitPageTablesForVad @ 0x1405F91A0 (MiCommitPageTablesForVad.c)
 *     MiReturnFullProcessCommitment @ 0x1406EE838 (MiReturnFullProcessCommitment.c)
 *     MiImageVadHotPatchEligible @ 0x1406F0418 (MiImageVadHotPatchEligible.c)
 *     MiGetImageHotPatchTableAddress @ 0x1408CA1C8 (MiGetImageHotPatchTableAddress.c)
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
  __int64 v29; // r8
  _DWORD *SchedulerAssist; // r9
  volatile signed __int64 *v31; // rbx
  int v32; // r14d
  __int64 v33; // rbx
  int v34; // ebx
  unsigned __int64 v35; // rdx
  unsigned __int8 v36; // al
  unsigned __int64 v37; // rbx
  __int64 v38; // rdi
  _DWORD *v39; // r9
  LONG *v40; // rbx
  unsigned __int8 CurrentIrql; // r14
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
  unsigned __int64 v53; // r9
  LONG *v54; // rax
  __int64 v55; // rdx
  __int64 v56; // r8
  _DWORD *v57; // r9
  unsigned __int64 v58; // rdi
  _KPROCESS *Process; // r13
  unsigned __int64 v60; // r15
  int v61; // r12d
  int v62; // eax
  ULONG_PTR v63; // rdi
  unsigned __int64 valid; // rax
  int v65; // eax
  __int64 v66; // rdx
  __int64 v67; // r8
  _DWORD *v68; // r9
  ULONG_PTR v69; // rdi
  unsigned __int64 v70; // rbx
  ULONG_PTR v71; // r13
  __int64 v72; // rax
  unsigned __int64 v73; // r15
  struct _LIST_ENTRY *v74; // rdx
  __int64 v75; // rax
  __int64 v76; // r15
  unsigned __int64 v77; // rdi
  __int64 v78; // r8
  __int64 v79; // r15
  unsigned __int64 v80; // r12
  _QWORD *CloneAddress; // rbx
  __int64 v82; // rcx
  _QWORD *v83; // r9
  __int64 v84; // rdx
  __int64 v85; // r8
  _DWORD *v86; // r9
  __int64 v87; // rdx
  __int64 v88; // r8
  __int64 v89; // r9
  __int64 v90; // r10
  unsigned __int64 v91; // rbx
  unsigned __int64 v92; // rdx
  struct _LIST_ENTRY *v93; // r8
  __int64 v94; // rax
  __int64 v95; // r8
  __int64 v96; // rdx
  unsigned __int64 v97; // rax
  unsigned __int64 v98; // r8
  _KPROCESS *v99; // rcx
  unsigned int v100; // eax
  __int64 v101; // rdx
  __int64 v102; // r10
  struct _LIST_ENTRY *v103; // r8
  __int64 v104; // rax
  __int64 v105; // r8
  signed __int64 v106; // rax
  signed __int64 v107; // rtt
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
  __int64 v118; // rdi
  unsigned __int64 v119; // rbx
  char v120; // al
  unsigned __int64 v121; // rdi
  __int64 v122; // rbx
  __int64 v123; // rdx
  __int64 v124; // r8
  bool v125; // zf
  int v126; // eax
  char v127; // r15
  ULONG_PTR UsedPtesHandle; // rax
  __int64 v129; // r8
  __int64 v130; // r13
  unsigned __int64 v131; // rbx
  unsigned int v132; // edi
  __int64 v133; // rdx
  struct _LIST_ENTRY *v134; // rax
  __int64 v135; // rax
  __int64 v136; // rdx
  __int64 v137; // r8
  __int64 v138; // r9
  __int64 v139; // rax
  __int64 v140; // rbx
  char v141; // al
  __int64 v142; // r8
  unsigned __int64 v143; // rax
  __int64 v144; // rdx
  unsigned __int64 v145; // rdx
  _DWORD *v146; // rsi
  __int64 v147; // rax
  __int64 v148; // r14
  __int64 v149; // rbx
  __int64 v150; // r8
  __int64 v151; // rdx
  unsigned __int64 v152; // r8
  unsigned int v154; // [rsp+58h] [rbp-A8h] BYREF
  ULONG_PTR BugCheckParameter1; // [rsp+60h] [rbp-A0h]
  ULONG_PTR v156; // [rsp+68h] [rbp-98h]
  unsigned __int64 v157; // [rsp+70h] [rbp-90h]
  int v158; // [rsp+78h] [rbp-88h]
  __int64 v159; // [rsp+80h] [rbp-80h]
  __int64 v160; // [rsp+88h] [rbp-78h] BYREF
  int v161; // [rsp+90h] [rbp-70h]
  unsigned int v162; // [rsp+94h] [rbp-6Ch]
  _DWORD *v163; // [rsp+98h] [rbp-68h] BYREF
  __int64 v164; // [rsp+A0h] [rbp-60h]
  unsigned int v165; // [rsp+A8h] [rbp-58h]
  __int16 v166; // [rsp+ACh] [rbp-54h] BYREF
  __int64 v167; // [rsp+B0h] [rbp-50h]
  ULONG_PTR v168; // [rsp+B8h] [rbp-48h]
  int v169; // [rsp+C0h] [rbp-40h]
  char *v170; // [rsp+C8h] [rbp-38h]
  __int64 v171; // [rsp+D0h] [rbp-30h]
  int v172; // [rsp+D8h] [rbp-28h] BYREF
  int v173; // [rsp+DCh] [rbp-24h] BYREF
  int v174; // [rsp+E0h] [rbp-20h] BYREF
  unsigned int v175; // [rsp+E4h] [rbp-1Ch]
  int v176; // [rsp+E8h] [rbp-18h] BYREF
  struct _KTHREAD *CurrentThread; // [rsp+F0h] [rbp-10h]
  _DWORD *v178; // [rsp+F8h] [rbp-8h]
  __int64 v179; // [rsp+100h] [rbp+0h] BYREF
  unsigned __int64 v180; // [rsp+108h] [rbp+8h] BYREF
  __int64 v181; // [rsp+110h] [rbp+10h]
  __int64 v182; // [rsp+118h] [rbp+18h] BYREF
  unsigned __int64 v183; // [rsp+120h] [rbp+20h] BYREF
  __int64 v184; // [rsp+128h] [rbp+28h]
  int v185; // [rsp+130h] [rbp+30h] BYREF
  __int16 v186; // [rsp+134h] [rbp+34h]
  __int16 v187; // [rsp+136h] [rbp+36h]
  __int64 v188; // [rsp+138h] [rbp+38h]
  char *v189; // [rsp+140h] [rbp+40h]
  char *v190; // [rsp+148h] [rbp+48h]
  __int128 v191; // [rsp+150h] [rbp+50h]
  __int128 v192; // [rsp+160h] [rbp+60h]
  __int128 v193; // [rsp+170h] [rbp+70h]
  __int128 v194; // [rsp+180h] [rbp+80h]
  __int128 v195; // [rsp+190h] [rbp+90h]
  __int128 v196; // [rsp+1A0h] [rbp+A0h]
  __int128 v197; // [rsp+1B0h] [rbp+B0h]
  __int128 v198; // [rsp+1C0h] [rbp+C0h]
  __int128 v199; // [rsp+1D0h] [rbp+D0h]
  __int64 v200; // [rsp+1E0h] [rbp+E0h]
  int v201; // [rsp+1F0h] [rbp+F0h] BYREF
  __int16 v202; // [rsp+1F4h] [rbp+F4h]
  __int16 v203; // [rsp+1F6h] [rbp+F6h]
  __int64 v204; // [rsp+1F8h] [rbp+F8h]
  char *v205; // [rsp+200h] [rbp+100h]
  char *v206; // [rsp+208h] [rbp+108h]
  __int128 v207; // [rsp+210h] [rbp+110h]
  __int128 v208; // [rsp+220h] [rbp+120h]
  __int128 v209; // [rsp+230h] [rbp+130h]
  __int128 v210; // [rsp+240h] [rbp+140h]
  __int128 v211; // [rsp+250h] [rbp+150h]
  __int128 v212; // [rsp+260h] [rbp+160h]
  __int128 v213; // [rsp+270h] [rbp+170h]
  __int128 v214; // [rsp+280h] [rbp+180h]
  __int128 v215; // [rsp+290h] [rbp+190h]
  __int64 v216; // [rsp+2A0h] [rbp+1A0h]

  v184 = a8;
  v156 = a2;
  v187 = 0;
  v200 = 0LL;
  v10 = a2;
  v203 = 0;
  v216 = 0LL;
  v11 = *(_DWORD *)(a2 + 48) & 0x70;
  v172 = 0;
  v182 = 0LL;
  v179 = 0LL;
  v154 = 0;
  v173 = 0;
  v160 = 0LL;
  v166 = 0;
  v191 = 0LL;
  v192 = 0LL;
  v193 = 0LL;
  v194 = 0LL;
  v195 = 0LL;
  v196 = 0LL;
  v197 = 0LL;
  v198 = 0LL;
  v199 = 0LL;
  v207 = 0LL;
  v208 = 0LL;
  v209 = 0LL;
  v210 = 0LL;
  v211 = 0LL;
  v212 = 0LL;
  v213 = 0LL;
  v214 = 0LL;
  v215 = 0LL;
  if ( v11 == 32 && (unsigned int)MiImageVadHotPatchEligible(a2) && MiGetImageHotPatchTableAddress(v10) <= a4 )
    return 3221225541LL;
  ProtectionMask = MiMakeProtectionMask(a5);
  v165 = ProtectionMask;
  v15 = ProtectionMask;
  if ( ProtectionMask == -1 )
    return 3221225541LL;
  v17 = ProtectionMask & 0xFFFFFFFE;
  v18 = ProtectionMask & 5;
  v170 = v14;
  v178 = v14;
  if ( v18 != 5 )
    v17 = v15;
  v204 = 20LL;
  v162 = v17;
  v19 = (__int64)v14;
  v201 = 1;
  v202 = (__int16)v14;
  v205 = v14;
  v206 = v14;
  v158 = v18;
  v20 = ((a3 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  BugCheckParameter1 = v20;
  v21 = ((a4 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  v169 = (int)v14;
  v22 = v13 + 1664;
  CurrentThread = KeGetCurrentThread();
  v23 = *(_QWORD *)(v13 + 1680);
  v188 = 20LL;
  v185 = 1;
  v186 = 4;
  v189 = v14;
  v190 = v14;
  v168 = v21;
  v163 = v14;
  v164 = v13 + 1664;
  if ( *(char **)(v23 + 360) != v14 )
  {
    v24 = *(unsigned int *)(v10 + 52);
    LODWORD(v24) = v24 & 0x7FFFFFFF;
    if ( v24 | ((unsigned __int64)*(unsigned __int8 *)(v10 + 34) << 31) )
    {
      v25 = MiLockWorkingSetShared(v13 + 1664, v21, v13, v14);
      MiComputePageCommitment(a3, a4, v10, v25, 0, &v163);
      MiUnlockWorkingSetShared(v22, v25);
      if ( v163 )
      {
        result = MiChargeFullProcessCommitment(a1, v163);
        if ( (int)result < 0 )
          return result;
      }
      v21 = v168;
      v20 = BugCheckParameter1;
    }
  }
  v171 = *(_QWORD *)(qword_140C4E648 + 8LL * *(unsigned __int16 *)(v22 + 174));
  if ( v158 != 5 )
    goto LABEL_21;
  v26 = MiCountSharedPages(v10, v20, v21, v14);
  v19 = v26;
  if ( a6 == 1 )
  {
    v27 = ((__int64)(v168 - v20) >> 3) - v26;
    v125 = v27 == -1;
    v28 = v27 + 1;
    v170 = (char *)v28;
    if ( !v125 && !(unsigned int)MiChargeCommit(v171, v28, 0) )
    {
      if ( v163 )
        MiReturnFullProcessCommitment(a1);
      return 3221225773LL;
    }
    v19 = 0LL;
    goto LABEL_21;
  }
  if ( !v26 || (v34 = MiChargeFullProcessCommitment(a1, v26), v34 >= 0) )
  {
LABEL_21:
    if ( (unsigned int)MiVadPureReserve(v10) == 1 )
    {
      v169 = 1;
      --CurrentThread->SpecialApcDisable;
      v31 = (volatile signed __int64 *)(a1 + 1232);
      ExAcquirePushLockExclusiveEx(a1 + 1232, 0LL);
      v32 = MiCommitPageTablesForVad(v10, a3, a4);
      if ( v32 < 0 )
      {
        if ( (_InterlockedExchangeAdd64(v31, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
          ExfTryToWakePushLock(v31);
        KeAbPostRelease((ULONG_PTR)v31);
        KiLeaveGuardedRegionUnsafe(CurrentThread);
        if ( v170 )
        {
          MiReturnCommit(v171, v19);
        }
        else if ( v19 )
        {
          v33 = a1;
          MiReturnFullProcessCommitment(a1);
          goto LABEL_28;
        }
        v33 = a1;
LABEL_28:
        if ( v163 )
          MiReturnFullProcessCommitment(v33);
        return (unsigned int)v32;
      }
      v10 = v156;
    }
    if ( v19 )
    {
      v29 = *(unsigned int *)(v10 + 52);
      v35 = v19 + (((unsigned __int64)*(unsigned __int8 *)(v10 + 34) << 31) | v29 & 0xFFFFFFFF7FFFFFFFuLL);
      *(_DWORD *)(v10 + 52) = v29 ^ (v29 ^ v35) & 0x7FFFFFFF;
      *(_BYTE *)(v10 + 34) = v35 >> 31;
    }
    v36 = *(_BYTE *)(v22 + 184) & 7;
    v161 = 1;
    v167 = 0LL;
    v37 = 0LL;
    v157 = 0LL;
    if ( v36 < 6u )
    {
      v40 = &dword_140C4F780;
      if ( v36 != 2 )
        v40 = (LONG *)(v22 + 192);
      CurrentIrql = KeGetCurrentIrql();
      __writecr8(2uLL);
      if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu )
      {
        SchedulerAssist = KeGetCurrentPrcb()->SchedulerAssist;
        v29 = (-1 << (CurrentIrql + 1)) & 4u | SchedulerAssist[5];
        SchedulerAssist[5] = v29;
      }
      if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
      {
        ExpAcquireSpinLockSharedAtDpcLevelInstrumented(v40, CurrentIrql);
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
        _m_prefetchw(v40);
        v45 = *v40 & 0x7FFFFFFF;
        if ( v45 != _InterlockedCompareExchange(v40, v45 + 1, v45) )
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
          ExpWaitForSpinLockSharedAndAcquire((unsigned __int64)v40, CurrentIrql, v29, SchedulerAssist);
        }
      }
      if ( v40[1] )
        _InterlockedExchange(v40 + 1, 0);
      v37 = v157;
      LOBYTE(v38) = CurrentIrql;
      v159 = CurrentIrql;
    }
    else
    {
      v38 = KeGetCurrentIrql();
      v159 = v38;
      __writecr8(2uLL);
      if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && (unsigned __int8)v38 <= 0xFu )
      {
        v39 = KeGetCurrentPrcb()->SchedulerAssist;
        v39[5] |= ~((unsigned __int8)(1LL << ((unsigned __int8)v38 + 1)) - 1) & 4;
      }
    }
    MiQueryAddressState(a3, a3, v38, v156, 0LL, (int *)&v154, &v173, &v166, &v182, &v172);
    v49 = v156;
    *a7 = MmProtectToValue[v154];
    v50 = BugCheckParameter1;
    v51 = (*(_DWORD *)(v49 + 48) >> 12) & 0x3F;
    v175 = v51;
    while ( 1 )
    {
      while ( 1 )
      {
        while ( 1 )
        {
          if ( v50 > v168 )
          {
            MiFlushTbList(&v201);
            if ( v37 )
              MiUnlockPageTableInternal(v22, v37);
            MiUnlockWorkingSetShared(v22, v38);
            if ( v169 == 1 )
            {
              if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)(a1 + 1232), 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
                ExfTryToWakePushLock(a1 + 1232);
              KeAbPostRelease(a1 + 1232);
              KiLeaveGuardedRegionUnsafe(CurrentThread);
            }
            v146 = v178;
            v147 = (__int64)v170;
            if ( v178 && v158 == 5 )
            {
              v147 = v170 - (char *)v178;
              v146 = 0LL;
            }
            v148 = v171;
            if ( v147 )
              MiReturnCommit(v171, v147);
            v149 = v167;
            if ( v167 )
            {
              v150 = *(unsigned int *)(v49 + 52);
              LODWORD(v150) = v150 & 0x7FFFFFFF;
              v151 = v167 - (_QWORD)v146;
              v152 = (((unsigned __int64)*(unsigned __int8 *)(v49 + 34) << 31) | v150) - v167;
              *(_DWORD *)(v49 + 52) ^= (*(_DWORD *)(v49 + 52) ^ v152) & 0x7FFFFFFF;
              *(_BYTE *)(v49 + 34) = v152 >> 31;
              MiReturnCommit(v148, v151);
              MiReturnFullProcessCharges(a1, v149);
            }
            if ( v163 )
              MiReturnFullProcessCommitment(a1);
            return 0LL;
          }
          v52 = 0xFFFFFA8000000000uLL;
          v53 = 0xFFFFF6FB7DBED7F8uLL;
          if ( (v50 & 0xFFF) == 0 || v161 == 1 )
          {
            v161 = 0;
            if ( v37 )
            {
              MiFlushTbList(&v201);
              MiUnlockPageTableInternal(v22, v37);
            }
            v54 = &dword_140C4F780;
            if ( (*(_BYTE *)(v22 + 184) & 7) != 2 )
              v54 = (LONG *)(v22 + 192);
            if ( (*v54 & 0x40000000) != 0 || KeShouldYieldProcessor() )
            {
              MiUnlockWorkingSetShared(v22, v38);
              MiLockWorkingSetShared(v22, v55, v56, v57);
            }
            v58 = ((v50 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
            v157 = v58;
            v183 = 0LL;
            Process = KeGetCurrentThread()->ApcState.Process;
            v60 = (__int64)(v50 << 25) >> 16;
            if ( v60 < 0xFFFFF68000000000uLL || (v61 = 0, v60 > 0xFFFFF6FFFFFFFFFFuLL) )
              v61 = 1;
            while ( 1 )
            {
              if ( v61 )
              {
                v62 = MiFastLockLeafPageTable((__int64)&Process[1].ActiveProcessorsPadding[6], v60, 0);
                if ( v62 )
                  break;
              }
              v63 = BugCheckParameter1;
              valid = MiLockLowestValidPageTable(
                        (__int64)&Process[1].ActiveProcessorsPadding[6],
                        BugCheckParameter1,
                        &v183);
              if ( valid == v157 )
                goto LABEL_88;
              MiUnlockPageTableInternal((__int64)&Process[1].ActiveProcessorsPadding[6], valid);
              MiFlushTbList(&v201);
              MiUnlockWorkingSetShared((__int64)&Process[1].ActiveProcessorsPadding[6], v159);
              v65 = MmAccessFault(((unsigned __int64)v51 << 57) | 0x100000000000002LL, v63, 0, 0LL);
              v69 = v65;
              if ( v65 < 0 )
              {
                MiFlushAllFilesystemPages(1LL);
                KeBugCheckEx(0x7Au, 1uLL, v69, (ULONG_PTR)Process, BugCheckParameter1);
              }
              MiLockWorkingSetShared((__int64)&Process[1].ActiveProcessorsPadding[6], v66, v67, v68);
              v58 = v157;
            }
            if ( v62 != 1 )
            {
              while ( 1 )
                v58 = ((v58 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
            }
LABEL_88:
            v50 = BugCheckParameter1;
            v49 = v156;
            v53 = 0xFFFFF6FB7DBED7F8uLL;
            v52 = 0xFFFFFA8000000000uLL;
          }
          v70 = *(_QWORD *)v50;
          v71 = (__int64)(v50 << 25) >> 16;
          if ( v50 >= 0xFFFFF6FB7DBED000uLL
            && v50 <= 0xFFFFF6FB7DBED7F8uLL
            && (unsigned int)MiPteHasShadow()
            && (v70 & 1) != 0
            && ((v70 & 0x20) == 0 || (v70 & 0x42) == 0) )
          {
            Flink = (__int64)KeGetCurrentThread()->ApcState.Process[1].ProcessListEntry.Flink;
            if ( Flink )
            {
              v72 = *(_QWORD *)(Flink + 8 * ((v50 >> 3) & 0x1FF));
              Flink = v70 | 0x20;
              if ( (v72 & 0x20) == 0 )
                Flink = v70;
              v70 = Flink;
              if ( (v72 & 0x42) != 0 )
                v70 = Flink | 0x42;
            }
          }
          v160 = v70;
          if ( (v70 & 1) == 0 )
            break;
          v73 = v70;
          if ( (unsigned __int64)&v160 >= 0xFFFFF6FB7DBED000uLL
            && (unsigned __int64)&v160 <= v53
            && (unsigned int)MiPteHasShadow()
            && ((v70 & 0x20) == 0 || (v70 & 0x42) == 0) )
          {
            v74 = KeGetCurrentThread()->ApcState.Process[1].ProcessListEntry.Flink;
            if ( v74 )
            {
              v73 = v70 | 0x20;
              v75 = *((_QWORD *)&v74->Flink + (((unsigned __int64)&v160 >> 3) & 0x1FF));
              if ( (v75 & 0x20) == 0 )
                v73 = v70;
              if ( (v75 & 0x42) != 0 )
                v73 |= 0x42uLL;
            }
          }
          v76 = (v73 >> 12) & 0xFFFFFFFFFLL;
          v181 = v76;
          v77 = v52 + 48 * v76;
          if ( (unsigned int)MI_PFN_IS_PROTO(v77) )
          {
            v79 = *(_QWORD *)(v77 + 8);
            v80 = v78 | v79;
            if ( (v78 | v79) == MiGetProtoPteAddress(v156, v71 >> 12, 0, &v179) )
            {
              LODWORD(v76) = v181;
              goto LABEL_122;
            }
            CloneAddress = 0LL;
            if ( (*(_QWORD *)(v77 + 40) & 0x1000000000LL) != 0 || v79 <= 0 )
            {
              CloneAddress = MiLocateCloneAddress(a1, v80);
              if ( *(_QWORD *)(*(_QWORD *)(v82 + 1680) + 360LL) <= CloneAddress[12] )
                CloneAddress = v83;
            }
            MiFlushTbList(&v201);
            v50 = BugCheckParameter1;
            LODWORD(v38) = MiCopyOnWrite(v71, (ULONG_PTR *)BugCheckParameter1, -1LL, 0);
            if ( (int)v38 >= 0 )
            {
              if ( CloneAddress )
                v163 = (_DWORD *)((char *)v163 - 1);
              goto LABEL_279;
            }
            v22 = v164;
            MiUnlockPageTableInternal(v164, v157);
            MiUnlockWorkingSetShared(v22, v159);
            MiCopyOnWriteCheckConditions(v22, (unsigned int)v38);
            v161 = 1;
            v157 = 0LL;
            v37 = 0LL;
            MiLockWorkingSetShared(v22, v84, v85, v86);
            LOBYTE(v38) = v159;
            v49 = v156;
          }
          else
          {
LABEL_122:
            if ( (a5 & 0x101) == 0 && (a6 != 1 || (unsigned int)MI_PFN_IS_PROTO(v77)) )
            {
              if ( !(unsigned int)MI_PFN_IS_PROTO(v77) )
              {
                v174 = 0;
                while ( _interlockedbittestandset64((volatile signed __int32 *)(v77 + 24), 0x3FuLL) )
                {
                  do
                    KeYieldProcessorEx(&v174, v87, v88, v89);
                  while ( *(__int64 *)(v77 + 24) < 0 );
                }
                LODWORD(v102) = MiSanitizePfnProtection(v156, (*(_QWORD *)(v77 + 16) >> 5) & 0x1FLL, v162);
                v109 = 32 * (v102 & 0x1F);
                if ( v108 )
                  *(_QWORD *)(v77 + 16) = v109 | v108 & 0xFFFFFFFFFFFFFC1FuLL;
                else
                  *(_QWORD *)(v77 + 16) = MiSwizzleInvalidPte(v109);
                _InterlockedAnd64((volatile signed __int64 *)(v77 + 24), 0x7FFFFFFFFFFFFFFFuLL);
                goto LABEL_175;
              }
              if ( v158 != 5 && (v70 & 0x200) != 0 )
                ++v167;
              v91 = v90 + ((v71 >> 9) & 0x7FFFFFFFF8LL);
              v92 = *(_QWORD *)v91;
              if ( v91 >= 0xFFFFF6FB7DBED000uLL
                && v91 <= 0xFFFFF6FB7DBED7F8uLL
                && (unsigned int)MiPteHasShadow()
                && (v92 & 1) != 0
                && ((v92 & 0x20) == 0 || (v92 & 0x42) == 0) )
              {
                v93 = KeGetCurrentThread()->ApcState.Process[1].ProcessListEntry.Flink;
                if ( v93 )
                {
                  v94 = *((_QWORD *)&v93->Flink + ((v91 >> 3) & 0x1FF));
                  v95 = v92 | 0x20;
                  if ( (v94 & 0x20) == 0 )
                    v95 = v92;
                  v92 = v95;
                  if ( (v94 & 0x42) != 0 )
                    v92 = v95 | 0x42;
                }
              }
              v96 = (v92 >> 60) & 7;
              if ( !(_DWORD)v96 )
                goto LABEL_147;
              v97 = *(_QWORD *)v91;
              if ( (*(_QWORD *)v91 & 0x10) != 0 )
                goto LABEL_145;
              if ( (v97 & 8) != 0 )
              {
                v96 = (unsigned int)v96 | 0x18;
                goto LABEL_146;
              }
              if ( (v97 & 0x10) != 0 )
LABEL_145:
                v96 = (unsigned int)v96 | 8;
LABEL_146:
              if ( (_DWORD)v96 )
              {
LABEL_154:
                v154 = v96;
                v100 = MiSanitizePfnProtection(v156, v96, v165);
                v101 = *(_QWORD *)v91;
                v102 = v100;
                if ( v91 >= 0xFFFFF6FB7DBED000uLL
                  && v91 <= 0xFFFFF6FB7DBED7F8uLL
                  && (unsigned int)MiPteHasShadow()
                  && (v101 & 1) != 0
                  && ((v101 & 0x20) == 0 || (v101 & 0x42) == 0) )
                {
                  v103 = KeGetCurrentThread()->ApcState.Process[1].ProcessListEntry.Flink;
                  if ( v103 )
                  {
                    v104 = *((_QWORD *)&v103->Flink + ((v91 >> 3) & 0x1FF));
                    v105 = v101 | 0x20;
                    if ( (v104 & 0x20) == 0 )
                      v105 = v101;
                    v101 = v105;
                    if ( (v104 & 0x42) != 0 )
                      v101 = v105 | 0x42;
                  }
                }
                v106 = *(_QWORD *)v91;
                do
                {
                  v107 = v106;
                  v106 = _InterlockedCompareExchange64(
                           (volatile signed __int64 *)v91,
                           v101 & 0xF00000000000000LL | (v102 << 60) & 0x7F00000000000000LL | v106 & 0x80FFFFFFFFFFFFFFuLL,
                           v106);
                }
                while ( v107 != v106 );
LABEL_175:
                v110 = BugCheckParameter1;
                MiRevertValidPte(v156, BugCheckParameter1, v102, v76, (__int64)&v201);
                v50 = v110 + 8;
                BugCheckParameter1 = v50;
                goto LABEL_279;
              }
LABEL_147:
              v98 = ((unsigned __int64)MI_READ_PTE_LOCK_FREE(v77 + 16) >> 5) & 0x1F;
              if ( (*(_QWORD *)(v77 + 40) & 0x1000000000LL) != 0 || *(__int64 *)(v77 + 8) <= 0 )
              {
                v99 = KeGetCurrentThread()->ApcState.Process;
                if ( v99[1].Affinity.Bitmap[12]
                  && MiLocateCloneAddress((__int64)v99, *(_QWORD *)(v77 + 8) | 0x8000000000000000uLL) )
                {
                  LODWORD(v98) = MmMakeProtectNotWriteCopy[v98];
                }
                v96 = (unsigned int)v98;
              }
              else
              {
                v96 = (unsigned int)MmMakeProtectNotWriteCopy[v98];
              }
              goto LABEL_154;
            }
            Flink = BugCheckParameter1;
            v111 = BugCheckParameter1;
            v112 = (BugCheckParameter1 & 0xFFFFFFFFFFFFF000uLL) + 4088;
            if ( (BugCheckParameter1 & 0xFFFFFFFFFFFFF000uLL) == (v168 & 0xFFFFFFFFFFFFF000uLL) )
              v112 = v168;
            v113 = 0;
            if ( BugCheckParameter1 <= v112 )
            {
              v114 = v164;
              v115 = (_DWORD *)v184;
              while ( 1 )
              {
                v160 = MI_READ_PTE_LOCK_FREE(v111);
                if ( (v160 & 1) == 0
                  || (a5 & 0x101) == 0
                  && (a6 != 1
                   || (v117 = MI_READ_PTE_LOCK_FREE((unsigned __int64)&v160),
                       (unsigned int)MI_PFN_IS_PROTO(48 * ((v117 >> 12) & 0xFFFFFFFFFLL) - 0x58000000000LL))) )
                {
LABEL_192:
                  v51 = v175;
                  goto LABEL_193;
                }
                if ( (MiGetWsleContents(v116, v71) & 0xF) == 8 )
                  break;
                MiInsertTbFlushEntry(&v185, v71, 1LL, 0LL);
                if ( HIDWORD(v188) == (_DWORD)v188 )
                  goto LABEL_187;
LABEL_191:
                v111 += 8LL;
                v71 += 4096LL;
                if ( v111 > v112 )
                  goto LABEL_192;
              }
              v113 = 1;
              *v115 = 1;
LABEL_187:
              if ( HIDWORD(v188) )
                MiFreeWsleList(v114, (__int64)&v185, 0);
              if ( v113 == 1 )
              {
                MiUnlockVa(v114, v71);
                v113 = 0;
              }
              goto LABEL_191;
            }
LABEL_193:
            if ( !HIDWORD(v188) )
            {
              v50 = BugCheckParameter1;
              goto LABEL_279;
            }
            v22 = v164;
            MiFreeWsleList(v164, (__int64)&v185, 0);
            v50 = BugCheckParameter1;
            v37 = v157;
            LOBYTE(v38) = v159;
            v49 = v156;
          }
        }
        if ( (v70 & 0x400) == 0 )
          break;
        if ( MiIsPrototypePteVadLookup(v70) )
          goto LABEL_206;
        v118 = v70;
        if ( qword_140C4DF40 && (v70 & 0x10) == 0 )
          v118 = v70 & ~qword_140C4DF40;
        if ( v118 >> 16 == MiGetProtoPteAddress(v49, v71 >> 12, 0, &v179) )
        {
LABEL_206:
          if ( v158 != 5 && MiIsPrototypePteVadLookup(v70) && (v70 & 0xA0) == 0xA0 )
            ++v167;
          if ( MiIsPrototypePteVadLookup(v70) )
            v119 = v70 >> 5;
          else
            LODWORD(v119) = *(unsigned __int16 *)(*(_QWORD *)(v49 + 72) + 32LL) >> 1;
          v154 = v119 & 0x1F;
          v120 = MiSanitizePfnProtection(v49, v119 & 0x1F, v165);
          v160 = MiSwizzleInvalidPte(32 * (v120 & 0x1F | 0xFFFFFFFFF8000020uLL));
          v121 = v160;
          v122 = v160;
          if ( !(unsigned int)MiPteInShadowRange(v50, v123) )
            goto LABEL_276;
          if ( !(unsigned int)MiPteHasShadow() )
            goto LABEL_273;
          v125 = HIBYTE(word_140C4E008) == 0;
LABEL_269:
          v145 = v121;
          if ( v125 && (v121 & 1) != 0 )
            v145 = v121 | 0x8000000000000000uLL;
          *(_QWORD *)v50 = v145;
          MiWritePteShadow(v50, v145, v124);
          v50 += 8LL;
          BugCheckParameter1 = v50;
          goto LABEL_279;
        }
        MiFlushTbList(&v201);
        LOBYTE(v38) = v159;
        if ( (int)MiMakeProtoLeafValid(v50, 1LL, v159) < 0 )
        {
          v50 += 8LL;
          BugCheckParameter1 = v50;
        }
        v37 = v157;
        v22 = v164;
        v49 = v156;
        v161 = 1;
      }
      if ( (v70 & 0x800) == 0 )
        break;
      if ( a6 == 1 )
      {
        v126 = MiTryDeleteTransitionPte(v50);
        if ( v126 == 3 )
        {
          v178 = (_DWORD *)((char *)v178 + 1);
        }
        else if ( v126 == 1 )
        {
          goto LABEL_279;
        }
LABEL_225:
        _InterlockedExchangeAdd64((volatile signed __int64 *)(a1 + 1272), 0xFFFFFFFFFFFFFFFFuLL);
LABEL_226:
        UsedPtesHandle = MiGetUsedPtesHandle((__int64)(v50 << 25) >> 16, Flink);
        MiDecreaseUsedPtesCount(UsedPtesHandle, 1LL, v129);
        v127 = 1;
        goto LABEL_228;
      }
      if ( !(unsigned int)MiSetProtectionOnTransitionPte(v49, v50, v162, 1LL) )
        goto LABEL_277;
LABEL_279:
      v22 = v164;
      v37 = v157;
      LOBYTE(v38) = v159;
      v49 = v156;
    }
    v127 = 0;
    if ( a6 == 1 )
    {
      if ( v70 )
      {
        MiReleasePageFileSpace(v171, v70, 1);
        if ( IS_PTE_NOT_DEMAND_ZERO(v70) )
          goto LABEL_225;
        goto LABEL_226;
      }
    }
    else if ( v70 )
    {
      v154 = (v70 >> 5) & 0x1F;
      v162 = MiSanitizePfnProtection(v156, (v70 >> 5) & 0x1F, v162);
      v121 = v70 ^ ((unsigned __int16)v70 ^ (unsigned __int16)(32 * v162)) & 0x3E0;
      v160 = v121;
      v122 = v121;
      if ( !(unsigned int)MiPteInShadowRange(v50, v144) )
        goto LABEL_276;
      if ( !(unsigned int)MiPteHasShadow() )
      {
LABEL_273:
        if ( (HIDWORD(KeGetCurrentThread()->ApcState.Process[2].Header.WaitListHead.Flink) & 0x1000) != 0
          && (v121 & 1) != 0 )
        {
          v122 |= 0x8000000000000000uLL;
        }
LABEL_276:
        *(_QWORD *)v50 = v122;
LABEL_277:
        v50 += 8LL;
        BugCheckParameter1 = v50;
        goto LABEL_279;
      }
      v125 = HIBYTE(word_140C4E008) == 0;
      goto LABEL_269;
    }
LABEL_228:
    v130 = (v71 >> 18) & 0x3FFFFFF8;
    v131 = *(_QWORD *)((unsigned int)v130 - 0x904C0000000LL);
    v132 = v130 + 0x40000000;
    if ( (unsigned int)MiPteInShadowRange((unsigned int)v130 - 0x904C0000000LL, Flink)
      && (unsigned int)MiPteHasShadow()
      && (v131 & 1) != 0
      && ((v131 & 0x20) == 0 || (v131 & 0x42) == 0) )
    {
      v133 = v132;
      v134 = KeGetCurrentThread()->ApcState.Process[1].ProcessListEntry.Flink;
      if ( v134 )
      {
        v135 = *((_QWORD *)&v134->Flink + (((unsigned __int64)v132 >> 3) & 0x1FF));
        v133 = v131 | 0x20;
        if ( (v135 & 0x20) == 0 )
          v133 = v131;
        v131 = v133;
        if ( (v135 & 0x42) != 0 )
          v131 = v133 | 0x42;
      }
    }
    v180 = v131;
    if ( (unsigned int)MiPteInShadowRange(&v180, v133)
      && (unsigned int)MiPteHasShadow()
      && (v131 & 1) != 0
      && ((v131 & 0x20) == 0 || (v131 & 0x42) == 0) )
    {
      v136 = (__int64)KeGetCurrentThread()->ApcState.Process[1].ProcessListEntry.Flink;
      if ( v136 )
      {
        v139 = *(_QWORD *)(v136 + 8 * (((unsigned __int64)&v180 >> 3) & 0x1FF));
        v136 = v131 | 0x20;
        if ( (v139 & 0x20) == 0 )
          v136 = v131;
        v131 = v136;
        if ( (v139 & 0x42) != 0 )
          v131 = v136 | 0x42;
      }
    }
    v140 = 48 * ((v131 >> 12) & 0xFFFFFFFFFLL) - 0x58000000000LL;
    v176 = 0;
    while ( _interlockedbittestandset64((volatile signed __int32 *)(v140 + 24), 0x3FuLL) )
    {
      do
        KeYieldProcessorEx(&v176, v136, v137, v138);
      while ( *(__int64 *)(v140 + 24) < 0 );
    }
    *(_QWORD *)(v140 + 16) ^= ((unsigned int)*(_QWORD *)(v140 + 16) ^ ((unsigned int)*(_QWORD *)(v140 + 16) + 0x10000)) & 0x3FF0000;
    _InterlockedAnd64((volatile signed __int64 *)(v140 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    MmIsAddressValidEx(*(_QWORD *)(v140 + 8) | 0x8000000000000000uLL);
    if ( v158 != 5 && (v127 == 1 || !MiPteNeedsCommitCharge(v156, v50)) )
      ++v167;
    v154 = (*(unsigned __int16 *)(*(_QWORD *)(v156 + 72) + 32LL) >> 1) & 0x1F;
    v141 = MiSanitizePfnProtection(0LL, v154, v165);
    Flink = MiSwizzleInvalidPte(32 * (v141 & 0x1F | 0xFFFFFFFFF8000020uLL));
    v160 = Flink;
    if ( v50 < 0xFFFFF6FB7DBED000uLL || v50 > 0xFFFFF6FB7DBED7F8uLL )
      goto LABEL_265;
    if ( !(unsigned int)MiPteHasShadow() )
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
    v143 = Flink;
    if ( !HIBYTE(word_140C4E008) && (Flink & 1) != 0 )
      v143 = Flink | 0x8000000000000000uLL;
    *(_QWORD *)v50 = v143;
    MiWritePteShadow(v50, v143, v142);
    v50 += 8LL;
    BugCheckParameter1 = v50;
    goto LABEL_279;
  }
  if ( v163 )
    MiReturnFullProcessCommitment(a1);
  return (unsigned int)v34;
}
