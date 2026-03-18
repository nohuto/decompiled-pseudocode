/*
 * XREFs of EtwSetInformation @ 0x1406DEBF0
 * Callers:
 *     BapdWriteEtwEvents @ 0x1403B6E4C (BapdWriteEtwEvents.c)
 *     BapdRegisterEtwProvider @ 0x1403B7244 (BapdRegisterEtwProvider.c)
 *     HvlpEtwRegister @ 0x14054B7B4 (HvlpEtwRegister.c)
 *     PsDispatchIumService @ 0x1405E1764 (PsDispatchIumService.c)
 *     TraceLoggingRegisterEx_EtwRegister_EtwSetInformation @ 0x1406D2264 (TraceLoggingRegisterEx_EtwRegister_EtwSetInformation.c)
 *     PopDiagInitialize @ 0x140B1BC34 (PopDiagInitialize.c)
 * Callees:
 *     EtwpSetProviderTraitsKm @ 0x1406DEC48 (EtwpSetProviderTraitsKm.c)
 */

NTSTATUS __stdcall EtwSetInformation(
        REGHANDLE RegHandle,
        EVENT_INFO_CLASS InformationClass,
        PVOID EventInformation,
        ULONG InformationLength)
{
  NTSTATUS v4; // r10d
  __int32 v5; // edx

  v4 = 0;
  if ( RegHandle )
  {
    v5 = InformationClass - 2;
    if ( v5 )
    {
      if ( v5 != 1 )
        return -1073741808;
      if ( EventInformation && InformationLength == 1 )
      {
        if ( *(_BYTE *)EventInformation == 1 )
        {
          _InterlockedOr16((volatile signed __int16 *)(RegHandle + 98), 0x200u);
          return v4;
        }
        if ( !*(_BYTE *)EventInformation )
        {
          _InterlockedAnd16((volatile signed __int16 *)(RegHandle + 98), 0xFDFFu);
          return v4;
        }
      }
    }
    else if ( EventInformation && InformationLength - 3 <= 0x7FFC )
    {
      return EtwpSetProviderTraitsKm(RegHandle, EventInformation, (unsigned __int16)InformationLength);
    }
    return -1073741811;
  }
  return -1073741816;
}
