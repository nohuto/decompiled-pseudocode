/*
 * XREFs of MiMoveDirtyBitsToPfns @ 0x1403221E0
 * Callers:
 *     MiBeginHoldingDirtyFaults @ 0x14053E470 (MiBeginHoldingDirtyFaults.c)
 *     MiProcessVaRangesInfoClass @ 0x1406BE204 (MiProcessVaRangesInfoClass.c)
 *     NtResetWriteWatch @ 0x140704430 (NtResetWriteWatch.c)
 * Callees:
 *     MiUnlockPageTableInternal @ 0x140202790 (MiUnlockPageTableInternal.c)
 *     KeShouldYieldProcessor @ 0x140211F40 (KeShouldYieldProcessor.c)
 *     ExpWaitForSpinLockSharedAndAcquire @ 0x140213930 (ExpWaitForSpinLockSharedAndAcquire.c)
 *     MiInsertLargeTbFlushEntry @ 0x1402199E0 (MiInsertLargeTbFlushEntry.c)
 *     MiCapturePageFileInfoInline @ 0x140220130 (MiCapturePageFileInfoInline.c)
 *     MiCompressTbFlushList @ 0x140220720 (MiCompressTbFlushList.c)
 *     MiUnlockVadCore @ 0x140230F50 (MiUnlockVadCore.c)
 *     MiWritePteShadow @ 0x140234B9C (MiWritePteShadow.c)
 *     MiPteHasShadow @ 0x140234BFC (MiPteHasShadow.c)
 *     MiReleasePageFileInfo @ 0x140255C50 (MiReleasePageFileInfo.c)
 *     MiGetWsleContents @ 0x14025ECE0 (MiGetWsleContents.c)
 *     MiWalkPageTables @ 0x1402ADBC0 (MiWalkPageTables.c)
 *     MiFastLockLeafPageTable @ 0x1402B2FD0 (MiFastLockLeafPageTable.c)
 *     MiUnlockWorkingSetShared @ 0x1402B4090 (MiUnlockWorkingSetShared.c)
 *     MiCheckProcessShadow @ 0x1402B4180 (MiCheckProcessShadow.c)
 *     MiLockWorkingSetShared @ 0x1402BE5B0 (MiLockWorkingSetShared.c)
 *     KeYieldProcessorEx @ 0x1402EFAD0 (KeYieldProcessorEx.c)
 *     MiGetAnyMultiplexedVm @ 0x140307E4C (MiGetAnyMultiplexedVm.c)
 *     MiWorkingSetIsContended @ 0x140316520 (MiWorkingSetIsContended.c)
 *     MiGetVadMandatoryPageSize @ 0x140322CD0 (MiGetVadMandatoryPageSize.c)
 *     MiGetLeafVa @ 0x140337BB0 (MiGetLeafVa.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x140338C10 (MI_READ_PTE_LOCK_FREE.c)
 *     MiFlushTbList @ 0x140346270 (MiFlushTbList.c)
 *     MiPteInShadowRange @ 0x140353840 (MiPteInShadowRange.c)
 *     MiPreUnlockWorkingSetShared @ 0x14036C3C0 (MiPreUnlockWorkingSetShared.c)
 *     MiRewritePteWithLockBit @ 0x1403B6D88 (MiRewritePteWithLockBit.c)
 *     __security_check_cookie @ 0x1403D05D0 (__security_check_cookie.c)
 *     qsort @ 0x1403D2C30 (qsort.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403F3684 (KiRemoveSystemWorkPriorityKick.c)
 *     memset @ 0x140414300 (memset.c)
 *     ExpAcquireSpinLockSharedAtDpcLevelInstrumented @ 0x1405B5E94 (ExpAcquireSpinLockSharedAtDpcLevelInstrumented.c)
 *     ExpReleaseSpinLockSharedFromDpcLevelInstrumented @ 0x1405B5FEC (ExpReleaseSpinLockSharedFromDpcLevelInstrumented.c)
 */

