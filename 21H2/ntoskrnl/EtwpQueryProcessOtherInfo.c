/*
 * XREFs of EtwpQueryProcessOtherInfo @ 0x14070BACC
 * Callers:
 *     EtwpBuildProcessEvent @ 0x14070B610 (EtwpBuildProcessEvent.c)
 *     EtwQueryProcessTelemetryInfo @ 0x140711F48 (EtwQueryProcessTelemetryInfo.c)
 *     EtwTraceAppStateChange @ 0x140712868 (EtwTraceAppStateChange.c)
 *     EtwpPsProvProcessEnumCallback @ 0x1409EB400 (EtwpPsProvProcessEnumCallback.c)
 * Callees:
 *     RtlImageNtHeader @ 0x140281450 (RtlImageNtHeader.c)
 *     PsGetProcessSectionBaseAddress @ 0x1402A07F0 (PsGetProcessSectionBaseAddress.c)
 */

__int64 __fastcall EtwpQueryProcessOtherInfo(__int64 a1, __int64 a2)
{
  __int64 result; // rax

  *(_QWORD *)a2 = 0LL;
  result = PsGetProcessSectionBaseAddress(a1);
  if ( result )
  {
    result = RtlImageNtHeader(result);
    if ( result )
    {
      *(_DWORD *)a2 = *(_DWORD *)(result + 88);
      result = *(unsigned int *)(result + 8);
      *(_DWORD *)(a2 + 4) = result;
    }
  }
  return result;
}
