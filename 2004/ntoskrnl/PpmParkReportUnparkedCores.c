/*
 * XREFs of PpmParkReportUnparkedCores @ 0x14033CCD0
 * Callers:
 *     <none>
 * Callees:
 *     KeGetPrcb @ 0x14021DBD0 (KeGetPrcb.c)
 *     KeEnumerateNextProcessor @ 0x14021E1A0 (KeEnumerateNextProcessor.c)
 *     KeSubtractAffinityEx @ 0x1402201A0 (KeSubtractAffinityEx.c)
 *     KeCountSetBitsAffinityEx @ 0x1402FD690 (KeCountSetBitsAffinityEx.c)
 *     PpmPerfQueueAction @ 0x14039679C (PpmPerfQueueAction.c)
 */

char PpmParkReportUnparkedCores()
{
  __int64 Prcb; // rax
  unsigned __int16 *v2[2]; // [rsp+20h] [rbp-28h] BYREF
  __int16 v3; // [rsp+30h] [rbp-18h]
  int v4; // [rsp+32h] [rbp-16h]
  __int16 v5; // [rsp+36h] [rbp-12h]
  unsigned int v6; // [rsp+50h] [rbp+8h] BYREF

  v4 = 0;
  v5 = 0;
  v6 = 0;
  if ( !PpmIsParkingEnabled
    || !(unsigned int)KeSubtractAffinityEx(
                        PpmPerfChangedCoreParkingMask,
                        (unsigned __int16 *)&PpmPerfNewCoreParkingMask,
                        &PpmPerfNewUnparkedMask) )
  {
    return 1;
  }
  PpmCheckCount = KeCountSetBitsAffinityEx((unsigned __int16 *)&PpmPerfNewUnparkedMask);
  v2[1] = (unsigned __int16 *)qword_140C12A88;
  v3 = 0;
  v2[0] = (unsigned __int16 *)&PpmPerfNewUnparkedMask;
  while ( !(unsigned int)KeEnumerateNextProcessor(&v6, v2) )
  {
    Prcb = KeGetPrcb(v6);
    PpmPerfQueueAction(Prcb, 1LL);
  }
  return 0;
}
