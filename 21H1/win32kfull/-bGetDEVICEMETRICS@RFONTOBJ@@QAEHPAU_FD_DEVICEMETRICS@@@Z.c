/*
 * XREFs of ?bGetDEVICEMETRICS@RFONTOBJ@@QAEHPAU_FD_DEVICEMETRICS@@@Z @ 0x8521A
 * Callers:
 *     ?bRealizeFont@RFONTOBJ@@QAEHPAVXDCOBJ@@PAVPDEVOBJ@@PAUtagENUMLOGFONTEXDVW@@PAVPFE@@PAU_FD_XFORM@@QAU_POINTL@@KKHHK@Z @ 0x84984 (-bRealizeFont@RFONTOBJ@@QAEHPAVXDCOBJ@@PAVPDEVOBJ@@PAUtagENUMLOGFONTEXDVW@@PAVPFE@@PAU_FD_XFORM@.c)
 * Callees:
 *     ?QueryFontData@PFFOBJ@@QAEJPAUDHPDEV__@@PAU_FONTOBJ@@KKPAU_GLYPHDATA@@PAXK@Z @ 0x872CA (-QueryFontData@PFFOBJ@@QAEJPAUDHPDEV__@@PAU_FONTOBJ@@KKPAU_GLYPHDATA@@PAXK@Z.c)
 *     __allmul @ 0xF91DF (__allmul.c)
 */

