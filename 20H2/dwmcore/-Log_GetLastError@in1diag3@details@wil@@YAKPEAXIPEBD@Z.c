/*
 * XREFs of ?Log_GetLastError@in1diag3@details@wil@@YAKPEAXIPEBD@Z @ 0x1801A449C
 * Callers:
 *     ??1CComputeScribbleScheduler@@QEAA@XZ @ 0x1801A3750 (--1CComputeScribbleScheduler@@QEAA@XZ.c)
 * Callees:
 *     ?ReportFailure_GetLastError@details@wil@@YAKPEAXIPEBD110W4FailureType@2@@Z @ 0x18014DBC4 (-ReportFailure_GetLastError@details@wil@@YAKPEAXIPEBD110W4FailureType@2@@Z.c)
 */

__int64 __fastcall wil::details::in1diag3::Log_GetLastError(
        wil::details::in1diag3 *this,
        void *a2,
        __int64 a3,
        const char *a4)
{
  __int64 v5; // [rsp+20h] [rbp-28h]
  const char *retaddr; // [rsp+48h] [rbp+0h]

  return wil::details::ReportFailure_GetLastError(
           this,
           (void *)0xBF,
           (__int64)"onecoreuap\\windows\\dwm\\dwmcore\\rendering\\computescribblescheduler.cpp",
           a4,
           v5,
           retaddr,
           2);
}
