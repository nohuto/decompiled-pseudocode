/*
 * XREFs of RemoveSwitchWindowInfo @ 0x1C01F3970
 * Callers:
 *     xxxFreeWindow @ 0x1C00D094C (xxxFreeWindow.c)
 *     xxxNextWindow @ 0x1C01F3DB0 (xxxNextWindow.c)
 *     xxxOldNextWindow @ 0x1C01F45DC (xxxOldNextWindow.c)
 * Callees:
 *     ?SwitchWndCleanup@@YAXPEAPEAUtagSwitchWndInfo@@@Z @ 0x1C01F2D48 (-SwitchWndCleanup@@YAXPEAPEAUtagSwitchWndInfo@@@Z.c)
 */

struct tagSwitchWndInfo *__fastcall RemoveSwitchWindowInfo(struct tagSwitchWndInfo **a1)
{
  struct tagSwitchWndInfo *result; // rax
  struct tagSwitchWndInfo **v2; // rbx

  result = gpswiFirst;
  v2 = &gpswiFirst;
  while ( result )
  {
    if ( result == *a1 )
    {
      *v2 = *(struct tagSwitchWndInfo **)result;
      SwitchWndCleanup(a1);
      result = *v2;
    }
    if ( !result )
      break;
    v2 = (struct tagSwitchWndInfo **)result;
    result = *(struct tagSwitchWndInfo **)result;
  }
  return result;
}
