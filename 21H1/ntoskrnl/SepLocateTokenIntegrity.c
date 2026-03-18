/*
 * XREFs of SepLocateTokenIntegrity @ 0x140257FA8
 * Callers:
 *     SepCopyTokenIntegrity @ 0x1402D7648 (SepCopyTokenIntegrity.c)
 *     SepMandatorySubProcessToken @ 0x1403395EC (SepMandatorySubProcessToken.c)
 *     RtlpNewSecurityObject @ 0x140602F70 (RtlpNewSecurityObject.c)
 *     NtSetInformationToken @ 0x1406F7D00 (NtSetInformationToken.c)
 *     NtCreateLowBoxToken @ 0x14070D200 (NtCreateLowBoxToken.c)
 *     SepGetDefaultsSubjectContext @ 0x14091C918 (SepGetDefaultsSubjectContext.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall SepLocateTokenIntegrity(__int64 a1)
{
  __int64 v1; // rax

  v1 = *(unsigned int *)(a1 + 208);
  if ( (_DWORD)v1 == -1 )
    return 0LL;
  else
    return *(_QWORD *)(a1 + 152) + 16 * v1;
}
