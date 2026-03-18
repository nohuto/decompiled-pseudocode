/*
 * XREFs of ?_UpdateMonitorEDIDRegistryForGDI@MonitorDescriptorState@DxgMonitor@@AEBAJXZ @ 0x1C021630C
 * Callers:
 *     ?OnDeviceNodeReady@MonitorDescriptorState@DxgMonitor@@QEAAXAEA_N@Z @ 0x1C0216270 (-OnDeviceNodeReady@MonitorDescriptorState@DxgMonitor@@QEAAXAEA_N@Z.c)
 * Callees:
 *     ??_V@YAXPEAX@Z @ 0x1C000D990 (--_V@YAXPEAX@Z.c)
 *     ??1?$unique_storage@U?$resource_policy@PEAXP6AJPEAX@Z$1?ZwClose@@YAJ0@ZU?$integral_constant@_K$0A@@wistd@@PEAXPEAX$0A@$$T@details@wil@@@details@wil@@IEAA@XZ @ 0x1C001C71C (--1-$unique_storage@U-$resource_policy@PEAXP6AJPEAX@Z$1-ZwClose@@YAJ0@ZU-$integral_constant@_K$0.c)
 *     _guard_dispatch_icall_nop @ 0x1C002CCC0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall DxgMonitor::MonitorDescriptorState::_UpdateMonitorEDIDRegistryForGDI(
        DxgMonitor::MonitorDescriptorState *this)
{
  __int64 v2; // rcx
  __int64 *v3; // rcx
  __int64 v4; // rax
  int v5; // eax
  unsigned int v6; // ebx
  NTSTATUS v7; // eax
  PVOID v8; // rcx
  __int64 v10; // rdx
  ULONG ValueLength; // [rsp+40h] [rbp+10h] BYREF
  PCWSTR Path; // [rsp+48h] [rbp+18h] BYREF
  PVOID ValueData; // [rsp+50h] [rbp+20h] BYREF

  v2 = *((_QWORD *)this + 16);
  if ( !v2 )
    return 3223126017LL;
  ValueLength = 0;
  (*(void (__fastcall **)(__int64, PVOID *, ULONG *))(*(_QWORD *)v2 + 232LL))(v2, &ValueData, &ValueLength);
  v3 = (__int64 *)*((_QWORD *)this + 15);
  v4 = *v3;
  Path = 0LL;
  v5 = (*(__int64 (__fastcall **)(__int64 *, _QWORD, __int64, PCWSTR *))(v4 + 16))(v3, 0LL, 1LL, &Path);
  v6 = v5;
  if ( v5 < 0 )
  {
    v10 = v5;
  }
  else
  {
    if ( ValueLength )
    {
      RtlDeleteRegistryValue(0x40000000u, Path, L"BAD_EDID");
      v7 = RtlWriteRegistryValue(0x40000000u, Path, L"EDID", 3u, ValueData, ValueLength);
    }
    else
    {
      RtlDeleteRegistryValue(0x40000000u, Path, L"EDID");
      v7 = RtlWriteRegistryValue(0x40000000u, Path, L"BAD_EDID", 3u, 0LL, 0);
    }
    v6 = v7;
    if ( v7 >= 0 )
      goto LABEL_6;
    v10 = v7;
  }
  WdLogSingleEntry1(2LL, v10);
LABEL_6:
  wil::details::unique_storage<wil::details::resource_policy<void *,long (*)(void *),&long ZwClose(void *),wistd::integral_constant<unsigned __int64,0>,void *,void *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<void *,long (*)(void *),&long ZwClose(void *),wistd::integral_constant<unsigned __int64,0>,void *,void *,0,std::nullptr_t>>((void **)&Path);
  v8 = ValueData;
  ValueData = 0LL;
  if ( v8 )
    operator delete[](v8);
  return v6;
}
