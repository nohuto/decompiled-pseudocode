/*
 * XREFs of LdrpMergeLangFallbackLists @ 0x18003A52C
 * Callers:
 *     RtlGetThreadPreferredUILanguages @ 0x180035CA0 (RtlGetThreadPreferredUILanguages.c)
 *     RtlGetSystemPreferredUILanguages @ 0x180075FA0 (RtlGetSystemPreferredUILanguages.c)
 *     RtlGetUserPreferredUILanguages @ 0x18007C0B0 (RtlGetUserPreferredUILanguages.c)
 * Callees:
 *     RtlpMuiRegFreeLanguageList @ 0x1800207AC (RtlpMuiRegFreeLanguageList.c)
 *     RtlFreeHeap @ 0x180024760 (RtlFreeHeap.c)
 *     RtlAllocateHeap @ 0x18002A9A0 (RtlAllocateHeap.c)
 *     LdrpCreateLangFallbackList @ 0x180038974 (LdrpCreateLangFallbackList.c)
 *     GetNameFromLangListNode @ 0x18003AC14 (GetNameFromLangListNode.c)
 *     RtlLCIDToCultureName @ 0x18003B020 (RtlLCIDToCultureName.c)
 *     RtlpMuiRegGetInstalledLanguageIndexByLangId @ 0x18003B104 (RtlpMuiRegGetInstalledLanguageIndexByLangId.c)
 *     LdrpLangFallbackListAppendNode @ 0x18003B528 (LdrpLangFallbackListAppendNode.c)
 *     RtlpFilterandReplaceConsoleLanguages @ 0x18003C2D4 (RtlpFilterandReplaceConsoleLanguages.c)
 *     RtlpLoadInstallLanguageFallback @ 0x18008BCC8 (RtlpLoadInstallLanguageFallback.c)
 *     NtIsUILanguageComitted @ 0x18009F100 (NtIsUILanguageComitted.c)
 *     NtQueryInstallUILanguage @ 0x18009FAA0 (NtQueryInstallUILanguage.c)
 *     LdrpMergeParentBaseLanguagesToList @ 0x1800EEEB0 (LdrpMergeParentBaseLanguagesToList.c)
 */

