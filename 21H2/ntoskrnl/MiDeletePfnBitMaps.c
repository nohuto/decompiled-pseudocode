/*
 * XREFs of MiDeletePfnBitMaps @ 0x1408D87AC
 * Callers:
 *     MiDeletePartitionResources @ 0x140561B58 (MiDeletePartitionResources.c)
 *     MiCreatePfnBitMaps @ 0x1407B9A04 (MiCreatePfnBitMaps.c)
 * Callees:
 *     MiDeleteSparseRange @ 0x1408D88B0 (MiDeleteSparseRange.c)
 */

__int64 __fastcall MiDeletePfnBitMaps(ULONG_PTR *a1)
{
  __int64 *v2; // r14
  unsigned int i; // esi
  unsigned __int64 v4; // rcx
  ULONG_PTR *v5; // rdi
  ULONG_PTR v6; // rcx
  __int64 result; // rax

  v2 = MiLargePageSizes;
  for ( i = 0; i < 3; ++i )
  {
    if ( i >= 2 )
    {
      if ( a1 != &MiSystemPartition )
        goto LABEL_7;
      v4 = 512LL;
      v5 = a1 + 769;
    }
    else
    {
      v4 = *v2;
      v5 = &a1[2 * i + 634];
    }
    MiDeleteSparseRange(
      *v5,
      (unsigned int)((((0x1000000000LL / v4 + (0x1000000000LL % v4 != 0) + 7LL) >> 3) + 4095) >> 12));
    *v5 = 0LL;
LABEL_7:
    ++v2;
  }
  MiDeleteSparseRange(a1[640], 8LL);
  a1[640] = 0LL;
  MiDeleteSparseRange(a1[641], 128LL);
  v6 = a1[638];
  a1[641] = 0LL;
  result = MiDeleteSparseRange(v6, 0x8000LL);
  a1[638] = 0LL;
  return result;
}
