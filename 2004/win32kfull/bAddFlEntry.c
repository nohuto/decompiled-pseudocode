/*
 * XREFs of bAddFlEntry @ 0x1C0011ED4
 * Callers:
 *     BuildAndLoadLinkedFontRoutine @ 0x1C0011E00 (BuildAndLoadLinkedFontRoutine.c)
 *     GreEudcLoadLinkW @ 0x1C02985A0 (GreEudcLoadLinkW.c)
 * Callees:
 *     ?bAppendSysDirectory@@YAHPEAGPEBGI@Z @ 0x1C0012250 (-bAppendSysDirectory@@YAHPEAGPEBGI@Z.c)
 *     ?ParseFontLinkEntry@@YA_NPEAGPEAUFontLinkData@@@Z @ 0x1C001248C (-ParseFontLinkEntry@@YA_NPEAGPEAUFontLinkData@@@Z.c)
 *     ?FindBaseFontEntry@@YAPEAU_FLENTRY@@PEBG@Z @ 0x1C00125CC (-FindBaseFontEntry@@YAPEAU_FLENTRY@@PEBG@Z.c)
 *     ?FindLinkedFontEntry@@YAPEAU_PFEDATA@@PEAU_LIST_ENTRY@@PEBG1@Z @ 0x1C0012654 (-FindLinkedFontEntry@@YAPEAU_PFEDATA@@PEAU_LIST_ENTRY@@PEBG1@Z.c)
 *     ?bLoadAFont@PUBLIC_PFTOBJ@@QEAAHPEAGPEAKKPEAPEAVPFF@@PEAU_EUDCLOAD@@H@Z @ 0x1C00126FC (-bLoadAFont@PUBLIC_PFTOBJ@@QEAAHPEAGPEAKKPEAPEAVPFF@@PEAU_EUDCLOAD@@H@Z.c)
 *     ?bUnloadEUDCFont@PFTOBJ@@QEAAHPEAG@Z @ 0x1C0012808 (-bUnloadEUDCFont@PFTOBJ@@QEAAHPEAG@Z.c)
 *     ??0MALLOCOBJ@@QEAA@K@Z @ 0x1C00D8F4C (--0MALLOCOBJ@@QEAA@K@Z.c)
 *     PALLOCMEM2 @ 0x1C00D8F8C (PALLOCMEM2.c)
 *     ?StringCchCopyW@@YAJPEAG_KPEBG@Z @ 0x1C00DAAB4 (-StringCchCopyW@@YAJPEAG_KPEBG@Z.c)
 */

