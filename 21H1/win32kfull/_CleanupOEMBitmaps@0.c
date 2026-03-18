/*
 * XREFs of _CleanupOEMBitmaps@0 @ 0x91C02
 * Callers:
 *     _CreateBitmapStrip@0 @ 0x8E78C (_CreateBitmapStrip@0.c)
 * Callees:
 *     <none>
 */

int __stdcall CleanupOEMBitmaps()
{
  unsigned int i; // esi
  int result; // eax

  for ( i = 0; i < 3402; i += 189 )
  {
    dword_26E834[i] = 0;
    dword_26E838[i] = 0;
    result = *(int *)((char *)&gOemBitmapSet + i * 4);
    if ( result )
    {
      GreSetBitmapOwner(result, -2147483646);
      result = GreDeleteObject(*(struct OEMBITMAPSET **)((char *)&gOemBitmapSet + i * 4));
      *(struct OEMBITMAPSET **)((char *)&gOemBitmapSet + i * 4) = 0;
    }
  }
  return result;
}
