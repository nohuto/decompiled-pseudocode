/*
 * XREFs of PfpReadSupportInitialize @ 0x1402D45F8
 * Callers:
 *     PfpPrefetchFilesTrickle @ 0x1406C9930 (PfpPrefetchFilesTrickle.c)
 *     PfpPrefetchFiles @ 0x1408DF860 (PfpPrefetchFiles.c)
 * Callees:
 *     PfpOpenHandleInitialize @ 0x1408DF83C (PfpOpenHandleInitialize.c)
 */

__int64 __fastcall PfpReadSupportInitialize(__int64 a1)
{
  *(_OWORD *)a1 = 0LL;
  *(_OWORD *)(a1 + 16) = 0LL;
  *(_OWORD *)(a1 + 32) = 0LL;
  *(_QWORD *)(a1 + 48) = 0LL;
  return PfpOpenHandleInitialize(a1 + 8);
}
