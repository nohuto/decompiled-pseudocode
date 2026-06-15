/*
 * XREFs of ?ReportFailure_CaughtExceptionCommon@details@wil@@YAJPEAXIPEBD110W4FailureType@2@PEAG_KW4SupportedExceptions@2@@Z @ 0x140062238
 * Callers:
 *     ?ReportFailure_CaughtException@details@wil@@YAJPEAXIPEBD110W4FailureType@2@W4SupportedExceptions@2@@Z @ 0x1400621D4 (-ReportFailure_CaughtException@details@wil@@YAJPEAXIPEBD110W4FailureType@2@W4SupportedExceptions.c)
 * Callees:
 *     ?ReportFailure@details@wil@@YAXPEAXIPEBD110W4FailureType@2@JPEBGW4ReportFailureOptions@12@@Z @ 0x14001B208 (-ReportFailure@details@wil@@YAXPEAXIPEBD110W4FailureType@2@JPEBGW4ReportFailureOptions@12@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x14001F470 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall wil::details::ReportFailure_CaughtExceptionCommon(
        __int64 a1,
        int a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        __int64 a7,
        __int64 a8)
{
  __int64 v8; // rdi
  char v9; // si
  int v10; // ebp
  __int64 v11; // r8
  int v13; // ebx
  __int64 v15; // [rsp+38h] [rbp-30h]
  int v16; // [rsp+78h] [rbp+10h] BYREF

  v16 = a2;
  v8 = a8;
  v9 = 1;
  LOBYTE(v16) = 0;
  v10 = 1;
  v11 = -1LL;
  do
    ++v11;
  while ( *(_WORD *)(a8 + 2 * v11) );
  if ( !g_pfnResultFromCaughtExceptionInternal
    || (v13 = g_pfnResultFromCaughtExceptionInternal(a8 + 2 * v11, 2048 - v11, &v16), v13 >= 0) )
  {
    v13 = -2147024322;
    v10 = 3;
  }
  if ( (_BYTE)v16 )
    v9 = 5;
  LODWORD(v15) = v13;
  wil::details::ReportFailure(
    a1,
    134LL,
    (__int64)"avcore\\audiocore\\engine\\core\\endpoint\\spatialcrossprocess\\spatialcpbaseendpoint.cpp",
    0LL,
    0LL,
    a6,
    v10,
    v15,
    v8,
    v9);
  return (unsigned int)v13;
}
