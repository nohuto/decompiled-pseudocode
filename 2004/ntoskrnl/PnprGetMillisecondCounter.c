/*
 * XREFs of PnprGetMillisecondCounter @ 0x1409AA92C
 * Callers:
 *     PnprMirrorPhysicalMemory @ 0x14050A160 (PnprMirrorPhysicalMemory.c)
 *     PnprSwapFinalize @ 0x14050A830 (PnprSwapFinalize.c)
 *     PnpReplacePartitionUnit @ 0x1408A9170 (PnpReplacePartitionUnit.c)
 *     PnprQuiesceDevices @ 0x1409AB3A0 (PnprQuiesceDevices.c)
 *     PnprQuiesceProcessors @ 0x1409AB904 (PnprQuiesceProcessors.c)
 *     PnprWakeDevices @ 0x1409ABF2C (PnprWakeDevices.c)
 *     PnprWakeProcessors @ 0x1409ABFAC (PnprWakeProcessors.c)
 * Callees:
 *     KeQueryPerformanceCounter @ 0x1402F3FA0 (KeQueryPerformanceCounter.c)
 */

__int64 __fastcall PnprGetMillisecondCounter(char a1)
{
  unsigned int v2; // edi
  LONGLONG v3; // rax
  __int128 v4; // rtt
  __int64 result; // rax
  LARGE_INTEGER PerformanceFrequency; // [rsp+38h] [rbp+10h] BYREF

  v2 = 0;
  PerformanceFrequency.QuadPart = 0LL;
  v4 = 1000LL * *(_QWORD *)&KeQueryPerformanceCounter(&PerformanceFrequency);
  v3 = v4 / PerformanceFrequency.QuadPart;
  if ( !a1 )
    v2 = v3 + dword_140CF51E0 - dword_140CF51E4;
  dword_140CF51E4 = v3;
  result = v2;
  dword_140CF51E0 = v2;
  return result;
}
