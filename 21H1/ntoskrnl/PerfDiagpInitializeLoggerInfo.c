/*
 * XREFs of PerfDiagpInitializeLoggerInfo @ 0x1407A15AC
 * Callers:
 *     PerfDiagpProxyWorker @ 0x1407A1250 (PerfDiagpProxyWorker.c)
 *     PerfDiagpUpdatePerfDiagLoggerEnableFlags @ 0x1407A1498 (PerfDiagpUpdatePerfDiagLoggerEnableFlags.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x140206450 (RtlInitUnicodeString.c)
 *     memset @ 0x140408F80 (memset.c)
 */

void __fastcall PerfDiagpInitializeLoggerInfo(int a1, __int16 a2)
{
  memset(&OutputBuffer, 0, 0xB0uLL);
  dword_140C1A238 = -2130771792;
  dword_140C1A21C = 0x20000;
  wcscpy(&xmmword_140C1A1CC, L"PerfDiag Logger");
  RtlInitUnicodeString(&DestinationString, &xmmword_140C1A1CC);
  OutputBuffer = 180;
  dword_140C1A2A0 = 1;
  if ( a1 )
  {
    word_140C1A2A6 = 1;
    word_140C1A2A4 = a2 + 1;
    HIWORD(dword_140C1A2A0) = 1;
    LOWORD(dword_140C1A2A0) = a2 + 2;
    OutputBuffer = 4 * (unsigned __int16)(a2 + 1) + 180;
  }
}
