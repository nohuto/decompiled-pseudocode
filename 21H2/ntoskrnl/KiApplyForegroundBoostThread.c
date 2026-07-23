/*
 * XREFs of KiApplyForegroundBoostThread @ 0x14029B3DC
 * Callers:
 *     KeSetPriorityAndQuantumProcess @ 0x14029AC94 (KeSetPriorityAndQuantumProcess.c)
 *     KiProcessPendingForegroundBoosts @ 0x14029B220 (KiProcessPendingForegroundBoosts.c)
 * Callees:
 *     KiSendSoftwareInterrupt @ 0x140211D5C (KiSendSoftwareInterrupt.c)
 *     KiReleaseThreadStateLock @ 0x14029B7D0 (KiReleaseThreadStateLock.c)
 *     KiPrepareReadyThreadForRescheduling @ 0x14029B830 (KiPrepareReadyThreadForRescheduling.c)
 *     KiInsertDeferredReadyList @ 0x14029B890 (KiInsertDeferredReadyList.c)
 *     KiRemoveThreadFromAnyReadyQueue @ 0x14029B8C0 (KiRemoveThreadFromAnyReadyQueue.c)
 *     KiSelectReadyThreadEx @ 0x1402D4710 (KiSelectReadyThreadEx.c)
 *     KiUpdateSharedReadyQueueAffinityThread @ 0x1402D5640 (KiUpdateSharedReadyQueueAffinityThread.c)
 *     KiUpdateThreadPriority @ 0x1402D56A0 (KiUpdateThreadPriority.c)
 *     KiAcquireThreadStateLock @ 0x1402D5790 (KiAcquireThreadStateLock.c)
 *     KiIsThreadRankNonZero @ 0x1402F1CA0 (KiIsThreadRankNonZero.c)
 *     KiSetSchedulerAssistPriority @ 0x140520B94 (KiSetSchedulerAssistPriority.c)
 */

