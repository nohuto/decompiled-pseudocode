/*
 * XREFs of HUBDSM_LoggingResetTimeoutInResettingFor30 @ 0x1C001E7E0
 * Callers:
 *     <none>
 * Callees:
 *     HUBMISC_LogResetTimeout @ 0x1C003136C (HUBMISC_LogResetTimeout.c)
 */

__int64 __fastcall HUBDSM_LoggingResetTimeoutInResettingFor30(__int64 a1)
{
  HUBMISC_LogResetTimeout(*(_QWORD *)(a1 + 960));
  return 4077LL;
}
