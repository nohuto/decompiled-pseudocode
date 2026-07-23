/*
 * XREFs of PerfDiagpInitializeLoggerInfo @ 0x14079DAEC
 * Callers:
 *     PerfDiagpProxyWorker @ 0x14079D790 (PerfDiagpProxyWorker.c)
 *     PerfDiagpUpdatePerfDiagLoggerEnableFlags @ 0x14079D9D8 (PerfDiagpUpdatePerfDiagLoggerEnableFlags.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x140298F60 (RtlInitUnicodeString.c)
 *     memset @ 0x14040A280 (memset.c)
 */

void __fastcall PerfDiagpInitializeLoggerInfo(int a1, __int16 a2)
{
  memset(&OutputBuffer, 0, 0xB0uLL);
  dword_140C1A098 = -2130771792;
  dword_140C1A07C = 0x20000;
  wcscpy(&xmmword_140C1A02C, L"PerfDiag Logger");
  RtlInitUnicodeString(&DestinationString, &xmmword_140C1A02C);
  OutputBuffer = 180;
  dword_140C1A100 = 1;
  if ( a1 )
  {
    word_140C1A106 = 1;
    word_140C1A104 = a2 + 1;
    HIWORD(dword_140C1A100) = 1;
    LOWORD(dword_140C1A100) = a2 + 2;
    OutputBuffer = 4 * (unsigned __int16)(a2 + 1) + 180;
  }
}
