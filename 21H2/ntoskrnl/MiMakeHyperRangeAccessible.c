/*
 * XREFs of MiMakeHyperRangeAccessible @ 0x1402BFDE0
 * Callers:
 *     MiExpandVadBitMap @ 0x1406BFED0 (MiExpandVadBitMap.c)
 *     MiCommitPageTablesForVad @ 0x1406E8900 (MiCommitPageTablesForVad.c)
 *     MiExpandVadBitMapDown @ 0x1408D0F84 (MiExpandVadBitMapDown.c)
 * Callees:
 *     MiUnlockPageTableInternal @ 0x140202790 (MiUnlockPageTableInternal.c)
 *     ExpWaitForSpinLockSharedAndAcquire @ 0x140213930 (ExpWaitForSpinLockSharedAndAcquire.c)
 *     MiFillHyperPtes @ 0x14022C0EC (MiFillHyperPtes.c)
 *     MiMakeHyperPteDemandZero @ 0x14022C278 (MiMakeHyperPteDemandZero.c)
 *     MiWalkPageTables @ 0x1402ADBC0 (MiWalkPageTables.c)
 *     MiFastLockLeafPageTable @ 0x1402B2FD0 (MiFastLockLeafPageTable.c)
 *     MiUnlockWorkingSetShared @ 0x1402B4090 (MiUnlockWorkingSetShared.c)
 *     MiLockWorkingSetShared @ 0x1402BE5B0 (MiLockWorkingSetShared.c)
 *     MiGetSharedVm @ 0x1402BF850 (MiGetSharedVm.c)
 *     MiGetAnyMultiplexedVm @ 0x140307E4C (MiGetAnyMultiplexedVm.c)
 *     __security_check_cookie @ 0x1403D05D0 (__security_check_cookie.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403F3684 (KiRemoveSystemWorkPriorityKick.c)
 *     memset @ 0x140414300 (memset.c)
 *     ExpAcquireSpinLockSharedAtDpcLevelInstrumented @ 0x1405B5E94 (ExpAcquireSpinLockSharedAtDpcLevelInstrumented.c)
 *     MiChargeFullProcessCommitment @ 0x1406E8830 (MiChargeFullProcessCommitment.c)
 *     MiReturnFullProcessCommitment @ 0x140705C18 (MiReturnFullProcessCommitment.c)
 */

