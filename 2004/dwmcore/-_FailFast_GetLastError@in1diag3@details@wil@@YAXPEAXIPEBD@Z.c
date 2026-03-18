/*
 * XREFs of ?_FailFast_GetLastError@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x180150124
 * Callers:
 *     ?SetEvent@details@wil@@YAXPEAX@Z @ 0x1800CA044 (-SetEvent@details@wil@@YAXPEAX@Z.c)
 *     ?CloseHandle@details@wil@@YAXPEAX@Z @ 0x1800D93A8 (-CloseHandle@details@wil@@YAXPEAX@Z.c)
 *     ?ReleaseMutex@details@wil@@YAXPEAX@Z @ 0x1800DADC0 (-ReleaseMutex@details@wil@@YAXPEAX@Z.c)
 *     ?ResetEvent@details@wil@@YAXPEAX@Z @ 0x1801A7E28 (-ResetEvent@details@wil@@YAXPEAX@Z.c)
 * Callees:
 *     ?ReportFailure_GetLastError@details@wil@@YAKPEAXIPEBD110W4FailureType@2@@Z @ 0x18014F75C (-ReportFailure_GetLastError@details@wil@@YAKPEAXIPEBD110W4FailureType@2@@Z.c)
 */

void __fastcall wil::details::in1diag3::_FailFast_GetLastError(
        wil::details::in1diag3 *this,
        void *a2,
        __int64 a3,
        const char *a4)
{
  __int64 v4; // [rsp+20h] [rbp-28h]
  const char *retaddr; // [rsp+48h] [rbp+0h]

  wil::details::ReportFailure_GetLastError(this, a2, a3, a4, v4, retaddr, 3);
}
