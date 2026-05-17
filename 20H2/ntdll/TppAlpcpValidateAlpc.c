/*
 * XREFs of TppAlpcpValidateAlpc @ 0x18007974C
 * Callers:
 *     TpAlpcRegisterCompletionList @ 0x180079510 (TpAlpcRegisterCompletionList.c)
 *     TpAlpcUnregisterCompletionList @ 0x180079600 (TpAlpcUnregisterCompletionList.c)
 *     TpWaitForAlpcCompletion @ 0x180079640 (TpWaitForAlpcCompletion.c)
 *     TpReleaseAlpcCompletion @ 0x1800796E0 (TpReleaseAlpcCompletion.c)
 * Callees:
 *     TppValidateCleanupGroupMember @ 0x18001298C (TppValidateCleanupGroupMember.c)
 *     TppRaiseInvalidParameter @ 0x18011263C (TppRaiseInvalidParameter.c)
 */

__int64 __fastcall TppAlpcpValidateAlpc(_PEB_LDR_DATA *Ldr, __int64 a2, __int64 a3)
{
  int v3; // r10d
  _PEB_LDR_DATA *v4; // r9
  int v5; // eax

  v3 = a3;
  v4 = Ldr;
  if ( Ldr )
  {
    LOBYTE(v5) = TppValidateCleanupGroupMember((__int64)&Ldr->ShutdownInProgress, a2);
    if ( v5 )
    {
      if ( v4->ShutdownThreadId == TppAlpcpCleanupGroupMemberVFuncs )
      {
        Ldr = NtCurrentPeb()->Ldr;
        if ( !Ldr->ShutdownInProgress )
          return 1LL;
      }
    }
  }
  if ( v3 || (Ldr = NtCurrentPeb()->Ldr, !Ldr->ShutdownInProgress) )
    TppRaiseInvalidParameter(Ldr, a2, a3, v4);
  return 0LL;
}
