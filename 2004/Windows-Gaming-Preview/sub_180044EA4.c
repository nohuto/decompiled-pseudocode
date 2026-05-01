/*
 * XREFs of sub_180044EA4 @ 0x180044EA4
 * Callers:
 *     ?dllmain_crt_process_attach@@YAHQEAUHINSTANCE__@@QEAX@Z @ 0x180043D98 (-dllmain_crt_process_attach@@YAHQEAUHINSTANCE__@@QEAX@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x180045CB0 (_guard_dispatch_icall_nop.c)
 */

void sub_180044EA4()
{
  void (**i)(void); // rbx

  for ( i = qword_180053B88; i < qword_180053B88; ++i )
  {
    if ( *i )
      (*i)();
  }
}
