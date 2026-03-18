/*
 * XREFs of _PnpCtxRegQueryKeyPathName @ 0x14078A570
 * Callers:
 *     PipHardwareConfigInit @ 0x140A49BF0 (PipHardwareConfigInit.c)
 * Callees:
 *     _RegRtlQueryKeyPathName @ 0x1407BC3B8 (_RegRtlQueryKeyPathName.c)
 */

__int64 __fastcall PnpCtxRegQueryKeyPathName(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  return RegRtlQueryKeyPathName(a2, a3, a4);
}
