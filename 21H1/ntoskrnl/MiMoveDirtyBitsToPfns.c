/*
 * XREFs of MiMoveDirtyBitsToPfns @ 0x14027A0D0
 * Callers:
 *     MiBeginHoldingDirtyFaults @ 0x140538710 (MiBeginHoldingDirtyFaults.c)
 *     NtResetWriteWatch @ 0x14062DC10 (NtResetWriteWatch.c)
 *     MiProcessVaRangesInfoClass @ 0x1406DD768 (MiProcessVaRangesInfoClass.c)
 * Callees:
 *     MiFastLockLeafPageTable @ 0x14020DBA0 (MiFastLockLeafPageTable.c)
 *     MiUnlockWorkingSetShared @ 0x14020EC60 (MiUnlockWorkingSetShared.c)
 *     MiCheckProcessShadow @ 0x14020ED50 (MiCheckProcessShadow.c)
 *     MiLockWorkingSetShared @ 0x140219640 (MiLockWorkingSetShared.c)
 *     KeYieldProcessorEx @ 0x140244550 (KeYieldProcessorEx.c)
 *     MiWalkPageTables @ 0x14025DB00 (MiWalkPageTables.c)
 *     MiGetVadMandatoryPageSize @ 0x14027ABC0 (MiGetVadMandatoryPageSize.c)
 *     MiGetLeafVa @ 0x140290520 (MiGetLeafVa.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x140291580 (MI_READ_PTE_LOCK_FREE.c)
 *     MiPteInShadowRange @ 0x140291700 (MiPteInShadowRange.c)
 *     MiFlushTbList @ 0x140293410 (MiFlushTbList.c)
 *     MiGetAnyMultiplexedVm @ 0x1402A9158 (MiGetAnyMultiplexedVm.c)
 *     MiGetWsleContents @ 0x1402AFD20 (MiGetWsleContents.c)
 *     MiWorkingSetIsContended @ 0x1402B19F0 (MiWorkingSetIsContended.c)
 *     MiUnlockPageTableInternal @ 0x1402DB860 (MiUnlockPageTableInternal.c)
 *     KeShouldYieldProcessor @ 0x1402EE280 (KeShouldYieldProcessor.c)
 *     ExpWaitForSpinLockSharedAndAcquire @ 0x1402EF840 (ExpWaitForSpinLockSharedAndAcquire.c)
 *     MiWritePteShadow @ 0x1402F2F20 (MiWritePteShadow.c)
 *     MiPteHasShadow @ 0x1402F2F80 (MiPteHasShadow.c)
 *     MiCapturePageFileInfoInline @ 0x1402F6610 (MiCapturePageFileInfoInline.c)
 *     MiCompressTbFlushList @ 0x1402F66E0 (MiCompressTbFlushList.c)
 *     MiInsertLargeTbFlushEntry @ 0x1402FB584 (MiInsertLargeTbFlushEntry.c)
 *     MiUnlockVadCore @ 0x140303F20 (MiUnlockVadCore.c)
 *     MiPreUnlockWorkingSetShared @ 0x14030C55C (MiPreUnlockWorkingSetShared.c)
 *     MiReleasePageFileInfo @ 0x14034EFC0 (MiReleasePageFileInfo.c)
 *     MiRewritePteWithLockBit @ 0x1403ACEB8 (MiRewritePteWithLockBit.c)
 *     __security_check_cookie @ 0x1403CC020 (__security_check_cookie.c)
 *     qsort @ 0x1403CE680 (qsort.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403EC9E4 (KiRemoveSystemWorkPriorityKick.c)
 *     memset @ 0x140408F80 (memset.c)
 *     ExpAcquireSpinLockSharedAtDpcLevelInstrumented @ 0x1405AFFD4 (ExpAcquireSpinLockSharedAtDpcLevelInstrumented.c)
 *     ExpReleaseSpinLockSharedFromDpcLevelInstrumented @ 0x1405B0124 (ExpReleaseSpinLockSharedFromDpcLevelInstrumented.c)
 */

