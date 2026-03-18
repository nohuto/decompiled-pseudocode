/*
 * XREFs of SepIdAssignableAsOwner @ 0x1406EDEBC
 * Callers:
 *     NtSetInformationToken @ 0x1406B9BC0 (NtSetInformationToken.c)
 *     SepValidOwnerSubjectContext @ 0x1406EDDBC (SepValidOwnerSubjectContext.c)
 * Callees:
 *     <none>
 */

bool __fastcall SepIdAssignableAsOwner(__int64 a1, unsigned int a2)
{
  return !a2 || (*(_DWORD *)(*(_QWORD *)(a1 + 152) + 16LL * a2 + 8) & 8) != 0;
}
