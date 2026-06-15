/*
 * XREFs of __scrt_initialize_onexit_tables @ 0x14001D450
 * Callers:
 *     pre_c_initialization @ 0x14001CD70 (pre_c_initialization.c)
 *     __scrt_initialize_thread_safe_statics @ 0x14001E6B0 (__scrt_initialize_thread_safe_statics.c)
 * Callees:
 *     __scrt_fastfail @ 0x14001D880 (__scrt_fastfail.c)
 *     __scrt_is_ucrt_dll_in_use @ 0x14001DCE8 (__scrt_is_ucrt_dll_in_use.c)
 *     _initialize_onexit_table @ 0x14001DE76 (_initialize_onexit_table.c)
 */

char __fastcall _scrt_initialize_onexit_tables(unsigned int a1)
{
  if ( !byte_14008FD10 )
  {
    if ( a1 > 1 )
    {
      _scrt_fastfail(5LL);
      JUMPOUT(0x14001D4FFLL);
    }
    if ( !(unsigned int)_scrt_is_ucrt_dll_in_use() || a1 )
    {
      Table._first = (_PVFV *)(_security_cookie ^ __ROR8__(-1LL, 64 - ((unsigned __int8)_security_cookie & 0x3Fu)));
      Table._last = Table._first;
      Table._end = Table._first;
      stru_14008FCF8._first = Table._first;
      stru_14008FCF8._last = Table._first;
      stru_14008FCF8._end = Table._first;
    }
    else if ( initialize_onexit_table(&Table) || initialize_onexit_table(&stru_14008FCF8) )
    {
      return 0;
    }
    byte_14008FD10 = 1;
  }
  return 1;
}
