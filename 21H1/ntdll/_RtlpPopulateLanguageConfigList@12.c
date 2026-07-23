/*
 * XREFs of _RtlpPopulateLanguageConfigList@12 @ 0x4B2AD962
 * Callers:
 *     _RtlpLoadLanguageConfigList@12 @ 0x4B2ACFED (_RtlpLoadLanguageConfigList@12.c)
 * Callees:
 *     _RtlpMuiRegGetLanguageSpec@20 @ 0x4B2ACBB5 (_RtlpMuiRegGetLanguageSpec@20.c)
 *     _RtlpMuiRegCreateLanguageConfigList@4 @ 0x4B2ADA68 (_RtlpMuiRegCreateLanguageConfigList@4.c)
 *     _NtEnumerateValueKey@24 @ 0x4B2F2A90 (_NtEnumerateValueKey@24.c)
 *     @__security_check_cookie@4 @ 0x4B2F4B20 (@__security_check_cookie@4.c)
 *     _RtlStringCbLengthW@12 @ 0x4B3475AA (_RtlStringCbLengthW@12.c)
 *     _RtlpMuiRegConfigListAddLanguage@12 @ 0x4B36ADDD (_RtlpMuiRegConfigListAddLanguage@12.c)
 *     _RtlpMuiRegValidateConfigNode@8 @ 0x4B36BE8D (_RtlpMuiRegValidateConfigNode@8.c)
 */

