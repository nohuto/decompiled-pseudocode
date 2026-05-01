/*
 * XREFs of ?throw_last_error@winrt@@YAXXZ @ 0x1801F4DB8
 * Callers:
 *     ??$wait_for_completed@U?$IAsyncOperation@Uhstring@winrt@@@Foundation@Windows@winrt@@@impl@winrt@@YAXAEBU?$IAsyncOperation@Uhstring@winrt@@@Foundation@Windows@1@I@Z @ 0x18003E20C (--$wait_for_completed@U-$IAsyncOperation@Uhstring@winrt@@@Foundation@Windows@winrt@@@impl@winrt@.c)
 *     ??$check_pointer@X@winrt@@YAPEAXPEAX@Z @ 0x1801F15B8 (--$check_pointer@X@winrt@@YAPEAXPEAX@Z.c)
 *     ?await_suspend@awaitable@?1??resume_after@winrt@@YA@V?$duration@_JU?$ratio@$00$0JIJGIA@@std@@@chrono@std@@@Z@QEAAXU?$coroutine_handle@X@experimental@6@@Z @ 0x180465A98 (-await_suspend@awaitable@-1--resume_after@winrt@@YA@V-$duration@_JU-$ratio@$00$0JIJGIA@@std@@@ch.c)
 *     ?await_suspend@awaitable@?1??resume_background@winrt@@YA@XZ@QEBAXU?$coroutine_handle@X@experimental@std@@@Z @ 0x180465B00 (-await_suspend@awaitable@-1--resume_background@winrt@@YA@XZ@QEBAXU-$coroutine_handle@X@experimen.c)
 * Callees:
 *     WINRT_GetLastError @ 0x18008DCDE (WINRT_GetLastError.c)
 *     ?throw_hresult@winrt@@YAXUhresult@1@@Z @ 0x1801B21D8 (-throw_hresult@winrt@@YAXUhresult@1@@Z.c)
 */

void __fastcall __noreturn winrt::throw_last_error(winrt *this)
{
  signed int LastError; // eax

  LastError = WINRT_GetLastError();
  if ( LastError > 0 )
    LastError = (unsigned __int16)LastError | 0x80070000;
  winrt::throw_hresult(LastError);
}
