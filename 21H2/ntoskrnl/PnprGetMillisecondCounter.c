/*
 * XREFs of PnprGetMillisecondCounter @ 0x140A67C14
 * Callers:
 *     PnprMirrorPhysicalMemory @ 0x140562F00 (PnprMirrorPhysicalMemory.c)
 *     PnprSwapFinalize @ 0x1405635D0 (PnprSwapFinalize.c)
 *     PnpReplacePartitionUnit @ 0x140950E30 (PnpReplacePartitionUnit.c)
 *     PnprQuiesceDevices @ 0x140A68674 (PnprQuiesceDevices.c)
 *     PnprQuiesceProcessors @ 0x140A68BE8 (PnprQuiesceProcessors.c)
 *     PnprWakeDevices @ 0x140A6927C (PnprWakeDevices.c)
 *     PnprWakeProcessors @ 0x140A692FC (PnprWakeProcessors.c)
 * Callees:
 *     KeQueryPerformanceCounter @ 0x1403027F0 (KeQueryPerformanceCounter.c)
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
    v2 = v3 + dword_140D01924 - dword_140D01920;
  dword_140D01920 = v3;
  result = v2;
  dword_140D01924 = v2;
  return result;
}
