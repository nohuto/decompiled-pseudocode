/*
 * XREFs of PspSendWakeNotification @ 0x1406CC164
 * Callers:
 *     PspChargeJobWakeCounter @ 0x140612060 (PspChargeJobWakeCounter.c)
 *     PspDispatchWakeNotification @ 0x1406CC0F0 (PspDispatchWakeNotification.c)
 * Callees:
 *     ObfReferenceObjectWithTag @ 0x14025A2D0 (ObfReferenceObjectWithTag.c)
 *     ObfDereferenceObjectWithTag @ 0x1402611B0 (ObfDereferenceObjectWithTag.c)
 *     PspRequestDeferredJobNotification @ 0x1403081AC (PspRequestDeferredJobNotification.c)
 *     EtwTraceWakeEvent @ 0x1409320B8 (EtwTraceWakeEvent.c)
 */

char __fastcall PspSendWakeNotification(PVOID Object, unsigned int a2, _DWORD *a3, unsigned __int64 a4, char a5)
{
  if ( (((1 << a2) & a3[1]) == 0 || a4)
    && (((1 << a2) & *a3) == 0 || (a5 & 2) == 0 || a4 != 1 && (a4 <= 1 || (a5 & 1) == 0)) )
  {
    return 0;
  }
  ObfReferenceObjectWithTag(Object, 0x6F4E7350u);
  if ( (xmmword_140CFC490 & 0x400) != 0 && (a5 & 4) != 0 && a4 == 1 )
    EtwTraceWakeEvent(Object, a2);
  if ( !PspRequestDeferredJobNotification((signed __int64)Object, 0x2000u) )
    ObfDereferenceObjectWithTag(Object, 0x6F4E7350u);
  return 1;
}
