/*
 * XREFs of _IsValidBandForProcess@12 @ 0x2A442
 * Callers:
 *     _xxxCreateWindowEx@68 @ 0x2D67C (_xxxCreateWindowEx@68.c)
 *     ?_DeferWindowPosAndBand@@YGPAUtagSMWP@@PAU1@PAUtagWND@@1HHHHIW4ZBID@@W4WindowBandOptions@@@Z @ 0x7705E (-_DeferWindowPosAndBand@@YGPAUtagSMWP@@PAU1@PAUtagWND@@1HHHHIW4ZBID@@W4WindowBandOptions@@@Z.c)
 * Callees:
 *     _HasImmersiveAppRight@4 @ 0x7C7B4 (_HasImmersiveAppRight@4.c)
 */

BOOL __fastcall IsValidBandForProcess(int a1, int a2, int a3)
{
  if ( IsImmersiveBroker(a1) )
    return 1;
  if ( HasImmersiveAppRight(a1) )
  {
    switch ( a2 )
    {
      case 1:
      case 3:
      case 4:
      case 5:
      case 6:
      case 8:
      case 9:
      case 10:
      case 11:
      case 13:
      case 15:
      case 17:
      case 18:
        return 1;
      default:
        return 0;
    }
  }
  if ( a2 == 1 )
    return 1;
  if ( (*(_BYTE *)(a1 + 464) & 2) != 0 || a3 && *(_DWORD *)(*(_DWORD *)(a3 + 20) + 148) == 2 )
    return a2 == 2;
  return 0;
}
