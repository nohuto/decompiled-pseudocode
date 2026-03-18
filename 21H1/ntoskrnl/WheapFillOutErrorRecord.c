/*
 * XREFs of WheapFillOutErrorRecord @ 0x1405B5D64
 * Callers:
 *     WheaReportHwError @ 0x1405B5450 (WheaReportHwError.c)
 * Callees:
 *     WheapGetErrorSourceFunction @ 0x1403B6CC0 (WheapGetErrorSourceFunction.c)
 *     _guard_dispatch_icall @ 0x1403FE9E0 (_guard_dispatch_icall.c)
 */

__int64 __fastcall WheapFillOutErrorRecord(unsigned int a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 (__fastcall *ErrorSourceFunction)(__int64, __int64, __int64, _QWORD, _QWORD); // rax
  __int64 result; // rax

  ErrorSourceFunction = (__int64 (__fastcall *)(__int64, __int64, __int64, _QWORD, _QWORD))WheapGetErrorSourceFunction(
                                                                                             a3,
                                                                                             2,
                                                                                             0);
  if ( ErrorSourceFunction )
    result = ErrorSourceFunction(a3 + 96, a2, a4, a1, *(_QWORD *)(a3 + 56));
  else
    result = 3221225474LL;
  _InterlockedDecrement((volatile signed __int32 *)(a3 + 92));
  return result;
}
