/*
 * XREFs of RtlUpcaseUnicodeString @ 0x140682390
 * Callers:
 *     RtlDeriveCapabilitySidsFromName @ 0x140360F50 (RtlDeriveCapabilitySidsFromName.c)
 *     PfCalculateProcessHash @ 0x14064D410 (PfCalculateProcessHash.c)
 *     PfSnLogStreamCreate @ 0x14068221C (PfSnLogStreamCreate.c)
 *     PfSnLogVolumeCreate @ 0x1406D4A64 (PfSnLogVolumeCreate.c)
 *     PiCMOpenClassKey @ 0x1406DEBF0 (PiCMOpenClassKey.c)
 *     SdbMakeIndexKeyFromStringEx @ 0x140753700 (SdbMakeIndexKeyFromStringEx.c)
 *     AslStringUpcaseToMultiByteN @ 0x1407539A4 (AslStringUpcaseToMultiByteN.c)
 *     PipMakeGloballyUniqueId @ 0x140767F84 (PipMakeGloballyUniqueId.c)
 *     IoReportDetectedDevice @ 0x1407A5B60 (IoReportDetectedDevice.c)
 *     PiDevCfgResolveVariableGenerateGuid @ 0x1408AC2E0 (PiDevCfgResolveVariableGenerateGuid.c)
 *     PiCMGenerateDeviceInstance @ 0x1408B2FC0 (PiCMGenerateDeviceInstance.c)
 *     ViCreateProcessCallbackInternal @ 0x1409DFAB4 (ViCreateProcessCallbackInternal.c)
 *     ViFaultsAddAppNoDuplicates @ 0x1409DFCE4 (ViFaultsAddAppNoDuplicates.c)
 *     PipInitComputerIds @ 0x140A5ABC4 (PipInitComputerIds.c)
 * Callees:
 *     ExpAllocateStringRoutine @ 0x1406C4F70 (ExpAllocateStringRoutine.c)
 *     ExFreePoolWithTag @ 0x1409B70B0 (ExFreePoolWithTag.c)
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
