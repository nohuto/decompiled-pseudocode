/*
 * XREFs of ?ReportFailure_GetLastErrorHr@details@wil@@YAJPEAXIPEBD110W4FailureType@2@@Z @ 0x140007200
 * Callers:
 *     ?Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z @ 0x14000733C (-Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z.c)
 * Callees:
 *     ?GetLastErrorFail@details@wil@@YAKPEAXIPEBD110@Z @ 0x140006328 (-GetLastErrorFail@details@wil@@YAKPEAXIPEBD110@Z.c)
 *     ?ReportFailure@details@wil@@YAXPEAXIPEBD110W4FailureType@2@JPEBGW4ReportFailureOptions@12@@Z @ 0x140007020 (-ReportFailure@details@wil@@YAXPEAXIPEBD110W4FailureType@2@JPEBGW4ReportFailureOptions@12@@Z.c)
 */

__int64 __fastcall wil::details::ReportFailure_GetLastErrorHr(
        wil::details *a1,
        void *a2,
        __int64 a3,
        const char *a4,
        __int64 a5,
        const char *a6)
{
  unsigned int v6; // edi
  signed int LastErrorFail; // ebx
  const char *v10; // [rsp+20h] [rbp-38h]

  v6 = (unsigned int)a2;
  LastErrorFail = wil::details::GetLastErrorFail(a1, a2, (__int64)"wil", a4, v10, a6);
  if ( LastErrorFail > 0 )
    LastErrorFail = (unsigned __int16)LastErrorFail | 0x80070000;
  wil::details::ReportFailure((__int64)a1, v6, (__int64)"wil", 0LL, 0LL, (__int64)a6, 1, LastErrorFail, 0LL, 0);
  return (unsigned int)LastErrorFail;
}
