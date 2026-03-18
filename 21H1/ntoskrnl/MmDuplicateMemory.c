/*
 * XREFs of MmDuplicateMemory @ 0x14098C6CC
 * Callers:
 *     MmCreateMirror @ 0x1408C29C0 (MmCreateMirror.c)
 *     PopTransitionToSleep @ 0x14098C540 (PopTransitionToSleep.c)
 *     IopLiveDumpCaptureMemoryPages @ 0x1409A7C94 (IopLiveDumpCaptureMemoryPages.c)
 *     IopLiveDumpEstimateMemoryPages @ 0x1409A85BC (IopLiveDumpEstimateMemoryPages.c)
 *     PnprInitiateReplaceOperation @ 0x1409A9B2C (PnprInitiateReplaceOperation.c)
 * Callees:
 *     ExQueueWorkItem @ 0x140226F40 (ExQueueWorkItem.c)
 *     KeSetEvent @ 0x14024A230 (KeSetEvent.c)
 *     ExAcquirePushLockExclusiveEx @ 0x1402609E0 (ExAcquirePushLockExclusiveEx.c)
 *     KiLeaveGuardedRegionUnsafe @ 0x140260DE0 (KiLeaveGuardedRegionUnsafe.c)
 *     KeAbPostRelease @ 0x140263C10 (KeAbPostRelease.c)
 *     KeWaitForSingleObject @ 0x1402643F0 (KeWaitForSingleObject.c)
 *     MiUnlockDynamicMemoryExclusive @ 0x1402D4788 (MiUnlockDynamicMemoryExclusive.c)
 *     MiLockDynamicMemoryExclusive @ 0x1402D4B48 (MiLockDynamicMemoryExclusive.c)
 *     MmUnlockPagableImageSection @ 0x14030E2F0 (MmUnlockPagableImageSection.c)
 *     ExfTryToWakePushLock @ 0x14035A680 (ExfTryToWakePushLock.c)
 *     MiLockAllMemoryLists @ 0x14037F638 (MiLockAllMemoryLists.c)
 *     MiUnlockAllMemoryLists @ 0x14037F674 (MiUnlockAllMemoryLists.c)
 *     MiResumeFromHibernate @ 0x14037F6AC (MiResumeFromHibernate.c)
 *     MiMirrorVerify @ 0x14037F808 (MiMirrorVerify.c)
 *     CcNotifyWriteBehind @ 0x14037FB4C (CcNotifyWriteBehind.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403EC9E4 (KiRemoveSystemWorkPriorityKick.c)
 *     MiMirrorBlackPhase @ 0x1403ED2F4 (MiMirrorBlackPhase.c)
 *     _guard_dispatch_icall @ 0x1403FE9E0 (_guard_dispatch_icall.c)
 *     MmLockPagableSectionByHandle @ 0x140704530 (MmLockPagableSectionByHandle.c)
 *     MiUpdateMirrorBitmaps @ 0x14075F454 (MiUpdateMirrorBitmaps.c)
 *     MiActOnMirrorBitmap @ 0x14075F494 (MiActOnMirrorBitmap.c)
 *     MiMirrorBrownPhase @ 0x14098CAFC (MiMirrorBrownPhase.c)
 */

