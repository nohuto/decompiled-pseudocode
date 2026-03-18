/*
 * XREFs of MiModifiedPageWriter @ 0x1403BAE20
 * Callers:
 *     <none>
 * Callees:
 *     KeResetEvent @ 0x1402055D0 (KeResetEvent.c)
 *     ExAcquireSpinLockExclusive @ 0x14023C6E0 (ExAcquireSpinLockExclusive.c)
 *     KeQueryPriorityThread @ 0x14023EC20 (KeQueryPriorityThread.c)
 *     KiQueryUnbiasedInterruptTime @ 0x14023F4A4 (KiQueryUnbiasedInterruptTime.c)
 *     KeWaitForMultipleObjects @ 0x140243AA0 (KeWaitForMultipleObjects.c)
 *     KeSetEvent @ 0x14024A230 (KeSetEvent.c)
 *     KiLeaveGuardedRegionUnsafe @ 0x140260DE0 (KiLeaveGuardedRegionUnsafe.c)
 *     KeWaitForSingleObject @ 0x1402643F0 (KeWaitForSingleObject.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x14026B750 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     KeSetActualBasePriorityThread @ 0x14026C9E0 (KeSetActualBasePriorityThread.c)
 *     IoBoostThreadIoPriority @ 0x1402E33DC (IoBoostThreadIoPriority.c)
 *     MiMakePagefileWriterEntryAvailable @ 0x14031FDA4 (MiMakePagefileWriterEntryAvailable.c)
 *     MiStoreCheckCompleteWriteBatch @ 0x140321D80 (MiStoreCheckCompleteWriteBatch.c)
 *     MiStoreUpdateMemoryConditions @ 0x140336F38 (MiStoreUpdateMemoryConditions.c)
 *     MiUseLowIoPriorityForModifiedPages @ 0x140337094 (MiUseLowIoPriorityForModifiedPages.c)
 *     MiGatherPagefilePages @ 0x14034FAC8 (MiGatherPagefilePages.c)
 *     ExWaitForRundownProtectionRelease @ 0x1403560A0 (ExWaitForRundownProtectionRelease.c)
 *     MiInitializePagefileBitmapsCache @ 0x1403BBB84 (MiInitializePagefileBitmapsCache.c)
 *     __security_check_cookie @ 0x1403CC020 (__security_check_cookie.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403EC9E4 (KiRemoveSystemWorkPriorityKick.c)
 *     MiFreeModifiedReservations @ 0x14053DC04 (MiFreeModifiedReservations.c)
 */

