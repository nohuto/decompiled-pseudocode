/*
 * XREFs of MiSplitPfnBitMaps @ 0x1407B9C94
 * Callers:
 *     MiActOnPartitionNodePages @ 0x140560AE0 (MiActOnPartitionNodePages.c)
 *     MiCreatePfnBitMaps @ 0x1407B9A04 (MiCreatePfnBitMaps.c)
 *     MiAddPhysicalMemory @ 0x1408C4FF0 (MiAddPhysicalMemory.c)
 * Callees:
 *     MiSplitBitmapPages @ 0x1402322A0 (MiSplitBitmapPages.c)
 */

__int64 __fastcall MiSplitPfnBitMaps(ULONG_PTR *a1, unsigned __int64 a2, __int64 a3)
{
  __int64 *v4; // r15
  unsigned int i; // edi
  unsigned __int64 v8; // r8
  ULONG_PTR *v9; // r14
  unsigned __int64 v10; // rbp
  unsigned __int64 v11; // rdi
  unsigned __int64 v12; // rsi

  v4 = MiLargePageSizes;
  for ( i = 0; i < 3; ++i )
  {
    if ( i >= 2 )
    {
      if ( a1 != &MiSystemPartition )
        goto LABEL_7;
      v9 = a1 + 768;
      v8 = 512LL;
    }
    else
    {
      v8 = *v4;
      v9 = &a1[2 * i + 633];
    }
    v10 = ((v8 + a2 + a3 - 1) & ~(v8 - 1)) / v8;
    if ( !(unsigned int)MiSplitBitmapPages(9, v9[1] + ((a2 / v8) >> 3), 8 * (((v10 + 7) >> 3) - ((a2 / v8) >> 3))) )
      return 0LL;
    if ( v10 > *v9 )
      *v9 = v10;
LABEL_7:
    ++v4;
  }
  if ( (unsigned int)MiSplitBitmapPages(9, a1[638] + (a2 >> 9), 8 * (((a2 + a3 + 511) >> 9) - (a2 >> 9))) )
  {
    v11 = (a2 + a3 + 0x3FFFF) >> 18;
    v12 = a2 >> 18;
    if ( (unsigned int)MiSplitBitmapPages(9, a1[640] + (v12 >> 3), 8 * (((v11 + 7) >> 3) - (v12 >> 3))) )
    {
      if ( v11 > a1[639] )
        a1[639] = v11;
      if ( (unsigned int)MiSplitBitmapPages(9, a1[641] + 2 * v12, 8 * (2 * v11 - 2 * v12)) )
        return 1LL;
    }
  }
  return 0LL;
}
