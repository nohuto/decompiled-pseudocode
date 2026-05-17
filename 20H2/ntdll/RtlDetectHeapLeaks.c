/*
 * XREFs of RtlDetectHeapLeaks @ 0x1800602A0
 * Callers:
 *     LdrShutdownProcess @ 0x18005DAA0 (LdrShutdownProcess.c)
 * Callees:
 *     RtlDestroyHeap @ 0x180009680 (RtlDestroyHeap.c)
 *     RtlCreateHeap @ 0x18000A8B0 (RtlCreateHeap.c)
 *     DbgPrint @ 0x1800509B0 (DbgPrint.c)
 *     RtlpInitializeLeakDetection @ 0x1800F81C8 (RtlpInitializeLeakDetection.c)
 *     RtlpReadProcessHeaps @ 0x1800F85A0 (RtlpReadProcessHeaps.c)
 *     RtlpScanProcessVirtualMemory @ 0x1800F8860 (RtlpScanProcessVirtualMemory.c)
 */

struct _PEB *RtlDetectHeapLeaks()
{
  struct _PEB *result; // rax
  struct _PEB *v1; // rbx
  struct _PEB *v2; // rax

  result = NtCurrentPeb();
  if ( (result->NtGlobalFlag & 0x100) == 0 )
  {
    result = NtCurrentPeb();
    if ( (result->NtGlobalFlag & 0x2000000) == 0
      && (*((_QWORD *)&xmmword_18016ADE0 + 1) || (RtlpShutdownProcessFlags & 3) != 0) )
    {
      RtlpLeaksCount = 0;
      result = (struct _PEB *)RtlCreateHeap(3u, 0LL, 0LL, 0LL, 0LL, 0LL);
      RtlpLeakHeap = (__int64)result;
      if ( result )
      {
        v1 = NtCurrentPeb();
        if ( v1->Ldr )
          DbgPrint("HEAP[%wZ]: ", &NtCurrentPeb()->Ldr->InLoadOrderModuleList.Flink[5].Blink);
        else
          DbgPrint("HEAP: ");
        DbgPrint("Inspecting leaks at process shutdown ...\n");
        if ( (unsigned __int8)RtlpInitializeLeakDetection() )
        {
          RtlpLeakHeapAddress = (__int64)v1->ProcessHeaps[v1->NumberOfHeaps - 1];
          RtlpReadProcessHeaps();
          RtlpScanProcessVirtualMemory();
          RtlDestroyHeap(RtlpLeakHeap);
          RtlpLeakHeap = 0LL;
          v2 = NtCurrentPeb();
          if ( RtlpLeaksCount )
          {
            if ( v2->Ldr )
              DbgPrint("HEAP[%wZ]: ", &NtCurrentPeb()->Ldr->InLoadOrderModuleList.Flink[5].Blink);
            else
              DbgPrint("HEAP: ");
            result = (struct _PEB *)DbgPrint("%ld leaks detected.\n", RtlpLeaksCount);
            if ( (RtlpShutdownProcessFlags & 2) != 0 )
              __debugbreak();
          }
          else
          {
            if ( v2->Ldr )
              DbgPrint("HEAP[%wZ]: ", &NtCurrentPeb()->Ldr->InLoadOrderModuleList.Flink[5].Blink);
            else
              DbgPrint("HEAP: ");
            return (struct _PEB *)DbgPrint("No leaks detected.\n");
          }
        }
        else
        {
          return (struct _PEB *)RtlDestroyHeap(RtlpLeakHeap);
        }
      }
    }
  }
  return result;
}
