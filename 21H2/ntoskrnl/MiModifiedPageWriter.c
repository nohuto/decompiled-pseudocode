/*
 * XREFs of MiModifiedPageWriter @ 0x1403BF240
 * Callers:
 *     <none>
 * Callees:
 *     MiMakePagefileWriterEntryAvailable @ 0x14024E474 (MiMakePagefileWriterEntryAvailable.c)
 *     MiStoreCheckCompleteWriteBatch @ 0x140250970 (MiStoreCheckCompleteWriteBatch.c)
 *     MiGatherPagefilePages @ 0x140256844 (MiGatherPagefilePages.c)
 *     MiStoreUpdateMemoryConditions @ 0x14025F284 (MiStoreUpdateMemoryConditions.c)
 *     MiUseLowIoPriorityForModifiedPages @ 0x14025F94C (MiUseLowIoPriorityForModifiedPages.c)
 *     ExWaitForRundownProtectionRelease @ 0x140267780 (ExWaitForRundownProtectionRelease.c)
 *     KeResetEvent @ 0x140269BE0 (KeResetEvent.c)
 *     KiQueryUnbiasedInterruptTime @ 0x140275C64 (KiQueryUnbiasedInterruptTime.c)
 *     KeQueryPriorityThread @ 0x14028B7A0 (KeQueryPriorityThread.c)
 *     ExAcquireSpinLockExclusive @ 0x1402C1960 (ExAcquireSpinLockExclusive.c)
 *     KeSetActualBasePriorityThread @ 0x1402D4E00 (KeSetActualBasePriorityThread.c)
 *     KeWaitForMultipleObjects @ 0x1402F03E0 (KeWaitForMultipleObjects.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x140346AD0 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     KeSetEvent @ 0x14034E2F0 (KeSetEvent.c)
 *     KeWaitForSingleObject @ 0x1403504C0 (KeWaitForSingleObject.c)
 *     KiLeaveGuardedRegionUnsafe @ 0x140355AE0 (KiLeaveGuardedRegionUnsafe.c)
 *     IoBoostThreadIoPriority @ 0x140363380 (IoBoostThreadIoPriority.c)
 *     MiInitializePagefileBitmapsCache @ 0x1403BFFA4 (MiInitializePagefileBitmapsCache.c)
 *     __security_check_cookie @ 0x1403D05D0 (__security_check_cookie.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403F3684 (KiRemoveSystemWorkPriorityKick.c)
 *     MiFreeModifiedReservations @ 0x140543964 (MiFreeModifiedReservations.c)
 */

