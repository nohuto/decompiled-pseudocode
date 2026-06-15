/*
 * XREFs of ?ReportFailure_Win32@details@wil@@YAJPEAXIPEBD110W4FailureType@2@K@Z @ 0x14003E6BC
 * Callers:
 *     ?Return_Win32@in1diag3@details@wil@@YAJPEAXIPEBDK@Z @ 0x14003E880 (-Return_Win32@in1diag3@details@wil@@YAJPEAXIPEBDK@Z.c)
 * Callees:
 *     ?ReportFailure@details@wil@@YAXPEAXIPEBD110W4FailureType@2@JPEBGW4ReportFailureOptions@12@@Z @ 0x14001B488 (-ReportFailure@details@wil@@YAXPEAXIPEBD110W4FailureType@2@JPEBGW4ReportFailureOptions@12@@Z.c)
 */

__int64 __fastcall wil::details::ReportFailure_Win32(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        __int64 a7,
        int a8)
{
  unsigned int v8; // ebx
  __int64 v10; // [rsp+38h] [rbp-20h]

  v8 = a8;
  if ( a8 > 0 )
    v8 = (unsigned __int16)a8 | 0x80070000;
  LODWORD(v10) = v8;
  wil::details::ReportFailure(a1, a2, a3, 0LL, 0LL, a6, 1, v10, 0LL, 0);
  return v8;
}
