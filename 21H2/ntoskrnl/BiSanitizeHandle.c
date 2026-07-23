/*
 * XREFs of BiSanitizeHandle @ 0x14025166C
 * Callers:
 *     BiDeleteKey @ 0x140779B20 (BiDeleteKey.c)
 *     BcdFlushStore @ 0x14077A454 (BcdFlushStore.c)
 *     BiCloseStore @ 0x140781EC0 (BiCloseStore.c)
 *     BiDeleteRegistryValue @ 0x1407823A4 (BiDeleteRegistryValue.c)
 *     BiEnumerateSubKeys @ 0x1407836E8 (BiEnumerateSubKeys.c)
 *     BiCreateKey @ 0x140783DD0 (BiCreateKey.c)
 *     BiGetRegistryValue @ 0x140783FB8 (BiGetRegistryValue.c)
 *     BiOpenKey @ 0x1407845C4 (BiOpenKey.c)
 *     BiGetKeyName @ 0x1407849C0 (BiGetKeyName.c)
 *     BiSetRegistryValue @ 0x140784C24 (BiSetRegistryValue.c)
 * Callees:
 *     <none>
 */

unsigned __int64 __fastcall BiSanitizeHandle(__int64 a1)
{
  return a1 & 0xFFFFFFFFFFFFFFFDuLL;
}
