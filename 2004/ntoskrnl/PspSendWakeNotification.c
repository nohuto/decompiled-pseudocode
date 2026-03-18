/*
 * XREFs of PspSendWakeNotification @ 0x1406ED464
 * Callers:
 *     PspChargeJobWakeCounter @ 0x14068A1E0 (PspChargeJobWakeCounter.c)
 *     PspDispatchWakeNotification @ 0x1406ED3F0 (PspDispatchWakeNotification.c)
 * Callees:
 *     ObfDereferenceObjectWithTag @ 0x140208290 (ObfDereferenceObjectWithTag.c)
 *     ObfReferenceObjectWithTag @ 0x140296B50 (ObfReferenceObjectWithTag.c)
 *     PspRequestDeferredJobNotification @ 0x140345FAC (PspRequestDeferredJobNotification.c)
 *     EtwTraceWakeEvent @ 0x140933364 (EtwTraceWakeEvent.c)
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
