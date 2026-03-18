/*
 * XREFs of rimIsHidInputDevice @ 0x1C005675C
 * Callers:
 *     RIMStartDeviceSpecificRead @ 0x1C0059A04 (RIMStartDeviceSpecificRead.c)
 *     RIMAllocateHidDesc @ 0x1C009E724 (RIMAllocateHidDesc.c)
 *     RIMVirtAllocateHidDesc @ 0x1C016B248 (RIMVirtAllocateHidDesc.c)
 * Callees:
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C02015EC (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

_BOOL8 __fastcall rimIsHidInputDevice(__int64 a1, __int64 a2)
{
  if ( (unsigned __int8)(*(_BYTE *)(a1 + 48) - 2) > 1u )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(a1);
  return *(_WORD *)(a2 + 44) != 0;
}
