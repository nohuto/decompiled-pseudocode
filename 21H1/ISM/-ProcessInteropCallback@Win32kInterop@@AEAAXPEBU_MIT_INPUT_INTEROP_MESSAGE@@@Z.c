/*
 * XREFs of ?ProcessInteropCallback@Win32kInterop@@AEAAXPEBU_MIT_INPUT_INTEROP_MESSAGE@@@Z @ 0x1800B1EB8
 * Callers:
 *     std::_Func_impl_no_alloc__lambda_bf22b92f2cb2d42308eb733f93f10539__void__MIT_INPUT_INTEROP_MESSAGE_const___::_Do_call @ 0x1800B3520 (std--_Func_impl_no_alloc__lambda_bf22b92f2cb2d42308eb733f93f10539__void__MIT_INPUT__ea_1800B3520.c)
 * Callees:
 *     ??1PerfRegion@InputTraceLogging@@QEAA@XZ @ 0x180029D20 (--1PerfRegion@InputTraceLogging@@QEAA@XZ.c)
 *     __security_check_cookie @ 0x18003C480 (__security_check_cookie.c)
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x18003E424 (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ??0PerfRegion@InputTraceLogging@@QEAA@PEBDPEBU01@@Z @ 0x1800414A8 (--0PerfRegion@InputTraceLogging@@QEAA@PEBDPEBU01@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18004ACA0 (_guard_dispatch_icall_nop.c)
 *     ?DoConvergedMTCallback@Win32kInterop@@AEAAXPEBU_MIT_INPUT_INTEROP_MESSAGE@@@Z @ 0x1800B0508 (-DoConvergedMTCallback@Win32kInterop@@AEAAXPEBU_MIT_INPUT_INTEROP_MESSAGE@@@Z.c)
 */

// Hidden C++ exception states: #wind=2
void __fastcall Win32kInterop::ProcessInteropCallback(
        Win32kInterop *this,
        const struct _MIT_INPUT_INTEROP_MESSAGE *a2,
        __int64 a3,
        const char *a4)
{
  _BYTE v6[48]; // [rsp+20h] [rbp-48h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+0h]

  if ( *(_DWORD *)a2 )
  {
    if ( *(_DWORD *)a2 != 1 )
    {
      wil::details::in1diag3::_FailFast_Unexpected(
        retaddr,
        316LL,
        (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputhosts\\components\\win32kinterop\\lib\\win32kinterop.cpp",
        a4);
      __debugbreak();
    }
    InputTraceLogging::PerfRegion::PerfRegion((InputTraceLogging::PerfRegion *)v6, "MIT_INPUT_INTEROP_HOVER", 0LL);
    ((void (__fastcall *)(const struct _MIT_INPUT_INTEROP_MESSAGE *, _QWORD))Win32kInterop::s_pfnMTCallback)(a2, 0LL);
  }
  else
  {
    InputTraceLogging::PerfRegion::PerfRegion((InputTraceLogging::PerfRegion *)v6, "MIT_INPUT_INTEROP_MTCALLBACK", 0LL);
    Win32kInterop::DoConvergedMTCallback(this, a2);
  }
  InputTraceLogging::PerfRegion::~PerfRegion((InputTraceLogging::PerfRegion *)v6);
}
