/*
 * XREFs of sub_18003A444 @ 0x18003A444
 * Callers:
 *     ?dllmain_crt_process_attach@@YAHQEAUHINSTANCE__@@QEAX@Z @ 0x180039388 (-dllmain_crt_process_attach@@YAHQEAUHINSTANCE__@@QEAX@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x18003AE40 (_guard_dispatch_icall_nop.c)
 */

void sub_18003A444()
{
  void (**i)(void); // rbx

  for ( i = qword_180046C68; i < qword_180046C68; ++i )
  {
    if ( *i )
      (*i)();
  }
}
