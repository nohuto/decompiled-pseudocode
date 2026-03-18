/*
 * XREFs of xInsertGlyphbitsRFONTOBJ @ 0x1C00624B8
 * Callers:
 *     ?bInsertGlyphbits@RFONTOBJ@@QEAAHPEAU_GLYPHDATA@@K@Z @ 0x1C00625BC (-bInsertGlyphbits@RFONTOBJ@@QEAAHPEAU_GLYPHDATA@@K@Z.c)
 * Callees:
 *     ?pgbCheckGlyphCache@RFONTOBJ@@QEAAPEAX_K@Z @ 0x1C005F5A4 (-pgbCheckGlyphCache@RFONTOBJ@@QEAAPEAX_K@Z.c)
 *     ?QueryGlyphMetricsPlusBits@PFFOBJ@@QEAAJPEAUDHPDEV__@@PEAU_FONTOBJ@@KKPEAPEAU_GLYPHDATA@@PEAPEAU_GLYPHBITS@@@Z @ 0x1C005FFCC (-QueryGlyphMetricsPlusBits@PFFOBJ@@QEAAJPEAUDHPDEV__@@PEAU_FONTOBJ@@KKPEAPEAU_GLYPHDATA@@PEAPEAU.c)
 *     ?QueryFontData@PFFOBJ@@QEAAJPEAUDHPDEV__@@PEAU_FONTOBJ@@KKPEAU_GLYPHDATA@@PEAXK@Z @ 0x1C006068C (-QueryFontData@PFFOBJ@@QEAAJPEAUDHPDEV__@@PEAU_FONTOBJ@@KKPEAU_GLYPHDATA@@PEAXK@Z.c)
 *     __security_check_cookie @ 0x1C015A0C0 (__security_check_cookie.c)
 *     memset @ 0x1C015F880 (memset.c)
 *     ?bInsertGlyphbitsPath@RFONTOBJ@@QEAAHPEAU_GLYPHDATA@@K@Z @ 0x1C02D43F4 (-bInsertGlyphbitsPath@RFONTOBJ@@QEAAHPEAU_GLYPHDATA@@K@Z.c)
 *     ?vFlushCache@RFONTOBJ@@QEAAXXZ @ 0x1C02D4688 (-vFlushCache@RFONTOBJ@@QEAAXXZ.c)
 */

__int64 __fastcall xInsertGlyphbitsRFONTOBJ(struct _FONTOBJ **this, struct _GLYPHDATA *a2, unsigned int a3)
{
  struct _FONTOBJ *v3; // rdi
  unsigned int v4; // ebp
  int iFile; // eax
  unsigned int v8; // ebx
  unsigned int pvProducer_high; // eax
  ULONG_PTR pvProducer_low; // r12
  __int64 v12; // rax
  void *v13; // rax
  GLYPHDEF v14; // r15
  unsigned int v15; // eax
  struct _GLYPHBITS *v16; // [rsp+40h] [rbp-98h] BYREF
  _QWORD v17[3]; // [rsp+48h] [rbp-90h] BYREF
  struct _GLYPHDATA v18; // [rsp+60h] [rbp-78h] BYREF

  v3 = *this;
  v4 = a3;
  if ( ((*this)[1].iTTUniq & 0x100000000LL) != 0 )
    return 0LL;
  iFile = v3[1].iFile;
  v8 = 0;
  if ( !iFile )
    return 0LL;
  if ( iFile != 2 )
  {
    v17[0] = *(_QWORD *)&v3[2].iUniq;
    if ( *(struct PDEV **)(v17[0] + 88LL) == qword_1C0340A10 )
    {
      v16 = 0LL;
      pvProducer_high = HIDWORD(v3[9].pvProducer);
      v3[10].iFace = a3 & 1 | 4;
      if ( (unsigned int)PFFOBJ::QueryGlyphMetricsPlusBits(
                           (PFFOBJ *)v17,
                           (struct DHPDEV__ *)(*this)[1].pvConsumer,
                           *this,
                           a2->hg,
                           pvProducer_high,
                           0LL,
                           &v16) == -1 )
        return v8;
      a2->gdf.pgb = v16;
    }
    else
    {
      memset(&v18, 0, sizeof(v18));
      pvProducer_low = LODWORD(v3[9].pvProducer);
      if ( pvProducer_low > v3[9].iTTUniq - *(_QWORD *)&v3[9].cxMax )
      {
        LODWORD(pvProducer_low) = PFFOBJ::QueryFontData(
                                    (PFFOBJ *)v17,
                                    (struct DHPDEV__ *)v3[1].pvConsumer,
                                    v3,
                                    1u,
                                    a2->hg,
                                    &v18,
                                    0LL,
                                    0);
        if ( (_DWORD)pvProducer_low == -1 )
          return v8;
      }
      v12 = (unsigned int)pvProducer_low;
      v16 = (struct _GLYPHBITS *)(unsigned int)pvProducer_low;
      while ( 1 )
      {
        v13 = (void *)RFONTOBJ::pgbCheckGlyphCache((RFONTOBJ *)this, v12);
        v14.pgb = (GLYPHBITS *)v13;
        if ( v13 )
          break;
        if ( !v4 )
          return v8;
        RFONTOBJ::vFlushCache((RFONTOBJ *)this);
        v12 = (__int64)v16;
        v4 = 0;
      }
      v15 = PFFOBJ::QueryFontData(
              (PFFOBJ *)v17,
              (struct DHPDEV__ *)(*this)[1].pvConsumer,
              *this,
              1u,
              a2->hg,
              &v18,
              v13,
              pvProducer_low);
      if ( v15 == -1 )
        return v8;
      a2->gdf = v14;
      *(_QWORD *)&v3[9].cxMax += v15;
    }
    return 1;
  }
  return RFONTOBJ::bInsertGlyphbitsPath((RFONTOBJ *)this, a2, a3);
}
