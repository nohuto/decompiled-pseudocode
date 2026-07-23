/*
 * XREFs of HalpApicReplaySendSelfIpi @ 0x1404E53B0
 * Callers:
 *     HalpApicReplayLocalInterrupts @ 0x1404E5320 (HalpApicReplayLocalInterrupts.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x140408790 (_guard_dispatch_icall.c)
 */

__int64 __fastcall HalpApicReplaySendSelfIpi(int a1)
{
  while ( (((__int64 (__fastcall *)(__int64))HalpApicRead)(768LL) & 0x1000) != 0 )
    ;
  return ((__int64 (__fastcall *)(__int64, _QWORD))HalpApicWrite)(768LL, a1 | 0x40000u);
}
