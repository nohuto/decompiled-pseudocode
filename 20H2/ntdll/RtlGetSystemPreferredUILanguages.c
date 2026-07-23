/*
 * XREFs of RtlGetSystemPreferredUILanguages @ 0x180075FA0
 * Callers:
 *     RtlGetUserPreferredUILanguages @ 0x18007C0B0 (RtlGetUserPreferredUILanguages.c)
 * Callees:
 *     RtlpMuiRegFreeLanguageList @ 0x1800207AC (RtlpMuiRegFreeLanguageList.c)
 *     RtlpCreateProcessRegistryInfo @ 0x180036490 (RtlpCreateProcessRegistryInfo.c)
 *     LdrpConvertLangFallbackListToMultiSz @ 0x18003681C (LdrpConvertLangFallbackListToMultiSz.c)
 *     RtlpSetProcUserMachineLangList @ 0x180038514 (RtlpSetProcUserMachineLangList.c)
 *     LdrpCreateLangFallbackList @ 0x180038974 (LdrpCreateLangFallbackList.c)
 *     LdrpMergeLangFallbackLists @ 0x18003A52C (LdrpMergeLangFallbackLists.c)
 *     RtlpMuiRegGetInstalledLanguageIndexByName @ 0x18003AA98 (RtlpMuiRegGetInstalledLanguageIndexByName.c)
 *     RtlInitUnicodeString @ 0x18003BA40 (RtlInitUnicodeString.c)
 *     LdrpMergeParentBaseLanguagesToList @ 0x1800EEEB0 (LdrpMergeParentBaseLanguagesToList.c)
 *     RtlIsValidLocaleName @ 0x1800FD1D0 (RtlIsValidLocaleName.c)
 */

