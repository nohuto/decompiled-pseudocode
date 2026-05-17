/*
 * XREFs of RtlInitAnsiString @ 0x1800152F0
 * Callers:
 *     LdrpLogDelayLoadTrigger @ 0x1800165B0 (LdrpLogDelayLoadTrigger.c)
 *     LdrpGetDelayloadExportDll @ 0x18001664C (LdrpGetDelayloadExportDll.c)
 *     LdrpSnapKernelBaseExtensions @ 0x180016EE4 (LdrpSnapKernelBaseExtensions.c)
 *     LdrpReportError @ 0x18003F2F4 (LdrpReportError.c)
 *     LdrpGetShimEngineInterface @ 0x18006BCD8 (LdrpGetShimEngineInterface.c)
 *     RtlInitUTF8String @ 0x180085A60 (RtlInitUTF8String.c)
 *     AVrfpDetectVerifiedExports @ 0x1800DA9C8 (AVrfpDetectVerifiedExports.c)
 *     AVrfpVerifierStopInitialize @ 0x1800DB860 (AVrfpVerifierStopInitialize.c)
 * Callees:
 *     <none>
 */

void __stdcall RtlInitAnsiString(PSTRING DestinationString, PCSZ SourceString)
{
  unsigned __int64 v2; // rax

  *(_QWORD *)&DestinationString->Length = 0LL;
  DestinationString->Buffer = (char *)SourceString;
  if ( SourceString )
  {
    v2 = -1LL;
    do
      ++v2;
    while ( SourceString[v2] );
    if ( v2 >= 0xFFFF )
      LOWORD(v2) = -2;
    DestinationString->Length = v2;
    DestinationString->MaximumLength = v2 + 1;
  }
}
