/*
 * XREFs of MiMoveDirtyBitsToPfns @ 0x140221080
 * Callers:
 *     MiBeginHoldingDirtyFaults @ 0x140538D60 (MiBeginHoldingDirtyFaults.c)
 *     NtResetWriteWatch @ 0x1405F8BD0 (NtResetWriteWatch.c)
 *     MiProcessVaRangesInfoClass @ 0x140700488 (MiProcessVaRangesInfoClass.c)
 * Callees:
 *     MiWalkPageTables @ 0x140204BE0 (MiWalkPageTables.c)
 *     MiGetVadMandatoryPageSize @ 0x140221B70 (MiGetVadMandatoryPageSize.c)
 *     MiGetLeafVa @ 0x1402374D0 (MiGetLeafVa.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x140238530 (MI_READ_PTE_LOCK_FREE.c)
 *     MiPteInShadowRange @ 0x1402386B0 (MiPteInShadowRange.c)
 *     MiFlushTbList @ 0x14023A3C0 (MiFlushTbList.c)
 *     MiGetAnyMultiplexedVm @ 0x140250128 (MiGetAnyMultiplexedVm.c)
 *     MiGetWsleContents @ 0x140256CF0 (MiGetWsleContents.c)
 *     MiWorkingSetIsContended @ 0x1402589C0 (MiWorkingSetIsContended.c)
 *     MiUnlockPageTableInternal @ 0x140278B10 (MiUnlockPageTableInternal.c)
 *     KeYieldProcessorEx @ 0x140280C50 (KeYieldProcessorEx.c)
 *     MiFastLockLeafPageTable @ 0x1402A06B0 (MiFastLockLeafPageTable.c)
 *     MiUnlockWorkingSetShared @ 0x1402A1770 (MiUnlockWorkingSetShared.c)
 *     MiCheckProcessShadow @ 0x1402A1860 (MiCheckProcessShadow.c)
 *     MiLockWorkingSetShared @ 0x1402AC150 (MiLockWorkingSetShared.c)
 *     MiReleasePageFileInfo @ 0x1402D4690 (MiReleasePageFileInfo.c)
 *     MiPreUnlockWorkingSetShared @ 0x140311648 (MiPreUnlockWorkingSetShared.c)
 *     KeShouldYieldProcessor @ 0x140327BB0 (KeShouldYieldProcessor.c)
 *     ExpWaitForSpinLockSharedAndAcquire @ 0x140329910 (ExpWaitForSpinLockSharedAndAcquire.c)
 *     MiWritePteShadow @ 0x14032ECC0 (MiWritePteShadow.c)
 *     MiPteHasShadow @ 0x14032ED20 (MiPteHasShadow.c)
 *     MiCapturePageFileInfoInline @ 0x1403334B0 (MiCapturePageFileInfoInline.c)
 *     MiCompressTbFlushList @ 0x140333580 (MiCompressTbFlushList.c)
 *     MiInsertLargeTbFlushEntry @ 0x1403385B4 (MiInsertLargeTbFlushEntry.c)
 *     MiUnlockVadCore @ 0x140340CF0 (MiUnlockVadCore.c)
 *     MiRewritePteWithLockBit @ 0x1403B2B38 (MiRewritePteWithLockBit.c)
 *     __security_check_cookie @ 0x1403CCE60 (__security_check_cookie.c)
 *     qsort @ 0x1403CF4C0 (qsort.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403EDAA4 (KiRemoveSystemWorkPriorityKick.c)
 *     memset @ 0x14040A280 (memset.c)
 *     ExpAcquireSpinLockSharedAtDpcLevelInstrumented @ 0x1405B06F4 (ExpAcquireSpinLockSharedAtDpcLevelInstrumented.c)
 *     ExpReleaseSpinLockSharedFromDpcLevelInstrumented @ 0x1405B0844 (ExpReleaseSpinLockSharedFromDpcLevelInstrumented.c)
 */

