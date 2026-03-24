/*
 * XREFs of BiSanitizeHandle @ 0x1402D333C
 * Callers:
 *     BiDeleteKey @ 0x140779960 (BiDeleteKey.c)
 *     BcdFlushStore @ 0x14077A294 (BcdFlushStore.c)
 *     BiCloseStore @ 0x140781D00 (BiCloseStore.c)
 *     BiDeleteRegistryValue @ 0x1407821E4 (BiDeleteRegistryValue.c)
 *     BiEnumerateSubKeys @ 0x140783528 (BiEnumerateSubKeys.c)
 *     BiCreateKey @ 0x140783C10 (BiCreateKey.c)
 *     BiGetRegistryValue @ 0x140783DF8 (BiGetRegistryValue.c)
 *     BiOpenKey @ 0x140784404 (BiOpenKey.c)
 *     BiGetKeyName @ 0x140784800 (BiGetKeyName.c)
 *     BiSetRegistryValue @ 0x140784A64 (BiSetRegistryValue.c)
 * Callees:
 *     <none>
 */

unsigned __int64 __fastcall BiSanitizeHandle(__int64 a1)
{
  return a1 & 0xFFFFFFFFFFFFFFFDuLL;
}
