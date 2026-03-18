/*
 * XREFs of KeWakeProcessor @ 0x140513F60
 * Callers:
 *     PpmIdleExecuteTransition @ 0x1402702D0 (PpmIdleExecuteTransition.c)
 *     KxIsrLinkage @ 0x1403F8E10 (KxIsrLinkage.c)
 *     KiHvInterrupt @ 0x1403FA450 (KiHvInterrupt.c)
 *     KiVmbusInterrupt0 @ 0x1403FA730 (KiVmbusInterrupt0.c)
 *     KiVmbusInterrupt1 @ 0x1403FAA10 (KiVmbusInterrupt1.c)
 *     KiVmbusInterrupt2 @ 0x1403FACF0 (KiVmbusInterrupt2.c)
 *     KiVmbusInterrupt3 @ 0x1403FAFD0 (KiVmbusInterrupt3.c)
 *     KiSwInterrupt @ 0x1403FBA90 (KiSwInterrupt.c)
 *     KiIpiInterrupt @ 0x1403FC540 (KiIpiInterrupt.c)
 *     KiNmiInterruptStart @ 0x140401040 (KiNmiInterruptStart.c)
 *     KiMcheckAbort @ 0x140404940 (KiMcheckAbort.c)
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
    &qword_140C2B368[(unsigned __int64)(unsigned int)KiProcessorIndexToNumberMappingTable[Number] >> 6],
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
