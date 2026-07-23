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

int __userpurge _RtlpMuiRegInitLIPLanguage@<eax>(
        void *a1@<edx>,
        _DWORD *a2@<ecx>,
        int a3@<ebp>,
        int a4@<edi>,
        BOOLEAN a5@<sil>,
        _BYTE *a6)
{
  ULONG v6; // esi
  const WCHAR *v7; // edi
  int v8; // ecx
  int v9; // ecx
  int v10; // eax
  unsigned int v11; // eax
  bool v12; // sf
  SIZE_T v14; // [esp-310h] [ebp-31Ch]
  size_t v15; // [esp-304h] [ebp-310h]
  SIZE_T v16; // [esp-304h] [ebp-310h]
  BOOLEAN v17; // [esp-2FCh] [ebp-308h]
  ULONG v18; // [esp-2E4h] [ebp-2F0h] BYREF
  _UNICODE_STRING v19; // [esp-2E0h] [ebp-2ECh] BYREF
  _DWORD *v20; // [esp-2D8h] [ebp-2E4h]
  _BYTE *v21; // [esp-2D4h] [ebp-2E0h]
  int v22; // [esp-2D0h] [ebp-2DCh] BYREF
  HANDLE v23; // [esp-2CCh] [ebp-2D8h]
  int v24; // [esp-2C8h] [ebp-2D4h] BYREF
  unsigned int v25; // [esp-2C4h] [ebp-2D0h]
  int v26; // [esp-2C0h] [ebp-2CCh] BYREF
  int v27; // [esp-2BCh] [ebp-2C8h]
  unsigned int v28; // [esp-2B0h] [ebp-2BCh]
  WCHAR v29[250]; // [esp-2ACh] [ebp-2B8h] BYREF
  WCHAR v30[92]; // [esp-B8h] [ebp-C4h] BYREF
  int v31; // [esp+0h] [ebp-Ch]
  void *v32; // [esp+4h] [ebp-8h]
  void *retaddr; // [esp+Ch] [ebp+0h]

  v31 = a3;
  v32 = retaddr;
  v17 = a5;
  HIDWORD(v15) = a4;
  v6 = 0;
  v21 = a6;
  LODWORD(v15) = 170;
  v23 = a1;
  v20 = a2;
  v25 = 0;
  v18 = 0;
  memset(v30, 0, v15);
  v7 = 0;
  if ( !v20 || !v23 || !v21 || (*v21 & 4) == 0 )
    return -1073741811;
  RtlInitUnicodeString(&v19, L"DefaultFallback");
  v24 = 1;
  v22 = 170;
  if ( LdrpQueryValueKey(v23, &v19, &v24, v30, (ULONG *)&v22, v8) < 0 || v24 != 1 )
    goto LABEL_15;
  RtlInitUnicodeString(&v19, v30);
  v24 = 7;
  v10 = LdrpQueryValueKey(v23, &v19, &v24, 0, 0, v9);
  v22 = v10;
  if ( (!v10 || v10 == -2147483643) && (v24 == 7 || v24 == 1) )
  {
    if ( _RtlMuiRegAddLIPParent(v20, (int)v21, 0, v30) >= 0 )
    {
      v25 = 1;
      v7 = (const WCHAR *)wcslen((const unsigned __int16 *)v30);
    }
    v10 = v22;
  }
  if ( v10 != -2147483622 )
  {
LABEL_15:
    v11 = v25;
    while ( v11 < 4 && NtEnumerateValueKey(v23, v6, KeyValueFullInformation, &v26, 0x200u, &v18) >= 0 )
    {
      if ( (v27 == 7 || v27 == 1)
        && v28 + 24 <= 0x200
        && ((v29[v28 >> 1] = 0, RtlInitUnicodeString(&v19, v29), !v7)
         || (LODWORD(v16) = 1,
             HIDWORD(v14) = v30,
             LODWORD(v14) = v19.Length >> 1,
             RtlCompareUnicodeStrings((PCWCH)v19.Buffer, v14, v7, v16, v17))) )
      {
        v12 = _RtlMuiRegAddLIPParent(v20, (int)v21, v25, (WCHAR *)v19.Buffer) < 0;
        v11 = v25;
        if ( !v12 )
          v11 = ++v25;
      }
      else
      {
        v11 = v25;
      }
      ++v6;
    }
  }
  return 0;
}
