/*
 * XREFs of SepCopyTokenIntegrity @ 0x1402D7648
 * Callers:
 *     SeQueryTokenIntegrity @ 0x1402D799C (SeQueryTokenIntegrity.c)
 *     AuthzBasepQueryTokenAttributeAndValues @ 0x1405BB93C (AuthzBasepQueryTokenAttributeAndValues.c)
 *     SeQueryInformationToken @ 0x1405E9F20 (SeQueryInformationToken.c)
 *     NtQueryInformationToken @ 0x140606BA0 (NtQueryInformationToken.c)
 *     SeTokenCanImpersonate @ 0x140609600 (SeTokenCanImpersonate.c)
 *     SepValidLabelSubjectContext @ 0x14066FAE8 (SepValidLabelSubjectContext.c)
 *     SepAdjustPrivileges @ 0x1406701B0 (SepAdjustPrivileges.c)
 *     SeIsTokenAssignableToProcess @ 0x1406C7DCC (SeIsTokenAssignableToProcess.c)
 * Callees:
 *     SepLocateTokenIntegrity @ 0x140257FA8 (SepLocateTokenIntegrity.c)
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
