/*
 * XREFs of _RemoveSwitchWindowInfo@4 @ 0x15D02D
 * Callers:
 *     _xxxFreeWindow@8 @ 0x70780 (_xxxFreeWindow@8.c)
 *     _xxxNextWindow@8 @ 0x15D33E (_xxxNextWindow@8.c)
 *     _xxxOldNextWindow@4 @ 0x15D8AF (_xxxOldNextWindow@4.c)
 * Callees:
 *     ?SwitchWndCleanup@@YGXPAPAUtagSwitchWndInfo@@@Z @ 0x15C6A6 (-SwitchWndCleanup@@YGXPAPAUtagSwitchWndInfo@@@Z.c)
 */

struct tagSwitchWndInfo *__stdcall RemoveSwitchWindowInfo(int *a1)
{
  struct tagSwitchWndInfo *result; // eax
  struct tagSwitchWndInfo **i; // esi

  result = gpswiFirst;
  for ( i = &gpswiFirst; result; result = *(struct tagSwitchWndInfo **)result )
  {
    if ( result == (struct tagSwitchWndInfo *)*a1 )
    {
      *i = *(struct tagSwitchWndInfo **)result;
      SwitchWndCleanup(a1);
      result = *i;
    }
    if ( !result )
      break;
    i = (struct tagSwitchWndInfo **)result;
  }
  return result;
}
