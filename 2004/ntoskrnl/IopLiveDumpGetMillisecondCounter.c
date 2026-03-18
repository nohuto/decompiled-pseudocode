/*
 * XREFs of IopLiveDumpGetMillisecondCounter @ 0x14050348C
 * Callers:
 *     IoCaptureLiveDump @ 0x140893018 (IoCaptureLiveDump.c)
 *     IopLiveDumpAllocateDumpBuffers @ 0x140893FD4 (IopLiveDumpAllocateDumpBuffers.c)
 *     IopLiveDumpAllocateExtraBuffers @ 0x1408943F4 (IopLiveDumpAllocateExtraBuffers.c)
 *     IopLiveDumpCorralProcessors @ 0x1409A8E30 (IopLiveDumpCorralProcessors.c)
 *     IopLiveDumpEndMirroringCallback @ 0x1409A9070 (IopLiveDumpEndMirroringCallback.c)
 *     IopLiveDumpEstimateMemoryPages @ 0x1409A941C (IopLiveDumpEstimateMemoryPages.c)
 *     IopLiveDumpGenerateIptSecondaryData @ 0x1409A9838 (IopLiveDumpGenerateIptSecondaryData.c)
 *     IopLiveDumpInitiateCorralStateChange @ 0x1409A9AE8 (IopLiveDumpInitiateCorralStateChange.c)
 *     IopLiveDumpMarkImportantDumpData @ 0x1409A9BE8 (IopLiveDumpMarkImportantDumpData.c)
 *     IopLiveDumpMarkRequiredDumpData @ 0x1409A9F7C (IopLiveDumpMarkRequiredDumpData.c)
 *     IopLiveDumpPopulateBitmapForDump @ 0x1409AA358 (IopLiveDumpPopulateBitmapForDump.c)
 *     IopLiveDumpRemoveSystemCacheFromDump @ 0x1409AA634 (IopLiveDumpRemoveSystemCacheFromDump.c)
 * Callees:
 *     KeQueryPerformanceCounter @ 0x1402F3FA0 (KeQueryPerformanceCounter.c)
 */

__int64 __fastcall IopLiveDumpGetMillisecondCounter(char a1)
{
  __int64 v2; // rcx
  __int64 result; // rax

  v2 = 1000LL * *(_QWORD *)&KeQueryPerformanceCounter(0LL) / PerformanceFrequency.QuadPart;
  result = 0LL;
  if ( !a1 )
    result = v2 + qword_140CF5170 - qword_140CF5178;
  qword_140CF5170 = result;
  qword_140CF5178 = v2;
  return result;
}
