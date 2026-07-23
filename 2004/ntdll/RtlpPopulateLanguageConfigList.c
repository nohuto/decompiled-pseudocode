/*
 * XREFs of RtlpPopulateLanguageConfigList @ 0x180105A88
 * Callers:
 *     RtlpLoadLanguageConfigList @ 0x18003F47C (RtlpLoadLanguageConfigList.c)
 * Callees:
 *     RtlStringCbLengthW @ 0x1800445F8 (RtlStringCbLengthW.c)
 *     RtlpMuiRegGetLanguageSpec @ 0x18006F634 (RtlpMuiRegGetLanguageSpec.c)
 *     RtlpMuiRegCreateLanguageConfigList @ 0x18007DF44 (RtlpMuiRegCreateLanguageConfigList.c)
 *     __security_check_cookie @ 0x18008C240 (__security_check_cookie.c)
 *     ZwEnumerateValueKey @ 0x18009D070 (ZwEnumerateValueKey.c)
 *     RtlpMuiRegConfigListAddLanguage @ 0x180103E24 (RtlpMuiRegConfigListAddLanguage.c)
 *     RtlpMuiRegValidateConfigNode @ 0x1801058C8 (RtlpMuiRegValidateConfigNode.c)
 */

__int64 __fastcall RtlpPopulateLanguageConfigList(void *a1, _QWORD *a2, __int64 a3)
{
  unsigned __int8 *v3; // rbp
  int v4; // r11d
  __int64 v5; // r12
  _QWORD *v7; // rdi
  ULONG v8; // eax
  NTSTATUS v9; // eax
  __int64 v10; // r9
  int v11; // ebx
  unsigned int v12; // ecx
  unsigned __int64 v13; // rsi
  __int16 v14; // r15
  int LanguageSpec; // eax
  __int64 v16; // r9
  __int16 v17; // ax
  __int16 v18; // r13
  __int16 v19; // r13
  __int64 v20; // rax
  WCHAR *v21; // rsi
  int v22; // r15d
  int v23; // r15d
  unsigned __int16 v24; // r12
  __int16 v25; // ax
  __int64 v26; // rcx
  int v27; // eax
  _QWORD *LanguageConfigList; // rax
  int v29; // eax
  _QWORD *v30; // rax
  char v32; // [rsp+50h] [rbp+0h] BYREF

  v3 = (unsigned __int8 *)((unsigned __int64)&v32 & 0xFFFFFFFFFFFFFFE0uLL);
  LOWORD(v4) = 0;
  *((_QWORD *)v3 + 3) = a3;
  *((_QWORD *)v3 + 6) = a1;
  v5 = a3;
  v7 = 0LL;
  if ( !a1 || !a2 || !a3 )
  {
    v11 = -1073741811;
    goto LABEL_36;
  }
  v7 = (_QWORD *)*a2;
  v8 = 0;
  *(_QWORD *)(((unsigned __int64)&v32 & 0xFFFFFFFFFFFFFFE0uLL) + 0x10) = *a2;
  *(_DWORD *)(((unsigned __int64)&v32 & 0xFFFFFFFFFFFFFFE0uLL) + 4) = 0;
  while ( 1 )
  {
    v9 = ZwEnumerateValueKey(a1, v8, KeyValueFullInformation, v3 + 96, 0x200u, (PULONG)v3 + 8);
    v4 = 0;
    v11 = v9;
    if ( v9 < 0 )
    {
      if ( v9 != -2147483622 )
        goto LABEL_36;
LABEL_30:
      v8 = *(_DWORD *)(((unsigned __int64)&v32 & 0xFFFFFFFFFFFFFFE0uLL) + 4) + 1;
      *(_DWORD *)(((unsigned __int64)&v32 & 0xFFFFFFFFFFFFFFE0uLL) + 4) = v8;
      goto LABEL_32;
    }
    if ( *(_DWORD *)(((unsigned __int64)&v32 & 0xFFFFFFFFFFFFFFE0uLL) + 0x64) == 7 )
    {
      v12 = *(_DWORD *)(((unsigned __int64)&v32 & 0xFFFFFFFFFFFFFFE0uLL) + 0x70);
      if ( v12 + 24 <= 0x200 )
      {
        v13 = (unsigned __int64)v12 >> 1;
        v14 = *(_WORD *)(((unsigned __int64)&v32 & 0xFFFFFFFFFFFFFFE0uLL) + 0x74 + 2 * v13);
        *(_WORD *)(((unsigned __int64)&v32 & 0xFFFFFFFFFFFFFFE0uLL) + 0x74 + 2 * v13) = 0;
        LanguageSpec = RtlpMuiRegGetLanguageSpec(
                         v5,
                         (WCHAR *)v3 + 58,
                         (char *)((unsigned __int64)&v32 & 0xFFFFFFFFFFFFFFE0uLL),
                         v10,
                         (__int16 *)v3 + 4);
        v4 = 0;
        v11 = LanguageSpec;
        if ( LanguageSpec >= 0 )
        {
          v17 = *(_WORD *)(((unsigned __int64)&v32 & 0xFFFFFFFFFFFFFFE0uLL) + 8);
          v18 = *v3;
          *(_WORD *)(((unsigned __int64)&v32 & 0xFFFFFFFFFFFFFFE0uLL) + 0x74 + 2 * v13) = v14;
          v19 = v18 << 14;
          *(_WORD *)(((unsigned __int64)&v32 & 0xFFFFFFFFFFFFFFE0uLL) + 0x38) = v17;
          v20 = *(unsigned int *)(((unsigned __int64)&v32 & 0xFFFFFFFFFFFFFFE0uLL) + 0x68);
          *(_QWORD *)(((unsigned __int64)&v32 & 0xFFFFFFFFFFFFFFE0uLL) + 0x3C) = 0LL;
          *(_WORD *)(((unsigned __int64)&v32 & 0xFFFFFFFFFFFFFFE0uLL) + 0x3A) = v19;
          v21 = (WCHAR *)&v3[v20 + 96];
          if ( !v21 )
            goto LABEL_28;
          v22 = *(_DWORD *)(((unsigned __int64)&v32 & 0xFFFFFFFFFFFFFFE0uLL) + 0x6C);
          if ( v22 )
          {
            v23 = 2 * v22;
            v24 = 0;
            do
            {
              if ( *v21 == (_WORD)v4 || v23 <= 0 || v24 >= 3u )
                break;
              if ( (int)RtlpMuiRegGetLanguageSpec(
                          *(_QWORD *)(((unsigned __int64)&v32 & 0xFFFFFFFFFFFFFFE0uLL) + 0x18),
                          v21,
                          (char *)v3 + 1,
                          v16,
                          (__int16 *)v3 + 6) >= 0 )
              {
                v25 = *(_WORD *)(((unsigned __int64)&v32 & 0xFFFFFFFFFFFFFFE0uLL) + 0xC);
                *(_WORD *)(((unsigned __int64)&v32 & 0xFFFFFFFFFFFFFFE0uLL) + 0x3A) = ((*(_BYTE *)(((unsigned __int64)&v32 & 0xFFFFFFFFFFFFFFE0uLL)
                                                                                                 + 1) & 3) << (2 * v24)) | v19 & ~(3 << (2 * v24));
                *(_WORD *)(((unsigned __int64)&v32 & 0xFFFFFFFFFFFFFFE0uLL) + 0x3E + 2LL * v24) = v25;
                v19 = *(_WORD *)(((unsigned __int64)&v32 & 0xFFFFFFFFFFFFFFE0uLL) + 0x3A);
              }
              v11 = RtlStringCbLengthW(v21, v23, (_QWORD *)v3 + 5);
              if ( v11 < 0 )
                goto LABEL_20;
              v26 = *(_QWORD *)(((unsigned __int64)&v32 & 0xFFFFFFFFFFFFFFE0uLL) + 0x28);
              v23 += -2 - v26;
              ++v24;
              v21 = (WCHAR *)((char *)v21 + v26 + 2);
            }
            while ( v21 );
            v11 = v4;
LABEL_20:
            v5 = *(_QWORD *)(((unsigned __int64)&v32 & 0xFFFFFFFFFFFFFFE0uLL) + 0x18);
          }
          else
          {
LABEL_28:
            v11 = -1073741811;
          }
          if ( v11 >= 0 )
          {
            v27 = RtlpMuiRegValidateConfigNode(v5, (unsigned __int16 *)v3 + 28);
            v4 = 0;
            v11 = v27;
            if ( v27 >= 0 )
            {
              if ( !v7 )
              {
                LanguageConfigList = RtlpMuiRegCreateLanguageConfigList(-1);
                *(_QWORD *)(((unsigned __int64)&v32 & 0xFFFFFFFFFFFFFFE0uLL) + 0x10) = LanguageConfigList;
                if ( !LanguageConfigList )
                {
                  v11 = -1073741801;
                  goto LABEL_38;
                }
                *a2 = LanguageConfigList;
              }
              v29 = RtlpMuiRegConfigListAddLanguage((__int64 *)v3 + 2, (__int16 *)v3 + 28);
              v7 = *(_QWORD **)(((unsigned __int64)&v32 & 0xFFFFFFFFFFFFFFE0uLL) + 0x10);
              v4 = 0;
              v11 = v29;
              if ( v29 >= 0 )
                *a2 = v7;
            }
          }
        }
        goto LABEL_30;
      }
    }
    v8 = *(_DWORD *)(((unsigned __int64)&v32 & 0xFFFFFFFFFFFFFFE0uLL) + 4);
LABEL_32:
    if ( v11 == -2147483622 )
      break;
    a1 = *(void **)(((unsigned __int64)&v32 & 0xFFFFFFFFFFFFFFE0uLL) + 0x30);
  }
  v11 = v4;
LABEL_36:
  if ( !v7 && v11 != -1073741811 )
  {
LABEL_38:
    v30 = RtlpMuiRegCreateLanguageConfigList(1);
    LOWORD(v4) = 0;
    *a2 = v30;
    v7 = v30;
    if ( !v30 )
      v11 = -1073741801;
  }
  if ( v11 < 0 && v7 )
    *((_WORD *)v7 + 2) = v4;
  return (unsigned int)v11;
}
