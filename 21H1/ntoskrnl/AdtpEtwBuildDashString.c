/*
 * XREFs of AdtpEtwBuildDashString @ 0x1406EDC30
 * Callers:
 *     AdtpPackageParameters @ 0x1403BC9B4 (AdtpPackageParameters.c)
 *     AdtpBuildMultiSzStringListString @ 0x1403BCF00 (AdtpBuildMultiSzStringListString.c)
 *     AdtpBuildAccessReasonAuditString @ 0x1405BC85C (AdtpBuildAccessReasonAuditString.c)
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
