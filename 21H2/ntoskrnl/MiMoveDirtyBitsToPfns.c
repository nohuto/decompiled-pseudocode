/*
 * XREFs of MiMoveDirtyBitsToPfns @ 0x140317490
 * Callers:
 *     MiBeginHoldingDirtyFaults @ 0x14053E230 (MiBeginHoldingDirtyFaults.c)
 *     NtResetWriteWatch @ 0x1406ED050 (NtResetWriteWatch.c)
 *     MiProcessVaRangesInfoClass @ 0x14070FBB4 (MiProcessVaRangesInfoClass.c)
 * Callees:
 *     MiWalkPageTables @ 0x1402092C0 (MiWalkPageTables.c)
 *     MiFastLockLeafPageTable @ 0x14020E6D0 (MiFastLockLeafPageTable.c)
 *     MiUnlockWorkingSetShared @ 0x14020F790 (MiUnlockWorkingSetShared.c)
 *     MiCheckProcessShadow @ 0x14020F880 (MiCheckProcessShadow.c)
 *     MiLockWorkingSetShared @ 0x140219CB0 (MiLockWorkingSetShared.c)
 *     KeYieldProcessorEx @ 0x14024B280 (KeYieldProcessorEx.c)
 *     MiReleasePageFileInfo @ 0x140267CB0 (MiReleasePageFileInfo.c)
 *     MiGetWsleContents @ 0x140270D40 (MiGetWsleContents.c)
 *     MiUnlockPageTableInternal @ 0x1402855F0 (MiUnlockPageTableInternal.c)
 *     KeShouldYieldProcessor @ 0x140293FD0 (KeShouldYieldProcessor.c)
 *     MiInsertLargeTbFlushEntry @ 0x14029A7DC (MiInsertLargeTbFlushEntry.c)
 *     ExpWaitForSpinLockSharedAndAcquire @ 0x14029BF60 (ExpWaitForSpinLockSharedAndAcquire.c)
 *     MiCapturePageFileInfoInline @ 0x1402A2CF0 (MiCapturePageFileInfoInline.c)
 *     MiCompressTbFlushList @ 0x1402A32E0 (MiCompressTbFlushList.c)
 *     MiUnlockVadCore @ 0x1402B2DA0 (MiUnlockVadCore.c)
 *     MiWritePteShadow @ 0x1402B69BC (MiWritePteShadow.c)
 *     MiPteHasShadow @ 0x1402B6A1C (MiPteHasShadow.c)
 *     MiGetAnyMultiplexedVm @ 0x1402FD0FC (MiGetAnyMultiplexedVm.c)
 *     MiWorkingSetIsContended @ 0x14030B7D0 (MiWorkingSetIsContended.c)
 *     MiGetVadMandatoryPageSize @ 0x140317F80 (MiGetVadMandatoryPageSize.c)
 *     MiGetLeafVa @ 0x14032CE60 (MiGetLeafVa.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x14032DEC0 (MI_READ_PTE_LOCK_FREE.c)
 *     MiFlushTbList @ 0x14033B520 (MiFlushTbList.c)
 *     MiPteInShadowRange @ 0x140348AF0 (MiPteInShadowRange.c)
 *     MiPreUnlockWorkingSetShared @ 0x14036C210 (MiPreUnlockWorkingSetShared.c)
 *     MiRewritePteWithLockBit @ 0x1403B6C18 (MiRewritePteWithLockBit.c)
 *     __security_check_cookie @ 0x1403D0460 (__security_check_cookie.c)
 *     qsort @ 0x1403D2AC0 (qsort.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403F3684 (KiRemoveSystemWorkPriorityKick.c)
 *     memset @ 0x140414200 (memset.c)
 *     ExpAcquireSpinLockSharedAtDpcLevelInstrumented @ 0x1405B5C64 (ExpAcquireSpinLockSharedAtDpcLevelInstrumented.c)
 *     ExpReleaseSpinLockSharedFromDpcLevelInstrumented @ 0x1405B5DBC (ExpReleaseSpinLockSharedFromDpcLevelInstrumented.c)
 */

