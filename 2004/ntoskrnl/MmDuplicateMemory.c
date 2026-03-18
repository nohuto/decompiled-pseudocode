/*
 * XREFs of MmDuplicateMemory @ 0x140992AAC
 * Callers:
 *     MmCreateMirror @ 0x1408C3D10 (MmCreateMirror.c)
 *     PopTransitionToSleep @ 0x140992920 (PopTransitionToSleep.c)
 *     IopLiveDumpCaptureMemoryPages @ 0x1409A8AF4 (IopLiveDumpCaptureMemoryPages.c)
 *     IopLiveDumpEstimateMemoryPages @ 0x1409A941C (IopLiveDumpEstimateMemoryPages.c)
 *     PnprInitiateReplaceOperation @ 0x1409AA98C (PnprInitiateReplaceOperation.c)
 * Callees:
 *     ExAcquirePushLockExclusiveEx @ 0x140207AC0 (ExAcquirePushLockExclusiveEx.c)
 *     KiLeaveGuardedRegionUnsafe @ 0x140207EC0 (KiLeaveGuardedRegionUnsafe.c)
 *     KeAbPostRelease @ 0x14020ACF0 (KeAbPostRelease.c)
 *     KeWaitForSingleObject @ 0x14020B3A0 (KeWaitForSingleObject.c)
 *     MiUnlockDynamicMemoryExclusive @ 0x14026ADE8 (MiUnlockDynamicMemoryExclusive.c)
 *     MiLockDynamicMemoryExclusive @ 0x14026B1A8 (MiLockDynamicMemoryExclusive.c)
 *     ExfTryToWakePushLock @ 0x1402749E0 (ExfTryToWakePushLock.c)
 *     KeSetEvent @ 0x140286AD0 (KeSetEvent.c)
 *     ExQueueWorkItem @ 0x1402B9BC0 (ExQueueWorkItem.c)
 *     MmUnlockPagableImageSection @ 0x14034B7D0 (MmUnlockPagableImageSection.c)
 *     MiLockAllMemoryLists @ 0x140383ED0 (MiLockAllMemoryLists.c)
 *     MiUnlockAllMemoryLists @ 0x140383F0C (MiUnlockAllMemoryLists.c)
 *     MiResumeFromHibernate @ 0x140383F44 (MiResumeFromHibernate.c)
 *     MiMirrorVerify @ 0x1403840A0 (MiMirrorVerify.c)
 *     CcNotifyWriteBehind @ 0x1403843E4 (CcNotifyWriteBehind.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403EDAA4 (KiRemoveSystemWorkPriorityKick.c)
 *     MiMirrorBlackPhase @ 0x1403EE3B4 (MiMirrorBlackPhase.c)
 *     _guard_dispatch_icall @ 0x1403FFC70 (_guard_dispatch_icall.c)
 *     MmLockPagableSectionByHandle @ 0x1406F6300 (MmLockPagableSectionByHandle.c)
 *     MiUpdateMirrorBitmaps @ 0x140764614 (MiUpdateMirrorBitmaps.c)
 *     MiActOnMirrorBitmap @ 0x140764654 (MiActOnMirrorBitmap.c)
 *     MiMirrorBrownPhase @ 0x140992EDC (MiMirrorBrownPhase.c)
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
  __int128 v18; // [rsp+30h] [rbp-20h] BYREF
  __int64 v19; // [rsp+40h] [rbp-10h]
  __int64 v20; // [rsp+98h] [rbp+48h] BYREF

  v1 = *(_DWORD *)(a1 + 32);
  v20 = 0LL;
  v19 = 0LL;
  v2 = 17;
  v4 = 17;
  v18 = 0LL;
  DWORD2(v18) = v1;
  if ( (v1 & 1) != 0 && (v1 & 0x404) != 0 )
    return -1073741811;
  if ( (v1 & 8) != 0 )
  {
    v1 &= 0xFFFFFBFA;
    DWORD2(v18) = v1;
  }
  if ( (v1 & 0x400) != 0 && (v1 & 4) != 0
    || (v1 & 0xC0) != 0 && ((v1 & 0xFFFFFC2E) != 0 || (v1 & 0x11) != 0x11 || (v1 & 0x40) != 0 && (v1 & 0x80u) != 0) )
  {
    return -1073741811;
  }
  if ( (v1 & 0xA) == 0 )
    CcNotifyWriteBehind();
  *(_QWORD *)&v18 = a1;
  v6 = 0;
  HIDWORD(v18) = 8;
  BYTE4(v19) = 0;
  CurrentThread = KeGetCurrentThread();
  result = KeWaitForSingleObject(
             &stru_140C4E4D0,
             WrVirtualMemory,
             0,
             0,
             (PLARGE_INTEGER)((unsigned __int64)&v20 & -(__int64)((WORD4(v18) & 0x200) != 0)));
  if ( result >= 0 )
  {
    if ( result == 258 )
      return 258;
    if ( (MiFlags & 4) == 0 )
      MmLockPagableSectionByHandle(ExPageLockHandle);
    --CurrentThread->SpecialApcDisable;
    ExAcquirePushLockExclusiveEx((ULONG_PTR)&qword_140C4E408, 0LL);
    MiLockDynamicMemoryExclusive((__int64)&MiSystemPartition, (__int64)CurrentThread);
    _InterlockedIncrement(&dword_140C4ECD8);
    if ( !(unsigned int)MiUpdateMirrorBitmaps() )
    {
      v8 = -1073741670;
LABEL_53:
      dword_140C4E4CC = 0;
      if ( BYTE4(v19) == 1 )
        _InterlockedAdd(&dword_140C4EB4C, 0xFFFFFFFF);
      if ( qword_140C4E508 )
        qword_140C4E508 = 0LL;
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
        stru_140C4E4E8.Parameter = (void *)HIDWORD(v18);
        ExQueueWorkItem(&stru_140C4E4E8, HyperCriticalWorkQueue);
      }
      else
      {
        _InterlockedAdd(&dword_140C4ECD8, 0xFFFFFFFF);
        KeSetEvent(&stru_140C4E4D0, 0, 0);
      }
      MiUnlockDynamicMemoryExclusive((__int64)&MiSystemPartition, (__int64)CurrentThread);
      if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&qword_140C4E408, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
        ExfTryToWakePushLock((volatile signed __int64 *)&qword_140C4E408);
      KeAbPostRelease((ULONG_PTR)&qword_140C4E408);
      KiLeaveGuardedRegionUnsafe((__int64)CurrentThread);
      if ( (MiFlags & 4) == 0 )
        MmUnlockPagableImageSection(ExPageLockHandle);
      return v8;
    }
    MiActOnMirrorBitmap((__int64)&qword_140C4E520, 1);
    v9 = 1;
    LODWORD(v19) = 0;
    if ( (BYTE8(v18) & 1) != 0 )
    {
      LODWORD(v19) = 3;
LABEL_30:
      v9 = 0;
LABEL_31:
      v8 = (*(__int64 (**)(void))a1)();
      if ( v8 < 0 )
        goto LABEL_52;
      dword_140C4E4CC = 1;
      v8 = MiMirrorBrownPhase(&v18);
      if ( v8 < 0 )
        goto LABEL_52;
      if ( (BYTE8(v18) & 2) == 0 && BYTE4(v19) == 1 )
      {
        _InterlockedAdd(&dword_140C4EB4C, 0xFFFFFFFF);
        BYTE4(v19) = 0;
      }
      v2 = KeGetCurrentIrql();
      v8 = (*(__int64 (__fastcall **)(_QWORD))(a1 + 8))(0LL);
      if ( v8 < 0 )
        goto LABEL_52;
      v4 = KeGetCurrentIrql();
      if ( *(_QWORD *)(a1 + 24) )
        MiActOnMirrorBitmap((__int64)qword_140C4E510, 1);
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
      qword_140C4E508 = (__int64)CurrentThread;
      if ( BYTE4(v19) == 1 )
      {
        _InterlockedAdd(&dword_140C4EB4C, 0xFFFFFFFF);
        BYTE4(v19) = 0;
      }
      dword_140C4E4CC = 2;
      v8 = MiMirrorBlackPhase((__int64)&v18);
      if ( v8 < 0
        || (v8 = MiMirrorVerify(a1), v8 < 0)
        || (v12 = (*(__int64 (__fastcall **)(__int64))(a1 + 8))(1LL), qword_140C4E508 = 0LL, v8 = v12, v12 != 1073742484)
        || v9 )
      {
LABEL_52:
        v6 = 0;
      }
      else
      {
        v8 = 0;
        MiResumeFromHibernate(HIDWORD(v18));
        v6 = 1;
      }
      goto LABEL_53;
    }
    if ( (WORD4(v18) & 0x400) == 0 )
    {
      if ( (BYTE8(v18) & 4) != 0 )
      {
        HIDWORD(v18) = 7;
LABEL_29:
        LODWORD(v19) = 2;
        goto LABEL_30;
      }
      if ( (BYTE8(v18) & 8) == 0 )
        goto LABEL_31;
    }
    HIDWORD(v18) = 0;
    goto LABEL_29;
  }
  return result;
}
