/*
 * XREFs of MiMoveDirtyBitsToPfns @ 0x14022F4F0
 * Callers:
 *     MiBeginHoldingDirtyFaults @ 0x14053C730 (MiBeginHoldingDirtyFaults.c)
 *     NtResetWriteWatch @ 0x140624640 (NtResetWriteWatch.c)
 *     MiProcessVaRangesInfoClass @ 0x1406D371C (MiProcessVaRangesInfoClass.c)
 * Callees:
 *     MiPteInShadowRange @ 0x14021EA50 (MiPteInShadowRange.c)
 *     MiGetVadMandatoryPageSize @ 0x14022FFE0 (MiGetVadMandatoryPageSize.c)
 *     MiGetAnyMultiplexedVm @ 0x14024EF1C (MiGetAnyMultiplexedVm.c)
 *     MiWalkPageTables @ 0x14026A5E0 (MiWalkPageTables.c)
 *     MiFastLockLeafPageTable @ 0x14026F9F0 (MiFastLockLeafPageTable.c)
 *     MiUnlockWorkingSetShared @ 0x140270AB0 (MiUnlockWorkingSetShared.c)
 *     MiCheckProcessShadow @ 0x140270BA0 (MiCheckProcessShadow.c)
 *     MiLockWorkingSetShared @ 0x14027B490 (MiLockWorkingSetShared.c)
 *     MiGetLeafVa @ 0x1402B0270 (MiGetLeafVa.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x1402B12D0 (MI_READ_PTE_LOCK_FREE.c)
 *     MiFlushTbList @ 0x1402BFA90 (MiFlushTbList.c)
 *     MiWorkingSetIsContended @ 0x1402CB2C0 (MiWorkingSetIsContended.c)
 *     MiGetWsleContents @ 0x1402D3CE0 (MiGetWsleContents.c)
 *     KeYieldProcessorEx @ 0x1402DE380 (KeYieldProcessorEx.c)
 *     KeShouldYieldProcessor @ 0x1402F80C0 (KeShouldYieldProcessor.c)
 *     ExpWaitForSpinLockSharedAndAcquire @ 0x1402FFF60 (ExpWaitForSpinLockSharedAndAcquire.c)
 *     MiCapturePageFileInfoInline @ 0x140306460 (MiCapturePageFileInfoInline.c)
 *     MiCompressTbFlushList @ 0x140306530 (MiCompressTbFlushList.c)
 *     MiUnlockVadCore @ 0x140311AA0 (MiUnlockVadCore.c)
 *     MiWritePteShadow @ 0x140313F2C (MiWritePteShadow.c)
 *     MiPteHasShadow @ 0x140313F8C (MiPteHasShadow.c)
 *     MiInsertLargeTbFlushEntry @ 0x140319B24 (MiInsertLargeTbFlushEntry.c)
 *     MiPreUnlockWorkingSetShared @ 0x14031ACE0 (MiPreUnlockWorkingSetShared.c)
 *     MiReleasePageFileInfo @ 0x140344F70 (MiReleasePageFileInfo.c)
 *     MiUnlockPageTableInternal @ 0x14035B910 (MiUnlockPageTableInternal.c)
 *     MiRewritePteWithLockBit @ 0x1403B54A8 (MiRewritePteWithLockBit.c)
 *     __security_check_cookie @ 0x1403CFAF0 (__security_check_cookie.c)
 *     qsort @ 0x1403D2150 (qsort.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403F1DD4 (KiRemoveSystemWorkPriorityKick.c)
 *     memset @ 0x140411300 (memset.c)
 *     ExpAcquireSpinLockSharedAtDpcLevelInstrumented @ 0x1405B4254 (ExpAcquireSpinLockSharedAtDpcLevelInstrumented.c)
 *     ExpReleaseSpinLockSharedFromDpcLevelInstrumented @ 0x1405B43A4 (ExpReleaseSpinLockSharedFromDpcLevelInstrumented.c)
 */

