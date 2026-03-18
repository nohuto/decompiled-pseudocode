/*
 * XREFs of _safe_cast_fnid_to_PTOOLTIPWND@4 @ 0x12DE2
 * Callers:
 *     _xxxTrackMouseMove@12 @ 0x129D6 (_xxxTrackMouseMove@12.c)
 *     _xxxProcessEventMessage@8 @ 0x13A0E (_xxxProcessEventMessage@8.c)
 *     _xxxCancelMouseMoveTracking@16 @ 0x15E12 (_xxxCancelMouseMoveTracking@16.c)
 *     _xxxFreeWindow@8 @ 0x70780 (_xxxFreeWindow@8.c)
 *     __SetDoubleClickTime@4 @ 0xE49D2 (__SetDoubleClickTime@4.c)
 * Callees:
 *     <none>
 */

int __thiscall safe_cast_fnid_to_PTOOLTIPWND(_DWORD *this)
{
  int v1; // edx

  if ( !this )
    return 0;
  v1 = this[5];
  if ( (*(_WORD *)(v1 + 30) & 0x3FFF) != 0x2B6 )
    return 0;
  if ( *(_DWORD *)(v1 + 160) )
    return this[41];
  return *(_DWORD *)(v1 + 192);
}
