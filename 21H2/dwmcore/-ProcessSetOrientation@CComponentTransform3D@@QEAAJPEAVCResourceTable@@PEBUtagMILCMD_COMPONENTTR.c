/*
 * XREFs of ?ProcessSetOrientation@CComponentTransform3D@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_COMPONENTTRANSFORM3D_SETORIENTATION@@@Z @ 0x1800E933C
 * Callers:
 *     ?ProcessMessage@CComposition@@AEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z @ 0x1800C0A08 (-ProcessMessage@CComposition@@AEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x1801051D0 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall CComponentTransform3D::ProcessSetOrientation(
        CComponentTransform3D *this,
        struct CResourceTable *a2,
        const struct tagMILCMD_COMPONENTTRANSFORM3D_SETORIENTATION *a3)
{
  __int128 v4; // [rsp+20h] [rbp-18h] BYREF

  v4 = *(_OWORD *)((char *)a3 + 8);
  return ((__int64 (__fastcall *)(char *, void *, __int128 *))xmmword_1803D01D8)(
           (char *)this + SDWORD2(xmmword_1803D01D8),
           &CComponentTransform3D::sc_Orientation,
           &v4);
}
