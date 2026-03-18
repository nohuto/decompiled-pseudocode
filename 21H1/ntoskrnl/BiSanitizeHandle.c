/*
 * XREFs of BiSanitizeHandle @ 0x140322838
 * Callers:
 *     BiDeleteKey @ 0x140764FC0 (BiDeleteKey.c)
 *     BcdFlushStore @ 0x1407658F0 (BcdFlushStore.c)
 *     BiCloseStore @ 0x14076D510 (BiCloseStore.c)
 *     BiDeleteRegistryValue @ 0x14076D9F4 (BiDeleteRegistryValue.c)
 *     BiEnumerateSubKeys @ 0x14076ED38 (BiEnumerateSubKeys.c)
 *     BiCreateKey @ 0x14076F420 (BiCreateKey.c)
 *     BiGetRegistryValue @ 0x14076F608 (BiGetRegistryValue.c)
 *     BiOpenKey @ 0x14076FC14 (BiOpenKey.c)
 *     BiGetKeyName @ 0x140770010 (BiGetKeyName.c)
 *     BiSetRegistryValue @ 0x140770274 (BiSetRegistryValue.c)
 * Callees:
 *     <none>
 */

unsigned __int64 __fastcall BiSanitizeHandle(__int64 a1)
{
  return a1 & 0xFFFFFFFFFFFFFFFDuLL;
}
