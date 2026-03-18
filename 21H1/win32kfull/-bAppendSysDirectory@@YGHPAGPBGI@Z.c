/*
 * XREFs of ?bAppendSysDirectory@@YGHPAGPBGI@Z @ 0xDD06C
 * Callers:
 *     _vInitFontsDirectoryNameInformation@0 @ 0xDB878 (_vInitFontsDirectoryNameInformation@0.c)
 *     bAddAllFlEntry @ 0xDBBB8 (bAddAllFlEntry.c)
 *     bAddFlEntry @ 0xDCD78 (bAddFlEntry.c)
 *     _FontAssocDefaultRoutine@24 @ 0x1F78F7 (_FontAssocDefaultRoutine@24.c)
 *     GreEudcLoadLinkW @ 0x1F7AA9 (GreEudcLoadLinkW.c)
 *     bDeleteFlEntry @ 0x1F84B8 (bDeleteFlEntry.c)
 * Callees:
 *     _cCapString@12 @ 0x89EC2 (_cCapString@12.c)
 *     ?StringCchCopyW@@YGJPAGIPBG@Z @ 0x8A554 (-StringCchCopyW@@YGJPAGIPBG@Z.c)
 *     ?StringCchCatW@@YGJPAGIPBG@Z @ 0xDD112 (-StringCchCatW@@YGJPAGIPBG@Z.c)
 *     ??0MALLOCOBJ@@QAE@K@Z @ 0xDD190 (--0MALLOCOBJ@@QAE@K@Z.c)
 *     _memmove @ 0xF92A1 (_memmove.c)
 */

int __userpurge bAppendSysDirectory@<eax>(
        const wchar_t *a1@<edx>,
        WCHAR *a2@<ecx>,
        unsigned __int16 *a3,
        const unsigned __int16 *a4,
        unsigned int a5)
{
  WCHAR *v7; // esi
  size_t NtSystemRoot; // eax
  int v9; // edi
  wchar_t *v11; // eax
  wchar_t *v12; // edx
  __int16 *v13; // ecx
  wchar_t *v14; // ebx
  __int16 v15; // ax
  unsigned int v16; // [esp+0h] [ebp-14h]
  unsigned int v17; // [esp+0h] [ebp-14h]
  unsigned int v18; // [esp+0h] [ebp-14h]
  unsigned int v19; // [esp+0h] [ebp-14h]
  unsigned int v20; // [esp+0h] [ebp-14h]
  unsigned int v21; // [esp+0h] [ebp-14h]
  const unsigned __int16 *v22; // [esp+4h] [ebp-10h]
  const unsigned __int16 *v23; // [esp+4h] [ebp-10h]
  const unsigned __int16 *v24; // [esp+4h] [ebp-10h]
  const unsigned __int16 *v25; // [esp+4h] [ebp-10h]
  const unsigned __int16 *v26; // [esp+4h] [ebp-10h]
  const unsigned __int16 *v27; // [esp+4h] [ebp-10h]
  size_t v28; // [esp+Ch] [ebp-8h] BYREF
  size_t cchDest; // [esp+10h] [ebp-4h]

  cchDest = (size_t)a1;
  MALLOCOBJ::MALLOCOBJ((MALLOCOBJ *)&v28, 0x208u);
  v7 = (WCHAR *)v28;
  if ( v28 )
  {
    if ( _wcschr(a1, 0x5Cu) )
    {
      cCapString(a2, (WCHAR *)cchDest, 260);
      v11 = _wcsstr(a2, L"%SYSTEMROOT%");
      v12 = v11;
      if ( v11 )
      {
        v28 = 0;
        v13 = (__int16 *)(v11 + 12);
        *v11 = 92;
        v14 = v11 + 13;
        do
          v15 = *v13++;
        while ( v15 != (_WORD)v28 );
        memmove(v12 + 11, v12 + 12, 2 * (((char *)v13 - (char *)v14) >> 1) + 2);
        goto LABEL_8;
      }
      if ( a2[1] != 58
        || a2[2] != 92
        || StringCchCopyW((size_t)a2, v16, v22) >= 0
        && StringCchCopyW((size_t)L"\\??\\", v20, v26) >= 0
        && StringCchCatW((size_t)v7, v21, v27) >= 0 )
      {
        goto LABEL_8;
      }
    }
    else if ( StringCchCopyW((size_t)L"\\??\\", v16, v22) >= 0 )
    {
      NtSystemRoot = RtlGetNtSystemRoot();
      if ( StringCchCatW(NtSystemRoot, v17, v23) >= 0
        && StringCchCatW((size_t)L"\\fonts\\", v18, v24) >= 0
        && StringCchCatW(cchDest, v19, v25) >= 0 )
      {
        cCapString(a2, v7, 260);
LABEL_8:
        v9 = 1;
        goto LABEL_9;
      }
    }
  }
  v9 = 0;
LABEL_9:
  if ( v7 )
    Win32FreePool(v7);
  return v9;
}
