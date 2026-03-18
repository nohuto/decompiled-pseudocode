/*
 * XREFs of CiSchedulerCancelTaskIndexYield @ 0x1C0002D80
 * Callers:
 *     CiDispatchFastIoDeviceControl @ 0x1C000AA20 (CiDispatchFastIoDeviceControl.c)
 * Callees:
 *     CiSchedulerUpdateTaskIndexPriorities @ 0x1C0002020 (CiSchedulerUpdateTaskIndexPriorities.c)
 *     CiSchedulerSetTaskIndexThreadTag @ 0x1C00029D0 (CiSchedulerSetTaskIndexThreadTag.c)
 *     CiSchedulerRemoveDeadline @ 0x1C0002E70 (CiSchedulerRemoveDeadline.c)
 *     CiSystemUpdateMediaBufferingState @ 0x1C0002F30 (CiSystemUpdateMediaBufferingState.c)
 *     CiLogTaskIndexCancelYield @ 0x1C0004174 (CiLogTaskIndexCancelYield.c)
 */

void __fastcall CiSchedulerCancelTaskIndexYield(__int64 a1)
{
  char v1; // di
  int v3; // eax
  int v4; // eax
  unsigned int v5; // eax

  v1 = 0;
  if ( byte_1C00073C0 )
    CiLogTaskIndexCancelYield();
  KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)&WPP_MAIN_CB.Queue.Wcb.DeviceObject);
  WPP_MAIN_CB.Queue.Wcb.CurrentIrp = KeGetCurrentThread();
  if ( *(_QWORD *)(a1 + 80) )
  {
    CiSchedulerRemoveDeadline(a1 + 56);
    v1 = 1;
  }
  if ( *(_BYTE *)(a1 + 132) && *(_QWORD *)(a1 + 120) )
  {
    CiSchedulerRemoveDeadline(a1 + 96);
  }
  else if ( !v1 )
  {
    goto LABEL_9;
  }
  CiSchedulerUpdateTaskIndexPriorities(a1);
LABEL_9:
  v3 = *(_DWORD *)(a1 + 184);
  if ( (v3 & 4) != 0 )
  {
    --CiTotalTasksDeadlineExpired;
    v5 = v3 & 0xFFFFFFFB;
    *(_DWORD *)(a1 + 184) = v5;
    if ( (v5 & 8) != 0 )
    {
      ++CiTotalTasksBuffering;
      *(_DWORD *)(a1 + 184) = v5 & 0xFFFFFFF5 | 2;
      CiSystemUpdateMediaBufferingState();
      CiSchedulerSetTaskIndexThreadTag(a1, 1u);
    }
    else
    {
      CiSchedulerSetTaskIndexThreadTag(a1, 3u);
      CiSystemUpdateMediaBufferingState();
    }
  }
  v4 = *(_DWORD *)(a1 + 184);
  if ( (v4 & 2) != 0 )
  {
    *(_DWORD *)(a1 + 184) = v4 & 0xFFFFFFFD;
    CiSchedulerSetTaskIndexThreadTag(a1, 3u);
    --CiTotalTasksBuffering;
    CiSystemUpdateMediaBufferingState();
  }
  WPP_MAIN_CB.Queue.Wcb.CurrentIrp = 0LL;
  KeReleaseSpinLock((PKSPIN_LOCK)&WPP_MAIN_CB.Queue.Wcb.DeviceObject, 0);
}
