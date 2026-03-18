/*
 * XREFs of ?bAppendSysDirectory@@YAHPEAGPEBGI@Z @ 0x1C0012250
 * Callers:
 *     bAddAllFlEntry @ 0x1C000F6D0 (bAddAllFlEntry.c)
 *     bAddFlEntry @ 0x1C0011ED4 (bAddFlEntry.c)
 *     vInitFontsDirectoryNameInformation @ 0x1C00C2F50 (vInitFontsDirectoryNameInformation.c)
 *     FontAssocDefaultRoutine @ 0x1C02983D0 (FontAssocDefaultRoutine.c)
 *     GreEudcLoadLinkW @ 0x1C02985A0 (GreEudcLoadLinkW.c)
 *     bDeleteFlEntry @ 0x1C0298E50 (bDeleteFlEntry.c)
 * Callees:
 *     ?StringCchCatW@@YAJPEAG_KPEBG@Z @ 0x1C00123EC (-StringCchCatW@@YAJPEAG_KPEBG@Z.c)
 *     ??0MALLOCOBJ@@QEAA@K@Z @ 0x1C00D8F4C (--0MALLOCOBJ@@QEAA@K@Z.c)
 *     cCapString @ 0x1C00D9C0C (cCapString.c)
 *     ?StringCchCopyW@@YAJPEAG_KPEBG@Z @ 0x1C00DAAB4 (-StringCchCopyW@@YAJPEAG_KPEBG@Z.c)
 *     memmove @ 0x1C015BD40 (memmove.c)
 */

__int64 __fastcall bAppendSysDirectory(unsigned __int16 *a1, const unsigned __int16 *a2)
{
  unsigned __int16 *v4; // rbx
  unsigned int v5; // ebp
  __int64 v6; // rdi
  __int64 v7; // r8
  char *v8; // rdx
  unsigned __int16 *v9; // rcx
  unsigned __int16 v10; // ax
  unsigned __int16 *v11; // rax
  const unsigned __int16 *NtSystemRoot; // rax
  unsigned __int64 v13; // rdx
  __int64 v14; // rax
  unsigned __int16 *v15; // rcx
  unsigned __int64 v16; // rdx
  char *v17; // r8
  unsigned __int64 v18; // rcx
  __int64 v19; // rax
  signed __int64 v20; // r9
  char *v21; // rax
  wchar_t *v23; // rax
  _WORD *v24; // rdx
  __int64 v25; // r8
  unsigned __int16 *v26; // rcx
  unsigned __int64 v27; // rdx
  unsigned __int16 v28; // ax
  unsigned __int16 *v29; // rax
  unsigned __int16 *v30; // [rsp+68h] [rbp+20h] BYREF

  MALLOCOBJ::MALLOCOBJ((MALLOCOBJ *)&v30, 0x208u);
  v4 = v30;
  if ( !v30 )
    goto LABEL_30;
  v5 = 1;
  v6 = 260LL;
  if ( !wcschr(a2, 0x5Cu) )
  {
    v7 = 260LL;
    v8 = (char *)((char *)L"\\??\\" - (char *)v4);
    v9 = v4;
    do
    {
      if ( v7 == -2147483386 )
        break;
      v10 = *(unsigned __int16 *)((char *)v9 + (_QWORD)v8);
      if ( !v10 )
        break;
      *v9++ = v10;
      --v7;
    }
    while ( v7 );
    v11 = v9 - 1;
    if ( v7 )
      v11 = v9;
    *v11 = 0;
    if ( v7 )
    {
      NtSystemRoot = (const unsigned __int16 *)RtlGetNtSystemRoot(v9, v8);
      if ( (int)StringCchCatW(v4, v13, NtSystemRoot) >= 0 )
      {
        v14 = 260LL;
        v15 = v4;
        do
        {
          if ( !*v15 )
            break;
          ++v15;
          --v14;
        }
        while ( v14 );
        v16 = v14 ? 260 - v14 : 0LL;
        if ( v14 )
        {
          v17 = (char *)&v4[v16];
          v18 = 260 - v16;
          if ( v16 != 260 )
          {
            v19 = 2147483646LL;
            v20 = (char *)L"\\fonts\\" - v17;
            do
            {
              if ( !v19 )
                break;
              v16 = *(unsigned __int16 *)&v17[v20];
              if ( !(_WORD)v16 )
                break;
              *(_WORD *)v17 = v16;
              --v19;
              v17 += 2;
              --v18;
            }
            while ( v18 );
          }
          v21 = v17 - 2;
          if ( v18 )
            v21 = v17;
          *(_WORD *)v21 = 0;
          if ( v18 )
          {
            if ( (int)StringCchCatW(v4, v16, a2) >= 0 )
            {
              cCapString(a1, v4, 260LL);
              goto LABEL_27;
            }
          }
        }
      }
    }
    goto LABEL_30;
  }
  cCapString(a1, a2, 260LL);
  v23 = wcsstr(a1, L"%SYSTEMROOT%");
  if ( v23 )
  {
    *v23 = 92;
    v24 = v23 + 12;
    v25 = -1LL;
    do
      ++v25;
    while ( v24[v25] );
    memmove(v23 + 11, v24, 2 * v25 + 2);
    goto LABEL_27;
  }
  if ( *(_DWORD *)(a1 + 1) == 6029370 )
  {
    if ( (int)StringCchCopyW(v4, 0x104uLL, a1) < 0 )
      goto LABEL_30;
    v26 = a1;
    v27 = (char *)L"\\??\\" - (char *)a1;
    do
    {
      if ( v6 == -2147483386 )
        break;
      v28 = *(unsigned __int16 *)((char *)v26 + v27);
      if ( !v28 )
        break;
      *v26++ = v28;
      --v6;
    }
    while ( v6 );
    v29 = v26 - 1;
    if ( v6 )
      v29 = v26;
    *v29 = 0;
    if ( !v6 || (int)StringCchCatW(a1, v27, v4) < 0 )
LABEL_30:
      v5 = 0;
  }
LABEL_27:
  if ( v4 )
    Win32FreePool(v4);
  return v5;
}
