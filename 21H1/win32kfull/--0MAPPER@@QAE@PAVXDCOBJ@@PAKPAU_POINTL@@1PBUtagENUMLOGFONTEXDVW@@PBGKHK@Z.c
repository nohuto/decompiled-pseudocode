/*
 * XREFs of ??0MAPPER@@QAE@PAVXDCOBJ@@PAKPAU_POINTL@@1PBUtagENUMLOGFONTEXDVW@@PBGKHK@Z @ 0x680A0
 * Callers:
 *     ?ppfeGetAMatch@@YGPAVPFE@@AAVXDCOBJ@@PAUtagENUMLOGFONTEXDVW@@PBGKKPAKPAU_POINTL@@3H@Z @ 0x49FBA (-ppfeGetAMatch@@YGPAVPFE@@AAVXDCOBJ@@PAUtagENUMLOGFONTEXDVW@@PBGKKPAKPAU_POINTL@@3H@Z.c)
 * Callees:
 *     _W32GetCurrentThreadDpiAwarenessContext@0 @ 0x68610 (_W32GetCurrentThreadDpiAwarenessContext@0.c)
 *     ?bGetFaceName@MAPPER@@AAEHXZ @ 0x8ACA6 (-bGetFaceName@MAPPER@@AAEHXZ.c)
 *     _memcpy @ 0xF929B (_memcpy.c)
 *     ?bUseMetaPtoD@DC@@QBEHXZ @ 0x1F4EE2 (-bUseMetaPtoD@DC@@QBEHXZ.c)
 */

