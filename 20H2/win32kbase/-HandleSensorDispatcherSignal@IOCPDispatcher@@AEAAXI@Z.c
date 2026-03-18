/*
 * XREFs of ?HandleSensorDispatcherSignal@IOCPDispatcher@@AEAAXI@Z @ 0x1C00AF1DC
 * Callers:
 *     ?Dispatch@IOCPDispatcher@@QEAAXW4WaitCompletionPacketPurpose@@K@Z @ 0x1C0034E80 (-Dispatch@IOCPDispatcher@@QEAAXW4WaitCompletionPacketPurpose@@K@Z.c)
 * Callees:
 *     ?SetupIOCPForDispatcherHandle@IOCPDispatcher@@AEAAPEAXPEAX0W4WaitCompletionPacketPurpose@@I@Z @ 0x1C0034FEC (-SetupIOCPForDispatcherHandle@IOCPDispatcher@@AEAAPEAXPEAX0W4WaitCompletionPacketPurpose@@I@Z.c)
 *     ??0ThreadLockedPerfRegion@InputTraceLogging@@QEAA@PEBDPEBU01@@Z @ 0x1C00367FC (--0ThreadLockedPerfRegion@InputTraceLogging@@QEAA@PEBDPEBU01@@Z.c)
 *     ??1ThreadLockedPerfRegion@InputTraceLogging@@QEAA@XZ @ 0x1C0036928 (--1ThreadLockedPerfRegion@InputTraceLogging@@QEAA@XZ.c)
 *     ?Cleanup@SensorIOCPWCP@IOCPDispatcher@@QEAAXXZ @ 0x1C00B2E98 (-Cleanup@SensorIOCPWCP@IOCPDispatcher@@QEAAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C00D36F0 (_guard_dispatch_icall_nop.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C01FA2AC (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

void __fastcall IOCPDispatcher::HandleSensorDispatcherSignal(IOCPDispatcher *this, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v5; // rdi
  char *v6; // rdi
  __int64 v7; // rax
  __int64 v8; // r9
  __int64 *v9; // [rsp+60h] [rbp+8h] BYREF

  v5 = (unsigned int)a2;
  if ( (unsigned int)a2 >= *((_DWORD *)this + 642) )
  {
    MicrosoftTelemetryAssertTriggeredNoArgsKM(this, a2, a3, a4);
    DbgkWerCaptureLiveKernelDump(L"win32kbase.sys", 356LL, v5, *((unsigned int *)this + 642), 0LL, 0LL, 0LL, 0LL, 0);
  }
  else
  {
    v6 = (char *)this + 40 * (unsigned int)a2;
    v7 = *((_QWORD *)v6 + 3);
    if ( v7 )
    {
      if ( IOCPDispatcher::SetupIOCPForDispatcherHandle((__int64)this, v7, *((_QWORD *)v6 + 1), 1, a2) == *((_QWORD *)v6 + 3) )
      {
        InputTraceLogging::ThreadLockedPerfRegion::ThreadLockedPerfRegion(&v9, "HandleSensorDispatcherSignal", 0LL, v8);
        (*((void (__fastcall **)(_QWORD, _QWORD))v6 + 4))(*((_QWORD *)v6 + 2), *((_QWORD *)v6 + 5));
        InputTraceLogging::ThreadLockedPerfRegion::~ThreadLockedPerfRegion((InputTraceLogging::ThreadLockedPerfRegion *)&v9);
      }
      else
      {
        IOCPDispatcher::SensorIOCPWCP::Cleanup((IOCPDispatcher::SensorIOCPWCP *)(v6 + 8));
      }
    }
    else
    {
      MicrosoftTelemetryAssertTriggeredNoArgsKM(this, a2, a3, a4);
      DbgkWerCaptureLiveKernelDump(L"win32kbase.sys", 356LL, v6 + 8, 0LL, 0LL, 0LL, 0LL, 0LL, 0);
    }
  }
}