NTSTATUS __fastcall MmDuplicateMemory(__int64 a1)
{
  int v1; // edx
  unsigned __int8 v2; // r13
  unsigned __int8 v4; // r12
  NTSTATUS result; // eax
  int v6; // esi
  struct _KTHREAD *CurrentThread; // r15
  int v8; // edi
  int v9; // esi
  unsigned __int8 v10; // r10
  _DWORD *v11; // r9
  int v12; // eax
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  int v16; // eax
  bool v17; // zf
  __int64 v18; // rdx
  __int64 v19; // r8
  __int64 v20; // r9
  __int128 v21; // [rsp+30h] [rbp-20h] BYREF
  __int64 v22; // [rsp+40h] [rbp-10h]
  __int64 v23; // [rsp+98h] [rbp+48h] BYREF

  v1 = *(_DWORD *)(a1 + 32);
  v23 = 0LL;
  v22 = 0LL;
  v2 = 17;
  v4 = 17;
  v21 = 0LL;
  DWORD2(v21) = v1;
  if ( (v1 & 1) != 0 && (v1 & 0x404) != 0 )
    return -1073741811;
  if ( (v1 & 8) != 0 )
  {
    v1 &= 0xFFFFFBFA;
    DWORD2(v21) = v1;
  }
  if ( (v1 & 0x400) != 0 && (v1 & 4) != 0
    || (v1 & 0xC0) != 0 && ((v1 & 0xFFFFFC2E) != 0 || (v1 & 0x11) != 0x11 || (v1 & 0x40) != 0 && (v1 & 0x80u) != 0) )
  {
    return -1073741811;
  }
  if ( (v1 & 0xA) == 0 )
    CcNotifyWriteBehind();
  *(_QWORD *)&v21 = a1;
  v6 = 0;
  HIDWORD(v21) = 8;
  BYTE4(v22) = 0;
  CurrentThread = KeGetCurrentThread();
  result = KeWaitForSingleObject(
             &stru_140C4E610,
             WrVirtualMemory,
             0,
             0,
             (PLARGE_INTEGER)((unsigned __int64)&v23 & -(__int64)((WORD4(v21) & 0x200) != 0)));
  if ( result >= 0 )
  {
    if ( result == 258 )
      return 258;
    if ( (MiFlags & 4) == 0 )
      MmLockPagableSectionByHandle(ExPageLockHandle);
    --CurrentThread->SpecialApcDisable;
    ExAcquirePushLockExclusiveEx((ULONG_PTR)&qword_140C4E548, 0LL);
    MiLockDynamicMemoryExclusive((__int64)&MiSystemPartition, (__int64)CurrentThread);
    _InterlockedIncrement(&dword_140C4EE18);
    if ( !(unsigned int)MiUpdateMirrorBitmaps() )
    {
      v8 = -1073741670;
LABEL_53:
      dword_140C4E60C = 0;
      if ( BYTE4(v22) == 1 )
        _InterlockedAdd(&dword_140C4EC8C, 0xFFFFFFFF);
      if ( qword_140C4E648 )
        qword_140C4E648 = 0LL;
      if ( v2 != 17 )
      {
        if ( v4 != 17 )
          MiUnlockAllMemoryLists();
        if ( KiIrqlFlags )
        {
          if ( (KiIrqlFlags & 1) != 0 )
          {
            CurrentIrql = KeGetCurrentIrql();
            if ( CurrentIrql <= 0xFu && v2 <= 0xFu && CurrentIrql >= 2u )
            {
              CurrentPrcb = KeGetCurrentPrcb();
              SchedulerAssist = CurrentPrcb->SchedulerAssist;
              v16 = ~(unsigned __int16)(-1LL << (v2 + 1));
              v17 = (v16 & SchedulerAssist[5]) == 0;
              SchedulerAssist[5] &= v16;
              if ( v17 )
                KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
            }
          }
        }
        __writecr8(v2);
      }
      if ( v6 == 1 )
      {
        stru_140C4E628.Parameter = (void *)HIDWORD(v21);
        ExQueueWorkItem(&stru_140C4E628, HyperCriticalWorkQueue);
      }
      else
      {
        _InterlockedAdd(&dword_140C4EE18, 0xFFFFFFFF);
        KeSetEvent(&stru_140C4E610, 0, 0);
      }
      MiUnlockDynamicMemoryExclusive((__int64)&MiSystemPartition, (__int64)CurrentThread);
      if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&qword_140C4E548, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
        ExfTryToWakePushLock(&qword_140C4E548);
      KeAbPostRelease((ULONG_PTR)&qword_140C4E548);
      KiLeaveGuardedRegionUnsafe((__int64)CurrentThread, v18, v19, v20);
      if ( (MiFlags & 4) == 0 )
        MmUnlockPagableImageSection(ExPageLockHandle);
      return v8;
    }
    MiActOnMirrorBitmap((__int64)&qword_140C4E660, 1);
    v9 = 1;
    LODWORD(v22) = 0;
    if ( (BYTE8(v21) & 1) != 0 )
    {
      LODWORD(v22) = 3;
LABEL_30:
      v9 = 0;
LABEL_31:
      v8 = (*(__int64 (**)(void))a1)();
      if ( v8 < 0 )
        goto LABEL_52;
      dword_140C4E60C = 1;
      v8 = MiMirrorBrownPhase(&v21);
      if ( v8 < 0 )
        goto LABEL_52;
      if ( (BYTE8(v21) & 2) == 0 && BYTE4(v22) == 1 )
      {
        _InterlockedAdd(&dword_140C4EC8C, 0xFFFFFFFF);
        BYTE4(v22) = 0;
      }
      v2 = KeGetCurrentIrql();
      v8 = (*(__int64 (__fastcall **)(_QWORD))(a1 + 8))(0LL);
      if ( v8 < 0 )
        goto LABEL_52;
      v4 = KeGetCurrentIrql();
      if ( *(_QWORD *)(a1 + 24) )
        MiActOnMirrorBitmap((__int64)qword_140C4E650, 1);
      if ( v4 < 2u )
      {
        v10 = KeGetCurrentIrql();
        __writecr8(2uLL);
        if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && v10 <= 0xFu )
        {
          v11 = KeGetCurrentPrcb()->SchedulerAssist;
          v11[5] |= (-1 << (v10 + 1)) & 4;
        }
        v4 = v10;
      }
      MiLockAllMemoryLists();
      qword_140C4E648 = (__int64)CurrentThread;
      if ( BYTE4(v22) == 1 )
      {
        _InterlockedAdd(&dword_140C4EC8C, 0xFFFFFFFF);
        BYTE4(v22) = 0;
      }
      dword_140C4E60C = 2;
      v8 = MiMirrorBlackPhase((__int64)&v21);
      if ( v8 < 0
        || (v8 = MiMirrorVerify(a1), v8 < 0)
        || (v12 = (*(__int64 (__fastcall **)(__int64))(a1 + 8))(1LL), qword_140C4E648 = 0LL, v8 = v12, v12 != 1073742484)
        || v9 )
      {
LABEL_52:
        v6 = 0;
      }
      else
      {
        v8 = 0;
        MiResumeFromHibernate(HIDWORD(v21));
        v6 = 1;
      }
      goto LABEL_53;
    }
    if ( (WORD4(v21) & 0x400) == 0 )
    {
      if ( (BYTE8(v21) & 4) != 0 )
      {
        HIDWORD(v21) = 7;
LABEL_29:
        LODWORD(v22) = 2;
        goto LABEL_30;
      }
      if ( (BYTE8(v21) & 8) == 0 )
        goto LABEL_31;
    }
    HIDWORD(v21) = 0;
    goto LABEL_29;
  }
  return result;
}
