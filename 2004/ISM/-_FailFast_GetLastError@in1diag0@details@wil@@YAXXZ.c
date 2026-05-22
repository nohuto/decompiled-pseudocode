/*
 * XREFs of ?_FailFast_GetLastError@in1diag0@details@wil@@YAXXZ @ 0x1800C1A04
 * Callers:
 *     ??1SipcPrivateNamespace@@QEAA@XZ @ 0x1800BEED4 (--1SipcPrivateNamespace@@QEAA@XZ.c)
 * Callees:
 *     ?ReportFailure_GetLastError@details@wil@@YAKPEAXIPEBD110W4FailureType@2@@Z @ 0x1800668B0 (-ReportFailure_GetLastError@details@wil@@YAKPEAXIPEBD110W4FailureType@2@@Z.c)
 */

void __fastcall wil::details::in1diag0::_FailFast_GetLastError(
        wil::details::in1diag0 *this,
        __int64 a2,
        __int64 a3,
        const char *a4)
{
  __int64 v4; // [rsp+20h] [rbp-28h]
  const char *retaddr; // [rsp+48h] [rbp+0h]

  wil::details::ReportFailure_GetLastError(0LL, 0LL, 0LL, a4, v4, retaddr, 3);
}
