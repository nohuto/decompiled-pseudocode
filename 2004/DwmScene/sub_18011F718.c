/*
 * XREFs of sub_18011F718 @ 0x18011F718
 * Callers:
 *     ?dllmain_crt_process_detach@@YAH_N@Z @ 0x18011E918 (-dllmain_crt_process_detach@@YAH_N@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x18011FBB0 (_guard_dispatch_icall_nop.c)
 */

void sub_18011F718()
{
  void (**i)(void); // rbx

  for ( i = &qword_1801E8988; i < &qword_1801E8988; ++i )
  {
    if ( *i )
      (*i)();
  }
}
