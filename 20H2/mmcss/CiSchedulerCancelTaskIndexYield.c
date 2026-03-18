/*
 * XREFs of CiSchedulerCancelTaskIndexYield @ 0x1C0002B50
 * Callers:
 *     CiDispatchFastIoDeviceControl @ 0x1C000A350 (CiDispatchFastIoDeviceControl.c)
 * Callees:
 *     CiSchedulerSetTaskIndexThreadTag @ 0x1C0001010 (CiSchedulerSetTaskIndexThreadTag.c)
 *     CiSystemUpdateMediaBufferingState @ 0x1C0002A30 (CiSystemUpdateMediaBufferingState.c)
 *     CiSchedulerUpdateTaskIndexPriorities @ 0x1C0002C20 (CiSchedulerUpdateTaskIndexPriorities.c)
 *     CiSchedulerRemoveDeadline @ 0x1C0002C60 (CiSchedulerRemoveDeadline.c)
 *     CiLogTaskIndexCancelYield @ 0x1C0003E84 (CiLogTaskIndexCancelYield.c)
 */

void __fastcall CiSchedulerCancelTaskIndexYield(__int64 a1)
{
  char v1; // di
  __int64 v3; // rcx
  int v4; // eax
  int v5; // eax
  unsigned int v6; // eax
  __int64 v7; // rcx
  __int64 v8; // rcx

  v1 = 0;
  if ( byte_1C0007358 )
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
    goto LABEL_8;
  }
  CiSchedulerUpdateTaskIndexPriorities(a1);
LABEL_8:
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
      CiSystemUpdateMediaBufferingState(v3);
      CiSchedulerSetTaskIndexThreadTag(a1, 1u);
    }
    else
    {
      CiSchedulerSetTaskIndexThreadTag(a1, 0);
      CiSystemUpdateMediaBufferingState(v7);
    }
  }
  v5 = *(_DWORD *)(a1 + 184);
  if ( (v5 & 2) != 0 )
  {
    *(_DWORD *)(a1 + 184) = v5 & 0xFFFFFFFD;
    CiSchedulerSetTaskIndexThreadTag(a1, 0);
    --CiTotalTasksBuffering;
    CiSystemUpdateMediaBufferingState(v8);
  }
  WPP_MAIN_CB.Queue.Wcb.CurrentIrp = 0LL;
  KeReleaseSpinLock((PKSPIN_LOCK)&WPP_MAIN_CB.Queue.Wcb.DeviceObject, 0);
}
