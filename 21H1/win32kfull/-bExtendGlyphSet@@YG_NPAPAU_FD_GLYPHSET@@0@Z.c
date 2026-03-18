/*
 * XREFs of ?bExtendGlyphSet@@YG_NPAPAU_FD_GLYPHSET@@0@Z @ 0x22173E
 * Callers:
 *     ?pfdg@PFEOBJ@@QAEPAU_FD_GLYPHSET@@XZ @ 0x857A0 (-pfdg@PFEOBJ@@QAEPAU_FD_GLYPHSET@@XZ.c)
 *     ?bLoadDeviceFontTable@PFFMEMOBJ@@QAEHPAVPDEVOBJ@@@Z @ 0x221B4A (-bLoadDeviceFontTable@PFFMEMOBJ@@QAEHPAVPDEVOBJ@@@Z.c)
 * Callees:
 *     _PALLOCMEM2@12 @ 0x48D0A (_PALLOCMEM2@12.c)
 *     _ConvertToAndFromWideChar@24 @ 0xDFDA8 (_ConvertToAndFromWideChar@24.c)
 *     @__security_check_cookie@4 @ 0xED840 (@__security_check_cookie@4.c)
 *     _memcpy @ 0xF929B (_memcpy.c)
 *     _memset @ 0xF92A7 (_memset.c)
 */

