/*
 * XREFs of CiSchedulerProcessDeadlines @ 0x1C0001F40
 * Callers:
 *     CiSchedulerSleep @ 0x1C0001DB0 (CiSchedulerSleep.c)
 *     CiSchedulerDeepSleep @ 0x1C0002CC0 (CiSchedulerDeepSleep.c)
 * Callees:
 *     CiSchedulerSetTaskIndexThreadTag @ 0x1C0001010 (CiSchedulerSetTaskIndexThreadTag.c)
 *     CiSchedulerQueryCurrentTime @ 0x1C0002150 (CiSchedulerQueryCurrentTime.c)
 *     CiSchedulerUpdateTimer @ 0x1C0002990 (CiSchedulerUpdateTimer.c)
 *     CiSystemUpdateMediaBufferingState @ 0x1C0002A30 (CiSystemUpdateMediaBufferingState.c)
 *     CiSchedulerUpdateTaskIndexPriorities @ 0x1C0002C20 (CiSchedulerUpdateTaskIndexPriorities.c)
 *     CiLogTaskIndexDeadlineExpired @ 0x1C0003EF4 (CiLogTaskIndexDeadlineExpired.c)
 *     CiLogTaskIndexPreDeadlineExpired @ 0x1C0003F64 (CiLogTaskIndexPreDeadlineExpired.c)
 *     CiLogTurboEngaged @ 0x1C00042F0 (CiLogTurboEngaged.c)
 */

char __fastcall CiSchedulerProcessDeadlines(_DWORD *a1)
{
  char result; // al
  int v3; // ebx
  int v4; // r15d
  unsigned __int64 v5; // rbp
  unsigned __int64 DeviceObjectExtension; // rsi
  bool v7; // zf
  int v8; // eax
  int v9; // r12d
  __int64 v10; // r13
  int v11; // eax
  int v12; // eax

  result = WPP_MAIN_CB.SectorSize;
  if ( !*(_QWORD *)&WPP_MAIN_CB.SectorSize )
    return result;
  v3 = 0;
  v4 = 0;
  v5 = CiSchedulerQueryCurrentTime() + 2000;
  KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)&WPP_MAIN_CB.Queue.Wcb.DeviceObject);
  WPP_MAIN_CB.Queue.Wcb.CurrentIrp = KeGetCurrentThread();
  CiSchedulerTimerNode = 2LL;
  if ( ((__int64)WPP_MAIN_CB.DeviceObjectExtension & 1) == 0 )
  {
    DeviceObjectExtension = (unsigned __int64)WPP_MAIN_CB.DeviceObjectExtension;
    goto LABEL_4;
  }
  if ( WPP_MAIN_CB.DeviceObjectExtension != (struct _DEVOBJ_EXTENSION *)1 )
  {
    DeviceObjectExtension = (unsigned __int64)WPP_MAIN_CB.DeviceObjectExtension ^ ((unsigned __int64)&WPP_MAIN_CB.SectorSize
                                                                                 + 1);
LABEL_4:
    if ( DeviceObjectExtension )
    {
      while ( 1 )
      {
        if ( *(_QWORD *)(DeviceObjectExtension + 24) > v5 )
          goto LABEL_11;
        RtlRbRemoveNode(&WPP_MAIN_CB.SectorSize, DeviceObjectExtension);
        v7 = *(_DWORD *)(DeviceObjectExtension + 32) == 1;
        *(_QWORD *)(DeviceObjectExtension + 24) = 0LL;
        if ( !v7 )
        {
          v8 = 16;
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
            v4 = 1;
            ++CiTotalTasksDeadlineExpired;
            v9 = 1;
            *(_DWORD *)(v10 + 184) = v12 | 4;
          }
        }
        CiSchedulerUpdateTaskIndexPriorities(v10);
        v11 = *(_DWORD *)(v10 + 184);
        if ( (v11 & 2) == 0 )
          goto LABEL_23;
        if ( *(_BYTE *)(DeviceObjectExtension + 36) || !*(_BYTE *)(v10 + 132) || v9 )
          break;
LABEL_25:
        if ( byte_1C0007358 )
        {
          if ( *(_BYTE *)(DeviceObjectExtension + 36) )
            CiLogTaskIndexPreDeadlineExpired(v10);
          else
            CiLogTaskIndexDeadlineExpired(v10);
        }
        v8 = 32;
LABEL_8:
        v3 |= v8;
        if ( ((__int64)WPP_MAIN_CB.DeviceObjectExtension & 1) != 0 )
        {
          if ( WPP_MAIN_CB.DeviceObjectExtension == (struct _DEVOBJ_EXTENSION *)1 )
            goto LABEL_11;
          DeviceObjectExtension = (unsigned __int64)WPP_MAIN_CB.DeviceObjectExtension ^ ((unsigned __int64)&WPP_MAIN_CB.SectorSize
                                                                                       + 1);
        }
        else
        {
          DeviceObjectExtension = (unsigned __int64)WPP_MAIN_CB.DeviceObjectExtension;
        }
        if ( !DeviceObjectExtension )
          goto LABEL_11;
      }
      *(_DWORD *)(v10 + 184) = v11 & 0xFFFFFFFD;
      CiSchedulerSetTaskIndexThreadTag(v10, 0);
      --CiTotalTasksBuffering;
LABEL_23:
      if ( v9 )
        CiSchedulerSetTaskIndexThreadTag(v10, 2u);
      goto LABEL_25;
    }
  }
LABEL_11:
  if ( (v3 & 0x20) != 0 )
  {
    if ( v4 )
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
  if ( (v3 & 0x10) == 0 )
    CiSchedulerUpdateTimer(v5 - 2000);
  WPP_MAIN_CB.Queue.Wcb.CurrentIrp = 0LL;
  KeReleaseSpinLock((PKSPIN_LOCK)&WPP_MAIN_CB.Queue.Wcb.DeviceObject, 0);
  if ( v4 )
  {
    if ( byte_1C0007358 )
      CiLogTurboEngaged();
    PoLatencySensitivityHint(4LL);
  }
  *a1 |= _InterlockedExchange(&CiSchedulerWakeupReason, 0) | v3;
  return (*a1 & 0xFFFFFFDF) != 0;
}
