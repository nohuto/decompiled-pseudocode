/*
 * XREFs of KiTimerWaitTest @ 0x1402818D0
 * Callers:
 *     KiCommitThreadWait @ 0x14020BBE0 (KiCommitThreadWait.c)
 *     KeSetTimerEx @ 0x140210F50 (KeSetTimerEx.c)
 *     ExpSetTimerObject @ 0x140211420 (ExpSetTimerObject.c)
 *     KiProcessExpiredTimerList @ 0x140281580 (KiProcessExpiredTimerList.c)
 *     KiSetTimerEx @ 0x1402C90A0 (KiSetTimerEx.c)
 *     KiResumeThread @ 0x1402FA1B0 (KiResumeThread.c)
 *     KiAdjustTimerDueTimes @ 0x14039B3DC (KiAdjustTimerDueTimes.c)
 * Callees:
 *     KiInsertTimerTable @ 0x14020DC30 (KiInsertTimerTable.c)
 *     KiInsertQueueDpc @ 0x140214C20 (KiInsertQueueDpc.c)
 *     KiAcquireKobjectLockSafe @ 0x140280030 (KiAcquireKobjectLockSafe.c)
 *     KiWakeQueueWaiter @ 0x140280080 (KiWakeQueueWaiter.c)
 *     KiWakeOtherQueueWaiters @ 0x140282AC0 (KiWakeOtherQueueWaiters.c)
 *     KiTryUnwaitThread @ 0x140288BF0 (KiTryUnwaitThread.c)
 *     PsTimerResolutionActive @ 0x14033C2E0 (PsTimerResolutionActive.c)
 *     KeIsThreadRunning @ 0x14050DBE4 (KeIsThreadRunning.c)
 *     EtwTraceEnqueueWork @ 0x1405A22F0 (EtwTraceEnqueueWork.c)
 */

