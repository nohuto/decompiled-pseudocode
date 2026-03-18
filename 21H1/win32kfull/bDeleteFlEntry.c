/*
 * XREFs of bDeleteFlEntry @ 0x1F84B8
 * Callers:
 *     GreEudcUnloadLinkW @ 0x1F7CCC (GreEudcUnloadLinkW.c)
 * Callees:
 *     ?StringCchCopyW@@YGJPAGIPBG@Z @ 0x8A554 (-StringCchCopyW@@YGJPAGIPBG@Z.c)
 *     bUnloadEudcFont @ 0xCD8F6 (bUnloadEudcFont.c)
 *     ?bAppendSysDirectory@@YGHPAGPBGI@Z @ 0xDD06C (-bAppendSysDirectory@@YGHPAGPBGI@Z.c)
 *     ??0MALLOCOBJ@@QAE@K@Z @ 0xDD190 (--0MALLOCOBJ@@QAE@K@Z.c)
 *     ?ParseFontLinkEntry@@YG_NPAGPAUFontLinkData@@@Z @ 0xDD1BC (-ParseFontLinkEntry@@YG_NPAGPAUFontLinkData@@@Z.c)
 *     ?FindBaseFontEntry@@YGPAU_FLENTRY@@PBG@Z @ 0xDD294 (-FindBaseFontEntry@@YGPAU_FLENTRY@@PBG@Z.c)
 *     ?FindLinkedFontEntry@@YGPAU_PFEDATA@@PAU_LIST_ENTRY@@PBG1@Z @ 0xDD2F2 (-FindLinkedFontEntry@@YGPAU_PFEDATA@@PAU_LIST_ENTRY@@PBG1@Z.c)
 *     vUnlinkEudcRFONTs @ 0x1F90F9 (vUnlinkEudcRFONTs.c)
 *     vUnlinkEudcRFONTsAndPFEs @ 0x1F9197 (vUnlinkEudcRFONTsAndPFEs.c)
 */

int __fastcall bDeleteFlEntry(const wchar_t *a1, size_t a2, int a3)
{
  wchar_t *v4; // esi
  wchar_t *v5; // edi
  unsigned __int16 *v6; // ecx
  const wchar_t *BaseFontEntry; // eax
  PATHOBJ *v8; // ebx
  struct _PFEDATA *LinkedFontEntry; // eax
  int v10; // ecx
  struct _PFEDATA **v11; // edx
  char *v12; // ecx
  bool v13; // zf
  FLONG fl; // ecx
  PATHOBJ **cCurves; // eax
  int v16; // ebx
  unsigned int v18; // [esp+0h] [ebp-2Ch]
  const unsigned __int16 *v19; // [esp+0h] [ebp-2Ch]
  const unsigned __int16 *v20; // [esp+0h] [ebp-2Ch]
  const unsigned __int16 *v21; // [esp+4h] [ebp-28h]
  unsigned int v22; // [esp+4h] [ebp-28h]
  const unsigned __int16 *v23; // [esp+4h] [ebp-28h]
  const wchar_t *v24; // [esp+Ch] [ebp-20h] BYREF
  struct _LIST_ENTRY *v25; // [esp+10h] [ebp-1Ch]
  int v26; // [esp+14h] [ebp-18h]
  int v27; // [esp+18h] [ebp-14h]
  size_t cchDest; // [esp+1Ch] [ebp-10h]
  wchar_t *Str1; // [esp+20h] [ebp-Ch] BYREF
  wchar_t *v30; // [esp+24h] [ebp-8h] BYREF
  unsigned __int16 **v31; // [esp+34h] [ebp+8h]

  cchDest = a2;
  MALLOCOBJ::MALLOCOBJ((MALLOCOBJ *)&Str1, 0x208u);
  MALLOCOBJ::MALLOCOBJ((MALLOCOBJ *)&v30, 0x24Au);
  v4 = Str1;
  v5 = v30;
  if ( Str1 )
  {
    if ( v30 )
    {
      v24 = 0;
      v25 = 0;
      v26 = 0;
      v27 = 0;
      v5 = v30;
      if ( StringCchCopyW(cchDest, v18, v21) >= 0 )
      {
        if ( ParseFontLinkEntry(v5, &v24) )
        {
          if ( bAppendSysDirectory(v5, v4, v6, v19, v22) )
          {
            if ( __wcsicmp(v4, Dst) )
            {
              if ( off_266348 != (_UNKNOWN *)&off_266348 )
              {
                BaseFontEntry = FindBaseFontEntry(a1);
                v8 = (PATHOBJ *)BaseFontEntry;
                if ( BaseFontEntry )
                {
                  LinkedFontEntry = FindLinkedFontEntry(v4, (_DWORD *)BaseFontEntry + 2, (wchar_t *)v25, v20, v23);
                  cchDest = (size_t)LinkedFontEntry;
                  if ( LinkedFontEntry )
                  {
                    if ( *((_DWORD *)LinkedFontEntry + 2) == a3 )
                    {
                      v10 = *(_DWORD *)LinkedFontEntry;
                      if ( *(struct _PFEDATA **)(*(_DWORD *)LinkedFontEntry + 4) == LinkedFontEntry )
                      {
                        v11 = (struct _PFEDATA **)*((_DWORD *)LinkedFontEntry + 1);
                        if ( *v11 == LinkedFontEntry )
                        {
                          *v11 = (struct _PFEDATA *)v10;
                          *(_DWORD *)(v10 + 4) = v11;
                          v12 = (char *)LinkedFontEntry + 24;
                          v13 = v8[10].cCurves-- == 1;
                          v31 = (unsigned __int16 **)((char *)LinkedFontEntry + 24);
                          if ( !v13 )
                          {
                            vUnlinkEudcRFONTs(v12);
                            ++v8[11].fl;
                            goto LABEL_18;
                          }
                          vUnlinkEudcRFONTsAndPFEs(v12, v8);
                          fl = v8->fl;
                          if ( *(PATHOBJ **)(v8->fl + 4) == v8 )
                          {
                            cCurves = (PATHOBJ **)v8->cCurves;
                            if ( *cCurves == v8 )
                            {
                              *cCurves = (PATHOBJ *)fl;
                              *(_DWORD *)(fl + 4) = cCurves;
                              Win32FreePool(v8);
                              --dword_274364;
                              ++dword_274368;
LABEL_18:
                              bUnloadEudcFont(v31);
                              Win32FreePool((PATHOBJ *)cchDest);
                              v16 = 1;
                              goto LABEL_21;
                            }
                          }
                        }
                      }
                      __fastfail(3u);
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
  v16 = 0;
LABEL_21:
  if ( v5 )
    Win32FreePool((PATHOBJ *)v5);
  if ( v4 )
    Win32FreePool((PATHOBJ *)v4);
  return v16;
}
