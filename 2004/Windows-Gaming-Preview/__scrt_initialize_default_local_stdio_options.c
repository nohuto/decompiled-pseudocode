/*
 * XREFs of __scrt_initialize_default_local_stdio_options @ 0x180044D0C
 * Callers:
 *     ?dllmain_crt_process_attach@@YAHQEAUHINSTANCE__@@QEAX@Z @ 0x180043D98 (-dllmain_crt_process_attach@@YAHQEAUHINSTANCE__@@QEAX@Z.c)
 * Callees:
 *     sub_180043CBC @ 0x180043CBC (sub_180043CBC.c)
 *     sub_180043CF4 @ 0x180043CF4 (sub_180043CF4.c)
 */

_QWORD *_scrt_initialize_default_local_stdio_options()
{
  _QWORD *v0; // rax
  _QWORD *result; // rax

  v0 = sub_180043CBC();
  *v0 |= 4uLL;
  result = sub_180043CF4();
  *result |= 2uLL;
  return result;
}
