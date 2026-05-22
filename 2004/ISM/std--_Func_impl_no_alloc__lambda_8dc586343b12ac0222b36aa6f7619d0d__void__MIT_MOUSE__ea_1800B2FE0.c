/*
 * XREFs of std::_Func_impl_no_alloc__lambda_8dc586343b12ac0222b36aa6f7619d0d__void__MIT_MOUSE_INPUT_MESSAGE_const___::_Do_call @ 0x1800B2FE0
 * Callers:
 *     <none>
 * Callees:
 *     ??1PerfRegion@InputTraceLogging@@QEAA@XZ @ 0x180029D80 (--1PerfRegion@InputTraceLogging@@QEAA@XZ.c)
 *     __security_check_cookie @ 0x18003C4E0 (__security_check_cookie.c)
 *     ??0PerfRegion@InputTraceLogging@@QEAA@PEBDPEBU01@@Z @ 0x180040E78 (--0PerfRegion@InputTraceLogging@@QEAA@PEBDPEBU01@@Z.c)
 *     ?ProcessMouseInputMessage@Win32kInterop@@AEAAXPEBU_MIT_MOUSE_INPUT_MESSAGE@@@Z @ 0x1800B1C84 (-ProcessMouseInputMessage@Win32kInterop@@AEAAXPEBU_MIT_MOUSE_INPUT_MESSAGE@@@Z.c)
 */

void __fastcall std::_Func_impl_no_alloc__lambda_8dc586343b12ac0222b36aa6f7619d0d__void__MIT_MOUSE_INPUT_MESSAGE_const___::_Do_call(
        __int64 a1,
        const struct _MIT_MOUSE_INPUT_MESSAGE **a2)
{
  const struct _MIT_MOUSE_INPUT_MESSAGE *v3; // rbx
  _BYTE v4[48]; // [rsp+20h] [rbp-48h] BYREF

  v3 = *a2;
  InputTraceLogging::PerfRegion::PerfRegion((InputTraceLogging::PerfRegion *)v4, "MITEP_MOUSE_INPUT", 0LL);
  Win32kInterop::ProcessMouseInputMessage(*(Win32kInterop **)(a1 + 8), v3);
  InputTraceLogging::PerfRegion::~PerfRegion((InputTraceLogging::PerfRegion *)v4);
}
