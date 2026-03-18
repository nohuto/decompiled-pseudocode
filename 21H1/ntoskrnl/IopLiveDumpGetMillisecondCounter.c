/*
 * XREFs of IopLiveDumpGetMillisecondCounter @ 0x140502E3C
 * Callers:
 *     IoCaptureLiveDump @ 0x140891CF8 (IoCaptureLiveDump.c)
 *     IopLiveDumpAllocateDumpBuffers @ 0x140892CB4 (IopLiveDumpAllocateDumpBuffers.c)
 *     IopLiveDumpAllocateExtraBuffers @ 0x1408930D4 (IopLiveDumpAllocateExtraBuffers.c)
 *     IopLiveDumpCorralProcessors @ 0x1409A7FD0 (IopLiveDumpCorralProcessors.c)
 *     IopLiveDumpEndMirroringCallback @ 0x1409A8210 (IopLiveDumpEndMirroringCallback.c)
 *     IopLiveDumpEstimateMemoryPages @ 0x1409A85BC (IopLiveDumpEstimateMemoryPages.c)
 *     IopLiveDumpGenerateIptSecondaryData @ 0x1409A89D8 (IopLiveDumpGenerateIptSecondaryData.c)
 *     IopLiveDumpInitiateCorralStateChange @ 0x1409A8C88 (IopLiveDumpInitiateCorralStateChange.c)
 *     IopLiveDumpMarkImportantDumpData @ 0x1409A8D88 (IopLiveDumpMarkImportantDumpData.c)
 *     IopLiveDumpMarkRequiredDumpData @ 0x1409A911C (IopLiveDumpMarkRequiredDumpData.c)
 *     IopLiveDumpPopulateBitmapForDump @ 0x1409A94F8 (IopLiveDumpPopulateBitmapForDump.c)
 *     IopLiveDumpRemoveSystemCacheFromDump @ 0x1409A97D4 (IopLiveDumpRemoveSystemCacheFromDump.c)
 * Callees:
 *     KeQueryPerformanceCounter @ 0x140240CA0 (KeQueryPerformanceCounter.c)
 */

__int64 __fastcall IopLiveDumpGetMillisecondCounter(char a1)
{
  __int64 v2; // rcx
  __int64 result; // rax

  v2 = 1000LL * *(_QWORD *)&KeQueryPerformanceCounter(0LL) / PerformanceFrequency.QuadPart;
  result = 0LL;
  if ( !a1 )
    result = v2 + qword_140CF52A0 - qword_140CF52A8;
  qword_140CF52A0 = result;
  qword_140CF52A8 = v2;
  return result;
}