LONG __fastcall MiModifiedPageWriter(__int64 a1)
{
  struct _KTHREAD *CurrentThread; // rdi
  __int64 v3; // r14
  struct _KEVENT *v4; // r15
  struct _KEVENT *v5; // rsi
  struct _KEVENT *v6; // rbp
  NTSTATUS v7; // eax
  __int64 *v8; // r14
  unsigned __int64 v9; // rcx
  unsigned __int64 v10; // r9
  unsigned __int64 v11; // r8
  int v12; // eax
  int v13; // ebp
  int v14; // ecx
  __int64 v15; // rsi
  _QWORD *v16; // rax
  unsigned int v17; // eax
  unsigned int v18; // eax
  __int64 v19; // r9
  __int64 v20; // r11
  char v21; // al
  unsigned int v22; // r10d
  __int64 i; // rax
  _QWORD *v24; // rcx
  unsigned int v25; // ecx
  unsigned int v26; // eax
  unsigned __int64 v27; // r13
  __int64 v28; // r15
  __int64 v29; // r12
  __int64 v30; // rsi
  KIRQL v31; // al
  char v32; // dl
  unsigned __int64 v33; // r14
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  int v37; // eax
  bool v38; // zf
  unsigned int v39; // eax
  __int64 v40; // rsi
  __int64 v41; // r15
  __int64 v42; // rax
  unsigned int j; // ebp
  _QWORD *v44; // r14
  signed __int32 v46[8]; // [rsp+0h] [rbp-228h] BYREF
  int v47; // [rsp+40h] [rbp-1E8h]
  unsigned __int64 v48; // [rsp+48h] [rbp-1E0h]
  struct _KTHREAD *v49; // [rsp+50h] [rbp-1D8h]
  PVOID Object[3]; // [rsp+58h] [rbp-1D0h] BYREF
  struct _KWAIT_BLOCK WaitBlockArray; // [rsp+70h] [rbp-1B8h] BYREF
  PVOID v52[6]; // [rsp+D0h] [rbp-158h] BYREF
  struct _KWAIT_BLOCK v53; // [rsp+100h] [rbp-128h] BYREF

  CurrentThread = KeGetCurrentThread();
  *(_QWORD *)(a1 + 944) = CurrentThread;
  v49 = CurrentThread;
  *((_DWORD *)&CurrentThread[1].SwapListEntry + 3) |= 2u;
  v47 = KeSetActualBasePriorityThread((__int64)CurrentThread, 18);
  v3 = a1 + 104;
  v52[2] = (PVOID)(a1 + 920);
  Object[0] = (PVOID)(a1 + 104);
  v52[0] = (PVOID)(a1 + 104);
  v4 = (struct _KEVENT *)(a1 + 880);
  Object[1] = (PVOID)(a1 + 736);
  v5 = (struct _KEVENT *)(a1 + 696);
  v52[1] = (PVOID)(a1 + 880);
  v6 = (struct _KEVENT *)(a1 + 1008);
  v52[3] = (PVOID)(a1 + 696);
  v52[4] = (PVOID)(a1 + 1008);
LABEL_2:
  *(_QWORD *)(a1 + 840) = 0LL;
  *(_DWORD *)(a1 + 848) = 0;
  *(_BYTE *)(a1 + 674) = 0;
  MiStoreCheckCompleteWriteBatch(a1);
  v7 = KeWaitForMultipleObjects(2u, Object, WaitAny, WrPageOut, 0, 0, 0LL, &WaitBlockArray);
  *(_BYTE *)(a1 + 674) = 1;
  if ( v7 )
  {
    while ( 1 )
    {
      if ( *(_DWORD *)(v3 + 4) )
        goto LABEL_75;
      if ( !*(_QWORD *)(a1 + 7600) )
        goto LABEL_2;
      --CurrentThread->SpecialApcDisable;
      MiStoreCheckCompleteWriteBatch(a1);
      v8 = (__int64 *)(a1 + 904);
      if ( (__int64 *)*v8 == v8 )
      {
        *(_BYTE *)(a1 + 673) = 1;
        KiLeaveGuardedRegionUnsafe((__int64)CurrentThread);
        if ( !KeWaitForMultipleObjects(5u, v52, WaitAny, WrPageOut, 0, 0, 0LL, &v53) )
          goto LABEL_75;
        --CurrentThread->SpecialApcDisable;
        *(_BYTE *)(a1 + 673) = 0;
      }
      if ( v5->Header.SignalState )
      {
        KeResetEvent(v5);
        if ( *(_DWORD *)(a1 + 692) )
          IoBoostThreadIoPriority((KSPIN_LOCK *)CurrentThread, 2, 0);
      }
      if ( v4->Header.SignalState )
      {
        KeResetEvent(v4);
        _InterlockedOr(v46, 0);
        v18 = *(_DWORD *)(a1 + 6936);
        if ( v18 )
        {
          v19 = a1 + 6944;
          v20 = v18;
          do
          {
            v21 = *(_BYTE *)(*(_QWORD *)v19 + 206LL);
            if ( (v21 & 1) != 0 )
            {
              v22 = 0;
              *(_BYTE *)(*(_QWORD *)v19 + 206LL) = v21 & 0xFE;
              for ( i = *(_QWORD *)v19; v22 < *(_DWORD *)(*(_QWORD *)v19 + 72LL); ++v22 )
              {
                v24 = *(_QWORD **)(*(_QWORD *)(i + 64) + 8LL * v22);
                if ( v24 && *v24 == 2575857425LL )
                  MiMakePagefileWriterEntryAvailable(v24);
                i = *(_QWORD *)v19;
              }
            }
            v19 += 8LL;
            --v20;
          }
          while ( v20 );
        }
      }
      if ( v6->Header.SignalState )
      {
        KeResetEvent(v6);
        MiStoreUpdateMemoryConditions(a1);
      }
      v9 = 0LL;
      v10 = *(_QWORD *)(a1 + 2752);
      v11 = *(_QWORD *)(a1 + 7600);
      if ( *(__int64 *)(a1 + 7168) >= 0 )
        v9 = *(_QWORD *)(a1 + 7168);
      v48 = *(_QWORD *)(a1 + 2752);
      if ( *(_QWORD *)(a1 + 832) < 0x800uLL && (v11 > *(_QWORD *)(a1 + 6928) >> 2 || v11 > v9 >> 2) )
      {
        v25 = *(_DWORD *)(a1 + 848);
        if ( v25 >= 0x40 && *(_DWORD *)(a1 + 840) / v25 < (unsigned int)dword_140CFB18C >> 3 )
        {
          v26 = *(_DWORD *)(a1 + 6936);
          v27 = 3 * (v11 >> 2);
          if ( v26 )
          {
            v28 = a1 + 6944;
            v29 = v26;
            do
            {
              v30 = *(_QWORD *)v28;
              if ( (*(_WORD *)(*(_QWORD *)v28 + 204LL) & 0x60) == 0 )
              {
                if ( v10 > v27 )
                {
                  v31 = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)(v30 + 232));
                  v32 = *(_BYTE *)(v30 + 207);
                  v33 = v31;
                  if ( (v32 & 1) == 0 )
                  {
                    *(_BYTE *)(v30 + 207) = v32 | 1;
                    MiInitializePagefileBitmapsCache(v30);
                    *(_DWORD *)(v30 + 124) = dword_140CFB18C;
                  }
                  ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(v30 + 232));
                  if ( KiIrqlFlags )
                  {
                    if ( (KiIrqlFlags & 1) != 0 )
                    {
                      CurrentIrql = KeGetCurrentIrql();
                      if ( CurrentIrql <= 0xFu && (unsigned __int8)v33 <= 0xFu && CurrentIrql >= 2u )
                      {
                        CurrentPrcb = KeGetCurrentPrcb();
                        SchedulerAssist = CurrentPrcb->SchedulerAssist;
                        v37 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v33 + 1));
                        v38 = (v37 & SchedulerAssist[5]) == 0;
                        SchedulerAssist[5] &= v37;
                        if ( v38 )
                          KiRemoveSystemWorkPriorityKick(CurrentPrcb);
                      }
                    }
                  }
                  __writecr8(v33);
                }
                MiFreeModifiedReservations(v30, 0LL);
                v10 = v48;
              }
              v28 += 8LL;
              --v29;
            }
            while ( v29 );
            CurrentThread = v49;
            v8 = (__int64 *)(a1 + 904);
            v5 = (struct _KEVENT *)(a1 + 696);
            v6 = (struct _KEVENT *)(a1 + 1008);
            v4 = (struct _KEVENT *)(a1 + 880);
          }
          ++*(_DWORD *)(a1 + 856);
          if ( v10 > v27 )
          {
            *(_QWORD *)(a1 + 864) = KiQueryUnbiasedInterruptTime();
            _InterlockedOr(v46, 0);
            *(_WORD *)(a1 + 876) |= 1u;
            ++*(_DWORD *)(a1 + 852);
          }
          *(_DWORD *)(a1 + 848) = 0;
          *(_QWORD *)(a1 + 840) = 0LL;
        }
      }
      if ( (__int64 *)*v8 == v8 )
        break;
      v12 = *(_DWORD *)(a1 + 1152);
      if ( (v12 & 1) != 0
        && (v12 & 0xFFFFFFFE) == 0
        && _InterlockedCompareExchange((volatile signed __int32 *)(a1 + 1152), 0, 1) == 1 )
      {
        KiLeaveGuardedRegionUnsafe((__int64)CurrentThread);
        KeResetEvent((PRKEVENT)(a1 + 736));
LABEL_45:
        v3 = a1 + 104;
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
        v13 = KeSetActualBasePriorityThread((__int64)CurrentThread, 4);
        v14 = 0;
      }
      else
      {
        if ( *(_DWORD *)(a1 + 692) )
          IoBoostThreadIoPriority((KSPIN_LOCK *)CurrentThread, 2, 0);
        v13 = -1;
        v14 = 8;
      }
      v15 = *v8;
      v16 = *(_QWORD **)*v8;
      if ( *(__int64 **)(*v8 + 8) != v8 || v16[1] != v15 )
        __fastfail(3u);
      *v8 = (__int64)v16;
      v16[1] = v8;
      v17 = *(_DWORD *)(v15 + 40) & 0xFFFFFFE3;
      *(_QWORD *)v15 = 97LL;
      *(_DWORD *)(v15 + 40) = v14 | v17;
      KiLeaveGuardedRegionUnsafe((__int64)CurrentThread);
      *(_QWORD *)(v15 + 200) = v15 + 208;
      MiGatherPagefilePages(v15);
      v5 = (struct _KEVENT *)(a1 + 696);
      v3 = a1 + 104;
      if ( v13 == -1 )
      {
        v6 = (struct _KEVENT *)(a1 + 1008);
      }
      else
      {
        if ( KeQueryPriorityThread(CurrentThread) != 18 )
          KeSetActualBasePriorityThread((__int64)CurrentThread, v13);
        *(_DWORD *)(a1 + 720) = 18;
        v5 = (struct _KEVENT *)(a1 + 696);
        v6 = (struct _KEVENT *)(a1 + 1008);
LABEL_29:
        v3 = a1 + 104;
      }
    }
    KiLeaveGuardedRegionUnsafe((__int64)CurrentThread);
    goto LABEL_29;
  }
