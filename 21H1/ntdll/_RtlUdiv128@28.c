/*
 * XREFs of _RtlUdiv128@28 @ 0x4B36A850
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

unsigned int __stdcall RtlUdiv128(int a1, int a2, unsigned int a3, unsigned int a4, unsigned __int64 a5, int *a6)
{
  unsigned int v6; // ecx
  int v10; // edx
  int v11; // eax
  unsigned __int64 v12; // rax
  int v14; // [esp+10h] [ebp-8h]
  unsigned int v15; // [esp+14h] [ebp-4h]

  v6 = a4;
  v15 = a4;
  v14 = 64;
  do
  {
    v10 = a2;
    v11 = a2 >> 31;
    a2 = __PAIR64__(a2, a1) >> 31;
    a1 = (v6 >> 31) | (2 * a1);
    HIDWORD(v12) = a2 | (v10 >> 31);
    v6 = __PAIR64__(v15, a3) >> 31;
    LODWORD(v12) = a1 | v11;
    a3 *= 2;
    v15 = v6;
    if ( v12 >= a5 )
    {
      a3 |= 1u;
      v15 = v6;
      a2 = (__PAIR64__(a2, a1) - a5) >> 32;
      a1 -= a5;
    }
    --v14;
  }
  while ( v14 );
  if ( a6 )
  {
    *a6 = a1;
    a6[1] = a2;
  }
  return a3;
}
