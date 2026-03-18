/*
 * XREFs of _GrayCopyDIB_CX @ 0x1C9280
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __cdecl GrayCopyDIB_CX(int a1, char *a2, _BYTE *a3, _BYTE *a4, int a5)
{
  char *v5; // ecx
  char v7; // al

  v5 = a2;
  if ( a2 )
  {
    do
    {
      v7 = *v5++;
      *a3 = v7;
      a3 += a5;
    }
    while ( a3 != a4 );
  }
}
