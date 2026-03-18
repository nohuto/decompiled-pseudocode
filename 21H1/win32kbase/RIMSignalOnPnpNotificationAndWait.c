/*
 * XREFs of RIMSignalOnPnpNotificationAndWait @ 0x1C01748F4
 * Callers:
 *     RIMDeviceClassNotify @ 0x1C009F050 (RIMDeviceClassNotify.c)
 *     RIMDeviceNotify @ 0x1C01745E0 (RIMDeviceNotify.c)
 *     RIMVirtDeviceClassNotify @ 0x1C0174BE8 (RIMVirtDeviceClassNotify.c)
 *     rimDoVirtRimDevChange @ 0x1C0175A60 (rimDoVirtRimDevChange.c)
 *     ?ivHandlePnpSyncPacket@CBaseInput@@AEAA?AW4IVHandlerResult@@PEAXPEAURawInputManagerObject@@@Z @ 0x1C01BB610 (-ivHandlePnpSyncPacket@CBaseInput@@AEAA-AW4IVHandlerResult@@PEAXPEAURawInputManagerObject@@@Z.c)
 * Callees:
 *     RawInputManagerDeviceObjectReference @ 0x1C005A910 (RawInputManagerDeviceObjectReference.c)
 *     RIMLockExclusive @ 0x1C0069440 (RIMLockExclusive.c)
 *     WPP_RECORDER_SF_qq @ 0x1C00A01C0 (WPP_RECORDER_SF_qq.c)
 *     RIMWaitForPriorPnpWorkToComplete @ 0x1C01751D4 (RIMWaitForPriorPnpWorkToComplete.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C02015EC (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

__int64 __fastcall RIMSignalOnPnpNotificationAndWait(__int64 a1, __int64 a2, int a3, int a4, int a5, int a6)
{
  __int64 v10; // rcx
  int v11; // ebp
  int v12; // eax
  LARGE_INTEGER PerformanceCounter; // rax

  v11 = RawInputManagerDeviceObjectReference(*(void **)(a2 + 32));
  if ( v11 >= 0 )
  {
    RIMWaitForPriorPnpWorkToComplete(a1, a2);
    if ( !*(_BYTE *)(a1 + 80) && !*(_BYTE *)(a1 + 81) )
    {
      if ( __CFSHR__(*(_DWORD *)(a2 + 184), 5) || *(_QWORD *)(a2 + 312) || (v12 = *(_DWORD *)(a1 + 884), (v12 & 1) != 0) )
      {
        DbgkWerCaptureLiveKernelDump(
          L"win32kbase.sys",
          356LL,
          -__CFSHR__(*(_DWORD *)(a2 + 184), 5),
          *(_QWORD *)(a2 + 312),
          -(*(_DWORD *)(a1 + 884) & 1),
          0LL,
          0LL,
          0LL,
          0);
        v12 = *(_DWORD *)(a1 + 884);
      }
      *(_DWORD *)(a1 + 884) = v12 | 1;
      *(_DWORD *)(a2 + 184) = *(_DWORD *)(a2 + 184) & 0xFFFFFFF0 | (a6 != 0 ? 8 : 0) | (a5 != 0 ? 4 : 0) | (a4 != 0 ? 2 : 0) | (a3 != 0) | 0x10;
      *(_QWORD *)(a2 + 312) = KeGetCurrentThread();
      RIMLockExclusive((__int64)&gWatchDogQPCLock);
      *(_DWORD *)(a2 + 368) = 1;
      PerformanceCounter = KeQueryPerformanceCounter(0LL);
      *(LARGE_INTEGER *)(a2 + 360) = PerformanceCounter;
      *(LARGE_INTEGER *)(a1 + 728) = PerformanceCounter;
      *(_DWORD *)(a1 + 720) = 1;
      qword_1C0256368 = 0LL;
      ExReleasePushLockExclusiveEx(&gWatchDogQPCLock, 0LL);
      KeLeaveCriticalRegion();
      ZwSetEvent(*(HANDLE *)(a1 + 384), 0LL);
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        WPP_RECORDER_SF_qq(
          (__int64)gRimLog,
          4u,
          1u,
          0x2Cu,
          (__int64)&WPP_a75f261dfb463415346bb11edf387329_Traceguids,
          a1,
          a2);
      *(_QWORD *)(a1 + 112) = 0LL;
      ExReleasePushLockExclusiveEx(a1 + 104, 0LL);
      KeLeaveCriticalRegion();
      KeWaitForSingleObject(*(PVOID *)(a2 + 352), WrUserRequest, 0, 0, 0LL);
      RIMLockExclusive(a1 + 104);
      *(_QWORD *)(a2 + 312) = 0LL;
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        WPP_RECORDER_SF_qq(
          (__int64)gRimLog,
          4u,
          1u,
          0x2Du,
          (__int64)&WPP_a75f261dfb463415346bb11edf387329_Traceguids,
          a1,
          a2);
      *(_DWORD *)(a1 + 884) &= ~1u;
      RIMLockExclusive((__int64)&gWatchDogQPCLock);
      *(_DWORD *)(a2 + 368) = 0;
      *(_QWORD *)(a2 + 360) = 0LL;
      *(_QWORD *)(a1 + 728) = 0LL;
      qword_1C0256368 = 0LL;
      ExReleasePushLockExclusiveEx(&gWatchDogQPCLock, 0LL);
      KeLeaveCriticalRegion();
    }
    ObfDereferenceObject(*(PVOID *)(a2 + 32));
  }
  else
  {
    MicrosoftTelemetryAssertTriggeredNoArgsKM(v10);
  }
  return (unsigned int)v11;
}
