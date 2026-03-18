/*
 * XREFs of RIMChildInputTypeIsVirtualized @ 0x1C009E37C
 * Callers:
 *     RIMDiscoverDevicesOfInputType @ 0x1C009EE88 (RIMDiscoverDevicesOfInputType.c)
 *     RIMDirectStartStopDeviceRead @ 0x1C00A13D0 (RIMDirectStartStopDeviceRead.c)
 * Callees:
 *     IsPTPIVEnabled @ 0x1C005F440 (IsPTPIVEnabled.c)
 *     isChildPartition @ 0x1C0064F84 (isChildPartition.c)
 *     IsMouseIVEnabled @ 0x1C006561C (IsMouseIVEnabled.c)
 *     IsKeyboardIVEnabled @ 0x1C01BCE88 (IsKeyboardIVEnabled.c)
 *     IsPenIVEnabled @ 0x1C01BCEF0 (IsPenIVEnabled.c)
 *     IsTouchIVEnabled @ 0x1C01BCF70 (IsTouchIVEnabled.c)
 */

char __fastcall RIMChildInputTypeIsVirtualized(__int64 a1, __int64 a2)
{
  int v2; // ebx
  int *v4; // rcx

  v2 = a1;
  if ( !isChildPartition(a1, a2) )
    return 0;
  if ( (dword_1C025A5E8 & 1) == 0 )
  {
    dword_1C025A5E8 |= 1u;
    dword_1C025A490 = (unsigned __int8)IsMouseIVEnabled();
    dword_1C025A494 = 1;
    dword_1C025A498 = (unsigned __int8)IsKeyboardIVEnabled();
    dword_1C025A49C = 2;
    dword_1C025A4A0 = (unsigned __int8)IsTouchIVEnabled();
    dword_1C025A4A4 = 16;
    dword_1C025A4A8 = (unsigned __int8)IsPenIVEnabled();
    dword_1C025A4AC = 4;
    dword_1C025A4B0 = (unsigned __int8)IsPTPIVEnabled();
    dword_1C025A4B4 = 8;
  }
  v4 = &dword_1C025A490;
  while ( (v2 & v4[1]) == 0 || !*v4 )
  {
    v4 += 2;
    if ( v4 == (int *)&Feature_PenTapped__private_reporting )
      return 0;
  }
  return 1;
}
