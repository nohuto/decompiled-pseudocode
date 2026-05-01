/*
 * XREFs of __scrt_dllmain_after_initialize_c @ 0x1800443DC
 * Callers:
 *     ?dllmain_crt_process_attach@@YAHQEAUHINSTANCE__@@QEAX@Z @ 0x180043D98 (-dllmain_crt_process_attach@@YAHQEAUHINSTANCE__@@QEAX@Z.c)
 * Callees:
 *     __isa_available_init @ 0x180044F3C (__isa_available_init.c)
 *     ?raw_length@charNode@@UEBAHXZ_0 @ 0x1800450C0 (-raw_length@charNode@@UEBAHXZ_0.c)
 *     ?__uncaught_exception@@YA_NXZ @ 0x1800450CC (-__uncaught_exception@@YA_NXZ.c)
 *     _o__configure_narrow_argv @ 0x180045312 (_o__configure_narrow_argv.c)
 *     _o__initialize_narrow_environment @ 0x180045336 (_o__initialize_narrow_environment.c)
 */

char _scrt_dllmain_after_initialize_c()
{
  int v0; // eax
  charNode *v1; // rcx
  unsigned int v2; // eax

  LOBYTE(v0) = __uncaught_exception();
  if ( v0 )
  {
    _isa_available_init();
  }
  else
  {
    v2 = charNode::raw_length(v1);
    if ( (unsigned int)o__configure_narrow_argv(v2) )
      return 0;
    o__initialize_narrow_environment();
  }
  return 1;
}
