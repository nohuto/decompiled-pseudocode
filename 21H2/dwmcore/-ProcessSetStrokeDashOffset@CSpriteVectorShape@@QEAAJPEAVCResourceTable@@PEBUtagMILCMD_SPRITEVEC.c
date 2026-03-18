/*
 * XREFs of ?ProcessSetStrokeDashOffset@CSpriteVectorShape@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_SPRITEVECTORSHAPE_SETSTROKEDASHOFFSET@@@Z @ 0x18023F9EC
 * Callers:
 *     ?ProcessMessage@CComposition@@AEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z @ 0x1800C0A08 (-ProcessMessage@CComposition@@AEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CSpriteVectorShape::ProcessSetStrokeDashOffset(
        CSpriteVectorShape *this,
        struct CResourceTable *a2,
        const struct tagMILCMD_SPRITEVECTORSHAPE_SETSTROKEDASHOFFSET *a3)
{
  return ((__int64 (__fastcall *)(char *, void *, char *))xmmword_1803D2218)(
           (char *)this + SDWORD2(xmmword_1803D2218),
           &CSpriteVectorShape::sc_StrokeDashOffset,
           (char *)a3 + 8);
}
