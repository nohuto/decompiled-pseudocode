/*
 * XREFs of BiSanitizeHandle @ 0x14025DBFC
 * Callers:
 *     BcdFlushStore @ 0x1408009E0 (BcdFlushStore.c)
 *     BiCreateKey @ 0x1408036C8 (BiCreateKey.c)
 *     BiDeleteKey @ 0x14080422C (BiDeleteKey.c)
 *     BiCloseStore @ 0x140811EB0 (BiCloseStore.c)
 *     BiDeleteRegistryValue @ 0x140812318 (BiDeleteRegistryValue.c)
 *     BiSetRegistryValue @ 0x1408123B4 (BiSetRegistryValue.c)
 *     BiEnumerateSubKeys @ 0x14081287C (BiEnumerateSubKeys.c)
 *     BiGetRegistryValue @ 0x140812F84 (BiGetRegistryValue.c)
 *     BiOpenKey @ 0x140813164 (BiOpenKey.c)
 *     BiGetKeyName @ 0x140813564 (BiGetKeyName.c)
 * Callees:
 *     <none>
 */

unsigned __int64 __fastcall BiSanitizeHandle(__int64 a1)
{
  return a1 & 0xFFFFFFFFFFFFFFFDuLL;
}
