/*
 * XREFs of sub_180044640 @ 0x180044640
 * Callers:
 *     sub_180012FA8 @ 0x180012FA8 (sub_180012FA8.c)
 *     sub_180070784 @ 0x180070784 (sub_180070784.c)
 *     sub_180070804 @ 0x180070804 (sub_180070804.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_180044640(__int64 a1, __int64 a2, int a3)
{
  __int64 *v3; // rsi
  __int64 *v5; // rbx
  __int64 v7; // rdi

  v3 = (__int64 *)(a1 + 16);
  v5 = *(__int64 **)(a1 + 16);
  v7 = 0LL;
  while ( v5 != v3 )
  {
    if ( (int)NtCompareObjects(v5[3], a2) >= 0 )
      return (unsigned __int64)(v5 - 1) & -(__int64)((a3 & (1 << (v5[27] & 3))) != 0);
    v5 = (__int64 *)*v5;
  }
  return v7;
}
