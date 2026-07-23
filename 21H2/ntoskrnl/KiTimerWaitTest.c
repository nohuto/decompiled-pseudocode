/*
 * XREFs of KiTimerWaitTest @ 0x1402EC640
 * Callers:
 *     KiResumeThread @ 0x140267870 (KiResumeThread.c)
 *     KiSetTimerEx @ 0x1402814E0 (KiSetTimerEx.c)
 *     KeSetTimerEx @ 0x1402816A0 (KeSetTimerEx.c)
 *     KiProcessExpiredTimerList @ 0x1402EC2F0 (KiProcessExpiredTimerList.c)
 *     ExpSetTimerObject @ 0x1402EDC70 (ExpSetTimerObject.c)
 *     KiCommitThreadWait @ 0x140350D00 (KiCommitThreadWait.c)
 *     KiAdjustTimerDueTimes @ 0x14039E2BC (KiAdjustTimerDueTimes.c)
 * Callees:
 *     PsTimerResolutionActive @ 0x1402818E4 (PsTimerResolutionActive.c)
 *     KiInsertQueueDpc @ 0x1402C4660 (KiInsertQueueDpc.c)
 *     KiWakeOtherQueueWaiters @ 0x1402E7B60 (KiWakeOtherQueueWaiters.c)
 *     KiAcquireKobjectLockSafe @ 0x1402F0CF0 (KiAcquireKobjectLockSafe.c)
 *     KiWakeQueueWaiter @ 0x1402F0D40 (KiWakeQueueWaiter.c)
 *     KiTryUnwaitThread @ 0x14034D570 (KiTryUnwaitThread.c)
 *     KiInsertTimerTable @ 0x140352D50 (KiInsertTimerTable.c)
 *     KeIsThreadRunning @ 0x140513294 (KeIsThreadRunning.c)
 *     EtwTraceEnqueueWork @ 0x1405A79F0 (EtwTraceEnqueueWork.c)
 */

