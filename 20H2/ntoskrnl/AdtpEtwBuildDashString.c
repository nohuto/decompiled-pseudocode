/*
 * XREFs of AdtpEtwBuildDashString @ 0x1406E4100
 * Callers:
 *     AdtpPackageParameters @ 0x1403BFE64 (AdtpPackageParameters.c)
 *     AdtpBuildMultiSzStringListString @ 0x1403C03B0 (AdtpBuildMultiSzStringListString.c)
 *     AdtpBuildAccessReasonAuditString @ 0x1405C0ADC (AdtpBuildAccessReasonAuditString.c)
 * Callees:
 *     <none>
 */

const char *__fastcall AdtpEtwBuildDashString(__int64 a1)
{
  const char *result; // rax

  *(_DWORD *)(a1 + 12) = 0;
  result = "-";
  *(_QWORD *)a1 = "-";
  *(_DWORD *)(a1 + 8) = 4;
  return result;
}
