/*
 * XREFs of PnprGetMillisecondCounter @ 0x1409AD79C
 * Callers:
 *     PnprMirrorPhysicalMemory @ 0x14050F5C0 (PnprMirrorPhysicalMemory.c)
 *     PnprSwapFinalize @ 0x14050FC90 (PnprSwapFinalize.c)
 *     PnpReplacePartitionUnit @ 0x1408AC270 (PnpReplacePartitionUnit.c)
 *     PnprQuiesceDevices @ 0x1409AE210 (PnprQuiesceDevices.c)
 *     PnprQuiesceProcessors @ 0x1409AE774 (PnprQuiesceProcessors.c)
 *     PnprWakeDevices @ 0x1409AED9C (PnprWakeDevices.c)
 *     PnprWakeProcessors @ 0x1409AEE1C (PnprWakeProcessors.c)
 * Callees:
 *     KeQueryPerformanceCounter @ 0x14022C340 (KeQueryPerformanceCounter.c)
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
    v2 = v3 + dword_140CF5764 - dword_140CF5760;
  dword_140CF5760 = v3;
  result = v2;
  dword_140CF5764 = v2;
  return result;
}
