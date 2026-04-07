/*
 * XREFs of ?_FailFast_GetLastError@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x18007F1C4
 * Callers:
 *     ?CloseHandle@details@wil@@YAXPEAX@Z @ 0x180042C60 (-CloseHandle@details@wil@@YAXPEAX@Z.c)
 *     ?ReleaseMutex@details@wil@@YAXPEAX@Z @ 0x180042DAC (-ReleaseMutex@details@wil@@YAXPEAX@Z.c)
 *     ?ResetEvent@details@wil@@YAXPEAX@Z @ 0x180080688 (-ResetEvent@details@wil@@YAXPEAX@Z.c)
 *     ?SetEvent@details@wil@@YAXPEAX@Z @ 0x1800806F0 (-SetEvent@details@wil@@YAXPEAX@Z.c)
 * Callees:
 *     ?ReportFailure_GetLastError@details@wil@@YAKPEAXIPEBD110W4FailureType@2@@Z @ 0x18007E58C (-ReportFailure_GetLastError@details@wil@@YAKPEAXIPEBD110W4FailureType@2@@Z.c)
 */

void __fastcall wil::details::in1diag3::_FailFast_GetLastError(
        wil::details::in1diag3 *this,
        void *a2,
        __int64 a3,
        const char *a4)
{
  __int64 v4; // [rsp+20h] [rbp-28h]
  const char *retaddr; // [rsp+48h] [rbp+0h]

  wil::details::ReportFailure_GetLastError(
    this,
    a2,
    (__int64)"onecore\\internal\\sdk\\inc\\wil\\opensource/wil/resource.h",
    a4,
    v4,
    retaddr,
    3);
}
