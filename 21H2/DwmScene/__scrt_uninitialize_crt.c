/*
 * XREFs of __scrt_uninitialize_crt @ 0x180123DA8
 * Callers:
 *     ?dllmain_crt_process_detach@@YAH_N@Z @ 0x1801241E8 (-dllmain_crt_process_detach@@YAH_N@Z.c)
 * Callees:
 *     sub_18005A890 @ 0x18005A890 (sub_18005A890.c)
 */

char __fastcall _scrt_uninitialize_crt(__int64 a1, char a2)
{
  if ( !byte_180222021 || !a2 )
  {
    sub_18005A890();
    sub_18005A890();
  }
  return 1;
}
