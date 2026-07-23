/*
 * XREFs of TpPostWork @ 0x1800128C0
 * Callers:
 *     RtlRegisterFeatureConfigurationChangeNotification @ 0x1800093B0 (RtlRegisterFeatureConfigurationChangeNotification.c)
 *     LdrpQueueWork @ 0x18000F420 (LdrpQueueWork.c)
 *     RtlpFcWnfCallback @ 0x180101FF0 (RtlpFcWnfCallback.c)
 *     RtlRaiseCustomSystemEventTrigger @ 0x180102270 (RtlRaiseCustomSystemEventTrigger.c)
 * Callees:
 *     TppValidateCleanupGroupMember @ 0x18001298C (TppValidateCleanupGroupMember.c)
 */

void __cdecl TpPostWork(PTP_WORK Work)
{
  __int64 v1; // rdx
  __int64 v2; // r8
  __int64 v3; // r9

  if ( Work
    && (unsigned int)TppValidateCleanupGroupMember(Work, 0LL, v2)
    && *(__int64 (__fastcall ***)(PVOID))(v3 + 8) == &TppWorkpCleanupGroupMemberVFuncs
    && (Work = (PTP_WORK)NtCurrentPeb()->Ldr, *((_BYTE *)Work + 72) == (_BYTE)v1) )
  {
    TppWorkPost(v3);
  }
  else
  {
    TppRaiseInvalidParameter(Work, v1, v2);
  }
}