unsigned __int64 __fastcall KiTimerWaitTest(__int64 a1, __int64 a2, __int64 a3)
{
  char v3; // bp
  __int16 v4; // r9
  __int64 v5; // rax
  char v7; // bp
  unsigned int *v9; // r12
  unsigned __int64 v10; // rsi
  unsigned __int8 v11; // r15
  __int64 v12; // rbx
  unsigned __int64 v13; // r14
  __int64 *v14; // r8
  __int64 v15; // rdx
  unsigned int v16; // r9d
  _QWORD *v17; // r14
  _QWORD *v18; // rbx
  __int64 v20; // rbp
  char v21; // al
  __int64 v22; // r8
  _QWORD *v23; // rax
  __int64 v24; // rdx
  _QWORD *v25; // rcx
  char v26; // al
  bool v27; // zf
  __int64 CurrentIrql; // rdx
  __int64 CurrentThread; // r9
  _QWORD *v30; // rdx
  __int64 v31; // rcx
  char v32; // al
  bool v33; // cc
  __int64 *v34; // rax
  int v35; // r9d
  unsigned __int8 IsThreadRunning; // al
  __int64 v37; // r9
  _DWORD *SchedulerAssist; // r9
  unsigned __int8 v39; // cl
  __int64 v40; // r9
  _QWORD *v41; // r9
  __int64 v42; // rcx
  int v43; // r10d
  char v44; // al
  _DWORD *v45; // r9
  unsigned __int8 v46; // al
  __int64 v47; // rdx
  __int64 v48; // r9
  unsigned int v49; // ecx
  struct _KPRCB *CurrentPrcb; // [rsp+38h] [rbp-70h]
  struct _KPRCB *v51; // [rsp+38h] [rbp-70h]
  __int64 v52; // [rsp+40h] [rbp-68h] BYREF
  __int64 v53; // [rsp+48h] [rbp-60h]
  __int128 v54; // [rsp+50h] [rbp-58h]
  __int64 v55; // [rsp+60h] [rbp-48h]
  __int64 v56; // [rsp+B8h] [rbp+10h]
  __int64 v57; // [rsp+B8h] [rbp+10h]
  unsigned int *v58; // [rsp+C0h] [rbp+18h]
  _QWORD *v59; // [rsp+C8h] [rbp+20h]

  v58 = (unsigned int *)a3;
  v3 = *(_BYTE *)a2;
  v4 = 0;
  v55 = 0LL;
  v5 = *(int *)(a2 + 60);
  v7 = v3 & 0x7F;
  v52 = 0LL;
  v9 = (unsigned int *)a3;
  v10 = KiWaitAlways ^ _byteswap_uint64(a2 ^ __ROL8__(*(_QWORD *)(a2 + 48) ^ KiWaitNever, KiWaitNever));
  v11 = -1;
  v54 = 0LL;
  if ( (_DWORD)v5 )
  {
    v12 = -10000 * v5;
    v11 = 0;
    if ( *(_BYTE *)(a1 + 12586) )
    {
      if ( ++*(_DWORD *)(a1 + 32420) >= 0xBB8u )
      {
        v49 = *(_DWORD *)(a1 + 32424);
        *(_DWORD *)(a1 + 32420) = 0;
        if ( v49 < 0x5F5E100 )
          *(_DWORD *)(a1 + 32424) = KeTimeIncrement + v49;
      }
      v12 -= *(unsigned int *)(a1 + 32424);
    }
    if ( v12 + MEMORY[0xFFFFF78000000008] - *(_QWORD *)(a2 + 24) >= 0 )
      *(_QWORD *)(a2 + 24) = MEMORY[0xFFFFF78000000008];
    v13 = 0LL;
    LODWORD(v54) = *(_DWORD *)a2;
    if ( BYTE1(v54) >= 4u )
      v13 = (unsigned __int64)(BYTE1(v54) & 0xFC) << 16;
    if ( (KiVelocityFlags & 0x2000) != 0 )
    {
      v14 = *(__int64 **)(a2 + 8);
      *(_WORD *)(a2 + 58) = 1;
      v15 = a2 + 8;
      if ( v14 == (__int64 *)(a2 + 8) )
        goto LABEL_9;
      while ( 1 )
      {
        v33 = *((_BYTE *)v14 + 16) <= 1u;
        v34 = v14;
        v14 = (__int64 *)*v14;
        if ( v33 )
        {
          if ( (unsigned __int8)PsTimerResolutionActive(*(_QWORD *)(v34[3] + 544), v15) )
            break;
        }
        if ( v14 == (__int64 *)v15 )
          goto LABEL_9;
      }
    }
    *(_WORD *)(a2 + 58) = v4;
LABEL_9:
    BYTE1(v54) &= ~1u;
    BYTE3(v54) = 64;
    do
    {
      *(_QWORD *)(a2 + 24) -= v12;
      BYTE2(v54) = (v13 + *(_QWORD *)(a2 + 24)) >> 18;
      v16 = BYTE2(v54);
      *(_DWORD *)a2 = v54;
    }
    while ( !KiInsertTimerTable(a1, a2, v10, v16, 0LL) );
    v9 = v58;
  }
  v17 = *(_QWORD **)(a2 + 8);
  v18 = (_QWORD *)(a2 + 8);
  *(_DWORD *)(a2 + 4) = 1;
  if ( v7 == 8 )
  {
    if ( v17 == v18 )
    {
LABEL_14:
      *(_QWORD *)(a2 + 16) = a2 + 8;
      *v18 = v18;
      goto LABEL_15;
    }
    while ( 1 )
    {
      v20 = (__int64)v17;
      v17 = (_QWORD *)*v17;
      v21 = *(_BYTE *)(v20 + 16);
      if ( v21 == 1 )
      {
        v22 = *(unsigned __int16 *)(v20 + 18);
      }
      else
      {
        if ( v21 == 2 )
        {
          *(_BYTE *)(v20 + 17) = 5;
          v56 = *(_QWORD *)(v20 + 24);
          *(_QWORD *)v20 = 0LL;
          CurrentIrql = KeGetCurrentIrql();
          __writecr8(2uLL);
          if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && (unsigned __int8)CurrentIrql <= 0xFu )
          {
            SchedulerAssist = KeGetCurrentPrcb()->SchedulerAssist;
            CurrentIrql = (-1LL << ((unsigned __int8)CurrentIrql + 1)) & 4;
            a3 = (unsigned int)CurrentIrql | SchedulerAssist[5];
            SchedulerAssist[5] = a3;
          }
          CurrentPrcb = KeGetCurrentPrcb();
          CurrentThread = (__int64)CurrentPrcb->CurrentThread;
          v53 = CurrentThread;
          if ( (DWORD1(PerfGlobalGroupMask) & 0x1000000) != 0 )
          {
            IsThreadRunning = KeIsThreadRunning(CurrentThread, CurrentIrql);
            EtwTraceEnqueueWork(v37, v20, IsThreadRunning);
          }
          KiAcquireKobjectLockSafe((volatile signed __int32 *)v56, CurrentIrql, a3, CurrentThread);
          v30 = (_QWORD *)(v56 + 8);
          v31 = v56;
          if ( (_QWORD *)*v30 == v30
            || *(_DWORD *)(v56 + 40) >= *(_DWORD *)(v56 + 44)
            || *(_QWORD *)(v53 + 232) == v56 && *(_BYTE *)(v53 + 643) == 15 )
          {
LABEL_56:
            v35 = *(_DWORD *)(v31 + 4);
            *(_DWORD *)(v31 + 4) = v35 + 1;
            a3 = *(_QWORD *)(v31 + 32);
            if ( *(_QWORD *)a3 != v31 + 24 )
              goto LABEL_32;
            *(_QWORD *)v20 = v31 + 24;
            *(_QWORD *)(v20 + 8) = a3;
            *(_QWORD *)a3 = v20;
            *(_QWORD *)(v31 + 32) = v20;
            if ( !v35 && (_QWORD *)*v30 != v30 )
            {
              KiWakeOtherQueueWaiters(CurrentPrcb, v31);
              v31 = v56;
            }
          }
          else
          {
            v32 = KiWakeQueueWaiter((__int64)CurrentPrcb, v56, v20);
            v31 = v56;
            if ( !v32 )
            {
              v30 = (_QWORD *)(v56 + 8);
              goto LABEL_56;
            }
          }
          _InterlockedAnd((volatile signed __int32 *)v31, 0xFFFFFF7F);
          goto LABEL_26;
        }
        v22 = 256LL;
      }
      KiTryUnwaitThread(a1, v20, v22, 0LL);
LABEL_26:
      if ( v17 == v18 )
        goto LABEL_14;
    }
  }
  if ( v17 != v18 )
  {
    while ( 1 )
    {
      v23 = (_QWORD *)*v17;
      v24 = (__int64)v17;
      v59 = v17;
      v17 = v23;
      v25 = (_QWORD *)v59[1];
      if ( (_QWORD *)v23[1] != v59 || *v25 != v24 )
LABEL_32:
        __fastfail(3u);
      *v25 = v23;
      v23[1] = v25;
      v26 = *(_BYTE *)(v24 + 16);
      if ( v26 != 1 )
        break;
      if ( (unsigned __int8)KiTryUnwaitThread(a1, v24, *(unsigned __int16 *)(v24 + 18), 0LL) )
      {
        v27 = (*(_DWORD *)(a2 + 4))-- == 1;
        if ( v27 )
          goto LABEL_15;
      }
LABEL_39:
      if ( v17 == v18 )
        goto LABEL_15;
    }
    if ( v26 != 2 )
    {
      KiTryUnwaitThread(a1, v24, 256LL, 0LL);
      goto LABEL_39;
    }
    *(_BYTE *)(v24 + 17) = 5;
    v57 = *(_QWORD *)(v24 + 24);
    *(_QWORD *)v24 = 0LL;
    v39 = KeGetCurrentIrql();
    __writecr8(2uLL);
    if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && v39 <= 0xFu )
    {
      v45 = KeGetCurrentPrcb()->SchedulerAssist;
      a3 = (unsigned int)(-1LL << (v39 + 1)) & 4 | v45[5];
      v24 = (__int64)v59;
      v45[5] = a3;
    }
    v51 = KeGetCurrentPrcb();
    v40 = (__int64)v51->CurrentThread;
    v53 = v40;
    if ( (DWORD1(PerfGlobalGroupMask) & 0x1000000) != 0 )
    {
      v46 = KeIsThreadRunning(v40, v24);
      EtwTraceEnqueueWork(v48, v47, v46);
    }
    KiAcquireKobjectLockSafe((volatile signed __int32 *)v57, v24, a3, v40);
    v41 = (_QWORD *)(v57 + 8);
    v42 = v57;
    if ( (_QWORD *)*v41 != v41
      && *(_DWORD *)(v57 + 40) < *(_DWORD *)(v57 + 44)
      && (*(_QWORD *)(v53 + 232) != v57 || *(_BYTE *)(v53 + 643) != 15) )
    {
      v44 = KiWakeQueueWaiter((__int64)v51, v57, (__int64)v59);
      v42 = v57;
      if ( v44 )
        goto LABEL_77;
      v41 = (_QWORD *)(v57 + 8);
    }
    v43 = *(_DWORD *)(v42 + 4);
    *(_DWORD *)(v42 + 4) = v43 + 1;
    a3 = *(_QWORD *)(v42 + 32);
    if ( *(_QWORD *)a3 != v42 + 24 )
      goto LABEL_32;
    *v59 = v42 + 24;
    v59[1] = a3;
    *(_QWORD *)a3 = v59;
    *(_QWORD *)(v42 + 32) = v59;
    if ( !v43 && (_QWORD *)*v41 != v41 )
    {
      KiWakeOtherQueueWaiters(v51, v42);
      v42 = v57;
    }
