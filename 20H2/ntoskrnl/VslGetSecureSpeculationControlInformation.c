/*
 * XREFs of VslGetSecureSpeculationControlInformation @ 0x1403CF188
 * Callers:
 *     KeQuerySecureSpeculationInformation @ 0x140519AD8 (KeQuerySecureSpeculationInformation.c)
 *     InitBootProcessor @ 0x140A3CF64 (InitBootProcessor.c)
 * Callees:
 *     VslpEnterIumSecureMode @ 0x1402E51E8 (VslpEnterIumSecureMode.c)
 *     HvlQueryVsmConnection @ 0x1402E7528 (HvlQueryVsmConnection.c)
 *     __security_check_cookie @ 0x1403CFAF0 (__security_check_cookie.c)
 *     memset @ 0x140411300 (memset.c)
 */

__int64 VslGetSecureSpeculationControlInformation()
{
  int v0; // ecx
  int v2; // edx
  int v3; // ecx
  int v4; // edx
  int v5; // ecx
  int v6; // edx
  int v7; // ecx
  int v8; // edx
  int v9; // ecx
  int v10; // edx
  int v11; // eax
  _DWORD v12[28]; // [rsp+20h] [rbp-88h] BYREF

  memset(v12, 0, 0x68uLL);
  if ( HvlQueryVsmConnection(0LL)
    && VslpSpeculationControlsFlags == v0
    && VslpEnterIumSecureMode(2u, 256, 0, (__int64)v12) >= 0 )
  {
    v2 = v12[4] & 1 | 2;
    if ( (v12[4] & 2) == 0 )
      v2 = v12[4] & 1;
    v3 = v2 | 4;
    if ( (v12[4] & 4) == 0 )
      v3 = v2;
    v4 = v3 | 8;
    if ( (v12[4] & 8) == 0 )
      v4 = v3;
    v5 = v4 | 0x10;
    if ( (v12[4] & 0x10) == 0 )
      v5 = v4;
    v6 = v5 | 0x100;
    if ( (v12[4] & 0x100) == 0 )
      v6 = v5;
    v7 = v6 | 0x200;
    if ( (v12[4] & 0x200) == 0 )
      v7 = v6;
    v8 = v7 | 0x400;
    if ( (v12[4] & 0x400) == 0 )
      v8 = v7;
    v9 = v8 | 0x800;
    if ( (v12[4] & 0x800) == 0 )
      v9 = v8;
    v10 = v9 | 0x1000;
    if ( (v12[4] & 0x1000) == 0 )
      v10 = v9;
    v11 = v10 | 0x2000;
    if ( (v12[4] & 0x2000) == 0 )
      v11 = v10;
    VslpSpeculationControlsFlags = v11;
  }
  return (unsigned int)VslpSpeculationControlsFlags;
}
