/*
 * XREFs of _BuildVGA256Xlate @ 0x1BF6C1
 * Callers:
 *     _AAHalftoneBitmap @ 0x1BAE67 (_AAHalftoneBitmap.c)
 * Callees:
 *     <none>
 */

char *__fastcall BuildVGA256Xlate(int a1, _BYTE *a2)
{
  _BYTE *v2; // ebx
  int v3; // edi
  char *v4; // esi

  if ( !a1 )
    return VGA256Xlate;
  v2 = a2;
  if ( a2 )
  {
    v3 = 366;
    v4 = (char *)(VGA256Xlate - a2);
    do
    {
      *a2 = *(_BYTE *)((unsigned __int8)a2[(_DWORD)v4] + a1);
      ++a2;
      --v3;
    }
    while ( v3 );
  }
  return v2;
}
