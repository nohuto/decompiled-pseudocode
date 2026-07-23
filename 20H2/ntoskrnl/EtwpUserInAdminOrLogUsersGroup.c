/*
 * XREFs of EtwpUserInAdminOrLogUsersGroup @ 0x14093D91C
 * Callers:
 *     EtwSetPerformanceTraceInformation @ 0x14093AD90 (EtwSetPerformanceTraceInformation.c)
 * Callees:
 *     RtlCheckTokenMembership @ 0x140340910 (RtlCheckTokenMembership.c)
 *     RtlAllocateAndInitializeSidEx @ 0x140915B0C (RtlAllocateAndInitializeSidEx.c)
 *     ExFreePoolWithTag @ 0x1409B70B0 (ExFreePoolWithTag.c)
 */

bool EtwpUserInAdminOrLogUsersGroup()
{
  UCHAR v0; // dl
  NTSTATUS v1; // ebx
  bool result; // al
  BOOLEAN IsMember; // [rsp+40h] [rbp+18h] BYREF
  _SID_IDENTIFIER_AUTHORITY IdentifierAuthority; // [rsp+48h] [rbp+20h] BYREF
  PSID Sid; // [rsp+50h] [rbp+28h] BYREF
  ULONG SubAuthorities; // [rsp+58h] [rbp+30h] BYREF
  int v7; // [rsp+5Ch] [rbp+34h]

  *(_DWORD *)IdentifierAuthority.Value = 0;
  Sid = 0LL;
  IsMember = 0;
  *(_WORD *)&IdentifierAuthority.Value[4] = 1280;
  result = 1;
  if ( RtlCheckTokenMembership(0LL, SeAliasAdminsSid, &IsMember) < 0 || !IsMember )
  {
    SubAuthorities = 32;
    v7 = 558;
    if ( RtlAllocateAndInitializeSidEx(&IdentifierAuthority, v0, &SubAuthorities, &Sid) < 0 )
      return 0;
    v1 = RtlCheckTokenMembership(0LL, Sid, &IsMember);
    ExFreePoolWithTag(Sid, 0);
    if ( v1 < 0 || !IsMember )
      return 0;
  }
  return result;
}
