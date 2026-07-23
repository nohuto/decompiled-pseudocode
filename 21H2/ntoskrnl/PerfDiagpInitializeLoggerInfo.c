/*
 * XREFs of PerfDiagpInitializeLoggerInfo @ 0x14079C77C
 * Callers:
 *     PerfDiagpProxyWorker @ 0x14079C420 (PerfDiagpProxyWorker.c)
 *     PerfDiagpUpdatePerfDiagLoggerEnableFlags @ 0x14079C668 (PerfDiagpUpdatePerfDiagLoggerEnableFlags.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x14026A4C0 (RtlInitUnicodeString.c)
 *     memset @ 0x140414300 (memset.c)
 */

void __fastcall PerfDiagpInitializeLoggerInfo(int a1, __int16 a2)
{
  memset(&OutputBuffer, 0, 0xB0uLL);
  dword_140C1A298 = -2130771792;
  dword_140C1A27C = 0x20000;
  wcscpy(&xmmword_140C1A22C, L"PerfDiag Logger");
  RtlInitUnicodeString(&DestinationString, &xmmword_140C1A22C);
  OutputBuffer = 180;
  dword_140C1A300 = 1;
  if ( a1 )
  {
    word_140C1A306 = 1;
    word_140C1A304 = a2 + 1;
    HIWORD(dword_140C1A300) = 1;
    LOWORD(dword_140C1A300) = a2 + 2;
    OutputBuffer = 4 * (unsigned __int16)(a2 + 1) + 180;
  }
}
