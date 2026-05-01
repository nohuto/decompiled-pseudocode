/*
 * XREFs of sub_180044EE8 @ 0x180044EE8
 * Callers:
 *     ?dllmain_crt_process_detach@@YAH_N@Z @ 0x180043EB4 (-dllmain_crt_process_detach@@YAH_N@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x180045CB0 (_guard_dispatch_icall_nop.c)
 */

void sub_180044EE8()
{
  void (**i)(void); // rbx

  for ( i = &qword_180053B98; i < &qword_180053B98; ++i )
  {
    if ( *i )
      (*i)();
  }
}
