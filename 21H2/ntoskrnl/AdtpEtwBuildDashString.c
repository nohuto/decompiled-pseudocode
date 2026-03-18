/*
 * XREFs of AdtpEtwBuildDashString @ 0x1406EB810
 * Callers:
 *     AdtpPackageParameters @ 0x1403CC5E8 (AdtpPackageParameters.c)
 *     AdtpBuildMultiSzStringListString @ 0x1403CCB34 (AdtpBuildMultiSzStringListString.c)
 *     AdtpBuildAccessReasonAuditString @ 0x14064B46C (AdtpBuildAccessReasonAuditString.c)
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
