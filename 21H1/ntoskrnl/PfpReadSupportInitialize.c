/*
 * XREFs of PfpReadSupportInitialize @ 0x1402BEAF0
 * Callers:
 *     PfpPrefetchFilesTrickle @ 0x14063FD60 (PfpPrefetchFilesTrickle.c)
 *     PfpPrefetchFiles @ 0x1408DAEF0 (PfpPrefetchFiles.c)
 * Callees:
 *     PfpOpenHandleInitialize @ 0x1408DAECC (PfpOpenHandleInitialize.c)
 */

__int64 __fastcall PfpReadSupportInitialize(__int64 a1)
{
  *(_OWORD *)a1 = 0LL;
  *(_OWORD *)(a1 + 16) = 0LL;
  *(_OWORD *)(a1 + 32) = 0LL;
  *(_QWORD *)(a1 + 48) = 0LL;
  return PfpOpenHandleInitialize(a1 + 8);
}
