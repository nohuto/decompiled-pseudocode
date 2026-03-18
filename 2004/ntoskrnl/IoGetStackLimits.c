/*
 * XREFs of IoGetStackLimits @ 0x14029ADF0
 * Callers:
 *     EtwpEventWriteFull @ 0x140293740 (EtwpEventWriteFull.c)
 *     EtwpApplyPayloadFilterInternal @ 0x1405AB828 (EtwpApplyPayloadFilterInternal.c)
 *     EtwpWriteUserEvent @ 0x1406246E0 (EtwpWriteUserEvent.c)
 *     _RegRtlDeleteTreeInternal @ 0x140754744 (_RegRtlDeleteTreeInternal.c)
 *     _RegRtlEnumKeyWithCallback @ 0x140799400 (_RegRtlEnumKeyWithCallback.c)
 *     _RegRtlCopyTreeInternal @ 0x140978F70 (_RegRtlCopyTreeInternal.c)
 *     HalpCheckLowMemoryPreSleep @ 0x1409A526C (HalpCheckLowMemoryPreSleep.c)
 *     ViDeadlockCheckStackLimits @ 0x1409DC19C (ViDeadlockCheckStackLimits.c)
 * Callees:
 *     RtlpGetStackLimits @ 0x14029AE20 (RtlpGetStackLimits.c)
 */

void __stdcall IoGetStackLimits(PULONG_PTR LowLimit, PULONG_PTR HighLimit)
{
  if ( !(unsigned __int8)RtlpGetStackLimits() )
  {
    *LowLimit = 0LL;
    *HighLimit = 0LL;
  }
}
