/*
 * XREFs of __scrt_initialize_default_local_stdio_options @ 0x180124F88
 * Callers:
 *     ?dllmain_crt_process_attach@@YAHQEAUHINSTANCE__@@QEAX@Z @ 0x1801240D0 (-dllmain_crt_process_attach@@YAHQEAUHINSTANCE__@@QEAX@Z.c)
 * Callees:
 *     sub_180123860 @ 0x180123860 (sub_180123860.c)
 *     sub_180123868 @ 0x180123868 (sub_180123868.c)
 */

_QWORD *_scrt_initialize_default_local_stdio_options()
{
  _QWORD *v0; // rax
  _QWORD *result; // rax

  v0 = sub_180123860();
  *v0 |= 4uLL;
  result = sub_180123868();
  *result |= 2uLL;
  return result;
}
