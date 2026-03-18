/*
 * XREFs of IopLiveDumpGetMillisecondCounter @ 0x14055A628
 * Callers:
 *     IoCaptureLiveDump @ 0x14093A0B8 (IoCaptureLiveDump.c)
 *     IoWriteDeferredLiveDumpData @ 0x14093A954 (IoWriteDeferredLiveDumpData.c)
 *     IopLiveDumpAllocAndInitResources @ 0x14093AAEC (IopLiveDumpAllocAndInitResources.c)
 *     IopLiveDumpAllocateDumpBuffers @ 0x14093B1CC (IopLiveDumpAllocateDumpBuffers.c)
 *     IopLiveDumpAllocateExtraBuffers @ 0x14093B5F8 (IopLiveDumpAllocateExtraBuffers.c)
 *     IopLiveDumpCaptureMemoryPages @ 0x140A65D84 (IopLiveDumpCaptureMemoryPages.c)
 *     IopLiveDumpCorralProcessors @ 0x140A660C0 (IopLiveDumpCorralProcessors.c)
 *     IopLiveDumpEndMirroringCallback @ 0x140A66300 (IopLiveDumpEndMirroringCallback.c)
 *     IopLiveDumpEstimateMemoryPages @ 0x140A666B0 (IopLiveDumpEstimateMemoryPages.c)
 *     IopLiveDumpGenerateIptSecondaryData @ 0x140A66B0C (IopLiveDumpGenerateIptSecondaryData.c)
 *     IopLiveDumpInitiateCorralStateChange @ 0x140A66DB4 (IopLiveDumpInitiateCorralStateChange.c)
 *     IopLiveDumpMarkImportantDumpData @ 0x140A66EB4 (IopLiveDumpMarkImportantDumpData.c)
 *     IopLiveDumpMarkRequiredDumpData @ 0x140A67248 (IopLiveDumpMarkRequiredDumpData.c)
 *     IopLiveDumpPopulateBitmapForDump @ 0x140A67608 (IopLiveDumpPopulateBitmapForDump.c)
 *     IopLiveDumpRemoveSystemCacheFromDump @ 0x140A678E0 (IopLiveDumpRemoveSystemCacheFromDump.c)
 * Callees:
 *     KeQueryPerformanceCounter @ 0x1403027F0 (KeQueryPerformanceCounter.c)
 */

__int64 __fastcall IopLiveDumpGetMillisecondCounter(char a1)
{
  __int64 v2; // rcx
  __int64 result; // rax

  v2 = 1000LL * *(_QWORD *)&KeQueryPerformanceCounter(0LL) / PerformanceFrequency.QuadPart;
  result = 0LL;
  if ( !a1 )
    result = v2 + qword_140D018B8 - qword_140D018B0;
  qword_140D018B8 = result;
  qword_140D018B0 = v2;
  return result;
}
