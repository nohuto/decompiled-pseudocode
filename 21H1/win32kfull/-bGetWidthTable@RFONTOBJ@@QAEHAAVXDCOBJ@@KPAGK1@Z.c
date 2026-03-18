/*
 * XREFs of ?bGetWidthTable@RFONTOBJ@@QAEHAAVXDCOBJ@@KPAGK1@Z @ 0x86D0C
 * Callers:
 *     _NtGdiGetWidthTable@28 @ 0x85948 (_NtGdiGetWidthTable@28.c)
 * Callees:
 *     ?bGetGlyphMetrics@RFONTOBJ@@QAEHKPAU_GLYPHPOS@@PAGPAVXDCOBJ@@PAVESTROBJ@@@Z @ 0x8700E (-bGetGlyphMetrics@RFONTOBJ@@QAEHKPAU_GLYPHPOS@@PAGPAVXDCOBJ@@PAVESTROBJ@@@Z.c)
 *     ??1ATTACHOBJ@@QAE@XZ @ 0x8735E (--1ATTACHOBJ@@QAE@XZ.c)
 *     ??0ATTACHOBJ@@QAE@PAVPFFOBJ@@@Z @ 0x8737C (--0ATTACHOBJ@@QAE@PAVPFFOBJ@@@Z.c)
 *     ?vXlatGlyphArray@RFONTOBJ@@QAEXPBGIPAKKH@Z @ 0x877DE (-vXlatGlyphArray@RFONTOBJ@@QAEXPBGIPAKKH@Z.c)
 *     ?bIsLinkedGlyph@RFONTOBJ@@QAEHG@Z @ 0xC1064 (-bIsLinkedGlyph@RFONTOBJ@@QAEHG@Z.c)
 *     ?bIsSystemTTGlyph@RFONTOBJ@@QBEHG@Z @ 0xC1144 (-bIsSystemTTGlyph@RFONTOBJ@@QBEHG@Z.c)
 *     @__security_check_cookie@4 @ 0xED840 (@__security_check_cookie@4.c)
 */

