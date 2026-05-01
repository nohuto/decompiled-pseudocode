/*
 * XREFs of __scrt_initialize_onexit_tables @ 0x18004458C
 * Callers:
 *     __scrt_dllmain_before_initialize_c @ 0x180044418 (__scrt_dllmain_before_initialize_c.c)
 *     ?__scrt_initialize_thread_safe_statics@@YAHXZ @ 0x1800448F0 (-__scrt_initialize_thread_safe_statics@@YAHXZ.c)
 * Callees:
 *     __scrt_fastfail @ 0x180044D50 (__scrt_fastfail.c)
 *     ?__uncaught_exception@@YA_NXZ @ 0x1800450CC (-__uncaught_exception@@YA_NXZ.c)
 *     _o__initialize_onexit_table @ 0x180045342 (_o__initialize_onexit_table.c)
 */

char __fastcall _scrt_initialize_onexit_tables(unsigned int a1)
{
  int v2; // eax

  if ( !byte_18005AA80 )
  {
    if ( a1 > 1 )
    {
      _scrt_fastfail(5LL);
      JUMPOUT(0x18004463BLL);
    }
    LOBYTE(v2) = __uncaught_exception();
    if ( !v2 || a1 )
    {
      qword_18005AA50 = _security_cookie ^ __ROR8__(-1LL, 64 - ((unsigned __int8)_security_cookie & 0x3Fu));
      qword_18005AA58 = qword_18005AA50;
      qword_18005AA60 = qword_18005AA50;
      qword_18005AA68 = qword_18005AA50;
      qword_18005AA70 = qword_18005AA50;
      qword_18005AA78 = qword_18005AA50;
    }
    else if ( (unsigned int)o__initialize_onexit_table(&qword_18005AA50)
           || (unsigned int)o__initialize_onexit_table(&qword_18005AA68) )
    {
      return 0;
    }
    byte_18005AA80 = 1;
  }
  return 1;
}
