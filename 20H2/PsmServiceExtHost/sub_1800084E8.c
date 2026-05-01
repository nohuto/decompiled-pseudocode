/*
 * XREFs of sub_1800084E8 @ 0x1800084E8
 * Callers:
 *     sub_1800014F0 @ 0x1800014F0 (sub_1800014F0.c)
 *     sub_1800082C0 @ 0x1800082C0 (sub_1800082C0.c)
 *     sub_180008408 @ 0x180008408 (sub_180008408.c)
 *     sub_1800767F0 @ 0x1800767F0 (sub_1800767F0.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_1800084E8(__int64 a1)
{
  __int64 v1; // rdx
  __int64 v2; // rcx

  *(_DWORD *)(a1 + 40) = 0;
  RtlReleaseSRWLockExclusive(a1 + 32);
  return sub_18001E830(v2, v1, 11LL);
}
