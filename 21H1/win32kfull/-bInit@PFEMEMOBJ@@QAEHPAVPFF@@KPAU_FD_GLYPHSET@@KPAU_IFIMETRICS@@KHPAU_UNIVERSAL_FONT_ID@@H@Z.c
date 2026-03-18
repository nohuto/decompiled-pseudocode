/*
 * XREFs of ?bInit@PFEMEMOBJ@@QAEHPAVPFF@@KPAU_FD_GLYPHSET@@KPAU_IFIMETRICS@@KHPAU_UNIVERSAL_FONT_ID@@H@Z @ 0xDC780
 * Callers:
 *     ?bAddEntry@PFFMEMOBJ@@QAEHKPAU_FD_GLYPHSET@@KPAU_IFIMETRICS@@KPAU_UNIVERSAL_FONT_ID@@PAU_EUDCLOAD@@@Z @ 0xDC606 (-bAddEntry@PFFMEMOBJ@@QAEHKPAU_FD_GLYPHSET@@KPAU_IFIMETRICS@@KPAU_UNIVERSAL_FONT_ID@@PAU_EUDCLOA.c)
 * Callees:
 *     ?bValidFont@@YGHPAU_IFIMETRICS@@@Z @ 0x89708 (-bValidFont@@YGHPAU_IFIMETRICS@@@Z.c)
 *     ?dpNtmi@PFEOBJ@@QAEKXZ @ 0x89722 (-dpNtmi@PFEOBJ@@QAEKXZ.c)
 *     ?lfOrientation@IFIOBJ@@QAEJXZ @ 0x8991C (-lfOrientation@IFIOBJ@@QAEJXZ.c)
 *     _cCapString@12 @ 0x89EC2 (_cCapString@12.c)
 *     ?bComputeGISET@@YGHPAU_IFIMETRICS@@PAVPFE@@PAPAU_GISET@@@Z @ 0xDCAD6 (-bComputeGISET@@YGHPAU_IFIMETRICS@@PAVPFE@@PAPAU_GISET@@@Z.c)
 *     _IsAnyCharsetDbcs@4 @ 0xDCCBA (_IsAnyCharsetDbcs@4.c)
 *     @__security_check_cookie@4 @ 0xED840 (@__security_check_cookie@4.c)
 */

