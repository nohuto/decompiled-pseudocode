/*
 * XREFs of RIMCmRemoveContactSuppressionReasons @ 0x1C0180EC8
 * Callers:
 *     rimAbUpdateDeadzonesAndResurrectContacts @ 0x1C015CA24 (rimAbUpdateDeadzonesAndResurrectContacts.c)
 *     rimConfidenceBitPolicyUpdateStateAndApply @ 0x1C017A6A4 (rimConfidenceBitPolicyUpdateStateAndApply.c)
 *     rimDigitizerActiveBitPolicyUpdateStateAndApply @ 0x1C017A928 (rimDigitizerActiveBitPolicyUpdateStateAndApply.c)
 *     rimNullXYPolicyUpdateStateAndApply @ 0x1C017CB20 (rimNullXYPolicyUpdateStateAndApply.c)
 *     rimOutOfBoundsPolicyUpdateStateAndApply @ 0x1C017CC20 (rimOutOfBoundsPolicyUpdateStateAndApply.c)
 * Callees:
 *     ?SuppressContact@RIM@InputTraceLogging@@SAXPEBURIMDEV@@KKK_N@Z @ 0x1C0180558 (-SuppressContact@RIM@InputTraceLogging@@SAXPEBURIMDEV@@KKK_N@Z.c)
 *     RIMCmIsContactSuppressed @ 0x1C0180E4C (RIMCmIsContactSuppressed.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C01FBBDC (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

_BOOL8 __fastcall RIMCmRemoveContactSuppressionReasons(__int64 a1, unsigned int *a2, __int64 a3, __int64 a4)
{
  unsigned int v5; // ebp
  BOOL IsContactSuppressed; // eax
  __int64 v8; // rdx
  __int64 v9; // r8
  __int64 v10; // r9
  BOOL v11; // ebx
  unsigned int v12; // r14d
  BOOL v13; // r15d
  unsigned int v14; // ecx
  __int64 v15; // rcx

  v5 = a3;
  IsContactSuppressed = RIMCmIsContactSuppressed((__int64)a2, (__int64)a2, a3, a4);
  v10 = a2[8];
  v11 = 0;
  v12 = a2[2];
  v13 = IsContactSuppressed;
  v14 = v12;
  if ( (v10 & 2) == 0 )
  {
    MicrosoftTelemetryAssertTriggeredNoArgsKM(v12, v8, v9, v10);
    v14 = a2[2];
  }
  a2[2] = v14 & ~v5;
  if ( v13 && !RIMCmIsContactSuppressed((__int64)a2, v8, v9, v10) )
  {
    v11 = 1;
    ++*(_DWORD *)(a1 + 956);
  }
  if ( (v12 & v5) != 0 )
    InputTraceLogging::RIM::SuppressContact(*(const struct RIMDEV **)(a1 + 16), a2[1], v5, a2[2], v11);
  v15 = *(unsigned int *)(a1 + 956);
  if ( *(_DWORD *)(a1 + 952) < (unsigned int)v15 )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(v15, v8, v9, v10);
  return v11;
}
