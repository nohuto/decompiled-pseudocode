/*
 * XREFs of sub_18004CE00 @ 0x18004CE00
 * Callers:
 *     sub_1800746D0 @ 0x1800746D0 (sub_1800746D0.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_18004CE00(__int64 a1)
{
  return (unsigned int)_InterlockedIncrement((volatile signed __int32 *)(a1 + 16));
}