int __thiscall RFONTOBJ::bGetDEVICEMETRICS(struct _FONTOBJ **this, struct _FD_DEVICEMETRICS *a2)
{
  FLOATL *p_iUniq; // esi
  struct _FD_DEVICEMETRICS *v4; // edx
  FLONG flRealizedType; // eax
  FIX fxMaxAscender; // esi
  struct _FONTOBJ *v7; // ecx
  FIX fxMaxDescender; // eax
  unsigned int *v9; // edi
  FLOATL *v10; // edi
  int v12; // eax
  unsigned int v13; // ecx
  unsigned int v14; // esi
  __int64 v15; // rax
  unsigned int v16; // ecx
  struct DHPDEV__ *ulStyleSize; // [esp-1Ch] [ebp-48h]
  struct _FONTOBJ *v18; // [esp-18h] [ebp-44h]
  PVOID pvProducer; // [esp+10h] [ebp-1Ch] BYREF
  unsigned __int64 v20; // [esp+14h] [ebp-18h]
  unsigned int v21; // [esp+1Ch] [ebp-10h]
  FLONG flFontType; // [esp+20h] [ebp-Ch]
  int v23; // [esp+24h] [ebp-8h]

  p_iUniq = &(*this)[2].iUniq;
  a2->fdxQuantized.eXX = *p_iUniq++;
  a2->fdxQuantized.eXY = *p_iUniq++;
  a2->fdxQuantized.eYX = *p_iUniq;
  a2->fdxQuantized.eYY = p_iUniq[1];
  a2->lNonLinearExtLeading = 0x80000000;
  a2->lNonLinearIntLeading = 0x80000000;
  a2->lNonLinearMaxCharWidth = 0x80000000;
  a2->lNonLinearAvgCharWidth = 0x80000000;
  v18 = *this;
  ulStyleSize = (struct DHPDEV__ *)(*this)[1].ulStyleSize;
  pvProducer = (*this)[1].pvProducer;
  if ( PFFOBJ::QueryFontData((PFFOBJ *)&pvProducer, ulStyleSize, v18, 3u, 0xFFFFFFFF, 0, a2, 0x7Cu) == -1 )
    return 0;
  v4 = a2;
  (*this)[6].iTTUniq = 1;
  flRealizedType = a2->flRealizedType;
  if ( (a2->flRealizedType & 2) != 0 )
  {
    (*this)[6].iTTUniq |= 0x40u;
    flRealizedType = a2->flRealizedType;
  }
  if ( (flRealizedType & 4) != 0 )
  {
    (*this)[6].iTTUniq |= 0x20u;
    flRealizedType = a2->flRealizedType;
  }
  if ( (flRealizedType & 8) != 0 )
    (*this)[6].iTTUniq |= 0x10u;
  (*this)[7].pvProducer = (PVOID)a2->cxMax;
  *(POINTL *)&(*this)[6].iFile = a2->ptlUnderline1;
  *(POINTL *)&(*this)[6].sizLogResPpi.cy = a2->ptlStrikeout;
  *(POINTL *)&(*this)[6].pvConsumer = a2->ptlULThickness;
  *(POINTL *)&(*this)[7].iUniq = a2->ptlSOThickness;
  fxMaxAscender = a2->fxMaxAscender;
  v7 = *this;
  fxMaxDescender = a2->fxMaxDescender;
  if ( fxMaxAscender < 0 )
    goto LABEL_11;
  if ( fxMaxDescender >= 0 )
  {
    fxMaxDescender += fxMaxAscender;
LABEL_11:
    v7[7].iFile = fxMaxDescender;
    goto LABEL_12;
  }
  v7[7].iFile = fxMaxAscender;
LABEL_12:
  (*this)[7].flFontType = a2->fxMaxAscender;
  (*this)[7].iTTUniq = -a2->fxMaxDescender;
  (*this)[8].iFace = (signed int)((*this)[7].flFontType + 8) >> 4;
  (*this)[8].cxMax = (signed int)((*this)[7].flFontType - (*this)[7].iTTUniq + 8) >> 4;
  (*this)[7].cxMax = a2->lD;
  if ( ((*this)[7].cxMax & 0x80000000) == 0 )
  {
    (*this)[8].iUniq = a2->cyMax;
    (*this)[14].iTTUniq = a2->cjGlyphMax;
    (*this)[14].iFile = a2->cjGlyphMax;
    v9 = (unsigned int *)*this;
    flFontType = (*this)->flFontType;
    if ( (flFontType & 0x10000000) == 0 )
    {
LABEL_14:
      v10 = v9 + 91;
      *v10++ = v4->fdxQuantized.eXX;
      *v10++ = v4->fdxQuantized.eXY;
      *v10 = v4->fdxQuantized.eYX;
      v10[1] = v4->fdxQuantized.eYY;
      (*this)[8].sizLogResPpi.cy = v4->lNonLinearExtLeading;
      (*this)[8].ulStyleSize = v4->lNonLinearIntLeading;
      (*this)[8].pvConsumer = (PVOID)v4->lNonLinearMaxCharWidth;
      (*this)[8].pvProducer = (PVOID)v4->lNonLinearAvgCharWidth;
      (*this)[15].ulStyleSize = v4->lMinA;
      (*this)[15].pvConsumer = (PVOID)v4->lMinC;
      (*this)[15].pvProducer = (PVOID)v4->lMinD;
      (*this)->cxMax = (ULONG)(*this)[7].pvProducer;
      return 1;
    }
    v13 = ((unsigned __int64)v9[87] + 2) >> 32;
    v12 = v9[87] + 2;
    v21 = v9[88];
    v20 = __PAIR64__(v13, v12);
    v15 = __PAIR64__(v13, v12) * v21;
    v14 = v15;
    LODWORD(v15) = HIDWORD(v15);
    v23 = HIDWORD(v15);
    if ( (flFontType & 0x20000000) != 0 )
    {
      v15 = (v21 + 1LL) * v20;
      LODWORD(v20) = HIDWORD(v15);
      v16 = v15;
      v23 *= 5;
      v23 += (5 * (unsigned __int64)v14) >> 32;
      v14 *= 5;
      LODWORD(v15) = v23;
    }
    else
    {
      v16 = v14;
    }
    LODWORD(v20) = (__PAIR64__((__PAIR64__(HIDWORD(v15), v16) + 3) >> 32, (v16 + 3) & 0xFFFFFFFC) + 16) >> 32;
    if ( !((__PAIR64__((__PAIR64__(v15, v14) + 3) >> 32, (v14 + 3) & 0xFFFFFFFC) + 16) >> 32) )
    {
      v4 = a2;
      v9[158] = ((v16 + 3) & 0xFFFFFFFC) + 16;
      (*this)[14].iFile = ((v14 + 3) & 0xFFFFFFFC) + 16;
      v9 = (unsigned int *)*this;
      goto LABEL_14;
    }
  }
  return 0;
}