__int64 __fastcall MiMakeHyperRangeAccessible(unsigned __int64 a1, unsigned __int64 a2, __int64 *a3, _DWORD *a4)
{
  __int64 v4; // rdi
  _KPROCESS *Process; // rax
  __int64 v8; // r13
  unsigned __int8 v9; // al
  LONG *v10; // rbx
  unsigned __int8 v11; // r12
  struct _KPRCB *CurrentPrcb; // r15
  _DWORD *v13; // rcx
  signed __int32 v14; // ett
  int v15; // edx
  unsigned __int64 v16; // rcx
  unsigned __int64 v17; // r12
  unsigned __int64 v18; // rbx
  __int64 v19; // r14
  unsigned __int64 v20; // rsi
  __int64 v21; // r14
  unsigned __int64 v22; // rbx
  unsigned __int64 v23; // rcx
  unsigned __int64 *AnyMultiplexedVm; // r14
  int v25; // eax
  __int64 v26; // rdx
  unsigned __int64 v27; // rbx
  unsigned __int64 v28; // r14
  unsigned __int64 v29; // rbx
  __int64 v30; // rcx
  __int64 v31; // rax
  __int64 result; // rax
  unsigned __int64 v33; // rbx
  __int64 v34; // rdx
  __int64 v35; // r8
  _DWORD *v36; // r9
  _DWORD *v37; // rcx
  unsigned __int8 CurrentIrql; // cl
  _DWORD *SchedulerAssist; // r9
  int v40; // eax
  int v41; // eax
  __int64 v42; // r8
  __int64 v43; // rax
  __int64 v44; // r8
  int v45; // [rsp+20h] [rbp-E0h]
  unsigned __int8 v46; // [rsp+28h] [rbp-D8h]
  _DWORD v47[2]; // [rsp+30h] [rbp-D0h] BYREF
  __int64 v48; // [rsp+38h] [rbp-C8h]
  unsigned __int64 v49; // [rsp+40h] [rbp-C0h]
  __int64 v50; // [rsp+48h] [rbp-B8h]
  __int64 *v51; // [rsp+50h] [rbp-B0h]
  unsigned __int64 v52; // [rsp+58h] [rbp-A8h]
  _KPROCESS *v53; // [rsp+60h] [rbp-A0h]
  __int128 v54; // [rsp+68h] [rbp-98h] BYREF
  __int64 v55; // [rsp+78h] [rbp-88h]
  unsigned __int64 v56; // [rsp+80h] [rbp-80h]
  _QWORD v57[22]; // [rsp+90h] [rbp-70h] BYREF

  v4 = 0LL;
  v51 = a3;
  v47[1] = 0;
  v52 = 0LL;
  Process = KeGetCurrentThread()->ApcState.Process;
  v53 = Process;
  *a3 = 0LL;
  v47[0] = 0;
  v8 = (__int64)&Process[1].ActiveProcessorsPadding[6];
  v9 = Process[1].IdealProcessorPadding[10] & 7;
  v50 = v8;
  if ( v9 >= 6u )
  {
    CurrentIrql = KeGetCurrentIrql();
    v46 = CurrentIrql;
    __writecr8(2uLL);
    if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu )
    {
      SchedulerAssist = KeGetCurrentPrcb()->SchedulerAssist;
      SchedulerAssist[5] |= ~((unsigned __int8)(1LL << (CurrentIrql + 1)) - 1) & 4;
    }
  }
  else
  {
    if ( v9 == 2 )
      v10 = &dword_140C4F7C0;
    else
      v10 = (LONG *)(v8 + 192);
    v11 = KeGetCurrentIrql();
    __writecr8(2uLL);
    if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && v11 <= 0xFu )
    {
      a4 = KeGetCurrentPrcb()->SchedulerAssist;
      a3 = (__int64 *)((-1 << (v11 + 1)) & 4u | a4[5]);
      a4[5] = (_DWORD)a3;
    }
    if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
    {
      ExpAcquireSpinLockSharedAtDpcLevelInstrumented(v10, v11, a3, a4);
    }
    else
    {
      CurrentPrcb = KeGetCurrentPrcb();
      v13 = CurrentPrcb->SchedulerAssist;
      if ( v13 )
      {
        if ( CurrentPrcb->NestingLevel <= 1u )
        {
          v40 = v13[6];
          v13[6] = v40 + 1;
          if ( v40 == -1 )
            KiRemoveSystemWorkPriorityKick(CurrentPrcb);
        }
      }
      _m_prefetchw(v10);
      v14 = *v10 & 0x7FFFFFFF;
      if ( v14 != _InterlockedCompareExchange(v10, v14 + 1, v14) )
      {
        v37 = CurrentPrcb->SchedulerAssist;
        if ( v37 )
        {
          if ( CurrentPrcb->NestingLevel <= 1u )
          {
            v41 = v37[6] - 1;
            v37[6] = v41;
            if ( !v41 )
              KiRemoveSystemWorkPriorityKick(CurrentPrcb);
          }
        }
        ExpWaitForSpinLockSharedAndAcquire(v10, v11);
      }
    }
    if ( v10[1] )
      _InterlockedExchange(v10 + 1, 0);
    v46 = v11;
  }
  v15 = 0;
  v45 = 0;
  v16 = ((a1 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  v56 = v16;
  v17 = ((a2 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  while ( 1 )
  {
    v48 = 0LL;
    v18 = 0LL;
    v49 = 0LL;
    v19 = 0LL;
    v20 = v16;
    if ( v16 <= v17 )
    {
      v21 = 0LL;
      v55 = 0LL;
      while ( 1 )
      {
        v54 = 0LL;
        memset((char *)v57 + 2, 0, 0xAEuLL);
        LOWORD(v57[0]) = 2145;
        v22 = (__int64)((v20 << 25) - v21) >> 16;
        v23 = v22;
        if ( v22 >= 0xFFFFF68000000000uLL )
        {
          do
          {
            if ( v23 > 0xFFFFF6FFFFFFFFFFuLL )
              break;
            v23 = (__int64)((v23 << 25) - v21) >> 16;
          }
          while ( v23 >= 0xFFFFF68000000000uLL );
          v8 = v50;
        }
        if ( v23 >= 0xFFFF800000000000uLL && (v23 < qword_140C4FB78 || v23 > qword_140C4E3A8) )
          AnyMultiplexedVm = (unsigned __int64 *)MiGetAnyMultiplexedVm(1LL);
        else
          AnyMultiplexedVm = &KeGetCurrentThread()->ApcState.Process[1].ActiveProcessorsPadding[6];
        v25 = MiFastLockLeafPageTable((__int64)AnyMultiplexedVm, v22, 0);
        if ( v25 )
        {
          LODWORD(v54) = v25 - 1;
          v27 = ((v22 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
          *((_QWORD *)&v54 + 1) = v27;
        }
        else
        {
          LOWORD(v57[0]) |= 4u;
          v57[21] = &v54;
          v57[2] = 0LL;
          v57[3] = AnyMultiplexedVm;
          BYTE2(v57[0]) = BYTE2(v57[0]) & 0xE3 | 4;
          v57[20] = MiGetNextPageTableTail;
          BYTE6(v57[0]) = v46;
          v57[4] = v22;
          v57[5] = (__int64)(v17 << 25) >> 16;
          MiWalkPageTables((__int64)v57);
          v27 = *((_QWORD *)&v54 + 1);
        }
        if ( v27 )
        {
          v28 = ((v27 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
          if ( v27 == v20 )
          {
            v29 = v17;
            if ( (v20 & 0xFFFFFFFFFFFFF000uLL) + 4088 <= v17 )
              v29 = (v20 & 0xFFFFFFFFFFFFF000uLL) + 4088;
            if ( v20 <= v29 )
            {
              do
              {
                v30 = *(_QWORD *)v20;
                if ( v20 >= 0xFFFFF6FB7DBED000uLL && v20 <= 0xFFFFF6FB7DBED7F8uLL && (MiFlags & 0xC00000) != 0 )
                {
                  v26 = (__int64)KeGetCurrentThread()->ApcState.Process;
                  if ( *(_BYTE *)(v26 + 912) != 1 && (v30 & 1) != 0 && ((v30 & 0x20) == 0 || (v30 & 0x42) == 0) )
                  {
                    v26 = (__int64)KeGetCurrentThread()->ApcState.Process;
                    v42 = *(_QWORD *)(v26 + 1928);
                    if ( v42 )
                    {
                      v43 = *(_QWORD *)(v42 + 8 * ((v20 >> 3) & 0x1FF));
                      v44 = v30 | 0x20;
                      v26 = (unsigned __int8)v43;
                      LOBYTE(v26) = v43 & 0x20;
                      if ( (v43 & 0x20) == 0 )
                        v44 = *(_QWORD *)v20;
                      v30 = v44;
                      if ( (v43 & 0x42) != 0 )
                        v30 = v44 | 0x42;
                    }
                  }
                }
                if ( !v30 )
                  MiMakeHyperPteDemandZero((__int64 *)v20, v26, (__int64)v47);
                v20 += 8LL;
              }
              while ( (v20 & 0xFFF) != 0 && v20 <= v29 );
              v8 = v50;
              v4 = 0LL;
            }
            MiUnlockPageTableInternal(v8, v28);
            goto LABEL_36;
          }
          MiUnlockPageTableInternal(v8, ((v27 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL);
          v33 = v27 - 8;
        }
        else
        {
          v33 = v17;
        }
        MiFillHyperPtes(v20, v33, v46, (__int64)v47);
        v20 = v33 + 8;
LABEL_36:
        v21 = v55;
        if ( v20 > v17 )
        {
          v18 = v49;
          v19 = v48;
          v15 = v45;
          break;
        }
      }
    }
    if ( v15 || !v19 )
      break;
    MiUnlockWorkingSetShared(v8, v46);
    v52 = v18;
    result = MiChargeFullProcessCommitment(v53, v19 + v18);
    if ( (int)result < 0 )
      return result;
    v47[0] = 1;
    *v51 = v19;
    MiLockWorkingSetShared(v8, v34, v35, v36);
    v16 = v56;
    v15 = 1;
    v45 = 1;
  }
  if ( v18 )
  {
    _InterlockedExchangeAdd64((volatile signed __int64 *)MiGetSharedVm(v8) + 6, v18);
    v18 = v49;
    v19 = v48;
  }
  MiUnlockWorkingSetShared(v8, v46);
  v31 = *v51;
  if ( v19 != *v51 )
  {
    *v51 = v19;
    v4 = v31 - v19;
  }
  if ( v18 != v52 )
    v4 += v52 - v18;
  if ( v4 )
    MiReturnFullProcessCommitment(v53);
  return 0LL;
}
