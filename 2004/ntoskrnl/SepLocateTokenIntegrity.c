/*
 * XREFs of SepLocateTokenIntegrity @ 0x140294828
 * Callers:
 *     SepMandatorySubProcessToken @ 0x1402698EC (SepMandatorySubProcessToken.c)
 *     SepCopyTokenIntegrity @ 0x14026A848 (SepCopyTokenIntegrity.c)
 *     RtlpNewSecurityObject @ 0x14067B050 (RtlpNewSecurityObject.c)
 *     NtSetInformationToken @ 0x1406B9BC0 (NtSetInformationToken.c)
 *     NtCreateLowBoxToken @ 0x1406BAFC0 (NtCreateLowBoxToken.c)
 *     SepGetDefaultsSubjectContext @ 0x14091DBC8 (SepGetDefaultsSubjectContext.c)
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
