/*
 * XREFs of ?ReportFailure_CaughtExceptionCommon@details@wil@@YAJPEAXIPEBD110W4FailureType@2@PEAG_KW4SupportedExceptions@2@@Z @ 0x1800736B4
 * Callers:
 *     ?ReportFailure_CaughtException@details@wil@@YAJPEAXIPEBD110W4FailureType@2@W4SupportedExceptions@2@@Z @ 0x180073648 (-ReportFailure_CaughtException@details@wil@@YAJPEAXIPEBD110W4FailureType@2@W4SupportedExceptions.c)
 * Callees:
 *     ?ReportFailure@details@wil@@YAXPEAXIPEBD110W4FailureType@2@JPEBGW4ReportFailureOptions@12@@Z @ 0x1800357F8 (-ReportFailure@details@wil@@YAXPEAXIPEBD110W4FailureType@2@JPEBGW4ReportFailureOptions@12@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18004A6B0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall wil::details::ReportFailure_CaughtExceptionCommon(
        __int64 a1,
        unsigned int a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        int a7,
        __int64 a8,
        __int64 a9,
        char a10)
{
  __int64 v10; // r9
  int v14; // ebx
  char v16; // al
  __int64 v18; // [rsp+38h] [rbp-30h]

  a10 = 0;
  v10 = -1LL;
  do
    ++v10;
  while ( *(_WORD *)(a8 + 2 * v10) );
  if ( !g_pfnResultFromCaughtExceptionInternal
    || (v14 = g_pfnResultFromCaughtExceptionInternal(a8 + 2 * v10, 2048 - v10, &a10), v14 >= 0) )
  {
    v14 = -2147024322;
    a7 = 3;
  }
  v16 = 1;
  if ( a10 )
    v16 = 5;
  LODWORD(v18) = v14;
  wil::details::ReportFailure(a1, a2, a3, 0LL, 0LL, a6, a7, v18, a8, v16);
  return (unsigned int)v14;
}
