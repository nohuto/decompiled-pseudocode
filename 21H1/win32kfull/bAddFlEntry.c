/*
 * XREFs of bAddFlEntry @ 0xDCD78
 * Callers:
 *     _BuildAndLoadLinkedFontRoutine@24 @ 0xDCCFE (_BuildAndLoadLinkedFontRoutine@24.c)
 *     GreEudcLoadLinkW @ 0x1F7AA9 (GreEudcLoadLinkW.c)
 * Callees:
 *     _PALLOCMEM2@12 @ 0x48D0A (_PALLOCMEM2@12.c)
 *     ?StringCchCopyW@@YGJPAGIPBG@Z @ 0x8A554 (-StringCchCopyW@@YGJPAGIPBG@Z.c)
 *     ?bUnloadEUDCFont@PFTOBJ@@QAEHPAG@Z @ 0xCD9B6 (-bUnloadEUDCFont@PFTOBJ@@QAEHPAG@Z.c)
 *     ?bAppendSysDirectory@@YGHPAGPBGI@Z @ 0xDD06C (-bAppendSysDirectory@@YGHPAGPBGI@Z.c)
 *     ??0MALLOCOBJ@@QAE@K@Z @ 0xDD190 (--0MALLOCOBJ@@QAE@K@Z.c)
 *     ?ParseFontLinkEntry@@YG_NPAGPAUFontLinkData@@@Z @ 0xDD1BC (-ParseFontLinkEntry@@YG_NPAGPAUFontLinkData@@@Z.c)
 *     ?FindBaseFontEntry@@YGPAU_FLENTRY@@PBG@Z @ 0xDD294 (-FindBaseFontEntry@@YGPAU_FLENTRY@@PBG@Z.c)
 *     ?FindLinkedFontEntry@@YGPAU_PFEDATA@@PAU_LIST_ENTRY@@PBG1@Z @ 0xDD2F2 (-FindLinkedFontEntry@@YGPAU_PFEDATA@@PAU_LIST_ENTRY@@PBG1@Z.c)
 *     ?bLoadAFont@PUBLIC_PFTOBJ@@QAEHPAGPAKKPAPAVPFF@@PAU_EUDCLOAD@@H@Z @ 0xDD364 (-bLoadAFont@PUBLIC_PFTOBJ@@QAEHPAGPAKKPAPAVPFF@@PAU_EUDCLOAD@@H@Z.c)
 */

