/*
 * XREFs of RtlIsElevatedRid @ 0x1406BAE20
 * Callers:
 *     SepRemoveDisabledGroupsAndPrivileges @ 0x14063266C (SepRemoveDisabledGroupsAndPrivileges.c)
 *     NtQueryInformationToken @ 0x14067EC80 (NtQueryInformationToken.c)
 *     SeQueryInformationToken @ 0x140693460 (SeQueryInformationToken.c)
 * Callees:
 *     RtlSubAuthorityCountSid @ 0x1402FE9B0 (RtlSubAuthorityCountSid.c)
 *     RtlSubAuthoritySid @ 0x1402FE9C0 (RtlSubAuthoritySid.c)
 */

BOOLEAN __cdecl RtlIsElevatedRid(PSID_AND_ATTRIBUTES SidAttr)
{
  PSID Sid; // rbx
  int v2; // edi
  PULONG v3; // rax
  int v4; // ecx
  ULONG v5; // edx
  __int64 *i; // rax

  if ( !SidAttr )
    return 0;
  if ( (SidAttr->Attributes & 0x30) != 0 )
    return 0;
  Sid = SidAttr->Sid;
  v2 = *RtlSubAuthorityCountSid(SidAttr->Sid);
  if ( !(_BYTE)v2 || *RtlSubAuthoritySid(Sid, 0) - 80 <= 0x1F )
    return 0;
  v3 = RtlSubAuthoritySid(Sid, v2 - 1);
  v4 = 0;
  v5 = *v3;
  for ( i = qword_140017870; v5 != *(_DWORD *)i; i = (__int64 *)((char *)i + 4) )
  {
    if ( (unsigned int)++v4 >= 0x13 )
      return 0;
  }
  return 1;
}
