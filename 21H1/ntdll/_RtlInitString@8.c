/*
 * XREFs of _RtlInitString@8 @ 0x4B2F4FA0
 * Callers:
 *     _LdrpGetShimEngineInterface@0 @ 0x4B2A6828 (_LdrpGetShimEngineInterface@0.c)
 *     _LdrpLogDelayLoadTrigger@16 @ 0x4B2C02B9 (_LdrpLogDelayLoadTrigger@16.c)
 *     _LdrpGetDelayloadExportDll@20 @ 0x4B2CF859 (_LdrpGetDelayloadExportDll@20.c)
 *     _RtlInitUTF8String@8 @ 0x4B34E1E0 (_RtlInitUTF8String@8.c)
 * Callees:
 *     <none>
 */

void __stdcall RtlInitString(PSTRING DestinationString, PCSZ SourceString)
{
  unsigned int v2; // ecx

  *(_DWORD *)&DestinationString->Length = 0;
  DestinationString->Buffer = (char *)SourceString;
  if ( SourceString )
  {
    v2 = strlen(SourceString) + 1;
    if ( v2 > 0xFFFF )
      LOWORD(v2) = -1;
    DestinationString->MaximumLength = v2;
    DestinationString->Length = v2 - 1;
  }
}
