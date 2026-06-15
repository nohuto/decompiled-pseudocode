/*
 * XREFs of _vsnwprintf @ 0x18003A7E4
 * Callers:
 *     ?StringCchPrintfW@@YAJPEAG_KPEBGZZ @ 0x18000210C (-StringCchPrintfW@@YAJPEAG_KPEBGZZ.c)
 *     ?LogStringPrintf@details@wil@@YAPEAGPEAGPEBG1ZZ @ 0x18000229C (-LogStringPrintf@details@wil@@YAPEAGPEAGPEBG1ZZ.c)
 *     ?ReportFailure_Msg@details@wil@@YAXPEAXIPEBD110W4FailureType@2@J1PEAD@Z @ 0x18002E450 (-ReportFailure_Msg@details@wil@@YAXPEAXIPEBD110W4FailureType@2@J1PEAD@Z.c)
 *     ?StringCbPrintfW@@YAJPEAG_KPEBGZZ @ 0x1800330EC (-StringCbPrintfW@@YAJPEAG_KPEBGZZ.c)
 *     ?InitializeFormat@?$NativeString@V?$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@QEAAJPEBGZZ @ 0x1800390FC (-InitializeFormat@-$NativeString@V-$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@QEAAJ.c)
 * Callees:
 *     __local_stdio_printf_options @ 0x1800392AC (__local_stdio_printf_options.c)
 *     _o___stdio_common_vswprintf_0 @ 0x18003A6F2 (_o___stdio_common_vswprintf_0.c)
 */

int __cdecl vsnwprintf(wchar_t *Buffer, size_t BufferCount, const wchar_t *Format, va_list Args)
{
  unsigned __int64 *v8; // rax
  int result; // eax

  v8 = _local_stdio_printf_options();
  result = o___stdio_common_vswprintf_0(*v8 | 1, Buffer, BufferCount, Format, 0LL, Args);
  if ( result < 0 )
    return -1;
  return result;
}