int __thiscall RFONTOBJ::bGetWidthTable(
        RFONTOBJ *this,
        struct XDCOBJ *a2,
        unsigned int a3,
        unsigned __int16 *a4,
        unsigned int a5,
        unsigned __int16 *a6)
{
  int v7; // ecx
  unsigned __int16 *v8; // ebx
  int v9; // eax
  int v10; // edi
  unsigned int v11; // edx
  unsigned int v12; // eax
  unsigned int v13; // esi
  const unsigned __int16 *v14; // ebx
  unsigned int v15; // eax
  int v16; // ebx
  int v17; // edi
  int (__stdcall *v18)(int, int, int, unsigned int *, unsigned __int16 *, unsigned int); // esi
  int v19; // edx
  int v20; // ecx
  unsigned int v21; // ebx
  unsigned int v22; // edx
  unsigned __int16 *v23; // esi
  unsigned int v24; // esi
  unsigned __int16 *v25; // ecx
  unsigned int v26; // eax
  unsigned __int16 *v28; // edi
  unsigned int i; // ecx
  unsigned int v30; // [esp+18h] [ebp-178h]
  unsigned int v31; // [esp+18h] [ebp-178h]
  RFONTOBJ *v32; // [esp+1Ch] [ebp-174h]
  int v33; // [esp+20h] [ebp-170h]
  unsigned __int16 *v34; // [esp+24h] [ebp-16Ch]
  unsigned __int16 *v35; // [esp+28h] [ebp-168h]
  unsigned __int16 *v36; // [esp+2Ch] [ebp-164h]
  unsigned int v37; // [esp+30h] [ebp-160h]
  unsigned int v38; // [esp+34h] [ebp-15Ch]
  unsigned int v39; // [esp+38h] [ebp-158h]
  unsigned int v40; // [esp+3Ch] [ebp-154h]
  __int16 v41; // [esp+44h] [ebp-14Ch]
  int v42; // [esp+48h] [ebp-148h]
  struct _GLYPHPOS v43; // [esp+50h] [ebp-140h] BYREF
  int v44; // [esp+60h] [ebp-130h] BYREF
  _BYTE v45[8]; // [esp+68h] [ebp-128h] BYREF
  unsigned int v46[71]; // [esp+70h] [ebp-120h] BYREF

  v7 = 1;
  v8 = a6;
  v32 = this;
  memset(&v43, 0, sizeof(v43));
  v33 = 1;
  v9 = *(_DWORD *)this;
  v10 = -1;
  v11 = a5;
  if ( !*(_DWORD *)(*(_DWORD *)(v9 + 68) + 2112) )
  {
    if ( a5 )
    {
      memset(a6, 0xFFu, 4 * (a5 >> 1));
      v28 = &a6[2 * (a5 >> 1)];
      for ( i = a5 & 1; i; --i )
        *v28++ = -1;
      v10 = -1;
    }
    v7 = 0;
    v33 = 0;
    goto LABEL_19;
  }
  if ( a3 >= a5 )
  {
    v12 = a5;
    v38 = a5;
  }
  else
  {
    v12 = a3;
    v38 = a3;
  }
  v34 = a6;
  v13 = a5;
  v14 = a4;
  v40 = a5;
  v35 = a4;
  if ( a5 )
  {
    while ( 1 )
    {
      if ( v12 )
      {
        v30 = v12;
        if ( v12 >= 0x46 )
          v30 = 70;
        v15 = 0;
      }
      else
      {
        v30 = v13;
        if ( v13 >= 0x46 )
          v30 = 70;
        v15 = 2;
      }
      v39 = v15;
      RFONTOBJ::vXlatGlyphArray(v32, v14, v30, v46, v15, 0);
      v16 = *(_DWORD *)v32;
      v17 = *(_DWORD *)(*(_DWORD *)v32 + 76);
      v44 = *(_DWORD *)(*(_DWORD *)v32 + 84);
      v18 = *(int (__stdcall **)(int, int, int, unsigned int *, unsigned __int16 *, unsigned int))(*(_DWORD *)(v44 + 60)
                                                                                                 + 2112);
      ATTACHOBJ::ATTACHOBJ((ATTACHOBJ *)v45, (struct PFFOBJ *)&v44);
      v42 = v18(v17, v16, 1, v46, v34, v30);
      ATTACHOBJ::~ATTACHOBJ((ATTACHOBJ *)v45);
      v10 = -1;
      v19 = *(_DWORD *)v32;
      v20 = *(_DWORD *)(*(_DWORD *)v32 + 708);
      if ( v42 == -1 )
        break;
      v21 = v30;
      if ( (v20 & 0x40) != 0 )
      {
        *(_DWORD *)(v19 + 708) = v20 & 0xFFFFFFBF;
        v22 = 0;
        v37 = 0;
        v41 = *(_WORD *)(*(_DWORD *)(*(_DWORD *)(*(_DWORD *)v32 + 80) + 20) + 116);
        if ( v30 )
        {
          v23 = v35;
          v31 = (char *)v34 - (char *)v35;
          while ( 1 )
          {
            if ( v46[v22] != *(_DWORD *)(*(_DWORD *)v32 + 520) || *v23 == v41 )
              goto LABEL_14;
            if ( v39 == 2 )
              goto LABEL_28;
            if ( !RFONTOBJ::bIsLinkedGlyph(v32, *v23) && !RFONTOBJ::bIsSystemTTGlyph(v32, *v23) )
              break;
            if ( !RFONTOBJ::bGetGlyphMetrics(v32, 1u, &v43, v23, a2, 0) )
              return v10;
            v22 = v37;
            *(unsigned __int16 *)((char *)v23 + v31) = (unsigned __int16)v43.pgdf[2].pgb;
LABEL_14:
            ++v22;
            ++v23;
            v37 = v22;
            if ( v22 >= v21 )
              goto LABEL_15;
          }
          v22 = v37;
LABEL_28:
          v33 = 0;
          *(unsigned __int16 *)((char *)v23 + v31) = -1;
          goto LABEL_14;
        }
      }
LABEL_15:
      v34 += v21;
      v13 = v40 - v21;
      v35 += v21;
      v7 = v42 & v33;
      v12 = v38;
      v33 &= v42;
      v40 -= v21;
      if ( v38 )
      {
        v12 = v38 - v21;
        v38 -= v21;
      }
      v14 = v35;
      if ( !v13 )
      {
        v11 = a5;
        v8 = a6;
LABEL_19:
        if ( !v7 )
        {
          v24 = 0;
          v25 = (unsigned __int16 *)((char *)a4 - (char *)v8);
          v36 = (unsigned __int16 *)((char *)a4 - (char *)v8);
          while ( 1 )
          {
            v26 = a3;
            if ( a3 >= v11 )
              v26 = v11;
            if ( v24 >= v26 )
              break;
            if ( *v8 == 0xFFFF )
            {
              if ( !RFONTOBJ::bGetGlyphMetrics(v32, 1u, &v43, (unsigned __int16 *)((char *)v8 + (_DWORD)v25), a2, 0) )
                return v10;
              v11 = a5;
              v25 = v36;
              *v8 = (unsigned __int16)v43.pgdf[2].pgb;
            }
            ++v24;
            ++v8;
          }
          v7 = v33;
        }
        goto LABEL_33;
      }
    }
    *(_DWORD *)(v19 + 708) = v20 & 0xFFFFFFBF;
  }
  else
  {
LABEL_33:
    if ( v11 == a3 )
      return 2 * (v7 != -1) - 1;
    else
      return v7;
  }
  return v10;
}
