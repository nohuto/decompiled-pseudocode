/*
 * XREFs of RIMChildInputTypeIsVirtualized @ 0x1C00AF5D8
 * Callers:
 *     RIMDirectStartStopDeviceRead @ 0x1C00AA480 (RIMDirectStartStopDeviceRead.c)
 *     RIMDiscoverDevicesOfInputType @ 0x1C00AEFCC (RIMDiscoverDevicesOfInputType.c)
 * Callees:
 *     IsPTPIVEnabled @ 0x1C0068F50 (IsPTPIVEnabled.c)
 *     isChildPartition @ 0x1C0070954 (isChildPartition.c)
 *     IsMouseIVEnabled @ 0x1C0070FEC (IsMouseIVEnabled.c)
 *     IsKeyboardIVEnabled @ 0x1C01B7128 (IsKeyboardIVEnabled.c)
 *     IsPenIVEnabled @ 0x1C01B7190 (IsPenIVEnabled.c)
 *     IsTouchIVEnabled @ 0x1C01B7210 (IsTouchIVEnabled.c)
 */

char __fastcall RIMChildInputTypeIsVirtualized(__int64 a1, __int64 a2)
{
  int v2; // ebx
  int *v4; // rcx

  v2 = a1;
  if ( !isChildPartition(a1, a2) )
    return 0;
  if ( (dword_1C0254620 & 1) == 0 )
  {
    dword_1C0254620 |= 1u;
    dword_1C02544D0 = (unsigned __int8)IsMouseIVEnabled();
    dword_1C02544D4 = 1;
    dword_1C02544D8 = (unsigned __int8)IsKeyboardIVEnabled();
    dword_1C02544DC = 2;
    dword_1C02544E0 = (unsigned __int8)IsTouchIVEnabled();
    dword_1C02544E4 = 16;
    dword_1C02544E8 = (unsigned __int8)IsPenIVEnabled();
    dword_1C02544EC = 4;
    dword_1C02544F0 = (unsigned __int8)IsPTPIVEnabled();
    dword_1C02544F4 = 8;
  }
  v4 = &dword_1C02544D0;
  while ( (v2 & v4[1]) == 0 || !*v4 )
  {
    v4 += 2;
    if ( v4 == (int *)&Feature_PenTapped__private_reporting )
      return 0;
  }
  return 1;
}
