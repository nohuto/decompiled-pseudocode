/*
 * XREFs of PnprGetMillisecondCounter @ 0x1409B089C
 * Callers:
 *     PnprMirrorPhysicalMemory @ 0x14050DA90 (PnprMirrorPhysicalMemory.c)
 *     PnprSwapFinalize @ 0x14050E160 (PnprSwapFinalize.c)
 *     PnpReplacePartitionUnit @ 0x1408AECA0 (PnpReplacePartitionUnit.c)
 *     PnprQuiesceDevices @ 0x1409B1310 (PnprQuiesceDevices.c)
 *     PnprQuiesceProcessors @ 0x1409B1874 (PnprQuiesceProcessors.c)
 *     PnprWakeDevices @ 0x1409B1E9C (PnprWakeDevices.c)
 *     PnprWakeProcessors @ 0x1409B1F1C (PnprWakeProcessors.c)
 * Callees:
 *     KeQueryPerformanceCounter @ 0x140266AF0 (KeQueryPerformanceCounter.c)
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
    v2 = v3 + dword_140CF52A4 - dword_140CF52A0;
  dword_140CF52A0 = v3;
  result = v2;
  dword_140CF52A4 = v2;
  return result;
}
