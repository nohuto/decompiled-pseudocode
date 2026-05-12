/*
 * XREFs of RaidAdapterDeferredRoutine @ 0x1C000FF20
 * Callers:
 *     <none>
 * Callees:
 *     RaidAdapterFindUnit @ 0x1C00075A4 (RaidAdapterFindUnit.c)
 *     RaidFreeDeferredItem @ 0x1C000FFF0 (RaidFreeDeferredItem.c)
 *     RaidSetUnitPauseTimer @ 0x1C0010018 (RaidSetUnitPauseTimer.c)
 *     RaidAdapterResumeUnit @ 0x1C0010064 (RaidAdapterResumeUnit.c)
 *     RaidAdapterRestartQueues @ 0x1C00120DC (RaidAdapterRestartQueues.c)
 *     RaidResumeAdapterQueue @ 0x1C00121B0 (RaidResumeAdapterQueue.c)
 *     RaidAdapterCancelPauseTimer @ 0x1C002A770 (RaidAdapterCancelPauseTimer.c)
 *     RaidAdapterDeviceBusy @ 0x1C002B3D4 (RaidAdapterDeviceBusy.c)
 *     RaidAdapterDeviceReady @ 0x1C002B4A8 (RaidAdapterDeviceReady.c)
 *     RaidAdapterLogIoError @ 0x1C002C340 (RaidAdapterLogIoError.c)
 *     RaidAdapterRequestTimer @ 0x1C002D1FC (RaidAdapterRequestTimer.c)
 *     RaidAdapterSetPauseTimer @ 0x1C002E968 (RaidAdapterSetPauseTimer.c)
 *     WPP_SF_ddd @ 0x1C003248C (WPP_SF_ddd.c)
 *     RaidUnitProcessAsyncNotification @ 0x1C0049F88 (RaidUnitProcessAsyncNotification.c)
 *     StorSetIoGatewayNotBusy @ 0x1C004D438 (StorSetIoGatewayNotBusy.c)
 */

void __fastcall RaidAdapterDeferredRoutine(__int64 a1, LARGE_INTEGER *a2, __int64 a3)
{
  __int64 v3; // rdi
  LARGE_INTEGER *v4; // rsi
  int LowPart; // ecx
  int v6; // ecx
  int v7; // ecx
  int v8; // ecx
  int v9; // ecx
  int v10; // ecx
  int HighPart; // ebx
  unsigned int v12; // ebp
  __int64 Unit; // rax
  unsigned int v14; // r8d
  unsigned int v15; // eax
  unsigned int v16; // edx
  int v17; // ecx
  int v18; // ecx
  int v19; // ecx
  int v20; // ecx
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+30h] [rbp-28h] BYREF

  v3 = *(_QWORD *)(a1 + 64);
  v4 = a2;
  _InterlockedIncrement((volatile signed __int32 *)(v3 + 4264));
  LowPart = a2[4].LowPart;
  if ( LowPart > 7 )
  {
    v17 = LowPart - 8;
    if ( !v17 )
    {
      StorSetIoGatewayNotBusy(v3 + 832, a2, a3);
      goto LABEL_43;
    }
    v18 = v17 - 1;
    if ( v18 )
    {
      v19 = v18 - 1;
      if ( v19 )
      {
        v20 = v19 - 1;
        if ( v20 )
        {
          if ( v20 == 1 )
            RaidUnitProcessAsyncNotification(v3, (unsigned int)a2[4].HighPart);
        }
        else
        {
          KeSetCoalescableTimer((PKTIMER)(a2[5].QuadPart + 8), a2[6], 0, a2[7].LowPart, (PKDPC)(a2[5].QuadPart + 72));
        }
      }
      else
      {
        RaidAdapterDeviceReady(v3, (unsigned int)a2[4].HighPart);
      }
    }
    else
    {
      RaidAdapterDeviceBusy(v3, (unsigned int)a2[4].HighPart, a2[5].LowPart);
    }
  }
  else if ( LowPart == 7 )
  {
    v14 = a2[5].LowPart;
    v15 = 0;
    memset(&LockHandle, 0, sizeof(LockHandle));
    if ( v3 != -832 && !*(_DWORD *)(v3 + 872) )
    {
      v16 = *(_DWORD *)(v3 + 1024);
      if ( v16 )
      {
        if ( v14 <= v16 )
          v15 = v16 - v14;
        *(_DWORD *)(v3 + 864) = v15;
        KeAcquireInStackQueuedSpinLockAtDpcLevel((PKSPIN_LOCK)(v3 + 832), &LockHandle);
        *(_DWORD *)(v3 + 872) = 1;
        KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
      }
    }
  }
  else
  {
    v6 = LowPart - 1;
    if ( !v6 )
    {
      ((void (__fastcall *)(_QWORD, _QWORD, _QWORD))RaidAdapterRequestTimer)(
        v3,
        (LARGE_INTEGER)a2[5].QuadPart,
        a2[6].LowPart);
      goto LABEL_10;
    }
    v7 = v6 - 1;
    if ( !v7 )
    {
      RaidAdapterLogIoError(v3, (unsigned int)a2[4].HighPart, a2[6].LowPart, (unsigned int)a2[6].HighPart);
      goto LABEL_10;
    }
    v8 = v7 - 1;
    if ( v8 )
    {
      v9 = v8 - 1;
      if ( v9 )
      {
        v10 = v9 - 1;
        if ( v10 )
        {
          if ( v10 == 1 )
            RaidAdapterResumeUnit(v3, (unsigned int)a2[4].HighPart);
        }
        else
        {
          HighPart = a2[4].HighPart;
          v12 = a2[5].LowPart;
          Unit = RaidAdapterFindUnit(v3, HighPart);
          if ( Unit )
          {
            RaidSetUnitPauseTimer(Unit, 1000 * v12);
          }
          else if ( WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
                 && (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x20) != 0
                 && BYTE1(WPP_GLOBAL_Control->Timer) >= 3u )
          {
            WPP_SF_ddd(
              WPP_GLOBAL_Control->AttachedDevice,
              52LL,
              &WPP_026814134b593ed6508f665f094ed446_Traceguids,
              (unsigned __int8)HighPart,
              BYTE1(HighPart),
              BYTE2(HighPart));
          }
        }
      }
      else
      {
        RaidFreeDeferredItem(v3 + 1152);
        v4 = 0LL;
        if ( !*(_DWORD *)(v3 + 1524) )
          RaidAdapterCancelPauseTimer(v3, v3 + 1920);
      }
      goto LABEL_10;
    }
    RaidFreeDeferredItem(v3 + 1152);
    v4 = 0LL;
    if ( *(_DWORD *)(v3 + 1524) == 1 )
    {
      RaidAdapterSetPauseTimer(v3, v3 + 1920, v3 + 1792, *(unsigned int *)(v3 + 1520));
      goto LABEL_10;
    }
    if ( !(unsigned int)RaidResumeAdapterQueue(v3) )
LABEL_43:
      RaidAdapterRestartQueues(v3);
  }
LABEL_10:
  _InterlockedDecrement((volatile signed __int32 *)(v3 + 4264));
  if ( v4 )
    RaidFreeDeferredItem(v3 + 1152);
}
