/*
 * XREFs of ?_GetParamSetForDeviceAndLocation@Edgy@@YGPBUtagEDGY_PARAMS@@ABUtagEDGY_DATA@@W4tagPOINTER_DEVICE_TYPE@@HW4tagEDGY_LOCATION@@@Z @ 0x16E8BE
 * Callers:
 *     ?_HitTestEdgyRegion@Edgy@@YG?AUtagHIT_TEST_RESULT@1@ABUtagEDGY_DATA@@PAXUtagPOINT@@W4tagPOINTER_DEVICE_TYPE@@H@Z @ 0x16E9D7 (-_HitTestEdgyRegion@Edgy@@YG-AUtagHIT_TEST_RESULT@1@ABUtagEDGY_DATA@@PAXUtagPOINT@@W4tagPOINTER_.c)
 * Callees:
 *     <none>
 */

int __fastcall Edgy::_GetParamSetForDeviceAndLocation(int a1, int a2, int a3, int a4)
{
  int v4; // esi
  int v5; // eax

  v4 = 1;
  if ( a2 == 3 )
  {
    v5 = a3 != 0 ? 2 : 0;
  }
  else
  {
    if ( a2 != 1 )
      return 0;
    v5 = 1;
  }
  if ( a4 != 1 && a4 != 3 )
    v4 = 0;
  return a1 + (v4 != 0 ? 20 : 44) + 52 * v5;
}
