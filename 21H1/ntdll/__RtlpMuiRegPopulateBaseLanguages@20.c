/*
 * XREFs of __RtlpMuiRegPopulateBaseLanguages@20 @ 0x4B36C81E
 * Callers:
 *     __RtlpMuiRegInitPartialLanguage@12 @ 0x4B36C7D0 (__RtlpMuiRegInitPartialLanguage@12.c)
 * Callees:
 *     _RtlpLoadInstallLanguageFallback@12 @ 0x4B2ACC28 (_RtlpLoadInstallLanguageFallback@12.c)
 *     _LdrpQueryValueKey@24 @ 0x4B2AD60A (_LdrpQueryValueKey@24.c)
 *     _RtlCompareUnicodeStrings@20 @ 0x4B2D04C0 (_RtlCompareUnicodeStrings@20.c)
 *     _RtlLCIDToCultureName@8 @ 0x4B2D4F10 (_RtlLCIDToCultureName@8.c)
 *     _NtEnumerateValueKey@24 @ 0x4B2F2A90 (_NtEnumerateValueKey@24.c)
 *     _ZwQueryValueKey@24 @ 0x4B2F2AD0 (_ZwQueryValueKey@24.c)
 *     _ZwIsUILanguageComitted@0 @ 0x4B2F39B0 (_ZwIsUILanguageComitted@0.c)
 *     _NtQueryInstallUILanguage@4 @ 0x4B2F3E80 (_NtQueryInstallUILanguage@4.c)
 *     @__security_check_cookie@4 @ 0x4B2F4B20 (@__security_check_cookie@4.c)
 *     _RtlInitUnicodeString@8 @ 0x4B2F5020 (_RtlInitUnicodeString@8.c)
 *     _memset @ 0x4B2F8F30 (_memset.c)
 *     __RtlpMuiRegAddBaseLanguage@20 @ 0x4B36C24C (__RtlpMuiRegAddBaseLanguage@20.c)
 *     __RtlpMuiRegValidateAndGetInstallFallbackBase@20 @ 0x4B36CD2C (__RtlpMuiRegValidateAndGetInstallFallbackBase@20.c)
 */

