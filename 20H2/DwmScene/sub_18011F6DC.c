/*
 * XREFs of sub_18011F6DC @ 0x18011F6DC
 * Callers:
 *     ?dllmain_crt_process_attach@@YAHQEAUHINSTANCE__@@QEAX@Z @ 0x18011E800 (-dllmain_crt_process_attach@@YAHQEAUHINSTANCE__@@QEAX@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x18011FBB0 (_guard_dispatch_icall_nop.c)
 */

void sub_18011F6DC()
{
  void (**i)(void); // rbx

  for ( i = qword_1801E89B8; i < qword_1801E89B8; ++i )
  {
    if ( *i )
      (*i)();
  }
}
