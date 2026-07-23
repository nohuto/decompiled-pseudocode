/*
 * XREFs of HalRequestIpiSpecifyVector @ 0x140269380
 * Callers:
 *     HalRequestClockInterrupt @ 0x140210B00 (HalRequestClockInterrupt.c)
 *     KiIntRedirectQueueRequestOnProcessor @ 0x140268C08 (KiIntRedirectQueueRequestOnProcessor.c)
 *     HalRequestIpi @ 0x140268E40 (HalRequestIpi.c)
 *     KiIpiSendRequest @ 0x140268E70 (KiIpiSendRequest.c)
 *     HalpInterruptResetAllProcessors @ 0x1404D2E2C (HalpInterruptResetAllProcessors.c)
 * Callees:
 *     HalpInterruptSendIpi @ 0x1402C4B10 (HalpInterruptSendIpi.c)
 */

__int64 __fastcall HalRequestIpiSpecifyVector(int a1, _WORD *a2, unsigned int a3)
{
  int v4; // ecx
  __int128 v5; // [rsp+20h] [rbp-28h] BYREF
  __int64 v6; // [rsp+30h] [rbp-18h]

  v6 = 0LL;
  v5 = 0LL;
  if ( !a1 )
  {
    if ( a2 && *a2 )
    {
      while ( !*(_QWORD *)&a2[4 * (unsigned __int16)a1 + 4] )
      {
        LOWORD(a1) = a1 + 1;
        if ( (unsigned __int16)a1 >= *a2 )
          return 3221225485LL;
      }
      LODWORD(v5) = 2;
      *((_QWORD *)&v5 + 1) = a2;
      return HalpInterruptSendIpi(&v5, a3);
    }
    return 3221225485LL;
  }
  if ( (unsigned int)(a1 - 1) > 1 )
    return 3221225485LL;
  v4 = a1 - 1;
  if ( v4 )
  {
    if ( v4 == 1 )
      LODWORD(v5) = 3;
    return HalpInterruptSendIpi(&v5, a3);
  }
  LODWORD(v5) = 4;
  return HalpInterruptSendIpi(&v5, a3);
}
