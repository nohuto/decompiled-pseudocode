/*
 * XREFs of _NeedsWindowEdge@12 @ 0x32260
 * Callers:
 *     _xxxCreateWindowEx@68 @ 0x2D67C (_xxxCreateWindowEx@68.c)
 *     __AdjustWindowRectExForDpi@20 @ 0x313D6 (__AdjustWindowRectExForDpi@20.c)
 * Callees:
 *     <none>
 */

int __fastcall NeedsWindowEdge(int a1, int a2, int a3)
{
  int result; // eax
  int v4; // ecx

  result = 0;
  if ( (a2 & 1) != 0 )
    return 1;
  if ( ((unsigned int)&loc_20000 & a2) != 0 )
    return result;
  if ( (((unsigned int)&loc_3FFFD + 3) & a1) != 0 )
    return 1;
  v4 = a1 & 0xC00000;
  if ( v4 == 0x400000 )
    return 1;
  if ( v4 == 12582912 )
    return a3;
  return result;
}
