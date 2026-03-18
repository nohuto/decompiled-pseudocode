/*
 * XREFs of BiSanitizeHandle @ 0x14033102C
 * Callers:
 *     BiDeleteKey @ 0x1407759B0 (BiDeleteKey.c)
 *     BcdFlushStore @ 0x1407762E0 (BcdFlushStore.c)
 *     BiCloseStore @ 0x14077DF20 (BiCloseStore.c)
 *     BiDeleteRegistryValue @ 0x14077E404 (BiDeleteRegistryValue.c)
 *     BiEnumerateSubKeys @ 0x14077F748 (BiEnumerateSubKeys.c)
 *     BiCreateKey @ 0x14077FE30 (BiCreateKey.c)
 *     BiGetRegistryValue @ 0x140780018 (BiGetRegistryValue.c)
 *     BiOpenKey @ 0x140780624 (BiOpenKey.c)
 *     BiGetKeyName @ 0x140780A20 (BiGetKeyName.c)
 *     BiSetRegistryValue @ 0x140780C84 (BiSetRegistryValue.c)
 * Callees:
 *     <none>
 */

unsigned __int64 __fastcall BiSanitizeHandle(__int64 a1)
{
  return a1 & 0xFFFFFFFFFFFFFFFDuLL;
}
