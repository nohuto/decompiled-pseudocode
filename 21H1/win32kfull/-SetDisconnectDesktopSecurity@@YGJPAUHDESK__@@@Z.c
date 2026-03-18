/*
 * XREFs of ?SetDisconnectDesktopSecurity@@YGJPAUHDESK__@@@Z @ 0xE9776
 * Callers:
 *     ?xxxCreateDisconnectDesktop@@YGHPAUHWINSTA__@@PAUtagWINDOWSTATION@@@Z @ 0xE9654 (-xxxCreateDisconnectDesktop@@YGHPAUHWINSTA__@@PAUtagWINDOWSTATION@@@Z.c)
 * Callees:
 *     @__security_check_cookie@4 @ 0xED840 (@__security_check_cookie@4.c)
 */

NTSTATUS __thiscall SetDisconnectDesktopSecurity(void *this)
{
  void *v1; // ebx
  int v2; // edi
  ULONG v3; // eax
  PSID v4; // eax
  NTSTATUS v5; // esi
  int v6; // eax
  void *SecurityDescriptor; // eax
  int v10; // [esp+10h] [ebp-14h] BYREF
  PSID Sid; // [esp+14h] [ebp-10h]
  struct _SID_IDENTIFIER_AUTHORITY IdentifierAuthority; // [esp+18h] [ebp-Ch] BYREF

  v1 = 0;
  v10 = 0;
  v2 = 0;
  *(_DWORD *)IdentifierAuthority.Value = 0;
  *(_WORD *)&IdentifierAuthority.Value[4] = 1280;
  v3 = RtlLengthRequiredSid(1u);
  v4 = (PSID)Win32AllocPoolWithQuota(v3, 1702064981);
  Sid = v4;
  if ( v4 )
  {
    *RtlSubAuthoritySid(v4, 0) = 18;
    v5 = RtlInitializeSid(Sid, &IdentifierAuthority, 1u);
    v4 = Sid;
  }
  else
  {
    v5 = -1073741801;
  }
  if ( v5 >= 0 )
  {
    v6 = AllocAce(0, 0, 0, &loc_F01FF, v4, &v10);
    v2 = v6;
    if ( v6 && (SecurityDescriptor = (void *)CreateSecurityDescriptor(v6, v10, 0), (v1 = SecurityDescriptor) != 0) )
      v5 = ZwSetSecurityObject(this, 4u, SecurityDescriptor);
    else
      v5 = -1073741801;
  }
  if ( Sid )
    Win32FreePool(Sid);
  if ( v2 )
    Win32FreePool(v2);
  if ( v1 )
    Win32FreePool(v1);
  return v5;
}
