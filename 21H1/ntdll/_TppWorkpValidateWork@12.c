/*
 * XREFs of _TppWorkpValidateWork@12 @ 0x4B2EC4DD
 * Callers:
 *     _TpWaitForWork@8 @ 0x4B2AB500 (_TpWaitForWork@8.c)
 *     _TpReleaseWork@4 @ 0x4B2EC490 (_TpReleaseWork@4.c)
 * Callees:
 *     _TppValidateCleanupGroupMember@8 @ 0x4B2C1B74 (_TppValidateCleanupGroupMember@8.c)
 *     _TppRaiseInvalidParameter@0 @ 0x4B3848BD (_TppRaiseInvalidParameter@0.c)
 */

int __fastcall TppWorkpValidateWork(int a1, int a2, int a3)
{
  if ( a1
    && TppValidateCleanupGroupMember(a1, a2)
    && *(int (__stdcall ***)(PVOID))(a1 + 4) == &TppWorkpCleanupGroupMemberVFuncs
    && !NtCurrentPeb()->Ldr->ShutdownInProgress )
  {
    return 1;
  }
  if ( a3 || !NtCurrentPeb()->Ldr->ShutdownInProgress )
    TppRaiseInvalidParameter();
  return 0;
}
