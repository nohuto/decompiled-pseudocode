/*
 * XREFs of ?SetRegistryKeyIntegrityLevel@@YAJPEAUHKEY__@@PEAX@Z @ 0x180051F64
 * Callers:
 *     ?CreateLowRightsRegistryKey@@YAJPEAUHKEY__@@PEBGKPEAPEAU1@@Z @ 0x180004A90 (-CreateLowRightsRegistryKey@@YAJPEAUHKEY__@@PEBGKPEAPEAU1@@Z.c)
 * Callees:
 *     ?SetSidOnSACL@@YAKPEAXPEAU_ACL@@PEAPEAU1@PEAK@Z @ 0x180052130 (-SetSidOnSACL@@YAKPEAXPEAU_ACL@@PEAPEAU1@PEAK@Z.c)
 *     ?AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z @ 0x18005F0C8 (-AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z.c)
 *     ??_U@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x18006ABC0 (--_U@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 */

__int64 __fastcall SetRegistryKeyIntegrityLevel(HKEY hKey, PSID pSid)
{
  int KeySecurity; // ebx
  struct _ACL *v5; // r14
  void *v6; // rax
  void *v7; // rdi
  HANDLE ProcessHeap; // rax
  signed int v9; // eax
  HANDLE v10; // rax
  unsigned int v12; // r8d
  signed int LastError; // eax
  WINBOOL bSaclPresent; // [rsp+20h] [rbp-40h] BYREF
  PACL pSacl; // [rsp+28h] [rbp-38h] BYREF
  struct _ACL *v16; // [rsp+30h] [rbp-30h] BYREF
  _BYTE pSecurityDescriptor[40]; // [rsp+38h] [rbp-28h] BYREF
  DWORD cbSecurityDescriptor; // [rsp+98h] [rbp+38h] BYREF
  unsigned int v19; // [rsp+A0h] [rbp+40h] BYREF
  WINBOOL bSaclDefaulted; // [rsp+A8h] [rbp+48h] BYREF

  KeySecurity = -2147024809;
  if ( !pSid )
    goto LABEL_29;
  pSacl = 0LL;
  v16 = 0LL;
  v5 = 0LL;
  cbSecurityDescriptor = 0;
  KeySecurity = RegGetKeySecurity(hKey, 0x10u, 0LL, &cbSecurityDescriptor);
  if ( KeySecurity == 122 )
  {
    v6 = operator new[](cbSecurityDescriptor, (const struct std::nothrow_t *)&std::nothrow);
    v7 = v6;
    if ( v6 )
    {
      KeySecurity = RegGetKeySecurity(hKey, 0x10u, v6, &cbSecurityDescriptor);
      if ( !KeySecurity )
      {
        if ( GetSecurityDescriptorSacl(v7, &bSaclPresent, &pSacl, &bSaclDefaulted) )
        {
          v19 = 0;
          KeySecurity = SetSidOnSACL(pSid, pSacl, &v16, &v19);
          if ( !KeySecurity )
            v5 = v16;
        }
        else
        {
          KeySecurity = GetLastError();
        }
      }
      ProcessHeap = GetProcessHeap();
      HeapFree(ProcessHeap, 0, v7);
    }
    else
    {
      KeySecurity = 122;
    }
  }
  v9 = KeySecurity;
  if ( KeySecurity > 0 )
    v9 = (unsigned __int16)KeySecurity | 0x80070000;
  if ( v9 < 0 )
  {
    v12 = KeySecurity;
    if ( KeySecurity > 0 )
      v12 = (unsigned __int16)KeySecurity | 0x80070000;
    AudSrvTraceLoggingErrorHelper("AddSidToSACL", 0x15Bu, v12);
  }
  if ( KeySecurity > 0 )
    KeySecurity = (unsigned __int16)KeySecurity | 0x80070000;
  if ( KeySecurity < 0 )
    goto LABEL_29;
  if ( !InitializeSecurityDescriptor(pSecurityDescriptor, 1u)
    || !SetSecurityDescriptorSacl(pSecurityDescriptor, 1, v5, 0)
    || RegSetKeySecurity(hKey, 0x10u, pSecurityDescriptor) )
  {
    LastError = GetLastError();
    KeySecurity = LastError;
    if ( LastError > 0 )
      KeySecurity = (unsigned __int16)LastError | 0x80070000;
  }
  if ( v5 )
  {
    v10 = GetProcessHeap();
    HeapFree(v10, 0, v5);
  }
  if ( KeySecurity < 0 )
LABEL_29:
    AudSrvTraceLoggingErrorHelper("SetRegistryKeyIntegrityLevel", 0x19Bu, KeySecurity);
  return (unsigned int)KeySecurity;
}
