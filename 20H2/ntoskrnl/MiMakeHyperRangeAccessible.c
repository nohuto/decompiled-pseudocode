/*
 * XREFs of MiMakeHyperRangeAccessible @ 0x14027CCC0
 * Callers:
 *     MiCommitPageTablesForVad @ 0x14067BDF0 (MiCommitPageTablesForVad.c)
 *     MiExpandVadBitMap @ 0x1406EEE60 (MiExpandVadBitMap.c)
 *     MiExpandVadBitMapDown @ 0x1408D3664 (MiExpandVadBitMapDown.c)
 * Callees:
 *     MiFillHyperPtes @ 0x140233F64 (MiFillHyperPtes.c)
 *     MiGetAnyMultiplexedVm @ 0x14024EF1C (MiGetAnyMultiplexedVm.c)
 *     MiWalkPageTables @ 0x14026A5E0 (MiWalkPageTables.c)
 *     MiFastLockLeafPageTable @ 0x14026F9F0 (MiFastLockLeafPageTable.c)
 *     MiUnlockWorkingSetShared @ 0x140270AB0 (MiUnlockWorkingSetShared.c)
 *     MiLockWorkingSetShared @ 0x14027B490 (MiLockWorkingSetShared.c)
 *     MiGetSharedVm @ 0x14027C730 (MiGetSharedVm.c)
 *     ExpWaitForSpinLockSharedAndAcquire @ 0x1402FFF60 (ExpWaitForSpinLockSharedAndAcquire.c)
 *     MiMakeHyperPteDemandZero @ 0x140315444 (MiMakeHyperPteDemandZero.c)
 *     MiUnlockPageTableInternal @ 0x14035B910 (MiUnlockPageTableInternal.c)
 *     __security_check_cookie @ 0x1403CFAF0 (__security_check_cookie.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403F1DD4 (KiRemoveSystemWorkPriorityKick.c)
 *     memset @ 0x140411300 (memset.c)
 *     ExpAcquireSpinLockSharedAtDpcLevelInstrumented @ 0x1405B4254 (ExpAcquireSpinLockSharedAtDpcLevelInstrumented.c)
 *     MiReturnFullProcessCommitment @ 0x14062645C (MiReturnFullProcessCommitment.c)
 *     MiChargeFullProcessCommitment @ 0x14067BD20 (MiChargeFullProcessCommitment.c)
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
  char *AnyMultiplexedVm; // r14
  int v24; // eax
  _KPROCESS *v25; // rdx
  __int64 v26; // rbx
  unsigned __int64 v27; // rbx
  __int64 v28; // rcx
  __int64 v29; // rax
  __int64 result; // rax
  unsigned __int64 v31; // rbx
  _DWORD *v32; // rcx
  unsigned __int8 CurrentIrql; // cl
  _DWORD *SchedulerAssist; // r9
  _DWORD *v35; // r9
  int v36; // eax
  int v37; // eax
  struct _LIST_ENTRY *Flink; // r8
  __int64 v39; // rax
  __int64 v40; // r8
  int v41; // [rsp+20h] [rbp-E0h]
  unsigned __int8 v42; // [rsp+28h] [rbp-D8h]
  _DWORD v43[2]; // [rsp+30h] [rbp-D0h] BYREF
  __int64 v44; // [rsp+38h] [rbp-C8h]
  unsigned __int64 v45; // [rsp+40h] [rbp-C0h]
  __int64 v46; // [rsp+48h] [rbp-B8h]
  __int64 *v47; // [rsp+50h] [rbp-B0h]
  unsigned __int64 v48; // [rsp+58h] [rbp-A8h]
  _KPROCESS *v49; // [rsp+60h] [rbp-A0h]
  __int128 v50; // [rsp+68h] [rbp-98h] BYREF
  __int64 v51; // [rsp+78h] [rbp-88h]
  unsigned __int64 v52; // [rsp+80h] [rbp-80h]
  _QWORD v53[22]; // [rsp+90h] [rbp-70h] BYREF

  v3 = 0LL;
  v47 = a3;
  v43[1] = 0;
  v48 = 0LL;
  Process = KeGetCurrentThread()->ApcState.Process;
  v49 = Process;
  *a3 = 0LL;
  v43[0] = 0;
  v7 = (__int64)&Process[1].ActiveProcessorsPadding[6];
  v8 = Process[1].IdealProcessorPadding[10] & 7;
  v46 = v7;
  if ( v8 >= 6u )
  {
    CurrentIrql = KeGetCurrentIrql();
    v42 = CurrentIrql;
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
      v9 = &dword_140C4F600;
    else
      v9 = (LONG *)(v7 + 192);
    v10 = KeGetCurrentIrql();
    __writecr8(2uLL);
    if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && v10 <= 0xFu )
    {
      v35 = KeGetCurrentPrcb()->SchedulerAssist;
      v35[5] |= (-1 << (v10 + 1)) & 4;
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
          v36 = v12[6];
          v12[6] = v36 + 1;
          if ( v36 == -1 )
            KiRemoveSystemWorkPriorityKick(CurrentPrcb);
        }
      }
      _m_prefetchw(v9);
      v13 = *v9 & 0x7FFFFFFF;
      if ( v13 != _InterlockedCompareExchange(v9, v13 + 1, v13) )
      {
        v32 = CurrentPrcb->SchedulerAssist;
        if ( v32 )
        {
          if ( CurrentPrcb->NestingLevel <= 1u )
          {
            v37 = v32[6] - 1;
            v32[6] = v37;
            if ( !v37 )
              KiRemoveSystemWorkPriorityKick(CurrentPrcb);
          }
        }
        ExpWaitForSpinLockSharedAndAcquire(v9, v10);
      }
    }
    if ( v9[1] )
      _InterlockedExchange(v9 + 1, 0);
    v42 = v10;
  }
  v14 = 0;
  v41 = 0;
  v15 = ((a1 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  v52 = v15;
  v16 = ((a2 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  while ( 1 )
  {
    v44 = 0LL;
    v17 = 0LL;
    v45 = 0LL;
    v18 = 0LL;
    v19 = v15;
    if ( v15 <= v16 )
    {
      v20 = 0LL;
      v51 = 0LL;
      while ( 1 )
      {
        v50 = 0LL;
        memset((char *)v53 + 2, 0, 0xAEuLL);
        LOWORD(v53[0]) = 2145;
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
          v7 = v46;
        }
        if ( v22 >= 0xFFFF800000000000uLL && (v22 < qword_140C4F9B8 || v22 > qword_140C4E1E8) )
          AnyMultiplexedVm = MiGetAnyMultiplexedVm(1);
        else
          AnyMultiplexedVm = (char *)&KeGetCurrentThread()->ApcState.Process[1].ActiveProcessorsPadding[6];
        v24 = MiFastLockLeafPageTable((__int64)AnyMultiplexedVm, v21, 0);
        if ( v24 )
        {
          LODWORD(v50) = v24 - 1;
          v26 = ((v21 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
          *((_QWORD *)&v50 + 1) = v26;
        }
        else
        {
          LOWORD(v53[0]) |= 4u;
          v53[21] = &v50;
          v53[2] = 0LL;
          v53[3] = AnyMultiplexedVm;
          BYTE2(v53[0]) = BYTE2(v53[0]) & 0xE3 | 4;
          v53[20] = MiGetNextPageTableTail;
          BYTE6(v53[0]) = v42;
          v53[4] = v21;
          v53[5] = (__int64)(v16 << 25) >> 16;
          MiWalkPageTables((__int64)v53);
          v26 = *((_QWORD *)&v50 + 1);
        }
        if ( v26 )
        {
          if ( v26 == v19 )
          {
            v27 = v16;
            if ( (v19 & 0xFFFFFFFFFFFFF000uLL) + 4088 <= v16 )
              v27 = (v19 & 0xFFFFFFFFFFFFF000uLL) + 4088;
            if ( v19 <= v27 )
            {
              do
              {
                v28 = *(_QWORD *)v19;
                if ( v19 >= 0xFFFFF6FB7DBED000uLL && v19 <= 0xFFFFF6FB7DBED7F8uLL && (MiFlags & 0xC00000) != 0 )
                {
                  v25 = KeGetCurrentThread()->ApcState.Process;
                  if ( v25->AddressPolicy != 1 && (v28 & 1) != 0 && ((v28 & 0x20) == 0 || (v28 & 0x42) == 0) )
                  {
                    v25 = KeGetCurrentThread()->ApcState.Process;
                    Flink = v25[1].ProcessListEntry.Flink;
                    if ( Flink )
                    {
                      v39 = *((_QWORD *)&Flink->Flink + ((v19 >> 3) & 0x1FF));
                      v40 = v28 | 0x20;
                      v25 = (_KPROCESS *)(unsigned __int8)v39;
                      LOBYTE(v25) = v39 & 0x20;
                      if ( (v39 & 0x20) == 0 )
                        v40 = *(_QWORD *)v19;
                      v28 = v40;
                      if ( (v39 & 0x42) != 0 )
                        v28 = v40 | 0x42;
                    }
                  }
                }
                if ( !v28 )
                  MiMakeHyperPteDemandZero(v19, v25, v43);
                v19 += 8LL;
              }
              while ( (v19 & 0xFFF) != 0 && v19 <= v27 );
              v7 = v46;
              v3 = 0LL;
            }
            MiUnlockPageTableInternal(v7);
            goto LABEL_36;
          }
          MiUnlockPageTableInternal(v7);
          v31 = v26 - 8;
        }
        else
        {
          v31 = v16;
        }
        MiFillHyperPtes(v19, v31, v42, (__int64)v43);
        v19 = v31 + 8;
LABEL_36:
        v20 = v51;
        if ( v19 > v16 )
        {
          v17 = v45;
          v18 = v44;
          v14 = v41;
          break;
        }
      }
    }
    if ( v14 || !v18 )
      break;
    MiUnlockWorkingSetShared(v7, v42);
    v48 = v17;
    result = MiChargeFullProcessCommitment(v49, v18 + v17);
    if ( (int)result < 0 )
      return result;
    v43[0] = 1;
    *v47 = v18;
    MiLockWorkingSetShared(v7);
    v15 = v52;
    v14 = 1;
    v41 = 1;
  }
  if ( v17 )
  {
    _InterlockedExchangeAdd64((volatile signed __int64 *)MiGetSharedVm(v7) + 6, v17);
    v17 = v45;
    v18 = v44;
  }
  MiUnlockWorkingSetShared(v7, v42);
  v29 = *v47;
  if ( v18 != *v47 )
  {
    *v47 = v18;
    v3 = v29 - v18;
  }
  if ( v17 != v48 )
    v3 += v48 - v17;
  if ( v3 )
    MiReturnFullProcessCommitment(v49, v3);
  return 0LL;
}
