/*
 * XREFs of KiCheckForSListAddress @ 0x1402F1E00
 * Callers:
 *     KiDeliverApc @ 0x1402EEFA0 (KiDeliverApc.c)
 *     KxIsrLinkage @ 0x140401D20 (KxIsrLinkage.c)
 *     KiHvInterrupt @ 0x1404037E0 (KiHvInterrupt.c)
 *     KiVmbusInterrupt0 @ 0x140403AD0 (KiVmbusInterrupt0.c)
 *     KiVmbusInterrupt1 @ 0x140403DC0 (KiVmbusInterrupt1.c)
 *     KiVmbusInterrupt2 @ 0x1404040B0 (KiVmbusInterrupt2.c)
 *     KiVmbusInterrupt3 @ 0x1404043A0 (KiVmbusInterrupt3.c)
 *     KiSwInterrupt @ 0x140405140 (KiSwInterrupt.c)
 *     KiIpiInterrupt @ 0x140405ED0 (KiIpiInterrupt.c)
 *     KiDispatchInterrupt @ 0x140406730 (KiDispatchInterrupt.c)
 *     KiNmiInterruptStart @ 0x14040AF40 (KiNmiInterruptStart.c)
 *     KiPageFault @ 0x14040DE00 (KiPageFault.c)
 *     KiMcheckAbort @ 0x14040ECC0 (KiMcheckAbort.c)
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
