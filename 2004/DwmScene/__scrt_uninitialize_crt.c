/*
 * XREFs of __scrt_uninitialize_crt @ 0x18011E4D8
 * Callers:
 *     ?dllmain_crt_process_detach@@YAH_N@Z @ 0x18011E918 (-dllmain_crt_process_detach@@YAH_N@Z.c)
 * Callees:
 *     sub_180054FC0 @ 0x180054FC0 (sub_180054FC0.c)
 */

char __fastcall _scrt_uninitialize_crt(__int64 a1, char a2)
{
  if ( !byte_18021ACF1 || !a2 )
  {
    sub_180054FC0();
    sub_180054FC0();
  }
  return 1;
}
