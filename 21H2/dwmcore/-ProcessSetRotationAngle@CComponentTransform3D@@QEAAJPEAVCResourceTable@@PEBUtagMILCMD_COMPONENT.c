/*
 * XREFs of ?ProcessSetRotationAngle@CComponentTransform3D@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_COMPONENTTRANSFORM3D_SETROTATIONANGLE@@@Z @ 0x1800EA7C8
 * Callers:
 *     ?ProcessMessage@CComposition@@AEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z @ 0x1800C0A08 (-ProcessMessage@CComposition@@AEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CComponentTransform3D::ProcessSetRotationAngle(
        CComponentTransform3D *this,
        struct CResourceTable *a2,
        const struct tagMILCMD_COMPONENTTRANSFORM3D_SETROTATIONANGLE *a3)
{
  return ((__int64 (__fastcall *)(char *, void *, char *))xmmword_1803D01A0)(
           (char *)this + SDWORD2(xmmword_1803D01A0),
           &CComponentTransform3D::sc_RotationAngle,
           (char *)a3 + 8);
}
