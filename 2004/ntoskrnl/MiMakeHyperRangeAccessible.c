/*
 * XREFs of MiMakeHyperRangeAccessible @ 0x1402AD740
 * Callers:
 *     MiCommitPageTablesForVad @ 0x1406970B0 (MiCommitPageTablesForVad.c)
 *     MiExpandVadBitMap @ 0x1406B45F8 (MiExpandVadBitMap.c)
 *     MiExpandVadBitMapDown @ 0x1408CD824 (MiExpandVadBitMapDown.c)
 * Callees:
 *     MiWalkPageTables @ 0x140204BE0 (MiWalkPageTables.c)
 *     MiGetAnyMultiplexedVm @ 0x140250128 (MiGetAnyMultiplexedVm.c)
 *     MiMakeHyperPteDemandZero @ 0x1402537C4 (MiMakeHyperPteDemandZero.c)
 *     MiFillHyperPtes @ 0x14025397C (MiFillHyperPtes.c)
 *     MiUnlockPageTableInternal @ 0x140278B10 (MiUnlockPageTableInternal.c)
 *     MiFastLockLeafPageTable @ 0x1402A06B0 (MiFastLockLeafPageTable.c)
 *     MiUnlockWorkingSetShared @ 0x1402A1770 (MiUnlockWorkingSetShared.c)
 *     MiLockWorkingSetShared @ 0x1402AC150 (MiLockWorkingSetShared.c)
 *     MiGetSharedVm @ 0x1402AD3F0 (MiGetSharedVm.c)
 *     ExpWaitForSpinLockSharedAndAcquire @ 0x140329910 (ExpWaitForSpinLockSharedAndAcquire.c)
 *     __security_check_cookie @ 0x1403CCE60 (__security_check_cookie.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403EDAA4 (KiRemoveSystemWorkPriorityKick.c)
 *     memset @ 0x14040A280 (memset.c)
 *     ExpAcquireSpinLockSharedAtDpcLevelInstrumented @ 0x1405B06F4 (ExpAcquireSpinLockSharedAtDpcLevelInstrumented.c)
 *     MiReturnFullProcessCommitment @ 0x1405FAA28 (MiReturnFullProcessCommitment.c)
 *     MiChargeFullProcessCommitment @ 0x140696FE0 (MiChargeFullProcessCommitment.c)
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
  __int64 v25; // rdx
  __int64 v26; // r9
  unsigned __int64 v27; // rbx
  unsigned __int64 v28; // r14
  unsigned __int64 v29; // rbx
  __int64 v30; // rcx
  __int64 v31; // rax
  __int64 result; // rax
  unsigned __int64 v33; // rbx
  _DWORD *v34; // rcx
  unsigned __int8 CurrentIrql; // cl
  _DWORD *SchedulerAssist; // r9
  _DWORD *v37; // r9
  int v38; // eax
  int v39; // eax
  __int64 v40; // r8
  __int64 v41; // rax
  __int64 v42; // r8
  int v43; // [rsp+20h] [rbp-E0h]
  unsigned __int8 v44; // [rsp+28h] [rbp-D8h]
  _DWORD v45[2]; // [rsp+30h] [rbp-D0h] BYREF
  __int64 v46; // [rsp+38h] [rbp-C8h]
  unsigned __int64 v47; // [rsp+40h] [rbp-C0h]
  __int64 v48; // [rsp+48h] [rbp-B8h]
  __int64 *v49; // [rsp+50h] [rbp-B0h]
  unsigned __int64 v50; // [rsp+58h] [rbp-A8h]
  _KPROCESS *v51; // [rsp+60h] [rbp-A0h]
  __int128 v52; // [rsp+68h] [rbp-98h] BYREF
  __int64 v53; // [rsp+78h] [rbp-88h]
  unsigned __int64 v54; // [rsp+80h] [rbp-80h]
  _QWORD v55[22]; // [rsp+90h] [rbp-70h] BYREF

  v3 = 0LL;
  v49 = a3;
  v45[1] = 0;
  v50 = 0LL;
  Process = KeGetCurrentThread()->ApcState.Process;
  v51 = Process;
  *a3 = 0LL;
  v45[0] = 0;
  v7 = (__int64)&Process[1].ActiveProcessorsPadding[6];
  v8 = Process[1].IdealProcessorPadding[10] & 7;
  v48 = v7;
  if ( v8 >= 6u )
  {
    CurrentIrql = KeGetCurrentIrql();
    v44 = CurrentIrql;
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
      v9 = &dword_140C4F580;
    else
      v9 = (LONG *)(v7 + 192);
    v10 = KeGetCurrentIrql();
    __writecr8(2uLL);
    if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && v10 <= 0xFu )
    {
      v37 = KeGetCurrentPrcb()->SchedulerAssist;
      v37[5] |= (-1 << (v10 + 1)) & 4;
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
          v38 = v12[6];
          v12[6] = v38 + 1;
          if ( v38 == -1 )
            KiRemoveSystemWorkPriorityKick(CurrentPrcb);
        }
      }
      _m_prefetchw(v9);
      v13 = *v9 & 0x7FFFFFFF;
      if ( v13 != _InterlockedCompareExchange(v9, v13 + 1, v13) )
      {
        v34 = CurrentPrcb->SchedulerAssist;
        if ( v34 )
        {
          if ( CurrentPrcb->NestingLevel <= 1u )
          {
            v39 = v34[6] - 1;
            v34[6] = v39;
            if ( !v39 )
              KiRemoveSystemWorkPriorityKick(CurrentPrcb);
          }
        }
        ExpWaitForSpinLockSharedAndAcquire(v9, v10);
      }
    }
    if ( v9[1] )
      _InterlockedExchange(v9 + 1, 0);
    v44 = v10;
  }
  v14 = 0;
  v43 = 0;
  v15 = ((a1 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  v54 = v15;
  v16 = ((a2 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  while ( 1 )
  {
    v46 = 0LL;
    v17 = 0LL;
    v47 = 0LL;
    v18 = 0LL;
    v19 = v15;
    if ( v15 <= v16 )
    {
      v20 = 0LL;
      v53 = 0LL;
      while ( 1 )
      {
        v52 = 0LL;
        memset((char *)v55 + 2, 0, 0xAEuLL);
        LOWORD(v55[0]) = 2145;
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
          v7 = v48;
        }
        if ( v22 >= 0xFFFF800000000000uLL && (v22 < qword_140C4F938 || v22 > qword_140C4E168) )
          AnyMultiplexedVm = MiGetAnyMultiplexedVm(1);
        else
          AnyMultiplexedVm = (char *)&KeGetCurrentThread()->ApcState.Process[1].ActiveProcessorsPadding[6];
        v24 = MiFastLockLeafPageTable((__int64)AnyMultiplexedVm, v21, 0);
        if ( v24 )
        {
          LODWORD(v52) = v24 - 1;
          v27 = ((v21 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
          *((_QWORD *)&v52 + 1) = v27;
        }
        else
        {
          LOWORD(v55[0]) |= 4u;
          v55[21] = &v52;
          v55[2] = 0LL;
          v55[3] = AnyMultiplexedVm;
          BYTE2(v55[0]) = BYTE2(v55[0]) & 0xE3 | 4;
          v55[20] = MiGetNextPageTableTail;
          BYTE6(v55[0]) = v44;
          v55[4] = v21;
          v55[5] = (__int64)(v16 << 25) >> 16;
          MiWalkPageTables((__int16 *)v55);
          v27 = *((_QWORD *)&v52 + 1);
        }
        if ( v27 )
        {
          v28 = ((v27 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
          if ( v27 == v19 )
          {
            v29 = v16;
            if ( (v19 & 0xFFFFFFFFFFFFF000uLL) + 4088 <= v16 )
              v29 = (v19 & 0xFFFFFFFFFFFFF000uLL) + 4088;
            if ( v19 <= v29 )
            {
              do
              {
                v30 = *(_QWORD *)v19;
                if ( v19 >= 0xFFFFF6FB7DBED000uLL && v19 <= 0xFFFFF6FB7DBED7F8uLL && (MiFlags & 0xC00000) != 0 )
                {
                  v25 = (__int64)KeGetCurrentThread()->ApcState.Process;
                  if ( *(_BYTE *)(v25 + 912) != 1 && (v30 & 1) != 0 && ((v30 & 0x20) == 0 || (v30 & 0x42) == 0) )
                  {
                    v25 = (__int64)KeGetCurrentThread()->ApcState.Process;
                    v40 = *(_QWORD *)(v25 + 1928);
                    if ( v40 )
                    {
                      v41 = *(_QWORD *)(v40 + 8 * ((v19 >> 3) & 0x1FF));
                      v42 = v30 | 0x20;
                      v25 = (unsigned __int8)v41;
                      LOBYTE(v25) = v41 & 0x20;
                      if ( (v41 & 0x20) == 0 )
                        v42 = *(_QWORD *)v19;
                      v30 = v42;
                      if ( (v41 & 0x42) != 0 )
                        v30 = v42 | 0x42;
                    }
                  }
                }
                if ( !v30 )
                  MiMakeHyperPteDemandZero((__int64 *)v19, v25, (__int64)v45, v26);
                v19 += 8LL;
              }
              while ( (v19 & 0xFFF) != 0 && v19 <= v29 );
              v7 = v48;
              v3 = 0LL;
            }
            MiUnlockPageTableInternal(v7, v28);
            goto LABEL_36;
          }
          MiUnlockPageTableInternal(v7, ((v27 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL);
          v33 = v27 - 8;
        }
        else
        {
          v33 = v16;
        }
        MiFillHyperPtes(v19, v33, v44, (__int64)v45);
        v19 = v33 + 8;
LABEL_36:
        v20 = v53;
        if ( v19 > v16 )
        {
          v17 = v47;
          v18 = v46;
          v14 = v43;
          break;
        }
      }
    }
    if ( v14 || !v18 )
      break;
    MiUnlockWorkingSetShared(v7, v44);
    v50 = v17;
    result = MiChargeFullProcessCommitment(v51, v18 + v17);
    if ( (int)result < 0 )
      return result;
    v45[0] = 1;
    *v49 = v18;
    MiLockWorkingSetShared(v7);
    v15 = v54;
    v14 = 1;
    v43 = 1;
  }
  if ( v17 )
  {
    _InterlockedExchangeAdd64((volatile signed __int64 *)MiGetSharedVm(v7) + 6, v17);
    v17 = v47;
    v18 = v46;
  }
  MiUnlockWorkingSetShared(v7, v44);
  v31 = *v49;
  if ( v18 != *v49 )
  {
    *v49 = v18;
    v3 = v31 - v18;
  }
  if ( v17 != v50 )
    v3 += v50 - v17;
  if ( v3 )
    MiReturnFullProcessCommitment(v51);
  return 0LL;
}
