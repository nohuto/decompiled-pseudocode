/*
 * XREFs of _TpPostWork@4 @ 0x4B2C1B30
 * Callers:
 *     _RtlRegisterFeatureConfigurationChangeNotification@16 @ 0x4B2B23D0 (_RtlRegisterFeatureConfigurationChangeNotification@16.c)
 *     _LdrpQueueWork@4 @ 0x4B2DE91E (_LdrpQueueWork@4.c)
 *     _RtlpFcCallChangeCallbacks@4 @ 0x4B369846 (_RtlpFcCallChangeCallbacks@4.c)
 *     _RtlRaiseCustomSystemEventTrigger@4 @ 0x4B369C20 (_RtlRaiseCustomSystemEventTrigger@4.c)
 * Callees:
 *     _TppValidateCleanupGroupMember@8 @ 0x4B2C1B74 (_TppValidateCleanupGroupMember@8.c)
 *     _TppWorkPost@4 @ 0x4B2C1B97 (_TppWorkPost@4.c)
 *     _TppRaiseInvalidParameter@0 @ 0x4B3848BD (_TppRaiseInvalidParameter@0.c)
 */

int __stdcall TpPostWork(int a1)
{
  char v1; // dl

  if ( !a1
    || !TppValidateCleanupGroupMember(a1, 0)
    || *(int (__stdcall ***)(int))(a1 + 4) != TppWorkpCleanupGroupMemberVFuncs
    || NtCurrentPeb()->Ldr->ShutdownInProgress != v1 )
  {
    TppRaiseInvalidParameter();
  }
  return TppWorkPost(a1);
}
