/*
 * XREFs of KeQueryEffectivePriorityThread @ 0x1403764C0
 * Callers:
 *     <none>
 * Callees:
 *     KiIsThreadRankNonZero @ 0x1402F1CA0 (KiIsThreadRankNonZero.c)
 */

__int64 __fastcall KeQueryEffectivePriorityThread(__int64 a1)
{
  bool v2; // zf
  __int64 result; // rax

  v2 = !KiIsThreadRankNonZero(a1, 0LL);
  result = 1LL;
  if ( v2 )
    return (unsigned int)*(char *)(a1 + 195);
  return result;
}
