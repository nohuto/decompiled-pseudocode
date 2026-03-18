/*
 * XREFs of IoGetStackLimits @ 0x140226570
 * Callers:
 *     EtwpEventWriteFull @ 0x14020E300 (EtwpEventWriteFull.c)
 *     EtwpApplyPayloadFilterInternal @ 0x1405AF388 (EtwpApplyPayloadFilterInternal.c)
 *     EtwpWriteUserEvent @ 0x1406557F0 (EtwpWriteUserEvent.c)
 *     _RegRtlDeleteTreeInternal @ 0x140763384 (_RegRtlDeleteTreeInternal.c)
 *     _RegRtlEnumKeyWithCallback @ 0x1407A8730 (_RegRtlEnumKeyWithCallback.c)
 *     _RegRtlCopyTreeInternal @ 0x14097ED40 (_RegRtlCopyTreeInternal.c)
 *     HalpCheckLowMemoryPreSleep @ 0x1409AB1CC (HalpCheckLowMemoryPreSleep.c)
 *     ViDeadlockCheckStackLimits @ 0x1409E21BC (ViDeadlockCheckStackLimits.c)
 * Callees:
 *     RtlpGetStackLimits @ 0x1402265A0 (RtlpGetStackLimits.c)
 */

void __stdcall IoGetStackLimits(PULONG_PTR LowLimit, PULONG_PTR HighLimit)
{
  if ( !(unsigned __int8)RtlpGetStackLimits() )
  {
    *LowLimit = 0LL;
    *HighLimit = 0LL;
  }
}
