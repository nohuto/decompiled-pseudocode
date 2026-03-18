/*
 * XREFs of KiTimerWaitTest @ 0x1402450F0
 * Callers:
 *     KiSetTimerEx @ 0x140236270 (KiSetTimerEx.c)
 *     KiProcessExpiredTimerList @ 0x140244DA0 (KiProcessExpiredTimerList.c)
 *     KiCommitThreadWait @ 0x140264C30 (KiCommitThreadWait.c)
 *     KeSetTimerEx @ 0x140269FA0 (KeSetTimerEx.c)
 *     ExpSetTimerObject @ 0x14026A470 (ExpSetTimerObject.c)
 *     KiResumeThread @ 0x140356190 (KiResumeThread.c)
 *     KiAdjustTimerDueTimes @ 0x14039AC4C (KiAdjustTimerDueTimes.c)
 * Callees:
 *     KiAcquireKobjectLockSafe @ 0x140243930 (KiAcquireKobjectLockSafe.c)
 *     KiWakeQueueWaiter @ 0x140243980 (KiWakeQueueWaiter.c)
 *     KiWakeOtherQueueWaiters @ 0x1402462E0 (KiWakeOtherQueueWaiters.c)
 *     KiTryUnwaitThread @ 0x14024C350 (KiTryUnwaitThread.c)
 *     KiInsertTimerTable @ 0x140266C80 (KiInsertTimerTable.c)
 *     KiInsertQueueDpc @ 0x14026DC70 (KiInsertQueueDpc.c)
 *     PsTimerResolutionActive @ 0x1402FF9E0 (PsTimerResolutionActive.c)
 *     KeIsThreadRunning @ 0x14050D594 (KeIsThreadRunning.c)
 *     EtwTraceEnqueueWork @ 0x1405A1C00 (EtwTraceEnqueueWork.c)
 */

