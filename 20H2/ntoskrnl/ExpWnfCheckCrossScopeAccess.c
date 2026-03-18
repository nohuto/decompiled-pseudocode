/*
 * XREFs of ExpWnfCheckCrossScopeAccess @ 0x1405E218C
 * Callers:
 *     ExpNtUpdateWnfStateData @ 0x14065397C (ExpNtUpdateWnfStateData.c)
 *     NtQueryWnfStateData @ 0x140654220 (NtQueryWnfStateData.c)
 *     NtQueryWnfStateNameInformation @ 0x1406C9820 (NtQueryWnfStateNameInformation.c)
 *     ExpNtDeleteWnfStateData @ 0x1407C954C (ExpNtDeleteWnfStateData.c)
 * Callees:
 *     ExpWnfLookupPermanentName @ 0x1405DF664 (ExpWnfLookupPermanentName.c)
 *     ExpWnfCheckCallerAccess @ 0x1405F75F4 (ExpWnfCheckCallerAccess.c)
 *     SeSinglePrivilegeCheck @ 0x14063B9A0 (SeSinglePrivilegeCheck.c)
 *     ExFreePoolWithTag @ 0x1409B70B0 (ExFreePoolWithTag.c)
 */

__int64 __fastcall ExpWnfCheckCrossScopeAccess(unsigned __int64 a1)
{
  __int64 v1; // rax
  __int64 result; // rax
  PVOID v3; // rbx
  int v4; // edi
  PVOID P; // [rsp+30h] [rbp+8h] BYREF

  P = 0LL;
  v1 = (a1 >> 6) & 0xF;
  if ( (_DWORD)v1 == 3 )
    return 0LL;
  if ( (_DWORD)v1 != 1 || ((a1 >> 4) & 3) != 0 )
  {
LABEL_9:
    if ( !SeSinglePrivilegeCheck(SeTcbPrivilege, KeGetCurrentThread()->PreviousMode) )
      return 3221225569LL;
    return 0LL;
  }
  result = ExpWnfLookupPermanentName(a1, (PSECURITY_DESCRIPTOR **)&P);
  if ( (int)result < 0 )
    return result;
  v3 = P;
  v4 = ExpWnfCheckCallerAccess(*((PSECURITY_DESCRIPTOR *)P + 2), 0x10u);
  ExFreePoolWithTag(v3, 0x20666E57u);
  if ( v4 < 0 )
  {
    if ( v4 != -1073741790 )
      return (unsigned int)v4;
    goto LABEL_9;
  }
  return 0LL;
}
