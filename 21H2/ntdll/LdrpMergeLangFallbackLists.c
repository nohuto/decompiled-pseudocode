/*
 * XREFs of LdrpMergeLangFallbackLists @ 0x18003A52C
 * Callers:
 *     RtlGetThreadPreferredUILanguages @ 0x180035CA0 (RtlGetThreadPreferredUILanguages.c)
 *     RtlGetSystemPreferredUILanguages @ 0x180076FD0 (RtlGetSystemPreferredUILanguages.c)
 *     RtlGetUserPreferredUILanguages @ 0x18007CA50 (RtlGetUserPreferredUILanguages.c)
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
 *     RtlpLoadInstallLanguageFallback @ 0x18008C2C8 (RtlpLoadInstallLanguageFallback.c)
 *     NtIsUILanguageComitted @ 0x18009F6B0 (NtIsUILanguageComitted.c)
 *     NtQueryInstallUILanguage @ 0x1800A0050 (NtQueryInstallUILanguage.c)
 *     LdrpMergeParentBaseLanguagesToList @ 0x1800EED40 (LdrpMergeParentBaseLanguagesToList.c)
 */

__int64 __fastcall LdrpMergeLangFallbackLists(
        int a1,
        __int64 a2,
        __int64 *a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        __int64 a7,
        __int64 a8,
        char a9)
{
  __int64 v11; // r14
  __int64 v12; // r15
  int v13; // esi
  __int64 v14; // rax
  unsigned int v15; // ecx
  __int64 v16; // r12
  __int64 *v17; // rbx
  int appended; // ebx
  _WORD *v19; // rdx
  __int64 v20; // r8
  __int64 v21; // r9
  int v22; // r13d
  __int64 v23; // rax
  unsigned int v24; // ebx
  __int64 v25; // rax
  unsigned __int16 v26; // si
  __int64 v27; // r8
  __int64 v28; // rsi
  __int64 *v29; // r14
  _BYTE *v30; // rdx
  __int64 v31; // r8
  _BYTE *v32; // rdx
  __int64 v34; // rcx
  unsigned int i; // esi
  __int64 v36; // rcx
  __int64 v37; // r9
  char v38; // [rsp+28h] [rbp-79h]
  char v39; // [rsp+28h] [rbp-79h]
  char v40; // [rsp+28h] [rbp-79h]
  char v41; // [rsp+38h] [rbp-69h]
  unsigned __int16 v42; // [rsp+3Ch] [rbp-65h] BYREF
  _WORD v43[2]; // [rsp+40h] [rbp-61h] BYREF
  __int16 v44; // [rsp+44h] [rbp-5Dh] BYREF
  __int64 Heap; // [rsp+48h] [rbp-59h]
  __int16 v46; // [rsp+50h] [rbp-51h] BYREF
  __int64 *v47; // [rsp+58h] [rbp-49h]
  int v48; // [rsp+60h] [rbp-41h]
  int v49; // [rsp+68h] [rbp-39h] BYREF
  __int64 v50; // [rsp+70h] [rbp-31h]
  unsigned int v51; // [rsp+78h] [rbp-29h]
  unsigned int v52; // [rsp+7Ch] [rbp-25h]
  __int64 v53; // [rsp+80h] [rbp-21h] BYREF
  int v54; // [rsp+88h] [rbp-19h]
  __int128 v55; // [rsp+90h] [rbp-11h] BYREF
  char v56; // [rsp+E8h] [rbp+47h]

  v56 = a1;
  v52 = 0;
  v48 = 0;
  v43[0] = -1;
  v46 = -1;
  v11 = 0LL;
  v44 = -1;
  v12 = 0LL;
  v53 = 0LL;
  v41 = 0;
  v55 = 0LL;
  if ( !a3 || !*a3 || !a2 || *(_WORD *)(*a3 + 4) )
    return 3221225485LL;
  v13 = a1 & 0x10000;
  if ( NtCurrentTeb()->UserPrefLanguages )
    v14 = *(_QWORD *)NtCurrentTeb()->UserPrefLanguages;
  else
    v14 = 0LL;
  if ( v14 )
  {
    v15 = *(_DWORD *)(v14 + 40);
    v51 = v15;
  }
  else
  {
    v15 = 0;
    v51 = 0;
  }
  v16 = 0LL;
  LODWORD(v17) = (_DWORD)a3;
  v47 = a3;
  if ( !v13 && (v15 & 6) != 0 )
  {
    v41 = 1;
    v52 = HIWORD(v15);
    v47 = &v53;
    appended = LdrpCreateLangFallbackList(&v53, a2, 0x19u, 0);
    if ( appended < 0 )
      goto LABEL_54;
    v17 = &v53;
  }
  Heap = RtlAllocateHeap((__int64)NtCurrentPeb()->ProcessHeap, 8u, 340LL);
  v20 = Heap;
  if ( !Heap )
    return 3221225495LL;
  v21 = 170LL;
  if ( !v13 && a4 && *(_WORD *)(a4 + 4) )
  {
    do
    {
      v19 = (_WORD *)(*(_QWORD *)(a4 + 24) + 6 * v11);
      if ( *v19 )
      {
        v50 = v20;
        v34 = a2;
        v49 = 11141120;
        if ( *(_QWORD *)(a4 + 16) )
          v34 = *(_QWORD *)(a4 + 16);
        if ( (int)GetNameFromLangListNode(v34, v19, &v49, 170LL) >= 0 )
        {
          appended = LdrpLangFallbackListAppendNode((_DWORD)v17, a2, 0, (unsigned int)v43, v50);
          if ( appended < 0 )
            goto LABEL_53;
        }
        v20 = Heap;
        v21 = 170LL;
      }
      v11 = (unsigned int)(v11 + 1);
      LODWORD(v17) = (_DWORD)v47;
    }
    while ( (unsigned int)v11 < *(unsigned __int16 *)(a4 + 4) );
  }
  v22 = (int)v47;
  if ( a5 )
  {
    if ( !v13 )
    {
      for ( i = 0; i < *(unsigned __int16 *)(a5 + 4); v20 = Heap )
      {
        v19 = (_WORD *)(*(_QWORD *)(a5 + 24) + 6LL * i);
        if ( *v19 )
        {
          v50 = v20;
          v36 = a2;
          v49 = 11141120;
          if ( *(_QWORD *)(a5 + 16) )
            v36 = *(_QWORD *)(a5 + 16);
          if ( (int)GetNameFromLangListNode(v36, v19, &v49, v21) >= 0 )
          {
            appended = LdrpLangFallbackListAppendNode(v22, a2, 0, (unsigned int)v43, v50);
            if ( appended < 0 )
              goto LABEL_53;
          }
        }
        ++i;
      }
    }
  }
  v54 = v56 & 0x20;
  if ( (v56 & 0x20) != 0 && ((v23 = a6) != 0 && *(_WORD *)(a6 + 4) || (v23 = a7) != 0 && *(_WORD *)(a7 + 4)) )
  {
    v16 = v23;
    if ( *(_BYTE *)(v23 + 8) )
    {
      v12 = *(_QWORD *)(a2 + 40);
    }
    else
    {
      v12 = a8;
      if ( !a8 )
        v12 = *(_QWORD *)(a2 + 48);
    }
    v24 = 0;
    if ( *(_WORD *)(v23 + 4) )
    {
      do
      {
        v19 = (_WORD *)(*(_QWORD *)(v16 + 24) + 6LL * v24);
        if ( *v19 )
        {
          v50 = Heap;
          v49 = 11141120;
          if ( (int)GetNameFromLangListNode(a2, v19, &v49, v21) >= 0 )
          {
            LOBYTE(v20) = 1;
            if ( (int)LdrpLangFallbackListAppendNode(v22, a2, v20, (unsigned int)v43, v50) >= 0 && (v56 & 0x10) != 0 )
            {
              v25 = *(_QWORD *)(v16 + 24);
              if ( *(_WORD *)(v25 + 6LL * v24) == 2 )
              {
                v19 = (_WORD *)(*(_QWORD *)(*(_QWORD *)(a2 + 24) + 16LL) + 28LL * *(__int16 *)(v25 + 6LL * v24 + 4));
                if ( (*(_BYTE *)v19 & 7) != 0
                  && ((*(_BYTE *)v19 & 6) == 0
                   || (int)LdrpMergeParentBaseLanguagesToList(v22, (_DWORD)v19, a2, v12, v38) >= 0) )
                {
                  ++v48;
                }
              }
            }
          }
        }
        ++v24;
      }
      while ( v24 < *(unsigned __int16 *)(v16 + 4) );
    }
  }
  v11 = Heap;
  appended = 0;
  v42 = 0;
  v26 = 0;
  LODWORD(v55) = 11141120;
  *((_QWORD *)&v55 + 1) = Heap + 170;
  if ( *(_WORD *)(a2 + 4) )
  {
    v26 = *(_WORD *)(a2 + 4);
  }
  else
  {
    appended = NtQueryInstallUILanguage(&v42, v19, v20, v21);
    if ( appended >= 0 )
    {
      if ( (int)NtIsUILanguageComitted() >= 0 )
      {
        RtlpLoadInstallLanguageFallback(a2, a2 + 6, a2 + 8);
        *(_WORD *)(a2 + 4) = v42;
      }
      v26 = v42;
    }
  }
  if ( appended < 0 )
    goto LABEL_54;
  if ( !(unsigned __int8)RtlLCIDToCultureName(v26, &v55) )
  {
    appended = -1073741823;
    goto LABEL_54;
  }
  LOBYTE(v27) = 1;
  appended = RtlpMuiRegGetInstalledLanguageIndexByLangId(a2, v26, v27, &v44);
  if ( appended >= 0 )
  {
    v28 = *((_QWORD *)&v55 + 1);
    if ( (v56 & 0x40) != 0 || a9 && v48 )
    {
      v29 = v47;
    }
    else
    {
      v29 = v47;
      appended = LdrpLangFallbackListAppendNode((_DWORD)v47, a2, 0, (unsigned int)&v46, *((__int64 *)&v55 + 1));
      if ( appended >= 0 )
      {
        if ( v54 )
        {
          v30 = (_BYTE *)(*(_QWORD *)(*(_QWORD *)(a2 + 24) + 16LL) + 28LL * v44);
          if ( (*v30 & 6) != 0 )
          {
            if ( !v16 || (LODWORD(v37) = v12, !v12) )
              v37 = *(_QWORD *)(a2 + 40);
            appended = LdrpMergeParentBaseLanguagesToList((_DWORD)v29, (_DWORD)v30, a2, v37, v39);
            if ( appended < 0 )
              goto LABEL_53;
          }
        }
      }
    }
    if ( v41 )
    {
      if ( v29 )
      {
        v31 = v51 >> 2;
        LOBYTE(v31) = (v51 & 4) != 0;
        appended = RtlpFilterandReplaceConsoleLanguages(*v29, a2, v31, v52, a3);
        if ( appended >= 0 && (v56 & 0x30) == 0x30 )
        {
          appended = LdrpLangFallbackListAppendNode((_DWORD)a3, a2, 0, (unsigned int)&v46, v28);
          if ( appended >= 0 )
          {
            v32 = (_BYTE *)(*(_QWORD *)(*(_QWORD *)(a2 + 24) + 16LL) + 28LL * v44);
            if ( (*v32 & 6) != 0 )
            {
              if ( !v16 || !v12 )
                v12 = *(_QWORD *)(a2 + 40);
              appended = LdrpMergeParentBaseLanguagesToList((_DWORD)a3, (_DWORD)v32, a2, v12, v40);
            }
          }
        }
      }
    }
LABEL_53:
    v11 = Heap;
  }
LABEL_54:
  if ( v53 )
    RtlpMuiRegFreeLanguageList(v53);
  if ( v11 )
    RtlFreeHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, v11);
  return (unsigned int)appended;
}
