/*
 * XREFs of MiMakeHyperRangeAccessible @ 0x14021AAC0
 * Callers:
 *     MiCommitPageTablesForVad @ 0x1405EDBB0 (MiCommitPageTablesForVad.c)
 *     MiExpandVadBitMap @ 0x14064F228 (MiExpandVadBitMap.c)
 *     MiExpandVadBitMapDown @ 0x1408CC4D4 (MiExpandVadBitMapDown.c)
 * Callees:
 *     MiFastLockLeafPageTable @ 0x14020DBA0 (MiFastLockLeafPageTable.c)
 *     MiUnlockWorkingSetShared @ 0x14020EC60 (MiUnlockWorkingSetShared.c)
 *     MiLockWorkingSetShared @ 0x140219640 (MiLockWorkingSetShared.c)
 *     MiGetSharedVm @ 0x14021A770 (MiGetSharedVm.c)
 *     MiWalkPageTables @ 0x14025DB00 (MiWalkPageTables.c)
 *     MiGetAnyMultiplexedVm @ 0x1402A9158 (MiGetAnyMultiplexedVm.c)
 *     MiMakeHyperPteDemandZero @ 0x1402AC7F4 (MiMakeHyperPteDemandZero.c)
 *     MiFillHyperPtes @ 0x1402AC9AC (MiFillHyperPtes.c)
 *     MiUnlockPageTableInternal @ 0x1402DB860 (MiUnlockPageTableInternal.c)
 *     ExpWaitForSpinLockSharedAndAcquire @ 0x1402EF840 (ExpWaitForSpinLockSharedAndAcquire.c)
 *     __security_check_cookie @ 0x1403CC020 (__security_check_cookie.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403EC9E4 (KiRemoveSystemWorkPriorityKick.c)
 *     memset @ 0x140408F80 (memset.c)
 *     ExpAcquireSpinLockSharedAtDpcLevelInstrumented @ 0x1405AFFD4 (ExpAcquireSpinLockSharedAtDpcLevelInstrumented.c)
 *     MiChargeFullProcessCommitment @ 0x1405EDAE0 (MiChargeFullProcessCommitment.c)
 *     MiReturnFullProcessCommitment @ 0x14062FA68 (MiReturnFullProcessCommitment.c)
 */

