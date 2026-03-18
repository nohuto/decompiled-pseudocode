/*
 * XREFs of RIMCmAddContactSuppressionReasons @ 0x1C01866E8
 * Callers:
 *     rimAbSuppressLowerRankActivityForFrame @ 0x1C016269C (rimAbSuppressLowerRankActivityForFrame.c)
 *     rimAbSuppressLowerRankActivityInFrame @ 0x1C0162A54 (rimAbSuppressLowerRankActivityInFrame.c)
 *     RIMSuppressAllActiveContacts @ 0x1C0168624 (RIMSuppressAllActiveContacts.c)
 *     rimApplyPointerDevicePolicies @ 0x1C0180134 (rimApplyPointerDevicePolicies.c)
 *     rimConfidenceBitPolicyUpdateStateAndApply @ 0x1C01803A4 (rimConfidenceBitPolicyUpdateStateAndApply.c)
 *     rimDigitizerActiveBitPolicyUpdateStateAndApply @ 0x1C0180628 (rimDigitizerActiveBitPolicyUpdateStateAndApply.c)
 *     rimDisplayOffPolicyUpdateStateAndApply @ 0x1C01806DC (rimDisplayOffPolicyUpdateStateAndApply.c)
 *     rimLidClosedPolicyUpdateStateAndApply @ 0x1C018277C (rimLidClosedPolicyUpdateStateAndApply.c)
 *     rimNullXYPolicyUpdateStateAndApply @ 0x1C0182820 (rimNullXYPolicyUpdateStateAndApply.c)
 *     rimOutOfBoundsPolicyUpdateStateAndApply @ 0x1C0182920 (rimOutOfBoundsPolicyUpdateStateAndApply.c)
 * Callees:
 *     ?SuppressContact@RIM@InputTraceLogging@@SAXPEBURIMDEV@@KKK_N@Z @ 0x1C0186258 (-SuppressContact@RIM@InputTraceLogging@@SAXPEBURIMDEV@@KKK_N@Z.c)
 *     RIMCmIsContactSuppressed @ 0x1C0186B4C (RIMCmIsContactSuppressed.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C02015EC (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

_BOOL8 __fastcall RIMCmAddContactSuppressionReasons(__int64 a1, unsigned int *a2, unsigned int a3)
{
  int IsContactSuppressed; // eax
  __int64 v7; // rcx
  BOOL v8; // ebx
  unsigned int v9; // r14d
  int v10; // r15d
  __int64 v11; // rcx
  int v12; // eax
  __int64 v13; // rcx

  IsContactSuppressed = RIMCmIsContactSuppressed(a2);
  v8 = 0;
  v9 = a2[2];
  v10 = IsContactSuppressed;
  if ( (a2[8] & 2) == 0 )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(v7);
  if ( !a3 )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(v7);
  a2[2] |= a3;
  if ( !v10 && (unsigned int)RIMCmIsContactSuppressed(a2) )
  {
    v12 = *(_DWORD *)(a1 + 956);
    if ( !v12 )
    {
      MicrosoftTelemetryAssertTriggeredNoArgsKM(v11);
      v12 = *(_DWORD *)(a1 + 956);
    }
    v8 = 1;
    *(_DWORD *)(a1 + 956) = v12 - 1;
  }
  if ( (a3 & v9) != a3 )
    InputTraceLogging::RIM::SuppressContact(*(const struct RIMDEV **)(a1 + 16), a2[1], a3, a2[2], v8);
  v13 = *(unsigned int *)(a1 + 956);
  if ( *(_DWORD *)(a1 + 952) < (unsigned int)v13 )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(v13);
  return v8;
}
