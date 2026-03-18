/*
 * XREFs of CiSchedulerProcessDeadlines @ 0x1C00013B0
 * Callers:
 *     CiSchedulerDeepSleep @ 0x1C0001190 (CiSchedulerDeepSleep.c)
 *     CiSchedulerSleep @ 0x1C0001220 (CiSchedulerSleep.c)
 * Callees:
 *     CiSchedulerQueryCurrentTime @ 0x1C00015E0 (CiSchedulerQueryCurrentTime.c)
 *     CiSchedulerUpdateTimer @ 0x1C0001F80 (CiSchedulerUpdateTimer.c)
 *     CiSchedulerUpdateTaskIndexPriorities @ 0x1C0002020 (CiSchedulerUpdateTaskIndexPriorities.c)
 *     CiSchedulerSetTaskIndexThreadTag @ 0x1C00029D0 (CiSchedulerSetTaskIndexThreadTag.c)
 *     CiSystemUpdateMediaBufferingState @ 0x1C0002F30 (CiSystemUpdateMediaBufferingState.c)
 *     CiLogTaskIndexDeadlineExpired @ 0x1C00041E4 (CiLogTaskIndexDeadlineExpired.c)
 *     CiLogTaskIndexPreDeadlineExpired @ 0x1C0004254 (CiLogTaskIndexPreDeadlineExpired.c)
 *     CiLogTurboEngaged @ 0x1C00045E0 (CiLogTurboEngaged.c)
 */

bool __fastcall CiSchedulerProcessDeadlines(_DWORD *a1)
{
  int v2; // ebx
  int v3; // r15d
  unsigned __int64 v4; // rbp
  unsigned __int64 DeviceObjectExtension; // rsi
  bool v6; // zf
  int v7; // eax
  int v9; // r12d
  unsigned __int64 v10; // r13
  int v11; // eax
  int v12; // eax

  if ( !*(_QWORD *)&WPP_MAIN_CB.SectorSize )
    return 0;
  v2 = 0;
  v3 = 0;
  v4 = CiSchedulerQueryCurrentTime() + 2000;
  KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)&WPP_MAIN_CB.Queue.Wcb.DeviceObject);
  WPP_MAIN_CB.Queue.Wcb.CurrentIrp = KeGetCurrentThread();
  CiSchedulerTimerNode = 2LL;
  if ( ((__int64)WPP_MAIN_CB.DeviceObjectExtension & 1) != 0 )
  {
    if ( WPP_MAIN_CB.DeviceObjectExtension == (struct _DEVOBJ_EXTENSION *)1 )
      goto LABEL_21;
    DeviceObjectExtension = (unsigned __int64)WPP_MAIN_CB.DeviceObjectExtension ^ ((unsigned __int64)&WPP_MAIN_CB.SectorSize
                                                                                 + 1);
  }
  else
  {
    DeviceObjectExtension = (unsigned __int64)WPP_MAIN_CB.DeviceObjectExtension;
  }
  if ( !DeviceObjectExtension )
    goto LABEL_21;
  while ( *(_QWORD *)(DeviceObjectExtension + 24) <= v4 )
  {
    RtlRbRemoveNode(&WPP_MAIN_CB.SectorSize, DeviceObjectExtension);
    v6 = *(_DWORD *)(DeviceObjectExtension + 32) == 1;
    *(_QWORD *)(DeviceObjectExtension + 24) = 0LL;
    if ( !v6 )
    {
      v7 = 16;
      goto LABEL_8;
    }
    v9 = 0;
    if ( *(_BYTE *)(DeviceObjectExtension + 36) )
    {
      v10 = DeviceObjectExtension - 96;
    }
    else
    {
      v12 = *(_DWORD *)(DeviceObjectExtension + 128);
      v10 = DeviceObjectExtension - 56;
      if ( (v12 & 1) != 0 )
      {
        v3 = 1;
        ++CiTotalTasksDeadlineExpired;
        v9 = 1;
        *(_DWORD *)(v10 + 184) = v12 | 4;
      }
    }
    CiSchedulerUpdateTaskIndexPriorities(v10);
    v11 = *(_DWORD *)(v10 + 184);
    if ( (v11 & 2) == 0 )
      goto LABEL_25;
    if ( *(_BYTE *)(DeviceObjectExtension + 36) || !*(_BYTE *)(v10 + 132) || v9 )
    {
      *(_DWORD *)(v10 + 184) = v11 & 0xFFFFFFFD;
      CiSchedulerSetTaskIndexThreadTag(v10, 3LL);
      --CiTotalTasksBuffering;
LABEL_25:
      if ( v9 )
        CiSchedulerSetTaskIndexThreadTag(v10, 2LL);
    }
    if ( byte_1C00073C0 )
    {
      if ( *(_BYTE *)(DeviceObjectExtension + 36) )
        CiLogTaskIndexPreDeadlineExpired(v10);
      else
        CiLogTaskIndexDeadlineExpired(v10);
    }
    v7 = 32;
LABEL_8:
    v2 |= v7;
    if ( ((__int64)WPP_MAIN_CB.DeviceObjectExtension & 1) != 0 )
    {
      if ( WPP_MAIN_CB.DeviceObjectExtension == (struct _DEVOBJ_EXTENSION *)1 )
        break;
      DeviceObjectExtension = (unsigned __int64)WPP_MAIN_CB.DeviceObjectExtension ^ ((unsigned __int64)&WPP_MAIN_CB.SectorSize
                                                                                   + 1);
    }
    else
    {
      DeviceObjectExtension = (unsigned __int64)WPP_MAIN_CB.DeviceObjectExtension;
    }
    if ( !DeviceObjectExtension )
      break;
  }
  if ( (v2 & 0x20) != 0 )
  {
    if ( v3 )
    {
      if ( CiCurrentMediaBufferingState )
      {
        CiCurrentMediaBufferingState = 0;
        PoNotifyMediaBuffering(0LL);
      }
    }
    else
    {
      CiSystemUpdateMediaBufferingState();
    }
  }
  if ( (v2 & 0x10) == 0 )
LABEL_21:
    CiSchedulerUpdateTimer(v4 - 2000);
  WPP_MAIN_CB.Queue.Wcb.CurrentIrp = 0LL;
  KeReleaseSpinLock((PKSPIN_LOCK)&WPP_MAIN_CB.Queue.Wcb.DeviceObject, 0);
  if ( v3 )
  {
    if ( byte_1C00073C0 )
      CiLogTurboEngaged();
    PoLatencySensitivityHint(4LL);
  }
  *a1 |= _InterlockedExchange(&CiSchedulerWakeupReason, 0) | v2;
  return (*a1 & 0xFFFFFFDF) != 0;
}