__int64 __fastcall MiMoveDirtyBitsToPfns(unsigned __int64 a1, unsigned __int64 a2, __int64 a3, char a4)
{
  _DWORD *v8; // r9
  unsigned __int64 v9; // rsi
  __int64 v10; // r8
  unsigned __int64 v11; // rbx
  unsigned __int64 v12; // r15
  _KPROCESS *Process; // rcx
  __int64 v14; // r12
  __int64 *i; // rcx
  volatile signed __int32 *v16; // r13
  unsigned __int8 v17; // al
  LONG *v18; // rdi
  unsigned __int8 CurrentIrql; // r14
  struct _KPRCB *CurrentPrcb; // rsi
  _DWORD *v21; // rcx
  signed __int32 v22; // ett
  __int64 v23; // rdi
  __int64 v24; // r13
  int v25; // eax
  unsigned __int64 v26; // r14
  unsigned __int64 v27; // rcx
  char *AnyMultiplexedVm; // rdi
  int v29; // eax
  __int64 v30; // r8
  unsigned int v31; // ecx
  unsigned __int64 v32; // rdx
  unsigned __int64 v33; // r14
  unsigned __int64 v34; // rdi
  unsigned __int64 v35; // r13
  unsigned __int64 v36; // rbx
  unsigned __int64 VadMandatoryPageSize; // r9
  __int64 v38; // r10
  __int64 v39; // r11
  unsigned __int64 v40; // rsi
  unsigned __int64 v41; // rsi
  unsigned __int64 v42; // rsi
  unsigned __int8 v43; // cl
  signed __int32 v44; // eax
  __int64 v45; // r15
  signed __int32 v46; // ett
  unsigned __int64 v47; // r15
  unsigned __int64 v48; // rbx
  _BYTE *v49; // r15
  char v50; // al
  int v51; // r15d
  unsigned __int64 v52; // r9
  __int64 v53; // rcx
  unsigned __int64 v54; // rbx
  int v55; // ecx
  unsigned __int8 v56; // bl
  struct _KPRCB *v57; // rcx
  _DWORD *v58; // rdx
  __int64 result; // rax
  __int64 v60; // rdx
  __int64 v61; // rcx
  unsigned int v62; // ebx
  unsigned __int64 v63; // rsi
  __int64 v64; // rbx
  unsigned __int64 v65; // rdx
  __int64 v66; // rbx
  unsigned int v67; // r10d
  unsigned __int64 v68; // rax
  unsigned __int64 v69; // r8
  unsigned __int64 v70; // rbx
  __int64 v71; // r8
  __int64 v72; // r9
  __int64 v73; // rsi
  __int64 v74; // rbx
  unsigned __int64 v75; // rax
  __int64 v76; // rax
  unsigned __int64 v77; // rax
  unsigned __int64 v78; // rcx
  __int64 v79; // rdx
  __int64 v80; // r8
  _DWORD *v81; // r9
  _DWORD *v82; // rcx
  _DWORD *SchedulerAssist; // r9
  int v84; // eax
  int v85; // eax
  unsigned __int64 v86; // rsi
  __int64 v87; // rcx
  unsigned __int64 v88; // r13
  __int64 v89; // rax
  __int64 v90; // rax
  unsigned __int64 LeafVa; // rax
  __int64 v92; // rcx
  struct _LIST_ENTRY *Flink; // r9
  __int64 v94; // rax
  struct _LIST_ENTRY *v95; // r8
  __int64 v96; // rax
  __int64 v97; // r8
  __int64 v98; // r8
  __int64 v99; // rax
  struct _KPRCB *v100; // rcx
  _DWORD *v101; // rdx
  bool v102; // zf
  unsigned __int8 v103; // al
  struct _KPRCB *v104; // r9
  _DWORD *v105; // r8
  int v106; // eax
  int v107; // eax
  unsigned __int8 v108; // al
  _DWORD *v109; // r8
  int v110; // eax
  int v112; // [rsp+20h] [rbp-E0h]
  int v113; // [rsp+24h] [rbp-DCh]
  unsigned __int64 v114; // [rsp+28h] [rbp-D8h]
  unsigned __int8 v115; // [rsp+30h] [rbp-D0h]
  unsigned __int64 v116; // [rsp+38h] [rbp-C8h] BYREF
  unsigned __int64 v117; // [rsp+40h] [rbp-C0h]
  int v118; // [rsp+48h] [rbp-B8h] BYREF
  int v119; // [rsp+4Ch] [rbp-B4h]
  unsigned __int64 *v120; // [rsp+50h] [rbp-B0h]
  __int64 v121; // [rsp+58h] [rbp-A8h]
  __int64 v122; // [rsp+60h] [rbp-A0h]
  int v123; // [rsp+68h] [rbp-98h] BYREF
  unsigned __int64 *v124; // [rsp+70h] [rbp-90h]
  __int64 v125; // [rsp+78h] [rbp-88h]
  __int128 v126; // [rsp+80h] [rbp-80h] BYREF
  unsigned __int64 v127; // [rsp+90h] [rbp-70h]
  __int64 v128; // [rsp+98h] [rbp-68h]
  _QWORD v129[22]; // [rsp+A0h] [rbp-60h] BYREF
  int v130; // [rsp+150h] [rbp+50h] BYREF
  __int16 v131; // [rsp+154h] [rbp+54h]
  __int16 v132; // [rsp+156h] [rbp+56h]
  __int64 v133; // [rsp+158h] [rbp+58h]
  __int64 v134; // [rsp+160h] [rbp+60h]
  _QWORD Base[21]; // [rsp+168h] [rbp+68h] BYREF
  void *retaddr; // [rsp+258h] [rbp+158h]

  v122 = a3;
  v132 = 0;
  v125 = 0LL;
  memset(&Base[1], 0, 0x98uLL);
  v114 = 0LL;
  v9 = 0LL;
  v113 = 0;
  v10 = 0xFFFFF68000000000uLL;
  v11 = ((a1 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  v12 = ((a2 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  v117 = v12;
  Process = KeGetCurrentThread()->ApcState.Process;
  v14 = (__int64)&Process[1].ActiveProcessorsPadding[6];
  v127 = Process[1].ActiveProcessorsPadding[8];
  v120 = &Process[1].ActiveProcessorsPadding[6];
  v119 = a4 & 1;
  if ( (a4 & 1) != 0 )
  {
    for ( i = *(__int64 **)(a3 + 56); i; i = (__int64 *)*i )
    {
      if ( (i[8] & 4) != 0 )
        break;
    }
    v124 = (unsigned __int64 *)(i + 1);
  }
  else
  {
    v124 = 0LL;
  }
  v131 = 0;
  v134 = 0LL;
  Base[0] = 0LL;
  v16 = &dword_140C4F780;
  v133 = 20LL;
  v130 = 1;
  v17 = *(_BYTE *)(v14 + 184) & 7;
  if ( v17 >= 6u )
  {
    CurrentIrql = KeGetCurrentIrql();
    v115 = CurrentIrql;
    __writecr8(2uLL);
    if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu )
    {
      SchedulerAssist = KeGetCurrentPrcb()->SchedulerAssist;
      SchedulerAssist[5] |= (-1 << (CurrentIrql + 1)) & 4;
    }
  }
  else
  {
    if ( v17 == 2 )
      v18 = &dword_140C4F780;
    else
      v18 = (LONG *)(v14 + 192);
    CurrentIrql = KeGetCurrentIrql();
    __writecr8(2uLL);
    if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu )
    {
      v8 = KeGetCurrentPrcb()->SchedulerAssist;
      v8[5] |= (-1 << (CurrentIrql + 1)) & 4;
      v10 = 0xFFFFF68000000000uLL;
    }
    if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
    {
      ExpAcquireSpinLockSharedAtDpcLevelInstrumented(v18, CurrentIrql, 0xFFFFF68000000000uLL, v8);
    }
    else
    {
      CurrentPrcb = KeGetCurrentPrcb();
      v21 = CurrentPrcb->SchedulerAssist;
      if ( v21 )
      {
        if ( CurrentPrcb->NestingLevel <= 1u )
        {
          v84 = v21[6];
          v21[6] = v84 + 1;
          if ( v84 == -1 )
          {
            KiRemoveSystemWorkPriorityKick(CurrentPrcb);
            v10 = 0xFFFFF68000000000uLL;
          }
        }
      }
      _m_prefetchw(v18);
      v22 = *v18 & 0x7FFFFFFF;
      if ( v22 != _InterlockedCompareExchange(v18, v22 + 1, v22) )
      {
        v82 = CurrentPrcb->SchedulerAssist;
        if ( v82 )
        {
          if ( CurrentPrcb->NestingLevel <= 1u )
          {
            v85 = v82[6] - 1;
            v82[6] = v85;
            if ( !v85 )
              KiRemoveSystemWorkPriorityKick(CurrentPrcb);
          }
        }
        ExpWaitForSpinLockSharedAndAcquire((unsigned __int64)v18, CurrentIrql, v10, v8);
      }
      v9 = 0LL;
    }
    if ( v18[1] )
      _InterlockedExchange(v18 + 1, 0);
    v115 = CurrentIrql;
  }
  if ( v11 > v12 )
    goto LABEL_70;
  v23 = 0LL;
  v121 = 0LL;
  v24 = (__int64)(v12 << 25) >> 16;
  v25 = a4 & 2;
  v128 = v24;
  v112 = v25;
  while ( 2 )
  {
    if ( v9 )
    {
      MiFlushTbList(&v130);
      MiUnlockPageTableInternal(v14, v9);
      v114 = 0LL;
      if ( MiWorkingSetIsContended(v14) || KeShouldYieldProcessor() )
      {
        MiUnlockWorkingSetShared(v14, CurrentIrql);
        MiLockWorkingSetShared(v14, v79, v80, v81);
      }
      v25 = v112;
    }
    if ( v25 )
      _InterlockedIncrement64((volatile signed __int64 *)(v127 + 616));
    v126 = 0LL;
    memset((char *)v129 + 2, 0, 0xAEuLL);
    LOWORD(v129[0]) = 2273;
    v26 = (__int64)((v11 << 25) - v23) >> 16;
    v27 = v26;
    if ( v26 >= 0xFFFFF68000000000uLL )
    {
      do
      {
        if ( v27 > 0xFFFFF6FFFFFFFFFFuLL )
          break;
        v27 = (__int64)((v27 << 25) - v23) >> 16;
      }
      while ( v27 >= 0xFFFFF68000000000uLL );
      v14 = (__int64)v120;
    }
    if ( v27 < 0xFFFF800000000000uLL || v27 >= qword_140C4FB38 && v27 <= qword_140C4E368 )
      AnyMultiplexedVm = (char *)&KeGetCurrentThread()->ApcState.Process[1].ActiveProcessorsPadding[6];
    else
      AnyMultiplexedVm = MiGetAnyMultiplexedVm(1);
    v29 = MiFastLockLeafPageTable((__int64)AnyMultiplexedVm, v26, 0);
    if ( v29 )
    {
      v31 = v29 - 1;
      LODWORD(v126) = v29 - 1;
      v32 = 0xFFFFF68000000000uLL;
      v33 = ((v26 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
      *((_QWORD *)&v126 + 1) = v33;
    }
    else
    {
      LOWORD(v129[0]) |= 4u;
      v129[21] = &v126;
      v129[2] = 0LL;
      v129[3] = AnyMultiplexedVm;
      BYTE2(v129[0]) = BYTE2(v129[0]) & 0xE3 | 4;
      v129[20] = MiGetNextPageTableTail;
      BYTE6(v129[0]) = v115;
      v129[4] = v26;
      v129[5] = v24;
      MiWalkPageTables((__int64)v129);
      v31 = v126;
      v33 = *((_QWORD *)&v126 + 1);
      v32 = 0xFFFFF68000000000uLL;
    }
    v34 = v33;
    if ( v33 )
    {
      v30 = 0x7FFFFFFFF8LL;
      v114 = ((v33 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
      if ( v31 )
      {
        v34 = ((v33 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
        v86 = ((v12 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
        if ( v31 > 1 )
        {
          v87 = v31 - 1;
          do
          {
            v34 = ((v34 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
            v86 = ((v86 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
            --v87;
          }
          while ( v87 );
        }
        v88 = v34 + 8;
        v114 = ((v34 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
        if ( ((v34 + 8) & 0xFFF) != 0 )
        {
          do
          {
            if ( v88 > v86 )
              break;
            v89 = MI_READ_PTE_LOCK_FREE(v88);
            v125 = v89;
            if ( (v89 & 1) == 0 )
              break;
            if ( (v89 & 0x80u) == 0LL )
              break;
            v88 += 8LL;
          }
          while ( (v88 & 0xFFF) != 0 );
          v32 = 0xFFFFF68000000000uLL;
        }
        v35 = v88 - 8;
      }
      else
      {
        v35 = (v33 & 0xFFFFFFFFFFFFF000uLL) + 4088;
        if ( v35 > v12 )
          v35 = v12;
      }
    }
    else
    {
      v35 = v12;
    }
    if ( !v119 )
      goto LABEL_53;
    v113 = 1;
    if ( v11 >= 0xFFFFF68000000000uLL )
    {
      do
      {
        if ( v11 > 0xFFFFF6FFFFFFFFFFuLL )
          break;
        v11 = (__int64)((v11 << 25) - v121) >> 16;
      }
      while ( v11 >= 0xFFFFF68000000000uLL );
      v14 = (__int64)v120;
    }
    v36 = (v11 >> 12) - (*(unsigned int *)(v122 + 24) | ((unsigned __int64)*(unsigned __int8 *)(v122 + 32) << 32));
    VadMandatoryPageSize = MiGetVadMandatoryPageSize(v122);
    if ( VadMandatoryPageSize != 1 )
    {
      v32 = v36 % VadMandatoryPageSize;
      v36 /= VadMandatoryPageSize;
    }
    v40 = v35 + 8;
    if ( v35 + 8 >= 0xFFFFF68000000000uLL )
    {
      do
      {
        if ( v40 > 0xFFFFF6FFFFFFFFFFuLL )
          break;
        v40 = (__int64)((v40 << 25) - v38) >> 16;
      }
      while ( v40 >= 0xFFFFF68000000000uLL );
      v14 = (__int64)v120;
    }
    if ( v40 > (((*(unsigned int *)(v39 + 28) | ((unsigned __int64)*(unsigned __int8 *)(v39 + 33) << 32)) << 12) | 0xFFF) )
    {
      v41 = *v124;
    }
    else
    {
      v41 = (v40 >> 12) - v30;
      if ( VadMandatoryPageSize != 1 )
      {
        v32 = v41 % VadMandatoryPageSize;
        v41 /= VadMandatoryPageSize;
      }
    }
    v42 = v41 - v36;
    v118 = 0;
    v43 = KeGetCurrentIrql();
    __writecr8(2uLL);
    if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && v43 <= 0xFu )
    {
      VadMandatoryPageSize = (unsigned __int64)KeGetCurrentPrcb()->SchedulerAssist;
      v32 = (-1LL << (v43 + 1)) & 4;
      v30 = (unsigned int)v32 | *(_DWORD *)(VadMandatoryPageSize + 20);
      *(_DWORD *)(VadMandatoryPageSize + 20) = v30;
    }
    v44 = *(_DWORD *)(v39 + 48);
    v45 = v39;
    do
    {
      while ( (v44 & 1) != 0 )
      {
        if ( (v44 & 2) != 0 )
        {
          v118 = 0;
          do
          {
            KeYieldProcessorEx(&v118, v32, v30, VadMandatoryPageSize);
            v44 = *(_DWORD *)(v45 + 48);
          }
          while ( (v44 & 1) != 0 );
        }
        else
        {
          v44 = _InterlockedCompareExchange((volatile signed __int32 *)(v45 + 48), v44 | 2, v44);
        }
      }
      v46 = v44;
      v44 = _InterlockedCompareExchange((volatile signed __int32 *)(v45 + 48), v44 & 0xFFFFFFFC | 1, v44);
    }
    while ( v46 != v44 );
    v12 = v117;
    if ( !v42 )
      goto LABEL_53;
    v32 = (unsigned __int64)v124;
    v47 = v36;
    v48 = v36 & 7;
    v49 = (_BYTE *)(v124[1] + (v47 >> 3));
    if ( v48 + v42 > 8 )
    {
      if ( (_DWORD)v48 )
      {
        *v49++ &= byte_14001E8E0[v48];
        v42 -= (unsigned int)(8 - v48);
      }
      if ( v42 > 8 )
      {
        memset(v49, 0, v42 >> 3);
        v49 += v42 >> 3;
        v42 &= 7u;
      }
      if ( !v42 )
        goto LABEL_52;
      v50 = byte_14001B570[v42];
    }
    else
    {
      v50 = ~(byte_14001E8E0[v42] << v48);
    }
    *v49 &= v50;
LABEL_52:
    v12 = v117;
LABEL_53:
    if ( !v33 )
      break;
    if ( v34 > v35 )
      goto LABEL_61;
    v51 = v119;
    v52 = 0xFFFFF6FB7DBED000uLL;
    do
    {
      v53 = *(_QWORD *)v34;
      if ( v34 >= v52 && v34 <= 0xFFFFF6FB7DBED7F8uLL && (MiFlags & 0xC00000) != 0 )
      {
        v32 = (unsigned __int64)KeGetCurrentThread()->ApcState.Process;
        if ( *(_BYTE *)(v32 + 912) != 1 && (v53 & 1) != 0 && ((v53 & 0x20) == 0 || (v53 & 0x42) == 0) )
        {
          v32 = (unsigned __int64)KeGetCurrentThread()->ApcState.Process;
          v30 = *(_QWORD *)(v32 + 1928);
          if ( v30 )
          {
            v90 = *(_QWORD *)(v30 + 8 * ((v34 >> 3) & 0x1FF));
            v30 = v53 | 0x20;
            v32 = (unsigned __int8)v90;
            LOBYTE(v32) = v90 & 0x20;
            if ( (v90 & 0x20) == 0 )
              v30 = *(_QWORD *)v34;
            v53 = v30;
            if ( (v90 & 0x42) != 0 )
              v53 = v30 | 0x42;
          }
        }
      }
      v125 = v53;
      if ( (v53 & 1) != 0 && (v53 & 0x42) != 0 )
      {
        if ( v51
          || (!v112 || v53 >= 0)
          && (LeafVa = MiGetLeafVa(v34, v32, v30, v52), (MiGetWsleContents(v92, LeafVa) & 0xF) != 9) )
        {
          v60 = *(_QWORD *)v34;
          v61 = *(_QWORD *)v34;
          if ( v34 >= v52
            && v34 <= 0xFFFFF6FB7DBED7F8uLL
            && (MiFlags & 0xC00000) != 0
            && KeGetCurrentThread()->ApcState.Process->AddressPolicy != 1
            && (v61 & 1) != 0
            && ((v61 & 0x20) == 0 || (v61 & 0x42) == 0) )
          {
            Flink = KeGetCurrentThread()->ApcState.Process[1].ProcessListEntry.Flink;
            if ( Flink )
            {
              v61 |= 0x20uLL;
              v94 = *((_QWORD *)&Flink->Flink + ((v34 >> 3) & 0x1FF));
              if ( (v94 & 0x20) == 0 )
                v61 = *(_QWORD *)v34;
              if ( (v94 & 0x42) != 0 )
                v61 |= 0x42uLL;
            }
            v52 = 0xFFFFF6FB7DBED000uLL;
          }
          v116 = v61 & 0xFFFFFFFFFFFFFFBDuLL;
          v62 = 0;
          v63 = (__int64)((v34 << 25) - v121) >> 16;
          if ( v63 >= 0xFFFFF68000000000uLL )
          {
            do
            {
              if ( v63 > 0xFFFFF6FFFFFFFFFFuLL )
                break;
              ++v62;
              v63 = (__int64)((v63 << 25) - v121) >> 16;
            }
            while ( v63 >= 0xFFFFF68000000000uLL );
            v52 = 0xFFFFF6FB7DBED000uLL;
            if ( v62 )
            {
              MiRewritePteWithLockBit(&KeGetCurrentThread()->ApcState.Process[1].ActiveProcessorsPadding[6], v34, v116);
              MiInsertLargeTbFlushEntry((__int64)&v130, v62, v34);
              goto LABEL_99;
            }
          }
          if ( v34 >= v52
            && v34 <= 0xFFFFF6FB7DBED7F8uLL
            && (MiFlags & 0xC00000) != 0
            && KeGetCurrentThread()->ApcState.Process->AddressPolicy != 1
            && (v60 & 1) != 0
            && ((v60 & 0x20) == 0 || (v60 & 0x42) == 0) )
          {
            v95 = KeGetCurrentThread()->ApcState.Process[1].ProcessListEntry.Flink;
            if ( v95 )
            {
              v96 = *((_QWORD *)&v95->Flink + ((v34 >> 3) & 0x1FF));
              v97 = v60 | 0x20;
              if ( (v96 & 0x20) == 0 )
                v97 = v60;
              v60 = v97;
              if ( (v96 & 0x42) != 0 )
                v60 = v97 | 0x42;
            }
          }
          v64 = v116 ^ (v60 ^ v116) & 0xF00000000000000LL ^ (v60 ^ v116 ^ (v60 ^ v116) & 0xF00000000000000LL) & 0x7000000000000000LL;
          if ( (unsigned int)MiPteInShadowRange(v34, v60) )
          {
            if ( (unsigned int)MiPteHasShadow() )
            {
              if ( !HIBYTE(word_140C4E008) && (v64 & 1) != 0 )
                v64 |= 0x8000000000000000uLL;
              *(_QWORD *)v34 = v64;
              MiWritePteShadow(v34, v64, v98);
LABEL_92:
              v66 = 1LL;
              v67 = HIDWORD(v133);
              if ( !HIDWORD(v133) )
                goto LABEL_108;
              if ( (v131 & 4) == 0 )
              {
                v68 = Base[HIDWORD(v133) - 1];
                if ( (v68 & 0xC00) == 0 )
                {
                  v69 = Base[HIDWORD(v133) - 1] & 0x3FFLL;
                  v65 = (v68 & 0xFFFFFFFFFFFFF000uLL) + ((v69 + 1) << 12);
                  if ( v65 == v63 && v69 + 1 >= v69 && v69 + 1 <= 0x3FF )
                  {
                    ++v134;
                    Base[HIDWORD(v133) - 1] = ((unsigned __int16)v68 ^ (unsigned __int16)(v68 + 1)) & 0x3FF ^ v68;
                    goto LABEL_99;
                  }
                }
              }
              if ( (v131 & 4) != 0
                || (v76 = Base[HIDWORD(v133) - 1], (v76 & 0xC00) != 0)
                || (v65 = v76 & 0xFFFFFFFFFFFFF000uLL, (v76 & 0xFFFFFFFFFFFFF000uLL) != v63 + 4096)
                || (v78 = Base[HIDWORD(v133) - 1] & 0x3FFLL, v65 = v78 + 1, v78 + 1 > 0x3FF)
                || v65 <= v78 )
              {
LABEL_108:
                if ( HIDWORD(v133) >= (unsigned int)v133 )
                {
                  HIBYTE(v131) = 1;
                }
                else
                {
                  while ( 1 )
                  {
                    v65 = (unsigned __int64)(v66 - 1) > 0x3FF ? 1024LL : v66;
                    v77 = v63 & 0xFFFFFFFFFFFFF000uLL | ((_WORD)v65 - 1) & 0x3FF;
                    v66 -= v65;
                    v63 += v65 << 12;
                    Base[v67] = v77;
                    v134 += v65;
                    v67 = HIDWORD(v133) + 1;
                    HIDWORD(v133) = v67;
                    if ( v67 == (_DWORD)v133 && (v131 & 4) == 0 )
                    {
                      qsort(Base, v67, 8uLL, (int (__cdecl *)(const void *, const void *))MiTbFlushSort);
                      MiCompressTbFlushList((__int64)&v130);
                      v67 = HIDWORD(v133);
                      if ( HIDWORD(v133) == (_DWORD)v133 )
                        break;
                    }
                    if ( !v66 )
                      goto LABEL_99;
                  }
                  if ( v66 )
                  {
                    HIBYTE(v131) = 1;
                    v134 = HIDWORD(v133);
                  }
                }
                goto LABEL_99;
              }
              ++v134;
              Base[HIDWORD(v133) - 1] = ((unsigned __int16)(v76 - 4096) ^ (unsigned __int16)(v76 - 4096 + 1)) & 0x3FF ^ (unsigned __int64)(v76 - 4096);
LABEL_99:
              v70 = v116;
              if ( (unsigned int)MiPteInShadowRange(&v116, v65)
                && (MiFlags & 0xC00000) != 0
                && KeGetCurrentThread()->ApcState.Process->AddressPolicy != 1
                && (v70 & 1) != 0
                && ((v70 & 0x20) == 0 || (v70 & 0x42) == 0) )
              {
                v32 = (unsigned __int64)KeGetCurrentThread()->ApcState.Process[1].ProcessListEntry.Flink;
                if ( v32 )
                {
                  v99 = *(_QWORD *)(v32 + 8 * (((unsigned __int64)&v116 >> 3) & 0x1FF));
                  if ( (v99 & 0x20) != 0 )
                    v70 |= 0x20uLL;
                  if ( (v99 & 0x42) != 0 )
                    v70 |= 0x42uLL;
                }
                else
                {
                  v70 = v116;
                }
              }
              v73 = 0LL;
              v74 = 48 * ((v70 >> 12) & 0xFFFFFFFFFLL) - 0x58000000000LL;
              v123 = 0;
              while ( _interlockedbittestandset64((volatile signed __int32 *)(v74 + 24), 0x3FuLL) )
              {
                do
                  KeYieldProcessorEx(&v123, v32, v71, v72);
                while ( *(__int64 *)(v74 + 24) < 0 );
              }
              v30 = *(unsigned __int8 *)(v74 + 34);
              v75 = 0LL;
              if ( (v30 & 0x10) == 0 )
              {
                v32 = (unsigned __int8)v30;
                LOBYTE(v32) = !_bittest64((const signed __int64 *)(v74 + 16), 0xAu) & ~((unsigned __int8)v30 >> 3);
                if ( (v32 & 1) != 0 )
                {
                  v75 = MiCapturePageFileInfoInline((unsigned __int64 *)(v74 + 16), 1, 0);
                  v30 = *(unsigned __int8 *)(v74 + 34);
                }
                LOBYTE(v30) = v30 | 0x10;
                *(_BYTE *)(v74 + 34) = v30;
                if ( v75 )
                {
                  v32 = (*(_QWORD *)(v74 + 40) >> 39) & 0x3FFLL;
                  v73 = *(_QWORD *)(qword_140C4E648 + 8 * v32);
                }
              }
              _InterlockedAnd64((volatile signed __int64 *)(v74 + 24), 0x7FFFFFFFFFFFFFFFuLL);
              if ( v75 )
                MiReleasePageFileInfo(v73, v75, 1);
              v52 = 0xFFFFF6FB7DBED000uLL;
              goto LABEL_59;
            }
            if ( (HIDWORD(KeGetCurrentThread()->ApcState.Process[2].Header.WaitListHead.Flink) & 0x1000) != 0
              && (v64 & 1) != 0 )
            {
              v64 |= 0x8000000000000000uLL;
            }
          }
          *(_QWORD *)v34 = v64;
          goto LABEL_92;
        }
      }
LABEL_59:
      v34 += 8LL;
    }
    while ( v34 <= v35 );
    v14 = (__int64)v120;
    v12 = v117;
LABEL_61:
    if ( v113 )
    {
      _InterlockedAnd((volatile signed __int32 *)(v122 + 48), 0xFFFFFFFC);
      if ( KiIrqlFlags )
      {
        if ( (KiIrqlFlags & 1) != 0 && (unsigned __int8)(KeGetCurrentIrql() - 2) <= 0xDu )
        {
          v100 = KeGetCurrentPrcb();
          v101 = v100->SchedulerAssist;
          v102 = (v101[5] & 0xFFFF0007) == 0;
          v101[5] &= 0xFFFF0007;
          if ( v102 )
            KiRemoveSystemWorkPriorityKick(v100);
        }
      }
      __writecr8(2uLL);
      v113 = 0;
    }
    v54 = v34;
    if ( v34 >= 0xFFFFF68000000000uLL )
    {
      do
      {
        if ( v54 > 0xFFFFF6FFFFFFFFFFuLL )
          break;
        v54 = (__int64)((v54 << 25) - v121) >> 16;
      }
      while ( v54 >= 0xFFFFF68000000000uLL );
      v14 = (__int64)v120;
      v12 = v117;
    }
    v23 = v121;
    v11 = ((v54 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
    v24 = v128;
    v25 = v112;
    if ( v11 <= v12 )
    {
      v9 = v114;
      CurrentIrql = v115;
      continue;
    }
    break;
  }
  v16 = &dword_140C4F780;
LABEL_70:
  MiFlushTbList(&v130);
  if ( v113 )
    MiUnlockVadCore(v122, 2u);
  if ( v114 )
    MiUnlockPageTableInternal(v14, v114);
  if ( (*(_BYTE *)(v14 + 184) & 7u) >= 6 )
  {
    if ( KiIrqlFlags )
    {
      if ( (KiIrqlFlags & 1) != 0 )
      {
        v103 = KeGetCurrentIrql();
        if ( v103 <= 0xFu && v115 <= 0xFu && v103 >= 2u )
        {
          v104 = KeGetCurrentPrcb();
          v105 = v104->SchedulerAssist;
          v106 = ~(unsigned __int16)(-1LL << (v115 + 1));
          v102 = (v106 & v105[5]) == 0;
          v105[5] &= v106;
          if ( v102 )
            goto LABEL_271;
        }
      }
    }
  }
  else
  {
    v55 = *(_DWORD *)(v14 + 184);
    if ( (v55 & 0x8000000) != 0 || (v55 & 0x4000000) != 0 || (v55 & 0x10000000) != 0 )
    {
      v56 = v115;
      MiPreUnlockWorkingSetShared(v14, v115);
      LOBYTE(v55) = *(_BYTE *)(v14 + 184);
    }
    else
    {
      v56 = v115;
    }
    if ( (v55 & 7) != 2 )
      v16 = (volatile signed __int32 *)(v14 + 192);
    MiCheckProcessShadow(v14, 1u);
    if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
    {
      ExpReleaseSpinLockSharedFromDpcLevelInstrumented(v16, retaddr);
    }
    else
    {
      _InterlockedAnd(v16, 0xBFFFFFFF);
      _InterlockedDecrement(v16);
    }
    v57 = KeGetCurrentPrcb();
    v58 = v57->SchedulerAssist;
    if ( v58 )
    {
      if ( v57->NestingLevel <= 1u )
      {
        v107 = v58[6] - 1;
        v58[6] = v107;
        if ( !v107 )
          KiRemoveSystemWorkPriorityKick(v57);
      }
    }
    if ( KiIrqlFlags )
    {
      if ( (KiIrqlFlags & 1) != 0 )
      {
        v108 = KeGetCurrentIrql();
        if ( v108 <= 0xFu && v56 <= 0xFu && v108 >= 2u )
        {
          v104 = KeGetCurrentPrcb();
          v109 = v104->SchedulerAssist;
          v110 = ~(unsigned __int16)(-1LL << (v56 + 1));
          v102 = (v110 & v109[5]) == 0;
          v109[5] &= v110;
          if ( v102 )
LABEL_271:
            KiRemoveSystemWorkPriorityKick(v104);
        }
      }
    }
  }
  result = v115;
  __writecr8(v115);
  return result;
}
