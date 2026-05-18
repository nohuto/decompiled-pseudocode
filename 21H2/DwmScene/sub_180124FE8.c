/*
 * XREFs of sub_180124FE8 @ 0x180124FE8
 * Callers:
 *     ?dllmain_crt_process_detach@@YAH_N@Z @ 0x1801241E8 (-dllmain_crt_process_detach@@YAH_N@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x180125480 (_guard_dispatch_icall_nop.c)
 */

void sub_180124FE8()
{
  void (**i)(void); // rbx

  for ( i = &qword_1801EEE08; i < &qword_1801EEE08; ++i )
  {
    if ( *i )
      (*i)();
  }
}
