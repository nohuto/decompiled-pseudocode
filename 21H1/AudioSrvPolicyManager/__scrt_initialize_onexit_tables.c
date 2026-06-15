/*
 * XREFs of __scrt_initialize_onexit_tables @ 0x18003F42C
 * Callers:
 *     __scrt_dllmain_before_initialize_c @ 0x18003F2B8 (__scrt_dllmain_before_initialize_c.c)
 *     __scrt_initialize_thread_safe_statics @ 0x18003F750 (__scrt_initialize_thread_safe_statics.c)
 * Callees:
 *     __scrt_fastfail @ 0x18003FBB0 (__scrt_fastfail.c)
 *     __scrt_is_ucrt_dll_in_use @ 0x18003FF2C (__scrt_is_ucrt_dll_in_use.c)
 *     _initialize_onexit_table @ 0x180040006 (_initialize_onexit_table.c)
 */

char __fastcall _scrt_initialize_onexit_tables(unsigned int a1)
{
  if ( !byte_180055DD0 )
  {
    if ( a1 > 1 )
    {
      _scrt_fastfail(5LL);
      JUMPOUT(0x18003F4DBLL);
    }
    if ( !(unsigned int)_scrt_is_ucrt_dll_in_use() || a1 )
    {
      Table._first = (_PVFV *)(_security_cookie ^ __ROR8__(-1LL, 64 - ((unsigned __int8)_security_cookie & 0x3Fu)));
      Table._last = Table._first;
      Table._end = Table._first;
      stru_180055DB8._first = Table._first;
      stru_180055DB8._last = Table._first;
      stru_180055DB8._end = Table._first;
    }
    else if ( initialize_onexit_table(&Table) || initialize_onexit_table(&stru_180055DB8) )
    {
      return 0;
    }
    byte_180055DD0 = 1;
  }
  return 1;
}
