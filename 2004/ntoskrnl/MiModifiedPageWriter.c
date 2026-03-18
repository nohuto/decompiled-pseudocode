/*
 * XREFs of MiModifiedPageWriter @ 0x1403BC140
 * Callers:
 *     <none>
 * Callees:
 *     KiLeaveGuardedRegionUnsafe @ 0x140207EC0 (KiLeaveGuardedRegionUnsafe.c)
 *     KeWaitForSingleObject @ 0x14020B3A0 (KeWaitForSingleObject.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x140212700 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     KeSetActualBasePriorityThread @ 0x140213990 (KeSetActualBasePriorityThread.c)
 *     KeWaitForMultipleObjects @ 0x1402801A0 (KeWaitForMultipleObjects.c)
 *     KeSetEvent @ 0x140286AD0 (KeSetEvent.c)
 *     KeResetEvent @ 0x140297C10 (KeResetEvent.c)
 *     ExAcquireSpinLockExclusive @ 0x1402CF510 (ExAcquireSpinLockExclusive.c)
 *     KeQueryPriorityThread @ 0x1402D1A50 (KeQueryPriorityThread.c)
 *     KiQueryUnbiasedInterruptTime @ 0x1402D233C (KiQueryUnbiasedInterruptTime.c)
 *     IoBoostThreadIoPriority @ 0x1402D668C (IoBoostThreadIoPriority.c)
 *     MiStoreUpdateMemoryConditions @ 0x1402F1DF8 (MiStoreUpdateMemoryConditions.c)
 *     MiUseLowIoPriorityForModifiedPages @ 0x1402F1F54 (MiUseLowIoPriorityForModifiedPages.c)
 *     MiGatherPagefilePages @ 0x1402F2788 (MiGatherPagefilePages.c)
 *     ExWaitForRundownProtectionRelease @ 0x1402FA0C0 (ExWaitForRundownProtectionRelease.c)
 *     MiMakePagefileWriterEntryAvailable @ 0x14035D854 (MiMakePagefileWriterEntryAvailable.c)
 *     MiStoreCheckCompleteWriteBatch @ 0x14035F730 (MiStoreCheckCompleteWriteBatch.c)
 *     MiInitializePagefileBitmapsCache @ 0x1403BCEA4 (MiInitializePagefileBitmapsCache.c)
 *     __security_check_cookie @ 0x1403CCE60 (__security_check_cookie.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403EDAA4 (KiRemoveSystemWorkPriorityKick.c)
 *     MiFreeModifiedReservations @ 0x14053E254 (MiFreeModifiedReservations.c)
 */