MAPPER *__thiscall MAPPER::MAPPER(
        MAPPER *this,
        struct XDCOBJ *a2,
        unsigned int *a3,
        struct _POINTL *a4,
        unsigned int *a5,
        const struct tagENUMLOGFONTEXDVW *a6,
        const unsigned __int16 *Src,
        unsigned int a8,
        int a9,
        unsigned int a10)
{
  const unsigned __int16 *v12; // esi
  unsigned __int16 v13; // cx
  unsigned __int16 v14; // ax
  _WORD *v15; // edx
  int v16; // ecx
  int v17; // eax
  int v18; // eax
  DC **v19; // edi
  int v20; // eax
  int v21; // edx
  int v22; // eax
  char v23; // si
  int v24; // ecx
  int v25; // eax
  int v26; // eax
  int v27; // eax
  int v28; // eax
  char CurrentThreadDpiAwarenessContext; // al
  int v30; // eax
  int v31; // eax
  char v32; // al
  unsigned int v33; // ecx
  int v34; // eax
  int v35; // eax
  int v36; // edx
  int v37; // eax
  int v38; // ecx
  unsigned int v39; // eax
  int v40; // ecx
  unsigned int v41; // eax
  int v42; // edx
  int v43; // ecx
  int v44; // edx
  int v45; // edx
  int v46; // ecx
  bool v47; // sf
  int v48; // eax
  MAPPER *result; // eax
  unsigned int v50; // eax
  unsigned int v51; // eax
  unsigned __int16 *v52; // esi
  int *v53; // edi
  unsigned __int16 v54; // cx
  unsigned __int16 v55; // dx
  unsigned __int16 v56; // ax
  unsigned __int16 v57; // dx
  unsigned __int16 v58; // ax
  int v59; // ecx
  unsigned __int16 v60; // dx
  int v61; // edx
  struct XDCOBJ *v62; // [esp+10h] [ebp+8h]
  struct XDCOBJ *v63; // [esp+10h] [ebp+8h]

  v62 = 0;
  v12 = Src;
  *(_DWORD *)this = a2;
  *((_DWORD *)this + 55) = 0;
  *((_DWORD *)this + 56) = 0;
  *((_DWORD *)this + 1) = a6;
  *((_DWORD *)this + 2) = Src;
  *((_DWORD *)this + 19) = 0;
  if ( *Src )
  {
    v13 = *Src;
    do
    {
      if ( v13 == 95 )
      {
        v50 = v12[1];
        if ( v50 <= 0x39 && v50 >= 0x30 )
          break;
      }
      v14 = v12[1];
      ++v12;
      v13 = v14;
    }
    while ( v14 );
  }
  memcpy((char *)this + 12, Src, 2 * (v12 - Src));
  v15 = (_WORD *)((char *)this + 12);
  *((_WORD *)this + v12 - Src + 6) = 0;
  if ( *v12 == 95 )
  {
    v51 = v12[1];
    v52 = (unsigned __int16 *)(v12 + 1);
    if ( v51 >= 0x30 && v51 <= 0x39 )
    {
      v53 = (int *)((char *)this + 88);
      do
      {
        v54 = v51;
        if ( (_WORD)v51 )
        {
          v55 = v51;
          do
          {
            if ( v55 >= 0x30u )
            {
              v54 = v55;
              if ( v55 <= 0x39u )
                break;
            }
            v56 = v52[1];
            ++v52;
            v55 = v56;
            v54 = v56;
          }
          while ( v56 );
        }
        v57 = v54;
        if ( v54 )
        {
          v58 = v52[1];
          ++v52;
          v59 = v54 - 48;
          if ( v58 )
          {
            v60 = v58;
            do
            {
              if ( (unsigned __int16)(v60 - 48) > 9u )
                break;
              ++v52;
              v59 = v60 + 2 * (5 * v59 - 24);
              v60 = *v52;
            }
            while ( *v52 );
          }
          v62 = (struct XDCOBJ *)((char *)v62 + 1);
          *v53++ = v59;
          v57 = *v52;
        }
        LOWORD(v51) = v57;
      }
      while ( v57 );
      v15 = (_WORD *)((char *)this + 12);
    }
  }
  *((_DWORD *)this + 21) = v62;
  *((_DWORD *)this + 20) = 134248036;
  *((_DWORD *)this + 62) = 0;
  if ( v62 )
  {
    *((_DWORD *)this + 19) |= 1u;
  }
  else
  {
    v16 = *((_DWORD *)this + 1);
    v17 = *(_DWORD *)(v16 + 352);
    if ( v17 )
      memcpy((char *)this + 80, (const void *)(v16 + 348), 4 * v17 + 8);
    else
      *v15 = 0;
  }
  *((_DWORD *)this + 60) = a9;
  v18 = *((_DWORD *)this + 1);
  *((_DWORD *)this + 42) = -2;
  *((_BYTE *)this + 244) = *(_BYTE *)(v18 + 23);
  *((_DWORD *)this + 51) = a5;
  *a5 = 0;
  *((_DWORD *)this + 50) = a4;
  *((_DWORD *)this + 47) = 0;
  *((_DWORD *)this + 48) = -1;
  *((_DWORD *)this + 49) = a3;
  *a3 = 0;
  **((_DWORD **)this + 50) = 1;
  *(_DWORD *)(*((_DWORD *)this + 50) + 4) = 1;
  v19 = *(DC ***)this;
  if ( *(char *)(*(_DWORD *)(**(_DWORD **)this + 36) + 24) < 0 )
    v20 = 0;
  else
    v20 = 0x40000;
  v21 = v20 | *((_DWORD *)this + 55);
  *((_DWORD *)this + 55) = v21;
  v22 = *((_DWORD *)*v19 + 255);
  if ( *(_DWORD *)(v22 + 228) == 1 && ((*(_BYTE *)(v22 + 340) & 2) != 0 || !DC::bUseMetaPtoD(*v19)) )
  {
    v23 = a10;
    v21 |= 0x1000u;
    *((_DWORD *)this + 55) = v21;
  }
  else
  {
    v23 = -65;
    a10 = -65;
  }
  v24 = *((_DWORD *)this + 1);
  if ( *(_BYTE *)(v24 + 26) == 2 )
  {
    v25 = *((_DWORD *)*v19 + 130);
    if ( (v25 & 1) == 0 || (v25 & 2) != 0 )
    {
      v21 |= 0x8000u;
      *((_DWORD *)this + 55) = v21;
    }
  }
  v26 = *(_DWORD *)(v24 + 16);
  if ( v26 == 400 || v26 == 700 )
  {
    v21 |= 0x10000000u;
    *((_DWORD *)this + 55) = v21;
  }
  v63 = (struct XDCOBJ *)*((_DWORD *)this + 2);
  v27 = *(unsigned __int16 *)v63;
  if ( v27 != 77 )
    goto LABEL_129;
  v23 = a10;
  if ( *((_WORD *)v63 + 1) != 83 )
    goto LABEL_129;
  v23 = a10;
  if ( *((_WORD *)v63 + 2) != 32 )
    goto LABEL_129;
  v23 = a10;
  if ( *((_WORD *)v63 + 3) != 83 )
    goto LABEL_129;
  v23 = a10;
  if ( *((_WORD *)v63 + 4) != 72 )
    goto LABEL_129;
  v23 = a10;
  if ( *((_WORD *)v63 + 5) != 69 )
    goto LABEL_129;
  v23 = a10;
  if ( *((_WORD *)v63 + 6) == 76
    && (v23 = a10, *((_WORD *)v63 + 7) == 76)
    && (v23 = a10, *((_WORD *)v63 + 8) == 32)
    && (v23 = a10, *((_WORD *)v63 + 9) == 68)
    && (v23 = a10, *((_WORD *)v63 + 10) == 76)
    && (v23 = a10, *((_WORD *)v63 + 11) == 71)
    && (v23 = a10, !*((_WORD *)v63 + 12)) )
  {
    *((_DWORD *)this + 55) |= 0x8000000u;
  }
  else
  {
LABEL_129:
    if ( v27 == 83
      && (v23 = a10, *((_WORD *)v63 + 1) == 89)
      && (v23 = a10, *((_WORD *)v63 + 2) == 83)
      && (v23 = a10, *((_WORD *)v63 + 3) == 84)
      && (v23 = a10, *((_WORD *)v63 + 4) == 69)
      && (v23 = a10, *((_WORD *)v63 + 5) == 77)
      && (v23 = a10, !*((_WORD *)v63 + 6)) )
    {
      *((_DWORD *)this + 55) = v21 | 0x2000;
      if ( (*(_BYTE *)(v24 + 27) & 0xF) == 1 )
        *((_DWORD *)this + 2) = L"FIXEDSYS";
    }
    else
    {
      if ( v27 == 84
        && (v23 = a10, *((_WORD *)v63 + 1) == 77)
        && (v23 = a10, *((_WORD *)v63 + 2) == 83)
        && (v23 = a10, *((_WORD *)v63 + 3) == 32)
        && (v23 = a10, *((_WORD *)v63 + 4) == 82)
        && (v23 = a10, *((_WORD *)v63 + 5) == 77)
        && (v23 = a10, *((_WORD *)v63 + 6) == 78)
        && (v23 = a10, !*((_WORD *)v63 + 7)) )
      {
        v61 = v21 | 0x800000;
      }
      else if ( v27 == 83
             && (v23 = a10, *((_WORD *)v63 + 1) == 89)
             && (v23 = a10, *((_WORD *)v63 + 2) == 77)
             && (v23 = a10, *((_WORD *)v63 + 3) == 66)
             && (v23 = a10, *((_WORD *)v63 + 4) == 79)
             && (v23 = a10, *((_WORD *)v63 + 5) == 76) )
      {
        v61 = v21 | 0x4000000;
      }
      else
      {
        if ( v27 != 64 )
          goto LABEL_24;
        v61 = v21 | 0x2000000;
      }
      *((_DWORD *)this + 55) = v61;
    }
  }
LABEL_24:
  *((_DWORD *)this + 38) = *(_DWORD *)v24;
  v28 = *(_DWORD *)(v24 + 4);
  if ( v28 < 0 )
    v28 = -v28;
  *((_DWORD *)this + 39) = v28;
  a10 = *((_DWORD *)*v19 + 9);
  CurrentThreadDpiAwarenessContext = W32GetCurrentThreadDpiAwarenessContext();
  if ( (*(_BYTE *)(a10 + 24) & 1) == 0 || (v30 = CurrentThreadDpiAwarenessContext & 0xF, v30 == 2) || v30 == 1 )
    v31 = *(_DWORD *)(a10 + 1460);
  else
    v31 = 96;
  *((_DWORD *)this + 53) = v31;
  v32 = W32GetCurrentThreadDpiAwarenessContext();
  v33 = a10;
  if ( (*(_BYTE *)(a10 + 24) & 1) == 0 || (v34 = v32 & 0xF, v34 == 2) || v34 == 1 )
    v35 = *(_DWORD *)(a10 + 1464);
  else
    v35 = 96;
  *((_DWORD *)this + 54) = v35;
  if ( (*(_DWORD *)(v33 + 1468) & 0x2000) != 0 )
    v36 = 256;
  else
    v36 = 0;
  v37 = v36 | *((_DWORD *)this + 55);
  *((_DWORD *)this + 55) = v37;
  if ( (*(_BYTE *)(v33 + 1468) & 8) != 0 )
    v38 = 1024;
  else
    v38 = 0;
  *((_DWORD *)this + 55) = v38 | v37;
  v39 = PDEVOBJ::cFonts((PDEVOBJ *)&a10);
  if ( v39 )
    v39 = 512;
  v40 = v39 | *((_DWORD *)this + 55);
  v41 = a10;
  *((_DWORD *)this + 55) = v40;
  if ( *(_DWORD *)(v41 + 1424) )
    v42 = 0;
  else
    v42 = 0x10000;
  v43 = v42 | v40;
  *((_DWORD *)this + 55) = v43;
  if ( *(_DWORD *)(v41 + 1424) == 4 )
    v44 = 0x20000000;
  else
    v44 = 0;
  v45 = v43 | v44;
  v46 = *((_DWORD *)this + 38);
  *((_DWORD *)this + 55) = v45;
  v47 = v46 < 0;
  if ( !v46 )
  {
    v46 = *(_DWORD *)(v41 + 1124);
    v45 |= 8u;
    *((_DWORD *)this + 38) = v46;
    v47 = v46 < 0;
    *((_DWORD *)this + 55) = v45;
  }
  if ( v47 )
  {
    v45 |= 2u;
    *((_DWORD *)this + 55) = v45;
    *((_DWORD *)this + 38) = -v46;
  }
  v48 = *(_DWORD *)(*((_DWORD *)this + 1) + 16);
  *((_DWORD *)this + 40) = v48;
  if ( !v48 )
  {
    v45 |= (unsigned int)&loc_1FFFFC + 4;
    *((_DWORD *)this + 40) = 400;
    *((_DWORD *)this + 55) = v45;
  }
  if ( !**((_WORD **)this + 2) )
  {
    MAPPER::bGetFaceName(this);
    v45 = *((_DWORD *)this + 55);
  }
  result = this;
  *((_DWORD *)this + 55) = v45 | v23 & 0x40 | 1;
  return result;
}
