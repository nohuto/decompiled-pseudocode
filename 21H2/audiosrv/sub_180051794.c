/*
 * XREFs of sub_180051794 @ 0x180051794
 * Callers:
 *     sub_180004620 @ 0x180004620 (sub_180004620.c)
 * Callees:
 *     sub_180051960 @ 0x180051960 (sub_180051960.c)
 *     sub_18005E8F8 @ 0x18005E8F8 (sub_18005E8F8.c)
 *     sub_18006A1B0 @ 0x18006A1B0 (sub_18006A1B0.c)
 */

__int64 __fastcall sub_180051794(HKEY hKey, PSID pSid)
{
  int KeySecurity; // ebx
  struct _ACL *v5; // r14
  void *v6; // rax
  void *v7; // rdi
  HANDLE ProcessHeap; // rax
  signed int v9; // eax
  HANDLE v10; // rax
  __int64 v12; // r8
  signed int LastError; // eax
  WINBOOL bSaclPresent; // [rsp+20h] [rbp-40h] BYREF
  PACL pSacl; // [rsp+28h] [rbp-38h] BYREF
  struct _ACL *v16; // [rsp+30h] [rbp-30h]
  _BYTE pSecurityDescriptor[40]; // [rsp+38h] [rbp-28h] BYREF
  DWORD cbSecurityDescriptor; // [rsp+98h] [rbp+38h] BYREF
  int v19; // [rsp+A0h] [rbp+40h]
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
    v6 = (void *)sub_18006A1B0(cbSecurityDescriptor, &unk_18019F848);
    v7 = v6;
    if ( v6 )
    {
      KeySecurity = RegGetKeySecurity(hKey, 0x10u, v6, &cbSecurityDescriptor);
      if ( !KeySecurity )
      {
        if ( GetSecurityDescriptorSacl(v7, &bSaclPresent, &pSacl, &bSaclDefaulted) )
        {
          v19 = 0;
          KeySecurity = sub_180051960(pSid, pSacl);
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
    v12 = (unsigned int)KeySecurity;
    if ( KeySecurity > 0 )
      v12 = (unsigned __int16)KeySecurity | 0x80070000;
    sub_18005E8F8("AddSidToSACL", 347LL, v12);
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
    sub_18005E8F8("SetRegistryKeyIntegrityLevel", 411LL, (unsigned int)KeySecurity);
  return (unsigned int)KeySecurity;
}
