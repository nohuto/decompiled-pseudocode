/*
 * XREFs of ?OnRectanglesChanged@CRegionGeometry@@QEAAXXZ @ 0x1800C6668
 * Callers:
 *     ?SetOrAppendRectangles@?$CRegionGeometryGeneratedT@VCRegionGeometry@@VCGeometry@@@@AEAAJAEBV?$span@$$CBUtagRECT@@$0?0@gsl@@_N@Z @ 0x1800C6618 (-SetOrAppendRectangles@-$CRegionGeometryGeneratedT@VCRegionGeometry@@VCGeometry@@@@AEAAJAEBV-$sp.c)
 * Callees:
 *     ?IsEmpty@?$TMilRect@HUtagRECT@@UMilPointAndSizeL@@U_CMilRectL_@RectUniqueness@@@@QEBA_NXZ @ 0x1800803D8 (-IsEmpty@-$TMilRect@HUtagRECT@@UMilPointAndSizeL@@U_CMilRectL_@RectUniqueness@@@@QEBA_NXZ.c)
 */

void __fastcall CRegionGeometry::OnRectanglesChanged(CRegionGeometry *this)
{
  CRegionGeometry *v1; // r9
  _DWORD *v2; // rcx
  _DWORD *v3; // rdx
  __int64 v4; // rcx

  v1 = this;
  *((_BYTE *)this + 160) = 1;
  v2 = (_DWORD *)*((_QWORD *)this + 17);
  v3 = (_DWORD *)*((_QWORD *)v1 + 18);
  while ( v2 != v3 )
  {
    if ( !TMilRect<int,tagRECT,MilPointAndSizeL,RectUniqueness::_CMilRectL_>::IsEmpty(v2) )
    {
      *((_BYTE *)v1 + 160) = 0;
      break;
    }
    v2 = (_DWORD *)(v4 + 16);
  }
  (*(void (__fastcall **)(CRegionGeometry *, _QWORD, _QWORD))(*(_QWORD *)v1 + 72LL))(v1, 0LL, 0LL);
}
