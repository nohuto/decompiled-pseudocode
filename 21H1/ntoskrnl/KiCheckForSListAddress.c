/*
 * XREFs of KiCheckForSListAddress @ 0x1402EC460
 * Callers:
 *     KiDeliverApc @ 0x140267B30 (KiDeliverApc.c)
 *     KxIsrLinkage @ 0x1403F8E10 (KxIsrLinkage.c)
 *     KiHvInterrupt @ 0x1403FA450 (KiHvInterrupt.c)
 *     KiVmbusInterrupt0 @ 0x1403FA730 (KiVmbusInterrupt0.c)
 *     KiVmbusInterrupt1 @ 0x1403FAA10 (KiVmbusInterrupt1.c)
 *     KiVmbusInterrupt2 @ 0x1403FACF0 (KiVmbusInterrupt2.c)
 *     KiVmbusInterrupt3 @ 0x1403FAFD0 (KiVmbusInterrupt3.c)
 *     KiSwInterrupt @ 0x1403FBA90 (KiSwInterrupt.c)
 *     KiIpiInterrupt @ 0x1403FC540 (KiIpiInterrupt.c)
 *     KiDispatchInterrupt @ 0x1403FCC30 (KiDispatchInterrupt.c)
 *     KiNmiInterruptStart @ 0x140401040 (KiNmiInterruptStart.c)
 *     KiPageFault @ 0x140403C00 (KiPageFault.c)
 *     KiMcheckAbort @ 0x140404940 (KiMcheckAbort.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall KiCheckForSListAddress(__int64 a1)
{
  __int64 result; // rax
  unsigned __int64 v2; // rdx

  result = *(unsigned __int16 *)(a1 + 368);
  v2 = *(_QWORD *)(a1 + 360);
  if ( (_WORD)result == 51 )
  {
    result = KeUserPopEntrySListResume;
    if ( v2 > KeUserPopEntrySListResume && v2 <= KeUserPopEntrySListEnd )
      *(_QWORD *)(a1 + 360) = KeUserPopEntrySListResume;
  }
  else if ( (_WORD)result == 16 && v2 > (unsigned __int64)&ExpInterlockedPopEntrySListResume )
  {
    result = (__int64)&ExpInterlockedPopEntrySListEnd;
    if ( v2 <= (unsigned __int64)&ExpInterlockedPopEntrySListEnd )
      *(_QWORD *)(a1 + 360) = &ExpInterlockedPopEntrySListResume;
  }
  return result;
}
