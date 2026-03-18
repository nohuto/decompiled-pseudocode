/*
 * XREFs of KeQueryEffectiveBasePriorityThread @ 0x140336F08
 * Callers:
 *     MiStoreUpdateMemoryConditions @ 0x140336F38 (MiStoreUpdateMemoryConditions.c)
 * Callees:
 *     KiIsThreadRankNonZero @ 0x140334690 (KiIsThreadRankNonZero.c)
 */

__int64 __fastcall KeQueryEffectiveBasePriorityThread(__int64 a1)
{
  bool v2; // zf
  __int64 result; // rax

  v2 = !KiIsThreadRankNonZero(a1, 0LL);
  result = 1LL;
  if ( v2 )
    return (unsigned int)*(char *)(a1 + 563);
  return result;
}
