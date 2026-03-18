/*
 * XREFs of WritePointerDeviceSettings @ 0x1C012C920
 * Callers:
 *     xxxSystemParametersInfo @ 0x1C0025210 (xxxSystemParametersInfo.c)
 * Callees:
 *     WriteSettingValues @ 0x1C012CA50 (WriteSettingValues.c)
 */

__int64 __fastcall WritePointerDeviceSettings(int a1, _DWORD *a2, int a3)
{
  unsigned int v3; // r9d

  v3 = 0;
  if ( a1 == 147 )
  {
    v3 = 1;
    dword_1C024585C = *a2 == 0;
    dword_1C024586C = a2[1];
    dword_1C024587C = a2[2];
    dword_1C024588C = a2[3];
    dword_1C024589C = a2[5];
    dword_1C02458AC = a2[6];
    dword_1C02458BC = a2[7];
    dword_1C02458CC = a2[8];
    dword_1C02458DC = a2[9];
    dword_1C02458EC = a2[10];
    dword_1C02458FC = a2[11];
    dword_1C024590C = a2[12];
    dword_1C024591C = a2[13];
    RawInputManagerObject::bTouchInputAllowed = a2[7];
    if ( !a3 || (v3 = WriteSettingValues(2LL, &gaTouchGestureSettings, 13LL)) != 0 )
    {
      if ( !gTouchMonitor )
        gTouchMonitor = 1;
      dword_1C024584C = a2[4];
      if ( a3 )
        v3 = WriteSettingValues(3LL, &gMultiTouchGetSettings, 1LL);
      if ( v3 && !gMultiTouchMonitor )
        gMultiTouchMonitor = 1;
    }
  }
  return v3;
}
