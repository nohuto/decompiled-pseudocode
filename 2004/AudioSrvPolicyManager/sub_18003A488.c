/*
 * XREFs of sub_18003A488 @ 0x18003A488
 * Callers:
 *     ?dllmain_crt_process_detach@@YAH_N@Z @ 0x1800394A4 (-dllmain_crt_process_detach@@YAH_N@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x18003AE40 (_guard_dispatch_icall_nop.c)
 */

void sub_18003A488()
{
  void (**i)(void); // rbx

  for ( i = &qword_180046C78; i < &qword_180046C78; ++i )
  {
    if ( *i )
      (*i)();
  }
}
