/*
 * XREFs of __scrt_initialize_default_local_stdio_options @ 0x18011F6B8
 * Callers:
 *     ?dllmain_crt_process_attach@@YAHQEAUHINSTANCE__@@QEAX@Z @ 0x18011E800 (-dllmain_crt_process_attach@@YAHQEAUHINSTANCE__@@QEAX@Z.c)
 * Callees:
 *     sub_18011DF90 @ 0x18011DF90 (sub_18011DF90.c)
 *     sub_18011DF98 @ 0x18011DF98 (sub_18011DF98.c)
 */

_QWORD *_scrt_initialize_default_local_stdio_options()
{
  _QWORD *v0; // rax
  _QWORD *result; // rax

  v0 = sub_18011DF90();
  *v0 |= 4uLL;
  result = sub_18011DF98();
  *result |= 2uLL;
  return result;
}
