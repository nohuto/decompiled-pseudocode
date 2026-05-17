/*
 * XREFs of _TppJobpValidateJob@8 @ 0x4B383B34
 * Callers:
 *     _TpReleaseJobNotification@4 @ 0x4B383720 (_TpReleaseJobNotification@4.c)
 *     _TpWaitForJobNotification@4 @ 0x4B383780 (_TpWaitForJobNotification@4.c)
 * Callees:
 *     _TppValidateCleanupGroupMember@8 @ 0x4B2C1B74 (_TppValidateCleanupGroupMember@8.c)
 *     _TppRaiseInvalidParameter@0 @ 0x4B3848BD (_TppRaiseInvalidParameter@0.c)
 */

int __fastcall TppJobpValidateJob(int a1, int a2)
{
  if ( a1
    && TppValidateCleanupGroupMember(a1 + 48, a2)
    && *(int (__stdcall ***)(int))(a1 + 52) == TppJobpCleanupGroupMemberVFuncs
    && !NtCurrentPeb()->Ldr->ShutdownInProgress )
  {
    return 1;
  }
  if ( !NtCurrentPeb()->Ldr->ShutdownInProgress )
    TppRaiseInvalidParameter();
  return 0;
}
