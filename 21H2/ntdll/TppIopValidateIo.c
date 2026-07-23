/*
 * XREFs of TppIopValidateIo @ 0x180012858
 * Callers:
 *     TpStartAsyncIoOperation @ 0x1800127E0 (TpStartAsyncIoOperation.c)
 *     TpCancelAsyncIoOperation @ 0x180079C00 (TpCancelAsyncIoOperation.c)
 *     TpReleaseIoCompletion @ 0x18007CDA0 (TpReleaseIoCompletion.c)
 *     TpWaitForIoCompletion @ 0x180085350 (TpWaitForIoCompletion.c)
 * Callees:
 *     TppValidateCleanupGroupMember @ 0x18001298C (TppValidateCleanupGroupMember.c)
 *     TppRaiseInvalidParameter @ 0x18011249C (TppRaiseInvalidParameter.c)
 */

__int64 __fastcall TppIopValidateIo(_PEB_LDR_DATA *Ldr, __int64 a2, __int64 a3)
{
  int v3; // r10d
  __int64 v4; // r9

  v3 = a3;
  if ( Ldr )
  {
    if ( (unsigned int)TppValidateCleanupGroupMember(Ldr, a2, a3, Ldr) )
    {
      if ( *(__int64 (__fastcall ***)(PVOID))(v4 + 8) == &TppIopCleanupGroupMemberVFuncs )
      {
        Ldr = NtCurrentPeb()->Ldr;
        if ( !Ldr->ShutdownInProgress )
          return 1LL;
      }
    }
  }
  if ( v3 || (Ldr = NtCurrentPeb()->Ldr, !Ldr->ShutdownInProgress) )
    TppRaiseInvalidParameter(Ldr, a2, a3);
  return 0LL;
}
