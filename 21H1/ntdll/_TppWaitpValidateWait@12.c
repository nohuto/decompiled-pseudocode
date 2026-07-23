/*
 * XREFs of _TppWaitpValidateWait@12 @ 0x4B2B7C55
 * Callers:
 *     _TpWaitOutstandingCallbackCount@4 @ 0x4B2A8156 (_TpWaitOutstandingCallbackCount@4.c)
 *     _TpWaitForWait@8 @ 0x4B2B1D80 (_TpWaitForWait@8.c)
 *     _TpReleaseWait@4 @ 0x4B2B1E70 (_TpReleaseWait@4.c)
 *     _TpSetWaitEx@16 @ 0x4B2B7AB0 (_TpSetWaitEx@16.c)
 * Callees:
 *     _TppValidateCleanupGroupMember@8 @ 0x4B2C1B74 (_TppValidateCleanupGroupMember@8.c)
 *     _TppRaiseInvalidParameter@0 @ 0x4B3848BD (_TppRaiseInvalidParameter@0.c)
 */

int __thiscall TppWaitpValidateWait(int (__stdcall ***this)(PVOID BaseAddress), int a2)
{
  if ( TppValidateCleanupGroupMember()
    && this[1] == &TppWaitpCleanupGroupMemberVFuncs
    && !NtCurrentPeb()->Ldr->ShutdownInProgress )
  {
    return 1;
  }
  if ( a2 || !NtCurrentPeb()->Ldr->ShutdownInProgress )
    TppRaiseInvalidParameter();
  return 0;
}
