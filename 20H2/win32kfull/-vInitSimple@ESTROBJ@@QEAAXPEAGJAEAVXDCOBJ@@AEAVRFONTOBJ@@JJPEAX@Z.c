/*
 * XREFs of ?vInitSimple@ESTROBJ@@QEAAXPEAGJAEAVXDCOBJ@@AEAVRFONTOBJ@@JJPEAX@Z @ 0x1C02BDAEC
 * Callers:
 *     ?GreGetStringBitmapW@@YAIPEAUHDC__@@PEAGIPEAUSTRINGBITMAP@@I@Z @ 0x1C0297584 (-GreGetStringBitmapW@@YAIPEAUHDC__@@PEAGIPEAUSTRINGBITMAP@@I@Z.c)
 * Callees:
 *     ?bGetGlyphMetricsPlus@RFONTOBJ@@QEAAHKPEAU_GLYPHPOS@@PEAGPEAHPEAVXDCOBJ@@PEAVESTROBJ@@@Z @ 0x1C0110FF0 (-bGetGlyphMetricsPlus@RFONTOBJ@@QEAAHKPEAU_GLYPHPOS@@PEAGPEAHPEAVXDCOBJ@@PEAVESTROBJ@@@Z.c)
 *     ?GetLinkedRfontOnIndex@ESTROBJ@@QEAAPEAVRFONT@@JAEAVRFONTOBJ@@@Z @ 0x1C02BC2F8 (-GetLinkedRfontOnIndex@ESTROBJ@@QEAAPEAVRFONT@@JAEAVRFONTOBJ@@@Z.c)
 */

void __fastcall ESTROBJ::vInitSimple(
        ESTROBJ *this,
        unsigned __int16 *a2,
        int a3,
        struct XDCOBJ *a4,
        struct RFONTOBJ *a5)
{
  struct RFONTOBJ *v7; // rdi
  struct _GLYPHPOS *v9; // rax
  struct _GLYPHPOS *v10; // rsi
  __int64 v11; // rax
  bool v12; // zf
  unsigned int v13; // ecx
  int v14; // r11d
  __int64 v15; // r10
  int v16; // eax
  int v17; // [rsp+70h] [rbp+18h] BYREF

  v17 = a3;
  *((_DWORD *)this + 12) = 0;
  *((_QWORD *)this + 4) = 0LL;
  v7 = a5;
  *((_QWORD *)this + 7) = a5;
  *(_DWORD *)this = 1;
  *((_QWORD *)this + 5) = a2;
  v9 = (struct _GLYPHPOS *)AllocFreeTmpBuffer(32LL);
  v10 = v9;
  if ( v9 )
  {
    *((_DWORD *)this + 58) |= 1u;
    v17 = 0;
    *((_QWORD *)this + 8) = v9;
    *((_DWORD *)this + 1) = *(_DWORD *)(*(_QWORD *)v7 + 276LL) & 0x71 | 2;
    if ( (unsigned int)RFONTOBJ::bGetGlyphMetricsPlus(v7, (struct RFONTOBJ *)1, v9, a2, &v17, a4, this) )
    {
      if ( v17 )
      {
        v11 = *((_QWORD *)this + 8);
        *((_DWORD *)this + 58) |= 2u;
        *((_QWORD *)this + 4) = v11;
      }
      v10->ptl.x = 0;
      v10->ptl.y = *(_DWORD *)(*(_QWORD *)v7 + 352LL);
      v12 = (*((_DWORD *)this + 58) & 0x1400) == 0;
      v13 = *(_DWORD *)(*(_QWORD *)v7 + 312LL);
      *((_DWORD *)this + 2) = v13;
      if ( v12 && v13 )
      {
        *((_DWORD *)this + 3) = 0;
        if ( v13 > 0x7FFFFFFF )
          return;
        *((_DWORD *)this + 5) = v13;
      }
      else
      {
        *((_DWORD *)this + 2) = 0;
        v10->ptl.y = *((_DWORD *)ESTROBJ::GetLinkedRfontOnIndex(this, 0, v7) + 88);
        v16 = *(_DWORD *)(v15 + 20) + 15;
        *((_DWORD *)this + 3) = v14 >> 4;
        *((_DWORD *)this + 5) = v16 >> 4;
      }
      *((_DWORD *)this + 4) = 0;
      *((_DWORD *)this + 6) = *(_DWORD *)(*(_QWORD *)v7 + 356LL);
      if ( (*(_DWORD *)(*(_QWORD *)v7 + 12LL) & 0x10000000) != 0 )
      {
        --*((_DWORD *)this + 3);
        ++*((_DWORD *)this + 5);
      }
      *((_DWORD *)this + 58) |= 4u;
    }
  }
}