ULONG_PTR __fastcall KiTimerWaitTest(__int64 a1, __int64 a2, __int64 a3)
{
  __int16 v3; // r9
  __int64 v4; // rax
  char v6; // bp
  __int64 v8; // r12
  ULONG_PTR v9; // rsi
  unsigned __int8 v10; // r15
  __int64 v11; // rbx
  unsigned __int64 v12; // r14
  __int64 *v13; // r8
  __int64 *v14; // rdx
  _QWORD *v15; // r14
  _QWORD *v16; // rbx
  __int64 v18; // rbp
  char v19; // al
  __int64 v20; // r8
  _QWORD *v21; // rax
  __int64 v22; // rdx
  _QWORD *v23; // rcx
  char v24; // al
  bool v25; // zf
  __int64 CurrentIrql; // rdx
  __int64 CurrentThread; // r9
  _QWORD *v28; // rdx
  __int64 v29; // rcx
  char v30; // al
  bool v31; // cc
  __int64 *v32; // rax
  int v33; // r9d
  unsigned __int8 IsThreadRunning; // al
  __int64 v35; // r9
  _DWORD *SchedulerAssist; // r9
  unsigned __int8 v37; // cl
  __int64 v38; // r9
  _QWORD *v39; // r9
  __int64 v40; // rcx
  int v41; // r10d
  char v42; // al
  _DWORD *v43; // r9
  unsigned __int8 v44; // al
  __int64 v45; // rdx
  __int64 v46; // r9
  unsigned int v47; // ecx
  struct _KPRCB *CurrentPrcb; // [rsp+38h] [rbp-70h]
  struct _KPRCB *v49; // [rsp+38h] [rbp-70h]
  __int64 v50; // [rsp+48h] [rbp-60h]
  __int64 v51; // [rsp+48h] [rbp-60h]
  int v52; // [rsp+50h] [rbp-58h]
  __int64 v53; // [rsp+B8h] [rbp+10h]
  __int64 v54; // [rsp+B8h] [rbp+10h]
  __int64 v55; // [rsp+C0h] [rbp+18h]
  _QWORD *v56; // [rsp+C8h] [rbp+20h]

  v55 = a3;
  v3 = 0;
  v4 = *(int *)(a2 + 60);
  v6 = *(_BYTE *)a2 & 0x7F;
  v8 = a3;
  v9 = KiWaitAlways ^ _byteswap_uint64(a2 ^ __ROL8__(*(_QWORD *)(a2 + 48) ^ KiWaitNever, KiWaitNever));
  v10 = -1;
  if ( (_DWORD)v4 )
  {
    v11 = -10000 * v4;
    v10 = 0;
    if ( *(_BYTE *)(a1 + 12586) )
    {
      if ( ++*(_DWORD *)(a1 + 32420) >= 0xBB8u )
      {
        v47 = *(_DWORD *)(a1 + 32424);
        *(_DWORD *)(a1 + 32420) = 0;
        if ( v47 < 0x5F5E100 )
          *(_DWORD *)(a1 + 32424) = KeTimeIncrement + v47;
      }
      v11 -= *(unsigned int *)(a1 + 32424);
    }
    if ( v11 + MEMORY[0xFFFFF78000000008] - *(_QWORD *)(a2 + 24) >= 0 )
      *(_QWORD *)(a2 + 24) = MEMORY[0xFFFFF78000000008];
    v12 = 0LL;
    v52 = *(_DWORD *)a2;
    if ( BYTE1(*(_DWORD *)a2) >= 4u )
      v12 = (unsigned __int64)((unsigned __int8)BYTE1(*(_DWORD *)a2) & 0xFC) << 16;
    if ( (KiVelocityFlags & 0x2000) != 0 )
    {
      v13 = *(__int64 **)(a2 + 8);
      *(_WORD *)(a2 + 58) = 1;
      v14 = (__int64 *)(a2 + 8);
      if ( v13 == (__int64 *)(a2 + 8) )
        goto LABEL_9;
      while ( 1 )
      {
        v31 = *((_BYTE *)v13 + 16) <= 1u;
        v32 = v13;
        v13 = (__int64 *)*v13;
        if ( v31 )
        {
          if ( (unsigned __int8)PsTimerResolutionActive(*(_QWORD *)(v32[3] + 544), v14, v13) )
            break;
        }
        if ( v13 == v14 )
          goto LABEL_9;
      }
    }
    *(_WORD *)(a2 + 58) = v3;
LABEL_9:
    BYTE1(v52) &= ~1u;
    HIBYTE(v52) = 64;
    do
    {
      *(_QWORD *)(a2 + 24) -= v11;
      BYTE2(v52) = (v12 + *(_QWORD *)(a2 + 24)) >> 18;
      *(_DWORD *)a2 = v52;
    }
    while ( !(unsigned __int8)KiInsertTimerTable(a1, a2, v9, BYTE2(v52), 0LL) );
    v8 = v55;
  }
  v15 = *(_QWORD **)(a2 + 8);
  v16 = (_QWORD *)(a2 + 8);
  *(_DWORD *)(a2 + 4) = 1;
  if ( v6 == 8 )
  {
    if ( v15 == v16 )
    {
LABEL_14:
      *(_QWORD *)(a2 + 16) = a2 + 8;
      *v16 = v16;
      goto LABEL_15;
    }
    while ( 1 )
    {
      v18 = (__int64)v15;
      v15 = (_QWORD *)*v15;
      v19 = *(_BYTE *)(v18 + 16);
      if ( v19 == 1 )
      {
        v20 = *(unsigned __int16 *)(v18 + 18);
      }
      else
      {
        if ( v19 == 2 )
        {
          *(_BYTE *)(v18 + 17) = 5;
          v53 = *(_QWORD *)(v18 + 24);
          *(_QWORD *)v18 = 0LL;
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
          v50 = CurrentThread;
          if ( (DWORD1(PerfGlobalGroupMask) & 0x1000000) != 0 )
          {
            IsThreadRunning = KeIsThreadRunning(CurrentThread, CurrentIrql);
            EtwTraceEnqueueWork(v35, v18, IsThreadRunning);
          }
          KiAcquireKobjectLockSafe((volatile signed __int32 *)v53, CurrentIrql, a3, CurrentThread);
          v28 = (_QWORD *)(v53 + 8);
          v29 = v53;
          if ( (_QWORD *)*v28 == v28
            || *(_DWORD *)(v53 + 40) >= *(_DWORD *)(v53 + 44)
            || *(_QWORD *)(v50 + 232) == v53 && *(_BYTE *)(v50 + 643) == 15 )
          {
LABEL_55:
            v33 = *(_DWORD *)(v29 + 4);
            *(_DWORD *)(v29 + 4) = v33 + 1;
            a3 = *(_QWORD *)(v29 + 32);
            if ( *(_QWORD *)a3 != v29 + 24 )
              goto LABEL_32;
            *(_QWORD *)v18 = v29 + 24;
            *(_QWORD *)(v18 + 8) = a3;
            *(_QWORD *)a3 = v18;
            *(_QWORD *)(v29 + 32) = v18;
            if ( !v33 && (_QWORD *)*v28 != v28 )
            {
              KiWakeOtherQueueWaiters(CurrentPrcb, v29);
              v29 = v53;
            }
          }
          else
          {
            v30 = KiWakeQueueWaiter((__int64)CurrentPrcb, v53, v18);
            v29 = v53;
            if ( !v30 )
            {
              v28 = (_QWORD *)(v53 + 8);
              goto LABEL_55;
            }
          }
          _InterlockedAnd((volatile signed __int32 *)v29, 0xFFFFFF7F);
          goto LABEL_26;
        }
        v20 = 256LL;
      }
      KiTryUnwaitThread(a1, v18, v20, 0LL);
LABEL_26:
      if ( v15 == v16 )
        goto LABEL_14;
    }
  }
  if ( v15 != v16 )
  {
    while ( 1 )
    {
      v21 = (_QWORD *)*v15;
      v22 = (__int64)v15;
      v56 = v15;
      v15 = v21;
      v23 = (_QWORD *)v56[1];
      if ( (_QWORD *)v21[1] != v56 || *v23 != v22 )
LABEL_32:
        __fastfail(3u);
      *v23 = v21;
      v21[1] = v23;
      v24 = *(_BYTE *)(v22 + 16);
      if ( v24 != 1 )
        break;
      if ( (unsigned __int8)KiTryUnwaitThread(a1, v22, *(unsigned __int16 *)(v22 + 18), 0LL) )
      {
        v25 = (*(_DWORD *)(a2 + 4))-- == 1;
        if ( v25 )
          goto LABEL_15;
      }
LABEL_38:
      if ( v15 == v16 )
        goto LABEL_15;
    }
    if ( v24 != 2 )
    {
      KiTryUnwaitThread(a1, v22, 256LL, 0LL);
      goto LABEL_38;
    }
    *(_BYTE *)(v22 + 17) = 5;
    v54 = *(_QWORD *)(v22 + 24);
    *(_QWORD *)v22 = 0LL;
    v37 = KeGetCurrentIrql();
    __writecr8(2uLL);
    if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && v37 <= 0xFu )
    {
      v43 = KeGetCurrentPrcb()->SchedulerAssist;
      a3 = (unsigned int)(-1LL << (v37 + 1)) & 4 | v43[5];
      v22 = (__int64)v56;
      v43[5] = a3;
    }
    v49 = KeGetCurrentPrcb();
    v38 = (__int64)v49->CurrentThread;
    v51 = v38;
    if ( (DWORD1(PerfGlobalGroupMask) & 0x1000000) != 0 )
    {
      v44 = KeIsThreadRunning(v38, v22);
      EtwTraceEnqueueWork(v46, v45, v44);
    }
    KiAcquireKobjectLockSafe((volatile signed __int32 *)v54, v22, a3, v38);
    v39 = (_QWORD *)(v54 + 8);
    v40 = v54;
    if ( (_QWORD *)*v39 != v39
      && *(_DWORD *)(v54 + 40) < *(_DWORD *)(v54 + 44)
      && (*(_QWORD *)(v51 + 232) != v54 || *(_BYTE *)(v51 + 643) != 15) )
    {
      v42 = KiWakeQueueWaiter((__int64)v49, v54, (__int64)v56);
      v40 = v54;
      if ( v42 )
        goto LABEL_76;
      v39 = (_QWORD *)(v54 + 8);
    }
    v41 = *(_DWORD *)(v40 + 4);
    *(_DWORD *)(v40 + 4) = v41 + 1;
    a3 = *(_QWORD *)(v40 + 32);
    if ( *(_QWORD *)a3 != v40 + 24 )
      goto LABEL_32;
    *v56 = v40 + 24;
    v56[1] = a3;
    *(_QWORD *)a3 = v56;
    *(_QWORD *)(v40 + 32) = v56;
    if ( !v41 && (_QWORD *)*v39 != v39 )
    {
      KiWakeOtherQueueWaiters(v49, v40);
      v40 = v54;
    }
LABEL_76:
    _InterlockedAnd((volatile signed __int32 *)v40, 0xFFFFFF7F);
    v25 = (*(_DWORD *)(a2 + 4))-- == 1;
    if ( v25 )
      goto LABEL_15;
    goto LABEL_38;
  }
LABEL_15:
  if ( v9 )
  {
    if ( !v8
      || KiSerializeTimerExpiration && *(_WORD *)(v9 + 2) >= 0x500u
      || *(_BYTE *)v9 == 26 && *(_BYTE *)(a1 + 12584) )
    {
      KiInsertQueueDpc(v9, v10);
      return 0LL;
    }
    *(_QWORD *)(a1 + 12512) = v9;
    if ( (*(_QWORD *)(a1 + 200) & *(_QWORD *)(v9 + 16)) == 0LL )
      _interlockedbittestandset64((volatile signed __int32 *)(v9 + 16), *(unsigned __int8 *)(a1 + 209));
  }
  _InterlockedAnd((volatile signed __int32 *)a2, ~((v10 << 24) | 0x80));
  return v9;
}