__int64 __fastcall MiMoveDirtyBitsToPfns(unsigned __int64 a1, unsigned __int64 a2, __int64 a3, char a4)
{
  _DWORD *v8; // r9
  __int64 v9; // rsi
  unsigned __int64 v10; // rbx
  unsigned __int64 v11; // r15
  _KPROCESS *Process; // rcx
  unsigned __int64 *v13; // r12
  __int64 *i; // rcx
  volatile signed __int32 *v15; // r13
  unsigned __int8 v16; // al
  LONG *v17; // rdi
  unsigned __int8 CurrentIrql; // r14
  unsigned __int64 v19; // rdx
  struct _KPRCB *CurrentPrcb; // rsi
  _DWORD *v21; // rcx
  signed __int32 v22; // ett
  __int64 v23; // rdi
  __int64 v24; // r13
  int v25; // eax
  unsigned __int64 v26; // r14
  unsigned __int64 v27; // rcx
  unsigned __int64 *AnyMultiplexedVm; // rdi
  int v29; // eax
  __int64 v30; // r8
  unsigned int v31; // ecx
  unsigned __int64 v32; // r14
  unsigned __int64 v33; // rdi
  unsigned __int64 v34; // r13
  unsigned __int64 v35; // rbx
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
  __int64 v54; // rdx
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
  __int64 v65; // rbx
  unsigned int v66; // r10d
  unsigned __int64 v67; // rax
  unsigned __int64 v68; // r8
  unsigned __int64 v69; // rbx
  __int64 v70; // rsi
  __int64 v71; // rbx
  __int64 v72; // rax
  __int64 v73; // rax
  __int64 v74; // rdx
  unsigned __int64 v75; // rax
  unsigned __int64 v76; // rcx
  _DWORD *v77; // rcx
  _DWORD *SchedulerAssist; // r9
  int v79; // eax
  int v80; // eax
  unsigned __int64 v81; // rsi
  __int64 v82; // rcx
  unsigned __int64 v83; // r13
  __int64 v84; // rax
  _DWORD *v85; // r9
  __int64 v86; // rax
  __int64 LeafVa; // rax
  __int64 v88; // rcx
  struct _LIST_ENTRY *Flink; // r9
  __int64 v90; // rax
  struct _LIST_ENTRY *v91; // r8
  __int64 v92; // rax
  __int64 v93; // r8
  __int64 v94; // rax
  struct _KPRCB *v95; // rcx
  bool v96; // zf
  unsigned __int8 v97; // al
  struct _KPRCB *v98; // r9
  _DWORD *v99; // r8
  int v100; // eax
  int v101; // eax
  unsigned __int8 v102; // al
  _DWORD *v103; // r8
  int v104; // eax
  int v106; // [rsp+20h] [rbp-E0h]
  int v107; // [rsp+24h] [rbp-DCh]
  __int64 v108; // [rsp+28h] [rbp-D8h]
  unsigned __int8 v109; // [rsp+30h] [rbp-D0h]
  unsigned __int64 v110; // [rsp+38h] [rbp-C8h] BYREF
  unsigned __int64 v111; // [rsp+40h] [rbp-C0h]
  int v112; // [rsp+48h] [rbp-B8h] BYREF
  int v113; // [rsp+4Ch] [rbp-B4h]
  unsigned __int64 *v114; // [rsp+50h] [rbp-B0h]
  __int64 v115; // [rsp+58h] [rbp-A8h]
  __int64 v116; // [rsp+60h] [rbp-A0h]
  int v117; // [rsp+68h] [rbp-98h] BYREF
  unsigned __int64 *v118; // [rsp+70h] [rbp-90h]
  __int64 v119; // [rsp+78h] [rbp-88h]
  __int128 v120; // [rsp+80h] [rbp-80h] BYREF
  unsigned __int64 v121; // [rsp+90h] [rbp-70h]
  __int64 v122; // [rsp+98h] [rbp-68h]
  _QWORD v123[22]; // [rsp+A0h] [rbp-60h] BYREF
  int v124; // [rsp+150h] [rbp+50h] BYREF
  __int16 v125; // [rsp+154h] [rbp+54h]
  __int16 v126; // [rsp+156h] [rbp+56h]
  __int64 v127; // [rsp+158h] [rbp+58h]
  __int64 v128; // [rsp+160h] [rbp+60h]
  _QWORD Base[21]; // [rsp+168h] [rbp+68h] BYREF
  void *retaddr; // [rsp+258h] [rbp+158h]

  v116 = a3;
  v126 = 0;
  v119 = 0LL;
  memset(&Base[1], 0, 0x98uLL);
  v108 = 0LL;
  v9 = 0LL;
  v107 = 0;
  v10 = ((a1 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  v11 = ((a2 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  v111 = v11;
  Process = KeGetCurrentThread()->ApcState.Process;
  v13 = &Process[1].ActiveProcessorsPadding[6];
  v121 = Process[1].ActiveProcessorsPadding[8];
  v114 = &Process[1].ActiveProcessorsPadding[6];
  v113 = a4 & 1;
  if ( (a4 & 1) != 0 )
  {
    for ( i = *(__int64 **)(a3 + 56); i; i = (__int64 *)*i )
    {
      if ( (i[8] & 4) != 0 )
        break;
    }
    v118 = (unsigned __int64 *)(i + 1);
  }
  else
  {
    v118 = 0LL;
  }
  v125 = 0;
  v128 = 0LL;
  Base[0] = 0LL;
  v15 = &dword_140C4F580;
  v127 = 20LL;
  v124 = 1;
  v16 = v13[23] & 7;
  if ( v16 >= 6u )
  {
    CurrentIrql = KeGetCurrentIrql();
    v109 = CurrentIrql;
    __writecr8(2uLL);
    v19 = -1LL;
    if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu )
    {
      SchedulerAssist = KeGetCurrentPrcb()->SchedulerAssist;
      v19 = (-1LL << (CurrentIrql + 1)) & 4;
      SchedulerAssist[5] |= v19;
    }
  }
  else
  {
    if ( v16 == 2 )
      v17 = &dword_140C4F580;
    else
      v17 = (LONG *)(v13 + 24);
    CurrentIrql = KeGetCurrentIrql();
    __writecr8(2uLL);
    v19 = -1LL;
    if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu )
    {
      v8 = KeGetCurrentPrcb()->SchedulerAssist;
      v19 = (-1LL << (CurrentIrql + 1)) & 4;
      v8[5] |= v19;
    }
    if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
    {
      ExpAcquireSpinLockSharedAtDpcLevelInstrumented(v17, CurrentIrql, 0xFFFFF68000000000uLL, v8);
    }
    else
    {
      CurrentPrcb = KeGetCurrentPrcb();
      v21 = CurrentPrcb->SchedulerAssist;
      if ( v21 )
      {
        if ( CurrentPrcb->NestingLevel <= 1u )
        {
          v79 = v21[6];
          v21[6] = v79 + 1;
          if ( v79 == -1 )
            KiRemoveSystemWorkPriorityKick(CurrentPrcb);
        }
      }
      _m_prefetchw(v17);
      v22 = *v17 & 0x7FFFFFFF;
      if ( v22 != _InterlockedCompareExchange(v17, v22 + 1, v22) )
      {
        v77 = CurrentPrcb->SchedulerAssist;
        if ( v77 )
        {
          if ( CurrentPrcb->NestingLevel <= 1u )
          {
            v80 = v77[6] - 1;
            v77[6] = v80;
            if ( !v80 )
              KiRemoveSystemWorkPriorityKick(CurrentPrcb);
          }
        }
        ExpWaitForSpinLockSharedAndAcquire(v17, CurrentIrql);
      }
      v9 = 0LL;
    }
    if ( v17[1] )
      _InterlockedExchange(v17 + 1, 0);
    v109 = CurrentIrql;
  }
  if ( v10 > v11 )
    goto LABEL_70;
  v23 = 0LL;
  v115 = 0LL;
  v24 = (__int64)(v11 << 25) >> 16;
  v25 = a4 & 2;
  v122 = v24;
  v106 = v25;
  while ( 2 )
  {
    if ( v9 )
    {
      MiFlushTbList(&v124, v19);
      MiUnlockPageTableInternal(v13, v9);
      v108 = 0LL;
      if ( (unsigned int)MiWorkingSetIsContended(v13) || KeShouldYieldProcessor() )
      {
        MiUnlockWorkingSetShared(v13, CurrentIrql);
        MiLockWorkingSetShared(v13);
      }
      v25 = v106;
    }
    if ( v25 )
      _InterlockedIncrement64((volatile signed __int64 *)(v121 + 616));
    v120 = 0LL;
    memset((char *)v123 + 2, 0, 0xAEuLL);
    LOWORD(v123[0]) = 2273;
    v26 = (__int64)((v10 << 25) - v23) >> 16;
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
      v13 = v114;
    }
    if ( v27 < 0xFFFF800000000000uLL || v27 >= qword_140C4F938 && v27 <= qword_140C4E168 )
      AnyMultiplexedVm = &KeGetCurrentThread()->ApcState.Process[1].ActiveProcessorsPadding[6];
    else
      AnyMultiplexedVm = (unsigned __int64 *)MiGetAnyMultiplexedVm(1LL);
    v29 = MiFastLockLeafPageTable(AnyMultiplexedVm, v26, 0LL);
    if ( v29 )
    {
      v31 = v29 - 1;
      LODWORD(v120) = v29 - 1;
      v19 = 0xFFFFF68000000000uLL;
      v32 = ((v26 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
      *((_QWORD *)&v120 + 1) = v32;
    }
    else
    {
      LOWORD(v123[0]) |= 4u;
      v123[21] = &v120;
      v123[2] = 0LL;
      v123[3] = AnyMultiplexedVm;
      BYTE2(v123[0]) = BYTE2(v123[0]) & 0xE3 | 4;
      v123[20] = MiGetNextPageTableTail;
      BYTE6(v123[0]) = v109;
      v123[4] = v26;
      v123[5] = v24;
      MiWalkPageTables((__int16 *)v123);
      v31 = v120;
      v32 = *((_QWORD *)&v120 + 1);
      v19 = 0xFFFFF68000000000uLL;
    }
    v33 = v32;
    if ( v32 )
    {
      v30 = 0x7FFFFFFFF8LL;
      v108 = ((v32 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
      if ( v31 )
      {
        v33 = ((v32 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
        v81 = ((v11 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
        if ( v31 > 1 )
        {
          v82 = v31 - 1;
          do
          {
            v33 = ((v33 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
            v81 = ((v81 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
            --v82;
          }
          while ( v82 );
        }
        v83 = v33 + 8;
        v108 = ((v33 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
        if ( ((v33 + 8) & 0xFFF) != 0 )
        {
          do
          {
            if ( v83 > v81 )
              break;
            v84 = MI_READ_PTE_LOCK_FREE(v83);
            v119 = v84;
            if ( (v84 & 1) == 0 )
              break;
            if ( (v84 & 0x80u) == 0LL )
              break;
            v83 += 8LL;
          }
          while ( (v83 & 0xFFF) != 0 );
          v19 = 0xFFFFF68000000000uLL;
        }
        v34 = v83 - 8;
      }
      else
      {
        v34 = (v32 & 0xFFFFFFFFFFFFF000uLL) + 4088;
        if ( v34 > v11 )
          v34 = v11;
      }
    }
    else
    {
      v34 = v11;
    }
    if ( !v113 )
      goto LABEL_53;
    v107 = 1;
    if ( v10 >= 0xFFFFF68000000000uLL )
    {
      do
      {
        if ( v10 > 0xFFFFF6FFFFFFFFFFuLL )
          break;
        v10 = (__int64)((v10 << 25) - v115) >> 16;
      }
      while ( v10 >= 0xFFFFF68000000000uLL );
      v13 = v114;
    }
    v35 = (v10 >> 12) - (*(unsigned int *)(v116 + 24) | ((unsigned __int64)*(unsigned __int8 *)(v116 + 32) << 32));
    VadMandatoryPageSize = MiGetVadMandatoryPageSize(v116);
    if ( VadMandatoryPageSize != 1 )
    {
      v19 = v35 % VadMandatoryPageSize;
      v35 /= VadMandatoryPageSize;
    }
    v39 = v34 + 8;
    if ( v34 + 8 >= 0xFFFFF68000000000uLL )
    {
      do
      {
        if ( v39 > 0xFFFFF6FFFFFFFFFFuLL )
          break;
        v39 = (__int64)((v39 << 25) - v37) >> 16;
      }
      while ( v39 >= 0xFFFFF68000000000uLL );
      v13 = v114;
    }
    if ( v39 > (((*(unsigned int *)(v38 + 28) | ((unsigned __int64)*(unsigned __int8 *)(v38 + 33) << 32)) << 12) | 0xFFF) )
    {
      v40 = *v118;
    }
    else
    {
      v40 = (v39 >> 12) - v30;
      if ( VadMandatoryPageSize != 1 )
      {
        v19 = v40 % VadMandatoryPageSize;
        v40 /= VadMandatoryPageSize;
      }
    }
    v41 = v40 - v35;
    v112 = 0;
    v42 = KeGetCurrentIrql();
    __writecr8(2uLL);
    if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && v42 <= 0xFu )
    {
      v85 = KeGetCurrentPrcb()->SchedulerAssist;
      v19 = (-1LL << (v42 + 1)) & 4;
      v30 = (unsigned int)v19 | v85[5];
      v85[5] = v30;
    }
    v43 = *(_DWORD *)(v38 + 48);
    v44 = v38;
    do
    {
      while ( (v43 & 1) != 0 )
      {
        if ( (v43 & 2) != 0 )
        {
          v112 = 0;
          do
          {
            KeYieldProcessorEx(&v112, v19);
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
    v11 = v111;
    if ( !v41 )
      goto LABEL_53;
    v19 = (unsigned __int64)v118;
    v46 = v35;
    v47 = v35 & 7;
    v48 = (_BYTE *)(v118[1] + (v46 >> 3));
    if ( v47 + v41 > 8 )
    {
      if ( (_DWORD)v47 )
      {
        *v48++ &= byte_14001D960[v47];
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
      v49 = byte_14001A6F0[v41];
    }
    else
    {
      v49 = ~(byte_14001D960[v41] << v47);
    }
    *v48 &= v49;
LABEL_52:
    v11 = v111;
LABEL_53:
    if ( !v32 )
      break;
    if ( v33 > v34 )
      goto LABEL_61;
    v50 = v113;
    v51 = 0xFFFFF6FB7DBED000uLL;
    do
    {
      v52 = *(_QWORD *)v33;
      if ( v33 >= v51 && v33 <= 0xFFFFF6FB7DBED7F8uLL && (MiFlags & 0xC00000) != 0 )
      {
        v19 = (unsigned __int64)KeGetCurrentThread()->ApcState.Process;
        if ( *(_BYTE *)(v19 + 912) != 1 && (v52 & 1) != 0 && ((v52 & 0x20) == 0 || (v52 & 0x42) == 0) )
        {
          v19 = (unsigned __int64)KeGetCurrentThread()->ApcState.Process;
          v30 = *(_QWORD *)(v19 + 1928);
          if ( v30 )
          {
            v86 = *(_QWORD *)(v30 + 8 * ((v33 >> 3) & 0x1FF));
            v30 = v52 | 0x20;
            v19 = (unsigned __int8)v86;
            LOBYTE(v19) = v86 & 0x20;
            if ( (v86 & 0x20) == 0 )
              v30 = *(_QWORD *)v33;
            v52 = v30;
            if ( (v86 & 0x42) != 0 )
              v52 = v30 | 0x42;
          }
        }
      }
      v119 = v52;
      if ( (v52 & 1) != 0 && (v52 & 0x42) != 0 )
      {
        if ( v50
          || (!v106 || v52 >= 0)
          && (LeafVa = MiGetLeafVa(v33, v19, v30, v51), (MiGetWsleContents(v88, LeafVa) & 0xF) != 9) )
        {
          v60 = *(_QWORD *)v33;
          v61 = *(_QWORD *)v33;
          if ( v33 >= v51
            && v33 <= 0xFFFFF6FB7DBED7F8uLL
            && (MiFlags & 0xC00000) != 0
            && KeGetCurrentThread()->ApcState.Process->AddressPolicy != 1
            && (v61 & 1) != 0
            && ((v61 & 0x20) == 0 || (v61 & 0x42) == 0) )
          {
            Flink = KeGetCurrentThread()->ApcState.Process[1].ProcessListEntry.Flink;
            if ( Flink )
            {
              v61 |= 0x20uLL;
              v90 = *((_QWORD *)&Flink->Flink + ((v33 >> 3) & 0x1FF));
              if ( (v90 & 0x20) == 0 )
                v61 = *(_QWORD *)v33;
              if ( (v90 & 0x42) != 0 )
                v61 |= 0x42uLL;
            }
            v51 = 0xFFFFF6FB7DBED000uLL;
          }
          v110 = v61 & 0xFFFFFFFFFFFFFFBDuLL;
          v62 = 0;
          v63 = (__int64)((v33 << 25) - v115) >> 16;
          if ( v63 >= 0xFFFFF68000000000uLL )
          {
            do
            {
              if ( v63 > 0xFFFFF6FFFFFFFFFFuLL )
                break;
              ++v62;
              v63 = (__int64)((v63 << 25) - v115) >> 16;
            }
            while ( v63 >= 0xFFFFF68000000000uLL );
            v51 = 0xFFFFF6FB7DBED000uLL;
            if ( v62 )
            {
              MiRewritePteWithLockBit(
                &KeGetCurrentThread()->ApcState.Process[1].ActiveProcessorsPadding[6],
                v33,
                v110,
                0xFFFFF6FB7DBED000uLL);
              MiInsertLargeTbFlushEntry(&v124, v62, v33);
              goto LABEL_99;
            }
          }
          if ( v33 >= v51
            && v33 <= 0xFFFFF6FB7DBED7F8uLL
            && (MiFlags & 0xC00000) != 0
            && KeGetCurrentThread()->ApcState.Process->AddressPolicy != 1
            && (v60 & 1) != 0
            && ((v60 & 0x20) == 0 || (v60 & 0x42) == 0) )
          {
            v91 = KeGetCurrentThread()->ApcState.Process[1].ProcessListEntry.Flink;
            if ( v91 )
            {
              v92 = *((_QWORD *)&v91->Flink + ((v33 >> 3) & 0x1FF));
              v93 = v60 | 0x20;
              if ( (v92 & 0x20) == 0 )
                v93 = v60;
              v60 = v93;
              if ( (v92 & 0x42) != 0 )
                v60 = v93 | 0x42;
            }
          }
          v64 = v110 ^ (v60 ^ v110) & 0xF00000000000000LL ^ (v60 ^ v110 ^ (v60 ^ v110) & 0xF00000000000000LL) & 0x7000000000000000LL;
          if ( (unsigned int)MiPteInShadowRange(v33) )
          {
            if ( (unsigned int)MiPteHasShadow() )
            {
              if ( !HIBYTE(word_140C4DE08) && (v64 & 1) != 0 )
                v64 |= 0x8000000000000000uLL;
              *(_QWORD *)v33 = v64;
              MiWritePteShadow(v33, v64);
LABEL_92:
              v65 = 1LL;
              v66 = HIDWORD(v127);
              if ( !HIDWORD(v127) )
                goto LABEL_108;
              if ( (v125 & 4) == 0 )
              {
                v67 = Base[HIDWORD(v127) - 1];
                if ( (v67 & 0xC00) == 0 )
                {
                  v68 = Base[HIDWORD(v127) - 1] & 0x3FFLL;
                  if ( (v67 & 0xFFFFFFFFFFFFF000uLL) + ((v68 + 1) << 12) == v63 && v68 + 1 >= v68 && v68 + 1 <= 0x3FF )
                  {
                    ++v128;
                    Base[HIDWORD(v127) - 1] = ((unsigned __int16)v67 ^ (unsigned __int16)(v67 + 1)) & 0x3FF ^ v67;
                    goto LABEL_99;
                  }
                }
              }
              if ( (v125 & 4) != 0
                || (v73 = Base[HIDWORD(v127) - 1], (v73 & 0xC00) != 0)
                || (v73 & 0xFFFFFFFFFFFFF000uLL) != v63 + 4096
                || (v76 = Base[HIDWORD(v127) - 1] & 0x3FFLL, v76 + 1 > 0x3FF)
                || v76 + 1 <= v76 )
              {
LABEL_108:
                if ( HIDWORD(v127) >= (unsigned int)v127 )
                {
                  HIBYTE(v125) = 1;
                }
                else
                {
                  while ( 1 )
                  {
                    v74 = (unsigned __int64)(v65 - 1) > 0x3FF ? 1024LL : v65;
                    v75 = v63 & 0xFFFFFFFFFFFFF000uLL | ((_WORD)v74 - 1) & 0x3FF;
                    v65 -= v74;
                    v63 += v74 << 12;
                    Base[v66] = v75;
                    v128 += v74;
                    v66 = HIDWORD(v127) + 1;
                    HIDWORD(v127) = v66;
                    if ( v66 == (_DWORD)v127 && (v125 & 4) == 0 )
                    {
                      qsort(Base, v66, 8uLL, MiTbFlushSort);
                      MiCompressTbFlushList(&v124);
                      v66 = HIDWORD(v127);
                      if ( HIDWORD(v127) == (_DWORD)v127 )
                        break;
                    }
                    if ( !v65 )
                      goto LABEL_99;
                  }
                  if ( v65 )
                  {
                    HIBYTE(v125) = 1;
                    v128 = HIDWORD(v127);
                  }
                }
                goto LABEL_99;
              }
              ++v128;
              Base[HIDWORD(v127) - 1] = ((unsigned __int16)(v73 - 4096) ^ (unsigned __int16)(v73 - 4096 + 1)) & 0x3FF ^ (unsigned __int64)(v73 - 4096);
LABEL_99:
              v69 = v110;
              if ( (unsigned int)MiPteInShadowRange(&v110)
                && (MiFlags & 0xC00000) != 0
                && KeGetCurrentThread()->ApcState.Process->AddressPolicy != 1
                && (v69 & 1) != 0
                && ((v69 & 0x20) == 0 || (v69 & 0x42) == 0) )
              {
                v19 = (unsigned __int64)KeGetCurrentThread()->ApcState.Process[1].ProcessListEntry.Flink;
                if ( v19 )
                {
                  v94 = *(_QWORD *)(v19 + 8 * (((unsigned __int64)&v110 >> 3) & 0x1FF));
                  if ( (v94 & 0x20) != 0 )
                    v69 |= 0x20uLL;
                  if ( (v94 & 0x42) != 0 )
                    v69 |= 0x42uLL;
                }
                else
                {
                  v69 = v110;
                }
              }
              v70 = 0LL;
              v71 = 48 * ((v69 >> 12) & 0xFFFFFFFFFLL) - 0x58000000000LL;
              v117 = 0;
              while ( _interlockedbittestandset64((volatile signed __int32 *)(v71 + 24), 0x3FuLL) )
              {
                do
                  KeYieldProcessorEx(&v117, v19);
                while ( *(__int64 *)(v71 + 24) < 0 );
              }
              v30 = *(unsigned __int8 *)(v71 + 34);
              v72 = 0LL;
              if ( (v30 & 0x10) == 0 )
              {
                v19 = (unsigned __int8)v30;
                LOBYTE(v19) = !_bittest64((const signed __int64 *)(v71 + 16), 0xAu) & ~((unsigned __int8)v30 >> 3);
                if ( (v19 & 1) != 0 )
                {
                  v72 = MiCapturePageFileInfoInline(v71 + 16, 1LL);
                  v30 = *(unsigned __int8 *)(v71 + 34);
                }
                LOBYTE(v30) = v30 | 0x10;
                *(_BYTE *)(v71 + 34) = v30;
                if ( v72 )
                {
                  v19 = (*(_QWORD *)(v71 + 40) >> 39) & 0x3FFLL;
                  v70 = *(_QWORD *)(qword_140C4E448 + 8 * v19);
                }
              }
              _InterlockedAnd64((volatile signed __int64 *)(v71 + 24), 0x7FFFFFFFFFFFFFFFuLL);
              if ( v72 )
                MiReleasePageFileInfo(v70, v72, 1LL);
              v51 = 0xFFFFF6FB7DBED000uLL;
              goto LABEL_59;
            }
            if ( (HIDWORD(KeGetCurrentThread()->ApcState.Process[2].Header.WaitListHead.Flink) & 0x1000) != 0
              && (v64 & 1) != 0 )
            {
              v64 |= 0x8000000000000000uLL;
            }
          }
          *(_QWORD *)v33 = v64;
          goto LABEL_92;
        }
      }
LABEL_59:
      v33 += 8LL;
    }
    while ( v33 <= v34 );
    v13 = v114;
    v11 = v111;
LABEL_61:
    if ( v107 )
    {
      _InterlockedAnd((volatile signed __int32 *)(v116 + 48), 0xFFFFFFFC);
      if ( KiIrqlFlags )
      {
        if ( (KiIrqlFlags & 1) != 0 && (unsigned __int8)(KeGetCurrentIrql() - 2) <= 0xDu )
        {
          v95 = KeGetCurrentPrcb();
          v19 = (unsigned __int64)v95->SchedulerAssist;
          v96 = (*(_DWORD *)(v19 + 20) & 0xFFFF0007) == 0;
          *(_DWORD *)(v19 + 20) &= 0xFFFF0007;
          if ( v96 )
            KiRemoveSystemWorkPriorityKick(v95);
        }
      }
      __writecr8(2uLL);
      v107 = 0;
    }
    v53 = v33;
    if ( v33 >= 0xFFFFF68000000000uLL )
    {
      do
      {
        if ( v53 > 0xFFFFF6FFFFFFFFFFuLL )
          break;
        v53 = (__int64)((v53 << 25) - v115) >> 16;
      }
      while ( v53 >= 0xFFFFF68000000000uLL );
      v13 = v114;
      v11 = v111;
    }
    v23 = v115;
    v10 = ((v53 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
    v24 = v122;
    v25 = v106;
    if ( v10 <= v11 )
    {
      v9 = v108;
      CurrentIrql = v109;
      continue;
    }
    break;
  }
  v15 = &dword_140C4F580;
LABEL_70:
  MiFlushTbList(&v124, v19);
  if ( v107 )
  {
    LOBYTE(v54) = 2;
    MiUnlockVadCore(v116, v54);
  }
  if ( v108 )
    MiUnlockPageTableInternal(v13, v108);
  if ( (v13[23] & 7) >= 6 )
  {
    if ( KiIrqlFlags )
    {
      if ( (KiIrqlFlags & 1) != 0 )
      {
        v97 = KeGetCurrentIrql();
        if ( v97 <= 0xFu && v109 <= 0xFu && v97 >= 2u )
        {
          v98 = KeGetCurrentPrcb();
          v99 = v98->SchedulerAssist;
          v100 = ~(unsigned __int16)(-1LL << (v109 + 1));
          v96 = (v100 & v99[5]) == 0;
          v99[5] &= v100;
          if ( v96 )
            goto LABEL_271;
        }
      }
    }
  }
  else
  {
    v55 = *((_DWORD *)v13 + 46);
    if ( (v55 & 0x8000000) != 0 || (v55 & 0x4000000) != 0 || (v55 & 0x10000000) != 0 )
    {
      v56 = v109;
      MiPreUnlockWorkingSetShared(v13, v109);
      LOBYTE(v55) = *((_BYTE *)v13 + 184);
    }
    else
    {
      v56 = v109;
    }
    if ( (v55 & 7) != 2 )
      v15 = (volatile signed __int32 *)(v13 + 24);
    MiCheckProcessShadow(v13, 1LL);
    if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
    {
      ExpReleaseSpinLockSharedFromDpcLevelInstrumented(v15, retaddr);
    }
    else
    {
      _InterlockedAnd(v15, 0xBFFFFFFF);
      _InterlockedDecrement(v15);
    }
    v57 = KeGetCurrentPrcb();
    v58 = v57->SchedulerAssist;
    if ( v58 )
    {
      if ( v57->NestingLevel <= 1u )
      {
        v101 = v58[6] - 1;
        v58[6] = v101;
        if ( !v101 )
          KiRemoveSystemWorkPriorityKick(v57);
      }
    }
    if ( KiIrqlFlags )
    {
      if ( (KiIrqlFlags & 1) != 0 )
      {
        v102 = KeGetCurrentIrql();
        if ( v102 <= 0xFu && v56 <= 0xFu && v102 >= 2u )
        {
          v98 = KeGetCurrentPrcb();
          v103 = v98->SchedulerAssist;
          v104 = ~(unsigned __int16)(-1LL << (v56 + 1));
          v96 = (v104 & v103[5]) == 0;
          v103[5] &= v104;
          if ( v96 )
LABEL_271:
            KiRemoveSystemWorkPriorityKick(v98);
        }
      }
    }
  }
  result = v109;
  __writecr8(v109);
  return result;
}
