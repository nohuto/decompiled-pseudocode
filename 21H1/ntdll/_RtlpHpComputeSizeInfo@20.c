/*
 * XREFs of _RtlpHpComputeSizeInfo@20 @ 0x4B3782D4
 * Callers:
 *     _RtlpHpReallocComputeSizes@20 @ 0x4B3797A5 (_RtlpHpReallocComputeSizes@20.c)
 * Callees:
 *     _RtlpHpCalculateAllocSize@8 @ 0x4B378261 (_RtlpHpCalculateAllocSize@8.c)
 */

int __fastcall RtlpHpComputeSizeInfo(int a1, unsigned int a2, int a3, int *a4, int a5)
{
  int v6; // edx
  int v7; // edx
  int v8; // esi
  int v9; // eax
  int v10; // ecx

  v6 = a5 & 0x10000000;
  if ( a3 )
    v6 |= 8u;
  v8 = RtlpHpCalculateAllocSize(a2, v6);
  if ( a3 )
  {
    v9 = a2 + a1;
    if ( (v7 & 0x10000000) != 0 )
      v9 += 8;
    v10 = 8 * *(unsigned __int8 *)(((v9 + 7) & 0xFFFFFFF8) + 3);
    v8 += v10;
  }
  else
  {
    v10 = 0;
  }
  *a4 = v10;
  return v8;
}
