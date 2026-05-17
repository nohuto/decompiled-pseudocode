/*
 * XREFs of _RtlInitAnsiString@8 @ 0x4B2F4FE0
 * Callers:
 *     _LdrpSnapKernelBaseExtensions@0 @ 0x4B2CE517 (_LdrpSnapKernelBaseExtensions@0.c)
 *     _LdrpReportError@12 @ 0x4B2E9F63 (_LdrpReportError@12.c)
 *     _AVrfpDetectVerifiedExports@8 @ 0x4B338B79 (_AVrfpDetectVerifiedExports@8.c)
 *     _AVrfpVerifierStopInitialize@0 @ 0x4B339708 (_AVrfpVerifierStopInitialize@0.c)
 * Callees:
 *     <none>
 */

void __stdcall RtlInitAnsiString(PANSI_STRING DestinationString, PCSZ SourceString)
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
