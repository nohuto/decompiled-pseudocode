/*
 * XREFs of _TppIopValidateIo@12 @ 0x4B2E70F8
 * Callers:
 *     _TpWaitForIoCompletion@8 @ 0x4B2ABF80 (_TpWaitForIoCompletion@8.c)
 *     _TpReleaseIoCompletion@4 @ 0x4B2E6E00 (_TpReleaseIoCompletion@4.c)
 *     _TpCancelAsyncIoOperation@4 @ 0x4B2E7040 (_TpCancelAsyncIoOperation@4.c)
 *     _TpStartAsyncIoOperation@4 @ 0x4B2E70A0 (_TpStartAsyncIoOperation@4.c)
 * Callees:
 *     _TppValidateCleanupGroupMember@8 @ 0x4B2C1B74 (_TppValidateCleanupGroupMember@8.c)
 *     _TppRaiseInvalidParameter@0 @ 0x4B3848BD (_TppRaiseInvalidParameter@0.c)
 */

int __fastcall TppIopValidateIo(int a1, int a2, int a3)
{
  if ( a1
    && TppValidateCleanupGroupMember(a1, a2)
    && *(int (__stdcall ***)(PVOID))(a1 + 4) == &TppIopCleanupGroupMemberVFuncs
    && !NtCurrentPeb()->Ldr->ShutdownInProgress )
  {
    return 1;
  }
  if ( a3 || !NtCurrentPeb()->Ldr->ShutdownInProgress )
    TppRaiseInvalidParameter();
  return 0;
}
