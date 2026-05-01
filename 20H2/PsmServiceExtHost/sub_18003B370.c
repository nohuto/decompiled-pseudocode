/*
 * XREFs of sub_18003B370 @ 0x18003B370
 * Callers:
 *     sub_1800468D0 @ 0x1800468D0 (sub_1800468D0.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_18003B370(__int64 a1)
{
  return (unsigned int)_InterlockedIncrement((volatile signed __int32 *)(a1 + 16));
}
