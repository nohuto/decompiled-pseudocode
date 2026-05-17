/*
 * XREFs of _RtlComputeCrc32@12 @ 0x4B35A790
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

int __stdcall RtlComputeCrc32(int a1, int a2, unsigned int a3)
{
  unsigned int v3; // edx
  unsigned int i; // ecx

  v3 = 0;
  for ( i = ~a1; v3 < a3; ++v3 )
    i = RtlCrc32Table[(unsigned __int8)(i ^ *(_BYTE *)(v3 + a2))] ^ (i >> 8);
  return ~i;
}
