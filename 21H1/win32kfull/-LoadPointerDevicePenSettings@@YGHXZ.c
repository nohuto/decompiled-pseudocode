/*
 * XREFs of ?LoadPointerDevicePenSettings@@YGHXZ @ 0xAEF40
 * Callers:
 *     _ReadPointerDeviceSettingsFull@8 @ 0xF3780 (_ReadPointerDeviceSettingsFull@8.c)
 *     _GetPenDoubleClickTime@0 @ 0x16FB93 (_GetPenDoubleClickTime@0.c)
 *     _GetPenHoldTime@0 @ 0x16FBC4 (_GetPenHoldTime@0.c)
 * Callees:
 *     <none>
 */

int __stdcall LoadPointerDevicePenSettings()
{
  int result; // eax

  if ( !GetDWORDSettingValues(4, off_266020, 8) )
    return 0;
  result = 1;
  gPenMonitor = 1;
  return result;
}
