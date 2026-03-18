/*
 * XREFs of _vCleanupFonts@4 @ 0x98236
 * Callers:
 *     <none>
 * Callees:
 *     _bDeleteFont@8 @ 0x9827E (_bDeleteFont@8.c)
 */

int __stdcall vCleanupFonts(int a1)
{
  int i; // ecx
  int result; // eax
  int v3; // esi
  int v4; // [esp+4h] [ebp-4h] BYREF

  v4 = 0;
  for ( i = 0; ; i = v3 )
  {
    result = HmgNextOwned(i, a1, &v4);
    v3 = result;
    if ( !result )
      break;
    if ( (BYTE2(v4) & 0x1F) == 0xA )
      bDeleteFont(v4, 0);
  }
  return result;
}
