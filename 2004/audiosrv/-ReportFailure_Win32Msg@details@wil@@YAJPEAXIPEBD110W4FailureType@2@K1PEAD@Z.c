/*
 * XREFs of ?ReportFailure_Win32Msg@details@wil@@YAJPEAXIPEBD110W4FailureType@2@K1PEAD@Z @ 0x18011F768
 * Callers:
 *     ?Log_Win32Msg@in1diag3@details@wil@@YAKPEAXIPEBDK1ZZ @ 0x18011EF90 (-Log_Win32Msg@in1diag3@details@wil@@YAKPEAXIPEBDK1ZZ.c)
 * Callees:
 *     ?ReportFailure_Msg@details@wil@@YAXPEAXIPEBD110W4FailureType@2@J1PEAD@Z @ 0x1800BD16C (-ReportFailure_Msg@details@wil@@YAXPEAXIPEBD110W4FailureType@2@J1PEAD@Z.c)
 */

__int64 __fastcall wil::details::ReportFailure_Win32Msg(
        __int64 a1,
        unsigned int a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        __int64 a7,
        int a8,
        __int64 a9,
        char *a10)
{
  unsigned int v10; // ebx
  __int64 v12; // [rsp+20h] [rbp-38h]

  v10 = a8;
  if ( a8 > 0 )
    v10 = (unsigned __int16)a8 | 0x80070000;
  wil::details::ReportFailure_Msg(a1, a2, a3, a4, v12, a6, 2, v10, a9, a10);
  return v10;
}