LABEL_77:
    _InterlockedAnd((volatile signed __int32 *)v42, 0xFFFFFF7F);
    v27 = (*(_DWORD *)(a2 + 4))-- == 1;
    if ( v27 )
      goto LABEL_15;
    goto LABEL_39;
  }
LABEL_15:
  if ( v10 )
  {
    if ( v9 )
    {
      if ( (!KiSerializeTimerExpiration || *(_WORD *)(v10 + 2) < 0x500u)
        && (*(_BYTE *)v10 != 26 || !*(_BYTE *)(a1 + 12584)) )
      {
        *(_QWORD *)(a1 + 12512) = v10;
        if ( (*(_QWORD *)(a1 + 200) & *(_QWORD *)(v10 + 16)) == 0LL )
          _interlockedbittestandset64((volatile signed __int32 *)(v10 + 16), *(unsigned __int8 *)(a1 + 209));
        goto LABEL_21;
      }
    }
    else
    {
      v9 = (unsigned int *)&v52;
      v52 = MEMORY[0xFFFFF78000000014];
    }
    KiInsertQueueDpc(v10, *v9, v9[1], (volatile signed __int32 *)a2, v11);
    return 0LL;
  }
LABEL_21:
  _InterlockedAnd((volatile signed __int32 *)a2, ~((v11 << 24) | 0x80));
  return v10;
}