__int64 __fastcall LdrpMergeLangFallbackLists(
        int a1,
        __int64 a2,
        PVOID *a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        __int64 a7,
        __int64 a8,
        char a9)
{
  unsigned __int64 v11; // r14
  __int64 v12; // r15
  int v13; // esi
  __int64 v14; // rax
  unsigned int v15; // ecx
  __int64 v16; // r12
  PVOID *v17; // rbx
  int LangFallbackList; // ebx
  __int64 v19; // r8
  __int64 v20; // r9
  int v21; // r13d
  __int64 v22; // rax
  unsigned int v23; // ebx
  _WORD *v24; // rdx
  int v25; // r8d
  __int64 v26; // rax
  _BYTE *v27; // rdx
  LANGID v28; // si
  __int64 v29; // r8
  wchar_t *Buffer; // rsi
  PVOID *v31; // r14
  _BYTE *v32; // rdx
  __int64 v33; // r8
  _BYTE *v34; // rdx
  _WORD *v36; // rdx
  __int64 v37; // rcx
  unsigned int i; // esi
  _WORD *v39; // rdx
  __int64 v40; // rcx
  __int64 v41; // r9
  char v42; // [rsp+28h] [rbp-79h]
  char v43; // [rsp+28h] [rbp-79h]
  char v44; // [rsp+28h] [rbp-79h]
  char v45; // [rsp+38h] [rbp-69h]
  LANGID InstallUILanguageId; // [rsp+3Ch] [rbp-65h] BYREF
  _WORD v47[2]; // [rsp+40h] [rbp-61h] BYREF
  __int16 v48; // [rsp+44h] [rbp-5Dh] BYREF
  wchar_t *Heap; // [rsp+48h] [rbp-59h]
  __int16 v50; // [rsp+50h] [rbp-51h] BYREF
  PVOID *p_BaseAddress; // [rsp+58h] [rbp-49h]
  int v52; // [rsp+60h] [rbp-41h]
  int v53; // [rsp+68h] [rbp-39h] BYREF
  __int64 v54; // [rsp+70h] [rbp-31h]
  unsigned int v55; // [rsp+78h] [rbp-29h]
  unsigned int v56; // [rsp+7Ch] [rbp-25h]
  PVOID BaseAddress; // [rsp+80h] [rbp-21h] BYREF
  int v58; // [rsp+88h] [rbp-19h]
  _UNICODE_STRING String; // [rsp+90h] [rbp-11h] BYREF
  char v60; // [rsp+E8h] [rbp+47h]

  v60 = a1;
  v56 = 0;
  v52 = 0;
  v47[0] = -1;
  v50 = -1;
  v11 = 0LL;
  v48 = -1;
  v12 = 0LL;
  BaseAddress = 0LL;
  v45 = 0;
  String = 0LL;
  if ( !a3 || !*a3 || !a2 || *((_WORD *)*a3 + 2) )
    return 3221225485LL;
  v13 = a1 & 0x10000;
  if ( NtCurrentTeb()->UserPrefLanguages )
    v14 = *(_QWORD *)NtCurrentTeb()->UserPrefLanguages;
  else
    v14 = 0LL;
  if ( v14 )
  {
    v15 = *(_DWORD *)(v14 + 40);
    v55 = v15;
  }
  else
  {
    v15 = 0;
    v55 = 0;
  }
  v16 = 0LL;
  LODWORD(v17) = (_DWORD)a3;
  p_BaseAddress = a3;
  if ( !v13 && (v15 & 6) != 0 )
  {
    v45 = 1;
    v56 = HIWORD(v15);
    p_BaseAddress = &BaseAddress;
    LangFallbackList = LdrpCreateLangFallbackList((__int64 *)&BaseAddress, a2, 0x19u, 0);
    if ( LangFallbackList < 0 )
      goto LABEL_54;
    v17 = &BaseAddress;
  }
  Heap = (wchar_t *)RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, 8u, 0x154uLL);
  v19 = (__int64)Heap;
  if ( !Heap )
    return 3221225495LL;
  v20 = 170LL;
  if ( !v13 && a4 && *(_WORD *)(a4 + 4) )
  {
    do
    {
      v36 = (_WORD *)(*(_QWORD *)(a4 + 24) + 6 * v11);
      if ( *v36 )
      {
        v54 = v19;
        v37 = a2;
        v53 = 11141120;
        if ( *(_QWORD *)(a4 + 16) )
          v37 = *(_QWORD *)(a4 + 16);
        if ( (int)GetNameFromLangListNode(v37, v36, &v53, 170LL) >= 0 )
        {
          LangFallbackList = LdrpLangFallbackListAppendNode((_DWORD)v17, a2, 0, (unsigned int)v47, v54);
          if ( LangFallbackList < 0 )
            goto LABEL_53;
        }
        v19 = (__int64)Heap;
        v20 = 170LL;
      }
      v11 = (unsigned int)(v11 + 1);
      LODWORD(v17) = (_DWORD)p_BaseAddress;
    }
    while ( (unsigned int)v11 < *(unsigned __int16 *)(a4 + 4) );
  }
  v21 = (int)p_BaseAddress;
  if ( a5 )
  {
    if ( !v13 )
    {
      for ( i = 0; i < *(unsigned __int16 *)(a5 + 4); v19 = (__int64)Heap )
      {
        v39 = (_WORD *)(*(_QWORD *)(a5 + 24) + 6LL * i);
        if ( *v39 )
        {
          v54 = v19;
          v40 = a2;
          v53 = 11141120;
          if ( *(_QWORD *)(a5 + 16) )
            v40 = *(_QWORD *)(a5 + 16);
          if ( (int)GetNameFromLangListNode(v40, v39, &v53, v20) >= 0 )
          {
            LangFallbackList = LdrpLangFallbackListAppendNode(v21, a2, 0, (unsigned int)v47, v54);
            if ( LangFallbackList < 0 )
              goto LABEL_53;
          }
        }
        ++i;
      }
    }
  }
  v58 = v60 & 0x20;
  if ( (v60 & 0x20) != 0 && ((v22 = a6) != 0 && *(_WORD *)(a6 + 4) || (v22 = a7) != 0 && *(_WORD *)(a7 + 4)) )
  {
    v16 = v22;
    if ( *(_BYTE *)(v22 + 8) )
    {
      v12 = *(_QWORD *)(a2 + 40);
    }
    else
    {
      v12 = a8;
      if ( !a8 )
        v12 = *(_QWORD *)(a2 + 48);
    }
    v23 = 0;
    if ( *(_WORD *)(v22 + 4) )
    {
      do
      {
        v24 = (_WORD *)(*(_QWORD *)(v16 + 24) + 6LL * v23);
        if ( *v24 )
        {
          v54 = (__int64)Heap;
          v53 = 11141120;
          if ( (int)GetNameFromLangListNode(a2, v24, &v53, v20) >= 0 )
          {
            LOBYTE(v25) = 1;
            if ( (int)LdrpLangFallbackListAppendNode(v21, a2, v25, (unsigned int)v47, v54) >= 0 && (v60 & 0x10) != 0 )
            {
              v26 = *(_QWORD *)(v16 + 24);
              if ( *(_WORD *)(v26 + 6LL * v23) == 2 )
              {
                v27 = (_BYTE *)(*(_QWORD *)(*(_QWORD *)(a2 + 24) + 16LL) + 28LL * *(__int16 *)(v26 + 6LL * v23 + 4));
                if ( (*v27 & 7) != 0
                  && ((*v27 & 6) == 0 || (int)LdrpMergeParentBaseLanguagesToList(v21, (_DWORD)v27, a2, v12, v42) >= 0) )
                {
                  ++v52;
                }
              }
            }
          }
        }
        ++v23;
      }
      while ( v23 < *(unsigned __int16 *)(v16 + 4) );
    }
  }
  v11 = (unsigned __int64)Heap;
  LangFallbackList = 0;
  InstallUILanguageId = 0;
  v28 = 0;
  *(_DWORD *)&String.Length = 11141120;
  String.Buffer = Heap + 85;
  if ( *(_WORD *)(a2 + 4) )
  {
    v28 = *(_WORD *)(a2 + 4);
  }
  else
  {
    LangFallbackList = NtQueryInstallUILanguage(&InstallUILanguageId);
    if ( LangFallbackList >= 0 )
    {
      if ( NtIsUILanguageComitted() >= 0 )
      {
        RtlpLoadInstallLanguageFallback(a2, a2 + 6, a2 + 8);
        *(_WORD *)(a2 + 4) = InstallUILanguageId;
      }
      v28 = InstallUILanguageId;
    }
  }
  if ( LangFallbackList < 0 )
    goto LABEL_54;
  if ( !RtlLCIDToCultureName(v28, &String) )
  {
    LangFallbackList = -1073741823;
    goto LABEL_54;
  }
  LOBYTE(v29) = 1;
  LangFallbackList = RtlpMuiRegGetInstalledLanguageIndexByLangId(a2, v28, v29, &v48);
  if ( LangFallbackList >= 0 )
  {
    Buffer = String.Buffer;
    if ( (v60 & 0x40) != 0 || a9 && v52 )
    {
      v31 = p_BaseAddress;
    }
    else
    {
      v31 = p_BaseAddress;
      LangFallbackList = LdrpLangFallbackListAppendNode(
                           (_DWORD)p_BaseAddress,
                           a2,
                           0,
                           (unsigned int)&v50,
                           (__int64)String.Buffer);
      if ( LangFallbackList >= 0 )
      {
        if ( v58 )
        {
          v32 = (_BYTE *)(*(_QWORD *)(*(_QWORD *)(a2 + 24) + 16LL) + 28LL * v48);
          if ( (*v32 & 6) != 0 )
          {
            if ( !v16 || (LODWORD(v41) = v12, !v12) )
              v41 = *(_QWORD *)(a2 + 40);
            LangFallbackList = LdrpMergeParentBaseLanguagesToList((_DWORD)v31, (_DWORD)v32, a2, v41, v43);
            if ( LangFallbackList < 0 )
              goto LABEL_53;
          }
        }
      }
    }
    if ( v45 )
    {
      if ( v31 )
      {
        v33 = v55 >> 2;
        LOBYTE(v33) = (v55 & 4) != 0;
        LangFallbackList = RtlpFilterandReplaceConsoleLanguages(*v31, a2, v33, v56, a3);
        if ( LangFallbackList >= 0 && (v60 & 0x30) == 0x30 )
        {
          LangFallbackList = LdrpLangFallbackListAppendNode((_DWORD)a3, a2, 0, (unsigned int)&v50, (__int64)Buffer);
          if ( LangFallbackList >= 0 )
          {
            v34 = (_BYTE *)(*(_QWORD *)(*(_QWORD *)(a2 + 24) + 16LL) + 28LL * v48);
            if ( (*v34 & 6) != 0 )
            {
              if ( !v16 || !v12 )
                v12 = *(_QWORD *)(a2 + 40);
              LangFallbackList = LdrpMergeParentBaseLanguagesToList((_DWORD)a3, (_DWORD)v34, a2, v12, v44);
            }
          }
        }
      }
    }
LABEL_53:
    v11 = (unsigned __int64)Heap;
  }
LABEL_54:
  if ( BaseAddress )
    RtlpMuiRegFreeLanguageList(BaseAddress);
  if ( v11 )
    RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, (PVOID)v11);
  return (unsigned int)LangFallbackList;
}
