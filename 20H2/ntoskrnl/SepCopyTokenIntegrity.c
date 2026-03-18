/*
 * XREFs of SepCopyTokenIntegrity @ 0x14023D638
 * Callers:
 *     SeQueryTokenIntegrity @ 0x14023D358 (SeQueryTokenIntegrity.c)
 *     AuthzBasepQueryTokenAttributeAndValues @ 0x1405BFBBC (AuthzBasepQueryTokenAttributeAndValues.c)
 *     SeTokenCanImpersonate @ 0x140606E90 (SeTokenCanImpersonate.c)
 *     SeQueryInformationToken @ 0x14060D9F0 (SeQueryInformationToken.c)
 *     NtQueryInformationToken @ 0x14061D520 (NtQueryInformationToken.c)
 *     SepValidLabelSubjectContext @ 0x1406305E4 (SepValidLabelSubjectContext.c)
 *     SepAdjustPrivileges @ 0x140630CB0 (SepAdjustPrivileges.c)
 *     SeIsTokenAssignableToProcess @ 0x1406D0B80 (SeIsTokenAssignableToProcess.c)
 * Callees:
 *     SepLocateTokenIntegrity @ 0x14020F958 (SepLocateTokenIntegrity.c)
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
