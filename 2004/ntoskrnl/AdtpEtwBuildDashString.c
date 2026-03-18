/*
 * XREFs of AdtpEtwBuildDashString @ 0x1407115C0
 * Callers:
 *     AdtpPackageParameters @ 0x1403BD944 (AdtpPackageParameters.c)
 *     AdtpBuildMultiSzStringListString @ 0x1403BDE90 (AdtpBuildMultiSzStringListString.c)
 *     AdtpBuildAccessReasonAuditString @ 0x1405BCF7C (AdtpBuildAccessReasonAuditString.c)
 * Callees:
 *     <none>
 */

const wchar_t *__fastcall AdtpEtwBuildDashString(__int64 a1)
{
  const wchar_t *result; // rax

  *(_DWORD *)(a1 + 12) = 0;
  result = L"-";
  *(_QWORD *)a1 = L"-";
  *(_DWORD *)(a1 + 8) = 4;
  return result;
}
