/*
 * XREFs of sub_18004DA30 @ 0x18004DA30
 * Callers:
 *     sub_1800752D0 @ 0x1800752D0 (sub_1800752D0.c)
 *     sub_1800752E0 @ 0x1800752E0 (sub_1800752E0.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_18004DA30(__int64 a1)
{
  return (unsigned int)_InterlockedIncrement((volatile signed __int32 *)(a1 + 24));
}
