/*
 * XREFs of _vCleanupMetaType@4 @ 0xD4406
 * Callers:
 *     <none>
 * Callees:
 *     _GreDeleteServerMetaFile@4 @ 0x21EDBC (_GreDeleteServerMetaFile@4.c)
 */

int __stdcall vCleanupMetaType(int a1)
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
    if ( (BYTE2(v4) & 0x1F) == 0x15 )
      GreDeleteServerMetaFile();
  }
  return result;
}
