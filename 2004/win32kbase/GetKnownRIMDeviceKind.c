/*
 * XREFs of GetKnownRIMDeviceKind @ 0x1C001A378
 * Callers:
 *     ?HandleInputThreadStateChange@CBaseInput@@QEAAXW4InputThreadState@@@Z @ 0x1C001784C (-HandleInputThreadStateChange@CBaseInput@@QEAAXW4InputThreadState@@@Z.c)
 *     ?SendNewIdentityCreated@CDeviceIdentity@@AEAAXPEAURawInputManagerDeviceObject@@@Z @ 0x1C001A2E0 (-SendNewIdentityCreated@CDeviceIdentity@@AEAAXPEAURawInputManagerDeviceObject@@@Z.c)
 *     ?PerformPnpNotification@CBaseInput@@AEAAXPEBU_DevicePnpNotification@@@Z @ 0x1C00AF798 (-PerformPnpNotification@CBaseInput@@AEAAXPEBU_DevicePnpNotification@@@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall GetKnownRIMDeviceKind(__int64 a1)
{
  unsigned int v1; // edx
  __int64 v3; // rcx
  int v4; // ecx

  v1 = 0;
  if ( *(_BYTE *)(a1 + 48) )
  {
    if ( *(_BYTE *)(a1 + 48) == 1 )
    {
      return 2;
    }
    else if ( *(_BYTE *)(a1 + 48) == 2 )
    {
      v3 = *(_QWORD *)(a1 + 32);
      if ( (*(_DWORD *)(v3 + 288) & 0x80u) != 0 )
      {
        v4 = *(_DWORD *)(*(_QWORD *)(v3 + 568) + 24LL);
        if ( v4 > 0 )
        {
          if ( v4 <= 4 )
          {
            return 3;
          }
          else if ( v4 <= 6 )
          {
            return 5;
          }
          else if ( v4 == 7 )
          {
            return 4;
          }
        }
      }
    }
  }
  else
  {
    return 1;
  }
  return v1;
}
