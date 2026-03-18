/*
 * XREFs of SepLocateTokenIntegrity @ 0x14020F958
 * Callers:
 *     SepCopyTokenIntegrity @ 0x14023D638 (SepCopyTokenIntegrity.c)
 *     SepMandatorySubProcessToken @ 0x1402E37EC (SepMandatorySubProcessToken.c)
 *     RtlpNewSecurityObject @ 0x140602BE0 (RtlpNewSecurityObject.c)
 *     NtSetInformationToken @ 0x1406AB220 (NtSetInformationToken.c)
 *     NtCreateLowBoxToken @ 0x1406FB890 (NtCreateLowBoxToken.c)
 *     SepGetDefaultsSubjectContext @ 0x140923848 (SepGetDefaultsSubjectContext.c)
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
