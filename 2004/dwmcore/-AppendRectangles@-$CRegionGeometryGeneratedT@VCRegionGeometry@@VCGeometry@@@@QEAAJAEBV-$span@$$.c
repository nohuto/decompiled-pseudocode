/*
 * XREFs of ?AppendRectangles@?$CRegionGeometryGeneratedT@VCRegionGeometry@@VCGeometry@@@@QEAAJAEBV?$span@$$CBUtagRECT@@$0?0@gsl@@@Z @ 0x18016FB8C
 * Callers:
 *     ?ProcessMessage@CComposition@@AEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z @ 0x1800A643C (-ProcessMessage@CComposition@@AEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CRegionGeometryGeneratedT<CRegionGeometry,CGeometry>::AppendRectangles(
        CRegionGeometry *a1,
        _QWORD *a2)
{
  return CRegionGeometryGeneratedT<CRegionGeometry,CGeometry>::SetOrAppendRectangles(a1, a2, 1);
}
