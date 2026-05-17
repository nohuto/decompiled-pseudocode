/*
 * XREFs of RtlInitializeSListHead @ 0x18006FBD0
 * Callers:
 *     RtlpHpVsContextInitialize @ 0x18000813C (RtlpHpVsContextInitialize.c)
 *     RtlCreateMemoryBlockLookaside @ 0x18007B5C0 (RtlCreateMemoryBlockLookaside.c)
 *     LdrpInitializeProcess @ 0x1800D1EC0 (LdrpInitializeProcess.c)
 *     RtlResetMemoryBlockLookaside @ 0x1800EB2D0 (RtlResetMemoryBlockLookaside.c)
 *     RtlStdInitializeStackDatabase @ 0x1801011D0 (RtlStdInitializeStackDatabase.c)
 *     RtlpInitializeStackTraceLog @ 0x18010994C (RtlpInitializeStackTraceLog.c)
 *     RtlpSubSegmentDebugInitialize @ 0x18010BB4C (RtlpSubSegmentDebugInitialize.c)
 *     RtlAllocateMemoryBlockLookaside @ 0x18011C010 (RtlAllocateMemoryBlockLookaside.c)
 * Callees:
 *     RtlRaiseStatus @ 0x1801026C0 (RtlRaiseStatus.c)
 */

void __stdcall RtlInitializeSListHead(PSLIST_HEADER ListHead)
{
  if ( ((unsigned __int8)ListHead & 0xF) != 0 )
    RtlRaiseStatus(2147483650LL);
  *ListHead = 0LL;
}
