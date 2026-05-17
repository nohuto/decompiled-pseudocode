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
  int v2[5]; // [esp+10h] [ebp-18h] BYREF
  int v3; // [esp+24h] [ebp-4h] BYREF

  v0 = 0;
  if ( NtQueryWnfStateNameInformation((int)WNF_WER_SERVICE_START, 1, 0, (int)&v3, 4) >= 0 && v3 )
    v0 = NtUpdateWnfStateData((int)WNF_WER_SERVICE_START, 0, 0, 0, 0, 0, 0) >= 0;
  memset(v2, 0, 16);
  if ( !EtwEventWriteNoRegistration((int)`SignalStartWerSvc'::`2'::WerSvcTriggerGuid, v2, 0, 0) )
    ++v0;
  return v0 != 0 ? 0 : -1073741696;
}
