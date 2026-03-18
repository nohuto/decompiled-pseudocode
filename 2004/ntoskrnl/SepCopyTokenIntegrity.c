/*
 * XREFs of SepCopyTokenIntegrity @ 0x14026A848
 * Callers:
 *     SeQueryTokenIntegrity @ 0x14035D124 (SeQueryTokenIntegrity.c)
 *     AuthzBasepQueryTokenAttributeAndValues @ 0x1405BC05C (AuthzBasepQueryTokenAttributeAndValues.c)
 *     SepValidLabelSubjectContext @ 0x1406183C8 (SepValidLabelSubjectContext.c)
 *     SepAdjustPrivileges @ 0x140618A90 (SepAdjustPrivileges.c)
 *     NtQueryInformationToken @ 0x14067EC80 (NtQueryInformationToken.c)
 *     SeTokenCanImpersonate @ 0x1406816E0 (SeTokenCanImpersonate.c)
 *     SeQueryInformationToken @ 0x140693460 (SeQueryInformationToken.c)
 *     SeIsTokenAssignableToProcess @ 0x1406E848C (SeIsTokenAssignableToProcess.c)
 * Callees:
 *     SepLocateTokenIntegrity @ 0x140294828 (SepLocateTokenIntegrity.c)
 */

__int64 __fastcall SepCopyTokenIntegrity(__int64 a1)
{
  __int64 TokenIntegrity; // rax
  __int64 v2; // rdx
  __int64 result; // rax

  TokenIntegrity = SepLocateTokenIntegrity(a1);
  if ( TokenIntegrity )
  {
    *(_QWORD *)v2 = *(_QWORD *)TokenIntegrity;
    result = *(unsigned int *)(TokenIntegrity + 8);
  }
  else
  {
    *(_QWORD *)v2 = SeUntrustedMandatorySid;
    result = 96LL;
  }
  *(_DWORD *)(v2 + 8) = result;
  return result;
}
