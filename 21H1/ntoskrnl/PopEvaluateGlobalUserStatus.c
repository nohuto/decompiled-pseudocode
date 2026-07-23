/*
 * XREFs of PopEvaluateGlobalUserStatus @ 0x1406FEC90
 * Callers:
 *     PopSetSessionUserStatus @ 0x1406FEBAC (PopSetSessionUserStatus.c)
 *     PopUserPresentOverride @ 0x1408F0CA0 (PopUserPresentOverride.c)
 * Callees:
 *     RtlNumberOfSetBits @ 0x1402E13C0 (RtlNumberOfSetBits.c)
 *     PopPrintEx @ 0x14033C680 (PopPrintEx.c)
 *     PopUmpoSendPowerMessage @ 0x14033D078 (PopUmpoSendPowerMessage.c)
 *     ZwUpdateWnfStateData @ 0x1403F5CF0 (ZwUpdateWnfStateData.c)
 *     memset @ 0x140408F80 (memset.c)
 *     PopDiagTraceSessionStateCounted @ 0x1406FE930 (PopDiagTraceSessionStateCounted.c)
 *     PopPrintUserActivityPresence @ 0x1406FEDC0 (PopPrintUserActivityPresence.c)
 *     PopSetPowerSettingValueAcDc @ 0x14070E5A8 (PopSetPowerSettingValueAcDc.c)
 */

void PopEvaluateGlobalUserStatus()
{
  unsigned int v0; // ebx
  const wchar_t *v1; // rax
  int v2; // r9d
  __int64 v3; // rdx
  __int64 v4; // rcx
  _DWORD Src[20]; // [rsp+40h] [rbp+7h] BYREF
  int Buffer; // [rsp+A8h] [rbp+6Fh] BYREF
  int v7; // [rsp+ACh] [rbp+73h]

  if ( PopUserPresentOverrideCount || !PopMaximumConnectionSessions )
    v0 = 0;
  else
    v0 = RtlNumberOfSetBits(&PopConnectionBitmap) == 0 ? 2 : 0;
  if ( v0 != PopGlobalUserPresenceState )
  {
    ++PopGlobalUserPresenceStateTransitions;
    PopGlobalUserPresenceState = v0;
    v1 = (const wchar_t *)PopPrintUserActivityPresence(v0);
    PopPrintEx(3u, (__int64)"PopAdaptive: Global user presence/activity state: %S id: %I32u\n", v1, v2);
    PopDiagTraceSessionStateCounted(v4, v3, v0);
    PopSetPowerSettingValueAcDc(&GUID_GLOBAL_USER_PRESENCE);
    if ( v0 )
    {
      Buffer = 1;
      memset(Src, 0, 0x48uLL);
      Src[2] = 1;
    }
    else
    {
      Buffer = 0;
      memset(Src, 0, 0x48uLL);
      Src[2] = 0;
    }
    Src[0] = 12;
    PopUmpoSendPowerMessage(Src, 0x48uLL, 0);
    v7 = PopGlobalUserPresenceStateTransitions;
    ZwUpdateWnfStateData(&WNF_PO_SLEEP_STUDY_USER_PRESENCE_CHANGED, &Buffer, 8u, 0LL, 0LL, 0, 0);
  }
}
