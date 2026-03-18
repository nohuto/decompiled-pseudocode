/*
 * XREFs of ?ProcessSetAnchorPoint@CComponentTransform2D@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_COMPONENTTRANSFORM2D_SETANCHORPOINT@@@Z @ 0x1800CCCDC
 * Callers:
 *     ?ProcessMessage@CComposition@@AEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z @ 0x1800A643C (-ProcessMessage@CComposition@@AEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800EED40 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CComponentTransform2D::ProcessSetAnchorPoint(
        CComponentTransform2D *this,
        struct CResourceTable *a2,
        const struct tagMILCMD_COMPONENTTRANSFORM2D_SETANCHORPOINT *a3)
{
  int v3; // xmm1_4
  struct CResourceTable *v5; // [rsp+38h] [rbp+10h] BYREF

  v5 = a2;
  v3 = *((_DWORD *)a3 + 3);
  LODWORD(v5) = *((_DWORD *)a3 + 2);
  HIDWORD(v5) = v3;
  return ((__int64 (__fastcall *)(char *, void *, struct CResourceTable **))xmmword_1803422F0)(
           (char *)this + SDWORD2(xmmword_1803422F0),
           &CComponentTransform2D::sc_Anchor,
           &v5);
}
