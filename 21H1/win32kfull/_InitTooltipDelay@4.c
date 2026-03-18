/*
 * XREFs of _InitTooltipDelay@4 @ 0xE4A64
 * Callers:
 *     _xxxTooltipWndProc@16 @ 0xE4592 (_xxxTooltipWndProc@16.c)
 *     __SetDoubleClickTime@4 @ 0xE49D2 (__SetDoubleClickTime@4.c)
 * Callees:
 *     <none>
 */

int __thiscall InitTooltipDelay(_DWORD *this)
{
  int result; // eax

  if ( this )
  {
    this[1] = 3 * _gdtDblClk;
    result = 8 * _gdtDblClk;
    this[2] = 8 * _gdtDblClk;
  }
  return result;
}
