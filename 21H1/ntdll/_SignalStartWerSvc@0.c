/*
 * XREFs of _SignalStartWerSvc@0 @ 0x4B33AD08
 * Callers:
 *     _SendMessageToWERService@8 @ 0x4B33AB80 (_SendMessageToWERService@8.c)
 * Callees:
 *     _EtwEventWriteNoRegistration@16 @ 0x4B2ABD30 (_EtwEventWriteNoRegistration@16.c)
 *     _NtQueryWnfStateNameInformation@20 @ 0x4B2F3FC0 (_NtQueryWnfStateNameInformation@20.c)
 *     _NtUpdateWnfStateData@28 @ 0x4B2F4660 (_NtUpdateWnfStateData@28.c)
 */

int __stdcall SignalStartWerSvc()
{
  int v0; // esi
  EVENT_DESCRIPTOR EventDescriptor; // [esp+10h] [ebp-18h] BYREF
  int InfoBuffer; // [esp+24h] [ebp-4h] BYREF

  v0 = 0;
  if ( NtQueryWnfStateNameInformation(&WNF_WER_SERVICE_START, WnfInfoSubscribersPresent, 0, &InfoBuffer, 4u) >= 0
    && InfoBuffer )
  {
    v0 = NtUpdateWnfStateData(&WNF_WER_SERVICE_START, 0, 0, 0, 0, 0, 0) >= 0;
  }
  memset(&EventDescriptor, 0, sizeof(EventDescriptor));
  if ( !EtwEventWriteNoRegistration(&`SignalStartWerSvc'::`2'::WerSvcTriggerGuid, &EventDescriptor, 0, 0) )
    ++v0;
  return v0 != 0 ? 0 : -1073741696;
}
