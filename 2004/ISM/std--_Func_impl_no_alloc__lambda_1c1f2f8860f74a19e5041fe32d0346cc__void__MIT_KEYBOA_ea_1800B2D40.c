/*
 * XREFs of std::_Func_impl_no_alloc__lambda_1c1f2f8860f74a19e5041fe32d0346cc__void__MIT_KEYBOARD_OVERRIDER_INPUT_MESSAGE_const___::_Do_call @ 0x1800B2D40
 * Callers:
 *     <none>
 * Callees:
 *     ??1PerfRegion@InputTraceLogging@@QEAA@XZ @ 0x180029D80 (--1PerfRegion@InputTraceLogging@@QEAA@XZ.c)
 *     __security_check_cookie @ 0x18003C4E0 (__security_check_cookie.c)
 *     ??0PerfRegion@InputTraceLogging@@QEAA@PEBDPEBU01@@Z @ 0x180040E78 (--0PerfRegion@InputTraceLogging@@QEAA@PEBDPEBU01@@Z.c)
 *     ?ProcessLowLevelKeyboardInputMessage@Win32kInterop@@AEAAXPEBU_MIT_KEYBOARD_OVERRIDER_INPUT_MESSAGE@@@Z @ 0x1800B1BF0 (-ProcessLowLevelKeyboardInputMessage@Win32kInterop@@AEAAXPEBU_MIT_KEYBOARD_OVERRIDER_INPUT_MESSA.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall std::_Func_impl_no_alloc__lambda_1c1f2f8860f74a19e5041fe32d0346cc__void__MIT_KEYBOARD_OVERRIDER_INPUT_MESSAGE_const___::_Do_call(
        __int64 a1,
        const struct _MIT_KEYBOARD_OVERRIDER_INPUT_MESSAGE **a2)
{
  const struct _MIT_KEYBOARD_OVERRIDER_INPUT_MESSAGE *v3; // rbx
  _BYTE v4[48]; // [rsp+20h] [rbp-48h] BYREF

  v3 = *a2;
  InputTraceLogging::PerfRegion::PerfRegion(
    (InputTraceLogging::PerfRegion *)v4,
    "MITEP_KEYBOARD_OVERRIDER_INPUT_MESSAGE",
    0LL);
  Win32kInterop::ProcessLowLevelKeyboardInputMessage(*(KeyboardOverriderDispatcher ***)(a1 + 8), v3);
  InputTraceLogging::PerfRegion::~PerfRegion((InputTraceLogging::PerfRegion *)v4);
}