int __userpurge _RtlpMuiRegPopulateBaseLanguages@<eax>(
        int a1@<edx>,
        _WORD *a2@<ecx>,
        int a3@<ebp>,
        _WORD *a4,
        unsigned int *a5,
        int a6)
{
  __int16 v7; // cx
  int result; // eax
  unsigned __int16 v9; // si
  int v10; // eax
  int IsUILanguageComitted; // eax
  __int16 v12; // ax
  int v13; // ecx
  unsigned int v14; // esi
  int v15; // ecx
  int ValueKey; // eax
  unsigned int v17; // esi
  WCHAR *v18; // ecx
  __int16 v19; // ax
  int i; // eax
  unsigned int v21; // eax
  unsigned int v22; // esi
  unsigned int v23; // ecx
  int v24; // [esp-46Ch] [ebp-478h] BYREF
  UNICODE_STRING v25; // [esp-468h] [ebp-474h] BYREF
  unsigned int v26; // [esp-460h] [ebp-46Ch]
  int v27; // [esp-44Ch] [ebp-458h]
  unsigned int v28; // [esp-448h] [ebp-454h]
  int v29; // [esp-444h] [ebp-450h]
  _WORD *v30; // [esp-440h] [ebp-44Ch]
  int v31; // [esp-43Ch] [ebp-448h] BYREF
  int v32; // [esp-438h] [ebp-444h]
  int v33; // [esp-434h] [ebp-440h] BYREF
  unsigned int v34; // [esp-430h] [ebp-43Ch] BYREF
  unsigned int v35; // [esp-42Ch] [ebp-438h]
  __int16 v36; // [esp-428h] [ebp-434h] BYREF
  unsigned int v37; // [esp-424h] [ebp-430h]
  wchar_t v38[88]; // [esp-420h] [ebp-42Ch] BYREF
  unsigned __int16 v39[88]; // [esp-370h] [ebp-37Ch] BYREF
  int v40; // [esp-2C0h] [ebp-2CCh] BYREF
  int v41; // [esp-2BCh] [ebp-2C8h]
  unsigned int v42; // [esp-2B0h] [ebp-2BCh]
  unsigned __int16 v43[250]; // [esp-2ACh] [ebp-2B8h] BYREF
  WCHAR v44[92]; // [esp-B8h] [ebp-C4h] BYREF
  int v45; // [esp+0h] [ebp-Ch]
  void *v46; // [esp+4h] [ebp-8h]
  void *retaddr; // [esp+Ch] [ebp+0h]

  v45 = a3;
  v46 = retaddr;
  v32 = a1;
  v26 = 0;
  v24 = 0;
  v30 = a4;
  memset(v44, 0, 0xAAu);
  memset(v39, 0, 0xAAu);
  memset(v38, 0, 0xAAu);
  v28 = 0;
  v35 = 0;
  v36 = 0;
  v34 = 0;
  if ( !a2 || !a4 || !v32 )
    return -1073741811;
  v29 = 0;
  v27 = 0;
  v37 = 0;
  v7 = a2[2];
  if ( v7 )
  {
    v12 = a2[4];
    v9 = a2[3];
    v36 = a2[2];
    LOWORD(v33) = v12;
  }
  else
  {
    result = NtQueryInstallUILanguage((int)&v36);
    v29 = result;
    if ( result < 0 )
      return result;
    if ( RtlpLoadInstallLanguageFallback((int)a2, &v31, &v33) >= 0 )
    {
      v9 = v31;
      v10 = (unsigned __int16)v33;
    }
    else
    {
      v9 = 0;
      v10 = 0;
      LOWORD(v33) = 0;
    }
    v31 = v10;
    IsUILanguageComitted = ZwIsUILanguageComitted();
    v7 = v36;
    if ( IsUILanguageComitted >= 0 )
    {
      a2[4] = v31;
      a2[3] = v9;
      a2[2] = v7;
    }
  }
  if ( v30[2] == v7
    && v9
    && (v34 = 512, v25.Buffer = v39, v25.MaximumLength = 170, RtlLCIDToCultureName(v9, &v25.Length))
    && ZwQueryValueKey(v32, (int)&v25, 1, (int)&v40, 512, (int)&v34) >= 0
    && (int)_RtlpMuiRegValidateAndGetInstallFallbackBase(v33, v38, v13) >= 0
    && _RtlpMuiRegAddBaseLanguage((int)a2, v30, 0, (int)&v40, v38) >= 0 )
  {
    v37 = 1;
    v14 = wcslen(v39);
    v35 = v14;
  }
  else
  {
    v14 = v35;
  }
  RtlInitUnicodeString(&v25, L"DefaultFallback");
  v33 = 1;
  v34 = 170;
  if ( LdrpQueryValueKey(v32, (int)&v25, &v33, v44, &v34, v15) >= 0
    && v33 == 1
    && (!v14 || RtlCompareUnicodeStrings(v44, v34 >> 1, (int)v39, v14, 1)) )
  {
    RtlInitUnicodeString(&v25, v44);
    v34 = 512;
    ValueKey = ZwQueryValueKey(v32, (int)&v25, 1, (int)&v40, 512, (int)&v34);
    v17 = v37;
    if ( ValueKey >= 0 && v41 == 7 && _RtlpMuiRegAddBaseLanguage((int)a2, v30, v37, (int)&v40, 0) >= 0 )
    {
      ++v17;
      v18 = v44;
      v37 = v17;
      do
        v19 = *v18++;
      while ( v19 != (_WORD)v26 );
      v28 = v18 - &v44[1];
    }
  }
  else
  {
    v17 = v37;
  }
  if ( v29 != -2147483622 )
  {
    for ( i = v27; v17 < 4 && NtEnumerateValueKey(v32, i, 1, (int)&v40, 512, (int)&v24) >= 0; i = ++v27 )
    {
      if ( v41 == 7 )
      {
        if ( v42 > 0x200 )
          goto LABEL_47;
        v21 = v35;
        if ( v28 || v35 )
        {
          v22 = v42 >> 1;
          v29 = v43[v42 >> 1];
          v43[v42 >> 1] = 0;
          v23 = v42;
          v26 = v42;
          if ( v21 )
          {
            if ( !RtlCompareUnicodeStrings(v43, v42 >> 1, (int)v39, v21, 1) )
              goto LABEL_47;
            v23 = v26;
          }
          if ( v28 && !RtlCompareUnicodeStrings(v43, v23 >> 1, (int)v44, v28, 1) )
          {
LABEL_47:
            v17 = v37;
            continue;
          }
          v43[v22] = v29;
        }
        v17 = v37;
        if ( _RtlpMuiRegAddBaseLanguage((int)a2, v30, v37, (int)&v40, 0) >= 0 )
          v37 = ++v17;
      }
    }
  }
  if ( a5 )
    *a5 = v17;
  return 0;
}
