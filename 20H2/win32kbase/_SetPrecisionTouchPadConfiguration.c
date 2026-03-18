/*
 * XREFs of _SetPrecisionTouchPadConfiguration @ 0x1C01208C0
 * Callers:
 *     xxxSystemParametersInfo @ 0x1C008BBE0 (xxxSystemParametersInfo.c)
 *     NtUserSetPrecisionTouchPadConfiguration @ 0x1C0136C20 (NtUserSetPrecisionTouchPadConfiguration.c)
 *     UnpackTouchpadSettings @ 0x1C01AA6CC (UnpackTouchpadSettings.c)
 * Callees:
 *     ?ResetAccelerationCurves@CDeviceAcceleration@@QEAAXXZ @ 0x1C000B9D8 (-ResetAccelerationCurves@CDeviceAcceleration@@QEAAXXZ.c)
 *     UpdateTPCurrentActiveState @ 0x1C0021FC0 (UpdateTPCurrentActiveState.c)
 *     BroadcastSettingsUpdateToAllContainers @ 0x1C008C1F0 (BroadcastSettingsUpdateToAllContainers.c)
 *     WriteSettingValues @ 0x1C012A700 (WriteSettingValues.c)
 */

__int64 __fastcall SetPrecisionTouchPadConfiguration(_DWORD *a1)
{
  int v2; // edx
  int v3; // ecx
  unsigned int v4; // edi
  int v5; // ecx

  if ( !a1 || *a1 )
    return 0LL;
  v2 = qword_1C0248FC0;
  dword_1C024376C = DWORD2(gTouchPadParameters);
  dword_1C02437DC = qword_1C0248FC0;
  if ( a1[2] <= 4u )
  {
    dword_1C024376C = a1[2];
    DWORD2(gTouchPadParameters) = a1[2];
  }
  v3 = a1[4];
  if ( (unsigned int)(v3 - 1) <= 0x13 )
    v2 = v3;
  dword_1C02437DC = v2;
  dword_1C024377C = -__CFSHR__(a1[3], 3);
  dword_1C024378C = -__CFSHR__(a1[3], 4);
  dword_1C024379C = -__CFSHR__(a1[3], 8);
  dword_1C02437AC = -__CFSHR__(a1[3], 9);
  dword_1C02437BC = -__CFSHR__(a1[3], 10);
  dword_1C02437CC = -__CFSHR__(a1[3], 11);
  dword_1C02437EC = -(a1[5] & 1);
  dword_1C02437FC = -__CFSHR__(a1[5], 2);
  dword_1C024380C = -__CFSHR__(a1[5], 3);
  dword_1C024382C = -__CFSHR__(a1[5], 7);
  v4 = WriteSettingValues(0LL, &off_1C0243760, 13LL);
  if ( v4 )
  {
    HIDWORD(gTouchPadParameters) ^= (BYTE12(gTouchPadParameters) ^ (unsigned __int8)a1[3]) & 8;
    HIDWORD(gTouchPadParameters) ^= (BYTE12(gTouchPadParameters) ^ (unsigned __int8)a1[3]) & 4;
    v5 = a1[4];
    if ( qword_1C0248FC0 != v5 && (unsigned int)(v5 - 1) <= 0x13 )
    {
      qword_1C0248FC0 = a1[4];
      CDeviceAcceleration::ResetAccelerationCurves(qword_1C023F0B0);
    }
    HIDWORD(gTouchPadParameters) ^= (BYTE12(gTouchPadParameters) ^ (unsigned __int8)a1[3]) & 0x80;
    HIDWORD(gTouchPadParameters) ^= (WORD6(gTouchPadParameters) ^ (unsigned __int16)a1[3]) & 0x100;
    HIDWORD(gTouchPadParameters) ^= (WORD6(gTouchPadParameters) ^ (unsigned __int16)a1[3]) & 0x200;
    HIDWORD(gTouchPadParameters) ^= (WORD6(gTouchPadParameters) ^ (unsigned __int16)a1[3]) & 0x400;
    *(&qword_1C0248FC0 + 1) ^= (*((_BYTE *)&qword_1C0248FC0 + 4) ^ (unsigned __int8)a1[5]) & 1;
    *(&qword_1C0248FC0 + 1) ^= (*((_BYTE *)&qword_1C0248FC0 + 4) ^ (unsigned __int8)a1[5]) & 2;
    *(&qword_1C0248FC0 + 1) ^= (a1[5] ^ *(&qword_1C0248FC0 + 1)) & 4;
    *(&qword_1C0248FC0 + 1) ^= (a1[5] ^ *(&qword_1C0248FC0 + 1)) & 0x40;
  }
  UpdateTPCurrentActiveState();
  if ( v4 )
    BroadcastSettingsUpdateToAllContainers();
  return v4;
}
