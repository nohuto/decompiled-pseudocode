/*
 * XREFs of _RtlDetectHeapLeaks@0 @ 0x4B2DD8C0
 * Callers:
 *     _LdrShutdownProcess@0 @ 0x4B2DD6A0 (_LdrShutdownProcess@0.c)
 * Callees:
 *     _DbgPrint @ 0x4B2AB8D0 (_DbgPrint.c)
 *     _RtlDestroyHeap@4 @ 0x4B2AF870 (_RtlDestroyHeap@4.c)
 *     _RtlCreateHeap@24 @ 0x4B2C0F40 (_RtlCreateHeap@24.c)
 *     _RtlpInitializeLeakDetection@0 @ 0x4B35E7F3 (_RtlpInitializeLeakDetection@0.c)
 *     _RtlpReadProcessHeaps@0 @ 0x4B35EAE4 (_RtlpReadProcessHeaps@0.c)
 *     _RtlpScanProcessVirtualMemory@0 @ 0x4B35ECB4 (_RtlpScanProcessVirtualMemory@0.c)
 */

int *__stdcall RtlDetectHeapLeaks()
{
  int *result; // eax
  struct _PEB *v1; // esi
  struct _PEB *v2; // eax

  result = (int *)NtCurrentPeb();
  if ( (result[26] & 0x100) == 0 )
  {
    result = (int *)NtCurrentPeb();
    if ( (result[26] & 0x2000000) == 0 && (dword_4B3A4898 || (RtlpShutdownProcessFlags & 3) != 0) )
    {
      RtlpLeaksCount = 0;
      result = RtlCreateHeap(3, 0, 0, 0, 0, 0);
      RtlpLeakHeap = (int)result;
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
          RtlpLeakHeapAddress = (int)v1->ProcessHeaps[v1->NumberOfHeaps - 1];
          RtlpReadProcessHeaps();
          RtlpScanProcessVirtualMemory();
          RtlDestroyHeap(RtlpLeakHeap);
          v2 = NtCurrentPeb();
          RtlpLeakHeap = 0;
          if ( RtlpLeaksCount )
          {
            if ( v2->Ldr )
              DbgPrint("HEAP[%wZ]: ", &NtCurrentPeb()->Ldr->InLoadOrderModuleList.Flink[5].Blink);
            else
              DbgPrint("HEAP: ");
            result = (int *)DbgPrint("%ld leaks detected.\n", RtlpLeaksCount);
            if ( (RtlpShutdownProcessFlags & 2) != 0 )
              __debugbreak();
          }
          else
          {
            if ( v2->Ldr )
              DbgPrint("HEAP[%wZ]: ", &NtCurrentPeb()->Ldr->InLoadOrderModuleList.Flink[5].Blink);
            else
              DbgPrint("HEAP: ");
            return (int *)DbgPrint("No leaks detected.\n");
          }
        }
        else
        {
          return (int *)RtlDestroyHeap(RtlpLeakHeap);
        }
      }
    }
  }
  return result;
}
