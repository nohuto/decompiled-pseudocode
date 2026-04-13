/*
 * XREFs of ?StringCchVPrintfW@@YAJPEA_W_KPEB_WPEAD@Z @ 0x180004100
 * Callers:
 *     ?LogStringPrintf@details@wil@@YAPEAGPEAGPEBG1ZZ @ 0x18000422C (-LogStringPrintf@details@wil@@YAPEAGPEAGPEBG1ZZ.c)
 *     ?ReportFailure_Msg@details@wil@@YAXPEAXIPEBD110W4FailureType@2@J1PEAD@Z @ 0x1800058C4 (-ReportFailure_Msg@details@wil@@YAXPEAXIPEBD110W4FailureType@2@J1PEAD@Z.c)
 *     ?InitializeFormat@?$NativeString@V?$CoTaskMemPolicy@_W@Internal@Windows@@@Internal@Windows@@QEAAJPEB_WZZ @ 0x1800160E8 (-InitializeFormat@-$NativeString@V-$CoTaskMemPolicy@_W@Internal@Windows@@@Internal@Windows@@QEAA.c)
 *     ?ReportFailure_CaughtExceptionMsg@details@wil@@YAJPEAXIPEBD110W4FailureType@2@1PEAD@Z @ 0x180049E50 (-ReportFailure_CaughtExceptionMsg@details@wil@@YAJPEAXIPEBD110W4FailureType@2@1PEAD@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall StringCchVPrintfW(wchar_t *Buffer, __int64 a2, const wchar_t *a3, va_list a4)
{
  int v5; // esi
  unsigned __int64 v6; // rbx
  int v7; // eax

  v5 = 0;
  if ( (unsigned __int64)(a2 - 1) > 0x7FFFFFFE )
    v5 = -2147024809;
  if ( v5 < 0 )
  {
    if ( a2 )
      *Buffer = 0;
  }
  else
  {
    v6 = a2 - 1;
    v5 = 0;
    v7 = _vsnwprintf(Buffer, a2 - 1, a3, a4);
    if ( v7 < 0 || v7 > v6 )
    {
      Buffer[v6] = 0;
      return (unsigned int)-2147024774;
    }
    else if ( v7 == v6 )
    {
      Buffer[v6] = 0;
    }
  }
  return (unsigned int)v5;
}