int __userpurge RtlpPopulateLanguageConfigList@<eax>(HANDLE KeyHandle@<ecx>, int *a2@<edx>, int a3@<ebp>, int a4)
{
  HANDLE v5; // edx
  int v6; // edi
  ULONG v7; // eax
  NTSTATUS v8; // eax
  int LanguageSpec; // esi
  int v11; // ecx
  const WCHAR *v12; // esi
  int v13; // ecx
  unsigned __int16 v14; // ax
  int v15; // ecx
  int *v16; // ecx
  int LanguageConfigList; // eax
  int v18; // eax
  ULONG v19; // [esp-260h] [ebp-26Ch] BYREF
  HANDLE v20; // [esp-25Ch] [ebp-268h]
  int v21; // [esp-258h] [ebp-264h] BYREF
  int *v22; // [esp-254h] [ebp-260h]
  int v23; // [esp-250h] [ebp-25Ch]
  int v24; // [esp-24Ch] [ebp-258h]
  __int16 v25; // [esp-248h] [ebp-254h] BYREF
  __int16 v26; // [esp-244h] [ebp-250h] BYREF
  const WCHAR *v27; // [esp-240h] [ebp-24Ch]
  ULONG v28; // [esp-23Ch] [ebp-248h]
  int v29; // [esp-238h] [ebp-244h]
  int v30; // [esp-234h] [ebp-240h]
  __int16 v31; // [esp-230h] [ebp-23Ch]
  char v32; // [esp-22Eh] [ebp-23Ah] BYREF
  unsigned __int8 v33; // [esp-22Dh] [ebp-239h] BYREF
  __int16 v34; // [esp-22Ch] [ebp-238h] BYREF
  __int16 v35; // [esp-22Ah] [ebp-236h]
  _DWORD v36[2]; // [esp-228h] [ebp-234h]
  _BYTE v37[4]; // [esp-220h] [ebp-22Ch] BYREF
  int v38; // [esp-21Ch] [ebp-228h]
  int v39; // [esp-218h] [ebp-224h]
  int v40; // [esp-214h] [ebp-220h]
  unsigned int v41; // [esp-210h] [ebp-21Ch]
  WCHAR v42[262]; // [esp-20Ch] [ebp-218h] BYREF
  int v43; // [esp+0h] [ebp-Ch]
  void *v44; // [esp+4h] [ebp-8h]
  void *retaddr; // [esp+Ch] [ebp+0h]

  v43 = a3;
  v44 = retaddr;
  v5 = KeyHandle;
  v22 = a2;
  v20 = KeyHandle;
  v23 = a4;
  v6 = 0;
  if ( KeyHandle && a2 && a4 )
  {
    v6 = *a2;
    v7 = 0;
    v29 = v6;
    v28 = 0;
    while ( 1 )
    {
      v8 = NtEnumerateValueKey(v5, v7, KeyValueFullInformation, v37, 0x200u, &v19);
      LanguageSpec = v8;
      if ( v8 < 0 )
        break;
      if ( v38 == 7 && v41 + 24 <= 0x200 )
      {
        v11 = v41 >> 1;
        v27 = (const WCHAR *)v11;
        v30 = (unsigned __int16)v42[v41 >> 1];
        v42[v11] = 0;
        LanguageSpec = RtlpMuiRegGetLanguageSpec(v23, v42, (char *)&v33, v11, &v26);
        if ( LanguageSpec >= 0 )
        {
          v31 = v33 << 14;
          v35 = v31;
          v34 = v26;
          v36[0] = 0;
          v36[1] = 0;
          v42[(_DWORD)v27] = v30;
          v12 = (const WCHAR *)&v37[v39];
          v27 = (const WCHAR *)&v37[v39];
          if ( !&v37[v39] )
            goto LABEL_32;
          if ( v40 )
          {
            v13 = 2 * v40;
            v14 = 0;
            v24 = 2 * v40;
            v30 = 0;
            do
            {
              if ( !*v12 || v13 <= 0 || v14 >= 3u )
                break;
              if ( RtlpMuiRegGetLanguageSpec(v23, v12, &v32, 3, &v25) >= 0 )
              {
                v15 = 2 * (unsigned __int16)v30;
                v35 = ((v32 & 3) << v15) | v31 & ~(3 << v15);
                *(_WORD *)((char *)v36 + v15 + 2) = v25;
                v31 = v35;
              }
              LanguageSpec = RtlStringCbLengthW(&v21);
              if ( LanguageSpec < 0 )
                goto LABEL_7;
              v12 = (const WCHAR *)((char *)v27 + v21 + 2);
              v13 = -2 - v21 + v24;
              v27 = v12;
              v14 = v30 + 1;
              v24 = v13;
              ++v30;
            }
            while ( v12 );
            LanguageSpec = 0;
          }
          else
          {
LABEL_32:
            LanguageSpec = -1073741811;
          }
          if ( LanguageSpec >= 0 )
          {
            LanguageSpec = RtlpMuiRegValidateConfigNode(v23, &v34);
            if ( LanguageSpec >= 0 )
            {
              if ( !v6 )
              {
                LanguageConfigList = RtlpMuiRegCreateLanguageConfigList(-1);
                v29 = LanguageConfigList;
                if ( !LanguageConfigList )
                {
                  LanguageSpec = -1073741801;
                  goto LABEL_12;
                }
                v16 = v22;
                *v22 = LanguageConfigList;
              }
              v18 = RtlpMuiRegConfigListAddLanguage(v16);
              v6 = v29;
              LanguageSpec = v18;
              if ( v18 >= 0 )
                *v22 = v29;
            }
          }
        }
        goto LABEL_7;
      }
      v7 = v28;
LABEL_8:
      if ( LanguageSpec == -2147483622 )
      {
        LanguageSpec = 0;
        goto LABEL_10;
      }
      v5 = v20;
    }
    if ( v8 != -2147483622 )
      goto LABEL_10;
LABEL_7:
    v7 = ++v28;
    goto LABEL_8;
  }
  LanguageSpec = -1073741811;
LABEL_10:
  if ( !v6 && LanguageSpec != -1073741811 )
  {
LABEL_12:
    v6 = RtlpMuiRegCreateLanguageConfigList(1);
    if ( !v6 )
      LanguageSpec = -1073741801;
    *v22 = v6;
  }
  if ( LanguageSpec < 0 && v6 )
    *(_WORD *)(v6 + 4) = 0;
  return LanguageSpec;
}
