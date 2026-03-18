/*
 * XREFs of ??1CWatchdogTimer@@UEAA@XZ @ 0x1801D70B0
 * Callers:
 *     ??1CPartitionVerticalBlankScheduler@@UEAA@XZ @ 0x1801AD988 (--1CPartitionVerticalBlankScheduler@@UEAA@XZ.c)
 *     ??_GCDwmRenderThreadWatchdog@@UEAAPEAXI@Z @ 0x1801CAC40 (--_GCDwmRenderThreadWatchdog@@UEAAPEAXI@Z.c)
 *     ??_ECWatchdogTimer@@UEAAPEAXI@Z @ 0x1801D7110 (--_ECWatchdogTimer@@UEAAPEAXI@Z.c)
 * Callees:
 *     ??1?$unique_storage@U?$handle_null_resource_policy@P6AHPEAX@Z$1?CloseHandle@@YAH0@Z@details@wil@@@details@wil@@IEAA@XZ @ 0x18002D294 (--1-$unique_storage@U-$handle_null_resource_policy@P6AHPEAX@Z$1-CloseHandle@@YAH0@Z@details@wil@.c)
 *     ?SetTimer@CWatchdogTimer@@AEAAXHH@Z @ 0x18007AAC4 (-SetTimer@CWatchdogTimer@@AEAAXHH@Z.c)
 */

void __fastcall CWatchdogTimer::~CWatchdogTimer(CWatchdogTimer *this)
{
  *((_BYTE *)this + 25) = 1;
  *(_QWORD *)this = &CWatchdogTimer::`vftable';
  CWatchdogTimer::SetTimer(this, 0, 0);
  WaitForSingleObject(*((HANDLE *)this + 1), 0xFFFFFFFF);
  wil::details::unique_storage<wil::details::handle_null_resource_policy<int (*)(void *),&int CloseHandle(void *)>>::~unique_storage<wil::details::handle_null_resource_policy<int (*)(void *),&int CloseHandle(void *)>>((void **)this + 2);
  wil::details::unique_storage<wil::details::handle_null_resource_policy<int (*)(void *),&int CloseHandle(void *)>>::~unique_storage<wil::details::handle_null_resource_policy<int (*)(void *),&int CloseHandle(void *)>>((void **)this + 1);
}
