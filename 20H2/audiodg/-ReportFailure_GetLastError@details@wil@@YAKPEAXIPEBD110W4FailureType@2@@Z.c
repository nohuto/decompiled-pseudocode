/*
 * XREFs of ?ReportFailure_GetLastError@details@wil@@YAKPEAXIPEBD110W4FailureType@2@@Z @ 0x14003BBD8
 * Callers:
 *     ?_FailFast_GetLastError@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x14003C734 (-_FailFast_GetLastError@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ?_Log_GetLastError@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x14004F384 (-_Log_GetLastError@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 * Callees:
 *     ?ReportFailure@details@wil@@YAXPEAXIPEBD110W4FailureType@2@JPEBGW4ReportFailureOptions@12@@Z @ 0x14001B4B8 (-ReportFailure@details@wil@@YAXPEAXIPEBD110W4FailureType@2@JPEBGW4ReportFailureOptions@12@@Z.c)
 *     ?GetLastErrorFail@details@wil@@YAKPEAXIPEBD110@Z @ 0x14003B3A8 (-GetLastErrorFail@details@wil@@YAKPEAXIPEBD110@Z.c)
 */

__int64 __fastcall wil::details::ReportFailure_GetLastError(
        wil::details *a1,
        void *a2,
        __int64 a3,
        const char *a4,
        __int64 a5,
        const char *a6,
        int a7)
{
  unsigned int v8; // esi
  signed int LastErrorFail; // eax
  unsigned int v11; // ebx
  unsigned int v12; // r8d
  const char *v14; // [rsp+20h] [rbp-38h]
  __int64 v15; // [rsp+38h] [rbp-20h]

  v8 = (unsigned int)a2;
  LastErrorFail = wil::details::GetLastErrorFail(a1, a2, a3, a4, v14, a6);
  v11 = LastErrorFail;
  if ( LastErrorFail > 0 )
    v12 = (unsigned __int16)LastErrorFail | 0x80070000;
  else
    v12 = LastErrorFail;
  LODWORD(v15) = v12;
  wil::details::ReportFailure((__int64)a1, v8, a3, 0LL, 0LL, (__int64)a6, a7, v15, 0LL, 0);
  return v11;
}
