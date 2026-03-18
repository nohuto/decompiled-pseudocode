/*
 * XREFs of ?_FailFast_GetLastError@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x180178EA4
 * Callers:
 *     ?SetEvent@details@wil@@YAXPEAX@Z @ 0x18002A854 (-SetEvent@details@wil@@YAXPEAX@Z.c)
 *     ?Run@CKstBase@@AEAAKXZ @ 0x18002A904 (-Run@CKstBase@@AEAAKXZ.c)
 *     ?ResetEvent@details@wil@@YAXPEAX@Z @ 0x18002BBBC (-ResetEvent@details@wil@@YAXPEAX@Z.c)
 *     ?CloseHandle@details@wil@@YAXPEAX@Z @ 0x1800F6630 (-CloseHandle@details@wil@@YAXPEAX@Z.c)
 *     ?ReleaseMutex@details@wil@@YAXPEAX@Z @ 0x1800F7CCC (-ReleaseMutex@details@wil@@YAXPEAX@Z.c)
 * Callees:
 *     ??$ReportFailure_GetLastError@$02@details@wil@@YAKPEAXIPEBD110@Z @ 0x180176F78 (--$ReportFailure_GetLastError@$02@details@wil@@YAKPEAXIPEBD110@Z.c)
 */

void __fastcall __noreturn wil::details::in1diag3::_FailFast_GetLastError(
        wil::details::in1diag3 *this,
        void *a2,
        unsigned int a3,
        const char *a4)
{
  int v4; // [rsp+20h] [rbp-18h]
  const char *retaddr; // [rsp+38h] [rbp+0h]

  wil::details::ReportFailure_GetLastError<3>(this, a2, a3, a4, v4, retaddr);
}