ULONG_PTR __fastcall KiTimerWaitTest(__int64 a1, __int64 a2, unsigned int *a3)
{
  char v3; // bp
  __int16 v4; // r9
  __int64 v5; // rax
  char v7; // bp
  unsigned int *v9; // r12
  ULONG_PTR v10; // rsi
  unsigned __int8 v11; // r15
  __int64 v12; // rbx
  unsigned __int64 v13; // r14
  __int64 *v14; // r8
  __int64 *v15; // rdx
  int v16; // r9d
  _QWORD *v17; // r14
  _QWORD *v18; // rbx
  _QWORD *v20; // rbp
  char v21; // al
  __int64 v22; // r8
  _QWORD *v23; // rax
  _QWORD *v24; // rdx
  _QWORD *v25; // rcx
  char v26; // al
  bool v27; // zf
  unsigned __int8 CurrentIrql; // dl
  _KTHREAD *CurrentThread; // r9
  _QWORD *v30; // rdx
  __int64 v31; // rcx
  char v32; // al
  bool v33; // cc
  __int64 *v34; // rax
  int v35; // r9d
  _QWORD *v36; // r8
  unsigned __int8 IsThreadRunning; // al
  __int64 v38; // r9
  _DWORD *SchedulerAssist; // r9
  unsigned __int8 v40; // cl
  _KTHREAD *v41; // r9
  _QWORD *v42; // r9
  __int64 v43; // rcx
  int v44; // r10d
  _QWORD *v45; // r8
  char v46; // al
  _DWORD *v47; // r9
  unsigned __int8 v48; // al
  __int64 v49; // rdx
  __int64 v50; // r9
  unsigned int v51; // ecx
  struct _KPRCB *CurrentPrcb; // [rsp+38h] [rbp-70h]
  struct _KPRCB *v53; // [rsp+38h] [rbp-70h]
  __int64 v54; // [rsp+40h] [rbp-68h] BYREF
  _KTHREAD *v55; // [rsp+48h] [rbp-60h]
  __int128 v56; // [rsp+50h] [rbp-58h]
  __int64 v57; // [rsp+60h] [rbp-48h]
  __int64 v58; // [rsp+B8h] [rbp+10h]
  __int64 v59; // [rsp+B8h] [rbp+10h]
  _QWORD *v61; // [rsp+C8h] [rbp+20h]

  v3 = *(_BYTE *)a2;
  v4 = 0;
  v57 = 0LL;
  v5 = *(int *)(a2 + 60);
  v7 = v3 & 0x7F;
  v54 = 0LL;
  v9 = a3;
  v10 = KiWaitAlways ^ _byteswap_uint64(a2 ^ __ROL8__(*(_QWORD *)(a2 + 48) ^ KiWaitNever, KiWaitNever));
  v11 = -1;
  v56 = 0LL;
  if ( (_DWORD)v5 )
  {
    v12 = -10000 * v5;
    v11 = 0;
    if ( *(_BYTE *)(a1 + 12586) )
    {
      if ( ++*(_DWORD *)(a1 + 32420) >= 0xBB8u )
      {
        v51 = *(_DWORD *)(a1 + 32424);
        *(_DWORD *)(a1 + 32420) = 0;
        if ( v51 < 0x5F5E100 )
          *(_DWORD *)(a1 + 32424) = KeTimeIncrement + v51;
      }
      v12 -= *(unsigned int *)(a1 + 32424);
    }
    if ( v12 + MEMORY[0xFFFFF78000000008] - *(_QWORD *)(a2 + 24) >= 0 )
      *(_QWORD *)(a2 + 24) = MEMORY[0xFFFFF78000000008];
    v13 = 0LL;
    LODWORD(v56) = *(_DWORD *)a2;
    if ( BYTE1(v56) >= 4u )
      v13 = (unsigned __int64)(BYTE1(v56) & 0xFC) << 16;
    if ( (KiVelocityFlags & 0x2000) != 0 )
    {
      v14 = *(__int64 **)(a2 + 8);
      *(_WORD *)(a2 + 58) = 1;
      v15 = (__int64 *)(a2 + 8);
      if ( v14 == (__int64 *)(a2 + 8) )
        goto LABEL_9;
      while ( 1 )
      {
        v33 = *((_BYTE *)v14 + 16) <= 1u;
        v34 = v14;
        v14 = (__int64 *)*v14;
        if ( v33 && PsTimerResolutionActive(*(_QWORD *)(v34[3] + 544)) )
          break;
        if ( v14 == v15 )
          goto LABEL_9;
      }
    }
    *(_WORD *)(a2 + 58) = v4;
LABEL_9:
    BYTE1(v56) &= ~1u;
    BYTE3(v56) = 64;
    do
    {
      *(_QWORD *)(a2 + 24) -= v12;
      BYTE2(v56) = (v13 + *(_QWORD *)(a2 + 24)) >> 18;
      v16 = BYTE2(v56);
      *(_DWORD *)a2 = v56;
    }
    while ( !(unsigned __int8)KiInsertTimerTable(a1, a2, v10, v16, 0LL) );
    v9 = a3;
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
      v20 = v17;
      v17 = (_QWORD *)*v17;
      v21 = *((_BYTE *)v20 + 16);
      if ( v21 == 1 )
      {
        v22 = *((unsigned __int16 *)v20 + 9);
      }
      else
      {
        if ( v21 == 2 )
        {
          *((_BYTE *)v20 + 17) = 5;
          v58 = v20[3];
          *v20 = 0LL;
          CurrentIrql = KeGetCurrentIrql();
          __writecr8(2uLL);
          if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu )
          {
            SchedulerAssist = KeGetCurrentPrcb()->SchedulerAssist;
            SchedulerAssist[5] |= (-1 << (CurrentIrql + 1)) & 4;
          }
          CurrentPrcb = KeGetCurrentPrcb();
          CurrentThread = CurrentPrcb->CurrentThread;
          v55 = CurrentThread;
          if ( (DWORD1(PerfGlobalGroupMask) & 0x1000000) != 0 )
          {
            IsThreadRunning = KeIsThreadRunning(CurrentThread);
            EtwTraceEnqueueWork(v38, v20, IsThreadRunning);
          }
          KiAcquireKobjectLockSafe(v58);
          v30 = (_QWORD *)(v58 + 8);
          v31 = v58;
          if ( (_QWORD *)*v30 == v30
            || *(_DWORD *)(v58 + 40) >= *(_DWORD *)(v58 + 44)
            || v55->Queue == (_DISPATCHER_HEADER *volatile)v58 && v55->WaitReason == 15 )
          {
LABEL_56:
            v35 = *(_DWORD *)(v31 + 4);
            *(_DWORD *)(v31 + 4) = v35 + 1;
            v36 = *(_QWORD **)(v31 + 32);
            if ( *v36 != v31 + 24 )
              goto LABEL_32;
            *v20 = v31 + 24;
            v20[1] = v36;
            *v36 = v20;
            *(_QWORD *)(v31 + 32) = v20;
            if ( !v35 && (_QWORD *)*v30 != v30 )
            {
              KiWakeOtherQueueWaiters((__int64)CurrentPrcb, v31);
              v31 = v58;
            }
          }
          else
          {
            v32 = KiWakeQueueWaiter(CurrentPrcb, v58, v20);
            v31 = v58;
            if ( !v32 )
            {
              v30 = (_QWORD *)(v58 + 8);
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
      v24 = v17;
      v61 = v17;
      v17 = v23;
      v25 = (_QWORD *)v61[1];
      if ( (_QWORD *)v23[1] != v61 || (_QWORD *)*v25 != v24 )
LABEL_32:
        __fastfail(3u);
      *v25 = v23;
      v23[1] = v25;
      v26 = *((_BYTE *)v24 + 16);
      if ( v26 != 1 )
        break;
      if ( (unsigned __int8)KiTryUnwaitThread(a1, v24, *((unsigned __int16 *)v24 + 9), 0LL) )
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
    *((_BYTE *)v24 + 17) = 5;
    v59 = v24[3];
    *v24 = 0LL;
    v40 = KeGetCurrentIrql();
    __writecr8(2uLL);
    if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && v40 <= 0xFu )
    {
      v47 = KeGetCurrentPrcb()->SchedulerAssist;
      v47[5] |= (-1LL << (v40 + 1)) & 4;
    }
    v53 = KeGetCurrentPrcb();
    v41 = v53->CurrentThread;
    v55 = v41;
    if ( (DWORD1(PerfGlobalGroupMask) & 0x1000000) != 0 )
    {
      v48 = KeIsThreadRunning(v41);
      EtwTraceEnqueueWork(v50, v49, v48);
    }
    KiAcquireKobjectLockSafe(v59);
    v42 = (_QWORD *)(v59 + 8);
    v43 = v59;
    if ( (_QWORD *)*v42 != v42
      && *(_DWORD *)(v59 + 40) < *(_DWORD *)(v59 + 44)
      && (v55->Queue != (_DISPATCHER_HEADER *volatile)v59 || v55->WaitReason != 15) )
    {
      v46 = KiWakeQueueWaiter(v53, v59, v61);
      v43 = v59;
      if ( v46 )
        goto LABEL_77;
      v42 = (_QWORD *)(v59 + 8);
    }
    v44 = *(_DWORD *)(v43 + 4);
    *(_DWORD *)(v43 + 4) = v44 + 1;
    v45 = *(_QWORD **)(v43 + 32);
    if ( *v45 != v43 + 24 )
      goto LABEL_32;
    *v61 = v43 + 24;
    v61[1] = v45;
    *v45 = v61;
    *(_QWORD *)(v43 + 32) = v61;
    if ( !v44 && (_QWORD *)*v42 != v42 )
    {
      KiWakeOtherQueueWaiters((__int64)v53, v43);
      v43 = v59;
    }
LABEL_77:
    _InterlockedAnd((volatile signed __int32 *)v43, 0xFFFFFF7F);
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
      v9 = (unsigned int *)&v54;
      v54 = MEMORY[0xFFFFF78000000014];
    }
    KiInsertQueueDpc(v10, *v9, v9[1], (volatile signed __int32 *)a2, v11);
    return 0LL;
  }
LABEL_21:
  _InterlockedAnd((volatile signed __int32 *)a2, ~((v11 << 24) | 0x80));
  return v10;
}
