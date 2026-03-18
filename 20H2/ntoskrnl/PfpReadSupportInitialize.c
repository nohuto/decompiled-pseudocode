/*
 * XREFs of PfpReadSupportInitialize @ 0x140324DF0
 * Callers:
 *     PfpPrefetchFilesTrickle @ 0x140657C04 (PfpPrefetchFilesTrickle.c)
 *     PfpPrefetchFiles @ 0x1408E20A0 (PfpPrefetchFiles.c)
 * Callees:
 *     PfpOpenHandleInitialize @ 0x1408E207C (PfpOpenHandleInitialize.c)
 */

__int64 __fastcall PfpReadSupportInitialize(__int64 a1)
{
  *(_OWORD *)a1 = 0LL;
  *(_OWORD *)(a1 + 16) = 0LL;
  *(_OWORD *)(a1 + 32) = 0LL;
  *(_QWORD *)(a1 + 48) = 0LL;
  return PfpOpenHandleInitialize(a1 + 8);
}
