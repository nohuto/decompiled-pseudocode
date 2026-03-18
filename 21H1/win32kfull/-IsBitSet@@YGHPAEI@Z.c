/*
 * XREFs of ?IsBitSet@@YGHPAEI@Z @ 0xE35D2
 * Callers:
 *     ?_StoreGestureConfig@@YGHPAUtagWND@@IPAUtagGESTURECONFIG@@@Z @ 0xE3328 (-_StoreGestureConfig@@YGHPAUtagWND@@IPAUtagGESTURECONFIG@@@Z.c)
 *     _GetGestureConfigSettings@24 @ 0x1887F4 (_GetGestureConfigSettings@24.c)
 * Callees:
 *     <none>
 */

int __fastcall IsBitSet(int a1, unsigned int a2)
{
  int result; // eax

  result = 0;
  if ( a1 )
    return *(unsigned __int8 *)((a2 >> 3) + a1) & (1 << (a2 & 7));
  return result;
}
