/*
 * XREFs of ?bComputeGISET@@YGHPAU_IFIMETRICS@@PAVPFE@@PAPAU_GISET@@@Z @ 0xDCAD6
 * Callers:
 *     ?bInit@PFEMEMOBJ@@QAEHPAVPFF@@KPAU_FD_GLYPHSET@@KPAU_IFIMETRICS@@KHPAU_UNIVERSAL_FONT_ID@@H@Z @ 0xDC780 (-bInit@PFEMEMOBJ@@QAEHPAVPFF@@KPAU_FD_GLYPHSET@@KPAU_IFIMETRICS@@KHPAU_UNIVERSAL_FONT_ID@@H@Z.c)
 * Callees:
 *     _PALLOCMEM2@12 @ 0x48D0A (_PALLOCMEM2@12.c)
 *     ?vFreepfdg@PFEOBJ@@QAEXXZ @ 0x8404C (-vFreepfdg@PFEOBJ@@QAEXXZ.c)
 *     ?pfdg@PFEOBJ@@QAEPAU_FD_GLYPHSET@@XZ @ 0x857A0 (-pfdg@PFEOBJ@@QAEPAU_FD_GLYPHSET@@XZ.c)
 *     _ULongLongToULong@12 @ 0x9D96E (_ULongLongToULong@12.c)
 *     ??0UmfdClientSideFileViewMapper@@QAE@AAVPFFOBJ@@@Z @ 0xD3126 (--0UmfdClientSideFileViewMapper@@QAE@AAVPFFOBJ@@@Z.c)
 *     ?UnmapMappedViews@UmfdClientSideFileViewMapper@@AAEXXZ @ 0xD47CC (-UnmapMappedViews@UmfdClientSideFileViewMapper@@AAEXXZ.c)
 *     ?cComputeGISET@@YGKPBGKPAU_GISET@@K@Z @ 0xDF0B2 (-cComputeGISET@@YGKPBGKPAU_GISET@@K@Z.c)
 *     _UShortSub@12 @ 0x229551 (_UShortSub@12.c)
 */

int __userpurge bComputeGISET@<eax>(
        int *a1@<edx>,
        ULONG a2@<ecx>,
        struct _IFIMETRICS *a3,
        struct PFE *a4,
        struct _GISET **a5)
{
  int v5; // ebx
  struct _FD_GLYPHSET *v6; // esi
  int v7; // edx
  int v8; // edi
  int v9; // eax
  char v10; // al
  int v11; // edi
  _WORD *v12; // eax
  ULONGLONG v14; // rax
  void *v15; // eax
  USHORT *p_cGlyphs; // eax
  __int16 *v17; // edx
  int v18; // ecx
  unsigned int v19; // edi
  unsigned int v20; // ecx
  _WORD *v21; // ebx
  __int16 v22; // ax
  const unsigned __int16 *v23; // eax
  int v24; // ecx
  unsigned __int16 v25; // ax
  _WORD *v26; // edx
  ULONG *v27; // [esp+0h] [ebp-44h]
  struct _GISET *v28; // [esp+0h] [ebp-44h]
  struct _GISET *v29; // [esp+0h] [ebp-44h]
  USHORT *v30; // [esp+4h] [ebp-40h]
  unsigned int v31; // [esp+4h] [ebp-40h]
  _DWORD v32[3]; // [esp+10h] [ebp-34h] BYREF
  int v33; // [esp+1Ch] [ebp-28h] BYREF
  unsigned int v34; // [esp+20h] [ebp-24h]
  ULONG v35; // [esp+24h] [ebp-20h]
  USHORT usMinuend[2]; // [esp+28h] [ebp-1Ch] BYREF
  int *v37; // [esp+2Ch] [ebp-18h] BYREF
  size_t Size; // [esp+30h] [ebp-14h]
  _WORD *v39; // [esp+34h] [ebp-10h]
  int v40; // [esp+38h] [ebp-Ch]
  void *v41; // [esp+3Ch] [ebp-8h]
  char v42; // [esp+43h] [ebp-1h]