LONG __fastcall MiModifiedPageWriter(__int64 a1, __int64 a2, __int64 a3, _DWORD *a4)
{
  struct _KTHREAD *CurrentThread; // rdi
  __int64 v6; // r14
  struct _KEVENT *v7; // r15
  struct _KEVENT *v8; // rsi
  struct _KEVENT *v9; // rbp
  NTSTATUS v10; // eax
  __int64 v11; // rdx
  __int64 v12; // r8
  __int64 v13; // r9
  __int64 *v14; // r14
  unsigned __int64 v15; // rcx
  unsigned __int64 v16; // r9
  unsigned __int64 v17; // r8
  int v18; // eax
  __int64 v19; // rdx
  __int64 v20; // r8
  _DWORD *v21; // r9
  unsigned int v22; // ebp
  int v23; // ecx
  __int64 v24; // rsi
  _QWORD *v25; // rax
  unsigned int v26; // eax
  __int64 v27; // r8
  _DWORD *v28; // r9
  unsigned int v29; // eax
  __int64 v30; // r9
  __int64 v31; // r11
  char v32; // al
  unsigned int v33; // r10d
  __int64 i; // rax
  _QWORD *v35; // rcx
  unsigned int v36; // ecx
  unsigned int v37; // eax
  unsigned __int64 v38; // r13
  __int64 v39; // r15
  __int64 v40; // r12
  __int64 v41; // rsi
  KIRQL v42; // al
  char v43; // dl
  unsigned __int64 v44; // r14
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  int v48; // eax
  bool v49; // zf
  __int64 v50; // rdx
  __int64 v51; // r8
  _DWORD *v52; // r9
  unsigned int v53; // eax
  __int64 v54; // rsi
  __int64 v55; // r15
  __int64 v56; // rax
  unsigned int j; // ebp
  _QWORD *v58; // r14
  signed __int32 v60[8]; // [rsp+0h] [rbp-228h] BYREF
  unsigned int v61; // [rsp+40h] [rbp-1E8h]
  unsigned __int64 v62; // [rsp+48h] [rbp-1E0h]
  struct _KTHREAD *v63; // [rsp+50h] [rbp-1D8h]
  PVOID Object[3]; // [rsp+58h] [rbp-1D0h] BYREF
  struct _KWAIT_BLOCK WaitBlockArray; // [rsp+70h] [rbp-1B8h] BYREF
  PVOID v66[6]; // [rsp+D0h] [rbp-158h] BYREF
  struct _KWAIT_BLOCK v67; // [rsp+100h] [rbp-128h] BYREF

  CurrentThread = KeGetCurrentThread();
  *(_QWORD *)(a1 + 944) = CurrentThread;
  v63 = CurrentThread;
  *((_DWORD *)&CurrentThread[1].SwapListEntry + 3) |= 2u;
  v61 = KeSetActualBasePriorityThread((__int64)CurrentThread, 18LL, a3, a4);
  v6 = a1 + 104;
  v66[2] = (PVOID)(a1 + 920);
  Object[0] = (PVOID)(a1 + 104);
  v66[0] = (PVOID)(a1 + 104);
  v7 = (struct _KEVENT *)(a1 + 880);
  Object[1] = (PVOID)(a1 + 736);
  v8 = (struct _KEVENT *)(a1 + 696);
  v66[1] = (PVOID)(a1 + 880);
  v9 = (struct _KEVENT *)(a1 + 1008);
  v66[3] = (PVOID)(a1 + 696);
  v66[4] = (PVOID)(a1 + 1008);
LABEL_2:
  *(_QWORD *)(a1 + 840) = 0LL;
  *(_DWORD *)(a1 + 848) = 0;
  *(_BYTE *)(a1 + 674) = 0;
  MiStoreCheckCompleteWriteBatch(a1);
  v10 = KeWaitForMultipleObjects(2u, Object, WaitAny, WrPageOut, 0, 0, 0LL, &WaitBlockArray);
  *(_BYTE *)(a1 + 674) = 1;
  if ( v10 )
  {
    while ( 1 )
    {
      if ( *(_DWORD *)(v6 + 4) )
        goto LABEL_75;
      if ( !*(_QWORD *)(a1 + 7600) )
        goto LABEL_2;
      --CurrentThread->SpecialApcDisable;
      MiStoreCheckCompleteWriteBatch(a1);
      v14 = (__int64 *)(a1 + 904);
      if ( (__int64 *)*v14 == v14 )
      {
        *(_BYTE *)(a1 + 673) = 1;
        KiLeaveGuardedRegionUnsafe((__int64)CurrentThread, v11, v12, v13);
        if ( !KeWaitForMultipleObjects(5u, v66, WaitAny, WrPageOut, 0, 0, 0LL, &v67) )
          goto LABEL_75;
        --CurrentThread->SpecialApcDisable;
        *(_BYTE *)(a1 + 673) = 0;
      }
      if ( v8->Header.SignalState )
      {
        KeResetEvent(v8);
        if ( *(_DWORD *)(a1 + 692) )
          IoBoostThreadIoPriority((KSPIN_LOCK *)CurrentThread, 2, 0);
      }
      if ( v7->Header.SignalState )
      {
        KeResetEvent(v7);
        _InterlockedOr(v60, 0);
        v29 = *(_DWORD *)(a1 + 6936);
        if ( v29 )
        {
          v30 = a1 + 6944;
          v31 = v29;
          do
          {
            v32 = *(_BYTE *)(*(_QWORD *)v30 + 206LL);
            if ( (v32 & 1) != 0 )
            {
              v33 = 0;
              *(_BYTE *)(*(_QWORD *)v30 + 206LL) = v32 & 0xFE;
              for ( i = *(_QWORD *)v30; v33 < *(_DWORD *)(*(_QWORD *)v30 + 72LL); ++v33 )
              {
                v35 = *(_QWORD **)(*(_QWORD *)(i + 64) + 8LL * v33);
                if ( v35 && *v35 == 2575857425LL )
                  MiMakePagefileWriterEntryAvailable(v35);
                i = *(_QWORD *)v30;
              }
            }
            v30 += 8LL;
            --v31;
          }
          while ( v31 );
        }
      }
      if ( v9->Header.SignalState )
      {
        KeResetEvent(v9);
        MiStoreUpdateMemoryConditions(a1);
      }
      v15 = 0LL;
      v16 = *(_QWORD *)(a1 + 2752);
      v17 = *(_QWORD *)(a1 + 7600);
      if ( *(__int64 *)(a1 + 7168) >= 0 )
        v15 = *(_QWORD *)(a1 + 7168);
      v62 = *(_QWORD *)(a1 + 2752);
      if ( *(_QWORD *)(a1 + 832) < 0x800uLL && (v17 > *(_QWORD *)(a1 + 6928) >> 2 || v17 > v15 >> 2) )
      {
        v36 = *(_DWORD *)(a1 + 848);
        if ( v36 >= 0x40 )
        {
          v11 = *(_DWORD *)(a1 + 840) % v36;
          if ( *(_DWORD *)(a1 + 840) / v36 < (unsigned int)dword_140CFB18C >> 3 )
          {
            v37 = *(_DWORD *)(a1 + 6936);
            v17 >>= 2;
            v38 = 3 * v17;
            if ( v37 )
            {
              v39 = a1 + 6944;
              v40 = v37;
              do
              {
                v41 = *(_QWORD *)v39;
                if ( (*(_WORD *)(*(_QWORD *)v39 + 204LL) & 0x60) == 0 )
                {
                  if ( v16 > v38 )
                  {
                    v42 = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)(v41 + 232));
                    v43 = *(_BYTE *)(v41 + 207);
                    v44 = v42;
                    if ( (v43 & 1) == 0 )
                    {
                      *(_BYTE *)(v41 + 207) = v43 | 1;
                      MiInitializePagefileBitmapsCache(v41);
                      *(_DWORD *)(v41 + 124) = dword_140CFB18C;
                    }
                    ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(v41 + 232));
                    if ( KiIrqlFlags )
                    {
                      if ( (KiIrqlFlags & 1) != 0 )
                      {
                        CurrentIrql = KeGetCurrentIrql();
                        if ( CurrentIrql <= 0xFu && (unsigned __int8)v44 <= 0xFu && CurrentIrql >= 2u )
                        {
                          CurrentPrcb = KeGetCurrentPrcb();
                          SchedulerAssist = CurrentPrcb->SchedulerAssist;
                          v48 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v44 + 1));
                          v49 = (v48 & SchedulerAssist[5]) == 0;
                          SchedulerAssist[5] &= v48;
                          if ( v49 )
                            KiRemoveSystemWorkPriorityKick(CurrentPrcb);
                        }
                      }
                    }
                    __writecr8(v44);
                  }
                  MiFreeModifiedReservations(v41, 0LL);
                  v16 = v62;
                }
                v39 += 8LL;
                --v40;
              }
              while ( v40 );
              CurrentThread = v63;
              v14 = (__int64 *)(a1 + 904);
              v8 = (struct _KEVENT *)(a1 + 696);
              v9 = (struct _KEVENT *)(a1 + 1008);
              v7 = (struct _KEVENT *)(a1 + 880);
            }
            ++*(_DWORD *)(a1 + 856);
            if ( v16 > v38 )
            {
              *(_QWORD *)(a1 + 864) = KiQueryUnbiasedInterruptTime();
              _InterlockedOr(v60, 0);
              *(_WORD *)(a1 + 876) |= 1u;
              ++*(_DWORD *)(a1 + 852);
            }
            *(_DWORD *)(a1 + 848) = 0;
            *(_QWORD *)(a1 + 840) = 0LL;
          }
        }
      }
      if ( (__int64 *)*v14 == v14 )
        break;
      v18 = *(_DWORD *)(a1 + 1152);
      if ( (v18 & 1) != 0
        && (v18 & 0xFFFFFFFE) == 0
        && _InterlockedCompareExchange((volatile signed __int32 *)(a1 + 1152), 0, 1) == 1 )
      {
        KiLeaveGuardedRegionUnsafe((__int64)CurrentThread, v11, v17, v16);
        KeResetEvent((PRKEVENT)(a1 + 736));
LABEL_45:
        v6 = a1 + 104;
        goto LABEL_2;
      }
      if ( MiUseLowIoPriorityForModifiedPages(a1) )
      {
        if ( *(_QWORD *)(a1 + 7600) < *(_QWORD *)(a1 + 728) )
        {
          KiLeaveGuardedRegionUnsafe((__int64)CurrentThread, v19, v20, (__int64)v21);
          goto LABEL_45;
        }
        *(_DWORD *)(a1 + 720) = 4;
        v22 = KeSetActualBasePriorityThread((__int64)CurrentThread, 4LL, v20, v21);
        v23 = 0;
      }
      else
      {
        if ( *(_DWORD *)(a1 + 692) )
          IoBoostThreadIoPriority((KSPIN_LOCK *)CurrentThread, 2, 0);
        v22 = -1;
        v23 = 8;
      }
      v24 = *v14;
      v25 = *(_QWORD **)*v14;
      if ( *(__int64 **)(*v14 + 8) != v14 || v25[1] != v24 )
        __fastfail(3u);
      *v14 = (__int64)v25;
      v25[1] = v14;
      v26 = *(_DWORD *)(v24 + 40) & 0xFFFFFFE3;
      *(_QWORD *)v24 = 97LL;
      *(_DWORD *)(v24 + 40) = v23 | v26;
      KiLeaveGuardedRegionUnsafe((__int64)CurrentThread, v19, v20, (__int64)v21);
      *(_QWORD *)(v24 + 200) = v24 + 208;
      MiGatherPagefilePages(v24);
      v8 = (struct _KEVENT *)(a1 + 696);
      v6 = a1 + 104;
      if ( v22 == -1 )
      {
        v9 = (struct _KEVENT *)(a1 + 1008);
      }
      else
      {
        if ( KeQueryPriorityThread(CurrentThread) != 18 )
          KeSetActualBasePriorityThread((__int64)CurrentThread, v22, v27, v28);
        *(_DWORD *)(a1 + 720) = 18;
        v8 = (struct _KEVENT *)(a1 + 696);
        v9 = (struct _KEVENT *)(a1 + 1008);
LABEL_29:
        v6 = a1 + 104;
      }
    }
    KiLeaveGuardedRegionUnsafe((__int64)CurrentThread, v11, v17, v16);
    goto LABEL_29;
  }
