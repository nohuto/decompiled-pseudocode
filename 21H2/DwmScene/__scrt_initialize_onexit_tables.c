/*
 * XREFs of __scrt_initialize_onexit_tables @ 0x180123C3C
 * Callers:
 *     __scrt_dllmain_before_initialize_c @ 0x180123AF4 (__scrt_dllmain_before_initialize_c.c)
 *     ?__scrt_initialize_thread_safe_statics@@YAHXZ @ 0x180124460 (-__scrt_initialize_thread_safe_statics@@YAHXZ.c)
 * Callees:
 *     _o__initialize_onexit_table @ 0x1801238F3 (_o__initialize_onexit_table.c)
 *     ?__uncaught_exception@@YA_NXZ @ 0x180124B2C (-__uncaught_exception@@YA_NXZ.c)
 *     __scrt_fastfail @ 0x180124B40 (__scrt_fastfail.c)
 */

char __fastcall _scrt_initialize_onexit_tables(unsigned int a1)
{
  int v2; // eax

  if ( !byte_180222020 )
  {
    if ( a1 > 1 )
    {
      _scrt_fastfail(5LL);
      __debugbreak();
    }
    LOBYTE(v2) = __uncaught_exception();
    if ( !v2 || a1 )
    {
      qword_180221FF0 = _security_cookie ^ __ROR8__(-1LL, 64 - ((unsigned __int8)_security_cookie & 0x3Fu));
      qword_180221FF8 = qword_180221FF0;
      qword_180222000 = qword_180221FF0;
      qword_180222008 = qword_180221FF0;
      qword_180222010 = qword_180221FF0;
      qword_180222018 = qword_180221FF0;
    }
    else if ( (unsigned int)o__initialize_onexit_table() || (unsigned int)o__initialize_onexit_table() )
    {
      return 0;
    }
    byte_180222020 = 1;
  }
  return 1;
}
