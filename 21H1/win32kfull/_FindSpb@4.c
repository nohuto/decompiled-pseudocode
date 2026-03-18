/*
 * XREFs of _FindSpb@4 @ 0x17E390
 * Callers:
 *     _OffsetWindow@16 @ 0x2AF60 (_OffsetWindow@16.c)
 *     ?zzzBltValidBits@@YG?AW4BltBitsResult@@PAUtagSMWP@@@Z @ 0x339E2 (-zzzBltValidBits@@YG-AW4BltBitsResult@@PAUtagSMWP@@@Z.c)
 *     _xxxFreeWindow@8 @ 0x70780 (_xxxFreeWindow@8.c)
 *     _xxxDrawDragRectEx@16 @ 0x176775 (_xxxDrawDragRectEx@16.c)
 *     _RestoreSpb@12 @ 0x17E510 (_RestoreSpb@12.c)
 * Callees:
 *     <none>
 */

int **__thiscall FindSpb(int *this)
{
  int **result; // eax

  for ( result = *(int ***)(_gpDispInfo + 16);
        result && (result[1] != this || ((_BYTE)result[8] & 2) != 0);
        result = (int **)*result )
  {
    ;
  }
  return result;
}
