/*
 * XREFs of _RtlpCallInterceptRoutine@20 @ 0x4B35773E
 * Callers:
 *     _RtlDestroyHeap@4 @ 0x4B2AF870 (_RtlDestroyHeap@4.c)
 *     _RtlpReAllocateHeapInternal@24 @ 0x4B2C2710 (_RtlpReAllocateHeapInternal@24.c)
 *     _RtlpAllocateHeapInternal@16 @ 0x4B2C5D90 (_RtlpAllocateHeapInternal@16.c)
 *     _RtlpFreeHeapInternal@20 @ 0x4B30705A (_RtlpFreeHeapInternal@20.c)
 *     _RtlpSetHeapDebuggingInformation@8 @ 0x4B359790 (_RtlpSetHeapDebuggingInformation@8.c)
 *     _RtlpHpAllocateHeap@16 @ 0x4B37803E (_RtlpHpAllocateHeap@16.c)
 *     _RtlpHpFreeHeap@20 @ 0x4B3784F8 (_RtlpHpFreeHeap@20.c)
 *     _RtlpHpReAllocateHeap@24 @ 0x4B37955B (_RtlpHpReAllocateHeap@24.c)
 * Callees:
 *     _RtlpHeapTrkInterceptor@16 @ 0x4B3648D0 (_RtlpHeapTrkInterceptor@16.c)
 *     _RtlpStackTraceDatabaseLogPrefix@16 @ 0x4B36FB50 (_RtlpStackTraceDatabaseLogPrefix@16.c)
 */

int __fastcall RtlpCallInterceptRoutine(int a1, int a2, int a3, int a4, int a5)
{
  unsigned __int16 v5; // cx

  if ( a1 && (v5 = a1 - 1, v5 < 2u) )
    return RtlpInterceptorRoutines[v5](a2, a3, a4, a5);
  else
    return -1073741823;
}