  v5 = 0;
  v37 = a1;
  a3->cjThis = 0;
  v6 = 0;
  v7 = *a1;
  v35 = a2;
  v8 = 1;
  v33 = v7;
  v9 = *(_DWORD *)(v7 + 60);
  v40 = 1;
  if ( v9 != dword_2785B8 || *(_DWORD *)(*(_DWORD *)(v7 + 56) + 4) )
  {
    v42 = 0;
    v6 = PFEOBJ::pfdg((void ***)&v37);
    if ( !v6 )
    {
      UmfdClientSideFileViewMapper::UmfdClientSideFileViewMapper(
        (UmfdClientSideFileViewMapper *)v32,
        (struct PFFOBJ *)&v33);
      if ( v32[2] == *(_DWORD *)(v32[0] + 20) )
        v6 = PFEOBJ::pfdg((void ***)&v37);
      UmfdClientSideFileViewMapper::UnmapMappedViews((UmfdClientSideFileViewMapper *)v32);
      if ( !v6 )
        return v5;
    }
    if ( (v6->flAccel & 6) == 0 )
      goto LABEL_31;
    a2 = v35;
    v10 = 0;
  }
  else
  {
    v10 = 1;
    v42 = 1;
  }
  v11 = 0;
  if ( *(_DWORD *)(a2 + 4) > 8u )
    v11 = *(_DWORD *)(a2 + 192);
  if ( !v10 )
  {
    if ( !v11 )
    {
      v14 = 2LL * v6->cGlyphsSupported;
      Size = 0;
      if ( ULongLongToULong(v14, v27) >= 0 )
      {
        v8 = 1;
        v40 = 1;
        v15 = PALLOCMEM2(Size, 1936484167, 1);
        v41 = v15;
        if ( v15 )
        {
          v39 = v15;
          v35 = 0;
          if ( v6->cRuns )
          {
            p_cGlyphs = &v6->awcrun[0].cGlyphs;
            Size = (size_t)&v6->awcrun[0].cGlyphs;
            do
            {
              v17 = *(__int16 **)(p_cGlyphs + 1);
              v18 = *p_cGlyphs;
              if ( v17 )
              {
                *(_DWORD *)usMinuend = 0;
                v34 = &v17[2 * v18] >= v17 ? v18 : 0;
                if ( v34 )
                {
                  v19 = 0;
                  v20 = &v17[2 * v18] >= v17 ? v18 : 0;
                  v21 = v39;
                  do
                  {
                    v22 = *v17;
                    v17 += 2;
                    *v21++ = v22;
                    ++v19;
                  }
                  while ( v19 < v20 );
                  v8 = v40;
                  v39 = v21;
                }
              }
              else
              {
                *(_DWORD *)usMinuend = 0;
                if ( UShortSub((USHORT)usMinuend, (USHORT)v28, v30) < 0 )
                  goto LABEL_32;
                v24 = *(unsigned __int16 *)(Size - 2);
                v25 = v24 + usMinuend[0];
                if ( (unsigned __int16)v24 <= (unsigned __int16)(v24 + usMinuend[0]) )
                {
                  v26 = v39;
                  do
                    *v26 = v24++;
                  while ( (unsigned __int16)v24 <= v25 );
                }
              }
              p_cGlyphs = (USHORT *)(Size + 8);
              ++v35;
              Size += 8;
            }
            while ( v35 < v6->cRuns );
            v15 = v41;
          }
          _qsort(v15, v6->cGlyphsSupported, 2u, (int (__cdecl *)(const void *, const void *))CompareRoutine);
          v34 = cComputeGISET(0, 0, v28, (unsigned int)v30);
          v23 = (const unsigned __int16 *)PALLOCMEM2(4 * v34 + 8, 1936484167, 1);
          v35 = (ULONG)v23;
          if ( v23 )
          {
            cComputeGISET(v23, v34, v29, v31);
            a3->cjThis = v35;
          }
          else
          {
LABEL_32:
            v8 = 0;
          }
          Win32FreePool(v41);
LABEL_10:
          if ( v42 )
            return v8;
LABEL_31:
          PFEOBJ::vFreepfdg(&v37);
          return v8;
        }
      }
LABEL_42:
      v8 = 0;
      goto LABEL_10;
    }
LABEL_8:
    v12 = PALLOCMEM2(0xCu, 1936484167, 1);
    if ( v12 )
    {
      *(_DWORD *)v12 = v11;
      v12[4] = 0;
      v12[5] = v11;
      v8 = v40;
      *((_DWORD *)v12 + 1) = 1;
      a3->cjThis = (ULONG)v12;
      goto LABEL_10;
    }
    goto LABEL_42;
  }
  if ( v11 )
    goto LABEL_8;
  return v5;
}
