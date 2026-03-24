/*
 * XREFs of KiCheckForSListAddress @ 0x14024D5B0
 * Callers:
 *     KiDeliverApc @ 0x14024A750 (KiDeliverApc.c)
 *     KxIsrLinkage @ 0x140401B40 (KxIsrLinkage.c)
 *     KiHvInterrupt @ 0x140403600 (KiHvInterrupt.c)
 *     KiVmbusInterrupt0 @ 0x1404038F0 (KiVmbusInterrupt0.c)
 *     KiVmbusInterrupt1 @ 0x140403BE0 (KiVmbusInterrupt1.c)
 *     KiVmbusInterrupt2 @ 0x140403ED0 (KiVmbusInterrupt2.c)
 *     KiVmbusInterrupt3 @ 0x1404041C0 (KiVmbusInterrupt3.c)
 *     KiSwInterrupt @ 0x140404F60 (KiSwInterrupt.c)
 *     KiIpiInterrupt @ 0x140405CF0 (KiIpiInterrupt.c)
 *     KiDispatchInterrupt @ 0x140406550 (KiDispatchInterrupt.c)
 *     KiNmiInterruptStart @ 0x14040AE40 (KiNmiInterruptStart.c)
 *     KiPageFault @ 0x14040DD00 (KiPageFault.c)
 *     KiMcheckAbort @ 0x14040EBC0 (KiMcheckAbort.c)
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
