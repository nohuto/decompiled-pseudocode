/*
 * XREFs of RIMChildInputTypeIsVirtualized @ 0x1C0028B18
 * Callers:
 *     RIMDiscoverDevicesOfInputType @ 0x1C0026058 (RIMDiscoverDevicesOfInputType.c)
 *     RIMDirectStartStopDeviceRead @ 0x1C00271E0 (RIMDirectStartStopDeviceRead.c)
 * Callees:
 *     isChildPartition @ 0x1C0036370 (isChildPartition.c)
 *     IsMouseIVEnabled @ 0x1C003694C (IsMouseIVEnabled.c)
 *     IsPTPIVEnabled @ 0x1C00AF270 (IsPTPIVEnabled.c)
 *     IsKeyboardIVEnabled @ 0x1C01B4DB8 (IsKeyboardIVEnabled.c)
 *     IsPenIVEnabled @ 0x1C01B4E20 (IsPenIVEnabled.c)
 *     IsTouchIVEnabled @ 0x1C01B4EA0 (IsTouchIVEnabled.c)
 */

char __fastcall RIMChildInputTypeIsVirtualized(int a1)
{
  int *v3; // rcx

  if ( !(unsigned __int8)isChildPartition() )
    return 0;
  if ( (dword_1C0252610 & 1) == 0 )
  {
    dword_1C0252610 |= 1u;
    dword_1C02524C0 = (unsigned __int8)IsMouseIVEnabled();
    dword_1C02524C4 = 1;
    dword_1C02524C8 = (unsigned __int8)IsKeyboardIVEnabled();
    dword_1C02524CC = 2;
    dword_1C02524D0 = (unsigned __int8)IsTouchIVEnabled();
    dword_1C02524D4 = 16;
    dword_1C02524D8 = (unsigned __int8)IsPenIVEnabled();
    dword_1C02524DC = 4;
    dword_1C02524E0 = (unsigned __int8)IsPTPIVEnabled();
    dword_1C02524E4 = 8;
  }
  v3 = &dword_1C02524C0;
  while ( (a1 & v3[1]) == 0 || !*v3 )
  {
    v3 += 2;
    if ( v3 == (int *)&Feature_PenTapped__private_reporting )
      return 0;
  }
  return 1;
}
