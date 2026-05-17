/*
 * XREFs of _LdrpComputeTlsSizeAndAlignment@8 @ 0x4B2E16E5
 * Callers:
 *     _LdrpHandleTlsData@4 @ 0x4B2D0CD1 (_LdrpHandleTlsData@4.c)
 *     _LdrpAllocateTls@0 @ 0x4B2E15BF (_LdrpAllocateTls@0.c)
 * Callees:
 *     <none>
 */

int __fastcall LdrpComputeTlsSizeAndAlignment(_DWORD *a1, _DWORD *a2)
{
  int v4; // ecx
  int v5; // edx
  unsigned int v6; // eax
  int v7; // ecx
  int result; // eax

  v4 = (a1[7] >> 20) & 0xF;
  if ( (a1[7] & 0xF00000) != 0 )
    LOBYTE(v4) = v4 - 1;
  v5 = a1[3] - a1[2];
  v6 = 1 << v4;
  v7 = 8;
  if ( v6 >= 8 )
    v7 = v6;
  result = v5;
  *a2 = v7 - 1;
  return result;
}
