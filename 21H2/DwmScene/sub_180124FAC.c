/*
 * XREFs of sub_180124FAC @ 0x180124FAC
 * Callers:
 *     ?dllmain_crt_process_attach@@YAHQEAUHINSTANCE__@@QEAX@Z @ 0x1801240D0 (-dllmain_crt_process_attach@@YAHQEAUHINSTANCE__@@QEAX@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x180125480 (_guard_dispatch_icall_nop.c)
 */

void sub_180124FAC()
{
  void (**i)(void); // rbx

  for ( i = qword_1801EEDF8; i < qword_1801EEDF8; ++i )
  {
    if ( *i )
      (*i)();
  }
}