__int64 __fastcall bAddFlEntry(wchar_t *a1, const unsigned __int16 *a2, int a3, int a4, __int64 *a5)
{
  wchar_t *v6; // rbx
  __int64 v7; // rsi
  __int64 v8; // rdi
  unsigned int v9; // r13d
  int v10; // r14d
  unsigned int v11; // r8d
  struct _FLENTRY *BaseFontEntry; // rax
  struct _LIST_ENTRY *v13; // rcx
  unsigned int v14; // r12d
  struct PFF *v15; // r15
  __int64 v16; // rax
  PFTOBJ *v17; // rcx
  __int64 *v18; // rcx
  __int64 v19; // rdx
  __int64 v20; // rax
  __int64 i; // rcx
  int v22; // eax
  __int64 *v23; // rsi
  __int64 *v24; // rax
  __int64 v26; // rax
  __int64 *v27; // rax
  __int64 v28; // rax
  wchar_t *Str1; // [rsp+48h] [rbp-31h] BYREF
  struct PFF *v30; // [rsp+50h] [rbp-29h] BYREF
  struct _FONTHASH **v31; // [rsp+58h] [rbp-21h] BYREF
  __int128 v32; // [rsp+60h] [rbp-19h] BYREF
  __int128 *v33; // [rsp+70h] [rbp-9h] BYREF
  wchar_t *v34; // [rsp+78h] [rbp-1h]
  wchar_t *v35[2]; // [rsp+80h] [rbp+7h] BYREF
  __int64 v36; // [rsp+90h] [rbp+17h]

  MALLOCOBJ::MALLOCOBJ((MALLOCOBJ *)&Str1, 0x450u);
  v6 = Str1;
  if ( !Str1 )
    goto LABEL_49;
  v7 = 0LL;
  v30 = 0LL;
  v36 = 0LL;
  v8 = 0LL;
  v9 = 0;
  v10 = 1;
  gbAnyLinkedFonts = 1;
  *(_OWORD *)v35 = 0LL;
  if ( a5 )
    *a5 = 0LL;
  if ( (int)StringCchCopyW(v6 + 260, 0x124uLL, a2) < 0
    || !ParseFontLinkEntry(v6 + 260, (struct FontLinkData *)v35)
    || !(unsigned int)bAppendSysDirectory(v6, v6 + 260, v11)
    || !_wcsicmp(v6, &Dst) )
  {
LABEL_49:
    v10 = 0;
    goto LABEL_30;
  }
  if ( off_1C032B378 != (_UNKNOWN *)&off_1C032B378 )
  {
    BaseFontEntry = FindBaseFontEntry(a1);
    v7 = (__int64)BaseFontEntry;
    if ( BaseFontEntry )
    {
      v13 = (struct _LIST_ENTRY *)((char *)BaseFontEntry + 16);
      if ( v13->Flink != v13 )
      {
        if ( FindLinkedFontEntry(v13, v6, v35[1]) )
          goto LABEL_30;
      }
    }
  }
  LODWORD(Str1) = 0;
  v31 = gpPFTPublic;
  v33 = &v32;
  v34 = v35[1];
  v32 = 0LL;
  v14 = a3 != 0 ? 8 : 10;
  if ( v35[1] && !_wcsicmp(v35[1], L"Segoe UI Symbol") )
    v14 |= 0x4000u;
  if ( v7 )
  {
    v15 = v30;
  }
  else
  {
    v26 = PALLOCMEM2(0x70uLL);
    v7 = v26;
    v15 = (struct PFF *)v26;
    if ( !v26 )
      goto LABEL_31;
    if ( (int)StringCchCopyW((unsigned __int16 *)(v26 + 32), 0x21uLL, a1) < 0 )
      goto LABEL_45;
  }
  v16 = PALLOCMEM2(0x30uLL);
  v8 = v16;
  if ( !v16 )
    goto LABEL_34;
  v30 = 0LL;
  *(_QWORD *)(v16 + 24) = v36;
  if ( !(unsigned int)PUBLIC_PFTOBJ::bLoadAFont(
                        (PUBLIC_PFTOBJ *)&v31,
                        v6,
                        (unsigned int *)&Str1,
                        v14,
                        &v30,
                        (struct _EUDCLOAD *)&v33,
                        0) )
    goto LABEL_34;
  if ( (_QWORD)v32 )
  {
    v18 = (__int64 *)&v32;
    v19 = 2LL;
    do
    {
      v20 = *v18++;
      *(_DWORD *)(v20 + 12) |= 0x200u;
      --v19;
    }
    while ( v19 );
    if ( v15 )
    {
      *(_DWORD *)(v7 + 100) = 0;
      *(_DWORD *)(v7 + 104) = 0;
      *(_QWORD *)(v7 + 24) = v7 + 16;
      *(_QWORD *)(v7 + 16) = v7 + 16;
      v27 = (__int64 *)off_1C032B380;
      if ( *off_1C032B380 != (_UNKNOWN *)&off_1C032B378 )
        goto LABEL_48;
      ++dword_1C033B080;
      *(_QWORD *)(v7 + 8) = off_1C032B380;
      *(_QWORD *)v7 = &off_1C032B378;
      *v27 = v7;
      off_1C032B380 = (_UNKNOWN **)v7;
      if ( a5 )
        *a5 = v7;
      ++dword_1C033B084;
    }
    for ( i = 0LL; i < 2; ++i )
      *(_QWORD *)(v8 + 8 * i + 32) = *((_QWORD *)&v32 + i);
    *(_DWORD *)(v8 + 20) = 0;
    *(_DWORD *)(v8 + 16) = a3;
    v22 = *(_DWORD *)(v8 + 20);
    if ( v34 )
      v22 = 1;
    *(_DWORD *)(v8 + 20) = v22;
    ++*(_DWORD *)(v7 + 100);
    ++*(_DWORD *)(v7 + 104);
    v23 = (__int64 *)(v7 + 16);
    if ( a4 >= 0 )
    {
      v28 = *v23;
      if ( *(__int64 **)(*v23 + 8) == v23 )
      {
        *(_QWORD *)v8 = v28;
        *(_QWORD *)(v8 + 8) = v23;
        *(_QWORD *)(v28 + 8) = v8;
        *v23 = v8;
        goto LABEL_30;
      }
    }
    else
    {
      v24 = (__int64 *)v23[1];
      if ( (__int64 *)*v24 == v23 )
      {
        *(_QWORD *)v8 = v23;
        *(_QWORD *)(v8 + 8) = v24;
        *v24 = v8;
        v23[1] = v8;
LABEL_30:
        v9 = v10;
        goto LABEL_31;
      }
    }
LABEL_48:
    __fastfail(3u);
  }
LABEL_45:
  PFTOBJ::bUnloadEUDCFont(v17, v6);
LABEL_34:
  if ( v15 )
    Win32FreePool(v15);
  if ( v8 )
    Win32FreePool(v8);
LABEL_31:
  if ( v6 )
    Win32FreePool(v6);
  return v9;
}
