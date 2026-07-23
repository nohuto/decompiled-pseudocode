/*
 * XREFs of _RtlpValidLabelSubjectContext@16 @ 0x4B34A22A
 * Callers:
 *     _RtlpSetSecurityObject@32 @ 0x4B3491B6 (_RtlpSetSecurityObject@32.c)
 * Callees:
 *     _RtlInitializeSid@12 @ 0x4B2D82C0 (_RtlInitializeSid@12.c)
 *     _RtlSidDominates@12 @ 0x4B2D9420 (_RtlSidDominates@12.c)
 *     _ZwQueryInformationToken@20 @ 0x4B2F2B90 (_ZwQueryInformationToken@20.c)
 *     _ZwPrivilegeCheck@12 @ 0x4B2F3CF0 (_ZwPrivilegeCheck@12.c)
 *     @__security_check_cookie@4 @ 0x4B2F4B20 (@__security_check_cookie@4.c)
 */

char __fastcall RtlpValidLabelSubjectContext(HANDLE ClientToken, _BYTE *Sid2, char a3, NTSTATUS *a4)
{
  NTSTATUS InformationToken; // eax
  NTSTATUS v7; // eax
  NTSTATUS v8; // eax
  _SID_IDENTIFIER_AUTHORITY IdentifierAuthority; // [esp+Ch] [ebp-B4h] BYREF
  BOOLEAN Dominates; // [esp+17h] [ebp-A9h] BYREF
  _PRIVILEGE_SET RequiredPrivileges; // [esp+18h] [ebp-A8h] BYREF
  PSID TokenInformation[19]; // [esp+2Ch] [ebp-94h] BYREF
  _BYTE Sid[8]; // [esp+78h] [ebp-48h] BYREF
  int v15; // [esp+80h] [ebp-40h]

  *(_WORD *)&IdentifierAuthority.Value[4] = 4096;
  Dominates = 0;
  *(_DWORD *)IdentifierAuthority.Value = 0;
  RtlInitializeSid(Sid, &IdentifierAuthority, 1u);
  v15 = 0x2000;
  if ( !Sid2 )
    Sid2 = Sid;
  InformationToken = ZwQueryInformationToken(
                       ClientToken,
                       0x19u,
                       TokenInformation,
                       0x4Cu,
                       (PULONG)IdentifierAuthority.Value);
  *a4 = InformationToken;
  if ( InformationToken < 0 )
    return 0;
  if ( (a3 & 8) != 0 )
  {
    if ( RtlSidDominates(Sid2, Sid, &Dominates) < 0 )
      return 0;
    if ( !Dominates )
      Sid2 = Sid;
  }
  v7 = RtlSidDominates(TokenInformation[0], Sid2, &Dominates);
  *a4 = v7;
  if ( v7 < 0 )
    return 0;
  if ( !Dominates )
  {
    RequiredPrivileges.Privilege[0].Luid.HighPart = 0;
    RequiredPrivileges.Privilege[0].Attributes = 0;
    RequiredPrivileges.PrivilegeCount = 1;
    RequiredPrivileges.Control = 1;
    RequiredPrivileges.Privilege[0].Luid.LowPart = 32;
    v8 = ZwPrivilegeCheck(ClientToken, &RequiredPrivileges, &Dominates);
    if ( (Dominates & (unsigned __int8)((v8 < 0) - 1)) == 0 )
    {
      *a4 = -1073740730;
      return 0;
    }
  }
  return 1;
}
