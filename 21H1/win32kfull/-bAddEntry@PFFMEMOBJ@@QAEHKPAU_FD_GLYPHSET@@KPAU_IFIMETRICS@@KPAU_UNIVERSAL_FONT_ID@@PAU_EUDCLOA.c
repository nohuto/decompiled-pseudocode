/*
 * XREFs of ?bAddEntry@PFFMEMOBJ@@QAEHKPAU_FD_GLYPHSET@@KPAU_IFIMETRICS@@KPAU_UNIVERSAL_FONT_ID@@PAU_EUDCLOAD@@@Z @ 0xDC606
 * Callers:
 *     ?bLoadFontFileTable@PFFMEMOBJ@@QAEHPBGKPAU_UNIVERSAL_FONT_ID@@PAU_EUDCLOAD@@@Z @ 0xDC500 (-bLoadFontFileTable@PFFMEMOBJ@@QAEHPBGKPAU_UNIVERSAL_FONT_ID@@PAU_EUDCLOAD@@@Z.c)
 *     ?bLoadDeviceFontTable@PFFMEMOBJ@@QAEHPAVPDEVOBJ@@@Z @ 0x221B4A (-bLoadDeviceFontTable@PFFMEMOBJ@@QAEHPAVPDEVOBJ@@@Z.c)
 * Callees:
 *     ?pwszFamilyNameAlias@PFEOBJ@@QAEPAGPAH@Z @ 0x4BF60 (-pwszFamilyNameAlias@PFEOBJ@@QAEPAGPAH@Z.c)
 *     ?bInit@PFEMEMOBJ@@QAEHPAVPFF@@KPAU_FD_GLYPHSET@@KPAU_IFIMETRICS@@KHPAU_UNIVERSAL_FONT_ID@@H@Z @ 0xDC780 (-bInit@PFEMEMOBJ@@QAEHPAVPFF@@KPAU_FD_GLYPHSET@@KPAU_IFIMETRICS@@KHPAU_UNIVERSAL_FONT_ID@@H@Z.c)
 *     ?FindBaseFontEntry@@YGPAU_FLENTRY@@PBG@Z @ 0xDD294 (-FindBaseFontEntry@@YGPAU_FLENTRY@@PBG@Z.c)
 *     ?bCheckFamilyName@PFEOBJ@@QAEHPBGHPAH@Z @ 0xDDD0C (-bCheckFamilyName@PFEOBJ@@QAEHPBGHPAH@Z.c)
 *     ?IsCHSBaseFont@@YGHPBGI@Z @ 0xDF198 (-IsCHSBaseFont@@YGHPBGI@Z.c)
 */

int __thiscall PFFMEMOBJ::bAddEntry(
        PFFMEMOBJ *this,
        wchar_t *Str1,
        struct _FD_GLYPHSET *a3,
        unsigned int a4,
        struct _IFIMETRICS *a5,
        unsigned int a6,
        struct _UNIVERSAL_FONT_ID *a7,
        struct _EUDCLOAD *a8)
{
  unsigned int v8; // ebx
  int v9; // ecx
  struct _EUDCLOAD *v10; // esi
  unsigned __int8 v11; // al
  unsigned int *v12; // edi
  const unsigned __int16 *v13; // esi
  struct _FLENTRY *BaseFontEntry; // edi
  unsigned int v15; // esi
  PFFMEMOBJ *v16; // ebx
  wchar_t *v18; // eax
  __int16 v19; // bx
  unsigned int v20; // ebx
  const unsigned __int16 *v21; // [esp+0h] [ebp-14h]
  const unsigned __int16 *v22; // [esp+0h] [ebp-14h]
  unsigned int v23; // [esp+4h] [ebp-10h]
  unsigned int v25; // [esp+10h] [ebp-4h] BYREF

  v8 = (unsigned int)Str1;
  v9 = *(_DWORD *)this;
  v25 = *(_DWORD *)(v9 + 128) * ((_DWORD)Str1 - 1) + *(_DWORD *)(v9 + 132);
  if ( v25 )
  {
    v10 = a8;
    if ( a8 )
    {
      v12 = *(unsigned int **)a8;
      v11 = 1;
      HIBYTE(Str1) = 1;
    }
    else
    {
      v11 = 0;
      HIBYTE(Str1) = 0;
      v12 = 0;
    }
    if ( PFEMEMOBJ::bInit((PFEMEMOBJ *)&v25, (struct PFF *)v9, v8, a3, a4, a5, a6, *(_DWORD *)(v9 + 56) == 0, a7, v11) )
    {
      if ( !HIBYTE(Str1) )
      {
        Str1 = 0;
        v13 = PFEOBJ::pwszFamilyNameAlias((PFEOBJ *)&v25, (int *)&Str1);
        BaseFontEntry = FindBaseFontEntry(v21);
        if ( BaseFontEntry || Str1 && (wcslen(v13), (BaseFontEntry = FindBaseFontEntry(v22)) != 0) )
        {
          v16 = this;
          if ( IsCHSBaseFont(v22, v23) )
            *(_DWORD *)(*(_DWORD *)this + 32) |= 0x8000u;
          v15 = v25;
          *(_DWORD *)(v25 + 76) = BaseFontEntry;
          goto LABEL_10;
        }
        v15 = v25;
        *(_DWORD *)(v25 + 76) = 0;
LABEL_9:
        v16 = this;
LABEL_10:
        *(_DWORD *)(*(_DWORD *)v16 + 4 * (*(_DWORD *)(*(_DWORD *)v16 + 124))++ + 132) = v15;
        return 1;
      }
      v18 = (wchar_t *)*((_DWORD *)v10 + 1);
      v15 = v25;
      Str1 = v18;
      if ( v18 )
      {
        if ( v8 != 1 )
        {
          v19 = *(_WORD *)(*(_DWORD *)(v25 + 20) + *(_DWORD *)(*(_DWORD *)(v25 + 20) + 16));
          if ( !PFEOBJ::bCheckFamilyName((PFEOBJ *)&v25, Str1, 1, 0) )
            goto LABEL_22;
          v12[v19 == 64] = v15;
          if ( v19 == 64 )
            goto LABEL_22;
          goto LABEL_21;
        }
      }
      else
      {
        v20 = v8 - 1;
        if ( v20 )
        {
          if ( v20 != 1 || *(_WORD *)(*(_DWORD *)(v25 + 20) + *(_DWORD *)(*(_DWORD *)(v25 + 20) + 16)) != 64 )
            goto LABEL_22;
          goto LABEL_21;
        }
      }
      *v12 = v25;
LABEL_21:
      v12[1] = v15;
LABEL_22:
      *(_DWORD *)(v15 + 76) = 0;
      goto LABEL_9;
    }
  }
  return 0;
}
