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

int __usercall _RtlpMuiRegLoadInstalledFromKey@<eax>(const WCHAR *a1@<edx>, int a2@<ebp>)
{
  int v2; // edi
  int v3; // eax
  int v4; // esi
  int v5; // ecx
  __int16 v6; // cx
  unsigned int v7; // ecx
  char v8; // di
  int v10; // [esp-260h] [ebp-26Ch] BYREF
  int v11; // [esp-25Ch] [ebp-268h] BYREF
  int v12; // [esp-258h] [ebp-264h] BYREF
  int v13; // [esp-254h] [ebp-260h] BYREF
  HANDLE v14; // [esp-250h] [ebp-25Ch]
  UNICODE_STRING *v15; // [esp-24Ch] [ebp-258h]
  int v16; // [esp-248h] [ebp-254h]
  int v17; // [esp-244h] [ebp-250h]
  int v18; // [esp-240h] [ebp-24Ch]
  UNICODE_STRING v19; // [esp-23Ch] [ebp-248h] BYREF
  __int16 v20; // [esp-234h] [ebp-240h] BYREF
  unsigned int v21; // [esp-230h] [ebp-23Ch] BYREF
  HANDLE v22; // [esp-22Ch] [ebp-238h] BYREF
  int v23; // [esp-228h] [ebp-234h]
  HANDLE v24; // [esp-224h] [ebp-230h] BYREF
  int v25; // [esp-220h] [ebp-22Ch] BYREF
  unsigned int v26; // [esp-214h] [ebp-220h]
  WCHAR v27[264]; // [esp-210h] [ebp-21Ch] BYREF
  int v28; // [esp+0h] [ebp-Ch]
  void *v29; // [esp+4h] [ebp-8h]
  void *retaddr; // [esp+Ch] [ebp+0h]

  v28 = a2;
  v29 = retaddr;
  v20 = -1;
  v12 = 0;
  v2 = 0;
  v24 = 0;
  v23 = 0;
  v21 = 0;
  RtlInitUnicodeString(&v19, a1);
  v22 = 0;
  v15 = &v19;
  v13 = 24;
  v14 = 0;
  v16 = 64;
  v17 = 0;
  v18 = 0;
  if ( (int)ZwOpenKey(&v22, 131097, &v13) < 0 )
    return 0;
  do
  {
    v3 = ZwEnumerateKey(v22, v2, 0, &v25, 512, &v12);
    v4 = v3;
    if ( v3 >= 0 )
    {
      if ( v26 + 24 <= 0x200 )
      {
        v27[v26 >> 1] = 0;
        RtlInitUnicodeString(&v19, v27);
        v14 = v22;
        v15 = &v19;
        v24 = 0;
        v13 = 24;
        v16 = 64;
        v17 = 0;
        v18 = 0;
        if ( (int)ZwOpenKey(&v24, 131097, &v13) >= 0 )
        {
          RtlInitUnicodeString(&v19, L"Type");
          v10 = 4;
          v11 = 4;
          if ( LdrpQueryValueKey((int)&v10, &v21, (int)&v11, v5) >= 0 && ValidateRegistrLangType(v21) >= 0 )
          {
            v7 = v6 & 0x419F;
            v21 = v7;
            if ( (v7 & 7) != 0 && (v7 & 7 & -(v7 & 7)) == (v7 & 7) )
            {
              if ( (v7 & 0x180) == 0 || (v8 = v7, (v7 & 0x180 & -(v7 & 0x180)) != (v7 & 0x180)) )
              {
                v7 = v7 & 0xFFFFFE7F | 0x80;
                v21 = v7;
                v8 = v7;
              }
              if ( (v8 & 0x18) != 0 && (v8 & 0x18 & -(v8 & 0x18)) == (v8 & 0x18) && ((v7 & 8) == 0 || (v7 & 4) != 0) )
                RtlpMuiRegAddLanguageByName(v27, v7, v7, &v20);
              v2 = v23;
            }
          }
        }
      }
    }
    else if ( v3 != -2147483622 )
    {
      goto LABEL_22;
    }
    if ( v24 )
    {
      NtClose(v24);
      v24 = 0;
    }
    v23 = ++v2;
  }
  while ( v4 != -2147483622 );
  v4 = 0;
LABEL_22:
  if ( v22 )
    NtClose(v22);
  return v4;
}
