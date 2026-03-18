/*
 * XREFs of _IsValidBand@4 @ 0xA6CEE
 * Callers:
 *     _xxxCreateWindowEx@68 @ 0x2D67C (_xxxCreateWindowEx@68.c)
 *     ?_DeferWindowPosAndBand@@YGPAUtagSMWP@@PAU1@PAUtagWND@@1HHHHIW4ZBID@@W4WindowBandOptions@@@Z @ 0x7705E (-_DeferWindowPosAndBand@@YGPAUtagSMWP@@PAU1@PAUtagWND@@1HHHHIW4ZBID@@W4WindowBandOptions@@@Z.c)
 * Callees:
 *     <none>
 */

int __thiscall IsValidBand(void *this)
{
  int v1; // edx
  int v2; // eax

  v1 = 0;
  v2 = 0;
  while ( (void *)gazbidOrder[v2] != this )
  {
    if ( (unsigned int)++v2 >= 18 )
      return v1;
  }
  return 1;
}
