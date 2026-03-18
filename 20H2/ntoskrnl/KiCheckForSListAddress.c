/*
 * XREFs of KiCheckForSListAddress @ 0x1402DF2E0
 * Callers:
 *     KiDeliverApc @ 0x1402DDAB0 (KiDeliverApc.c)
 *     KxIsrLinkage @ 0x1403FF760 (KxIsrLinkage.c)
 *     KiHvInterrupt @ 0x140401160 (KiHvInterrupt.c)
 *     KiVmbusInterrupt0 @ 0x140401440 (KiVmbusInterrupt0.c)
 *     KiVmbusInterrupt1 @ 0x140401720 (KiVmbusInterrupt1.c)
 *     KiVmbusInterrupt2 @ 0x140401A00 (KiVmbusInterrupt2.c)
 *     KiVmbusInterrupt3 @ 0x140401CE0 (KiVmbusInterrupt3.c)
 *     KiSwInterrupt @ 0x140402A10 (KiSwInterrupt.c)
 *     KiIpiInterrupt @ 0x140403720 (KiIpiInterrupt.c)
 *     KiDispatchInterrupt @ 0x140403F40 (KiDispatchInterrupt.c)
 *     KiNmiInterruptStart @ 0x140408700 (KiNmiInterruptStart.c)
 *     KiPageFault @ 0x14040B480 (KiPageFault.c)
 *     KiMcheckAbort @ 0x14040C300 (KiMcheckAbort.c)
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
