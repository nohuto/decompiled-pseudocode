/*
 * XREFs of __scrt_initialize_crt @ 0x18011E320
 * Callers:
 *     ?dllmain_crt_process_attach@@YAHQEAUHINSTANCE__@@QEAX@Z @ 0x18011E800 (-dllmain_crt_process_attach@@YAHQEAUHINSTANCE__@@QEAX@Z.c)
 * Callees:
 *     sub_180054FC0 @ 0x180054FC0 (sub_180054FC0.c)
 *     __isa_available_init @ 0x18011F0E0 (__isa_available_init.c)
 */

char __fastcall _scrt_initialize_crt(int a1)
{
  char v1; // al

  v1 = byte_18021ACF1;
  if ( !a1 )
    v1 = 1;
  byte_18021ACF1 = v1;
  _isa_available_init();
  if ( !sub_180054FC0() )
    return 0;
  if ( !sub_180054FC0() )
  {
    sub_180054FC0();
    return 0;
  }
  return 1;
}
