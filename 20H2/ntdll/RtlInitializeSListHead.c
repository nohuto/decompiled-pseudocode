/*
 * XREFs of RtlInitializeSListHead @ 0x18006EBA0
 * Callers:
 *     RtlpHpVsContextInitialize @ 0x18000813C (RtlpHpVsContextInitialize.c)
 *     RtlCreateMemoryBlockLookaside @ 0x18007A590 (RtlCreateMemoryBlockLookaside.c)
 *     LdrpInitializeProcess @ 0x1800D1F00 (LdrpInitializeProcess.c)
 *     RtlResetMemoryBlockLookaside @ 0x1800EB440 (RtlResetMemoryBlockLookaside.c)
 *     RtlStdInitializeStackDatabase @ 0x180101330 (RtlStdInitializeStackDatabase.c)
 *     RtlpInitializeStackTraceLog @ 0x180109AAC (RtlpInitializeStackTraceLog.c)
 *     RtlpSubSegmentDebugInitialize @ 0x18010BCAC (RtlpSubSegmentDebugInitialize.c)
 *     RtlAllocateMemoryBlockLookaside @ 0x18011B010 (RtlAllocateMemoryBlockLookaside.c)
 * Callees:
 *     RtlRaiseStatus @ 0x180102820 (RtlRaiseStatus.c)
 */

void __stdcall RtlInitializeSListHead(PSLIST_HEADER ListHead)
{
  if ( ((unsigned __int8)ListHead & 0xF) != 0 )
    RtlRaiseStatus(-2147483646);
  *ListHead = 0LL;
}
