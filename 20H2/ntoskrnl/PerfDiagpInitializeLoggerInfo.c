/*
 * XREFs of PerfDiagpInitializeLoggerInfo @ 0x1407ACE1C
 * Callers:
 *     PerfDiagpProxyWorker @ 0x1407ACAC0 (PerfDiagpProxyWorker.c)
 *     PerfDiagpUpdatePerfDiagLoggerEnableFlags @ 0x1407ACD08 (PerfDiagpUpdatePerfDiagLoggerEnableFlags.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x140210D50 (RtlInitUnicodeString.c)
 *     memset @ 0x140411300 (memset.c)
 */

void __fastcall PerfDiagpInitializeLoggerInfo(int a1, __int16 a2)
{
  memset(&OutputBuffer, 0, 0xB0uLL);
  dword_140C1A118 = -2130771792;
  dword_140C1A0FC = 0x20000;
  wcscpy(&xmmword_140C1A0AC, L"PerfDiag Logger");
  RtlInitUnicodeString(&stru_140C1A160, &xmmword_140C1A0AC);
  OutputBuffer = 180;
  dword_140C1A180 = 1;
  if ( a1 )
  {
    word_140C1A186 = 1;
    word_140C1A184 = a2 + 1;
    HIWORD(dword_140C1A180) = 1;
    LOWORD(dword_140C1A180) = a2 + 2;
    OutputBuffer = 4 * (unsigned __int16)(a2 + 1) + 180;
  }
}
