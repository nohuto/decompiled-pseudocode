/*
 * XREFs of _NtGdiFONTOBJ_cGetGlyphs@20 @ 0x219EAF
 * Callers:
 *     <none>
 * Callees:
 *     _W32GetThreadWin32Thread@4 @ 0x3FA3E (_W32GetThreadWin32Thread@4.c)
 *     ??1RFONTTMPOBJ@@QAE@XZ @ 0x869E4 (--1RFONTTMPOBJ@@QAE@XZ.c)
 *     ?GetThreadCurrentObj@UMPDOBJ@@SGPAV1@PAU_W32THREAD@@@Z @ 0x9593E (-GetThreadCurrentObj@UMPDOBJ@@SGPAV1@PAU_W32THREAD@@@Z.c)
 *     ??0PUBLIC_PFTOBJ@@QAE@PAVPFT@@@Z @ 0xAB9A0 (--0PUBLIC_PFTOBJ@@QAE@PAVPFT@@@Z.c)
 *     __SEH_prolog4 @ 0xF9120 (__SEH_prolog4.c)
 *     _FONTOBJ_cGetGlyphs@20 @ 0x1F3507 (_FONTOBJ_cGetGlyphs@20.c)
 *     ??$GetDDIOBJ@U_FONTOBJ@@@UMPDOBJ@@QAEPAU_FONTOBJ@@PAU1@@Z @ 0x1F3854 (--$GetDDIOBJ@U_FONTOBJ@@@UMPDOBJ@@QAEPAU_FONTOBJ@@PAU1@@Z.c)
 *     ?CacheGlyphBits@UMPDOBJ@@QAEPAU_GLYPHBITS@@PAU2@@Z @ 0x1F38D2 (-CacheGlyphBits@UMPDOBJ@@QAEPAU_GLYPHBITS@@PAU2@@Z.c)
 *     ?CacheGlyphPath@UMPDOBJ@@QAEPAU_PATHOBJ@@PAU2@@Z @ 0x1F3934 (-CacheGlyphPath@UMPDOBJ@@QAEPAU_PATHOBJ@@PAU2@@Z.c)
 *     ?ThunkMemBlock@UMPDOBJ@@QAEHPAPAXK@Z @ 0x1F3FEA (-ThunkMemBlock@UMPDOBJ@@QAEHPAPAXK@Z.c)
 *     ?UMPDAcquireRFONTSem@@YGXAAVRFONTOBJ@@PAVUMPDOBJ@@KKPBH@Z @ 0x210A97 (-UMPDAcquireRFONTSem@@YGXAAVRFONTOBJ@@PAVUMPDOBJ@@KKPBH@Z.c)
 *     ?UMPDReleaseRFONTSem@@YGHAAVRFONTOBJ@@PAVUMPDOBJ@@PAK2PAPAH@Z @ 0x210CB8 (-UMPDReleaseRFONTSem@@YGHAAVRFONTOBJ@@PAVUMPDOBJ@@PAK2PAPAH@Z.c)
 */

ULONG __stdcall NtGdiFONTOBJ_cGetGlyphs(FONTOBJ *pfo, _DWORD *iMode, int a3, HGLYPH *phg, ULONG a5)
{
  PKTHREAD CurrentThread; // eax
  _DWORD *ThreadWin32Thread; // eax
  struct UMPDOBJ *ThreadCurrentObj; // eax
  HGLYPH *v8; // ecx
  FONTOBJ *v9; // esi
  int *v10; // ecx
  ULONG Glyphs; // esi
  struct _GLYPHBITS *v12; // ecx
  struct _GLYPHBITS *v13; // eax
  _DWORD *v14; // ecx
  unsigned int v16; // [esp+0h] [ebp-3Ch]
  unsigned int *v17; // [esp+0h] [ebp-3Ch]
  const int *v18; // [esp+4h] [ebp-38h]
  int **v19; // [esp+4h] [ebp-38h]
  _DWORD *v20; // [esp+10h] [ebp-2Ch]
  HGLYPH v21; // [esp+14h] [ebp-28h] BYREF
  ULONG v22; // [esp+18h] [ebp-24h]
  PVOID ppvGlyph; // [esp+1Ch] [ebp-20h] BYREF
  UMPDOBJ *v24; // [esp+20h] [ebp-1Ch]
  CPPEH_RECORD ms_exc; // [esp+24h] [ebp-18h]

  v20 = iMode;
  ppvGlyph = 0;
  v21 = 0;
  CurrentThread = KeGetCurrentThread();
  ThreadWin32Thread = (_DWORD *)W32GetThreadWin32Thread(CurrentThread);
  ThreadCurrentObj = UMPDOBJ::GetThreadCurrentObj(ThreadWin32Thread);
  v24 = ThreadCurrentObj;
  if ( !ThreadCurrentObj )
    return 0;
  ++*((_DWORD *)ThreadCurrentObj + 57);
  pfo = (FONTOBJ *)UMPDOBJ::GetDDIOBJ<_FONTOBJ>(ThreadCurrentObj, (int)pfo);
  if ( !pfo || iMode != (_DWORD *)1 && iMode != (_DWORD *)2 )
  {
    --*((_DWORD *)v24 + 57);
    return 0;
  }
  ms_exc.registration.TryLevel = 0;
  v8 = phg;
  if ( phg )
  {
    if ( (unsigned int)phg >= _MmUserProbeAddress )
      v8 = (HGLYPH *)_MmUserProbeAddress;
    v21 = *v8;
    phg = &v21;
  }
  ms_exc.registration.TryLevel = -2;
  v9 = pfo;
  PUBLIC_PFTOBJ::PUBLIC_PFTOBJ((PUBLIC_PFTOBJ *)&pfo, (struct PFT *)pfo);
  UMPDAcquireRFONTSem(v24, v10, 0, 0, 0, v16, v18);
  Glyphs = FONTOBJ_cGetGlyphs(v9, (ULONG)iMode, 1u, phg, &ppvGlyph);
  v22 = Glyphs;
  if ( Glyphs == 1 )
  {
    iMode = ppvGlyph;
    if ( UMPDOBJ::ThunkMemBlock(v24, &ppvGlyph, (void *)0x40) )
    {
      v12 = (struct _GLYPHBITS *)*iMode;
      if ( *iMode )
      {
        if ( v20 == (_DWORD *)1 )
        {
          ms_exc.registration.TryLevel = 1;
          v13 = UMPDOBJ::CacheGlyphBits(v24, v12);
        }
        else
        {
          ms_exc.registration.TryLevel = 2;
          v13 = (struct _GLYPHBITS *)UMPDOBJ::CacheGlyphPath(v24, (struct _PATHOBJ *)v12);
        }
        *(_DWORD *)ppvGlyph = v13;
        Glyphs = v13 != 0;
        v22 = Glyphs;
        ms_exc.registration.TryLevel = -2;
      }
    }
    else
    {
      Glyphs = 0;
      v22 = 0;
    }
  }
  UMPDReleaseRFONTSem(v24, (int *)&pfo, 0, 0, 0, v17, v19);
  if ( Glyphs )
  {
    ms_exc.registration.TryLevel = 3;
    v14 = (_DWORD *)a5;
    if ( a5 >= _MmUserProbeAddress )
      v14 = (_DWORD *)_MmUserProbeAddress;
    *v14 = ppvGlyph;
    ms_exc.registration.TryLevel = -2;
  }
  RFONTTMPOBJ::~RFONTTMPOBJ((RFONTTMPOBJ *)&pfo);
  --*((_DWORD *)v24 + 57);
  return Glyphs;
}
