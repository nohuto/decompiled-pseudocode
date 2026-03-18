/*
 * XREFs of ?ProcessSetStrokeThickness@CSpriteVectorShape@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_SPRITEVECTORSHAPE_SETSTROKETHICKNESS@@@Z @ 0x1801F1874
 * Callers:
 *     ?ProcessMessage@CComposition@@AEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z @ 0x180080BFC (-ProcessMessage@CComposition@@AEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CSpriteVectorShape::ProcessSetStrokeThickness(
        CSpriteVectorShape *this,
        struct CResourceTable *a2,
        const struct tagMILCMD_SPRITEVECTORSHAPE_SETSTROKETHICKNESS *a3)
{
  return ((__int64 (__fastcall *)(char *, void *, char *))xmmword_180348398)(
           (char *)this + SDWORD2(xmmword_180348398),
           &CSpriteVectorShape::sc_StrokeThickness,
           (char *)a3 + 8);
}