LONG __fastcall MiModifiedPageWriter(__int64 a1, __int64 a2, __int64 a3, _DWORD *a4)
{
  struct _KTHREAD *CurrentThread; // rdi
  __int64 v6; // r14
  struct _KEVENT *v7; // r15
  struct _KEVENT *v8; // rsi
  struct _KEVENT *v9; // rbp
  NTSTATUS v10; // eax
  __int64 *v11; // r14
  unsigned __int64 v12; // rcx
  unsigned __int64 v13; // r9
  unsigned __int64 v14; // r8
  int v15; // eax
  __int64 v16; // r8
  _DWORD *v17; // r9
  unsigned int v18; // ebp
  int v19; // ecx
  __int64 v20; // rsi
  _QWORD *v21; // rax
  unsigned int v22; // eax
  __int64 v23; // r8
  _DWORD *v24; // r9
  unsigned int v25; // eax
  __int64 v26; // r9
  __int64 v27; // r11
  char v28; // al
  unsigned int v29; // r10d
  __int64 i; // rax
  _QWORD *v31; // rcx
  unsigned int v32; // ecx
  unsigned int v33; // eax
  unsigned __int64 v34; // r13
  __int64 v35; // r15
  __int64 v36; // r12
  __int64 v37; // rsi
  KIRQL v38; // al
  char v39; // dl
  unsigned __int64 v40; // r14
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  int v44; // eax
  bool v45; // zf
  __int64 v46; // r8
  _DWORD *v47; // r9
  unsigned int v48; // eax
  __int64 v49; // rsi
  __int64 v50; // r15
  __int64 v51; // rax
  unsigned int j; // ebp
  _QWORD *v53; // r14
  signed __int32 v55[8]; // [rsp+0h] [rbp-228h] BYREF
  unsigned int v56; // [rsp+40h] [rbp-1E8h]
  unsigned __int64 v57; // [rsp+48h] [rbp-1E0h]
  struct _KTHREAD *v58; // [rsp+50h] [rbp-1D8h]
  PVOID Object[3]; // [rsp+58h] [rbp-1D0h] BYREF
  struct _KWAIT_BLOCK WaitBlockArray; // [rsp+70h] [rbp-1B8h] BYREF
  PVOID v61[6]; // [rsp+D0h] [rbp-158h] BYREF
  struct _KWAIT_BLOCK v62; // [rsp+100h] [rbp-128h] BYREF

  CurrentThread = KeGetCurrentThread();
  *(_QWORD *)(a1 + 944) = CurrentThread;
  v58 = CurrentThread;
  *((_DWORD *)&CurrentThread[1].SwapListEntry + 3) |= 2u;
  v56 = KeSetActualBasePriorityThread((__int64)CurrentThread, 18LL, a3, a4);
  v6 = a1 + 104;
  v61[2] = (PVOID)(a1 + 920);
  Object[0] = (PVOID)(a1 + 104);
  v61[0] = (PVOID)(a1 + 104);
  v7 = (struct _KEVENT *)(a1 + 880);
  Object[1] = (PVOID)(a1 + 736);
  v8 = (struct _KEVENT *)(a1 + 696);
  v61[1] = (PVOID)(a1 + 880);
  v9 = (struct _KEVENT *)(a1 + 1008);
  v61[3] = (PVOID)(a1 + 696);
  v61[4] = (PVOID)(a1 + 1008);
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
      v11 = (__int64 *)(a1 + 904);
      if ( (__int64 *)*v11 == v11 )
      {
        *(_BYTE *)(a1 + 673) = 1;
        KiLeaveGuardedRegionUnsafe((__int64)CurrentThread);
        if ( !KeWaitForMultipleObjects(5u, v61, WaitAny, WrPageOut, 0, 0, 0LL, &v62) )
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
        _InterlockedOr(v55, 0);
        v25 = *(_DWORD *)(a1 + 6936);
        if ( v25 )
        {
          v26 = a1 + 6944;
          v27 = v25;
          do
          {
            v28 = *(_BYTE *)(*(_QWORD *)v26 + 206LL);
            if ( (v28 & 1) != 0 )
            {
              v29 = 0;
              *(_BYTE *)(*(_QWORD *)v26 + 206LL) = v28 & 0xFE;
              for ( i = *(_QWORD *)v26; v29 < *(_DWORD *)(*(_QWORD *)v26 + 72LL); ++v29 )
              {
                v31 = *(_QWORD **)(*(_QWORD *)(i + 64) + 8LL * v29);
                if ( v31 && *v31 == 2575857425LL )
                  MiMakePagefileWriterEntryAvailable(v31);
                i = *(_QWORD *)v26;
              }
            }
            v26 += 8LL;
            --v27;
          }
          while ( v27 );
        }
      }
      if ( v9->Header.SignalState )
      {
        KeResetEvent(v9);
        MiStoreUpdateMemoryConditions(a1);
      }
      v12 = 0LL;
      v13 = *(_QWORD *)(a1 + 2752);
      v14 = *(_QWORD *)(a1 + 7600);
      if ( *(__int64 *)(a1 + 7168) >= 0 )
        v12 = *(_QWORD *)(a1 + 7168);
      v57 = *(_QWORD *)(a1 + 2752);
      if ( *(_QWORD *)(a1 + 832) < 0x800uLL && (v14 > *(_QWORD *)(a1 + 6928) >> 2 || v14 > v12 >> 2) )
      {
        v32 = *(_DWORD *)(a1 + 848);
        if ( v32 >= 0x40 && *(_DWORD *)(a1 + 840) / v32 < (unsigned int)dword_140CFB18C >> 3 )
        {
          v33 = *(_DWORD *)(a1 + 6936);
          v34 = 3 * (v14 >> 2);
          if ( v33 )
          {
            v35 = a1 + 6944;
            v36 = v33;
            do
            {
              v37 = *(_QWORD *)v35;
              if ( (*(_WORD *)(*(_QWORD *)v35 + 204LL) & 0x60) == 0 )
              {
                if ( v13 > v34 )
                {
                  v38 = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)(v37 + 232));
                  v39 = *(_BYTE *)(v37 + 207);
                  v40 = v38;
                  if ( (v39 & 1) == 0 )
                  {
                    *(_BYTE *)(v37 + 207) = v39 | 1;
                    MiInitializePagefileBitmapsCache(v37);
                    *(_DWORD *)(v37 + 124) = dword_140CFB18C;
                  }
                  ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(v37 + 232));
                  if ( KiIrqlFlags )
                  {
                    if ( (KiIrqlFlags & 1) != 0 )
                    {
                      CurrentIrql = KeGetCurrentIrql();
                      if ( CurrentIrql <= 0xFu && (unsigned __int8)v40 <= 0xFu && CurrentIrql >= 2u )
                      {
                        CurrentPrcb = KeGetCurrentPrcb();
                        SchedulerAssist = CurrentPrcb->SchedulerAssist;
                        v44 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v40 + 1));
                        v45 = (v44 & SchedulerAssist[5]) == 0;
                        SchedulerAssist[5] &= v44;
                        if ( v45 )
                          KiRemoveSystemWorkPriorityKick(CurrentPrcb);
                      }
                    }
                  }
                  __writecr8(v40);
                }
                MiFreeModifiedReservations(v37, 0LL);
                v13 = v57;
              }
              v35 += 8LL;
              --v36;
            }
            while ( v36 );
            CurrentThread = v58;
            v11 = (__int64 *)(a1 + 904);
            v8 = (struct _KEVENT *)(a1 + 696);
            v9 = (struct _KEVENT *)(a1 + 1008);
            v7 = (struct _KEVENT *)(a1 + 880);
          }
          ++*(_DWORD *)(a1 + 856);
          if ( v13 > v34 )
          {
            *(_QWORD *)(a1 + 864) = KiQueryUnbiasedInterruptTime();
            _InterlockedOr(v55, 0);
            *(_WORD *)(a1 + 876) |= 1u;
            ++*(_DWORD *)(a1 + 852);
          }
          *(_DWORD *)(a1 + 848) = 0;
          *(_QWORD *)(a1 + 840) = 0LL;
        }
      }
      if ( (__int64 *)*v11 == v11 )
        break;
      v15 = *(_DWORD *)(a1 + 1152);
      if ( (v15 & 1) != 0
        && (v15 & 0xFFFFFFFE) == 0
        && _InterlockedCompareExchange((volatile signed __int32 *)(a1 + 1152), 0, 1) == 1 )
      {
        KiLeaveGuardedRegionUnsafe((__int64)CurrentThread);
        KeResetEvent((PRKEVENT)(a1 + 736));
LABEL_45:
        v6 = a1 + 104;
        goto LABEL_2;
      }
      if ( MiUseLowIoPriorityForModifiedPages(a1) )
      {
        if ( *(_QWORD *)(a1 + 7600) < *(_QWORD *)(a1 + 728) )
        {
          KiLeaveGuardedRegionUnsafe((__int64)CurrentThread);
          goto LABEL_45;
        }
        *(_DWORD *)(a1 + 720) = 4;
        v18 = KeSetActualBasePriorityThread((__int64)CurrentThread, 4LL, v16, v17);
        v19 = 0;
      }
      else
      {
        if ( *(_DWORD *)(a1 + 692) )
          IoBoostThreadIoPriority((KSPIN_LOCK *)CurrentThread, 2, 0);
        v18 = -1;
        v19 = 8;
      }
      v20 = *v11;
      v21 = *(_QWORD **)*v11;
      if ( *(__int64 **)(*v11 + 8) != v11 || v21[1] != v20 )
        __fastfail(3u);
      *v11 = (__int64)v21;
      v21[1] = v11;
      v22 = *(_DWORD *)(v20 + 40) & 0xFFFFFFE3;
      *(_QWORD *)v20 = 97LL;
      *(_DWORD *)(v20 + 40) = v19 | v22;
      KiLeaveGuardedRegionUnsafe((__int64)CurrentThread);
      *(_QWORD *)(v20 + 200) = v20 + 208;
      MiGatherPagefilePages(v20);
      v8 = (struct _KEVENT *)(a1 + 696);
      v6 = a1 + 104;
      if ( v18 == -1 )
      {
        v9 = (struct _KEVENT *)(a1 + 1008);
      }
      else
      {
        if ( KeQueryPriorityThread(CurrentThread) != 18 )
          KeSetActualBasePriorityThread((__int64)CurrentThread, v18, v23, v24);
        *(_DWORD *)(a1 + 720) = 18;
        v8 = (struct _KEVENT *)(a1 + 696);
        v9 = (struct _KEVENT *)(a1 + 1008);
LABEL_29:
        v6 = a1 + 104;
      }
    }
    KiLeaveGuardedRegionUnsafe((__int64)CurrentThread);
    goto LABEL_29;
  }
