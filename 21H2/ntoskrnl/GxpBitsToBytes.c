/*
 * XREFs of GxpBitsToBytes @ 0x14039C84C
 * Callers:
 *     BgpGxRectangleCreate @ 0x1409F42C0 (BgpGxRectangleCreate.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall GxpBitsToBytes(int a1)
{
  return (unsigned int)(a1 + 7) >> 3;
}
