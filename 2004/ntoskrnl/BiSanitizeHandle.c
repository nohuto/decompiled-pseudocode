/*
 * XREFs of BiSanitizeHandle @ 0x14036044C
 * Callers:
 *     BiDeleteKey @ 0x140766980 (BiDeleteKey.c)
 *     BcdFlushStore @ 0x1407672B0 (BcdFlushStore.c)
 *     BiCloseStore @ 0x14076F920 (BiCloseStore.c)
 *     BiDeleteRegistryValue @ 0x14076FE04 (BiDeleteRegistryValue.c)
 *     BiEnumerateSubKeys @ 0x140771148 (BiEnumerateSubKeys.c)
 *     BiCreateKey @ 0x140771830 (BiCreateKey.c)
 *     BiGetRegistryValue @ 0x140771A18 (BiGetRegistryValue.c)
 *     BiOpenKey @ 0x140772024 (BiOpenKey.c)
 *     BiGetKeyName @ 0x140772420 (BiGetKeyName.c)
 *     BiSetRegistryValue @ 0x140772684 (BiSetRegistryValue.c)
 * Callees:
 *     <none>
 */

unsigned __int64 __fastcall BiSanitizeHandle(__int64 a1)
{
  return a1 & 0xFFFFFFFFFFFFFFFDuLL;
}
