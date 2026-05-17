/*
 * XREFs of _EtwCheckCoverage@4 @ 0x4B380290
 * Callers:
 *     <none>
 * Callees:
 *     _TelemetryCoverageTableLocateInternal@8 @ 0x4B380A01 (_TelemetryCoverageTableLocateInternal@8.c)
 */

char __stdcall EtwCheckCoverage(int a1)
{
  _BYTE *TelemetryCoverageHeader; // ecx
  int v2; // edi
  __int64 Internal; // rax

  TelemetryCoverageHeader = NtCurrentPeb()->TelemetryCoverageHeader;
  if ( !TelemetryCoverageHeader )
    return 0;
  if ( (TelemetryCoverageHeader[2] & 1) != 0 )
    return 0;
  v2 = *((_DWORD *)TelemetryCoverageHeader + 6);
  Internal = TelemetryCoverageTableLocateInternal();
  if ( *(_DWORD *)Internal != HIDWORD(Internal) )
    return 0;
  *(_DWORD *)(a1 + 8) = v2;
  return 1;
}
