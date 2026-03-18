/*
 * XREFs of HalpApicReplaySendSelfIpi @ 0x1404DFAE0
 * Callers:
 *     HalpApicReplayLocalInterrupts @ 0x1404DFA50 (HalpApicReplayLocalInterrupts.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x1403FE9E0 (_guard_dispatch_icall.c)
 */

__int64 __fastcall HalpApicReplaySendSelfIpi(int a1)
{
  while ( (((__int64 (__fastcall *)(__int64))HalpApicRead)(768LL) & 0x1000) != 0 )
    ;
  return HalpApicWrite(768LL, a1 | 0x40000u);
}
