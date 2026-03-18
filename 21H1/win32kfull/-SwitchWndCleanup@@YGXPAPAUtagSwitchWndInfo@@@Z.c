/*
 * XREFs of ?SwitchWndCleanup@@YGXPAPAUtagSwitchWndInfo@@@Z @ 0x15C6A6
 * Callers:
 *     _RemoveThreadSwitchWindowInfo@4 @ 0xA434A (_RemoveThreadSwitchWindowInfo@4.c)
 *     _RemoveSwitchWindowInfo@4 @ 0x15D02D (_RemoveSwitchWindowInfo@4.c)
 * Callees:
 *     _FreeHwndList@4 @ 0x2D2D0 (_FreeHwndList@4.c)
 */

void __thiscall SwitchWndCleanup(int *this)
{
  int v2; // eax
  struct tagBWL *v3; // ecx

  v2 = *this;
  v3 = *(struct tagBWL **)(*this + 8);
  if ( v3 )
  {
    FreeHwndList(v3);
    v2 = *this;
  }
  Win32FreePool(v2);
  *this = 0;
}
