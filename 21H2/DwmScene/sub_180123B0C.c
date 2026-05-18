/*
 * XREFs of sub_180123B0C @ 0x180123B0C
 * Callers:
 *     ?dllmain_crt_dispatch@@YAHQEAUHINSTANCE__@@KQEAX@Z @ 0x180124080 (-dllmain_crt_dispatch@@YAHQEAUHINSTANCE__@@KQEAX@Z.c)
 * Callees:
 *     sub_18005A890 @ 0x18005A890 (sub_18005A890.c)
 */

char sub_180123B0C()
{
  if ( !sub_18005A890() )
    return 0;
  if ( !sub_18005A890() )
  {
    sub_18005A890();
    return 0;
  }
  return 1;
}
