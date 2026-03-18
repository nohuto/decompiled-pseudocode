/*
 * XREFs of RtlUpcaseUnicodeString @ 0x1406B7FF0
 * Callers:
 *     RtlDeriveCapabilitySidsFromName @ 0x14034A710 (RtlDeriveCapabilitySidsFromName.c)
 *     PiCMOpenClassKey @ 0x1405D01E4 (PiCMOpenClassKey.c)
 *     PfCalculateProcessHash @ 0x1406B7C60 (PfCalculateProcessHash.c)
 *     PfSnLogStreamCreate @ 0x1406B7E04 (PfSnLogStreamCreate.c)
 *     PfSnLogVolumeCreate @ 0x14070137C (PfSnLogVolumeCreate.c)
 *     SdbMakeIndexKeyFromStringEx @ 0x140744B20 (SdbMakeIndexKeyFromStringEx.c)
 *     AslStringUpcaseToMultiByteN @ 0x140744DC4 (AslStringUpcaseToMultiByteN.c)
 *     PipMakeGloballyUniqueId @ 0x1407597C8 (PipMakeGloballyUniqueId.c)
 *     IoReportDetectedDevice @ 0x140796830 (IoReportDetectedDevice.c)
 *     PiDevCfgResolveVariableGenerateGuid @ 0x1408A67B0 (PiDevCfgResolveVariableGenerateGuid.c)
 *     PiCMGenerateDeviceInstance @ 0x1408AD490 (PiCMGenerateDeviceInstance.c)
 *     ViCreateProcessCallbackInternal @ 0x1409D9A94 (ViCreateProcessCallbackInternal.c)
 *     ViFaultsAddAppNoDuplicates @ 0x1409D9CC4 (ViFaultsAddAppNoDuplicates.c)
 *     PipInitComputerIds @ 0x140A4BC28 (PipInitComputerIds.c)
 * Callees:
 *     ExpAllocateStringRoutine @ 0x1406F19D0 (ExpAllocateStringRoutine.c)
 *     ExFreePoolWithTag @ 0x1409B1140 (ExFreePoolWithTag.c)
 */

NTSTATUS __stdcall RtlUpcaseUnicodeString(
        PUNICODE_STRING DestinationString,
        PCUNICODE_STRING SourceString,
        BOOLEAN AllocateDestinationString)
{
  SIZE_T Length; // rax
  __int64 i; // r9
  unsigned __int64 v7; // r10
  wchar_t *StringRoutine; // rax

  Length = SourceString->Length;
  if ( AllocateDestinationString )
  {
    DestinationString->MaximumLength = Length;
    StringRoutine = (wchar_t *)ExpAllocateStringRoutine(Length);
    DestinationString->Buffer = StringRoutine;
    if ( !StringRoutine )
      return -1073741801;
    LOWORD(Length) = SourceString->Length;
  }
  else if ( (unsigned __int16)Length > DestinationString->MaximumLength )
  {
    return -2147483643;
  }
  for ( i = 0LL; (unsigned int)i < (unsigned __int16)Length >> 1; i = (unsigned int)(i + 1) )
  {
    v7 = SourceString->Buffer[i];
    if ( (unsigned int)v7 >= 0x61 )
    {
      if ( (unsigned int)v7 > 0x7A )
      {
        if ( Nls844UnicodeUpcaseTable )
        {
          if ( (unsigned __int16)v7 >= 0xC0u )
            LOWORD(v7) = *(_WORD *)(Nls844UnicodeUpcaseTable
                                  + 2
                                  * ((v7 & 0xF)
                                   + *(unsigned __int16 *)(Nls844UnicodeUpcaseTable
                                                         + 2LL
                                                         * (((unsigned __int8)v7 >> 4)
                                                          + (unsigned int)*(unsigned __int16 *)(Nls844UnicodeUpcaseTable
                                                                                              + 2 * (v7 >> 8))))))
                       + v7;
        }
      }
      else
      {
        LOWORD(v7) = v7 - 32;
      }
    }
    DestinationString->Buffer[i] = v7;
  }
  DestinationString->Length = SourceString->Length;
  return 0;
}
