/*
 * XREFs of PnprGetMillisecondCounter @ 0x1409A9ACC
 * Callers:
 *     PnprMirrorPhysicalMemory @ 0x140509B10 (PnprMirrorPhysicalMemory.c)
 *     PnprSwapFinalize @ 0x14050A1E0 (PnprSwapFinalize.c)
 *     PnpReplacePartitionUnit @ 0x1408A7E50 (PnpReplacePartitionUnit.c)
 *     PnprQuiesceDevices @ 0x1409AA540 (PnprQuiesceDevices.c)
 *     PnprQuiesceProcessors @ 0x1409AAAA4 (PnprQuiesceProcessors.c)
 *     PnprWakeDevices @ 0x1409AB0CC (PnprWakeDevices.c)
 *     PnprWakeProcessors @ 0x1409AB14C (PnprWakeProcessors.c)
 * Callees:
 *     KeQueryPerformanceCounter @ 0x140240CA0 (KeQueryPerformanceCounter.c)
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
    v2 = v3 + dword_140CF5314 - dword_140CF5310;
  dword_140CF5310 = v3;
  result = v2;
  dword_140CF5314 = v2;
  return result;
}
