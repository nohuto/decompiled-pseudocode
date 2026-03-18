/*
 * XREFs of RIMCmAddContactSuppressionReasons @ 0x1C017E5B8
 * Callers:
 *     rimAbSuppressLowerRankActivityForFrame @ 0x1C0159DEC (rimAbSuppressLowerRankActivityForFrame.c)
 *     rimAbSuppressLowerRankActivityInFrame @ 0x1C015A1A4 (rimAbSuppressLowerRankActivityInFrame.c)
 *     RIMSuppressAllActiveContacts @ 0x1C015FD74 (RIMSuppressAllActiveContacts.c)
 *     rimApplyPointerDevicePolicies @ 0x1C0178004 (rimApplyPointerDevicePolicies.c)
 *     rimConfidenceBitPolicyUpdateStateAndApply @ 0x1C0178274 (rimConfidenceBitPolicyUpdateStateAndApply.c)
 *     rimDigitizerActiveBitPolicyUpdateStateAndApply @ 0x1C01784F8 (rimDigitizerActiveBitPolicyUpdateStateAndApply.c)
 *     rimDisplayOffPolicyUpdateStateAndApply @ 0x1C01785AC (rimDisplayOffPolicyUpdateStateAndApply.c)
 *     rimLidClosedPolicyUpdateStateAndApply @ 0x1C017A64C (rimLidClosedPolicyUpdateStateAndApply.c)
 *     rimNullXYPolicyUpdateStateAndApply @ 0x1C017A6F0 (rimNullXYPolicyUpdateStateAndApply.c)
 *     rimOutOfBoundsPolicyUpdateStateAndApply @ 0x1C017A7F0 (rimOutOfBoundsPolicyUpdateStateAndApply.c)
 * Callees:
 *     ?SuppressContact@RIM@InputTraceLogging@@SAXPEBURIMDEV@@KKK_N@Z @ 0x1C017E128 (-SuppressContact@RIM@InputTraceLogging@@SAXPEBURIMDEV@@KKK_N@Z.c)
 *     RIMCmIsContactSuppressed @ 0x1C017EA1C (RIMCmIsContactSuppressed.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C01FA2AC (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

_BOOL8 __fastcall RIMCmAddContactSuppressionReasons(__int64 a1, unsigned int *a2, unsigned int a3)
{
  int IsContactSuppressed; // eax
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // r8
  __int64 v10; // r9
  BOOL v11; // ebx
  unsigned int v12; // r14d
  int v13; // r15d
  __int64 v14; // rcx
  int v15; // eax
  __int64 v16; // rcx

  IsContactSuppressed = RIMCmIsContactSuppressed(a2);
  v10 = a2[8];
  v11 = 0;
  v12 = a2[2];
  v13 = IsContactSuppressed;
  if ( (v10 & 2) == 0 )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(v8, v7, v9, v10);
  if ( !a3 )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(v8, v7, v9, v10);
  a2[2] |= a3;
  if ( !v13 && (unsigned int)RIMCmIsContactSuppressed(a2) )
  {
    v15 = *(_DWORD *)(a1 + 956);
    if ( !v15 )
    {
      MicrosoftTelemetryAssertTriggeredNoArgsKM(v14, v7, v9, v10);
      v15 = *(_DWORD *)(a1 + 956);
    }
    v11 = 1;
    *(_DWORD *)(a1 + 956) = v15 - 1;
  }
  if ( (a3 & v12) != a3 )
    InputTraceLogging::RIM::SuppressContact(*(const struct RIMDEV **)(a1 + 16), a2[1], a3, a2[2], v11);
  v16 = *(unsigned int *)(a1 + 956);
  if ( *(_DWORD *)(a1 + 952) < (unsigned int)v16 )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(v16, v7, v9, v10);
  return v11;
}
