/*
 * XREFs of NtGdiFONTOBJ_cGetGlyphs @ 0x1C02B4830
 * Callers:
 *     <none>
 * Callees:
 *     W32GetThreadWin32Thread @ 0x1C00A7BBC (W32GetThreadWin32Thread.c)
 *     ?GetThreadCurrentObj@UMPDOBJ@@SAPEAV1@PEAU_W32THREAD@@@Z @ 0x1C00CC86C (-GetThreadCurrentObj@UMPDOBJ@@SAPEAV1@PEAU_W32THREAD@@@Z.c)
 *     ??1RFONTTMPOBJ@@QEAA@XZ @ 0x1C00E3244 (--1RFONTTMPOBJ@@QEAA@XZ.c)
 *     ?ThunkMemBlock@UMPDOBJ@@QEAAHPEAPEAXK@Z @ 0x1C00EEDC0 (-ThunkMemBlock@UMPDOBJ@@QEAAHPEAPEAXK@Z.c)
 *     ?UMPDReleaseRFONTSem@@YAHAEAVRFONTOBJ@@PEAVUMPDOBJ@@PEAK2PEAPEAH@Z @ 0x1C0130AA4 (-UMPDReleaseRFONTSem@@YAHAEAVRFONTOBJ@@PEAVUMPDOBJ@@PEAK2PEAPEAH@Z.c)
 *     ?UMPDAcquireRFONTSem@@YAXAEAVRFONTOBJ@@PEAVUMPDOBJ@@KKPEBH@Z @ 0x1C0130C7C (-UMPDAcquireRFONTSem@@YAXAEAVRFONTOBJ@@PEAVUMPDOBJ@@KKPEBH@Z.c)
 *     ??$GetDDIOBJ@U_FONTOBJ@@@UMPDOBJ@@QEAAPEAU_FONTOBJ@@PEAU1@@Z @ 0x1C0130DE4 (--$GetDDIOBJ@U_FONTOBJ@@@UMPDOBJ@@QEAAPEAU_FONTOBJ@@PEAU1@@Z.c)
 *     ??0PUBLIC_PFTOBJ@@QEAA@PEAVPFT@@@Z @ 0x1C01599E8 (--0PUBLIC_PFTOBJ@@QEAA@PEAVPFT@@@Z.c)
 *     FONTOBJ_cGetGlyphs @ 0x1C0293E00 (FONTOBJ_cGetGlyphs.c)
 *     ?CacheGlyphBits@UMPDOBJ@@QEAAPEAU_GLYPHBITS@@PEAU2@@Z @ 0x1C02941C0 (-CacheGlyphBits@UMPDOBJ@@QEAAPEAU_GLYPHBITS@@PEAU2@@Z.c)
 *     ?CacheGlyphPath@UMPDOBJ@@QEAAPEAU_PATHOBJ@@PEAU2@@Z @ 0x1C029424C (-CacheGlyphPath@UMPDOBJ@@QEAAPEAU_PATHOBJ@@PEAU2@@Z.c)
 */

__int64 __fastcall NtGdiFONTOBJ_cGetGlyphs(__int64 a1, ULONG a2, __int64 a3, ULONG64 a4, ULONG64 a5)
{
  struct _W32THREAD *ThreadWin32Thread; // rax
  struct UMPDOBJ *ThreadCurrentObj; // rax
  struct UMPDOBJ *v10; // rdi
  struct PFT *v11; // r14
  HGLYPH *v12; // rsi
  ULONG Glyphs; // ebx
  struct _GLYPHBITS **v14; // rsi
  struct _GLYPHBITS *v15; // rdx
  struct _GLYPHBITS *v16; // rax
  PVOID *v17; // rdx
  _DWORD v19[3]; // [rsp+34h] [rbp-54h] BYREF
  PVOID ppvGlyph[2]; // [rsp+40h] [rbp-48h] BYREF
  _BYTE v21[56]; // [rsp+50h] [rbp-38h] BYREF

  v19[1] = a2;
  ppvGlyph[0] = 0LL;
  v19[0] = 0;
  ThreadWin32Thread = (struct _W32THREAD *)W32GetThreadWin32Thread((__int64)KeGetCurrentThread());
  ThreadCurrentObj = UMPDOBJ::GetThreadCurrentObj(ThreadWin32Thread);
  v10 = ThreadCurrentObj;
  ppvGlyph[1] = ThreadCurrentObj;
  if ( !ThreadCurrentObj )
    return 0LL;
  ++*((_DWORD *)ThreadCurrentObj + 105);
  v11 = (struct PFT *)UMPDOBJ::GetDDIOBJ<_FONTOBJ>((__int64)ThreadCurrentObj, a1);
  if ( !v11 || a2 - 1 > 1 )
  {
    --*((_DWORD *)v10 + 105);
    return 0LL;
  }
  v12 = (HGLYPH *)a4;
  if ( a4 )
  {
    if ( a4 >= MmUserProbeAddress )
      v12 = (HGLYPH *)MmUserProbeAddress;
    v19[0] = *v12;
    v12 = v19;
  }
  PUBLIC_PFTOBJ::PUBLIC_PFTOBJ((PUBLIC_PFTOBJ *)v21, v11);
  UMPDAcquireRFONTSem((struct RFONTOBJ *)v21, v10, 0, 0, 0LL);
  Glyphs = FONTOBJ_cGetGlyphs((FONTOBJ *)v11, a2, 1u, v12, ppvGlyph);
  if ( Glyphs == 1 )
  {
    v14 = (struct _GLYPHBITS **)ppvGlyph[0];
    if ( (unsigned int)UMPDOBJ::ThunkMemBlock(v10, (const void **)ppvGlyph, 0x40u) )
    {
      v15 = *v14;
      if ( *v14 )
      {
        if ( a2 == 1 )
          v16 = UMPDOBJ::CacheGlyphBits(v10, v15);
        else
          v16 = (struct _GLYPHBITS *)UMPDOBJ::CacheGlyphPath(v10, (struct _PATHOBJ *)v15);
        *(_QWORD *)ppvGlyph[0] = v16;
        Glyphs = v16 != 0LL;
      }
    }
    else
    {
      Glyphs = 0;
    }
  }
  UMPDReleaseRFONTSem((struct RFONTOBJ *)v21, v10, 0LL, 0LL, 0LL);
  if ( Glyphs )
  {
    v17 = (PVOID *)a5;
    if ( a5 >= MmUserProbeAddress )
      v17 = (PVOID *)MmUserProbeAddress;
    *v17 = ppvGlyph[0];
  }
  RFONTTMPOBJ::~RFONTTMPOBJ((RFONTTMPOBJ *)v21);
  --*((_DWORD *)v10 + 105);
  return Glyphs;
}