__int64 __fastcall MiMoveDirtyBitsToPfns(unsigned __int64 a1, unsigned __int64 a2, __int64 a3, char a4)
{
  __int64 v8; // rsi
  unsigned __int64 v9; // rbx
  unsigned __int64 v10; // r15
  _KPROCESS *Process; // rcx
  unsigned __int64 *v12; // r12
  __int64 *i; // rcx
  volatile signed __int32 *v14; // r13
  unsigned __int8 v15; // al
  LONG *v16; // rdi
  unsigned __int8 CurrentIrql; // r14
  unsigned __int64 v18; // rdx
  struct _KPRCB *CurrentPrcb; // rsi
  _DWORD *v20; // rcx
  signed __int32 v21; // ett
  __int64 v22; // rdi
  __int64 v23; // r13
  int v24; // eax
  unsigned __int64 v25; // r14
  unsigned __int64 v26; // rcx
  unsigned __int64 *AnyMultiplexedVm; // rdi
  int v28; // eax
  __int64 v29; // r8
  unsigned int v30; // ecx
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
  __int64 v64; // rbx
  unsigned int v65; // r10d
  unsigned __int64 v66; // rax
  unsigned __int64 v67; // r8
  unsigned __int64 v68; // rbx
  __int64 v69; // rsi
  __int64 v70; // rbx
  __int64 v71; // rax
  __int64 v72; // rax
  __int64 v73; // rdx
  unsigned __int64 v74; // rax
  unsigned __int64 v75; // rcx
  _DWORD *v76; // rcx
  _DWORD *SchedulerAssist; // r9
  _DWORD *v78; // r9
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
  v8 = 0LL;
  v107 = 0;
  v9 = ((a1 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  v10 = ((a2 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  v111 = v10;
  Process = KeGetCurrentThread()->ApcState.Process;
  v12 = &Process[1].ActiveProcessorsPadding[6];
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
  v14 = &dword_140C4F600;
  v127 = 20LL;
  v124 = 1;
  v15 = v12[23] & 7;
  if ( v15 >= 6u )
  {
    CurrentIrql = KeGetCurrentIrql();
    v109 = CurrentIrql;
    __writecr8(2uLL);
    v18 = -1LL;
    if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu )
    {
      SchedulerAssist = KeGetCurrentPrcb()->SchedulerAssist;
      v18 = (-1LL << (CurrentIrql + 1)) & 4;
      SchedulerAssist[5] |= v18;
    }
  }
  else
  {
    if ( v15 == 2 )
      v16 = &dword_140C4F600;
    else
      v16 = (LONG *)(v12 + 24);
    CurrentIrql = KeGetCurrentIrql();
    __writecr8(2uLL);
    v18 = -1LL;
    if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu )
    {
      v78 = KeGetCurrentPrcb()->SchedulerAssist;
      v18 = (-1LL << (CurrentIrql + 1)) & 4;
      v78[5] |= v18;
    }
    if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
    {
      ExpAcquireSpinLockSharedAtDpcLevelInstrumented(v16, CurrentIrql);
    }
    else
    {
      CurrentPrcb = KeGetCurrentPrcb();
      v20 = CurrentPrcb->SchedulerAssist;
      if ( v20 )
      {
        if ( CurrentPrcb->NestingLevel <= 1u )
        {
          v79 = v20[6];
          v20[6] = v79 + 1;
          if ( v79 == -1 )
            KiRemoveSystemWorkPriorityKick(CurrentPrcb);
        }
      }
      _m_prefetchw(v16);
      v21 = *v16 & 0x7FFFFFFF;
      if ( v21 != _InterlockedCompareExchange(v16, v21 + 1, v21) )
      {
        v76 = CurrentPrcb->SchedulerAssist;
        if ( v76 )
        {
          if ( CurrentPrcb->NestingLevel <= 1u )
          {
            v80 = v76[6] - 1;
            v76[6] = v80;
            if ( !v80 )
              KiRemoveSystemWorkPriorityKick(CurrentPrcb);
          }
        }
        ExpWaitForSpinLockSharedAndAcquire(v16, CurrentIrql);
      }
      v8 = 0LL;
    }
    if ( v16[1] )
      _InterlockedExchange(v16 + 1, 0);
    v109 = CurrentIrql;
  }
  if ( v9 > v10 )
    goto LABEL_70;
  v22 = 0LL;
  v115 = 0LL;
  v23 = (__int64)(v10 << 25) >> 16;
  v24 = a4 & 2;
  v122 = v23;
  v106 = v24;
  while ( 2 )
  {
    if ( v8 )
    {
      MiFlushTbList(&v124, v18);
      MiUnlockPageTableInternal(v12);
      v108 = 0LL;
      if ( (unsigned int)MiWorkingSetIsContended(v12) || KeShouldYieldProcessor() )
      {
        MiUnlockWorkingSetShared(v12, CurrentIrql);
        MiLockWorkingSetShared(v12);
      }
      v24 = v106;
    }
    if ( v24 )
      _InterlockedIncrement64((volatile signed __int64 *)(v121 + 616));
    v120 = 0LL;
    memset((char *)v123 + 2, 0, 0xAEuLL);
    LOWORD(v123[0]) = 2273;
    v25 = (__int64)((v9 << 25) - v22) >> 16;
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
      v12 = v114;
    }
    if ( v26 < 0xFFFF800000000000uLL || v26 >= qword_140C4F9B8 && v26 <= qword_140C4E1E8 )
      AnyMultiplexedVm = &KeGetCurrentThread()->ApcState.Process[1].ActiveProcessorsPadding[6];
    else
      AnyMultiplexedVm = (unsigned __int64 *)MiGetAnyMultiplexedVm(1LL);
    v28 = MiFastLockLeafPageTable(AnyMultiplexedVm, v25, 0LL);
    if ( v28 )
    {
      v30 = v28 - 1;
      LODWORD(v120) = v28 - 1;
      v18 = 0xFFFFF68000000000uLL;
      v31 = ((v25 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
      *((_QWORD *)&v120 + 1) = v31;
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
      v123[4] = v25;
      v123[5] = v23;
      MiWalkPageTables(v123);
      v30 = v120;
      v31 = *((_QWORD *)&v120 + 1);
      v18 = 0xFFFFF68000000000uLL;
    }
    v32 = v31;
    if ( v31 )
    {
      v29 = 0x7FFFFFFFF8LL;
      v108 = ((v31 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
      if ( v30 )
      {
        v32 = ((v31 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
        v81 = ((v10 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
        if ( v30 > 1 )
        {
          v82 = v30 - 1;
          do
          {
            v32 = ((v32 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
            v81 = ((v81 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
            --v82;
          }
          while ( v82 );
        }
        v83 = v32 + 8;
        v108 = ((v32 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
        if ( ((v32 + 8) & 0xFFF) != 0 )
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
          v18 = 0xFFFFF68000000000uLL;
        }
        v33 = v83 - 8;
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
    if ( !v113 )
      goto LABEL_53;
    v107 = 1;
    if ( v9 >= 0xFFFFF68000000000uLL )
    {
      do
      {
        if ( v9 > 0xFFFFF6FFFFFFFFFFuLL )
          break;
        v9 = (__int64)((v9 << 25) - v115) >> 16;
      }
      while ( v9 >= 0xFFFFF68000000000uLL );
      v12 = v114;
    }
    v34 = (v9 >> 12) - (*(unsigned int *)(v116 + 24) | ((unsigned __int64)*(unsigned __int8 *)(v116 + 32) << 32));
    VadMandatoryPageSize = MiGetVadMandatoryPageSize(v116);
    if ( VadMandatoryPageSize != 1 )
    {
      v18 = v34 % VadMandatoryPageSize;
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
      v12 = v114;
    }
    if ( v38 > (((*(unsigned int *)(v37 + 28) | ((unsigned __int64)*(unsigned __int8 *)(v37 + 33) << 32)) << 12) | 0xFFF) )
    {
      v39 = *v118;
    }
    else
    {
      v39 = (v38 >> 12) - v29;
      if ( VadMandatoryPageSize != 1 )
      {
        v18 = v39 % VadMandatoryPageSize;
        v39 /= VadMandatoryPageSize;
      }
    }
    v40 = v39 - v34;
    v112 = 0;
    v41 = KeGetCurrentIrql();
    __writecr8(2uLL);
    if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && v41 <= 0xFu )
    {
      v85 = KeGetCurrentPrcb()->SchedulerAssist;
      v18 = (-1LL << (v41 + 1)) & 4;
      v29 = (unsigned int)v18 | v85[5];
      v85[5] = v29;
    }
    v42 = *(_DWORD *)(v37 + 48);
    v43 = v37;
    do
    {
      while ( (v42 & 1) != 0 )
      {
        if ( (v42 & 2) != 0 )
        {
          v112 = 0;
          do
          {
            KeYieldProcessorEx(&v112);
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
    v10 = v111;
    if ( !v40 )
      goto LABEL_53;
    v18 = (unsigned __int64)v118;
    v45 = v34;
    v46 = v34 & 7;
    v47 = (_BYTE *)(v118[1] + (v45 >> 3));
    if ( v46 + v40 > 8 )
    {
      if ( (_DWORD)v46 )
      {
        *v47++ &= byte_14001DA60[v46];
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
      v48 = byte_14001A7F0[v40];
    }
    else
    {
      v48 = ~(byte_14001DA60[v40] << v46);
    }
    *v47 &= v48;
LABEL_52:
    v10 = v111;
LABEL_53:
    if ( !v31 )
      break;
    if ( v32 > v33 )
      goto LABEL_61;
    v49 = v113;
    v50 = 0xFFFFF6FB7DBED000uLL;
    do
    {
      v51 = *(_QWORD *)v32;
      if ( v32 >= v50 && v32 <= 0xFFFFF6FB7DBED7F8uLL && (MiFlags & 0xC00000) != 0 )
      {
        v18 = (unsigned __int64)KeGetCurrentThread()->ApcState.Process;
        if ( *(_BYTE *)(v18 + 912) != 1 && (v51 & 1) != 0 && ((v51 & 0x20) == 0 || (v51 & 0x42) == 0) )
        {
          v18 = (unsigned __int64)KeGetCurrentThread()->ApcState.Process;
          v29 = *(_QWORD *)(v18 + 1928);
          if ( v29 )
          {
            v86 = *(_QWORD *)(v29 + 8 * ((v32 >> 3) & 0x1FF));
            v29 = v51 | 0x20;
            v18 = (unsigned __int8)v86;
            LOBYTE(v18) = v86 & 0x20;
            if ( (v86 & 0x20) == 0 )
              v29 = *(_QWORD *)v32;
            v51 = v29;
            if ( (v86 & 0x42) != 0 )
              v51 = v29 | 0x42;
          }
        }
      }
      v119 = v51;
      if ( (v51 & 1) != 0 && (v51 & 0x42) != 0 )
      {
        if ( v49
          || (!v106 || v51 >= 0)
          && (LeafVa = MiGetLeafVa(v32, v18, v29, v50), (MiGetWsleContents(v88, LeafVa) & 0xF) != 9) )
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
              v90 = *((_QWORD *)&Flink->Flink + ((v32 >> 3) & 0x1FF));
              if ( (v90 & 0x20) == 0 )
                v60 = *(_QWORD *)v32;
              if ( (v90 & 0x42) != 0 )
                v60 |= 0x42uLL;
            }
            v50 = 0xFFFFF6FB7DBED000uLL;
          }
          v110 = v60 & 0xFFFFFFFFFFFFFFBDuLL;
          v61 = 0;
          v62 = (__int64)((v32 << 25) - v115) >> 16;
          if ( v62 >= 0xFFFFF68000000000uLL )
          {
            do
            {
              if ( v62 > 0xFFFFF6FFFFFFFFFFuLL )
                break;
              ++v61;
              v62 = (__int64)((v62 << 25) - v115) >> 16;
            }
            while ( v62 >= 0xFFFFF68000000000uLL );
            v50 = 0xFFFFF6FB7DBED000uLL;
            if ( v61 )
            {
              MiRewritePteWithLockBit(
                &KeGetCurrentThread()->ApcState.Process[1].ActiveProcessorsPadding[6],
                v32,
                v110,
                0xFFFFF6FB7DBED000uLL);
              MiInsertLargeTbFlushEntry(&v124, v61, v32);
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
            v91 = KeGetCurrentThread()->ApcState.Process[1].ProcessListEntry.Flink;
            if ( v91 )
            {
              v92 = *((_QWORD *)&v91->Flink + ((v32 >> 3) & 0x1FF));
              v93 = v59 | 0x20;
              if ( (v92 & 0x20) == 0 )
                v93 = v59;
              v59 = v93;
              if ( (v92 & 0x42) != 0 )
                v59 = v93 | 0x42;
            }
          }
          v63 = v110 ^ (v59 ^ v110) & 0xF00000000000000LL ^ (v59 ^ v110 ^ (v59 ^ v110) & 0xF00000000000000LL) & 0x7000000000000000LL;
          if ( MiPteInShadowRange(v32) )
          {
            if ( (unsigned int)MiPteHasShadow() )
            {
              if ( !HIBYTE(word_140C4DE88) && (v63 & 1) != 0 )
                v63 |= 0x8000000000000000uLL;
              *(_QWORD *)v32 = v63;
              MiWritePteShadow(v32, v63);
LABEL_92:
              v64 = 1LL;
              v65 = HIDWORD(v127);
              if ( !HIDWORD(v127) )
                goto LABEL_108;
              if ( (v125 & 4) == 0 )
              {
                v66 = Base[HIDWORD(v127) - 1];
                if ( (v66 & 0xC00) == 0 )
                {
                  v67 = Base[HIDWORD(v127) - 1] & 0x3FFLL;
                  if ( (v66 & 0xFFFFFFFFFFFFF000uLL) + ((v67 + 1) << 12) == v62 && v67 + 1 >= v67 && v67 + 1 <= 0x3FF )
                  {
                    ++v128;
                    Base[HIDWORD(v127) - 1] = ((unsigned __int16)v66 ^ (unsigned __int16)(v66 + 1)) & 0x3FF ^ v66;
                    goto LABEL_99;
                  }
                }
              }
              if ( (v125 & 4) != 0
                || (v72 = Base[HIDWORD(v127) - 1], (v72 & 0xC00) != 0)
                || (v72 & 0xFFFFFFFFFFFFF000uLL) != v62 + 4096
                || (v75 = Base[HIDWORD(v127) - 1] & 0x3FFLL, v75 + 1 > 0x3FF)
                || v75 + 1 <= v75 )
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
                    v73 = (unsigned __int64)(v64 - 1) > 0x3FF ? 1024LL : v64;
                    v74 = v62 & 0xFFFFFFFFFFFFF000uLL | ((_WORD)v73 - 1) & 0x3FF;
                    v64 -= v73;
                    v62 += v73 << 12;
                    Base[v65] = v74;
                    v128 += v73;
                    v65 = HIDWORD(v127) + 1;
                    HIDWORD(v127) = v65;
                    if ( v65 == (_DWORD)v127 && (v125 & 4) == 0 )
                    {
                      qsort(Base, v65, 8uLL, MiTbFlushSort);
                      MiCompressTbFlushList(&v124);
                      v65 = HIDWORD(v127);
                      if ( HIDWORD(v127) == (_DWORD)v127 )
                        break;
                    }
                    if ( !v64 )
                      goto LABEL_99;
                  }
                  if ( v64 )
                  {
                    HIBYTE(v125) = 1;
                    v128 = HIDWORD(v127);
                  }
                }
                goto LABEL_99;
              }
              ++v128;
              Base[HIDWORD(v127) - 1] = ((unsigned __int16)(v72 - 4096) ^ (unsigned __int16)(v72 - 4096 + 1)) & 0x3FF ^ (unsigned __int64)(v72 - 4096);
LABEL_99:
              v68 = v110;
              if ( MiPteInShadowRange((unsigned __int64)&v110)
                && (MiFlags & 0xC00000) != 0
                && KeGetCurrentThread()->ApcState.Process->AddressPolicy != 1
                && (v68 & 1) != 0
                && ((v68 & 0x20) == 0 || (v68 & 0x42) == 0) )
              {
                v18 = (unsigned __int64)KeGetCurrentThread()->ApcState.Process[1].ProcessListEntry.Flink;
                if ( v18 )
                {
                  v94 = *(_QWORD *)(v18 + 8 * (((unsigned __int64)&v110 >> 3) & 0x1FF));
                  if ( (v94 & 0x20) != 0 )
                    v68 |= 0x20uLL;
                  if ( (v94 & 0x42) != 0 )
                    v68 |= 0x42uLL;
                }
                else
                {
                  v68 = v110;
                }
              }
              v69 = 0LL;
              v70 = 48 * ((v68 >> 12) & 0xFFFFFFFFFLL) - 0x58000000000LL;
              v117 = 0;
              while ( _interlockedbittestandset64((volatile signed __int32 *)(v70 + 24), 0x3FuLL) )
              {
                do
                  KeYieldProcessorEx(&v117);
                while ( *(__int64 *)(v70 + 24) < 0 );
              }
              v29 = *(unsigned __int8 *)(v70 + 34);
              v71 = 0LL;
              if ( (v29 & 0x10) == 0 )
              {
                v18 = (unsigned __int8)v29;
                LOBYTE(v18) = !_bittest64((const signed __int64 *)(v70 + 16), 0xAu) & ~((unsigned __int8)v29 >> 3);
                if ( (v18 & 1) != 0 )
                {
                  v71 = MiCapturePageFileInfoInline(v70 + 16, 1LL);
                  v29 = *(unsigned __int8 *)(v70 + 34);
                }
                LOBYTE(v29) = v29 | 0x10;
                *(_BYTE *)(v70 + 34) = v29;
                if ( v71 )
                {
                  v18 = (*(_QWORD *)(v70 + 40) >> 39) & 0x3FFLL;
                  v69 = *(_QWORD *)(qword_140C4E4C8 + 8 * v18);
                }
              }
              _InterlockedAnd64((volatile signed __int64 *)(v70 + 24), 0x7FFFFFFFFFFFFFFFuLL);
              if ( v71 )
                MiReleasePageFileInfo(v69, v71, 1LL);
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
    v12 = v114;
    v10 = v111;
LABEL_61:
    if ( v107 )
    {
      _InterlockedAnd((volatile signed __int32 *)(v116 + 48), 0xFFFFFFFC);
      if ( KiIrqlFlags )
      {
        if ( (KiIrqlFlags & 1) != 0 && (unsigned __int8)(KeGetCurrentIrql() - 2) <= 0xDu )
        {
          v95 = KeGetCurrentPrcb();
          v18 = (unsigned __int64)v95->SchedulerAssist;
          v96 = (*(_DWORD *)(v18 + 20) & 0xFFFF0007) == 0;
          *(_DWORD *)(v18 + 20) &= 0xFFFF0007;
          if ( v96 )
            KiRemoveSystemWorkPriorityKick(v95);
        }
      }
      __writecr8(2uLL);
      v107 = 0;
    }
    v52 = v32;
    if ( v32 >= 0xFFFFF68000000000uLL )
    {
      do
      {
        if ( v52 > 0xFFFFF6FFFFFFFFFFuLL )
          break;
        v52 = (__int64)((v52 << 25) - v115) >> 16;
      }
      while ( v52 >= 0xFFFFF68000000000uLL );
      v12 = v114;
      v10 = v111;
    }
    v22 = v115;
    v9 = ((v52 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
    v23 = v122;
    v24 = v106;
    if ( v9 <= v10 )
    {
      v8 = v108;
      CurrentIrql = v109;
      continue;
    }
    break;
  }
  v14 = &dword_140C4F600;
LABEL_70:
  MiFlushTbList(&v124, v18);
  if ( v107 )
  {
    LOBYTE(v53) = 2;
    MiUnlockVadCore(v116, v53);
  }
  if ( v108 )
    MiUnlockPageTableInternal(v12);
  if ( (v12[23] & 7) >= 6 )
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
    v54 = *((_DWORD *)v12 + 46);
    if ( (v54 & 0x8000000) != 0 || (v54 & 0x4000000) != 0 || (v54 & 0x10000000) != 0 )
    {
      v55 = v109;
      MiPreUnlockWorkingSetShared(v12, v109);
      LOBYTE(v54) = *((_BYTE *)v12 + 184);
    }
    else
    {
      v55 = v109;
    }
    if ( (v54 & 7) != 2 )
      v14 = (volatile signed __int32 *)(v12 + 24);
    MiCheckProcessShadow(v12, 1LL);
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
        v101 = v57[6] - 1;
        v57[6] = v101;
        if ( !v101 )
          KiRemoveSystemWorkPriorityKick(v56);
      }
    }
    if ( KiIrqlFlags )
    {
      if ( (KiIrqlFlags & 1) != 0 )
      {
        v102 = KeGetCurrentIrql();
        if ( v102 <= 0xFu && v55 <= 0xFu && v102 >= 2u )
        {
          v98 = KeGetCurrentPrcb();
          v103 = v98->SchedulerAssist;
          v104 = ~(unsigned __int16)(-1LL << (v55 + 1));
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
