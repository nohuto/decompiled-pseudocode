/*
 * XREFs of ?HandleSensorDispatcherSignal@IOCPDispatcher@@AEAAXI@Z @ 0x1C004179C
 * Callers:
 *     ?Dispatch@IOCPDispatcher@@QEAAXW4WaitCompletionPacketPurpose@@K@Z @ 0x1C0064850 (-Dispatch@IOCPDispatcher@@QEAAXW4WaitCompletionPacketPurpose@@K@Z.c)
 * Callees:
 *     ?Cleanup@SensorIOCPWCP@IOCPDispatcher@@QEAAXXZ @ 0x1C0045128 (-Cleanup@SensorIOCPWCP@IOCPDispatcher@@QEAAXXZ.c)
 *     ?SetupIOCPForDispatcherHandle@IOCPDispatcher@@AEAAPEAXPEAX0W4WaitCompletionPacketPurpose@@I@Z @ 0x1C00649BC (-SetupIOCPForDispatcherHandle@IOCPDispatcher@@AEAAPEAXPEAX0W4WaitCompletionPacketPurpose@@I@Z.c)
 *     ??0ThreadLockedPerfRegion@InputTraceLogging@@QEAA@PEBDPEBU01@@Z @ 0x1C006546C (--0ThreadLockedPerfRegion@InputTraceLogging@@QEAA@PEBDPEBU01@@Z.c)
 *     ??1ThreadLockedPerfRegion@InputTraceLogging@@QEAA@XZ @ 0x1C0065598 (--1ThreadLockedPerfRegion@InputTraceLogging@@QEAA@XZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C00D2DC0 (_guard_dispatch_icall_nop.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C02015EC (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

void __fastcall IOCPDispatcher::HandleSensorDispatcherSignal(IOCPDispatcher *this, unsigned int a2)
{
  __int64 v3; // rdi
  char *v4; // rdi
  __int64 v5; // rax
  char v6; // [rsp+60h] [rbp+8h] BYREF

  v3 = a2;
  if ( a2 >= *((_DWORD *)this + 642) )
  {
    MicrosoftTelemetryAssertTriggeredNoArgsKM(this);
    DbgkWerCaptureLiveKernelDump(L"win32kbase.sys", 356LL, v3, *((unsigned int *)this + 642), 0LL, 0LL, 0LL, 0LL, 0);
  }
  else
  {
    v4 = (char *)this + 40 * a2;
    v5 = *((_QWORD *)v4 + 3);
    if ( v5 )
    {
      if ( IOCPDispatcher::SetupIOCPForDispatcherHandle(this, v5, *((_QWORD *)v4 + 1), 1LL, a2) == *((_QWORD *)v4 + 3) )
      {
        InputTraceLogging::ThreadLockedPerfRegion::ThreadLockedPerfRegion(
          (InputTraceLogging::ThreadLockedPerfRegion *)&v6,
          "HandleSensorDispatcherSignal",
          0LL);
        (*((void (__fastcall **)(_QWORD, _QWORD))v4 + 4))(*((_QWORD *)v4 + 2), *((_QWORD *)v4 + 5));
        InputTraceLogging::ThreadLockedPerfRegion::~ThreadLockedPerfRegion((InputTraceLogging::ThreadLockedPerfRegion *)&v6);
      }
      else
      {
        IOCPDispatcher::SensorIOCPWCP::Cleanup((IOCPDispatcher::SensorIOCPWCP *)(v4 + 8));
      }
    }
    else
    {
      MicrosoftTelemetryAssertTriggeredNoArgsKM(this);
      DbgkWerCaptureLiveKernelDump(L"win32kbase.sys", 356LL, v4 + 8, 0LL, 0LL, 0LL, 0LL, 0LL, 0);
    }
  }
}
