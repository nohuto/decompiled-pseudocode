/*
 * XREFs of ?StringCchVPrintfW@@YAJPEAG_KPEBGPEAD@Z @ 0x180034DB0
 * Callers:
 *     ?InitializeFormat@?$NativeString@V?$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@QEAAJPEBGZZ @ 0x180034CD0 (-InitializeFormat@-$NativeString@V-$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@QEAAJ.c)
 *     ?LogStringPrintf@details@wil@@YAPEAGPEAGPEBG1ZZ @ 0x18013A0E0 (-LogStringPrintf@details@wil@@YAPEAGPEAGPEBG1ZZ.c)
 *     ?PrintLoggingMessage@details@wil@@YAXPEAG_KPEBDPEAD@Z @ 0x180140CF8 (-PrintLoggingMessage@details@wil@@YAXPEAG_KPEBDPEAD@Z.c)
 * Callees:
 *     __local_stdio_printf_options @ 0x180034E64 (__local_stdio_printf_options.c)
 */

__int64 __fastcall StringCchVPrintfW(wchar_t *Buffer, __int64 a2, const unsigned __int16 *a3, va_list a4)
{
  unsigned int v4; // ebx
  int v8; // r10d
  size_t v9; // rdi
  unsigned __int64 *v10; // rax
  int v11; // eax
  __int64 result; // rax

  v4 = 0;
  v8 = 0;
  if ( (unsigned __int64)(a2 - 1) > 0x7FFFFFFE )
    v8 = -2147024809;
  if ( v8 < 0 )
  {
    result = (unsigned int)v8;
    if ( a2 )
      *Buffer = 0;
  }
  else
  {
    v9 = a2 - 1;
    v10 = _local_stdio_printf_options();
    v11 = __stdio_common_vswprintf(*v10 | 1, Buffer, v9, a3, 0LL, a4);
    if ( v11 < 0 || v11 > v9 )
    {
      Buffer[v9] = 0;
      return (unsigned int)-2147024774;
    }
    else if ( v11 == v9 )
    {
      Buffer[v9] = 0;
    }
    return v4;
  }
  return result;
}
