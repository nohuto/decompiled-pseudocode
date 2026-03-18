/*
 * XREFs of MmDuplicateMemory @ 0x140A487C0
 * Callers:
 *     MmCreateMirror @ 0x14096BA60 (MmCreateMirror.c)
 *     PopTransitionToSleep @ 0x140A48630 (PopTransitionToSleep.c)
 *     IopLiveDumpCaptureMemoryPages @ 0x140A65D84 (IopLiveDumpCaptureMemoryPages.c)
 *     IopLiveDumpEstimateMemoryPages @ 0x140A666B0 (IopLiveDumpEstimateMemoryPages.c)
 *     PnprInitiateReplaceOperation @ 0x140A67C74 (PnprInitiateReplaceOperation.c)
 * Callees:
 *     MmUnlockPagableImageSection @ 0x140241620 (MmUnlockPagableImageSection.c)
 *     ExAcquirePushLockExclusiveEx @ 0x1402AC910 (ExAcquirePushLockExclusiveEx.c)
 *     KeWaitForSingleObject @ 0x1402AF080 (KeWaitForSingleObject.c)
 *     KeAbPostRelease @ 0x1402AFC00 (KeAbPostRelease.c)
 *     KeSetEvent @ 0x1402AFD30 (KeSetEvent.c)
 *     KiCheckForKernelApcDelivery @ 0x1402F1D50 (KiCheckForKernelApcDelivery.c)
 *     ExQueueWorkItem @ 0x140345FC0 (ExQueueWorkItem.c)
 *     ExfTryToWakePushLock @ 0x140359F40 (ExfTryToWakePushLock.c)
 *     MiUnlockDynamicMemoryExclusive @ 0x14036071C (MiUnlockDynamicMemoryExclusive.c)
 *     MiLockDynamicMemoryExclusive @ 0x140360A00 (MiLockDynamicMemoryExclusive.c)
 *     MiMirrorBlackPhase @ 0x14038A168 (MiMirrorBlackPhase.c)
 *     MiLockAllMemoryLists @ 0x14038A214 (MiLockAllMemoryLists.c)
 *     MiUnlockAllMemoryLists @ 0x14038A250 (MiUnlockAllMemoryLists.c)
 *     MiResumeFromHibernate @ 0x14038A288 (MiResumeFromHibernate.c)
 *     MiMirrorVerify @ 0x14038A3DC (MiMirrorVerify.c)
 *     CcNotifyWriteBehind @ 0x14038A808 (CcNotifyWriteBehind.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x140418E4C (KiRemoveSystemWorkPriorityKick.c)
 *     _guard_dispatch_icall @ 0x14042A5E0 (_guard_dispatch_icall.c)
 *     MmLockPagableSectionByHandle @ 0x1406BC300 (MmLockPagableSectionByHandle.c)
 *     MiUpdateMirrorBitmaps @ 0x1407FD634 (MiUpdateMirrorBitmaps.c)
 *     MiActOnMirrorBitmap @ 0x1407FD674 (MiActOnMirrorBitmap.c)
 *     MiMirrorBrownPhase @ 0x140A48B0C (MiMirrorBrownPhase.c)
 */

