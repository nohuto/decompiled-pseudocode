/*
 * XREFs of CiSchedulerRemoveTaskIndex @ 0x1C0002CB0
 * Callers:
 *     CiTaskIndexDereference @ 0x1C0002070 (CiTaskIndexDereference.c)
 * Callees:
 *     CiSchedulerUpdateTimer @ 0x1C0001F80 (CiSchedulerUpdateTimer.c)
 *     CiSchedulerSetTaskIndexThreadTag @ 0x1C00029D0 (CiSchedulerSetTaskIndexThreadTag.c)
 *     CiSchedulerRemoveDeadline @ 0x1C0002E70 (CiSchedulerRemoveDeadline.c)
 *     CiSystemUpdateMediaBufferingState @ 0x1C0002F30 (CiSystemUpdateMediaBufferingState.c)
 */

void __fastcall CiSchedulerRemoveTaskIndex(__int64 a1)
{
  char v2; // di
  unsigned __int64 v3; // rsi
  int v4; // eax
  int v5; // eax
  unsigned int v6; // eax
  __int64 v7; // [rsp+30h] [rbp+8h] BYREF

  v7 = 0LL;
  v2 = 0;
  v3 = KeQueryInterruptTimePrecise(&v7);
  KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)&WPP_MAIN_CB.Queue.Wcb.DeviceObject);
  WPP_MAIN_CB.Queue.Wcb.CurrentIrp = KeGetCurrentThread();
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
  v4 = *(_DWORD *)(a1 + 184);
  if ( (v4 & 4) != 0 )
  {
    --CiTotalTasksDeadlineExpired;
    v6 = v4 & 0xFFFFFFFB;
    *(_DWORD *)(a1 + 184) = v6;
    if ( (v6 & 8) != 0 )
    {
      ++CiTotalTasksBuffering;
      *(_DWORD *)(a1 + 184) = v6 & 0xFFFFFFF5 | 2;
      CiSystemUpdateMediaBufferingState();
      CiSchedulerSetTaskIndexThreadTag(a1, 1u);
    }
    else
    {
      CiSchedulerSetTaskIndexThreadTag(a1, 3u);
      CiSystemUpdateMediaBufferingState();
    }
  }
  v5 = *(_DWORD *)(a1 + 184);
  if ( (v5 & 2) != 0 )
  {
    *(_DWORD *)(a1 + 184) = v5 & 0xFFFFFFFD;
    CiSchedulerSetTaskIndexThreadTag(a1, 3u);
    --CiTotalTasksBuffering;
    CiSystemUpdateMediaBufferingState();
  }
  WPP_MAIN_CB.Queue.Wcb.CurrentIrp = 0LL;
  KeReleaseSpinLock((PKSPIN_LOCK)&WPP_MAIN_CB.Queue.Wcb.DeviceObject, 0);
}
