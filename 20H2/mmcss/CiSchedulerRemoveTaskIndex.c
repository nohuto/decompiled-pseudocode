/*
 * XREFs of CiSchedulerRemoveTaskIndex @ 0x1C0002A80
 * Callers:
 *     CiTaskIndexDereference @ 0x1C0001B60 (CiTaskIndexDereference.c)
 * Callees:
 *     CiSchedulerSetTaskIndexThreadTag @ 0x1C0001010 (CiSchedulerSetTaskIndexThreadTag.c)
 *     CiSchedulerUpdateTimer @ 0x1C0002990 (CiSchedulerUpdateTimer.c)
 *     CiSystemUpdateMediaBufferingState @ 0x1C0002A30 (CiSystemUpdateMediaBufferingState.c)
 *     CiSchedulerRemoveDeadline @ 0x1C0002C60 (CiSchedulerRemoveDeadline.c)
 */

void __fastcall CiSchedulerRemoveTaskIndex(__int64 a1)
{
  char v2; // di
  unsigned __int64 v3; // rsi
  struct _KTHREAD *CurrentThread; // rcx
  int v5; // eax
  int v6; // eax
  unsigned int v7; // eax
  __int64 v8; // rcx
  __int64 v9; // rcx
  __int64 v10; // [rsp+30h] [rbp+8h] BYREF

  v10 = 0LL;
  v2 = 0;
  v3 = KeQueryInterruptTimePrecise(&v10);
  KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)&WPP_MAIN_CB.Queue.Wcb.DeviceObject);
  CurrentThread = KeGetCurrentThread();
  WPP_MAIN_CB.Queue.Wcb.CurrentIrp = CurrentThread;
  if ( *(_QWORD *)(a1 + 80) )
  {
    CiSchedulerRemoveDeadline(a1 + 56);
    v2 = 1;
  }
  if ( *(_QWORD *)(a1 + 120) )
  {
    CiSchedulerRemoveDeadline(a1 + 96);
  }
  else if ( !v2 )
  {
    goto LABEL_5;
  }
  CiSchedulerUpdateTimer(v3);
LABEL_5:
  v5 = *(_DWORD *)(a1 + 184);
  if ( (v5 & 4) != 0 )
  {
    --CiTotalTasksDeadlineExpired;
    v7 = v5 & 0xFFFFFFFB;
    *(_DWORD *)(a1 + 184) = v7;
    if ( (v7 & 8) != 0 )
    {
      ++CiTotalTasksBuffering;
      *(_DWORD *)(a1 + 184) = v7 & 0xFFFFFFF5 | 2;
      CiSystemUpdateMediaBufferingState((__int64)CurrentThread);
      CiSchedulerSetTaskIndexThreadTag(a1, 1u);
    }
    else
    {
      CiSchedulerSetTaskIndexThreadTag(a1, 0);
      CiSystemUpdateMediaBufferingState(v8);
    }
  }
  v6 = *(_DWORD *)(a1 + 184);
  if ( (v6 & 2) != 0 )
  {
    *(_DWORD *)(a1 + 184) = v6 & 0xFFFFFFFD;
    CiSchedulerSetTaskIndexThreadTag(a1, 0);
    --CiTotalTasksBuffering;
    CiSystemUpdateMediaBufferingState(v9);
  }
  WPP_MAIN_CB.Queue.Wcb.CurrentIrp = 0LL;
  KeReleaseSpinLock((PKSPIN_LOCK)&WPP_MAIN_CB.Queue.Wcb.DeviceObject, 0);
}
