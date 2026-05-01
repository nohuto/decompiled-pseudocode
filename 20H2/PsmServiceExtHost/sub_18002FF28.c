/*
 * XREFs of sub_18002FF28 @ 0x18002FF28
 * Callers:
 *     sub_18002EA88 @ 0x18002EA88 (sub_18002EA88.c)
 *     sub_180030370 @ 0x180030370 (sub_180030370.c)
 * Callees:
 *     __security_check_cookie @ 0x180044E30 (__security_check_cookie.c)
 */

__int64 __fastcall sub_18002FF28(PSID pSid, PSID a2, int a3, char a4, __int64 a5)
{
  int LastError; // ebx
  DWORD cbSid; // [rsp+40h] [rbp-C0h] BYREF
  PSID Sid; // [rsp+48h] [rbp-B8h] BYREF
  _BYTE SecurityDescriptor[48]; // [rsp+50h] [rbp-B0h] BYREF
  _BYTE v14[80]; // [rsp+80h] [rbp-80h] BYREF
  struct _ACL Acl; // [rsp+D0h] [rbp-30h] BYREF

  Sid = 0LL;
  LastError = RtlCreateSecurityDescriptor(SecurityDescriptor, 1u);
  if ( LastError >= 0 )
  {
    LastError = RtlCreateAcl(&Acl, 0x138u, 2u);
    if ( LastError >= 0 )
    {
      LastError = RtlAddAccessAllowedAceEx(&Acl, 2u, 0, 0x10000000u, pSid);
      if ( LastError >= 0 )
      {
        RtlAddAccessAllowedAceEx(&Acl, 2u, 0, 0x80000000, a2);
        LastError = RtlSetDaclSecurityDescriptor(SecurityDescriptor, 1u, &Acl, 0);
        if ( LastError >= 0 )
        {
          if ( (a4 & 1) != 0 )
          {
            cbSid = 68;
            if ( !CreateWellKnownSid(WinBuiltinAnyPackageSid, 0LL, v14, &cbSid) )
              goto LABEL_16;
            LastError = RtlAddAccessAllowedAceEx(&Acl, 2u, 0, 0x80000000, v14);
            if ( LastError < 0 )
              goto LABEL_8;
            if ( !ConvertStringSidToSidW(
                    L"S-1-15-3-1024-1502825166-1963708345-2616377461-2562897074-4192028372-3968301570-1997628692-1435953622",
                    &Sid) )
            {
LABEL_16:
              if ( (int)GetLastError() > 0 )
                LastError = (unsigned __int16)GetLastError() | 0xC0070000;
              else
                LastError = GetLastError();
              goto LABEL_8;
            }
            LastError = RtlAddAccessAllowedAceEx(&Acl, 2u, 0, 0x80000000, Sid);
            if ( LastError < 0 )
              goto LABEL_8;
          }
          LastError = NtCreateWnfStateName(a5, 3LL, 0LL, 0LL, 0LL, a3, SecurityDescriptor);
          if ( LastError >= 0 )
            LastError = 0;
        }
      }
    }
  }
LABEL_8:
  if ( Sid )
    LocalFree(Sid);
  return (unsigned int)LastError;
}
