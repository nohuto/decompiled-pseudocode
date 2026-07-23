/*
 * XREFs of _TppTimerpValidateTimer@12 @ 0x4B2B46DB
 * Callers:
 *     _TpTimerOutstandingCallbackCount@4 @ 0x4B2A8DD0 (_TpTimerOutstandingCallbackCount@4.c)
 *     _TpReleaseTimer@4 @ 0x4B2B3B90 (_TpReleaseTimer@4.c)
 *     _TpWaitForTimer@8 @ 0x4B2B3C20 (_TpWaitForTimer@8.c)
 *     _TpIsTimerSet@4 @ 0x4B2B4520 (_TpIsTimerSet@4.c)
 *     _TpSetTimerEx@16 @ 0x4B2B4620 (_TpSetTimerEx@16.c)
 * Callees:
 *     _TppValidateCleanupGroupMember@8 @ 0x4B2C1B74 (_TppValidateCleanupGroupMember@8.c)
 *     _TppRaiseInvalidParameter@0 @ 0x4B3848BD (_TppRaiseInvalidParameter@0.c)
 */

int __thiscall TppTimerpValidateTimer(int this, int a2)
{
  if ( this
    && !*(_BYTE *)(this + 221)
    && TppValidateCleanupGroupMember()
    && *(int (__stdcall ***)(PVOID))(this + 4) == &TppTimerpCleanupGroupMemberVFuncs
    && !NtCurrentPeb()->Ldr->ShutdownInProgress )
  {
    return 1;
  }
  if ( a2 || !NtCurrentPeb()->Ldr->ShutdownInProgress )
    TppRaiseInvalidParameter();
  return 0;
}
