/*
 * XREFs of _TppAlpcpValidateAlpc@12 @ 0x4B2E9A18
 * Callers:
 *     _TpReleaseAlpcCompletion@4 @ 0x4B2E9950 (_TpReleaseAlpcCompletion@4.c)
 *     _TpAlpcRegisterCompletionList@4 @ 0x4B383400 (_TpAlpcRegisterCompletionList@4.c)
 *     _TpAlpcUnregisterCompletionList@4 @ 0x4B383450 (_TpAlpcUnregisterCompletionList@4.c)
 *     _TpWaitForAlpcCompletion@4 @ 0x4B383490 (_TpWaitForAlpcCompletion@4.c)
 * Callees:
 *     _TppValidateCleanupGroupMember@8 @ 0x4B2C1B74 (_TppValidateCleanupGroupMember@8.c)
 *     _TppRaiseInvalidParameter@0 @ 0x4B3848BD (_TppRaiseInvalidParameter@0.c)
 */

int __fastcall TppAlpcpValidateAlpc(int a1, int a2, int a3)
{
  if ( a1
    && TppValidateCleanupGroupMember(a1 + 48, a2)
    && *(int (__stdcall ***)(int))(a1 + 52) == TppAlpcpCleanupGroupMemberVFuncs
    && !NtCurrentPeb()->Ldr->ShutdownInProgress )
  {
    return 1;
  }
  if ( a3 || !NtCurrentPeb()->Ldr->ShutdownInProgress )
    TppRaiseInvalidParameter();
  return 0;
}
