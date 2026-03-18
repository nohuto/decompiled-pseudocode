/*
 * XREFs of _ulCharsetToCodePage@4 @ 0x24964C
 * Callers:
 *     ?ppfeSynthesizeAMatch@MAPPER@@QAEPAVPFE@@PAK0PAU_POINTL@@@Z @ 0xA5444 (-ppfeSynthesizeAMatch@MAPPER@@QAEPAVPFE@@PAK0PAU_POINTL@@@Z.c)
 *     ?vAttemptDeviceMatch@MAPPER@@QAEXXZ @ 0x1F4FA1 (-vAttemptDeviceMatch@MAPPER@@QAEXXZ.c)
 *     ?vEmergency@MAPPER@@QAEXXZ @ 0x1F50F6 (-vEmergency@MAPPER@@QAEXXZ.c)
 * Callees:
 *     <none>
 */

int __thiscall ulCharsetToCodePage(void *this)
{
  int v1; // eax

  v1 = 0;
  if ( this == (void *)255 )
    return 1;
  while ( (void *)charsets[v1] != this )
  {
    if ( (unsigned int)++v1 >= 0x11 )
      return _gbDBCSCodePage != 0 ? 0x4E4 : 0;
  }
  return codepages[v1];
}
