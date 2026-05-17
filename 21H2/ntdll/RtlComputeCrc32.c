/*
 * XREFs of RtlComputeCrc32 @ 0x180059EC0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall RtlComputeCrc32(int a1, char *a2, unsigned int a3)
{
  unsigned int v4; // ecx
  __int64 v5; // r10
  char v6; // al

  v4 = ~a1;
  if ( a3 )
  {
    v5 = a3;
    do
    {
      v6 = *a2++;
      v4 = (v4 >> 8) ^ RtlCrc32Table[(unsigned __int8)(v6 ^ v4)];
      --v5;
    }
    while ( v5 );
  }
  return ~v4;
}
