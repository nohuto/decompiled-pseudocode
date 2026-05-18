/*
 * XREFs of __scrt_initialize_crt @ 0x180123BF0
 * Callers:
 *     ?dllmain_crt_process_attach@@YAHQEAUHINSTANCE__@@QEAX@Z @ 0x1801240D0 (-dllmain_crt_process_attach@@YAHQEAUHINSTANCE__@@QEAX@Z.c)
 * Callees:
 *     sub_18005A890 @ 0x18005A890 (sub_18005A890.c)
 *     __isa_available_init @ 0x1801249B0 (__isa_available_init.c)
 */

char __fastcall _scrt_initialize_crt(int a1)
{
  char v1; // al

  v1 = byte_180222021;
  if ( !a1 )
    v1 = 1;
  byte_180222021 = v1;
  _isa_available_init();
  if ( !sub_18005A890() )
    return 0;
  if ( !sub_18005A890() )
  {
    sub_18005A890();
    return 0;
  }
  return 1;
}
