/*
 * XREFs of sub_1800076D4 @ 0x1800076D4
 * Callers:
 *     sub_18000769C @ 0x18000769C (sub_18000769C.c)
 *     sub_180068C98 @ 0x180068C98 (sub_180068C98.c)
 *     sub_18006C2FC @ 0x18006C2FC (sub_18006C2FC.c)
 * Callees:
 *     sub_18000EF78 @ 0x18000EF78 (sub_18000EF78.c)
 */

__int64 __fastcall sub_1800076D4(__int64 a1, __int64 a2, __int64 a3)
{
  RtlAcquireSRWLockShared(a1 + 16);
  LODWORD(a3) = sub_18000EF78(a1, a2, a3);
  RtlReleaseSRWLockShared(a1 + 16);
  return (unsigned int)a3;
}
