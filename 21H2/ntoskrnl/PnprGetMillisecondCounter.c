/*
 * XREFs of PnprGetMillisecondCounter @ 0x1409AE6CC
 * Callers:
 *     PnprMirrorPhysicalMemory @ 0x14050F800 (PnprMirrorPhysicalMemory.c)
 *     PnprSwapFinalize @ 0x14050FED0 (PnprSwapFinalize.c)
 *     PnpReplacePartitionUnit @ 0x1408AC3D0 (PnpReplacePartitionUnit.c)
 *     PnprQuiesceDevices @ 0x1409AF140 (PnprQuiesceDevices.c)
 *     PnprQuiesceProcessors @ 0x1409AF6A4 (PnprQuiesceProcessors.c)
 *     PnprWakeDevices @ 0x1409AFCCC (PnprWakeDevices.c)
 *     PnprWakeProcessors @ 0x1409AFD4C (PnprWakeProcessors.c)
 * Callees:
 *     KeQueryPerformanceCounter @ 0x1402D0BC0 (KeQueryPerformanceCounter.c)
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
    v2 = v3 + dword_140CF57A4 - dword_140CF57A0;
  dword_140CF57A0 = v3;
  result = v2;
  dword_140CF57A4 = v2;
  return result;
}