int __thiscall PFEMEMOBJ::bInit(
        PFEMEMOBJ *this,
        struct PFF *a2,
        unsigned int a3,
        struct _FD_GLYPHSET *a4,
        unsigned int a5,
        struct _IFIMETRICS *a6,
        unsigned int a7,
        int a8,
        struct _UNIVERSAL_FONT_ID *a9,
        int a10)
{
  int v11; // edi
  unsigned int v12; // esi
  int v13; // eax
  int v14; // ecx
  int v15; // eax
  _DWORD *v16; // edx
  int v17; // eax
  const wchar_t *v18; // esi
  unsigned int v19; // edx
  int v20; // ecx
  int v21; // esi
  int v22; // ecx
  struct _FONTSUB *v23; // edi
  struct _FONTSUB *v24; // esi
  WCHAR v25; // si
  char *v26; // edi
  unsigned int v27; // edx
  WCHAR *v28; // ecx
  WCHAR v30; // ax
  int v31; // eax
  int v32; // eax
  struct PFE *v33; // [esp+0h] [ebp-8Ch]
  struct _GISET **v34; // [esp+4h] [ebp-88h]
  unsigned int v35[3]; // [esp+Ch] [ebp-80h] BYREF
  _BYTE v36[16]; // [esp+18h] [ebp-74h] BYREF
  int v37; // [esp+28h] [ebp-64h]
  int v38; // [esp+2Ch] [ebp-60h]
  unsigned int v39; // [esp+30h] [ebp-5Ch]
  unsigned int v40; // [esp+34h] [ebp-58h]
  WCHAR v41[38]; // [esp+38h] [ebp-54h] BYREF

  v39 = (unsigned int)a6;
  if ( !bValidFont(a6) )
    return 0;
  v11 = 0;
  **(_DWORD **)this = a2;
  *(_DWORD *)(*(_DWORD *)this + 4) = a3;
  *(_DWORD *)(*(_DWORD *)this + 12) = a4;
  *(_DWORD *)(*(_DWORD *)this + 16) = a5;
  *(_DWORD *)(*(_DWORD *)this + 20) = a6;
  *(_DWORD *)(*(_DWORD *)this + 24) = a7;
  *(_DWORD *)(*(_DWORD *)this + 28) = 0;
  *(_DWORD *)(*(_DWORD *)this + 32) = 0;
  *(_DWORD *)(*(_DWORD *)this + 36) = 0;
  *(_DWORD *)(*(_DWORD *)this + 8) = 0;
  *(_DWORD *)(*(_DWORD *)this + 60) = 0;
  *(_DWORD *)(*(_DWORD *)this + 64) = 0;
  *(_DWORD *)(*(_DWORD *)this + 88) = 0;
  v38 = *(_DWORD *)this;
  v40 = *(_DWORD *)(v38 + 20);
  v12 = v40;
  v35[0] = v40;
  v13 = IsAnyCharsetDbcs(v40);
  v14 = v38;
  if ( v13 )
  {
    *(_DWORD *)(v38 + 8) |= 0x80u;
    v14 = *(_DWORD *)this;
  }
  if ( *(_WORD *)(v12 + *(_DWORD *)(v12 + 8)) == 64 )
    *(_DWORD *)(v14 + 8) |= 0x100u;
  v15 = PFEOBJ::dpNtmi(this);
  v16 = (_DWORD *)v39;
  *(_DWORD *)(*(_DWORD *)this + 80) = (v15 + 119) & 0xFFFFFFFC;
  if ( (v16[12] & 0x4000) != 0 && v16[1] > 0x10u )
    *(_DWORD *)(*(_DWORD *)this + 80) += 40 * *(_DWORD *)((char *)v16 + v16[50] + 4);
  if ( a8 )
  {
    *(_DWORD *)(*(_DWORD *)this + 8) |= 1u;
  }
  else
  {
    v17 = *((_DWORD *)a2 + 30);
    if ( v17 && !*(_DWORD *)(*(_DWORD *)v17 + 48) )
    {
      v31 = *(_DWORD *)(*(_DWORD *)this + 8);
      if ( (*((_BYTE *)a2 + 32) & 0x10) != 0 )
        v32 = v31 | 0x40;
      else
        v32 = v31 | 4;
      *(_DWORD *)(*(_DWORD *)this + 8) = v32;
      *(_DWORD *)(*(_DWORD *)this + 60) = (unsigned int)PsGetCurrentProcessId() & 0xFFFFFFFC;
      *(_DWORD *)(*(_DWORD *)this + 64) = KeGetCurrentThread();
    }
  }
  if ( a9 )
    *(_DWORD *)(*(_DWORD *)this + 8) |= 0x20u;
  if ( a10 )
    *(_DWORD *)(*(_DWORD *)this + 8) |= 8u;
  v18 = (const wchar_t *)(v40 + *(_DWORD *)(v12 + 16));
  if ( *v18 == 64 )
    ++v18;
  if ( !__wcsicmp(v18, L"SYSTEM")
    || !__wcsicmp(v18, L"FIXEDSYS")
    || !__wcsicmp(v18, L"TERMINAL")
    || !__wcsicmp(v18, L"SMALL FONTS") && *(_BYTE *)(v40 + 44) == 0x80 )
  {
    *(_DWORD *)(*(_DWORD *)this + 8) |= 0x10u;
  }
  *(_DWORD *)(*(_DWORD *)this + 72) = 0;
  *(_WORD *)(*(_DWORD *)this + 68) = 1;
  *(_WORD *)(*(_DWORD *)this + 70) = 0;
  *(_DWORD *)(*(_DWORD *)this + 48) = _InterlockedIncrement(&dword_2755AC);
  *(_DWORD *)(*(_DWORD *)this + 40) = IFIOBJ::lfOrientation((IFIOBJ *)v35);
  v19 = *(_DWORD *)(v40 + 4);
  if ( v19 < 4 )
    v20 = 0;
  else
    v20 = *(_DWORD *)(v40 + 184);
  if ( v20 )
  {
    if ( v19 >= 4 )
      v11 = *(_DWORD *)(v40 + 184);
    *(_DWORD *)(*(_DWORD *)this + 56) = v11;
    *(_DWORD *)(*(_DWORD *)this + 52) = 1;
  }
  else
  {
    *(_DWORD *)(*(_DWORD *)this + 52) = *((_DWORD *)a2 + 21);
    *(_DWORD *)(*(_DWORD *)this + 56) = a3;
    if ( a9 )
      *(_DWORD *)(*(_DWORD *)this + 56) += (*((_DWORD *)a9 + 1) - 1) & 0xFFFFFFFE;
  }
  memset(v36, 0, sizeof(v36));
  PushThreadGuardedObject(v36, *(_DWORD *)this, vDeletePFE);
  v21 = bComputeGISET((struct _IFIMETRICS *)(*(_DWORD *)this + 44), v33, v34);
  PopThreadGuardedObject(v36);
  v22 = 0;
  if ( v21 )
  {
    *(_DWORD *)(*(_DWORD *)this + 84) = 0;
    if ( *(_DWORD *)(*(_DWORD *)(*(_DWORD *)this + 20) + 40) )
    {
      v23 = gpfsTable;
      v39 = 196 * gcfsTable;
      v24 = (struct _FONTSUB *)((char *)gpfsTable + 196 * gcfsTable);
      cCapString(v41, (WCHAR *)(v40 + *(_DWORD *)(v40 + 8)), 32);
      if ( v23 < v24 )
      {
        v25 = v41[0];
        v26 = (char *)v23 + 129;
        v38 = 1 - (_DWORD)v41;
        v27 = (v39 - 1) / 0xC4 + 1;
        v40 = v27;
        do
        {
          if ( !((unsigned __int8)*v26 | (unsigned __int8)v26[66]) )
          {
            v28 = v41;
            if ( v25 == *(_WORD *)(v26 + 1) )
            {
              v30 = v25;
              v39 = (unsigned int)&v26[v38];
              while ( v30 )
              {
                v30 = *++v28;
                v37 = *v28;
                v27 = v40;
                if ( v30 != *(WCHAR *)((char *)v28 + v39) )
                  goto LABEL_31;
              }
              v27 = v40;
              *(_BYTE *)(*(_DWORD *)(*(_DWORD *)this + 84) + *(_DWORD *)this + 92) = (v26 - (char *)gpfsTable - 129)
                                                                                   / 196;
              ++*(_DWORD *)(*(_DWORD *)this + 84);
              v25 = v41[0];
            }
          }
LABEL_31:
          v26 += 196;
          v40 = --v27;
        }
        while ( v27 );
      }
    }
    return 1;
  }
  return v22;
}
