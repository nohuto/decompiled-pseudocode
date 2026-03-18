/*
 * XREFs of ?ReportFailure_CaughtExceptionCommon@details@wil@@YAJPEAXIPEBD110W4FailureType@2@PEAG_KW4SupportedExceptions@2@@Z @ 0x14000B45C
 * Callers:
 *     ?ReportFailure_CaughtException@details@wil@@YAJPEAXIPEBD110W4FailureType@2@W4SupportedExceptions@2@@Z @ 0x14000B3F8 (-ReportFailure_CaughtException@details@wil@@YAJPEAXIPEBD110W4FailureType@2@W4SupportedExceptions.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x140004B00 (_guard_dispatch_icall_nop.c)
 *     ?ReportFailure@details@wil@@YAXPEAXIPEBD110W4FailureType@2@JPEBGW4ReportFailureOptions@12@@Z @ 0x140007020 (-ReportFailure@details@wil@@YAXPEAXIPEBD110W4FailureType@2@JPEBGW4ReportFailureOptions@12@@Z.c)
 */

__int64 __fastcall wil::details::ReportFailure_CaughtExceptionCommon(
        __int64 a1,
        int a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        __int64 a7,
        _WORD *a8)
{
  _WORD *v8; // rdi
  char v9; // si
  int v10; // ebp
  __int64 v11; // r8
  signed int v13; // ebx
  int v15; // [rsp+78h] [rbp+10h] BYREF

  v15 = a2;
  v8 = a8;
  v9 = 1;
  LOBYTE(v15) = 0;
  v10 = 1;
  v11 = -1LL;
  do
    ++v11;
  while ( a8[v11] );
  if ( !g_pfnResultFromCaughtExceptionInternal
    || (v13 = g_pfnResultFromCaughtExceptionInternal(&a8[v11], 2048 - v11, &v15), v13 >= 0) )
  {
    v13 = -2147024322;
    v10 = 3;
  }
  if ( (_BYTE)v15 )
    v9 = 5;
  wil::details::ReportFailure(
    a1,
    0x75u,
    (__int64)"mincore\\textinput\\dev\\sharedlibs\\hotkeyclient\\hotkeyclient.cpp",
    0LL,
    0LL,
    a6,
    v10,
    v13,
    v8,
    v9);
  return (unsigned int)v13;
}
