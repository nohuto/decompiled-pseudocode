/*
 * XREFs of _RtlLargeIntegerDivide@20 @ 0x4B368B80
 * Callers:
 *     <none>
 * Callees:
 *     _RtlRaiseStatus@4 @ 0x4B308980 (_RtlRaiseStatus@4.c)
 */

unsigned int __stdcall RtlLargeIntegerDivide(unsigned int a1, unsigned int a2, unsigned __int64 a3, unsigned int *a4)
{
  unsigned int v4; // edx
  int v5; // esi
  unsigned int v7; // ecx
  int v8; // ecx
  int v10; // [esp+8h] [ebp-8h]

  v4 = 0;
  v10 = 64;
  v5 = 0;
  if ( !a3 )
    RtlRaiseStatus(-1073741676);
  do
  {
    v5 = (2 * v5) | (v4 >> 31);
    v4 = (2 * v4) | (a2 >> 31);
    v7 = a1;
    a1 *= 2;
    v8 = (2 * a2) | (v7 >> 31);
    a2 = v8;
    if ( __PAIR64__(v5, v4) >= a3 )
    {
      v5 -= HIDWORD(a3);
      a1 |= 1u;
      if ( v4 < (unsigned int)a3 )
        --v5;
      v4 -= a3;
    }
    --v10;
  }
  while ( v10 );
  if ( a4 )
  {
    *a4 = v4;
    a4[1] = v5;
  }
  return a1;
}