char __fastcall KiApplyForegroundBoostThread(__int64 a1, __int64 a2)
{
  char v3; // si
  char v5; // al
  __int64 CurrentPrcb; // rcx
  __int64 v7; // rbx
  __int64 v9; // r9
  char v10; // dl
  int v11; // r13d
  __int64 v12; // rcx
  int *v13; // rax
  int v14; // edx
  int v15; // eax
  __int64 v16; // rdx
  __int64 v17; // rcx
  unsigned int v18; // eax
  __int64 v19; // rax
  __int64 v20; // rsi
  char v21; // cl
  __int64 v22; // rax
  __int64 v23; // rdx
  bool v24; // zf
  char v25; // al
  __int64 *v26; // r12
  __int64 v27; // r14
  bool v28; // cc
  __int64 ready; // rax
  __int64 v30; // rsi
  char v31; // cl
  __int64 v32; // rax
  __int64 v33; // rdx
  bool v34; // zf
  char IsThreadRankNonZero; // al
  int v36; // esi
  int v37; // r15d
  __int64 v38; // [rsp+20h] [rbp-10h] BYREF
  char v39; // [rsp+80h] [rbp+50h]
  __int64 v40; // [rsp+88h] [rbp+58h] BYREF

  v40 = 0LL;
  v38 = 0LL;
  v3 = 0;
  v5 = KiAcquireThreadStateLock(a1, &v40, &v38);
  if ( ((unsigned __int8)(v5 - 1) <= 2u || v5 == 7) && *(_BYTE *)(*(_QWORD *)(a1 + 544) + 1850LL) == 2 )
  {
    if ( *(_BYTE *)(a1 + 564) )
      goto LABEL_13;
    if ( (*(_DWORD *)(a1 + 120) & 8) != 0 )
      goto LABEL_13;
    CurrentPrcb = (unsigned int)*(char *)(a1 + 195);
    if ( *(char *)(a1 + 195) <= 0 )
      goto LABEL_13;
    v9 = 15LL;
    v10 = PsPrioritySeparation + *(_BYTE *)(a1 + 563);
    if ( v10 >= 16 )
      v10 = 15;
    if ( v10 <= *(char *)(a1 + 195) )
    {
LABEL_13:
      v7 = v40;
      goto LABEL_14;
    }
    v11 = 0;
    v36 = v10;
    v37 = *(char *)(a1 + 195);
    v39 = 0;
    *(_BYTE *)(a1 + 564) = (v10 - *(_BYTE *)(a1 + 195)) & 0xF;
    switch ( v5 )
    {
      case 1:
        v7 = v40;
        KiRemoveThreadFromAnyReadyQueue(v40, v38, a1, (unsigned int)CurrentPrcb);
        KiUpdateThreadPriority(0LL, a1, (unsigned int)v36, 0LL);
        KiPrepareReadyThreadForRescheduling(a1, (unsigned int)v36, a2);
        goto LABEL_17;
      case 2:
        v7 = v40;
        v26 = (__int64 *)(v40 + 16);
        v27 = *(_QWORD *)(v40 + 16);
        LOBYTE(v9) = v27 == 0;
        KiUpdateThreadPriority(v40, a1, (unsigned int)v10, v9);
        v28 = v36 <= v37;
        if ( v36 < v37 )
        {
          if ( !v27 )
          {
            v7 = v40;
            if ( *(_BYTE *)(a1 + 388) == 2 )
            {
              ready = KiSelectReadyThreadEx(v40, a1);
              v30 = ready;
              if ( !ready )
                goto LABEL_17;
              if ( (*(_BYTE *)(ready + 2) & 4) != 0 )
              {
                IsThreadRankNonZero = KiIsThreadRankNonZero(ready, v7);
                v31 = 1;
                if ( !IsThreadRankNonZero )
                  v31 = *(_BYTE *)(v30 + 195);
              }
              else
              {
                v31 = *(_BYTE *)(ready + 195);
              }
              **(_BYTE **)(v7 + 56) = v31;
              v32 = *(_QWORD *)(v7 + 33976);
              if ( v32 )
              {
                v33 = (unsigned int)KiVpThreadSystemWorkPriority;
                if ( v30 != *(_QWORD *)(v7 + 24) )
                  v33 = (unsigned int)v31;
                KiSetSchedulerAssistPriority(*(_QWORD *)(v7 + 33976), v33, 0LL);
                v32 = *(_QWORD *)(v7 + 33976);
              }
              v34 = v30 == *(_QWORD *)(v7 + 24);
              *v26 = v30;
              if ( v32 )
                *(_BYTE *)(v32 + 16) = v34;
              if ( *(_BYTE *)(v30 + 388) == 1 )
                *(_DWORD *)(v30 + 132) = *(_DWORD *)(v30 + 132) - *(_DWORD *)(v30 + 436) + MEMORY[0xFFFFF78000000320];
              *(_BYTE *)(v30 + 388) = 3;
              v39 = 1;
              goto LABEL_48;
            }
            if ( *(_DWORD *)(v40 + 31768) >> (v36 + 1) )
              *(_BYTE *)(a1 + 112) |= 0x10u;
            goto LABEL_17;
          }
          v28 = v36 <= v37;
        }
        if ( v28 )
          goto LABEL_17;
        if ( v27 )
          goto LABEL_17;
        v7 = v40;
        if ( *(_BYTE *)(a1 + 388) != 2 )
          goto LABEL_17;
        break;
      case 3:
        v7 = v40;
        LOBYTE(v9) = 1;
        KiUpdateThreadPriority(v40, a1, (unsigned int)v10, v9);
        if ( v36 < v37 )
        {
          v19 = KiSelectReadyThreadEx(v7, a1);
          v20 = v19;
          if ( v19 )
          {
            if ( (*(_BYTE *)(v19 + 2) & 4) != 0 )
            {
              v25 = KiIsThreadRankNonZero(v19, v7);
              v21 = 1;
              if ( !v25 )
                v21 = *(_BYTE *)(v20 + 195);
            }
            else
            {
              v21 = *(_BYTE *)(v19 + 195);
            }
            **(_BYTE **)(v7 + 56) = v21;
            v22 = *(_QWORD *)(v7 + 33976);
            if ( v22 )
            {
              v23 = (unsigned int)KiVpThreadSystemWorkPriority;
              if ( v20 != *(_QWORD *)(v7 + 24) )
                v23 = (unsigned int)v21;
              KiSetSchedulerAssistPriority(*(_QWORD *)(v7 + 33976), v23, 0LL);
              v22 = *(_QWORD *)(v7 + 33976);
            }
            v24 = v20 == *(_QWORD *)(v7 + 24);
            *(_QWORD *)(v7 + 16) = v20;
            if ( v22 )
              *(_BYTE *)(v22 + 16) = v24;
            if ( *(_BYTE *)(v20 + 388) == 1 )
              *(_DWORD *)(v20 + 132) = *(_DWORD *)(v20 + 132) - *(_DWORD *)(v20 + 436) + MEMORY[0xFFFFF78000000320];
            *(_BYTE *)(v20 + 388) = 3;
            KiInsertDeferredReadyList(a2, a1);
            goto LABEL_48;
          }
LABEL_17:
          KiUpdateSharedReadyQueueAffinityThread(0LL, a1);
          KiReleaseThreadStateLock(v12, v7, v38);
          if ( v39 )
          {
            v7 = v40;
            CurrentPrcb = *(unsigned int *)(v40 + 36);
            if ( KeGetPcr()->Prcb.Number != (_DWORD)CurrentPrcb )
              KiSendSoftwareInterrupt();
          }
          if ( v11 <= 0 )
            goto LABEL_21;
          CurrentPrcb = (__int64)KeGetCurrentPrcb();
          if ( (KiVelocityFlags & 2) != 0 )
          {
            v7 = v40;
            v13 = *(int **)(v40 + 33976);
            if ( !v13 || !*(_QWORD *)(CurrentPrcb + 33976) || CurrentPrcb == v40 || v11 < 8 )
              goto LABEL_21;
            v14 = *v13;
            v15 = *v13 & 0x40000;
            if ( (v14 & 0x100000) != 0 || v15 && (unsigned __int8)v14 < v11 )
            {
              v24 = HvlpVirtualProcessorsIdentityMapped == 0;
              v16 = *(_QWORD *)(CurrentPrcb + 33976);
              v7 = v40;
              *(_DWORD *)(v16 + 12) = 2;
              v17 = *(unsigned int *)(v7 + 36);
              if ( v24 )
                LODWORD(v17) = (unsigned __int8)HvlpVirtualProcessorMapping[2 * (unsigned int)v17 + 1] | ((unsigned __int8)HvlpVirtualProcessorMapping[2 * v17] << 6);
              *(_DWORD *)(v16 + 8) = v17;
              v18 = v17;
              CurrentPrcb = 1073742018LL;
              __writemsr(0x400000C2u, v18);
              goto LABEL_21;
            }
          }
          v7 = v40;
LABEL_21:
          v3 = 1;
LABEL_14:
          if ( v3 )
            return v3;
          goto LABEL_4;
        }
        break;
      default:
        KiUpdateThreadPriority(0LL, a1, (unsigned int)v10, 0LL);
LABEL_48:
        v7 = v40;
        goto LABEL_17;
    }
    v11 = v36;
    goto LABEL_17;
  }
  v7 = v40;
LABEL_4:
  KiReleaseThreadStateLock(CurrentPrcb, v7, v38);
  return v3;
}
