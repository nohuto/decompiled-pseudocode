/*
 * XREFs of RIMSignalOnPnpNotificationAndWait @ 0x1C016C194
 * Callers:
 *     RIMDeviceClassNotify @ 0x1C0026220 (RIMDeviceClassNotify.c)
 *     RIMDeviceNotify @ 0x1C016BE80 (RIMDeviceNotify.c)
 *     RIMVirtDeviceClassNotify @ 0x1C016C488 (RIMVirtDeviceClassNotify.c)
 *     rimDoVirtRimDevChange @ 0x1C016D300 (rimDoVirtRimDevChange.c)
 *     ?ivHandlePnpSyncPacket@CBaseInput@@AEAA?AW4IVHandlerResult@@PEAXPEAURawInputManagerObject@@@Z @ 0x1C01B3540 (-ivHandlePnpSyncPacket@CBaseInput@@AEAA-AW4IVHandlerResult@@PEAXPEAURawInputManagerObject@@@Z.c)
 * Callees:
 *     RawInputManagerDeviceObjectReference @ 0x1C0021BF0 (RawInputManagerDeviceObjectReference.c)
 *     RIMLockExclusive @ 0x1C0036330 (RIMLockExclusive.c)
 *     WPP_RECORDER_SF_qq @ 0x1C0077870 (WPP_RECORDER_SF_qq.c)
 *     RIMWaitForPriorPnpWorkToComplete @ 0x1C016CA74 (RIMWaitForPriorPnpWorkToComplete.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C01FA2AC (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

__int64 __fastcall RIMSignalOnPnpNotificationAndWait(__int64 a1, __int64 a2, int a3, int a4, int a5, int a6)
{
  __int64 v10; // rdx
  __int64 v11; // rcx
  int v12; // ebp
  __int64 v13; // r8
  __int64 v14; // r9
  int v15; // eax
  LARGE_INTEGER PerformanceCounter; // rax
  int v17; // edx
  int v18; // edx

  v12 = RawInputManagerDeviceObjectReference(*(void **)(a2 + 32));
  if ( v12 >= 0 )
  {
    RIMWaitForPriorPnpWorkToComplete(a1, a2);
    if ( !*(_BYTE *)(a1 + 80) && !*(_BYTE *)(a1 + 81) )
    {
      if ( __CFSHR__(*(_DWORD *)(a2 + 184), 5) || *(_QWORD *)(a2 + 312) || (v15 = *(_DWORD *)(a1 + 884), (v15 & 1) != 0) )
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
        v15 = *(_DWORD *)(a1 + 884);
      }
      *(_DWORD *)(a1 + 884) = v15 | 1;
      *(_DWORD *)(a2 + 184) = *(_DWORD *)(a2 + 184) & 0xFFFFFFF0 | (a6 != 0 ? 8 : 0) | (a5 != 0 ? 4 : 0) | (a4 != 0 ? 2 : 0) | (a3 != 0) | 0x10;
      *(_QWORD *)(a2 + 312) = KeGetCurrentThread();
      RIMLockExclusive((__int64)&gWatchDogQPCLock);
      *(_DWORD *)(a2 + 368) = 1;
      PerformanceCounter = KeQueryPerformanceCounter(0LL);
      *(LARGE_INTEGER *)(a2 + 360) = PerformanceCounter;
      *(LARGE_INTEGER *)(a1 + 728) = PerformanceCounter;
      *(_DWORD *)(a1 + 720) = 1;
      qword_1C024E398 = 0LL;
      ExReleasePushLockExclusiveEx(&gWatchDogQPCLock, 0LL);
      KeLeaveCriticalRegion();
      ZwSetEvent(*(HANDLE *)(a1 + 384), 0LL);
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        LOBYTE(v17) = 4;
        WPP_RECORDER_SF_qq(
          (_DWORD)gRimLog,
          v17,
          1,
          44,
          (__int64)&WPP_a75f261dfb463415346bb11edf387329_Traceguids,
          a1,
          a2);
      }
      *(_QWORD *)(a1 + 112) = 0LL;
      ExReleasePushLockExclusiveEx(a1 + 104, 0LL);
      KeLeaveCriticalRegion();
      KeWaitForSingleObject(*(PVOID *)(a2 + 352), WrUserRequest, 0, 0, 0LL);
      RIMLockExclusive(a1 + 104);
      *(_QWORD *)(a2 + 312) = 0LL;
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        LOBYTE(v18) = 4;
        WPP_RECORDER_SF_qq(
          (_DWORD)gRimLog,
          v18,
          1,
          45,
          (__int64)&WPP_a75f261dfb463415346bb11edf387329_Traceguids,
          a1,
          a2);
      }
      *(_DWORD *)(a1 + 884) &= ~1u;
      RIMLockExclusive((__int64)&gWatchDogQPCLock);
      *(_DWORD *)(a2 + 368) = 0;
      *(_QWORD *)(a2 + 360) = 0LL;
      *(_QWORD *)(a1 + 728) = 0LL;
      qword_1C024E398 = 0LL;
      ExReleasePushLockExclusiveEx(&gWatchDogQPCLock, 0LL);
      KeLeaveCriticalRegion();
    }
    ObfDereferenceObject(*(PVOID *)(a2 + 32));
  }
  else
  {
    MicrosoftTelemetryAssertTriggeredNoArgsKM(v11, v10, v13, v14);
  }
  return (unsigned int)v12;
}
