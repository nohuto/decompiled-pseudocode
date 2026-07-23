/*
 * XREFs of PipDmgEnforceEnumerationPolicy @ 0x1408B1544
 * Callers:
 *     PipCallDriverAddDevice @ 0x140741B48 (PipCallDriverAddDevice.c)
 * Callees:
 *     PipDmaGuardBlockAddDevice @ 0x1408B141C (PipDmaGuardBlockAddDevice.c)
 *     PiCslIsConsoleLocked @ 0x1408B2390 (PiCslIsConsoleLocked.c)
 *     PiIommuIsDeviceSafeWhileConsoleLocked @ 0x1408B45A0 (PiIommuIsDeviceSafeWhileConsoleLocked.c)
 */

__int64 __fastcall PipDmgEnforceEnumerationPolicy(ULONG_PTR BugCheckParameter2)
{
  unsigned int v1; // ebx
  __int64 v2; // rsi
  bool v4; // al

  v1 = 0;
  v2 = *(_QWORD *)(BugCheckParameter2 + 720);
  if ( PipDmaGuardPolicy != 1 )
  {
    if ( PipDmaGuardPolicy == 2 )
    {
      if ( !(unsigned __int8)PiCslIsConsoleLocked() || (unsigned __int8)PiIommuIsDeviceSafeWhileConsoleLocked(v2) )
        return v1;
      v4 = 1;
    }
    else
    {
      if ( PipDmaGuardPolicy != 3 )
        __fastfail(5u);
      v4 = (unsigned __int8)PiIommuIsDeviceSafeWhileConsoleLocked(*(_QWORD *)(BugCheckParameter2 + 720)) == 0;
    }
    if ( v4 )
      return (unsigned int)PipDmaGuardBlockAddDevice(BugCheckParameter2);
  }
  return v1;
}
