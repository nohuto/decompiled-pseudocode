/*
 * XREFs of __RtlpMuiRegLoadInstalledFromKey@8 @ 0x4B2AC6E3
 * Callers:
 *     __RtlpMuiRegLoadInstalled@16 @ 0x4B2AC2C1 (__RtlpMuiRegLoadInstalled@16.c)
 * Callees:
 *     _RtlpMuiRegAddLanguageByName@24 @ 0x4B2AC9AE (_RtlpMuiRegAddLanguageByName@24.c)
 *     _LdrpQueryValueKey@24 @ 0x4B2AD60A (_LdrpQueryValueKey@24.c)
 *     _ValidateRegistrLangType@4 @ 0x4B2ADAAA (_ValidateRegistrLangType@4.c)
 *     _NtClose@4 @ 0x4B2F2A50 (_NtClose@4.c)
 *     _ZwOpenKey@12 @ 0x4B2F2A80 (_ZwOpenKey@12.c)
 *     _ZwEnumerateKey@24 @ 0x4B2F2CA0 (_ZwEnumerateKey@24.c)
 *     @__security_check_cookie@4 @ 0x4B2F4B20 (@__security_check_cookie@4.c)
 *     _RtlInitUnicodeString@8 @ 0x4B2F5020 (_RtlInitUnicodeString@8.c)
 */

NTSTATUS __usercall _RtlpMuiRegLoadInstalledFromKey@<eax>(const WCHAR *a1@<edx>, int a2@<ebp>)
{
  ULONG v2; // edi
  NTSTATUS v3; // eax
  NTSTATUS v4; // esi
  int v5; // ecx
  __int16 v6; // cx
  int v7; // ecx
  char v8; // di
  int v10; // [esp-260h] [ebp-26Ch] BYREF
  int v11; // [esp-25Ch] [ebp-268h] BYREF
  ULONG v12; // [esp-258h] [ebp-264h] BYREF
  _OBJECT_ATTRIBUTES v13; // [esp-254h] [ebp-260h] BYREF
  _UNICODE_STRING v14; // [esp-23Ch] [ebp-248h] BYREF
  __int16 v15; // [esp-234h] [ebp-240h] BYREF
  int v16; // [esp-230h] [ebp-23Ch] BYREF
  HANDLE v17; // [esp-22Ch] [ebp-238h] BYREF
  ULONG v18; // [esp-228h] [ebp-234h]
  HANDLE v19; // [esp-224h] [ebp-230h] BYREF
  int v20; // [esp-220h] [ebp-22Ch] BYREF
  unsigned int v21; // [esp-214h] [ebp-220h]
  WCHAR v22[264]; // [esp-210h] [ebp-21Ch] BYREF
  int v23; // [esp+0h] [ebp-Ch]
  void *v24; // [esp+4h] [ebp-8h]
  void *retaddr; // [esp+Ch] [ebp+0h]

  v23 = a2;
  v24 = retaddr;
  v15 = -1;
  v12 = 0;
  v2 = 0;
  v19 = 0;
  v18 = 0;
  v16 = 0;
  RtlInitUnicodeString(&v14, a1);
  v17 = 0;
  v13.ObjectName = &v14;
  v13.Length = 24;
  v13.RootDirectory = 0;
  v13.Attributes = 64;
  v13.SecurityDescriptor = 0;
  v13.SecurityQualityOfService = 0;
  if ( ZwOpenKey(&v17, 0x20019u, &v13) < 0 )
    return 0;
  do
  {
    v3 = ZwEnumerateKey(v17, v2, KeyBasicInformation, &v20, 0x200u, &v12);
    v4 = v3;
    if ( v3 >= 0 )
    {
      if ( v21 + 24 <= 0x200 )
      {
        v22[v21 >> 1] = 0;
        RtlInitUnicodeString(&v14, v22);
        v13.RootDirectory = v17;
        v13.ObjectName = &v14;
        v19 = 0;
        v13.Length = 24;
        v13.Attributes = 64;
        v13.SecurityDescriptor = 0;
        v13.SecurityQualityOfService = 0;
        if ( ZwOpenKey(&v19, 0x20019u, &v13) >= 0 )
        {
          RtlInitUnicodeString(&v14, L"Type");
          v10 = 4;
          v11 = 4;
          if ( LdrpQueryValueKey(v19, &v14, &v10, &v16, &v11, v5) >= 0 && ValidateRegistrLangType(v16) >= 0 )
          {
            v7 = v6 & 0x419F;
            v16 = v7;
            if ( (v7 & 7) != 0 && (v7 & 7 & -(v7 & 7)) == (v7 & 7) )
            {
              if ( (v7 & 0x180) == 0 || (v8 = v7, (v7 & 0x180 & -(v7 & 0x180)) != (v7 & 0x180)) )
              {
                v7 = v7 & 0xFFFFFE7F | 0x80;
                v16 = v7;
                v8 = v7;
              }
              if ( (v8 & 0x18) != 0 && (v8 & 0x18 & -(v8 & 0x18)) == (v8 & 0x18) && ((v7 & 8) == 0 || (v7 & 4) != 0) )
                RtlpMuiRegAddLanguageByName(v22, v7, v7, (int)&v15);
              v2 = v18;
            }
          }
        }
      }
    }
    else if ( v3 != -2147483622 )
    {
      goto LABEL_22;
    }
    if ( v19 )
    {
      NtClose(v19);
      v19 = 0;
    }
    v18 = ++v2;
  }
  while ( v4 != -2147483622 );
  v4 = 0;
LABEL_22:
  if ( v17 )
    NtClose(v17);
  return v4;
}
