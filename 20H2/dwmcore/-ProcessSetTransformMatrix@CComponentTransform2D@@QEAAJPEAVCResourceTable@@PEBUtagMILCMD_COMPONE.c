/*
 * XREFs of ?ProcessSetTransformMatrix@CComponentTransform2D@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_COMPONENTTRANSFORM2D_SETTRANSFORMMATRIX@@@Z @ 0x1800C93AC
 * Callers:
 *     ?ProcessMessage@CComposition@@AEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z @ 0x1800ADEEC (-ProcessMessage@CComposition@@AEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CComponentTransform2D::ProcessSetTransformMatrix(
        CComponentTransform2D *this,
        struct CResourceTable *a2,
        const struct tagMILCMD_COMPONENTTRANSFORM2D_SETTRANSFORMMATRIX *a3)
{
  return ((__int64 (__fastcall *)(char *, void *, char *))xmmword_1803411D8)(
           (char *)this + SDWORD2(xmmword_1803411D8),
           &CComponentTransform2D::sc_TransformMatrix,
           (char *)a3 + 8);
}
