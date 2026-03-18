/*
 * XREFs of WritePointerDeviceSettings @ 0x1C012A5D0
 * Callers:
 *     xxxSystemParametersInfo @ 0x1C008BBE0 (xxxSystemParametersInfo.c)
 * Callees:
 *     WriteSettingValues @ 0x1C012A700 (WriteSettingValues.c)
 */

__int64 __fastcall WritePointerDeviceSettings(int a1, _DWORD *a2, int a3)
{
  unsigned int v3; // r9d

  v3 = 0;
  if ( a1 == 147 )
  {
    v3 = 1;
    dword_1C024384C = *a2 == 0;
    dword_1C024385C = a2[1];
    dword_1C024386C = a2[2];
    dword_1C024387C = a2[3];
    dword_1C024388C = a2[5];
    dword_1C024389C = a2[6];
    dword_1C02438AC = a2[7];
    dword_1C02438BC = a2[8];
    dword_1C02438CC = a2[9];
    dword_1C02438DC = a2[10];
    dword_1C02438EC = a2[11];
    dword_1C02438FC = a2[12];
    dword_1C024390C = a2[13];
    RawInputManagerObject::bTouchInputAllowed = a2[7];
    if ( !a3 || (v3 = WriteSettingValues(2LL, &gaTouchGestureSettings, 13LL)) != 0 )
    {
      if ( !gTouchMonitor )
        gTouchMonitor = 1;
      dword_1C024383C = a2[4];
      if ( a3 )
        v3 = WriteSettingValues(3LL, &gMultiTouchGetSettings, 1LL);
      if ( v3 && !gMultiTouchMonitor )
        gMultiTouchMonitor = 1;
    }
  }
  return v3;
}
