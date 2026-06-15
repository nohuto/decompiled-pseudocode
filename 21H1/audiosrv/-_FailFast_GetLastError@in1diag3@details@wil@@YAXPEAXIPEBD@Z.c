/*
 * XREFs of ?_FailFast_GetLastError@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x1800B6924
 * Callers:
 *     ?SetEvent@details@wil@@YAXPEAX@Z @ 0x18000457C (-SetEvent@details@wil@@YAXPEAX@Z.c)
 *     ?AddStream@CAudioSession@@UEAAJPEAVCAudioStream@@@Z @ 0x18002E3B0 (-AddStream@CAudioSession@@UEAAJPEAVCAudioStream@@@Z.c)
 *     ?RemoveStream@CAudioSession@@UEAAJPEAVCAudioStream@@_N@Z @ 0x180050100 (-RemoveStream@CAudioSession@@UEAAJPEAVCAudioStream@@_N@Z.c)
 *     ?CloseHandle@details@wil@@YAXPEAX@Z @ 0x1800522DC (-CloseHandle@details@wil@@YAXPEAX@Z.c)
 *     ?ResetEvent@details@wil@@YAXPEAX@Z @ 0x180052A54 (-ResetEvent@details@wil@@YAXPEAX@Z.c)
 *     ?ReleaseMutex@details@wil@@YAXPEAX@Z @ 0x180069874 (-ReleaseMutex@details@wil@@YAXPEAX@Z.c)
 * Callees:
 *     ?ReportFailure_GetLastError@details@wil@@YAKPEAXIPEBD110W4FailureType@2@@Z @ 0x1800B5DA0 (-ReportFailure_GetLastError@details@wil@@YAKPEAXIPEBD110W4FailureType@2@@Z.c)
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
