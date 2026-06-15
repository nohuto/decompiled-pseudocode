/*
 * XREFs of ?AddSidToSACL@@YAKPEAUHKEY__@@PEAXPEAPEAU_ACL@@PEAK@Z @ 0x1800D5F98
 * Callers:
 *     ?SetRegistryHandleIntegrityLevel@@YAJPEAUHKEY__@@PEAX@Z @ 0x1800D939C (-SetRegistryHandleIntegrityLevel@@YAJPEAUHKEY__@@PEAX@Z.c)
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x1800340C0 (--3@YAXPEAX@Z.c)
 *     ?SetSidOnSACL@@YAKPEAXPEAU_ACL@@PEAPEAU1@PEAK@Z @ 0x180052130 (-SetSidOnSACL@@YAKPEAXPEAU_ACL@@PEAPEAU1@PEAK@Z.c)
 *     ?AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z @ 0x18005F0C8 (-AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z.c)
 *     ??_U@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x18006ABC0 (--_U@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 */

__int64 __fastcall AddSidToSACL(HKEY hKey, PSID pSid, struct _ACL **a3, unsigned int *a4)
{
  int KeySecurity; // ebx
  void *v9; // rax
  void *v10; // rdi
  signed int v11; // eax
  unsigned int v12; // r8d
  unsigned int v14; // [rsp+20h] [rbp-20h] BYREF
  WINBOOL bSaclDefaulted; // [rsp+24h] [rbp-1Ch] BYREF
  WINBOOL bSaclPresent; // [rsp+28h] [rbp-18h] BYREF
  PACL pSacl; // [rsp+30h] [rbp-10h] BYREF
  struct _ACL *v18; // [rsp+38h] [rbp-8h] BYREF
  DWORD cbSecurityDescriptor; // [rsp+80h] [rbp+40h] BYREF

  pSacl = 0LL;
  v18 = 0LL;
  cbSecurityDescriptor = 0;
  KeySecurity = 87;
  if ( a3 )
  {
    if ( a4 )
    {
      if ( pSid )
      {
        *a3 = 0LL;
        *a4 = 0;
        KeySecurity = RegGetKeySecurity(hKey, 0x10u, 0LL, &cbSecurityDescriptor);
        if ( KeySecurity == 122 )
        {
          v9 = operator new[](cbSecurityDescriptor, (const struct std::nothrow_t *)&std::nothrow);
          v10 = v9;
          if ( v9 )
          {
            KeySecurity = RegGetKeySecurity(hKey, 0x10u, v9, &cbSecurityDescriptor);
            if ( !KeySecurity )
            {
              if ( GetSecurityDescriptorSacl(v10, &bSaclPresent, &pSacl, &bSaclDefaulted) )
              {
                v14 = 0;
                KeySecurity = SetSidOnSACL(pSid, pSacl, &v18, &v14);
                if ( !KeySecurity )
                {
                  *a3 = v18;
                  *a4 = v14;
                }
              }
              else
              {
                KeySecurity = GetLastError();
              }
            }
            operator delete(v10);
          }
          else
          {
            KeySecurity = 122;
          }
        }
      }
    }
  }
  v11 = KeySecurity;
  if ( KeySecurity > 0 )
    v11 = (unsigned __int16)KeySecurity | 0x80070000;
  if ( v11 < 0 )
  {
    v12 = KeySecurity;
    if ( KeySecurity > 0 )
      v12 = (unsigned __int16)KeySecurity | 0x80070000;
    AudSrvTraceLoggingErrorHelper("AddSidToSACL", 347, v12);
  }
  return (unsigned int)KeySecurity;
}
