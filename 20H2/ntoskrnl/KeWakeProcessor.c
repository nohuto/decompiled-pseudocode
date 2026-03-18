/*
 * XREFs of KeWakeProcessor @ 0x140517EE0
 * Callers:
 *     PpmIdleExecuteTransition @ 0x140281CF0 (PpmIdleExecuteTransition.c)
 *     KxIsrLinkage @ 0x1403FF760 (KxIsrLinkage.c)
 *     KiHvInterrupt @ 0x140401160 (KiHvInterrupt.c)
 *     KiVmbusInterrupt0 @ 0x140401440 (KiVmbusInterrupt0.c)
 *     KiVmbusInterrupt1 @ 0x140401720 (KiVmbusInterrupt1.c)
 *     KiVmbusInterrupt2 @ 0x140401A00 (KiVmbusInterrupt2.c)
 *     KiVmbusInterrupt3 @ 0x140401CE0 (KiVmbusInterrupt3.c)
 *     KiSwInterrupt @ 0x140402A10 (KiSwInterrupt.c)
 *     KiIpiInterrupt @ 0x140403720 (KiIpiInterrupt.c)
 *     KiNmiInterruptStart @ 0x140408700 (KiNmiInterruptStart.c)
 *     KiMcheckAbort @ 0x14040C300 (KiMcheckAbort.c)
 * Callees:
 *     <none>
 */

unsigned __int64 KeWakeProcessor()
{
  struct _KPRCB *CurrentPrcb; // rax
  __int64 Number; // rcx
  unsigned __int64 v2; // rcx
  unsigned __int64 result; // rax

  CurrentPrcb = KeGetCurrentPrcb();
  Number = CurrentPrcb->Number;
  CurrentPrcb->DeepSleep = 0;
  _InterlockedAnd64(
    &qword_140C2B208[(unsigned __int64)(unsigned int)KiProcessorIndexToNumberMappingTable[Number] >> 6],
    ~(1LL << (KiProcessorIndexToNumberMappingTable[Number] & 0x3F)));
  v2 = __readcr4();
  if ( (v2 & 0x20080) != 0 )
  {
    result = v2 ^ 0x80;
    __writecr4(v2 ^ 0x80);
    __writecr4(v2);
  }
  else
  {
    result = __readcr3();
    __writecr3(result);
  }
  return result;
}