__int64 __fastcall MiMoveDirtyBitsToPfns(unsigned __int64 a1, unsigned __int64 a2, __int64 a3, char a4)
{
  _DWORD *v8; // r9
  unsigned __int64 v9; // rsi
  unsigned __int64 v10; // rbx
  unsigned __int64 v11; // r15
  _KPROCESS *Process; // rcx
  __int64 v13; // r12
  __int64 *i; // rcx
  volatile signed __int32 *v15; // r13
  unsigned __int8 v16; // al
  LONG *v17; // rdi
  unsigned __int8 CurrentIrql; // r14
  struct _KPRCB *CurrentPrcb; // rsi
  _DWORD *v20; // rcx
  signed __int32 v21; // ett
  __int64 v22; // rdi
  __int64 v23; // r13
  int v24; // eax
  unsigned __int64 v25; // r14
  unsigned __int64 v26; // rcx
  char *AnyMultiplexedVm; // rdi
  int v28; // eax
  unsigned int v29; // ecx
  unsigned __int64 v30; // r14
  unsigned __int64 v31; // rdi
  unsigned __int64 v32; // r13
  unsigned __int64 v33; // rbx
  __int64 v34; // rdx
  __int64 v35; // r8
  unsigned __int64 VadMandatoryPageSize; // r9
  __int64 v37; // r10
  __int64 v38; // r11
  unsigned __int64 v39; // rsi
  unsigned __int64 v40; // rsi
  unsigned __int64 v41; // rsi
  unsigned __int8 v42; // cl
  signed __int32 v43; // eax
  __int64 v44; // r15
  signed __int32 v45; // ett
  unsigned __int64 v46; // r15
  unsigned __int64 v47; // rbx
  _BYTE *v48; // r15
  char v49; // al
  int v50; // r15d
  unsigned __int64 v51; // r9
  __int64 v52; // rcx
  unsigned __int64 v53; // rbx
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
  __int64 v64; // rbx
  unsigned int v65; // r10d
  unsigned __int64 v66; // rax
  unsigned __int64 v67; // r8
  unsigned __int64 v68; // rbx
  struct _LIST_ENTRY *v69; // rdx
  __int64 v70; // r8
  __int64 v71; // r9
  __int64 v72; // rsi
  __int64 v73; // rbx
  unsigned __int8 v74; // r8
  unsigned __int64 v75; // rax
  __int64 v76; // rax
  __int64 v77; // rdx
  unsigned __int64 v78; // rax
  unsigned __int64 v79; // rcx
  __int64 v80; // rdx
  __int64 v81; // r8
  _DWORD *v82; // r9
  _DWORD *v83; // rcx
  _DWORD *SchedulerAssist; // r9
  int v85; // eax
  int v86; // eax
  unsigned __int64 v87; // rsi
  __int64 v88; // rcx
  unsigned __int64 v89; // r13
  __int64 v90; // rax
  struct _LIST_ENTRY *Flink; // r8
  __int64 v92; // rax
  __int64 v93; // r8
  unsigned __int64 LeafVa; // rax
  __int64 v95; // rcx
  struct _LIST_ENTRY *v96; // r9
  __int64 v97; // rax
  struct _LIST_ENTRY *v98; // r8
  __int64 v99; // rax
  __int64 v100; // r8
  __int64 v101; // rax
  struct _KPRCB *v102; // rcx
  _DWORD *v103; // rdx
  bool v104; // zf
  unsigned __int8 v105; // al
  struct _KPRCB *v106; // r9
  _DWORD *v107; // r8
  int v108; // eax
  int v109; // eax
  unsigned __int8 v110; // al
  _DWORD *v111; // r8
  int v112; // eax
  int v114; // [rsp+20h] [rbp-E0h]
  int v115; // [rsp+24h] [rbp-DCh]
  unsigned __int64 j; // [rsp+28h] [rbp-D8h]
  unsigned __int8 v117; // [rsp+30h] [rbp-D0h]
  unsigned __int64 v118; // [rsp+38h] [rbp-C8h] BYREF
  unsigned __int64 v119; // [rsp+40h] [rbp-C0h]
  int v120; // [rsp+48h] [rbp-B8h] BYREF
  int v121; // [rsp+4Ch] [rbp-B4h]
  unsigned __int64 *v122; // [rsp+50h] [rbp-B0h]
  __int64 v123; // [rsp+58h] [rbp-A8h]
  __int64 v124; // [rsp+60h] [rbp-A0h]
  int v125; // [rsp+68h] [rbp-98h] BYREF
  unsigned __int64 *v126; // [rsp+70h] [rbp-90h]
  __int64 v127; // [rsp+78h] [rbp-88h]
  __int128 v128; // [rsp+80h] [rbp-80h] BYREF
  unsigned __int64 v129; // [rsp+90h] [rbp-70h]
  __int64 v130; // [rsp+98h] [rbp-68h]
  _QWORD v131[22]; // [rsp+A0h] [rbp-60h] BYREF
  int v132; // [rsp+150h] [rbp+50h] BYREF
  __int16 v133; // [rsp+154h] [rbp+54h]
  __int16 v134; // [rsp+156h] [rbp+56h]
  __int64 v135; // [rsp+158h] [rbp+58h]
  __int64 v136; // [rsp+160h] [rbp+60h]
  _QWORD Base[21]; // [rsp+168h] [rbp+68h] BYREF
  void *retaddr; // [rsp+258h] [rbp+158h]

  v124 = a3;
  v134 = 0;
  v127 = 0LL;
  memset(&Base[1], 0, 0x98uLL);
  j = 0LL;
  v9 = 0LL;
  v115 = 0;
  v10 = ((a1 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  v11 = ((a2 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  v119 = v11;
  Process = KeGetCurrentThread()->ApcState.Process;
  v13 = (__int64)&Process[1].ActiveProcessorsPadding[6];
  v129 = Process[1].ActiveProcessorsPadding[8];
  v122 = &Process[1].ActiveProcessorsPadding[6];
  v121 = a4 & 1;
  if ( (a4 & 1) != 0 )
  {
    for ( i = *(__int64 **)(a3 + 56); i; i = (__int64 *)*i )
    {
      if ( (i[8] & 4) != 0 )
        break;
    }
    v126 = (unsigned __int64 *)(i + 1);
  }
  else
  {
    v126 = 0LL;
  }
  v133 = 0;
  v136 = 0LL;
  Base[0] = 0LL;
  v15 = &dword_140C4F7C0;
  v135 = 20LL;
  v132 = 1;
  v16 = *(_BYTE *)(v13 + 184) & 7;
  if ( v16 >= 6u )
  {
    CurrentIrql = KeGetCurrentIrql();
    v117 = CurrentIrql;
    __writecr8(2uLL);
    if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu )
    {
      SchedulerAssist = KeGetCurrentPrcb()->SchedulerAssist;
      SchedulerAssist[5] |= (-1 << (CurrentIrql + 1)) & 4;
    }
  }
  else
  {
    if ( v16 == 2 )
      v17 = &dword_140C4F7C0;
    else
      v17 = (LONG *)(v13 + 192);
    CurrentIrql = KeGetCurrentIrql();
    __writecr8(2uLL);
    if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu )
    {
      v8 = KeGetCurrentPrcb()->SchedulerAssist;
      v8[5] |= (-1 << (CurrentIrql + 1)) & 4;
    }
    if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
    {
      ExpAcquireSpinLockSharedAtDpcLevelInstrumented(v17, CurrentIrql, 0xFFFFF68000000000uLL, v8);
    }
    else
    {
      CurrentPrcb = KeGetCurrentPrcb();
      v20 = CurrentPrcb->SchedulerAssist;
      if ( v20 )
      {
        if ( CurrentPrcb->NestingLevel <= 1u )
        {
          v85 = v20[6];
          v20[6] = v85 + 1;
          if ( v85 == -1 )
            KiRemoveSystemWorkPriorityKick(CurrentPrcb);
        }
      }
      _m_prefetchw(v17);
      v21 = *v17 & 0x7FFFFFFF;
      if ( v21 != _InterlockedCompareExchange(v17, v21 + 1, v21) )
      {
        v83 = CurrentPrcb->SchedulerAssist;
        if ( v83 )
        {
          if ( CurrentPrcb->NestingLevel <= 1u )
          {
            v86 = v83[6] - 1;
            v83[6] = v86;
            if ( !v86 )
              KiRemoveSystemWorkPriorityKick(CurrentPrcb);
          }
        }
        ExpWaitForSpinLockSharedAndAcquire(v17, CurrentIrql);
      }
      v9 = 0LL;
    }
    if ( v17[1] )
      _InterlockedExchange(v17 + 1, 0);
    v117 = CurrentIrql;
  }
  if ( v10 > v11 )
    goto LABEL_70;
  v22 = 0LL;
  v123 = 0LL;
  v23 = (__int64)(v11 << 25) >> 16;
  v24 = a4 & 2;
  v130 = v23;
  v114 = v24;
  while ( 2 )
  {
    if ( v9 )
    {
      MiFlushTbList(&v132);
      MiUnlockPageTableInternal(v13, v9);
      j = 0LL;
      if ( MiWorkingSetIsContended(v13) || KeShouldYieldProcessor() )
      {
        MiUnlockWorkingSetShared(v13, CurrentIrql);
        MiLockWorkingSetShared(v13, v80, v81, v82);
      }
      v24 = v114;
    }
    if ( v24 )
      _InterlockedIncrement64((volatile signed __int64 *)(v129 + 616));
    v128 = 0LL;
    memset((char *)v131 + 2, 0, 0xAEuLL);
    LOWORD(v131[0]) = 2273;
    v25 = (__int64)((v10 << 25) - v22) >> 16;
    v26 = v25;
    if ( v25 >= 0xFFFFF68000000000uLL )
    {
      do
      {
        if ( v26 > 0xFFFFF6FFFFFFFFFFuLL )
          break;
        v26 = (__int64)((v26 << 25) - v22) >> 16;
      }
      while ( v26 >= 0xFFFFF68000000000uLL );
      v13 = (__int64)v122;
    }
    if ( v26 < 0xFFFF800000000000uLL || v26 >= qword_140C4FB78 && v26 <= qword_140C4E3A8 )
      AnyMultiplexedVm = (char *)&KeGetCurrentThread()->ApcState.Process[1].ActiveProcessorsPadding[6];
    else
      AnyMultiplexedVm = MiGetAnyMultiplexedVm(1);
    v28 = MiFastLockLeafPageTable((__int64)AnyMultiplexedVm, v25, 0);
    if ( v28 )
    {
      v29 = v28 - 1;
      LODWORD(v128) = v28 - 1;
      v30 = ((v25 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
      *((_QWORD *)&v128 + 1) = v30;
    }
    else
    {
      LOWORD(v131[0]) |= 4u;
      v131[21] = &v128;
      v131[2] = 0LL;
      v131[3] = AnyMultiplexedVm;
      BYTE2(v131[0]) = BYTE2(v131[0]) & 0xE3 | 4;
      v131[20] = MiGetNextPageTableTail;
      BYTE6(v131[0]) = v117;
      v131[4] = v25;
      v131[5] = v23;
      MiWalkPageTables((__int64)v131);
      v29 = v128;
      v30 = *((_QWORD *)&v128 + 1);
    }
    v31 = v30;
    if ( v30 )
    {
      j = ((v30 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
      if ( v29 )
      {
        v31 = ((v30 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
        v87 = ((v11 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
        if ( v29 > 1 )
        {
          v88 = v29 - 1;
          do
          {
            v31 = ((v31 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
            v87 = ((v87 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
            --v88;
          }
          while ( v88 );
        }
        v89 = v31 + 8;
        for ( j = ((v31 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL; (v89 & 0xFFF) != 0; v89 += 8LL )
        {
          if ( v89 > v87 )
            break;
          v90 = MI_READ_PTE_LOCK_FREE(v89);
          v127 = v90;
          if ( (v90 & 1) == 0 )
            break;
          if ( (v90 & 0x80u) == 0LL )
            break;
        }
        v32 = v89 - 8;
      }
      else
      {
        v32 = (v30 & 0xFFFFFFFFFFFFF000uLL) + 4088;
        if ( v32 > v11 )
          v32 = v11;
      }
    }
    else
    {
      v32 = v11;
    }
    if ( !v121 )
      goto LABEL_53;
    v115 = 1;
    if ( v10 >= 0xFFFFF68000000000uLL )
    {
      do
      {
        if ( v10 > 0xFFFFF6FFFFFFFFFFuLL )
          break;
        v10 = (__int64)((v10 << 25) - v123) >> 16;
      }
      while ( v10 >= 0xFFFFF68000000000uLL );
      v13 = (__int64)v122;
    }
    v33 = (v10 >> 12) - (*(unsigned int *)(v124 + 24) | ((unsigned __int64)*(unsigned __int8 *)(v124 + 32) << 32));
    VadMandatoryPageSize = MiGetVadMandatoryPageSize(v124);
    if ( VadMandatoryPageSize != 1 )
    {
      v34 = v33 % VadMandatoryPageSize;
      v33 /= VadMandatoryPageSize;
    }
    v39 = v32 + 8;
    if ( v32 + 8 >= 0xFFFFF68000000000uLL )
    {
      do
      {
        if ( v39 > 0xFFFFF6FFFFFFFFFFuLL )
          break;
        v39 = (__int64)((v39 << 25) - v37) >> 16;
      }
      while ( v39 >= 0xFFFFF68000000000uLL );
      v13 = (__int64)v122;
    }
    if ( v39 > (((*(unsigned int *)(v38 + 28) | ((unsigned __int64)*(unsigned __int8 *)(v38 + 33) << 32)) << 12) | 0xFFF) )
    {
      v40 = *v126;
    }
    else
    {
      v40 = (v39 >> 12) - v35;
      if ( VadMandatoryPageSize != 1 )
      {
        v34 = v40 % VadMandatoryPageSize;
        v40 /= VadMandatoryPageSize;
      }
    }
    v41 = v40 - v33;
    v120 = 0;
    v42 = KeGetCurrentIrql();
    __writecr8(2uLL);
    if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && v42 <= 0xFu )
    {
      VadMandatoryPageSize = (unsigned __int64)KeGetCurrentPrcb()->SchedulerAssist;
      v34 = (-1LL << (v42 + 1)) & 4;
      v35 = (unsigned int)v34 | *(_DWORD *)(VadMandatoryPageSize + 20);
      *(_DWORD *)(VadMandatoryPageSize + 20) = v35;
    }
    v43 = *(_DWORD *)(v38 + 48);
    v44 = v38;
    do
    {
      while ( (v43 & 1) != 0 )
      {
        if ( (v43 & 2) != 0 )
        {
          v120 = 0;
          do
          {
            KeYieldProcessorEx(&v120, v34, v35, VadMandatoryPageSize);
            v43 = *(_DWORD *)(v44 + 48);
          }
          while ( (v43 & 1) != 0 );
        }
        else
        {
          v43 = _InterlockedCompareExchange((volatile signed __int32 *)(v44 + 48), v43 | 2, v43);
        }
      }
      v45 = v43;
      v43 = _InterlockedCompareExchange((volatile signed __int32 *)(v44 + 48), v43 & 0xFFFFFFFC | 1, v43);
    }
    while ( v45 != v43 );
    v11 = v119;
    if ( !v41 )
      goto LABEL_53;
    v46 = v33;
    v47 = v33 & 7;
    v48 = (_BYTE *)(v126[1] + (v46 >> 3));
    if ( v47 + v41 > 8 )
    {
      if ( (_DWORD)v47 )
      {
        *v48++ &= byte_14001E890[v47];
        v41 -= (unsigned int)(8 - v47);
      }
      if ( v41 > 8 )
      {
        memset(v48, 0, v41 >> 3);
        v48 += v41 >> 3;
        v41 &= 7u;
      }
      if ( !v41 )
        goto LABEL_52;
      v49 = byte_14001B620[v41];
    }
    else
    {
      v49 = ~(byte_14001E890[v41] << v47);
    }
    *v48 &= v49;
LABEL_52:
    v11 = v119;
LABEL_53:
    if ( !v30 )
      break;
    if ( v31 > v32 )
      goto LABEL_61;
    v50 = v121;
    v51 = 0xFFFFF6FB7DBED000uLL;
    do
    {
      v52 = *(_QWORD *)v31;
      if ( v31 >= v51
        && v31 <= 0xFFFFF6FB7DBED7F8uLL
        && (MiFlags & 0xC00000) != 0
        && KeGetCurrentThread()->ApcState.Process->AddressPolicy != 1
        && (v52 & 1) != 0
        && ((v52 & 0x20) == 0 || (v52 & 0x42) == 0) )
      {
        Flink = KeGetCurrentThread()->ApcState.Process[1].ProcessListEntry.Flink;
        if ( Flink )
        {
          v92 = *((_QWORD *)&Flink->Flink + ((v31 >> 3) & 0x1FF));
          v93 = v52 | 0x20;
          if ( (v92 & 0x20) == 0 )
            v93 = *(_QWORD *)v31;
          v52 = v93;
          if ( (v92 & 0x42) != 0 )
            v52 = v93 | 0x42;
        }
      }
      v127 = v52;
      if ( (v52 & 1) != 0 && (v52 & 0x42) != 0 )
      {
        if ( v50 || (!v114 || v52 >= 0) && (LeafVa = MiGetLeafVa(v31), (MiGetWsleContents(v95, LeafVa) & 0xF) != 9) )
        {
          v59 = *(_QWORD *)v31;
          v60 = *(_QWORD *)v31;
          if ( v31 >= v51
            && v31 <= 0xFFFFF6FB7DBED7F8uLL
            && (MiFlags & 0xC00000) != 0
            && KeGetCurrentThread()->ApcState.Process->AddressPolicy != 1
            && (v60 & 1) != 0
            && ((v60 & 0x20) == 0 || (v60 & 0x42) == 0) )
          {
            v96 = KeGetCurrentThread()->ApcState.Process[1].ProcessListEntry.Flink;
            if ( v96 )
            {
              v60 |= 0x20uLL;
              v97 = *((_QWORD *)&v96->Flink + ((v31 >> 3) & 0x1FF));
              if ( (v97 & 0x20) == 0 )
                v60 = *(_QWORD *)v31;
              if ( (v97 & 0x42) != 0 )
                v60 |= 0x42uLL;
            }
            v51 = 0xFFFFF6FB7DBED000uLL;
          }
          v118 = v60 & 0xFFFFFFFFFFFFFFBDuLL;
          v61 = 0;
          v62 = (__int64)((v31 << 25) - v123) >> 16;
          if ( v62 >= 0xFFFFF68000000000uLL )
          {
            do
            {
              if ( v62 > 0xFFFFF6FFFFFFFFFFuLL )
                break;
              ++v61;
              v62 = (__int64)((v62 << 25) - v123) >> 16;
            }
            while ( v62 >= 0xFFFFF68000000000uLL );
            v51 = 0xFFFFF6FB7DBED000uLL;
            if ( v61 )
            {
              MiRewritePteWithLockBit(&KeGetCurrentThread()->ApcState.Process[1].ActiveProcessorsPadding[6], v31, v118);
              MiInsertLargeTbFlushEntry((__int64)&v132, v61, v31);
              goto LABEL_99;
            }
          }
          if ( v31 >= v51
            && v31 <= 0xFFFFF6FB7DBED7F8uLL
            && (MiFlags & 0xC00000) != 0
            && KeGetCurrentThread()->ApcState.Process->AddressPolicy != 1
            && (v59 & 1) != 0
            && ((v59 & 0x20) == 0 || (v59 & 0x42) == 0) )
          {
            v98 = KeGetCurrentThread()->ApcState.Process[1].ProcessListEntry.Flink;
            if ( v98 )
            {
              v99 = *((_QWORD *)&v98->Flink + ((v31 >> 3) & 0x1FF));
              v100 = v59 | 0x20;
              if ( (v99 & 0x20) == 0 )
                v100 = v59;
              v59 = v100;
              if ( (v99 & 0x42) != 0 )
                v59 = v100 | 0x42;
            }
          }
          v63 = v118 ^ (v59 ^ v118) & 0xF00000000000000LL ^ (v59 ^ v118 ^ (v59 ^ v118) & 0xF00000000000000LL) & 0x7000000000000000LL;
          if ( (unsigned int)MiPteInShadowRange(v31) )
          {
            if ( (unsigned int)MiPteHasShadow() )
            {
              if ( !HIBYTE(word_140C4E048) && (v63 & 1) != 0 )
                v63 |= 0x8000000000000000uLL;
              *(_QWORD *)v31 = v63;
              MiWritePteShadow(v31, v63);
LABEL_92:
              v64 = 1LL;
              v65 = HIDWORD(v135);
              if ( !HIDWORD(v135) )
                goto LABEL_108;
              if ( (v133 & 4) == 0 )
              {
                v66 = Base[HIDWORD(v135) - 1];
                if ( (v66 & 0xC00) == 0 )
                {
                  v67 = Base[HIDWORD(v135) - 1] & 0x3FFLL;
                  if ( (v66 & 0xFFFFFFFFFFFFF000uLL) + ((v67 + 1) << 12) == v62 && v67 + 1 >= v67 && v67 + 1 <= 0x3FF )
                  {
                    ++v136;
                    Base[HIDWORD(v135) - 1] = ((unsigned __int16)v66 ^ (unsigned __int16)(v66 + 1)) & 0x3FF ^ v66;
                    goto LABEL_99;
                  }
                }
              }
              if ( (v133 & 4) != 0
                || (v76 = Base[HIDWORD(v135) - 1], (v76 & 0xC00) != 0)
                || (v76 & 0xFFFFFFFFFFFFF000uLL) != v62 + 4096
                || (v79 = Base[HIDWORD(v135) - 1] & 0x3FFLL, v79 + 1 > 0x3FF)
                || v79 + 1 <= v79 )
              {
LABEL_108:
                if ( HIDWORD(v135) >= (unsigned int)v135 )
                {
                  HIBYTE(v133) = 1;
                }
                else
                {
                  while ( 1 )
                  {
                    v77 = (unsigned __int64)(v64 - 1) > 0x3FF ? 1024LL : v64;
                    v78 = v62 & 0xFFFFFFFFFFFFF000uLL | ((_WORD)v77 - 1) & 0x3FF;
                    v64 -= v77;
                    v62 += v77 << 12;
                    Base[v65] = v78;
                    v136 += v77;
                    v65 = HIDWORD(v135) + 1;
                    HIDWORD(v135) = v65;
                    if ( v65 == (_DWORD)v135 && (v133 & 4) == 0 )
                    {
                      qsort(Base, v65, 8uLL, (int (__cdecl *)(const void *, const void *))MiTbFlushSort);
                      MiCompressTbFlushList((__int64)&v132);
                      v65 = HIDWORD(v135);
                      if ( HIDWORD(v135) == (_DWORD)v135 )
                        break;
                    }
                    if ( !v64 )
                      goto LABEL_99;
                  }
                  if ( v64 )
                  {
                    HIBYTE(v133) = 1;
                    v136 = HIDWORD(v135);
                  }
                }
                goto LABEL_99;
              }
              ++v136;
              Base[HIDWORD(v135) - 1] = ((unsigned __int16)(v76 - 4096) ^ (unsigned __int16)(v76 - 4096 + 1)) & 0x3FF ^ (unsigned __int64)(v76 - 4096);
LABEL_99:
              v68 = v118;
              if ( (unsigned int)MiPteInShadowRange(&v118)
                && (MiFlags & 0xC00000) != 0
                && KeGetCurrentThread()->ApcState.Process->AddressPolicy != 1
                && (v68 & 1) != 0
                && ((v68 & 0x20) == 0 || (v68 & 0x42) == 0) )
              {
                v69 = KeGetCurrentThread()->ApcState.Process[1].ProcessListEntry.Flink;
                if ( v69 )
                {
                  v101 = *((_QWORD *)&v69->Flink + (((unsigned __int64)&v118 >> 3) & 0x1FF));
                  if ( (v101 & 0x20) != 0 )
                    v68 |= 0x20uLL;
                  if ( (v101 & 0x42) != 0 )
                    v68 |= 0x42uLL;
                }
                else
                {
                  v68 = v118;
                }
              }
              v72 = 0LL;
              v73 = 48 * ((v68 >> 12) & 0xFFFFFFFFFLL) - 0x58000000000LL;
              v125 = 0;
              while ( _interlockedbittestandset64((volatile signed __int32 *)(v73 + 24), 0x3FuLL) )
              {
                do
                  KeYieldProcessorEx(&v125, (__int64)v69, v70, v71);
                while ( *(__int64 *)(v73 + 24) < 0 );
              }
              v74 = *(_BYTE *)(v73 + 34);
              v75 = 0LL;
              if ( (v74 & 0x10) == 0 )
              {
                if ( (!_bittest64((const signed __int64 *)(v73 + 16), 0xAu) & (unsigned __int8)~(v74 >> 3)) != 0 )
                {
                  v75 = MiCapturePageFileInfoInline((unsigned __int64 *)(v73 + 16), 1, 0);
                  v74 = *(_BYTE *)(v73 + 34);
                }
                *(_BYTE *)(v73 + 34) = v74 | 0x10;
                if ( v75 )
                  v72 = *(_QWORD *)(qword_140C4E688 + 8 * ((*(_QWORD *)(v73 + 40) >> 39) & 0x3FFLL));
              }
              _InterlockedAnd64((volatile signed __int64 *)(v73 + 24), 0x7FFFFFFFFFFFFFFFuLL);
              if ( v75 )
                MiReleasePageFileInfo(v72, v75, 1);
              v51 = 0xFFFFF6FB7DBED000uLL;
              goto LABEL_59;
            }
            if ( (HIDWORD(KeGetCurrentThread()->ApcState.Process[2].Header.WaitListHead.Flink) & 0x1000) != 0
              && (v63 & 1) != 0 )
            {
              v63 |= 0x8000000000000000uLL;
            }
          }
          *(_QWORD *)v31 = v63;
          goto LABEL_92;
        }
      }
LABEL_59:
      v31 += 8LL;
    }
    while ( v31 <= v32 );
    v13 = (__int64)v122;
    v11 = v119;
LABEL_61:
    if ( v115 )
    {
      _InterlockedAnd((volatile signed __int32 *)(v124 + 48), 0xFFFFFFFC);
      if ( KiIrqlFlags )
      {
        if ( (KiIrqlFlags & 1) != 0 && (unsigned __int8)(KeGetCurrentIrql() - 2) <= 0xDu )
        {
          v102 = KeGetCurrentPrcb();
          v103 = v102->SchedulerAssist;
          v104 = (v103[5] & 0xFFFF0007) == 0;
          v103[5] &= 0xFFFF0007;
          if ( v104 )
            KiRemoveSystemWorkPriorityKick(v102);
        }
      }
      __writecr8(2uLL);
      v115 = 0;
    }
    v53 = v31;
    if ( v31 >= 0xFFFFF68000000000uLL )
    {
      do
      {
        if ( v53 > 0xFFFFF6FFFFFFFFFFuLL )
          break;
        v53 = (__int64)((v53 << 25) - v123) >> 16;
      }
      while ( v53 >= 0xFFFFF68000000000uLL );
      v13 = (__int64)v122;
      v11 = v119;
    }
    v22 = v123;
    v10 = ((v53 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
    v23 = v130;
    v24 = v114;
    if ( v10 <= v11 )
    {
      v9 = j;
      CurrentIrql = v117;
      continue;
    }
    break;
  }
  v15 = &dword_140C4F7C0;
LABEL_70:
  MiFlushTbList(&v132);
  if ( v115 )
    MiUnlockVadCore(v124, 2u);
  if ( j )
    MiUnlockPageTableInternal(v13, j);
  if ( (*(_BYTE *)(v13 + 184) & 7u) >= 6 )
  {
    if ( KiIrqlFlags )
    {
      if ( (KiIrqlFlags & 1) != 0 )
      {
        v105 = KeGetCurrentIrql();
        if ( v105 <= 0xFu && v117 <= 0xFu && v105 >= 2u )
        {
          v106 = KeGetCurrentPrcb();
          v107 = v106->SchedulerAssist;
          v108 = ~(unsigned __int16)(-1LL << (v117 + 1));
          v104 = (v108 & v107[5]) == 0;
          v107[5] &= v108;
          if ( v104 )
            goto LABEL_270;
        }
      }
    }
  }
  else
  {
    v54 = *(_DWORD *)(v13 + 184);
    if ( (v54 & 0x8000000) != 0 || (v54 & 0x4000000) != 0 || (v54 & 0x10000000) != 0 )
    {
      v55 = v117;
      MiPreUnlockWorkingSetShared(v13, v117);
      LOBYTE(v54) = *(_BYTE *)(v13 + 184);
    }
    else
    {
      v55 = v117;
    }
    if ( (v54 & 7) != 2 )
      v15 = (volatile signed __int32 *)(v13 + 192);
    MiCheckProcessShadow(v13, 1u);
    if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
    {
      ExpReleaseSpinLockSharedFromDpcLevelInstrumented(v15, retaddr);
    }
    else
    {
      _InterlockedAnd(v15, 0xBFFFFFFF);
      _InterlockedDecrement(v15);
    }
    v56 = KeGetCurrentPrcb();
    v57 = v56->SchedulerAssist;
    if ( v57 )
    {
      if ( v56->NestingLevel <= 1u )
      {
        v109 = v57[6] - 1;
        v57[6] = v109;
        if ( !v109 )
          KiRemoveSystemWorkPriorityKick(v56);
      }
    }
    if ( KiIrqlFlags )
    {
      if ( (KiIrqlFlags & 1) != 0 )
      {
        v110 = KeGetCurrentIrql();
        if ( v110 <= 0xFu && v55 <= 0xFu && v110 >= 2u )
        {
          v106 = KeGetCurrentPrcb();
          v111 = v106->SchedulerAssist;
          v112 = ~(unsigned __int16)(-1LL << (v55 + 1));
          v104 = (v112 & v111[5]) == 0;
          v111[5] &= v112;
          if ( v104 )
LABEL_270:
            KiRemoveSystemWorkPriorityKick(v106);
        }
      }
    }
  }
  result = v117;
  __writecr8(v117);
  return result;
}