__int64 __fastcall MiMoveDirtyBitsToPfns(unsigned __int64 a1, unsigned __int64 a2, __int64 a3, char a4)
{
  __int64 v8; // rsi
  unsigned __int64 v9; // rbx
  unsigned __int64 v10; // r15
  _KPROCESS *Process; // rcx
  __int64 v12; // r12
  __int64 *i; // rcx
  volatile signed __int32 *v14; // r13
  unsigned __int8 v15; // al
  LONG *v16; // rdi
  unsigned __int8 CurrentIrql; // r14
  struct _KPRCB *CurrentPrcb; // rsi
  _DWORD *v19; // rcx
  signed __int32 v20; // ett
  __int64 v21; // rdi
  __int64 v22; // r13
  int v23; // eax
  unsigned __int64 v24; // r14
  unsigned __int64 v25; // rcx
  unsigned __int64 *AnyMultiplexedVm; // rdi
  int v27; // eax
  __int64 v28; // r8
  unsigned int v29; // ecx
  unsigned __int64 v30; // rdx
  unsigned __int64 v31; // r14
  unsigned __int64 v32; // rdi
  unsigned __int64 v33; // r13
  unsigned __int64 v34; // rbx
  unsigned __int64 VadMandatoryPageSize; // r9
  __int64 v36; // r10
  __int64 v37; // r11
  unsigned __int64 v38; // rsi
  unsigned __int64 v39; // rsi
  unsigned __int64 v40; // rsi
  unsigned __int8 v41; // cl
  signed __int32 v42; // eax
  __int64 v43; // r15
  signed __int32 v44; // ett
  unsigned __int64 v45; // r15
  unsigned __int64 v46; // rbx
  _BYTE *v47; // r15
  char v48; // al
  int v49; // r15d
  unsigned __int64 v50; // r9
  __int64 v51; // rcx
  unsigned __int64 v52; // rbx
  __int64 v53; // rdx
  int v54; // ecx
  unsigned __int8 v55; // bl
  struct _KPRCB *v56; // rcx
  _DWORD *v57; // rdx
  __int64 result; // rax
  __int64 v59; // rdx
  __int64 v60; // rcx
  unsigned int v61; // ebx
  unsigned __int64 v62; // rsi
  __int64 v63; // rbx
  unsigned __int64 v64; // rdx
  __int64 v65; // rcx
  __int64 v66; // rbx
  unsigned int v67; // r10d
  unsigned __int64 v68; // rax
  unsigned __int64 v69; // r8
  unsigned __int64 v70; // rbx
  __int64 v71; // r8
  __int64 v72; // r9
  __int64 v73; // rsi
  __int64 v74; // rbx
  __int64 v75; // rax
  __int64 v76; // rax
  unsigned __int64 v77; // rax
  unsigned __int64 v78; // rcx
  _DWORD *v79; // rcx
  _DWORD *SchedulerAssist; // r9
  _DWORD *v81; // r9
  int v82; // eax
  int v83; // eax
  unsigned __int64 v84; // rsi
  __int64 v85; // rcx
  unsigned __int64 v86; // r13
  __int64 v87; // rax
  __int64 v88; // rax
  __int64 LeafVa; // rax
  __int64 v90; // rcx
  struct _LIST_ENTRY *Flink; // r9
  __int64 v92; // rax
  __int64 v93; // r9
  struct _LIST_ENTRY *v94; // r8
  __int64 v95; // rax
  __int64 v96; // r8
  __int64 v97; // rax
  struct _KPRCB *v98; // rcx
  _DWORD *v99; // rdx
  bool v100; // zf
  unsigned __int8 v101; // al
  struct _KPRCB *v102; // r9
  _DWORD *v103; // r8
  int v104; // eax
  int v105; // eax
  unsigned __int8 v106; // al
  _DWORD *v107; // r8
  int v108; // eax
  int v110; // [rsp+20h] [rbp-E0h]
  int v111; // [rsp+24h] [rbp-DCh]
  __int64 v112; // [rsp+28h] [rbp-D8h]
  unsigned __int8 v113; // [rsp+30h] [rbp-D0h]
  unsigned __int64 v114; // [rsp+38h] [rbp-C8h] BYREF
  unsigned __int64 v115; // [rsp+40h] [rbp-C0h]
  int v116; // [rsp+48h] [rbp-B8h] BYREF
  int v117; // [rsp+4Ch] [rbp-B4h]
  unsigned __int64 *v118; // [rsp+50h] [rbp-B0h]
  __int64 v119; // [rsp+58h] [rbp-A8h]
  __int64 v120; // [rsp+60h] [rbp-A0h]
  int v121; // [rsp+68h] [rbp-98h] BYREF
  unsigned __int64 *v122; // [rsp+70h] [rbp-90h]
  __int64 v123; // [rsp+78h] [rbp-88h]
  __int128 v124; // [rsp+80h] [rbp-80h] BYREF
  unsigned __int64 v125; // [rsp+90h] [rbp-70h]
  __int64 v126; // [rsp+98h] [rbp-68h]
  _QWORD v127[22]; // [rsp+A0h] [rbp-60h] BYREF
  int v128; // [rsp+150h] [rbp+50h] BYREF
  __int16 v129; // [rsp+154h] [rbp+54h]
  __int16 v130; // [rsp+156h] [rbp+56h]
  __int64 v131; // [rsp+158h] [rbp+58h]
  __int64 v132; // [rsp+160h] [rbp+60h]
  _QWORD Base[21]; // [rsp+168h] [rbp+68h] BYREF
  void *retaddr; // [rsp+258h] [rbp+158h]

  v120 = a3;
  v130 = 0;
  v123 = 0LL;
  memset(&Base[1], 0, 0x98uLL);
  v112 = 0LL;
  v8 = 0LL;
  v111 = 0;
  v9 = ((a1 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  v10 = ((a2 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  v115 = v10;
  Process = KeGetCurrentThread()->ApcState.Process;
  v12 = (__int64)&Process[1].ActiveProcessorsPadding[6];
  v125 = Process[1].ActiveProcessorsPadding[8];
  v118 = &Process[1].ActiveProcessorsPadding[6];
  v117 = a4 & 1;
  if ( (a4 & 1) != 0 )
  {
    for ( i = *(__int64 **)(a3 + 56); i; i = (__int64 *)*i )
    {
      if ( (i[8] & 4) != 0 )
        break;
    }
    v122 = (unsigned __int64 *)(i + 1);
  }
  else
  {
    v122 = 0LL;
  }
  v129 = 0;
  v132 = 0LL;
  Base[0] = 0LL;
  v14 = &dword_140C4F6C0;
  v131 = 20LL;
  v128 = 1;
  v15 = *(_BYTE *)(v12 + 184) & 7;
  if ( v15 >= 6u )
  {
    CurrentIrql = KeGetCurrentIrql();
    v113 = CurrentIrql;
    __writecr8(2uLL);
    if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu )
    {
      SchedulerAssist = KeGetCurrentPrcb()->SchedulerAssist;
      SchedulerAssist[5] |= (-1 << (CurrentIrql + 1)) & 4;
    }
  }
  else
  {
    if ( v15 == 2 )
      v16 = &dword_140C4F6C0;
    else
      v16 = (LONG *)(v12 + 192);
    CurrentIrql = KeGetCurrentIrql();
    __writecr8(2uLL);
    if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu )
    {
      v81 = KeGetCurrentPrcb()->SchedulerAssist;
      v81[5] |= (-1 << (CurrentIrql + 1)) & 4;
    }
    if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
    {
      ExpAcquireSpinLockSharedAtDpcLevelInstrumented(v16, CurrentIrql);
    }
    else
    {
      CurrentPrcb = KeGetCurrentPrcb();
      v19 = CurrentPrcb->SchedulerAssist;
      if ( v19 )
      {
        if ( CurrentPrcb->NestingLevel <= 1u )
        {
          v82 = v19[6];
          v19[6] = v82 + 1;
          if ( v82 == -1 )
            KiRemoveSystemWorkPriorityKick(CurrentPrcb);
        }
      }
      _m_prefetchw(v16);
      v20 = *v16 & 0x7FFFFFFF;
      if ( v20 != _InterlockedCompareExchange(v16, v20 + 1, v20) )
      {
        v79 = CurrentPrcb->SchedulerAssist;
        if ( v79 )
        {
          if ( CurrentPrcb->NestingLevel <= 1u )
          {
            v83 = v79[6] - 1;
            v79[6] = v83;
            if ( !v83 )
              KiRemoveSystemWorkPriorityKick(CurrentPrcb);
          }
        }
        ExpWaitForSpinLockSharedAndAcquire(v16, CurrentIrql);
      }
      v8 = 0LL;
    }
    if ( v16[1] )
      _InterlockedExchange(v16 + 1, 0);
    v113 = CurrentIrql;
  }
  if ( v9 > v10 )
    goto LABEL_70;
  v21 = 0LL;
  v119 = 0LL;
  v22 = (__int64)(v10 << 25) >> 16;
  v23 = a4 & 2;
  v126 = v22;
  v110 = v23;
  while ( 2 )
  {
    if ( v8 )
    {
      MiFlushTbList(&v128);
      MiUnlockPageTableInternal(v12, v8);
      v112 = 0LL;
      if ( (unsigned int)MiWorkingSetIsContended(v12) || KeShouldYieldProcessor() )
      {
        MiUnlockWorkingSetShared(v12, CurrentIrql);
        MiLockWorkingSetShared(v12);
      }
      v23 = v110;
    }
    if ( v23 )
      _InterlockedIncrement64((volatile signed __int64 *)(v125 + 616));
    v124 = 0LL;
    memset((char *)v127 + 2, 0, 0xAEuLL);
    LOWORD(v127[0]) = 2273;
    v24 = (__int64)((v9 << 25) - v21) >> 16;
    v25 = v24;
    if ( v24 >= 0xFFFFF68000000000uLL )
    {
      do
      {
        if ( v25 > 0xFFFFF6FFFFFFFFFFuLL )
          break;
        v25 = (__int64)((v25 << 25) - v21) >> 16;
      }
      while ( v25 >= 0xFFFFF68000000000uLL );
      v12 = (__int64)v118;
    }
    if ( v25 < 0xFFFF800000000000uLL || v25 >= qword_140C4FA78 && v25 <= qword_140C4E2A8 )
      AnyMultiplexedVm = &KeGetCurrentThread()->ApcState.Process[1].ActiveProcessorsPadding[6];
    else
      AnyMultiplexedVm = (unsigned __int64 *)MiGetAnyMultiplexedVm(1LL);
    v27 = MiFastLockLeafPageTable((__int64)AnyMultiplexedVm, v24, 0);
    if ( v27 )
    {
      v29 = v27 - 1;
      LODWORD(v124) = v27 - 1;
      v30 = 0xFFFFF68000000000uLL;
      v31 = ((v24 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
      *((_QWORD *)&v124 + 1) = v31;
    }
    else
    {
      LOWORD(v127[0]) |= 4u;
      v127[21] = &v124;
      v127[2] = 0LL;
      v127[3] = AnyMultiplexedVm;
      BYTE2(v127[0]) = BYTE2(v127[0]) & 0xE3 | 4;
      v127[20] = MiGetNextPageTableTail;
      BYTE6(v127[0]) = v113;
      v127[4] = v24;
      v127[5] = v22;
      MiWalkPageTables((__int64)v127);
      v29 = v124;
      v31 = *((_QWORD *)&v124 + 1);
      v30 = 0xFFFFF68000000000uLL;
    }
    v32 = v31;
    if ( v31 )
    {
      v28 = 0x7FFFFFFFF8LL;
      v112 = ((v31 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
      if ( v29 )
      {
        v32 = ((v31 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
        v84 = ((v10 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
        if ( v29 > 1 )
        {
          v85 = v29 - 1;
          do
          {
            v32 = ((v32 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
            v84 = ((v84 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
            --v85;
          }
          while ( v85 );
        }
        v86 = v32 + 8;
        v112 = ((v32 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
        if ( ((v32 + 8) & 0xFFF) != 0 )
        {
          do
          {
            if ( v86 > v84 )
              break;
            v87 = MI_READ_PTE_LOCK_FREE(v86);
            v123 = v87;
            if ( (v87 & 1) == 0 )
              break;
            if ( (v87 & 0x80u) == 0LL )
              break;
            v86 += 8LL;
          }
          while ( (v86 & 0xFFF) != 0 );
          v30 = 0xFFFFF68000000000uLL;
        }
        v33 = v86 - 8;
      }
      else
      {
        v33 = (v31 & 0xFFFFFFFFFFFFF000uLL) + 4088;
        if ( v33 > v10 )
          v33 = v10;
      }
    }
    else
    {
      v33 = v10;
    }
    if ( !v117 )
      goto LABEL_53;
    v111 = 1;
    if ( v9 >= 0xFFFFF68000000000uLL )
    {
      do
      {
        if ( v9 > 0xFFFFF6FFFFFFFFFFuLL )
          break;
        v9 = (__int64)((v9 << 25) - v119) >> 16;
      }
      while ( v9 >= 0xFFFFF68000000000uLL );
      v12 = (__int64)v118;
    }
    v34 = (v9 >> 12) - (*(unsigned int *)(v120 + 24) | ((unsigned __int64)*(unsigned __int8 *)(v120 + 32) << 32));
    VadMandatoryPageSize = MiGetVadMandatoryPageSize(v120);
    if ( VadMandatoryPageSize != 1 )
    {
      v30 = v34 % VadMandatoryPageSize;
      v34 /= VadMandatoryPageSize;
    }
    v38 = v33 + 8;
    if ( v33 + 8 >= 0xFFFFF68000000000uLL )
    {
      do
      {
        if ( v38 > 0xFFFFF6FFFFFFFFFFuLL )
          break;
        v38 = (__int64)((v38 << 25) - v36) >> 16;
      }
      while ( v38 >= 0xFFFFF68000000000uLL );
      v12 = (__int64)v118;
    }
    if ( v38 > (((*(unsigned int *)(v37 + 28) | ((unsigned __int64)*(unsigned __int8 *)(v37 + 33) << 32)) << 12) | 0xFFF) )
    {
      v39 = *v122;
    }
    else
    {
      v39 = (v38 >> 12) - v28;
      if ( VadMandatoryPageSize != 1 )
      {
        v30 = v39 % VadMandatoryPageSize;
        v39 /= VadMandatoryPageSize;
      }
    }
    v40 = v39 - v34;
    v116 = 0;
    v41 = KeGetCurrentIrql();
    __writecr8(2uLL);
    if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && v41 <= 0xFu )
    {
      VadMandatoryPageSize = (unsigned __int64)KeGetCurrentPrcb()->SchedulerAssist;
      v30 = (-1LL << (v41 + 1)) & 4;
      v28 = (unsigned int)v30 | *(_DWORD *)(VadMandatoryPageSize + 20);
      *(_DWORD *)(VadMandatoryPageSize + 20) = v28;
    }
    v42 = *(_DWORD *)(v37 + 48);
    v43 = v37;
    do
    {
      while ( (v42 & 1) != 0 )
      {
        if ( (v42 & 2) != 0 )
        {
          v116 = 0;
          do
          {
            KeYieldProcessorEx(&v116, v30, v28, VadMandatoryPageSize);
            v42 = *(_DWORD *)(v43 + 48);
          }
          while ( (v42 & 1) != 0 );
        }
        else
        {
          v42 = _InterlockedCompareExchange((volatile signed __int32 *)(v43 + 48), v42 | 2, v42);
        }
      }
      v44 = v42;
      v42 = _InterlockedCompareExchange((volatile signed __int32 *)(v43 + 48), v42 & 0xFFFFFFFC | 1, v42);
    }
    while ( v44 != v42 );
    v10 = v115;
    if ( !v40 )
      goto LABEL_53;
    v30 = (unsigned __int64)v122;
    v45 = v34;
    v46 = v34 & 7;
    v47 = (_BYTE *)(v122[1] + (v45 >> 3));
    if ( v46 + v40 > 8 )
    {
      if ( (_DWORD)v46 )
      {
        *v47++ &= byte_14001D830[v46];
        v40 -= (unsigned int)(8 - v46);
      }
      if ( v40 > 8 )
      {
        memset(v47, 0, v40 >> 3);
        v47 += v40 >> 3;
        v40 &= 7u;
      }
      if ( !v40 )
        goto LABEL_52;
      v48 = byte_14001A5B0[v40];
    }
    else
    {
      v48 = ~(byte_14001D830[v40] << v46);
    }
    *v47 &= v48;
LABEL_52:
    v10 = v115;
LABEL_53:
    if ( !v31 )
      break;
    if ( v32 > v33 )
      goto LABEL_61;
    v49 = v117;
    v50 = 0xFFFFF6FB7DBED000uLL;
    do
    {
      v51 = *(_QWORD *)v32;
      if ( v32 >= v50 && v32 <= 0xFFFFF6FB7DBED7F8uLL && (MiFlags & 0xC00000) != 0 )
      {
        v30 = (unsigned __int64)KeGetCurrentThread()->ApcState.Process;
        if ( *(_BYTE *)(v30 + 912) != 1 && (v51 & 1) != 0 && ((v51 & 0x20) == 0 || (v51 & 0x42) == 0) )
        {
          v30 = (unsigned __int64)KeGetCurrentThread()->ApcState.Process;
          v28 = *(_QWORD *)(v30 + 1928);
          if ( v28 )
          {
            v88 = *(_QWORD *)(v28 + 8 * ((v32 >> 3) & 0x1FF));
            v28 = v51 | 0x20;
            v30 = (unsigned __int8)v88;
            LOBYTE(v30) = v88 & 0x20;
            if ( (v88 & 0x20) == 0 )
              v28 = *(_QWORD *)v32;
            v51 = v28;
            if ( (v88 & 0x42) != 0 )
              v51 = v28 | 0x42;
          }
        }
      }
      v123 = v51;
      if ( (v51 & 1) != 0 && (v51 & 0x42) != 0 )
      {
        if ( v49
          || (!v110 || v51 >= 0)
          && (LeafVa = MiGetLeafVa(v32, v30, v28, v50), (MiGetWsleContents(v90, LeafVa) & 0xF) != 9) )
        {
          v59 = *(_QWORD *)v32;
          v60 = *(_QWORD *)v32;
          if ( v32 >= v50
            && v32 <= 0xFFFFF6FB7DBED7F8uLL
            && (MiFlags & 0xC00000) != 0
            && KeGetCurrentThread()->ApcState.Process->AddressPolicy != 1
            && (v60 & 1) != 0
            && ((v60 & 0x20) == 0 || (v60 & 0x42) == 0) )
          {
            Flink = KeGetCurrentThread()->ApcState.Process[1].ProcessListEntry.Flink;
            if ( Flink )
            {
              v60 |= 0x20uLL;
              v92 = *((_QWORD *)&Flink->Flink + ((v32 >> 3) & 0x1FF));
              if ( (v92 & 0x20) == 0 )
                v60 = *(_QWORD *)v32;
              if ( (v92 & 0x42) != 0 )
                v60 |= 0x42uLL;
            }
            v50 = 0xFFFFF6FB7DBED000uLL;
          }
          v114 = v60 & 0xFFFFFFFFFFFFFFBDuLL;
          v61 = 0;
          v62 = (__int64)((v32 << 25) - v119) >> 16;
          if ( v62 >= 0xFFFFF68000000000uLL )
          {
            do
            {
              if ( v62 > 0xFFFFF6FFFFFFFFFFuLL )
                break;
              ++v61;
              v62 = (__int64)((v62 << 25) - v119) >> 16;
            }
            while ( v62 >= 0xFFFFF68000000000uLL );
            v50 = 0xFFFFF6FB7DBED000uLL;
            if ( v61 )
            {
              MiRewritePteWithLockBit(
                &KeGetCurrentThread()->ApcState.Process[1].ActiveProcessorsPadding[6],
                v32,
                v114,
                0xFFFFF6FB7DBED000uLL);
              MiInsertLargeTbFlushEntry(&v128, v61, v32, v93);
              goto LABEL_99;
            }
          }
          if ( v32 >= v50
            && v32 <= 0xFFFFF6FB7DBED7F8uLL
            && (MiFlags & 0xC00000) != 0
            && KeGetCurrentThread()->ApcState.Process->AddressPolicy != 1
            && (v59 & 1) != 0
            && ((v59 & 0x20) == 0 || (v59 & 0x42) == 0) )
          {
            v94 = KeGetCurrentThread()->ApcState.Process[1].ProcessListEntry.Flink;
            if ( v94 )
            {
              v95 = *((_QWORD *)&v94->Flink + ((v32 >> 3) & 0x1FF));
              v96 = v59 | 0x20;
              if ( (v95 & 0x20) == 0 )
                v96 = v59;
              v59 = v96;
              if ( (v95 & 0x42) != 0 )
                v59 = v96 | 0x42;
            }
          }
          v63 = v114 ^ (v59 ^ v114) & 0xF00000000000000LL ^ (v59 ^ v114 ^ (v59 ^ v114) & 0xF00000000000000LL) & 0x7000000000000000LL;
          if ( (unsigned int)MiPteInShadowRange(v32, v59) )
          {
            if ( (unsigned int)MiPteHasShadow(v65, v64) )
            {
              if ( !HIBYTE(word_140C4DF48) && (v63 & 1) != 0 )
                v63 |= 0x8000000000000000uLL;
              *(_QWORD *)v32 = v63;
              MiWritePteShadow(v32, v63);
LABEL_92:
              v66 = 1LL;
              v67 = HIDWORD(v131);
              if ( !HIDWORD(v131) )
                goto LABEL_108;
              if ( (v129 & 4) == 0 )
              {
                v68 = Base[HIDWORD(v131) - 1];
                if ( (v68 & 0xC00) == 0 )
                {
                  v69 = Base[HIDWORD(v131) - 1] & 0x3FFLL;
                  v64 = (v68 & 0xFFFFFFFFFFFFF000uLL) + ((v69 + 1) << 12);
                  if ( v64 == v62 && v69 + 1 >= v69 && v69 + 1 <= 0x3FF )
                  {
                    ++v132;
                    Base[HIDWORD(v131) - 1] = ((unsigned __int16)v68 ^ (unsigned __int16)(v68 + 1)) & 0x3FF ^ v68;
                    goto LABEL_99;
                  }
                }
              }
              if ( (v129 & 4) != 0
                || (v76 = Base[HIDWORD(v131) - 1], (v76 & 0xC00) != 0)
                || (v64 = v76 & 0xFFFFFFFFFFFFF000uLL, (v76 & 0xFFFFFFFFFFFFF000uLL) != v62 + 4096)
                || (v78 = Base[HIDWORD(v131) - 1] & 0x3FFLL, v64 = v78 + 1, v78 + 1 > 0x3FF)
                || v64 <= v78 )
              {
LABEL_108:
                if ( HIDWORD(v131) >= (unsigned int)v131 )
                {
                  HIBYTE(v129) = 1;
                }
                else
                {
                  while ( 1 )
                  {
                    v64 = (unsigned __int64)(v66 - 1) > 0x3FF ? 1024LL : v66;
                    v77 = v62 & 0xFFFFFFFFFFFFF000uLL | ((_WORD)v64 - 1) & 0x3FF;
                    v66 -= v64;
                    v62 += v64 << 12;
                    Base[v67] = v77;
                    v132 += v64;
                    v67 = HIDWORD(v131) + 1;
                    HIDWORD(v131) = v67;
                    if ( v67 == (_DWORD)v131 && (v129 & 4) == 0 )
                    {
                      qsort(Base, v67, 8uLL, MiTbFlushSort);
                      MiCompressTbFlushList(&v128);
                      v67 = HIDWORD(v131);
                      if ( HIDWORD(v131) == (_DWORD)v131 )
                        break;
                    }
                    if ( !v66 )
                      goto LABEL_99;
                  }
                  if ( v66 )
                  {
                    HIBYTE(v129) = 1;
                    v132 = HIDWORD(v131);
                  }
                }
                goto LABEL_99;
              }
              ++v132;
              Base[HIDWORD(v131) - 1] = ((unsigned __int16)(v76 - 4096) ^ (unsigned __int16)(v76 - 4096 + 1)) & 0x3FF ^ (unsigned __int64)(v76 - 4096);
LABEL_99:
              v70 = v114;
              if ( (unsigned int)MiPteInShadowRange(&v114, v64)
                && (MiFlags & 0xC00000) != 0
                && KeGetCurrentThread()->ApcState.Process->AddressPolicy != 1
                && (v70 & 1) != 0
                && ((v70 & 0x20) == 0 || (v70 & 0x42) == 0) )
              {
                v30 = (unsigned __int64)KeGetCurrentThread()->ApcState.Process[1].ProcessListEntry.Flink;
                if ( v30 )
                {
                  v97 = *(_QWORD *)(v30 + 8 * (((unsigned __int64)&v114 >> 3) & 0x1FF));
                  if ( (v97 & 0x20) != 0 )
                    v70 |= 0x20uLL;
                  if ( (v97 & 0x42) != 0 )
                    v70 |= 0x42uLL;
                }
                else
                {
                  v70 = v114;
                }
              }
              v73 = 0LL;
              v74 = 48 * ((v70 >> 12) & 0xFFFFFFFFFLL) - 0x58000000000LL;
              v121 = 0;
              while ( _interlockedbittestandset64((volatile signed __int32 *)(v74 + 24), 0x3FuLL) )
              {
                do
                  KeYieldProcessorEx(&v121, v30, v71, v72);
                while ( *(__int64 *)(v74 + 24) < 0 );
              }
              v28 = *(unsigned __int8 *)(v74 + 34);
              v75 = 0LL;
              if ( (v28 & 0x10) == 0 )
              {
                v30 = (unsigned __int8)v28;
                LOBYTE(v30) = !_bittest64((const signed __int64 *)(v74 + 16), 0xAu) & ~((unsigned __int8)v28 >> 3);
                if ( (v30 & 1) != 0 )
                {
                  v75 = MiCapturePageFileInfoInline(v74 + 16, 1LL);
                  v28 = *(unsigned __int8 *)(v74 + 34);
                }
                LOBYTE(v28) = v28 | 0x10;
                *(_BYTE *)(v74 + 34) = v28;
                if ( v75 )
                {
                  v30 = (*(_QWORD *)(v74 + 40) >> 39) & 0x3FFLL;
                  v73 = *(_QWORD *)(qword_140C4E588 + 8 * v30);
                }
              }
              _InterlockedAnd64((volatile signed __int64 *)(v74 + 24), 0x7FFFFFFFFFFFFFFFuLL);
              if ( v75 )
                MiReleasePageFileInfo(v73, v75, 1LL);
              v50 = 0xFFFFF6FB7DBED000uLL;
              goto LABEL_59;
            }
            if ( (HIDWORD(KeGetCurrentThread()->ApcState.Process[2].Header.WaitListHead.Flink) & 0x1000) != 0
              && (v63 & 1) != 0 )
            {
              v63 |= 0x8000000000000000uLL;
            }
          }
          *(_QWORD *)v32 = v63;
          goto LABEL_92;
        }
      }
LABEL_59:
      v32 += 8LL;
    }
    while ( v32 <= v33 );
    v12 = (__int64)v118;
    v10 = v115;
LABEL_61:
    if ( v111 )
    {
      _InterlockedAnd((volatile signed __int32 *)(v120 + 48), 0xFFFFFFFC);
      if ( KiIrqlFlags )
      {
        if ( (KiIrqlFlags & 1) != 0 && (unsigned __int8)(KeGetCurrentIrql() - 2) <= 0xDu )
        {
          v98 = KeGetCurrentPrcb();
          v99 = v98->SchedulerAssist;
          v100 = (v99[5] & 0xFFFF0007) == 0;
          v99[5] &= 0xFFFF0007;
          if ( v100 )
            KiRemoveSystemWorkPriorityKick(v98);
        }
      }
      __writecr8(2uLL);
      v111 = 0;
    }
    v52 = v32;
    if ( v32 >= 0xFFFFF68000000000uLL )
    {
      do
      {
        if ( v52 > 0xFFFFF6FFFFFFFFFFuLL )
          break;
        v52 = (__int64)((v52 << 25) - v119) >> 16;
      }
      while ( v52 >= 0xFFFFF68000000000uLL );
      v12 = (__int64)v118;
      v10 = v115;
    }
    v21 = v119;
    v9 = ((v52 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
    v22 = v126;
    v23 = v110;
    if ( v9 <= v10 )
    {
      v8 = v112;
      CurrentIrql = v113;
      continue;
    }
    break;
  }
  v14 = &dword_140C4F6C0;
LABEL_70:
  MiFlushTbList(&v128);
  if ( v111 )
  {
    LOBYTE(v53) = 2;
    MiUnlockVadCore(v120, v53);
  }
  if ( v112 )
    MiUnlockPageTableInternal(v12, v112);
  if ( (*(_BYTE *)(v12 + 184) & 7u) >= 6 )
  {
    if ( KiIrqlFlags )
    {
      if ( (KiIrqlFlags & 1) != 0 )
      {
        v101 = KeGetCurrentIrql();
        if ( v101 <= 0xFu && v113 <= 0xFu && v101 >= 2u )
        {
          v102 = KeGetCurrentPrcb();
          v103 = v102->SchedulerAssist;
          v104 = ~(unsigned __int16)(-1LL << (v113 + 1));
          v100 = (v104 & v103[5]) == 0;
          v103[5] &= v104;
          if ( v100 )
            goto LABEL_271;
        }
      }
    }
  }
  else
  {
    v54 = *(_DWORD *)(v12 + 184);
    if ( (v54 & 0x8000000) != 0 || (v54 & 0x4000000) != 0 || (v54 & 0x10000000) != 0 )
    {
      v55 = v113;
      MiPreUnlockWorkingSetShared(v12, v113);
      LOBYTE(v54) = *(_BYTE *)(v12 + 184);
    }
    else
    {
      v55 = v113;
    }
    if ( (v54 & 7) != 2 )
      v14 = (volatile signed __int32 *)(v12 + 192);
    MiCheckProcessShadow(v12, 1u);
    if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
    {
      ExpReleaseSpinLockSharedFromDpcLevelInstrumented(v14, retaddr);
    }
    else
    {
      _InterlockedAnd(v14, 0xBFFFFFFF);
      _InterlockedDecrement(v14);
    }
    v56 = KeGetCurrentPrcb();
    v57 = v56->SchedulerAssist;
    if ( v57 )
    {
      if ( v56->NestingLevel <= 1u )
      {
        v105 = v57[6] - 1;
        v57[6] = v105;
        if ( !v105 )
          KiRemoveSystemWorkPriorityKick(v56);
      }
    }
    if ( KiIrqlFlags )
    {
      if ( (KiIrqlFlags & 1) != 0 )
      {
        v106 = KeGetCurrentIrql();
        if ( v106 <= 0xFu && v55 <= 0xFu && v106 >= 2u )
        {
          v102 = KeGetCurrentPrcb();
          v107 = v102->SchedulerAssist;
          v108 = ~(unsigned __int16)(-1LL << (v55 + 1));
          v100 = (v108 & v107[5]) == 0;
          v107[5] &= v108;
          if ( v100 )
LABEL_271:
            KiRemoveSystemWorkPriorityKick(v102);
        }
      }
    }
  }
  result = v113;
  __writecr8(v113);
  return result;
}
