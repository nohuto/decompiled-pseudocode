/*
 * XREFs of __RtlpMuiRegInitLIPLanguage@12 @ 0x4B36C534
 * Callers:
 *     _RtlpMuiRegAddLanguageByName@24 @ 0x4B2AC9AE (_RtlpMuiRegAddLanguageByName@24.c)
 * Callees:
 *     _LdrpQueryValueKey@24 @ 0x4B2AD60A (_LdrpQueryValueKey@24.c)
 *     _RtlCompareUnicodeStrings@20 @ 0x4B2D04C0 (_RtlCompareUnicodeStrings@20.c)
 *     _NtEnumerateValueKey@24 @ 0x4B2F2A90 (_NtEnumerateValueKey@24.c)
 *     @__security_check_cookie@4 @ 0x4B2F4B20 (@__security_check_cookie@4.c)
 *     _RtlInitUnicodeString@8 @ 0x4B2F5020 (_RtlInitUnicodeString@8.c)
 *     _memset @ 0x4B2F8F30 (_memset.c)
 *     __RtlMuiRegAddLIPParent@16 @ 0x4B36C0BB (__RtlMuiRegAddLIPParent@16.c)
 */

int __userpurge _RtlpMuiRegInitLIPLanguage@<eax>(int a1@<edx>, _DWORD *a2@<ecx>, int a3@<ebp>, _BYTE *a4)
{
  int v4; // esi
  unsigned int v5; // edi
  int v6; // ecx
  int v7; // ecx
  int v8; // eax
  unsigned int v9; // eax
  bool v10; // sf
  int v12; // [esp-2E4h] [ebp-2F0h] BYREF
  UNICODE_STRING v13; // [esp-2E0h] [ebp-2ECh] BYREF
  _DWORD *v14; // [esp-2D8h] [ebp-2E4h]
  _BYTE *v15; // [esp-2D4h] [ebp-2E0h]
  int v16; // [esp-2D0h] [ebp-2DCh] BYREF
  int v17; // [esp-2CCh] [ebp-2D8h]
  int v18; // [esp-2C8h] [ebp-2D4h] BYREF
  unsigned int v19; // [esp-2C4h] [ebp-2D0h]
  int v20; // [esp-2C0h] [ebp-2CCh] BYREF
  int v21; // [esp-2BCh] [ebp-2C8h]
  unsigned int v22; // [esp-2B0h] [ebp-2BCh]
  WCHAR v23[250]; // [esp-2ACh] [ebp-2B8h] BYREF
  WCHAR v24[92]; // [esp-B8h] [ebp-C4h] BYREF
  int v25; // [esp+0h] [ebp-Ch]
  void *v26; // [esp+4h] [ebp-8h]
  void *retaddr; // [esp+Ch] [ebp+0h]

  v25 = a3;
  v26 = retaddr;
  v4 = 0;
  v15 = a4;
  v17 = a1;
  v14 = a2;
  v19 = 0;
  v12 = 0;
  memset(v24, 0, 0xAAu);
  v5 = 0;
  if ( !v14 || !v17 || !v15 || (*v15 & 4) == 0 )
    return -1073741811;
  RtlInitUnicodeString(&v13, L"DefaultFallback");
  v18 = 1;
  v16 = 170;
  if ( LdrpQueryValueKey(v17, (int)&v13, &v18, v24, (unsigned int *)&v16, v6) < 0 || v18 != 1 )
    goto LABEL_15;
  RtlInitUnicodeString(&v13, v24);
  v18 = 7;
  v8 = LdrpQueryValueKey(v17, (int)&v13, &v18, 0, 0, v7);
  v16 = v8;
  if ( (!v8 || v8 == -2147483643) && (v18 == 7 || v18 == 1) )
  {
    if ( _RtlMuiRegAddLIPParent(v14, (int)v15, 0, v24) >= 0 )
    {
      v19 = 1;
      v5 = wcslen(v24);
    }
    v8 = v16;
  }
  if ( v8 != -2147483622 )
  {
LABEL_15:
    v9 = v19;
    while ( v9 < 4 && NtEnumerateValueKey(v17, v4, 1, (int)&v20, 512, (int)&v12) >= 0 )
    {
      if ( (v21 == 7 || v21 == 1)
        && v22 + 24 <= 0x200
        && ((v23[v22 >> 1] = 0, RtlInitUnicodeString(&v13, v23), !v5)
         || RtlCompareUnicodeStrings(v13.Buffer, v13.Length >> 1, (int)v24, v5, 1)) )
      {
        v10 = _RtlMuiRegAddLIPParent(v14, (int)v15, v19, v13.Buffer) < 0;
        v9 = v19;
        if ( !v10 )
          v9 = ++v19;
      }
      else
      {
        v9 = v19;
      }
      ++v4;
    }
  }
  return 0;
}
