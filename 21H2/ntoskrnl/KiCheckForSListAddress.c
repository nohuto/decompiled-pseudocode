/*
 * XREFs of KiCheckForSListAddress @ 0x1402F2540
 * Callers:
 *     KiDeliverApc @ 0x1402F1DC0 (KiDeliverApc.c)
 *     KxIsrLinkage @ 0x140423360 (KxIsrLinkage.c)
 *     KiHvInterrupt @ 0x1404257E0 (KiHvInterrupt.c)
 *     KiVmbusInterrupt0 @ 0x140425B20 (KiVmbusInterrupt0.c)
 *     KiVmbusInterrupt1 @ 0x140425E60 (KiVmbusInterrupt1.c)
 *     KiVmbusInterrupt2 @ 0x1404261A0 (KiVmbusInterrupt2.c)
 *     KiVmbusInterrupt3 @ 0x1404264E0 (KiVmbusInterrupt3.c)
 *     KiSwInterrupt @ 0x140427360 (KiSwInterrupt.c)
 *     KiIpiInterrupt @ 0x140428220 (KiIpiInterrupt.c)
 *     KiDispatchInterrupt @ 0x140428B10 (KiDispatchInterrupt.c)
 *     KiNmiInterruptStart @ 0x14042CF40 (KiNmiInterruptStart.c)
 *     KiPageFault @ 0x140430000 (KiPageFault.c)
 *     KiMcheckAbort @ 0x140430F00 (KiMcheckAbort.c)
 * Callees:
 *     VslKernelShadowStackAssist @ 0x14054EA40 (VslKernelShadowStackAssist.c)
 */

__int64 __fastcall KiCheckForSListAddress(__int64 a1)
{
  __int64 result; // rax
  unsigned __int64 v2; // rdx

  result = *(unsigned __int16 *)(a1 + 368);
  v2 = *(_QWORD *)(a1 + 360);
  if ( (_WORD)result == 51 )
  {
    result = qword_140D071B8;
    if ( v2 > qword_140D071B8 && v2 <= qword_140D071A8 )
      *(_QWORD *)(a1 + 360) = qword_140D071B8;
  }
  else if ( (_WORD)result == 16 && v2 > (unsigned __int64)&ExpInterlockedPopEntrySListResume )
  {
    result = (__int64)&ExpInterlockedPopEntrySListEnd;
    if ( v2 <= (unsigned __int64)&ExpInterlockedPopEntrySListEnd )
    {
      *(_QWORD *)(a1 + 360) = &ExpInterlockedPopEntrySListResume;
      if ( (_BYTE)KiKernelCetEnabled )
        return VslKernelShadowStackAssist(
                 3,
                 *(_QWORD *)(a1 + 216),
                 0,
                 0,
                 (__int64)&ExpInterlockedPopEntrySListResume,
                 4);
    }
  }
  return result;
}
