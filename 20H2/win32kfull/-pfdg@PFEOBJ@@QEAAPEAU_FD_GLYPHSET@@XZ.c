/*
 * XREFs of ?pfdg@PFEOBJ@@QEAAPEAU_FD_GLYPHSET@@XZ @ 0x1C00640E0
 * Callers:
 *     ?bComputeGISET@@YAHPEAU_IFIMETRICS@@PEAVPFE@@PEAPEAU_GISET@@@Z @ 0x1C001F0D8 (-bComputeGISET@@YAHPEAU_IFIMETRICS@@PEAVPFE@@PEAPEAU_GISET@@@Z.c)
 *     ?vXlatGlyphArray@RFONTOBJ@@QEAAXPEBGIPEAKKH@Z @ 0x1C0060F30 (-vXlatGlyphArray@RFONTOBJ@@QEAAXPEBGIPEAKKH@Z.c)
 *     ?bRealizeFont@RFONTOBJ@@QEAAHPEAVXDCOBJ@@PEAVPDEVOBJ@@PEAUtagENUMLOGFONTEXDVW@@PEAVPFE@@PEAU_FD_XFORM@@QEAU_POINTL@@KKHHK@Z @ 0x1C0062FD8 (-bRealizeFont@RFONTOBJ@@QEAAHPEAVXDCOBJ@@PEAVPDEVOBJ@@PEAUtagENUMLOGFONTEXDVW@@PEAVPFE@@PEAU_FD_.c)
 *     ?bComputeQuickLookup@@YAHPEAU_QUICKLOOKUP@@PEAVPFE@@H@Z @ 0x1C00F46D4 (-bComputeQuickLookup@@YAHPEAU_QUICKLOOKUP@@PEAVPFE@@H@Z.c)
 *     GreGetFontUnicodeRanges @ 0x1C0150CB8 (GreGetFontUnicodeRanges.c)
 * Callees:
 *     ?QueryFontTree@PFFOBJ@@QEAAPEAXPEAUDHPDEV__@@_KKKPEA_K@Z @ 0x1C0065700 (-QueryFontTree@PFFOBJ@@QEAAPEAXPEAUDHPDEV__@@_KKKPEA_K@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C015F580 (_guard_dispatch_icall_nop.c)
 *     ?bExtendGlyphSet@@YA_NPEAPEAU_FD_GLYPHSET@@0@Z @ 0x1C02BA044 (-bExtendGlyphSet@@YA_NPEAPEAU_FD_GLYPHSET@@0@Z.c)
 */

struct _FD_GLYPHSET *__fastcall PFEOBJ::pfdg(__int64 **this)
{
  struct _FD_GLYPHSET *v2; // rsi
  int v3; // r15d
  __int64 v4; // r13
  __int64 v5; // rbx
  __int64 *v6; // rax
  int v7; // r14d
  __int64 v8; // rbx
  bool v10; // al
  void (__fastcall *v11)(struct _FD_GLYPHSET *, unsigned __int64); // rax
  __int64 v12; // [rsp+30h] [rbp-10h] BYREF
  struct _FD_GLYPHSET *v13; // [rsp+80h] [rbp+40h] BYREF
  unsigned __int64 v14; // [rsp+88h] [rbp+48h] BYREF
  struct _FD_GLYPHSET *v15; // [rsp+90h] [rbp+50h] BYREF

  v2 = 0LL;
  v3 = 0;
  v4 = **this;
  v12 = v4;
  v5 = *(_QWORD *)(v4 + 88);
  v14 = 0LL;
  GreAcquireSemaphore(ghsemGlyphSet);
  v6 = *this;
  if ( !(*this)[2] )
  {
    v7 = *(_DWORD *)(v5 + 40) & 0x8000;
    if ( v7 )
    {
      EtwTraceGreLockReleaseSemaphore(L"ghsemGlyphSet", ghsemGlyphSet);
      GreReleaseSemaphoreInternal(ghsemGlyphSet);
      v6 = *this;
    }
    v13 = (struct _FD_GLYPHSET *)PFFOBJ::QueryFontTree(
                                   (PFFOBJ *)&v12,
                                   *(struct DHPDEV__ **)(v4 + 96),
                                   *(_QWORD *)(v4 + 80),
                                   *((_DWORD *)v6 + 2),
                                   3u,
                                   &v14);
    v2 = v13;
    if ( v7 )
      GreAcquireSemaphore(ghsemGlyphSet);
    if ( v2 )
    {
      if ( (*this)[2] )
      {
LABEL_16:
        v3 = 1;
        goto LABEL_9;
      }
      (*this)[2] = (__int64)v2;
      (*this)[3] = v14;
      if ( v7 )
      {
        if ( *(_BYTE *)((*this)[4] + 44) == 2 )
        {
          v15 = 0LL;
          v10 = bExtendGlyphSet(&v13, &v15);
          v2 = v13;
          if ( v10 )
          {
            (*this)[2] = (__int64)v15;
            goto LABEL_16;
          }
        }
      }
    }
  }
LABEL_9:
  if ( (*this)[2] )
    ++*((_DWORD *)*this + 34);
  if ( v3 )
  {
    v11 = *(void (__fastcall **)(struct _FD_GLYPHSET *, unsigned __int64))(v5 + 3024);
    if ( v11 )
      v11(v2, v14);
  }
  v8 = (*this)[2];
  EtwTraceGreLockReleaseSemaphore(L"ghsemGlyphSet", ghsemGlyphSet);
  GreReleaseSemaphoreInternal(ghsemGlyphSet);
  return (struct _FD_GLYPHSET *)v8;
}
