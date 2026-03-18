/*
 * XREFs of WritePointerDeviceSettings @ 0x1C0132910
 * Callers:
 *     xxxSystemParametersInfo @ 0x1C00116E0 (xxxSystemParametersInfo.c)
 * Callees:
 *     WriteSettingValues @ 0x1C0132A40 (WriteSettingValues.c)
 */

__int64 __fastcall WritePointerDeviceSettings(int a1, _DWORD *a2, int a3)
{
  unsigned int v3; // r9d

  v3 = 0;
  if ( a1 == 147 )
  {
    v3 = 1;
    dword_1C024B84C = *a2 == 0;
    dword_1C024B85C = a2[1];
    dword_1C024B86C = a2[2];
    dword_1C024B87C = a2[3];
    dword_1C024B88C = a2[5];
    dword_1C024B89C = a2[6];
    dword_1C024B8AC = a2[7];
    dword_1C024B8BC = a2[8];
    dword_1C024B8CC = a2[9];
    dword_1C024B8DC = a2[10];
    dword_1C024B8EC = a2[11];
    dword_1C024B8FC = a2[12];
    dword_1C024B90C = a2[13];
    RawInputManagerObject::bTouchInputAllowed = a2[7];
    if ( !a3 || (v3 = WriteSettingValues(2LL, &gaTouchGestureSettings, 13LL)) != 0 )
    {
      if ( !gTouchMonitor )
        gTouchMonitor = 1;
      dword_1C024B83C = a2[4];
      if ( a3 )
        v3 = WriteSettingValues(3LL, &gMultiTouchGetSettings, 1LL);
      if ( v3 && !gMultiTouchMonitor )
        gMultiTouchMonitor = 1;
    }
  }
  return v3;
}
