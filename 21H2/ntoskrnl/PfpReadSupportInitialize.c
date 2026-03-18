/*
 * XREFs of PfpReadSupportInitialize @ 0x140360E0C
 * Callers:
 *     PfpPrefetchFilesTrickle @ 0x1407E0408 (PfpPrefetchFilesTrickle.c)
 *     PfpPrefetchFiles @ 0x1409870AC (PfpPrefetchFiles.c)
 * Callees:
 *     PfpOpenHandleInitialize @ 0x1408820E0 (PfpOpenHandleInitialize.c)
 */

__int64 __fastcall PfpReadSupportInitialize(__int64 a1)
{
  *(_OWORD *)a1 = 0LL;
  *(_OWORD *)(a1 + 16) = 0LL;
  *(_OWORD *)(a1 + 32) = 0LL;
  *(_QWORD *)(a1 + 48) = 0LL;
  return PfpOpenHandleInitialize(a1 + 8);
}