NTSTATUS __fastcall MmDuplicateMemory(__int64 a1)
{
  int v1; // edx
  unsigned __int8 v2; // r13
  unsigned __int8 v4; // r12
  int v5; // r14d
  struct _KTHREAD *CurrentThread; // rsi
  NTSTATUS result; // eax
  int v8; // r14d
  int v9; // edi
  int v10; // eax
  bool v11; // zf
  unsigned __int8 v12; // r10
  _DWORD *v13; // r9
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  int v17; // eax
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
  v5 = 0;
  HIDWORD(v18) = 8;
  BYTE4(v19) = 0;
  CurrentThread = KeGetCurrentThread();
  result = KeWaitForSingleObject(
             &stru_140C529D0,
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
    ExAcquirePushLockExclusiveEx((ULONG_PTR)&qword_140C51F08, 0LL);
    MiLockDynamicMemoryExclusive((__int64)&MiSystemPartition, (__int64)CurrentThread);
    _InterlockedIncrement(&dword_140C53440);
    if ( !(unsigned int)MiUpdateMirrorBitmaps() )
    {
      v9 = -1073741670;
LABEL_35:
      dword_140C529CC = 0;
      if ( BYTE4(v19) )
        _InterlockedAdd(&dword_140C5325C, 0xFFFFFFFF);
      if ( qword_140C52A08 )
        qword_140C52A08 = 0LL;
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
              v17 = ~(unsigned __int16)(-1LL << (v2 + 1));
              v11 = (v17 & SchedulerAssist[5]) == 0;
              SchedulerAssist[5] &= v17;
              if ( v11 )
                KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
            }
          }
        }
        __writecr8(v2);
      }
      if ( v5 )
      {
        stru_140C529E8.Parameter = (void *)HIDWORD(v18);
        ExQueueWorkItem(&stru_140C529E8, HyperCriticalWorkQueue);
      }
      else
      {
        _InterlockedAdd(&dword_140C53440, 0xFFFFFFFF);
        KeSetEvent(&stru_140C529D0, 0, 0);
      }
      MiUnlockDynamicMemoryExclusive((__int64)&MiSystemPartition, (__int64)CurrentThread);
      if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&qword_140C51F08, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
        ExfTryToWakePushLock(&qword_140C51F08);
      KeAbPostRelease((ULONG_PTR)&qword_140C51F08);
      v11 = CurrentThread->SpecialApcDisable++ == -1;
      if ( v11
        && ($CEA84C04E3712D858E5667A507841A2A *)CurrentThread->ApcState.ApcListHead[0].Flink != &CurrentThread->152 )
      {
        KiCheckForKernelApcDelivery();
      }
      if ( (MiFlags & 4) == 0 )
        MmUnlockPagableImageSection(ExPageLockHandle);
      return v9;
    }
    MiActOnMirrorBitmap((__int64)&qword_140C52A20, 1);
    v8 = 1;
    LODWORD(v19) = 0;
    if ( (BYTE8(v18) & 1) != 0 )
    {
      LODWORD(v19) = 3;
      goto LABEL_18;
    }
    if ( (WORD4(v18) & 0x400) == 0 )
    {
      if ( (BYTE8(v18) & 4) != 0 )
      {
        HIDWORD(v18) = 7;
LABEL_17:
        LODWORD(v19) = 2;
LABEL_18:
        v8 = 0;
        goto LABEL_19;
      }
      if ( (BYTE8(v18) & 8) == 0 )
      {
LABEL_19:
        v9 = (*(__int64 (**)(void))a1)();
        if ( v9 < 0 )
          goto LABEL_74;
        dword_140C529CC = 1;
        v9 = MiMirrorBrownPhase(&v18);
        if ( v9 < 0 )
          goto LABEL_74;
        if ( (BYTE8(v18) & 2) == 0 && BYTE4(v19) )
        {
          _InterlockedAdd(&dword_140C5325C, 0xFFFFFFFF);
          BYTE4(v19) = 0;
        }
        v2 = KeGetCurrentIrql();
        v9 = (*(__int64 (__fastcall **)(_QWORD))(a1 + 8))(0LL);
        if ( v9 < 0 )
          goto LABEL_74;
        v4 = KeGetCurrentIrql();
        if ( *(_QWORD *)(a1 + 24) )
          MiActOnMirrorBitmap((__int64)qword_140C52A10, 1);
        if ( v4 < 2u )
        {
          v12 = KeGetCurrentIrql();
          __writecr8(2uLL);
          if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && v12 <= 0xFu )
          {
            v13 = KeGetCurrentPrcb()->SchedulerAssist;
            v13[5] |= (-1 << (v12 + 1)) & 4;
          }
          v4 = v12;
        }
        MiLockAllMemoryLists();
        qword_140C52A08 = (__int64)CurrentThread;
        if ( BYTE4(v19) )
        {
          _InterlockedAdd(&dword_140C5325C, 0xFFFFFFFF);
          BYTE4(v19) = 0;
        }
        dword_140C529CC = 2;
        v9 = MiMirrorBlackPhase((__int64 *)&v18);
        if ( v9 < 0
          || (v9 = MiMirrorVerify(a1), v9 < 0)
          || (v10 = (*(__int64 (__fastcall **)(__int64))(a1 + 8))(1LL),
              qword_140C52A08 = 0LL,
              v9 = v10,
              v10 != 1073742484)
          || v8 )
        {
LABEL_74:
          v5 = 0;
        }
        else
        {
          v9 = 0;
          MiResumeFromHibernate(HIDWORD(v18));
          v5 = 1;
        }
        goto LABEL_35;
      }
    }
    HIDWORD(v18) = 0;
    goto LABEL_17;
  }
  return result;
}
