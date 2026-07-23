/*
 * XREFs of TppTimerpValidateTimer @ 0x180012914
 * Callers:
 *     TpTimerOutstandingCallbackCount @ 0x180009BB0 (TpTimerOutstandingCallbackCount.c)
 *     TpReleaseTimer @ 0x18000C500 (TpReleaseTimer.c)
 *     TpWaitForTimer @ 0x180011200 (TpWaitForTimer.c)
 *     TpIsTimerSet @ 0x180012000 (TpIsTimerSet.c)
 *     TpSetTimerEx @ 0x1800126D0 (TpSetTimerEx.c)
 * Callees:
 *     TppValidateCleanupGroupMember @ 0x18001298C (TppValidateCleanupGroupMember.c)
 *     TppRaiseInvalidParameter @ 0x18011212C (TppRaiseInvalidParameter.c)
 */

__int64 __fastcall TppTimerpValidateTimer(_PEB_LDR_DATA *Ldr, __int64 a2, __int64 a3)
{
  int v3; // r11d
  int v4; // r10d
  __int64 v5; // r9

  LOBYTE(v3) = 0;
  v4 = a3;
  if ( Ldr )
  {
    if ( !BYTE1(Ldr[4].Length) )
    {
      if ( (unsigned int)TppValidateCleanupGroupMember(Ldr, a2, a3) )
      {
        if ( *(__int64 (__fastcall ***)())(v5 + 8) == &TppTimerpCleanupGroupMemberVFuncs )
        {
          Ldr = NtCurrentPeb()->Ldr;
          if ( Ldr->ShutdownInProgress == (_BYTE)v3 )
            return (unsigned int)(v3 + 1);
        }
      }
    }
  }
  if ( v4 || (Ldr = NtCurrentPeb()->Ldr, Ldr->ShutdownInProgress == (_BYTE)v3) )
    TppRaiseInvalidParameter(Ldr, a2, a3);
  return 0LL;
}
