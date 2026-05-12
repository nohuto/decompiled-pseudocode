/*
 * XREFs of RaidAdapterDeferredRoutine @ 0x1C00027A0
 * Callers:
 *     <none>
 * Callees:
 *     RaidFreeDeferredItem @ 0x1C0002870 (RaidFreeDeferredItem.c)
 *     RaidSetUnitPauseTimer @ 0x1C0002898 (RaidSetUnitPauseTimer.c)
 *     RaidAdapterResumeUnit @ 0x1C00028E4 (RaidAdapterResumeUnit.c)
 *     RaidAdapterFindUnit @ 0x1C00065E4 (RaidAdapterFindUnit.c)
 *     RaidAdapterRestartQueues @ 0x1C001362C (RaidAdapterRestartQueues.c)
 *     RaidResumeAdapterQueue @ 0x1C0013704 (RaidResumeAdapterQueue.c)
 *     RaidAdapterCancelPauseTimer @ 0x1C002B5C0 (RaidAdapterCancelPauseTimer.c)
 *     RaidAdapterDeviceBusy @ 0x1C002C228 (RaidAdapterDeviceBusy.c)
 *     RaidAdapterDeviceReady @ 0x1C002C2FC (RaidAdapterDeviceReady.c)
 *     RaidAdapterLogIoError @ 0x1C002D198 (RaidAdapterLogIoError.c)
 *     RaidAdapterRequestTimer @ 0x1C002E064 (RaidAdapterRequestTimer.c)
 *     RaidAdapterSetPauseTimer @ 0x1C002F7CC (RaidAdapterSetPauseTimer.c)
 *     WPP_SF_ddd @ 0x1C003330C (WPP_SF_ddd.c)
 *     RaidUnitProcessAsyncNotification @ 0x1C004AD98 (RaidUnitProcessAsyncNotification.c)
 *     StorSetIoGatewayBusy @ 0x1C004E1CC (StorSetIoGatewayBusy.c)
 *     StorSetIoGatewayNotBusy @ 0x1C004E2F0 (StorSetIoGatewayNotBusy.c)
 */

char __fastcall RaidAdapterDeferredRoutine(__int64 a1, LARGE_INTEGER *a2)
{
  PDEVICE_OBJECT *v2; // rax
  __int64 v3; // rdi
  LARGE_INTEGER *v4; // rsi
  int LowPart; // ecx
  int v6; // ecx
  int v7; // ecx
  int v8; // ecx
  int v9; // ecx
  int v10; // ecx
  unsigned int HighPart; // ebx
  unsigned int v12; // ebp
  __int64 Unit; // rax
  int v14; // ecx
  int v15; // ecx
  int v16; // ecx
  int v17; // ecx
  _UNKNOWN *retaddr; // [rsp+38h] [rbp+0h] BYREF

  v2 = (PDEVICE_OBJECT *)&retaddr;
  v3 = *(_QWORD *)(a1 + 64);
  v4 = a2;
  _InterlockedIncrement((volatile signed __int32 *)(v3 + 4264));
  LowPart = a2[4].LowPart;
  if ( LowPart > 7 )
  {
    v14 = LowPart - 8;
    if ( !v14 )
    {
      StorSetIoGatewayNotBusy(v3 + 832);
      goto LABEL_38;
    }
    v15 = v14 - 1;
    if ( v15 )
    {
      v16 = v15 - 1;
      if ( v16 )
      {
        v17 = v16 - 1;
        if ( v17 )
        {
          if ( v17 == 1 )
            LOBYTE(v2) = ((__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD))RaidUnitProcessAsyncNotification)(
                           v3,
                           (unsigned int)a2[4].HighPart,
                           (LARGE_INTEGER)a2[5].QuadPart);
        }
        else
        {
          LOBYTE(v2) = KeSetCoalescableTimer(
                         (PKTIMER)(a2[5].QuadPart + 8),
                         a2[6],
                         0,
                         a2[7].LowPart,
                         (PKDPC)(a2[5].QuadPart + 72));
        }
      }
      else
      {
        LOBYTE(v2) = RaidAdapterDeviceReady(v3, (unsigned int)a2[4].HighPart);
      }
    }
    else
    {
      LOBYTE(v2) = RaidAdapterDeviceBusy(v3, (unsigned int)a2[4].HighPart, a2[5].LowPart);
    }
  }
  else
  {
    if ( LowPart == 7 )
    {
      LOBYTE(v2) = StorSetIoGatewayBusy((PKSPIN_LOCK)(v3 + 832));
      goto LABEL_10;
    }
    v6 = LowPart - 1;
    if ( !v6 )
    {
      LOBYTE(v2) = ((__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD))RaidAdapterRequestTimer)(
                     v3,
                     (LARGE_INTEGER)a2[5].QuadPart,
                     a2[6].LowPart);
      goto LABEL_10;
    }
    v7 = v6 - 1;
    if ( !v7 )
    {
      LOBYTE(v2) = RaidAdapterLogIoError(v3, (unsigned int)a2[4].HighPart, a2[6].LowPart, (unsigned int)a2[6].HighPart);
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
            LOBYTE(v2) = RaidAdapterResumeUnit(v3, (unsigned int)a2[4].HighPart);
        }
        else
        {
          HighPart = a2[4].HighPart;
          v12 = a2[5].LowPart;
          Unit = RaidAdapterFindUnit(v3, HighPart);
          if ( Unit )
          {
            LOBYTE(v2) = RaidSetUnitPauseTimer(Unit, 1000 * v12);
          }
          else
          {
            v2 = &WPP_GLOBAL_Control;
            if ( WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control )
            {
              LODWORD(v2) = HIDWORD(WPP_GLOBAL_Control->Timer);
              if ( ((unsigned __int8)v2 & 0x20) != 0 && BYTE1(WPP_GLOBAL_Control->Timer) >= 3u )
                LOBYTE(v2) = WPP_SF_ddd(
                               WPP_GLOBAL_Control->AttachedDevice,
                               52LL,
                               &WPP_7de55442f8f2316906ef02cf8f2423cb_Traceguids,
                               (unsigned __int8)HighPart,
                               BYTE1(HighPart),
                               BYTE2(HighPart));
            }
          }
        }
      }
      else
      {
        LOBYTE(v2) = RaidFreeDeferredItem(v3 + 1152);
        v4 = 0LL;
        if ( !*(_DWORD *)(v3 + 1524) )
          LOBYTE(v2) = RaidAdapterCancelPauseTimer(v3, v3 + 1920);
      }
      goto LABEL_10;
    }
    RaidFreeDeferredItem(v3 + 1152);
    v4 = 0LL;
    if ( *(_DWORD *)(v3 + 1524) == 1 )
    {
      LOBYTE(v2) = RaidAdapterSetPauseTimer(v3, v3 + 1920, v3 + 1792, *(unsigned int *)(v3 + 1520));
      goto LABEL_10;
    }
    LODWORD(v2) = RaidResumeAdapterQueue(v3);
    if ( !(_DWORD)v2 )
LABEL_38:
      LOBYTE(v2) = RaidAdapterRestartQueues(v3);
  }
LABEL_10:
  _InterlockedDecrement((volatile signed __int32 *)(v3 + 4264));
  if ( v4 )
    LOBYTE(v2) = RaidFreeDeferredItem(v3 + 1152);
  return (char)v2;
}
