/*
 * XREFs of _IS_UI_LANGID@4 @ 0x91280
 * Callers:
 *     _xxxDrawCaptionBar@12 @ 0x8F42C (_xxxDrawCaptionBar@12.c)
 *     _BitBltSysBmp@20 @ 0x910DA (_BitBltSysBmp@20.c)
 * Callees:
 *     <none>
 */

BOOL IS_UI_LANGID()
{
  int v1; // [esp+0h] [ebp-4h] BYREF

  v1 = 0;
  return (int)RtlGetThreadLangIdByIndex(0, 0, &v1, 0) >= 0 && v1 == 1037;
}
