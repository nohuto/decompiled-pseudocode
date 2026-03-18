/*
 * XREFs of ?ProcessSetStrokeDashOffset@CSpriteVectorShape@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_SPRITEVECTORSHAPE_SETSTROKEDASHOFFSET@@@Z @ 0x1801ECFCC
 * Callers:
 *     ?ProcessMessage@CComposition@@AEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z @ 0x1800ADEEC (-ProcessMessage@CComposition@@AEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CSpriteVectorShape::ProcessSetStrokeDashOffset(
        CSpriteVectorShape *this,
        struct CResourceTable *a2,
        const struct tagMILCMD_SPRITEVECTORSHAPE_SETSTROKEDASHOFFSET *a3)
{
  return ((__int64 (__fastcall *)(char *, void *, char *))xmmword_180343328)(
           (char *)this + SDWORD2(xmmword_180343328),
           &CSpriteVectorShape::sc_StrokeDashOffset,
           (char *)a3 + 8);
}
