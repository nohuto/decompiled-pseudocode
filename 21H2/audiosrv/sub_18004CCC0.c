/*
 * XREFs of sub_18004CCC0 @ 0x18004CCC0
 * Callers:
 *     sub_180074550 @ 0x180074550 (sub_180074550.c)
 *     sub_180074560 @ 0x180074560 (sub_180074560.c)
 *     sub_180074570 @ 0x180074570 (sub_180074570.c)
 *     sub_180074580 @ 0x180074580 (sub_180074580.c)
 *     sub_180074590 @ 0x180074590 (sub_180074590.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_18004CCC0(__int64 a1)
{
  return (unsigned int)_InterlockedIncrement((volatile signed __int32 *)(a1 + 40));
}
