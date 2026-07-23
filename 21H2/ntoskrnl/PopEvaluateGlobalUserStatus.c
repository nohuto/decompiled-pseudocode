/*
 * XREFs of PopEvaluateGlobalUserStatus @ 0x140671854
 * Callers:
 *     PopSetSessionUserStatus @ 0x140671770 (PopSetSessionUserStatus.c)
 *     PopUserPresentOverride @ 0x1408F54E0 (PopUserPresentOverride.c)
 * Callees:
 *     PopUmpoSendPowerMessage @ 0x140270CF4 (PopUmpoSendPowerMessage.c)
 *     PopPrintEx @ 0x140272730 (PopPrintEx.c)
 *     RtlNumberOfSetBits @ 0x140274DA0 (RtlNumberOfSetBits.c)
 *     ZwUpdateWnfStateData @ 0x1403FDF80 (ZwUpdateWnfStateData.c)
 *     memset @ 0x140414300 (memset.c)
 *     PopSetPowerSettingValueAcDc @ 0x14066D5A8 (PopSetPowerSettingValueAcDc.c)
 *     PopPrintUserActivityPresence @ 0x140671A34 (PopPrintUserActivityPresence.c)
 *     PopDiagTraceSessionStateCounted @ 0x140671B9C (PopDiagTraceSessionStateCounted.c)
 */

void PopEvaluateGlobalUserStatus()
{
  unsigned int v0; // ebx
  const wchar_t *v1; // rax
  int v2; // r9d
  __int64 v3; // rdx
  __int64 v4; // rcx
  _DWORD Src[20]; // [rsp+40h] [rbp+7h] BYREF
  unsigned int v6; // [rsp+A0h] [rbp+67h] BYREF
  int Buffer; // [rsp+A8h] [rbp+6Fh] BYREF
  int v8; // [rsp+ACh] [rbp+73h]

  if ( PopUserPresentOverrideCount || !PopMaximumConnectionSessions )
    v0 = 0;
  else
    v0 = RtlNumberOfSetBits(&PopConnectionBitmap) == 0 ? 2 : 0;
  if ( v0 != PopGlobalUserPresenceState )
  {
    v6 = v0;
    ++PopGlobalUserPresenceStateTransitions;
    PopGlobalUserPresenceState = v0;
    v1 = (const wchar_t *)PopPrintUserActivityPresence(v0);
    PopPrintEx(3u, (__int64)"PopAdaptive: Global user presence/activity state: %S id: %I32u\n", v1, v2);
    PopDiagTraceSessionStateCounted(v4, v3, v0);
    PopSetPowerSettingValueAcDc(&GUID_GLOBAL_USER_PRESENCE, 4LL, &v6);
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
    v8 = PopGlobalUserPresenceStateTransitions;
    ZwUpdateWnfStateData(&WNF_PO_SLEEP_STUDY_USER_PRESENCE_CHANGED, &Buffer, 8u, 0LL, 0LL, 0, 0);
  }
}
