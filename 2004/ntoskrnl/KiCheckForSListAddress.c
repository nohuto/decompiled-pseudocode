/*
 * XREFs of KiCheckForSListAddress @ 0x140325D90
 * Callers:
 *     KiDeliverApc @ 0x14020EAE0 (KiDeliverApc.c)
 *     KxIsrLinkage @ 0x1403FA0A0 (KxIsrLinkage.c)
 *     KiHvInterrupt @ 0x1403FB6E0 (KiHvInterrupt.c)
 *     KiVmbusInterrupt0 @ 0x1403FB9C0 (KiVmbusInterrupt0.c)
 *     KiVmbusInterrupt1 @ 0x1403FBCA0 (KiVmbusInterrupt1.c)
 *     KiVmbusInterrupt2 @ 0x1403FBF80 (KiVmbusInterrupt2.c)
 *     KiVmbusInterrupt3 @ 0x1403FC260 (KiVmbusInterrupt3.c)
 *     KiSwInterrupt @ 0x1403FCD20 (KiSwInterrupt.c)
 *     KiIpiInterrupt @ 0x1403FD7D0 (KiIpiInterrupt.c)
 *     KiDispatchInterrupt @ 0x1403FDEC0 (KiDispatchInterrupt.c)
 *     KiNmiInterruptStart @ 0x140402340 (KiNmiInterruptStart.c)
 *     KiPageFault @ 0x140404F00 (KiPageFault.c)
 *     KiMcheckAbort @ 0x140405C40 (KiMcheckAbort.c)
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
