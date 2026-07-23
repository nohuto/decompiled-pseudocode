/*
 * XREFs of KeWakeProcessor @ 0x140519C60
 * Callers:
 *     PpmIdleExecuteTransition @ 0x1402C6DB0 (PpmIdleExecuteTransition.c)
 *     KxIsrLinkage @ 0x140401D20 (KxIsrLinkage.c)
 *     KiHvInterrupt @ 0x1404037E0 (KiHvInterrupt.c)
 *     KiVmbusInterrupt0 @ 0x140403AD0 (KiVmbusInterrupt0.c)
 *     KiVmbusInterrupt1 @ 0x140403DC0 (KiVmbusInterrupt1.c)
 *     KiVmbusInterrupt2 @ 0x1404040B0 (KiVmbusInterrupt2.c)
 *     KiVmbusInterrupt3 @ 0x1404043A0 (KiVmbusInterrupt3.c)
 *     KiSwInterrupt @ 0x140405140 (KiSwInterrupt.c)
 *     KiIpiInterrupt @ 0x140405ED0 (KiIpiInterrupt.c)
 *     KiNmiInterruptStart @ 0x14040AF40 (KiNmiInterruptStart.c)
 *     KiMcheckAbort @ 0x14040ECC0 (KiMcheckAbort.c)
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
    &qword_140C2B3C8[(unsigned __int64)(unsigned int)KiProcessorIndexToNumberMappingTable[Number] >> 6],
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
