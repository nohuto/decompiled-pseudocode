/*
 * XREFs of ?ReleaseBspPolygonList@CVisual@@IEAAXXZ @ 0x18007CD4C
 * Callers:
 *     ?PreSubgraph@CPreComputeContext@@QEAAJPEBVCVisualTree@@PEA_N@Z @ 0x180063420 (-PreSubgraph@CPreComputeContext@@QEAAJPEBVCVisualTree@@PEA_N@Z.c)
 *     ??1CVisual@@MEAA@XZ @ 0x18007DE6C (--1CVisual@@MEAA@XZ.c)
 * Callees:
 *     ??3@YAXPEAX_K@Z @ 0x180038160 (--3@YAXPEAX_K@Z.c)
 *     ?GetBspPolygonList@CVisual@@QEBAPEAV?$DynArray@PEAVCPolygon@@$0A@@@XZ @ 0x18007CD8C (-GetBspPolygonList@CVisual@@QEBAPEAV-$DynArray@PEAVCPolygon@@$0A@@@XZ.c)
 *     ??1?$DynArrayImpl@$0A@@@IEAA@XZ @ 0x180096BB0 (--1-$DynArrayImpl@$0A@@@IEAA@XZ.c)
 *     ?ShrinkToSize@?$DynArrayImpl@$0A@@@IEAAXI@Z @ 0x1800B5618 (-ShrinkToSize@-$DynArrayImpl@$0A@@@IEAAXI@Z.c)
 *     ??$ReleaseInterface@VCPolygon@@@@YAXAEAPEAVCPolygon@@@Z @ 0x18019D534 (--$ReleaseInterface@VCPolygon@@@@YAXAEAPEAVCPolygon@@@Z.c)
 *     ?SetBspPolygonList@CVisual@@QEAAXPEAV?$DynArray@PEAVCPolygon@@$0A@@@@Z @ 0x1801B2930 (-SetBspPolygonList@CVisual@@QEAAXPEAV-$DynArray@PEAVCPolygon@@$0A@@@@Z.c)
 */

void __fastcall CVisual::ReleaseBspPolygonList(CVisual *this)
{
  __int64 BspPolygonList; // rax
  _DWORD *v3; // rbx
  unsigned int i; // edi

  BspPolygonList = CVisual::GetBspPolygonList(this);
  v3 = (_DWORD *)BspPolygonList;
  if ( BspPolygonList )
  {
    for ( i = *(_DWORD *)(BspPolygonList + 24); i; ReleaseInterface<CPolygon>(*(_QWORD *)v3 + 8LL * i) )
      --i;
    v3[6] = 0;
    DynArrayImpl<0>::ShrinkToSize(v3, 8LL);
    DynArrayImpl<0>::~DynArrayImpl<0>(v3);
    operator delete(v3);
    CVisual::SetBspPolygonList(this, 0LL);
  }
}
