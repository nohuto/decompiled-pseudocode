/*
 * XREFs of std::_Func_impl_no_alloc__lambda_2e2a86d711a7dc5ea8b0521d0b687de5__void__MIT_HOTKEY_REGISTRATION_MESSAGE_const___::_Do_call @ 0x1800B2E10
 * Callers:
 *     <none>
 * Callees:
 *     ??1PerfRegion@InputTraceLogging@@QEAA@XZ @ 0x180029D80 (--1PerfRegion@InputTraceLogging@@QEAA@XZ.c)
 *     ?GetHotkeyRegistrationForwarder@ISMStatics@@SAPEAVHotkeyRegistrationForwarder@@XZ @ 0x18002DAB0 (-GetHotkeyRegistrationForwarder@ISMStatics@@SAPEAVHotkeyRegistrationForwarder@@XZ.c)
 *     __security_check_cookie @ 0x18003C4E0 (__security_check_cookie.c)
 *     ??0PerfRegion@InputTraceLogging@@QEAA@PEBDPEBU01@@Z @ 0x180040E78 (--0PerfRegion@InputTraceLogging@@QEAA@PEBDPEBU01@@Z.c)
 *     ?ForwardHotkeyRegistration@HotkeyRegistrationForwarder@@QEAAJPEBU_MIT_HOTKEY_REGISTRATION_MESSAGE@@@Z @ 0x1800BAF20 (-ForwardHotkeyRegistration@HotkeyRegistrationForwarder@@QEAAJPEBU_MIT_HOTKEY_REGISTRATION_MESSAG.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall std::_Func_impl_no_alloc__lambda_2e2a86d711a7dc5ea8b0521d0b687de5__void__MIT_HOTKEY_REGISTRATION_MESSAGE_const___::_Do_call(
        __int64 a1,
        const struct _MIT_HOTKEY_REGISTRATION_MESSAGE **a2)
{
  const struct _MIT_HOTKEY_REGISTRATION_MESSAGE *v2; // rbx
  HotkeyRegistrationForwarder *HotkeyRegistrationForwarder; // rax
  _BYTE v4[48]; // [rsp+20h] [rbp-48h] BYREF

  v2 = *a2;
  InputTraceLogging::PerfRegion::PerfRegion((InputTraceLogging::PerfRegion *)v4, "MITEP_HOTKEY_REGISTRATION", 0LL);
  HotkeyRegistrationForwarder = ISMStatics::GetHotkeyRegistrationForwarder();
  HotkeyRegistrationForwarder::ForwardHotkeyRegistration(HotkeyRegistrationForwarder, v2);
  InputTraceLogging::PerfRegion::~PerfRegion((InputTraceLogging::PerfRegion *)v4);
}