int __fastcall bAddFlEntry(size_t a1, size_t a2, int a3, int a4, _DWORD *a5)
{
  wchar_t *v5; // esi
  int v6; // ecx
  _DWORD *v7; // ebx
  unsigned __int16 *v8; // ecx
  struct _FLENTRY *BaseFontEntry; // eax
  _DWORD *v10; // edi
  _DWORD *v11; // eax
  PFTOBJ *v12; // ecx
  _DWORD *v13; // edi
  _DWORD *v14; // eax
  int v15; // ebx
  _DWORD *v17; // eax
  int v18; // eax
  unsigned int v19; // [esp+0h] [ebp-48h]
  unsigned __int16 *v20; // [esp+0h] [ebp-48h]
  const unsigned __int16 *v21; // [esp+0h] [ebp-48h]
  const unsigned __int16 *v22; // [esp+0h] [ebp-48h]
  const unsigned __int16 *v23; // [esp+4h] [ebp-44h]
  struct FontLinkData *v24; // [esp+4h] [ebp-44h]
  unsigned int v25; // [esp+4h] [ebp-44h]
  const unsigned __int16 *v26; // [esp+4h] [ebp-44h]
  struct PFF *cchDesta; // [esp+10h] [ebp-38h]
  wchar_t *Str1; // [esp+14h] [ebp-34h] BYREF
  size_t v30; // [esp+18h] [ebp-30h]
  struct PFF *v31; // [esp+1Ch] [ebp-2Ch] BYREF
  unsigned int v32; // [esp+20h] [ebp-28h] BYREF
  struct _FONTHASH **v33; // [esp+24h] [ebp-24h] BYREF
  int v34; // [esp+28h] [ebp-20h] BYREF
  int v35; // [esp+2Ch] [ebp-1Ch]
  int *v36; // [esp+30h] [ebp-18h] BYREF
  wchar_t *v37; // [esp+34h] [ebp-14h]
  int v38; // [esp+38h] [ebp-10h]
  wchar_t *v39; // [esp+3Ch] [ebp-Ch]
  int v40; // [esp+40h] [ebp-8h]
  int v41; // [esp+44h] [ebp-4h]

  v30 = a1;
  MALLOCOBJ::MALLOCOBJ((MALLOCOBJ *)&Str1, 0x450u);
  v5 = Str1;
  v6 = 0;
  if ( !Str1 )
    goto LABEL_25;
  Str1 = 0;
  gbAnyLinkedFonts = 1;
  v38 = 0;
  v7 = 0;
  v39 = 0;
  v40 = 0;
  v41 = 0;
  if ( a5 )
    *a5 = 0;
  if ( StringCchCopyW(a2, v19, v23) < 0
    || !ParseFontLinkEntry(v20, v24)
    || !bAppendSysDirectory(v8, v21, v25)
    || !__wcsicmp(v5, &Dst) )
  {
    v6 = 0;
    goto LABEL_25;
  }
  if ( off_266348 == (_UNKNOWN *)&off_266348 )
  {
    v10 = 0;
  }
  else
  {
    BaseFontEntry = FindBaseFontEntry(v22);
    v10 = BaseFontEntry;
    if ( BaseFontEntry
      && *((struct _FLENTRY **)BaseFontEntry + 2) != (struct _FLENTRY *)((char *)BaseFontEntry + 8)
      && FindLinkedFontEntry((struct _LIST_ENTRY *)v39, v22, v26) )
    {
      v6 = 1;
      goto LABEL_25;
    }
  }
  v36 = &v34;
  v33 = gpPFTPublic;
  v34 = 0;
  v35 = 0;
  v32 = 0;
  v37 = v39;
  v31 = (struct PFF *)(2 * (a3 == 0) + 8);
  cchDesta = v31;
  if ( v39 )
  {
    cchDesta = (struct PFF *)(2 * (a3 == 0) + 8);
    if ( !__wcsicmp(v39, L"Segoe UI Symbol") )
      cchDesta = (struct PFF *)((unsigned int)v31 | 0x4000);
  }
  if ( v10 )
  {
LABEL_16:
    v11 = PALLOCMEM2(0x20u, 1718382187, 0);
    v7 = v11;
    if ( !v11 )
      goto LABEL_29;
    v31 = 0;
    v11[4] = v40;
    v11[5] = v41;
    if ( !PUBLIC_PFTOBJ::bLoadAFont(
            (PUBLIC_PFTOBJ *)&v33,
            v5,
            &v32,
            (unsigned int)cchDesta,
            &v31,
            (struct _EUDCLOAD *)&v36,
            0) )
      goto LABEL_29;
    if ( v34 )
    {
      *(_DWORD *)(v34 + 8) |= 0x200u;
      *(_DWORD *)(v35 + 8) |= 0x200u;
      if ( Str1 )
      {
        v10[21] = 0;
        v10[22] = 0;
        v10[3] = v10 + 2;
        v10[2] = v10 + 2;
        v17 = off_26634C;
        if ( *off_26634C != (_UNKNOWN *)&off_266348 )
          goto LABEL_43;
        ++dword_274364;
        v10[1] = off_26634C;
        *v10 = &off_266348;
        *v17 = v10;
        off_26634C = (_UNKNOWN **)v10;
        if ( a5 )
          *a5 = v10;
        ++dword_274368;
      }
      v7[6] = v34;
      v6 = 1;
      v7[7] = v35;
      v7[3] = 0;
      v7[2] = a3;
      if ( v37 )
        v7[3] = 1;
      ++v10[21];
      ++v10[22];
      v13 = v10 + 2;
      if ( a4 >= 0 )
      {
        v18 = *v13;
        if ( *(_DWORD **)(*v13 + 4) == v13 )
        {
          *v7 = v18;
          v7[1] = v13;
          *(_DWORD *)(v18 + 4) = v7;
          *v13 = v7;
          goto LABEL_25;
        }
      }
      else
      {
        v14 = (_DWORD *)v13[1];
        if ( (_DWORD *)*v14 == v13 )
        {
          *v7 = v13;
          v7[1] = v14;
          *v14 = v7;
          v13[1] = v7;
LABEL_25:
          v15 = v6;
          goto LABEL_26;
        }
      }
LABEL_43:
      __fastfail(3u);
    }
LABEL_44:
    PFTOBJ::bUnloadEUDCFont(v12, v5);
LABEL_29:
    if ( Str1 )
      Win32FreePool(Str1);
    if ( v7 )
      Win32FreePool(v7);
    goto LABEL_33;
  }
  v10 = PALLOCMEM2(0x5Cu, 1718382187, 0);
  Str1 = (wchar_t *)v10;
  if ( v10 )
  {
    if ( StringCchCopyW(v30, (unsigned int)v22, v26) < 0 )
      goto LABEL_44;
    goto LABEL_16;
  }
LABEL_33:
  v15 = 0;
LABEL_26:
  if ( v5 )
    Win32FreePool(v5);
  return v15;
}