LABEL_75:
  if ( *(_DWORD *)(a1 + 692) )
    IoBoostThreadIoPriority((KSPIN_LOCK *)CurrentThread, 2, 0);
  ExWaitForRundownProtectionRelease((PEX_RUNDOWN_REF)(a1 + 952));
  v39 = *(_DWORD *)(a1 + 6936);
  if ( v39 )
  {
    v40 = a1 + 6944;
    v41 = v39;
    do
    {
      if ( *(_QWORD *)v40 )
      {
        --CurrentThread->SpecialApcDisable;
        v42 = *(_QWORD *)v40;
        for ( j = 0; j < *(_DWORD *)(*(_QWORD *)v40 + 72LL); ++j )
        {
          v44 = *(_QWORD **)(*(_QWORD *)(v42 + 64) + 8LL * j);
          if ( v44 )
          {
            while ( *v44 == 97LL )
            {
              *(_BYTE *)(a1 + 673) = 1;
              KiLeaveGuardedRegionUnsafe((__int64)CurrentThread);
              KeWaitForSingleObject((PVOID)(a1 + 920), WrPageOut, 0, 0, 0LL);
              --CurrentThread->SpecialApcDisable;
            }
          }
          v42 = *(_QWORD *)v40;
        }
        KiLeaveGuardedRegionUnsafe((__int64)CurrentThread);
      }
      v40 += 8LL;
      --v41;
    }
    while ( v41 );
  }
  KeSetActualBasePriorityThread((__int64)CurrentThread, v47);
  return KeSetEvent((PRKEVENT)(a1 + 760), 0, 0);
}
