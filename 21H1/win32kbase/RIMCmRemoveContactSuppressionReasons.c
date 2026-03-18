/*
 * XREFs of RIMCmRemoveContactSuppressionReasons @ 0x1C0186BC8
 * Callers:
 *     rimAbUpdateDeadzonesAndResurrectContacts @ 0x1C0162D74 (rimAbUpdateDeadzonesAndResurrectContacts.c)
 *     rimConfidenceBitPolicyUpdateStateAndApply @ 0x1C01803A4 (rimConfidenceBitPolicyUpdateStateAndApply.c)
 *     rimDigitizerActiveBitPolicyUpdateStateAndApply @ 0x1C0180628 (rimDigitizerActiveBitPolicyUpdateStateAndApply.c)
 *     rimNullXYPolicyUpdateStateAndApply @ 0x1C0182820 (rimNullXYPolicyUpdateStateAndApply.c)
 *     rimOutOfBoundsPolicyUpdateStateAndApply @ 0x1C0182920 (rimOutOfBoundsPolicyUpdateStateAndApply.c)
 * Callees:
 *     ?SuppressContact@RIM@InputTraceLogging@@SAXPEBURIMDEV@@KKK_N@Z @ 0x1C0186258 (-SuppressContact@RIM@InputTraceLogging@@SAXPEBURIMDEV@@KKK_N@Z.c)
 *     RIMCmIsContactSuppressed @ 0x1C0186B4C (RIMCmIsContactSuppressed.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C02015EC (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

_BOOL8 __fastcall RIMCmRemoveContactSuppressionReasons(__int64 a1, unsigned int *a2, unsigned int a3)
{
  BOOL IsContactSuppressed; // eax
  BOOL v7; // ebx
  unsigned int v8; // r14d
  BOOL v9; // r15d
  unsigned int v10; // ecx
  __int64 v11; // rcx

  IsContactSuppressed = RIMCmIsContactSuppressed((__int64)a2);
  v7 = 0;
  v8 = a2[2];
  v9 = IsContactSuppressed;
  v10 = v8;
  if ( (a2[8] & 2) == 0 )
  {
    MicrosoftTelemetryAssertTriggeredNoArgsKM(v8);
    v10 = a2[2];
  }
  a2[2] = v10 & ~a3;
  if ( v9 && !RIMCmIsContactSuppressed((__int64)a2) )
  {
    v7 = 1;
    ++*(_DWORD *)(a1 + 956);
  }
  if ( (v8 & a3) != 0 )
    InputTraceLogging::RIM::SuppressContact(*(const struct RIMDEV **)(a1 + 16), a2[1], a3, a2[2], v7);
  v11 = *(unsigned int *)(a1 + 956);
  if ( *(_DWORD *)(a1 + 952) < (unsigned int)v11 )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(v11);
  return v7;
}
