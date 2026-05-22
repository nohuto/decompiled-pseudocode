/*
 * XREFs of std::_Func_impl_no_alloc__lambda_bd472a9a8f72191484719e318aced7b7__void__MIT_PNP_DEVICE_NOTIFICATION_MESSAGE_const___::_Do_call @ 0x180029DB0
 * Callers:
 *     <none>
 * Callees:
 *     ?ProcessDeviceArrival@Win32kInterop@@AEAAXPEBU_MIT_PNP_DEVICE_NOTIFICATION_MESSAGE@@@Z @ 0x180029A7C (-ProcessDeviceArrival@Win32kInterop@@AEAAXPEBU_MIT_PNP_DEVICE_NOTIFICATION_MESSAGE@@@Z.c)
 *     ?ComputePnpAction@Win32kInterop@@AEBA?AW4PnPHandlingAction@@W4_KnownRIMDeviceKind@@@Z @ 0x180029D04 (-ComputePnpAction@Win32kInterop@@AEBA-AW4PnPHandlingAction@@W4_KnownRIMDeviceKind@@@Z.c)
 *     ??1PerfRegion@InputTraceLogging@@QEAA@XZ @ 0x180029D80 (--1PerfRegion@InputTraceLogging@@QEAA@XZ.c)
 *     __security_check_cookie @ 0x18003C4E0 (__security_check_cookie.c)
 *     ??0PerfRegion@InputTraceLogging@@QEAA@PEBDPEBU01@@Z @ 0x180040E78 (--0PerfRegion@InputTraceLogging@@QEAA@PEBDPEBU01@@Z.c)
 *     ?ProcessDeviceRemoval@Win32kInterop@@AEAAXPEBU_MIT_PNP_DEVICE_NOTIFICATION_MESSAGE@@@Z @ 0x1800B0E80 (-ProcessDeviceRemoval@Win32kInterop@@AEAAXPEBU_MIT_PNP_DEVICE_NOTIFICATION_MESSAGE@@@Z.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall std::_Func_impl_no_alloc__lambda_bd472a9a8f72191484719e318aced7b7__void__MIT_PNP_DEVICE_NOTIFICATION_MESSAGE_const___::_Do_call(
        __int64 a1,
        __int64 *a2)
{
  __int64 v3; // rdi
  __int64 v4; // rcx
  Win32kInterop *v5; // rcx
  Win32kInterop *v6; // rcx
  _BYTE v7[48]; // [rsp+20h] [rbp-48h] BYREF

  v3 = *a2;
  InputTraceLogging::PerfRegion::PerfRegion((InputTraceLogging::PerfRegion *)v7, "MITEP_PNP_DEVICE_NOTIFICATION", 0LL);
  v4 = *(_QWORD *)(a1 + 8);
  if ( *(_DWORD *)(v3 + 8) == 2 )
  {
    if ( Win32kInterop::ComputePnpAction(v4, *(_DWORD *)v3) )
      Win32kInterop::ProcessDeviceArrival(v5, (const struct _MIT_PNP_DEVICE_NOTIFICATION_MESSAGE *)v3);
  }
  else if ( *(_DWORD *)(v3 + 8) == 3 && Win32kInterop::ComputePnpAction(v4, *(_DWORD *)v3) )
  {
    Win32kInterop::ProcessDeviceRemoval(v6, (const struct _MIT_PNP_DEVICE_NOTIFICATION_MESSAGE *)v3);
  }
  InputTraceLogging::PerfRegion::~PerfRegion((InputTraceLogging::PerfRegion *)v7);
}