LABEL_75:
  if ( *(_DWORD *)(a1 + 692) )
    IoBoostThreadIoPriority((KSPIN_LOCK *)CurrentThread, 2, 0);
  ExWaitForRundownProtectionRelease((PEX_RUNDOWN_REF)(a1 + 952));
  v48 = *(_DWORD *)(a1 + 6936);
  if ( v48 )
  {
    v49 = a1 + 6944;
    v50 = v48;
    do
    {
      if ( *(_QWORD *)v49 )
      {
        --CurrentThread->SpecialApcDisable;
        v51 = *(_QWORD *)v49;
        for ( j = 0; j < *(_DWORD *)(*(_QWORD *)v49 + 72LL); ++j )
        {
          v53 = *(_QWORD **)(*(_QWORD *)(v51 + 64) + 8LL * j);
          if ( v53 )
          {
            while ( *v53 == 97LL )
            {
              *(_BYTE *)(a1 + 673) = 1;
              KiLeaveGuardedRegionUnsafe((__int64)CurrentThread);
              KeWaitForSingleObject((PVOID)(a1 + 920), WrPageOut, 0, 0, 0LL);
              --CurrentThread->SpecialApcDisable;
            }
          }
          v51 = *(_QWORD *)v49;
        }
        KiLeaveGuardedRegionUnsafe((__int64)CurrentThread);
      }
      v49 += 8LL;
      --v50;
    }
    while ( v50 );
  }
  KeSetActualBasePriorityThread((__int64)CurrentThread, v56, v46, v47);
  return KeSetEvent((PRKEVENT)(a1 + 760), 0, 0);
}