LABEL_75:
  if ( *(_DWORD *)(a1 + 692) )
    IoBoostThreadIoPriority((KSPIN_LOCK *)CurrentThread, 2, 0);
  ExWaitForRundownProtectionRelease((PEX_RUNDOWN_REF)(a1 + 952));
  v53 = *(_DWORD *)(a1 + 6936);
  if ( v53 )
  {
    v54 = a1 + 6944;
    v55 = v53;
    do
    {
      if ( *(_QWORD *)v54 )
      {
        --CurrentThread->SpecialApcDisable;
        v56 = *(_QWORD *)v54;
        for ( j = 0; j < *(_DWORD *)(*(_QWORD *)v54 + 72LL); ++j )
        {
          v58 = *(_QWORD **)(*(_QWORD *)(v56 + 64) + 8LL * j);
          if ( v58 )
          {
            while ( *v58 == 97LL )
            {
              *(_BYTE *)(a1 + 673) = 1;
              KiLeaveGuardedRegionUnsafe((__int64)CurrentThread, v50, v51, (__int64)v52);
              KeWaitForSingleObject((PVOID)(a1 + 920), WrPageOut, 0, 0, 0LL);
              --CurrentThread->SpecialApcDisable;
            }
          }
          v56 = *(_QWORD *)v54;
        }
        KiLeaveGuardedRegionUnsafe((__int64)CurrentThread, v50, v51, (__int64)v52);
      }
      v54 += 8LL;
      --v55;
    }
    while ( v55 );
  }
  KeSetActualBasePriorityThread((__int64)CurrentThread, v61, v51, v52);
  return KeSetEvent((PRKEVENT)(a1 + 760), 0, 0);
}
