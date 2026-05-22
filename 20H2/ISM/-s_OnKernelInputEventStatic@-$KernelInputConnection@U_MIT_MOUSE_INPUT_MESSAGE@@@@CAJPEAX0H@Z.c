/*
 * XREFs of ?s_OnKernelInputEventStatic@?$KernelInputConnection@U_MIT_MOUSE_INPUT_MESSAGE@@@@CAJPEAX0H@Z @ 0x1800B41D0
 * Callers:
 *     <none>
 * Callees:
 *     ??1PerfRegion@InputTraceLogging@@QEAA@XZ @ 0x180029DB0 (--1PerfRegion@InputTraceLogging@@QEAA@XZ.c)
 *     __security_check_cookie @ 0x18003C560 (__security_check_cookie.c)
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x18003E194 (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ??0PerfRegion@InputTraceLogging@@QEAA@PEBDPEBU01@@Z @ 0x180040DE8 (--0PerfRegion@InputTraceLogging@@QEAA@PEBDPEBU01@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18004A660 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall KernelInputConnection<_MIT_MOUSE_INPUT_MESSAGE>::s_OnKernelInputEventStatic(
        __int64 a1,
        __int64 a2,
        unsigned int a3,
        const char *a4)
{
  __int64 v6; // rcx
  __int64 v8; // [rsp+20h] [rbp-48h] BYREF
  _BYTE v9[48]; // [rsp+28h] [rbp-40h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+0h]

  if ( a3 < 0x130 )
  {
    wil::details::in1diag3::_FailFast_Unexpected(
      retaddr,
      83LL,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\utilities\\KernelInputConnection\\KernelInputConnection.h",
      a4);
    __debugbreak();
  }
  InputTraceLogging::PerfRegion::PerfRegion((InputTraceLogging::PerfRegion *)v9, *(const char **)(a1 + 128), 0LL);
  v8 = a2;
  v6 = *(_QWORD *)(a1 + 120);
  if ( !v6 )
  {
    std::_Xbad_function_call();
    __debugbreak();
  }
  (*(void (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v6 + 16LL))(v6, &v8);
  InputTraceLogging::PerfRegion::~PerfRegion((InputTraceLogging::PerfRegion *)v9);
  return 0LL;
}