NTSTATUS __cdecl RtlGetSystemPreferredUILanguages(
        ULONG Flags,
        PCWSTR LocaleName,
        PULONG NumberOfLanguages,
        PZZWSTR Languages,
        PULONG ReturnLength)
{
  PULONG v5; // r8
  ULONG v8; // edi
  ULONG v9; // ebx
  void *v10; // r14
  int v11; // edx
  int v12; // ecx
  int v13; // r12d
  char v14; // r15
  int v15; // eax
  int v16; // ecx
  ULONG v17; // ebx
  NTSTATUS result; // eax
  _QWORD *v19; // rdi
  int v20; // eax
  NTSTATUS LangFallbackList; // ebx
  unsigned int *v22; // r9
  _QWORD *v23; // rsi
  NTSTATUS v24; // eax
  ULONG v25; // r15d
  int v26; // eax
  char v27; // r14
  _BYTE *v28; // rdx
  __int64 v29; // r9
  bool v30; // cf
  unsigned int i; // ecx
  __int64 v32; // r10
  _BYTE *v33; // rdx
  __int64 v34; // r9
  char v35; // [rsp+28h] [rbp-51h]
  char v36; // [rsp+30h] [rbp-49h]
  bool v37; // [rsp+58h] [rbp-21h]
  __int16 v38; // [rsp+5Ch] [rbp-1Dh] BYREF
  ULONG v39; // [rsp+60h] [rbp-19h] BYREF
  ULONG v40; // [rsp+64h] [rbp-15h]
  PVOID BaseAddress; // [rsp+68h] [rbp-11h] BYREF
  void *v42; // [rsp+70h] [rbp-9h] BYREF
  _QWORD *v43; // [rsp+78h] [rbp-1h] BYREF
  _UNICODE_STRING DestinationString; // [rsp+80h] [rbp+7h] BYREF
  unsigned int v46; // [rsp+E0h] [rbp+67h]

  v5 = ReturnLength;
  v39 = 0;
  BaseAddress = 0LL;
  v42 = 0LL;
  v8 = *ReturnLength;
  v9 = Flags;
  v38 = -1;
  v10 = 0LL;
  v43 = 0LL;
  v37 = 0;
  if ( LocaleName )
  {
    v25 = Flags & 0x80;
    v9 = 4104;
    RtlInitUnicodeString(&DestinationString, LocaleName);
    if ( !RtlIsValidLocaleName(LocaleName, 2u) )
    {
      LangFallbackList = -1073741772;
LABEL_37:
      if ( Languages )
      {
        if ( v8 )
          *Languages = 0;
        if ( v8 > 1 )
          Languages[1] = 0;
      }
      return LangFallbackList;
    }
    v5 = ReturnLength;
    v37 = v25 != 0;
  }
  if ( (v9 & 0xFFFF6373) != 0 )
    return -1073741811;
  v11 = v9 | 0x80;
  if ( (v9 & 0x9880) != 0 )
    v11 = v9;
  if ( (v11 & 0xC) == 0xC )
    return -1073741811;
  v12 = v11 | 8;
  if ( (v11 & 0xC) != 0 )
    v12 = v11;
  v13 = v12 | 0x8000;
  v14 = (v12 & 0x400) == 0;
  v15 = v12 & 0x9880;
  if ( (v12 & 0x9880) != 0 )
    v13 = v12;
  v16 = 0x8000;
  if ( v15 )
    v16 = v15;
  if ( v16 != 128 && v16 != 2048 && v16 != 4096 && v16 != 0x8000 )
    return -1073741811;
  v17 = *v5;
  v40 = v17;
  if ( v17 )
  {
    if ( !Languages )
      return -1073741811;
  }
  result = RtlpCreateProcessRegistryInfo(&v43);
  if ( result >= 0 )
  {
    v19 = v43;
    if ( LocaleName && (int)RtlpMuiRegGetInstalledLanguageIndexByName((__int64)v43, LocaleName, 0, &v38) < 0 )
    {
      LangFallbackList = -1073741772;
LABEL_34:
      v8 = v40;
      goto LABEL_37;
    }
    result = RtlpSetProcUserMachineLangList((__int64)v19, 0);
    if ( result < 0 )
      return result;
    if ( (v13 & 0x800) != 0 )
    {
      *ReturnLength = v17;
      LangFallbackList = LdrpConvertLangFallbackListToMultiSz(
                           v19[7],
                           (__int64)v19,
                           Languages,
                           ReturnLength,
                           v13,
                           v14,
                           (int *)&v39);
      if ( LangFallbackList >= 0 && v39 )
        goto LABEL_29;
      LangFallbackList = LdrpCreateLangFallbackList((__int64 *)&BaseAddress, (__int64)v19, 0x19u, 1);
      if ( LangFallbackList >= 0 )
      {
        LangFallbackList = LdrpMergeLangFallbackLists(
                             v13 | 0x30u,
                             (__int64)v19,
                             &BaseAddress,
                             0LL,
                             0LL,
                             0LL,
                             0LL,
                             0LL,
                             0);
        if ( LangFallbackList >= 0 )
        {
          v22 = ReturnLength;
          *ReturnLength = v40;
          goto LABEL_23;
        }
      }
    }
    else
    {
      v20 = LdrpCreateLangFallbackList((__int64 *)&BaseAddress, (__int64)v19, 0x19u, 1);
      LangFallbackList = v20;
      if ( (v13 & 0x8080) != 0 )
      {
        if ( v20 >= 0 )
        {
          LangFallbackList = LdrpMergeLangFallbackLists(
                               v13 | 0x30u,
                               (__int64)v19,
                               &BaseAddress,
                               0LL,
                               0LL,
                               0LL,
                               v19[7],
                               0LL,
                               1);
          if ( LangFallbackList >= 0 )
          {
            v22 = ReturnLength;
LABEL_23:
            v23 = BaseAddress;
            v24 = LdrpConvertLangFallbackListToMultiSz(
                    (__int64)BaseAddress,
                    (__int64)v19,
                    Languages,
                    v22,
                    v13,
                    v14,
                    (int *)&v39);
            goto LABEL_24;
          }
        }
      }
      else if ( v20 >= 0 )
      {
        LangFallbackList = LdrpMergeLangFallbackLists(
                             v13 | 0x30u,
                             (__int64)v19,
                             &BaseAddress,
                             0LL,
                             0LL,
                             0LL,
                             v19[7],
                             0LL,
                             0);
        if ( LangFallbackList >= 0 )
        {
          v26 = LdrpCreateLangFallbackList((__int64 *)&v42, (__int64)v19, 0x19u, 1);
          v23 = BaseAddress;
          LangFallbackList = v26;
          if ( v26 < 0 )
            goto LABEL_82;
          v27 = v14;
          if ( LocaleName )
          {
            if ( v38 != -1 )
            {
              v28 = (_BYTE *)(*(_QWORD *)(v19[3] + 16LL) + 28LL * v38);
              if ( v28 )
              {
                if ( (*v28 & 2) != 0 || v37 && (*v28 & 4) != 0 )
                  v27 = 0;
                if ( *((_BYTE *)BaseAddress + 8) )
                  v29 = v19[5];
                else
                  v29 = v19[6];
                LangFallbackList = LdrpMergeParentBaseLanguagesToList(
                                     (unsigned int)&v42,
                                     (_DWORD)v28,
                                     (_DWORD)v19,
                                     v29,
                                     v35);
              }
            }
          }
          else
          {
            v30 = *((_WORD *)BaseAddress + 2) != 0;
            for ( i = 0; ; v30 = i < *((unsigned __int16 *)v23 + 2) )
            {
              v46 = i;
              if ( !v30 )
                break;
              v32 = v23[3];
              if ( *(_WORD *)(v32 + 6LL * i) == 2 )
              {
                if ( (*(_BYTE *)(28LL * *(__int16 *)(v32 + 6LL * i + 4) + *(_QWORD *)(v19[3] + 16LL)) & 2) != 0 )
                  v27 = 0;
                v33 = (_BYTE *)(*(_QWORD *)(v19[3] + 16LL) + 28LL * *(__int16 *)(v32 + 6LL * i + 4));
                if ( (*v33 & 6) != 0 )
                {
                  v34 = *((_BYTE *)v23 + 8) ? v19[5] : v19[6];
                  LangFallbackList = LdrpMergeParentBaseLanguagesToList(
                                       (unsigned int)&v42,
                                       (_DWORD)v33,
                                       (_DWORD)v19,
                                       v34,
                                       v35);
                  if ( LangFallbackList >= 0 )
                    goto LABEL_81;
                }
                i = v46;
              }
              ++i;
            }
          }
          if ( LangFallbackList < 0 )
          {
LABEL_82:
            v10 = v42;
            goto LABEL_25;
          }
LABEL_81:
          v36 = v27;
          v10 = v42;
          v24 = LdrpConvertLangFallbackListToMultiSz(
                  (__int64)v42,
                  (__int64)v19,
                  Languages,
                  ReturnLength,
                  v13,
                  v36,
                  (int *)&v39);
LABEL_24:
          LangFallbackList = v24;
LABEL_25:
          if ( v23 )
            RtlpMuiRegFreeLanguageList(v23);
          if ( v10 )
            RtlpMuiRegFreeLanguageList(v10);
LABEL_29:
          if ( LangFallbackList >= 0 )
          {
            *NumberOfLanguages = v39;
            return LangFallbackList;
          }
          goto LABEL_34;
        }
      }
    }
    v23 = BaseAddress;
    goto LABEL_25;
  }
  return result;
}