__int64 __fastcall MiMakeHyperRangeAccessible(unsigned __int64 a1, unsigned __int64 a2, __int64 *a3)
{
  __int64 v3; // rdi
  _KPROCESS *Process; // rax
  __int64 v7; // r13
  unsigned __int8 v8; // al
  LONG *v9; // rbx
  unsigned __int8 v10; // r12
  struct _KPRCB *CurrentPrcb; // r15
  _DWORD *v12; // rcx
  signed __int32 v13; // ett
  int v14; // edx
  unsigned __int64 v15; // rcx
  unsigned __int64 v16; // r12
  unsigned __int64 v17; // rbx
  __int64 v18; // r14
  unsigned __int64 v19; // rsi
  __int64 v20; // r14
  unsigned __int64 v21; // rbx
  unsigned __int64 v22; // rcx
  unsigned __int64 *AnyMultiplexedVm; // r14
  int v24; // eax
  _KPROCESS *v25; // rdx
  unsigned __int64 v26; // rbx
  __int64 v27; // r14
  unsigned __int64 v28; // rbx
  __int64 v29; // rcx
  __int64 v30; // rax
  __int64 result; // rax
  unsigned __int64 v32; // rbx
  _DWORD *v33; // rcx
  unsigned __int8 CurrentIrql; // cl
  _DWORD *SchedulerAssist; // r9
  _DWORD *v36; // r9
  int v37; // eax
  int v38; // eax
  struct _LIST_ENTRY *Flink; // r8
  __int64 v40; // rax
  __int64 v41; // r8
  int v42; // [rsp+20h] [rbp-E0h]
  unsigned __int8 v43; // [rsp+28h] [rbp-D8h]
  _DWORD v44[2]; // [rsp+30h] [rbp-D0h] BYREF
  __int64 v45; // [rsp+38h] [rbp-C8h]
  unsigned __int64 v46; // [rsp+40h] [rbp-C0h]
  __int64 v47; // [rsp+48h] [rbp-B8h]
  __int64 *v48; // [rsp+50h] [rbp-B0h]
  unsigned __int64 v49; // [rsp+58h] [rbp-A8h]
  _KPROCESS *v50; // [rsp+60h] [rbp-A0h]
  __int128 v51; // [rsp+68h] [rbp-98h] BYREF
  __int64 v52; // [rsp+78h] [rbp-88h]
  unsigned __int64 v53; // [rsp+80h] [rbp-80h]
  _QWORD v54[22]; // [rsp+90h] [rbp-70h] BYREF

  v3 = 0LL;
  v48 = a3;
  v44[1] = 0;
  v49 = 0LL;
  Process = KeGetCurrentThread()->ApcState.Process;
  v50 = Process;
  *a3 = 0LL;
  v44[0] = 0;
  v7 = (__int64)&Process[1].ActiveProcessorsPadding[6];
  v8 = Process[1].IdealProcessorPadding[10] & 7;
  v47 = v7;
  if ( v8 >= 6u )
  {
    CurrentIrql = KeGetCurrentIrql();
    v43 = CurrentIrql;
    __writecr8(2uLL);
    if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu )
    {
      SchedulerAssist = KeGetCurrentPrcb()->SchedulerAssist;
      SchedulerAssist[5] |= ~((unsigned __int8)(1LL << (CurrentIrql + 1)) - 1) & 4;
    }
  }
  else
  {
    if ( v8 == 2 )
      v9 = &dword_140C4F6C0;
    else
      v9 = (LONG *)(v7 + 192);
    v10 = KeGetCurrentIrql();
    __writecr8(2uLL);
    if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && v10 <= 0xFu )
    {
      v36 = KeGetCurrentPrcb()->SchedulerAssist;
      v36[5] |= (-1 << (v10 + 1)) & 4;
    }
    if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
    {
      ExpAcquireSpinLockSharedAtDpcLevelInstrumented(v9, v10);
    }
    else
    {
      CurrentPrcb = KeGetCurrentPrcb();
      v12 = CurrentPrcb->SchedulerAssist;
      if ( v12 )
      {
        if ( CurrentPrcb->NestingLevel <= 1u )
        {
          v37 = v12[6];
          v12[6] = v37 + 1;
          if ( v37 == -1 )
            KiRemoveSystemWorkPriorityKick(CurrentPrcb);
        }
      }
      _m_prefetchw(v9);
      v13 = *v9 & 0x7FFFFFFF;
      if ( v13 != _InterlockedCompareExchange(v9, v13 + 1, v13) )
      {
        v33 = CurrentPrcb->SchedulerAssist;
        if ( v33 )
        {
          if ( CurrentPrcb->NestingLevel <= 1u )
          {
            v38 = v33[6] - 1;
            v33[6] = v38;
            if ( !v38 )
              KiRemoveSystemWorkPriorityKick(CurrentPrcb);
          }
        }
        ExpWaitForSpinLockSharedAndAcquire(v9, v10);
      }
    }
    if ( v9[1] )
      _InterlockedExchange(v9 + 1, 0);
    v43 = v10;
  }
  v14 = 0;
  v42 = 0;
  v15 = ((a1 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  v53 = v15;
  v16 = ((a2 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  while ( 1 )
  {
    v45 = 0LL;
    v17 = 0LL;
    v46 = 0LL;
    v18 = 0LL;
    v19 = v15;
    if ( v15 <= v16 )
    {
      v20 = 0LL;
      v52 = 0LL;
      while ( 1 )
      {
        v51 = 0LL;
        memset((char *)v54 + 2, 0, 0xAEuLL);
        LOWORD(v54[0]) = 2145;
        v21 = (__int64)((v19 << 25) - v20) >> 16;
        v22 = v21;
        if ( v21 >= 0xFFFFF68000000000uLL )
        {
          do
          {
            if ( v22 > 0xFFFFF6FFFFFFFFFFuLL )
              break;
            v22 = (__int64)((v22 << 25) - v20) >> 16;
          }
          while ( v22 >= 0xFFFFF68000000000uLL );
          v7 = v47;
        }
        if ( v22 >= 0xFFFF800000000000uLL && (v22 < qword_140C4FA78 || v22 > qword_140C4E2A8) )
          AnyMultiplexedVm = (unsigned __int64 *)MiGetAnyMultiplexedVm(1LL);
        else
          AnyMultiplexedVm = &KeGetCurrentThread()->ApcState.Process[1].ActiveProcessorsPadding[6];
        v24 = MiFastLockLeafPageTable((__int64)AnyMultiplexedVm, v21, 0);
        if ( v24 )
        {
          LODWORD(v51) = v24 - 1;
          v26 = ((v21 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
          *((_QWORD *)&v51 + 1) = v26;
        }
        else
        {
          LOWORD(v54[0]) |= 4u;
          v54[21] = &v51;
          v54[2] = 0LL;
          v54[3] = AnyMultiplexedVm;
          BYTE2(v54[0]) = BYTE2(v54[0]) & 0xE3 | 4;
          v54[20] = MiGetNextPageTableTail;
          BYTE6(v54[0]) = v43;
          v54[4] = v21;
          v54[5] = (__int64)(v16 << 25) >> 16;
          MiWalkPageTables(v54);
          v26 = *((_QWORD *)&v51 + 1);
        }
        if ( v26 )
        {
          v27 = ((v26 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
          if ( v26 == v19 )
          {
            v28 = v16;
            if ( (v19 & 0xFFFFFFFFFFFFF000uLL) + 4088 <= v16 )
              v28 = (v19 & 0xFFFFFFFFFFFFF000uLL) + 4088;
            if ( v19 <= v28 )
            {
              do
              {
                v29 = *(_QWORD *)v19;
                if ( v19 >= 0xFFFFF6FB7DBED000uLL && v19 <= 0xFFFFF6FB7DBED7F8uLL && (MiFlags & 0xC00000) != 0 )
                {
                  v25 = KeGetCurrentThread()->ApcState.Process;
                  if ( v25->AddressPolicy != 1 && (v29 & 1) != 0 && ((v29 & 0x20) == 0 || (v29 & 0x42) == 0) )
                  {
                    v25 = KeGetCurrentThread()->ApcState.Process;
                    Flink = v25[1].ProcessListEntry.Flink;
                    if ( Flink )
                    {
                      v40 = *((_QWORD *)&Flink->Flink + ((v19 >> 3) & 0x1FF));
                      v41 = v29 | 0x20;
                      v25 = (_KPROCESS *)(unsigned __int8)v40;
                      LOBYTE(v25) = v40 & 0x20;
                      if ( (v40 & 0x20) == 0 )
                        v41 = *(_QWORD *)v19;
                      v29 = v41;
                      if ( (v40 & 0x42) != 0 )
                        v29 = v41 | 0x42;
                    }
                  }
                }
                if ( !v29 )
                  MiMakeHyperPteDemandZero(v19, v25, v44);
                v19 += 8LL;
              }
              while ( (v19 & 0xFFF) != 0 && v19 <= v28 );
              v7 = v47;
              v3 = 0LL;
            }
            MiUnlockPageTableInternal(v7, v27);
            goto LABEL_36;
          }
          MiUnlockPageTableInternal(v7, ((v26 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL);
          v32 = v26 - 8;
        }
        else
        {
          v32 = v16;
        }
        MiFillHyperPtes(v19, v32, v43, v44);
        v19 = v32 + 8;
LABEL_36:
        v20 = v52;
        if ( v19 > v16 )
        {
          v17 = v46;
          v18 = v45;
          v14 = v42;
          break;
        }
      }
    }
    if ( v14 || !v18 )
      break;
    MiUnlockWorkingSetShared(v7, v43);
    v49 = v17;
    result = MiChargeFullProcessCommitment(v50, v18 + v17);
    if ( (int)result < 0 )
      return result;
    v44[0] = 1;
    *v48 = v18;
    MiLockWorkingSetShared(v7);
    v15 = v53;
    v14 = 1;
    v42 = 1;
  }
  if ( v17 )
  {
    _InterlockedExchangeAdd64((volatile signed __int64 *)MiGetSharedVm(v7) + 6, v17);
    v17 = v46;
    v18 = v45;
  }
  MiUnlockWorkingSetShared(v7, v43);
  v30 = *v48;
  if ( v18 != *v48 )
  {
    *v48 = v18;
    v3 = v30 - v18;
  }
  if ( v17 != v49 )
    v3 += v49 - v17;
  if ( v3 )
    MiReturnFullProcessCommitment(v50, v3);
  return 0LL;
}
