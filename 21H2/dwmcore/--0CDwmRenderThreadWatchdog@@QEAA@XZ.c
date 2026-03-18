/*
 * XREFs of ??0CDwmRenderThreadWatchdog@@QEAA@XZ @ 0x18002CC5C
 * Callers:
 *     ??0CPartitionVerticalBlankScheduler@@AEAA@PEAVCTransport@@PEAVCConnection@@@Z @ 0x18002E4BC (--0CPartitionVerticalBlankScheduler@@AEAA@PEAVCTransport@@PEAVCConnection@@@Z.c)
 * Callees:
 *     ??1?$unique_storage@U?$handle_null_resource_policy@P6AHPEAX@Z$1?CloseHandle@@YAH0@Z@details@wil@@@details@wil@@IEAA@XZ @ 0x18002D294 (--1-$unique_storage@U-$handle_null_resource_policy@P6AHPEAX@Z$1-CloseHandle@@YAH0@Z@details@wil@.c)
 *     ?reset@?$unique_storage@U?$handle_null_resource_policy@P6AHPEAX@Z$1?CloseHandle@@YAH0@Z@details@wil@@@details@wil@@QEAAXPEAX@Z @ 0x18003DB7C (-reset@-$unique_storage@U-$handle_null_resource_policy@P6AHPEAX@Z$1-CloseHandle@@YAH0@Z@details@.c)
 */

CDwmRenderThreadWatchdog *__fastcall CDwmRenderThreadWatchdog::CDwmRenderThreadWatchdog(CDwmRenderThreadWatchdog *this)
{
  HANDLE *v1; // rdi
  HANDLE WaitableTimerW; // rax
  int v4; // eax
  HANDLE v6; // [rsp+30h] [rbp+8h] BYREF

  v1 = (HANDLE *)((char *)this + 16);
  *(_QWORD *)this = &CWatchdogTimer::`vftable';
  *((_QWORD *)this + 1) = 0LL;
  *((_QWORD *)this + 2) = 0LL;
  *((_WORD *)this + 12) = 0;
  *((_BYTE *)this + 26) = 0;
  WaitableTimerW = CreateWaitableTimerW(0LL, 0, 0LL);
  v6 = WaitableTimerW;
  if ( v1 != &v6 )
  {
    wil::details::unique_storage<wil::details::handle_null_resource_policy<int (*)(void *),&int CloseHandle(void *)>>::reset(
      v1,
      WaitableTimerW);
    v6 = 0LL;
  }
  wil::details::unique_storage<wil::details::handle_null_resource_policy<int (*)(void *),&int CloseHandle(void *)>>::~unique_storage<wil::details::handle_null_resource_policy<int (*)(void *),&int CloseHandle(void *)>>(&v6);
  *(_QWORD *)this = &CDwmRenderThreadWatchdog::`vftable';
  *((_DWORD *)this + 8) = CCommonRegistryData::InitialWatchdogTelemetryTimeoutMilliseconds;
  v4 = CCommonRegistryData::RecurringWatchdogTelemetryTimeoutMilliseconds;
  *((_DWORD *)this + 11) = 0;
  *((_DWORD *)this + 12) = 0;
  *((_DWORD *)this + 9) = v4;
  *((_DWORD *)this + 10) = GetCurrentThreadId();
  return this;
}
