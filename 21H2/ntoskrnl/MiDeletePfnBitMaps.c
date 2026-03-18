/*
 * XREFs of MiDeletePfnBitMaps @ 0x14097E6E8
 * Callers:
 *     MiDeletePartitionResources @ 0x1405BDFF8 (MiDeletePartitionResources.c)
 *     MiCreatePfnBitMaps @ 0x14082ACF0 (MiCreatePfnBitMaps.c)
 * Callees:
 *     MiDeleteSparseRange @ 0x14097E850 (MiDeleteSparseRange.c)
 */

__int64 __fastcall MiDeletePfnBitMaps(ULONG_PTR *a1)
{
  __int64 *v1; // r14
  unsigned __int64 v2; // rbp
  unsigned int i; // edi
  unsigned __int64 v5; // rcx
  ULONG_PTR *v6; // rbx
  __int64 result; // rax

  v1 = MiLargePageSizes;
  v2 = qword_140C50840 + 1;
  for ( i = 0; i < 3; ++i )
  {
    if ( i >= 2 )
    {
      if ( a1 != &MiSystemPartition )
        goto LABEL_7;
      v5 = 512LL;
      v6 = a1 + 1996;
    }
    else
    {
      v5 = *v1;
      v6 = &a1[2 * i + 1978];
    }
    MiDeleteSparseRange(*v6, (unsigned int)((((v2 / v5 + (v2 % v5 != 0) + 7LL) >> 3) + 4095) >> 12));
    *v6 = 0LL;
LABEL_7:
    ++v1;
  }
  MiDeleteSparseRange(a1[1984], (unsigned int)((((((v2 & 0x3FFFF) != 0) + (v2 >> 18) + 7) >> 3) + 4095) >> 12));
  a1[1984] = 0LL;
  MiDeleteSparseRange(a1[1985], (unsigned int)((2 * ((v2 >> 18) + ((v2 & 0x3FFFF) != 0)) + 4095) >> 12));
  a1[1985] = 0LL;
  result = MiDeleteSparseRange(a1[1982], (unsigned int)(((v2 >> 9) + ((v2 & 0x1FF) != 0) + 4095LL) >> 12));
  a1[1982] = 0LL;
  return result;
}
