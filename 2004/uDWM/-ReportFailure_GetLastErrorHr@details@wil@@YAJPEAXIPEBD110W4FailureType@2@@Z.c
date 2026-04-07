/*
 * XREFs of ?ReportFailure_GetLastErrorHr@details@wil@@YAJPEAXIPEBD110W4FailureType@2@@Z @ 0x18007EE78
 * Callers:
 *     ?Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z @ 0x18007F0F4 (-Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z.c)
 * Callees:
 *     ?ReportFailure@details@wil@@YAXPEAXIPEBD110W4FailureType@2@JPEBGW4ReportFailureOptions@12@@Z @ 0x1800066A0 (-ReportFailure@details@wil@@YAXPEAXIPEBD110W4FailureType@2@JPEBGW4ReportFailureOptions@12@@Z.c)
 *     ?GetLastErrorFail@details@wil@@YAKPEAXIPEBD110@Z @ 0x18007E21C (-GetLastErrorFail@details@wil@@YAKPEAXIPEBD110@Z.c)
 */

__int64 __fastcall wil::details::ReportFailure_GetLastErrorHr(
        wil::details *a1,
        void *a2,
        __int64 a3,
        const char *a4,
        __int64 a5,
        const char *a6)
{
  unsigned int v7; // esi
  signed int LastErrorFail; // ebx
  const char *v11; // [rsp+20h] [rbp-38h]
  __int64 v12; // [rsp+38h] [rbp-20h]

  v7 = (unsigned int)a2;
  LastErrorFail = wil::details::GetLastErrorFail(a1, a2, a3, a4, v11, a6);
  if ( LastErrorFail > 0 )
    LastErrorFail = (unsigned __int16)LastErrorFail | 0x80070000;
  LODWORD(v12) = LastErrorFail;
  wil::details::ReportFailure((__int64)a1, v7, a3, 0LL, 0LL, (__int64)a6, 1, v12, 0LL, 0);
  return (unsigned int)LastErrorFail;
}
