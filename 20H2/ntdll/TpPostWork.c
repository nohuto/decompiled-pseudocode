/*
 * XREFs of TpPostWork @ 0x1800128C0
 * Callers:
 *     RtlRegisterFeatureConfigurationChangeNotification @ 0x1800093B0 (RtlRegisterFeatureConfigurationChangeNotification.c)
 *     LdrpQueueWork @ 0x18000F420 (LdrpQueueWork.c)
 *     RtlpFcWnfCallback @ 0x180102190 (RtlpFcWnfCallback.c)
 *     RtlRaiseCustomSystemEventTrigger @ 0x180102410 (RtlRaiseCustomSystemEventTrigger.c)
 * Callees:
 *     TppValidateCleanupGroupMember @ 0x18001298C (TppValidateCleanupGroupMember.c)
 */

__int64 __fastcall TpPostWork(_PEB_LDR_DATA *Ldr, __int64 a2, __int64 a3)
{
  _PEB_LDR_DATA *v3; // r9

  v3 = Ldr;
  if ( Ldr
    && (unsigned int)TppValidateCleanupGroupMember(Ldr, 0LL, a3, Ldr)
    && v3->SsHandle == TppWorkpCleanupGroupMemberVFuncs
    && (Ldr = NtCurrentPeb()->Ldr, Ldr->ShutdownInProgress == (_BYTE)a2) )
  {
    return TppWorkPost(v3);
  }
  else
  {
    return TppRaiseInvalidParameter(Ldr, a2, a3, v3);
  }
}
