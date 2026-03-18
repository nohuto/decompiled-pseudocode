/*
 * XREFs of rimIsHidInputDevice @ 0x1C005BC0C
 * Callers:
 *     RIMStartDeviceSpecificRead @ 0x1C0015ACC (RIMStartDeviceSpecificRead.c)
 *     RIMAllocateHidDesc @ 0x1C00AF298 (RIMAllocateHidDesc.c)
 *     RIMVirtAllocateHidDesc @ 0x1C0164EF8 (RIMVirtAllocateHidDesc.c)
 * Callees:
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C01FBBDC (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

_BOOL8 __fastcall rimIsHidInputDevice(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  if ( (unsigned __int8)(*(_BYTE *)(a1 + 48) - 2) > 1u )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(a1, a2, a3, a4);
  return *(_WORD *)(a2 + 44) != 0;
}