char __fastcall bExtendGlyphSet(int *a1, PATHOBJ **a2)
{
  int v2; // ecx
  char v3; // bl
  unsigned __int16 *v4; // esi
  __int16 v5; // ax
  int v6; // edx
  _WORD *i; // ecx
  unsigned int v9; // ecx
  int v10; // edx
  unsigned __int16 *v11; // eax
  unsigned int v12; // edi
  unsigned __int16 *v13; // esi
  __int16 v14; // bx
  unsigned int v15; // esi
  unsigned int v16; // edx
  PATHOBJ *v17; // edi
  USHORT v18; // ax
  PATHOBJ *v19; // ecx
  int v20; // edx
  char *v21; // edi
  unsigned int v22; // eax
  unsigned int v23; // ebx
  size_t v24; // edx
  PATHOBJ *v25; // ebx
  unsigned __int16 *v26; // ecx
  unsigned __int16 v27; // dx
  int v28; // eax
  unsigned __int16 *v29; // eax
  unsigned __int16 *v30; // edx
  unsigned int v31; // ecx
  int v32; // ebx
  unsigned int v33; // esi
  unsigned int v34; // eax
  char *v35; // edi
  int v36; // esi
  unsigned __int16 *v37; // ebx
  int v38; // edx
  int v39; // eax
  USHORT OemCodePage[2]; // [esp+10h] [ebp-338h] BYREF
  unsigned int v42; // [esp+14h] [ebp-334h]
  unsigned __int16 *v43; // [esp+18h] [ebp-330h]
  USHORT AnsiCodePage[2]; // [esp+1Ch] [ebp-32Ch] BYREF
  unsigned __int16 *v45; // [esp+20h] [ebp-328h]
  unsigned int v46; // [esp+24h] [ebp-324h]
  PATHOBJ *v47; // [esp+28h] [ebp-320h]
  int v48; // [esp+2Ch] [ebp-31Ch]
  unsigned __int16 *v49; // [esp+30h] [ebp-318h]
  unsigned __int8 v50; // [esp+37h] [ebp-311h]
  int v51; // [esp+38h] [ebp-310h]
  unsigned int v52; // [esp+3Ch] [ebp-30Ch]
  WCHAR v53[256]; // [esp+40h] [ebp-308h] BYREF
  CHAR v54[260]; // [esp+240h] [ebp-108h] BYREF

  v2 = *a1;
  v3 = 0;
  *(_DWORD *)AnsiCodePage = 0;
  *(_DWORD *)OemCodePage = 0;
  v4 = *(unsigned __int16 **)(v2 + 12);
  v48 = v2;
  v43 = v4;
  if ( !v4 )
    return 0;
  v52 = *(_DWORD *)(v2 + 8);
  if ( v52 > 0x100 )
    return 0;
  v5 = *(_WORD *)(v2 + 8 * (_DWORD)v4 + 10) - 1;
  v51 = 61472;
  if ( (unsigned __int16)(*(_WORD *)(v2 + 8 * (_DWORD)v4 + 8) + v5) >= 0xF020u && *(_WORD *)(v2 + 16) <= 0xF0FFu )
  {
    v6 = 0;
    if ( v4 == (unsigned __int16 *)1 )
      return 0;
    for ( i = (_WORD *)(v2 + 18); (unsigned __int16)(*i + *(i - 1) - 1) >= (unsigned __int16)v51 || i[3] <= 0xF0FFu; i += 4 )
    {
      if ( ++v6 >= (unsigned int)v4 - 1 )
        return 0;
    }
  }
  v49 = (unsigned __int16 *)(4 * (v52 + 2 * (_DWORD)v4 + 230));
  v47 = (PATHOBJ *)PALLOCMEM2((size_t)v49, 1936484167, 1);
  if ( v47 )
  {
    memset(v54, 0, 0x100u);
    v46 = 0;
    v9 = 0;
    v10 = v48;
    v11 = (unsigned __int16 *)(v48 + 18);
    v45 = (unsigned __int16 *)(v48 + 18);
    do
    {
      v12 = 0;
      v42 = *v11;
      v13 = v43;
      if ( v42 )
      {
        v14 = *(_WORD *)(v10 + 8 * v9 + 16);
        v15 = v42;
        v16 = v46;
        do
          v53[v16++] = v14 + v12++;
        while ( v12 < v15 );
        v13 = v43;
        v11 = v45;
        v46 = v16;
        v10 = v48;
      }
      ++v9;
      v11 += 4;
      v45 = v11;
    }
    while ( v9 < (unsigned int)v13 );
    v17 = v47;
    RtlGetDefaultCodePage(AnsiCodePage, OemCodePage);
    v18 = AnsiCodePage[0];
    if ( AnsiCodePage[0] == 932 || AnsiCodePage[0] == 949 || AnsiCodePage[0] == 950 || AnsiCodePage[0] == 936 )
    {
      v18 = 1252;
      *(_DWORD *)AnsiCodePage = 1252;
    }
    if ( ConvertToAndFromWideChar(v18, v53, 2 * v52, v54, 0x100u, 0) == -1 )
    {
      Win32FreePool(v17);
      return 0;
    }
    v19 = v47;
    v20 = v48;
    v47->fl = (FLONG)v49;
    v21 = (char *)&v19[(int)v13 + 3];
    v19->cCurves = *(_DWORD *)(v20 + 4) | 0x10;
    v19[1].fl = v52 + 224;
    v19[1].cCurves = (ULONG)v13 + 1;
    v22 = 0;
    v46 = 0;
    if ( v13 )
    {
      v23 = v20 + 18;
      v24 = v20 - (_DWORD)v19;
      v52 = v23;
      v25 = v19 + 2;
      v26 = (unsigned __int16 *)v52;
      v49 = (unsigned __int16 *)v24;
      do
      {
        v27 = *(_WORD *)((char *)&v25->fl + v24);
        if ( v27 >= (unsigned __int16)v51 )
          break;
        LOWORD(v25->fl) = v27;
        HIWORD(v25->fl) = *v26;
        v25->cCurves = (ULONG)v21;
        memcpy(v21, *(const void **)(v26 + 1), 4 * *v26);
        v24 = (size_t)v49;
        ++v25;
        v28 = *(unsigned __int16 *)v52;
        v26 = (unsigned __int16 *)(v52 + 8);
        v52 += 8;
        v21 += 4 * v28;
        v22 = v46 + 1;
        v46 = v22;
      }
      while ( v22 < (unsigned int)v13 );
      v19 = v47;
    }
    v19[v22 + 2].fl = 14741536;
    v19[v22 + 2].cCurves = (ULONG)v21;
    memset(v21, 0, 0x380u);
    v51 = 0;
    if ( v13 )
    {
      v49 = (unsigned __int16 *)(v48 + 18);
      v29 = v13;
      v30 = (unsigned __int16 *)(v48 + 18);
      v45 = v13;
      do
      {
        v31 = 0;
        v52 = 0;
        if ( *v30 )
        {
          v32 = v51;
          do
          {
            v50 = v54[v32];
            if ( v50 >= 0x20u )
            {
              v33 = v52;
              *(_DWORD *)&v21[4 * v50 - 128] = *(_DWORD *)(*(_DWORD *)(v30 + 1) + 4 * v52);
              v31 = v33;
            }
            v34 = *v30;
            ++v32;
            v52 = ++v31;
          }
          while ( v31 < v34 );
          v29 = v45;
          v51 = v32;
        }
        v30 += 4;
        v29 = (unsigned __int16 *)((char *)v29 - 1);
        v45 = v29;
      }
      while ( v29 );
      v13 = v43;
    }
    v35 = v21 + 896;
    if ( v46 < (unsigned int)v13 )
    {
      v49 = (unsigned __int16 *)(v48 + 8 * v46 + 18);
      v36 = (int)v13 - v46;
      v37 = v49;
      v38 = (int)&v47[v46 + 3].fl + 2;
      v51 = v38;
      do
      {
        *(_WORD *)(v38 - 2) = *(v37 - 1);
        *(_WORD *)v38 = *v37;
        *(_DWORD *)(v38 + 2) = v35;
        memcpy(v35, *(const void **)(v37 + 1), 4 * *v37);
        v39 = *v37;
        v37 += 4;
        v38 = v51 + 8;
        v51 += 8;
        v35 += 4 * v39;
        --v36;
      }
      while ( v36 );
    }
    *a2 = v47;
    return 1;
  }
  return v3;
}
