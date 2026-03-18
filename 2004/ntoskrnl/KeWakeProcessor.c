/*
 * XREFs of KeWakeProcessor @ 0x1405145B0
 * Callers:
 *     PpmIdleExecuteTransition @ 0x140217280 (PpmIdleExecuteTransition.c)
 *     KxIsrLinkage @ 0x1403FA0A0 (KxIsrLinkage.c)
 *     KiHvInterrupt @ 0x1403FB6E0 (KiHvInterrupt.c)
 *     KiVmbusInterrupt0 @ 0x1403FB9C0 (KiVmbusInterrupt0.c)
 *     KiVmbusInterrupt1 @ 0x1403FBCA0 (KiVmbusInterrupt1.c)
 *     KiVmbusInterrupt2 @ 0x1403FBF80 (KiVmbusInterrupt2.c)
 *     KiVmbusInterrupt3 @ 0x1403FC260 (KiVmbusInterrupt3.c)
 *     KiSwInterrupt @ 0x1403FCD20 (KiSwInterrupt.c)
 *     KiIpiInterrupt @ 0x1403FD7D0 (KiIpiInterrupt.c)
 *     KiNmiInterruptStart @ 0x140402340 (KiNmiInterruptStart.c)
 *     KiMcheckAbort @ 0x140405C40 (KiMcheckAbort.c)
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
    &qword_140C2B168[(unsigned __int64)(unsigned int)KiProcessorIndexToNumberMappingTable[Number] >> 6],
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
