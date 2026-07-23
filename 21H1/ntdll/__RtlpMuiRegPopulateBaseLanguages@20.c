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

NTSTATUS __userpurge _RtlpMuiRegPopulateBaseLanguages@<eax>(
        void *a1@<edx>,
        _WORD *a2@<ecx>,
        int a3@<ebp>,
        int a4@<edi>,
        BOOLEAN a5@<sil>,
        _WORD *a6,
        unsigned int *a7,
        int a8)
{
  LANGID v9; // cx
  NTSTATUS result; // eax
  unsigned __int16 v11; // si
  int v12; // eax
  NTSTATUS IsUILanguageComitted; // eax
  __int16 v14; // ax
  int v15; // ecx
  const WCHAR *v16; // esi
  int v17; // ecx
  NTSTATUS v18; // eax
  unsigned int v19; // esi
  WCHAR *v20; // ecx
  __int16 v21; // ax
  ULONG i; // eax
  const WCHAR *v23; // eax
  unsigned int v24; // esi
  unsigned int v25; // ecx
  SIZE_T v26; // [esp-490h] [ebp-49Ch]
  SIZE_T v27; // [esp-490h] [ebp-49Ch]
  SIZE_T v28; // [esp-490h] [ebp-49Ch]
  size_t v29; // [esp-484h] [ebp-490h]
  size_t v30; // [esp-484h] [ebp-490h]
  size_t v31; // [esp-484h] [ebp-490h]
  SIZE_T v32; // [esp-484h] [ebp-490h]
  BOOLEAN v33; // [esp-47Ch] [ebp-488h]
  ULONG v34; // [esp-46Ch] [ebp-478h] BYREF
  _UNICODE_STRING v35; // [esp-468h] [ebp-474h] BYREF
  unsigned int v36; // [esp-460h] [ebp-46Ch]
  ULONG v37; // [esp-44Ch] [ebp-458h]
  int v38; // [esp-448h] [ebp-454h]
  NTSTATUS v39; // [esp-444h] [ebp-450h]
  _WORD *v40; // [esp-440h] [ebp-44Ch]
  int v41; // [esp-43Ch] [ebp-448h] BYREF
  HANDLE v42; // [esp-438h] [ebp-444h]
  int v43; // [esp-434h] [ebp-440h] BYREF
  ULONG v44; // [esp-430h] [ebp-43Ch] BYREF
  const WCHAR *v45; // [esp-42Ch] [ebp-438h]
  LANGID v46; // [esp-428h] [ebp-434h] BYREF
  unsigned int v47; // [esp-424h] [ebp-430h]
  wchar_t v48[88]; // [esp-420h] [ebp-42Ch] BYREF
  unsigned __int16 v49[88]; // [esp-370h] [ebp-37Ch] BYREF
  int v50; // [esp-2C0h] [ebp-2CCh] BYREF
  int v51; // [esp-2BCh] [ebp-2C8h]
  unsigned int v52; // [esp-2B0h] [ebp-2BCh]
  WCHAR v53[250]; // [esp-2ACh] [ebp-2B8h] BYREF
  WCHAR v54; // [esp-B8h] [ebp-C4h] BYREF
  _BYTE v55[186]; // [esp-B6h] [ebp-C2h] BYREF
  void *v56; // [esp+4h] [ebp-8h]
  void *retaddr; // [esp+Ch] [ebp+0h]

  *(_DWORD *)&v55[182] = a3;
  v56 = retaddr;
  v33 = a5;
  HIDWORD(v29) = a4;
  v42 = a1;
  v36 = 0;
  LODWORD(v29) = 170;
  v34 = 0;
  v40 = a6;
  memset(&v54, 0, v29);
  LODWORD(v30) = 170;
  memset(v49, 0, v30);
  LODWORD(v31) = 170;
  memset(v48, 0, v31);
  v38 = 0;
  v45 = 0;
  v46 = 0;
  v44 = 0;
  if ( !a2 || !a6 || !v42 )
    return -1073741811;
  v39 = 0;
  v37 = 0;
  v47 = 0;
  v9 = a2[2];
  if ( v9 )
  {
    v14 = a2[4];
    v11 = a2[3];
    v46 = a2[2];
    LOWORD(v43) = v14;
  }
  else
  {
    result = NtQueryInstallUILanguage(&v46);
    v39 = result;
    if ( result < 0 )
      return result;
    if ( RtlpLoadInstallLanguageFallback((int)a2, &v41, &v43) >= 0 )
    {
      v11 = v41;
      v12 = (unsigned __int16)v43;
    }
    else
    {
      v11 = 0;
      v12 = 0;
      LOWORD(v43) = 0;
    }
    v41 = v12;
    IsUILanguageComitted = ZwIsUILanguageComitted();
    v9 = v46;
    if ( IsUILanguageComitted >= 0 )
    {
      a2[4] = v41;
      a2[3] = v11;
      a2[2] = v9;
    }
  }
  if ( v40[2] == v9
    && v11
    && (v44 = 512, v35.Buffer = v49, v35.MaximumLength = 170, RtlLCIDToCultureName(v11, &v35))
    && ZwQueryValueKey(v42, &v35, KeyValueFullInformation, &v50, 0x200u, &v44) >= 0
    && (int)_RtlpMuiRegValidateAndGetInstallFallbackBase(v43, v48, v15) >= 0
    && _RtlpMuiRegAddBaseLanguage((int)a2, v40, 0, (int)&v50, v48) >= 0 )
  {
    v47 = 1;
    v16 = (const WCHAR *)wcslen(v49);
    v45 = v16;
  }
  else
  {
    v16 = v45;
  }
  RtlInitUnicodeString(&v35, L"DefaultFallback");
  v43 = 1;
  v44 = 170;
  if ( LdrpQueryValueKey(v42, &v35, &v43, &v54, &v44, v17) >= 0
    && v43 == 1
    && (!v16
     || (LODWORD(v32) = 1,
         HIDWORD(v26) = v49,
         LODWORD(v26) = v44 >> 1,
         RtlCompareUnicodeStrings(&v54, v26, v16, v32, v33))) )
  {
    RtlInitUnicodeString(&v35, &v54);
    v44 = 512;
    v18 = ZwQueryValueKey(v42, &v35, KeyValueFullInformation, &v50, 0x200u, &v44);
    v19 = v47;
    if ( v18 >= 0 && v51 == 7 && _RtlpMuiRegAddBaseLanguage((int)a2, v40, v47, (int)&v50, 0) >= 0 )
    {
      ++v19;
      v20 = &v54;
      v47 = v19;
      do
        v21 = *v20++;
      while ( v21 != (_WORD)v36 );
      v38 = ((char *)v20 - v55) >> 1;
    }
  }
  else
  {
    v19 = v47;
  }
  if ( v39 != -2147483622 )
  {
    for ( i = v37; v19 < 4 && NtEnumerateValueKey(v42, i, KeyValueFullInformation, &v50, 0x200u, &v34) >= 0; i = ++v37 )
    {
      if ( v51 == 7 )
      {
        if ( v52 > 0x200 )
          goto LABEL_47;
        v23 = v45;
        if ( v38 || v45 )
        {
          v24 = v52 >> 1;
          v39 = (unsigned __int16)v53[v52 >> 1];
          v53[v52 >> 1] = 0;
          v25 = v52;
          v36 = v52;
          if ( v23 )
          {
            LODWORD(v32) = 1;
            HIDWORD(v27) = v49;
            LODWORD(v27) = v52 >> 1;
            if ( !RtlCompareUnicodeStrings(v53, v27, v23, v32, v33) )
              goto LABEL_47;
            v25 = v36;
          }
          if ( v38 )
          {
            LODWORD(v32) = 1;
            HIDWORD(v28) = &v54;
            LODWORD(v28) = v25 >> 1;
            if ( !RtlCompareUnicodeStrings(v53, v28, (PCWCH)v38, v32, v33) )
            {
LABEL_47:
              v19 = v47;
              continue;
            }
          }
          v53[v24] = v39;
        }
        v19 = v47;
        if ( _RtlpMuiRegAddBaseLanguage((int)a2, v40, v47, (int)&v50, 0) >= 0 )
          v47 = ++v19;
      }
    }
  }
  if ( a7 )
    *a7 = v19;
  return 0;
}
