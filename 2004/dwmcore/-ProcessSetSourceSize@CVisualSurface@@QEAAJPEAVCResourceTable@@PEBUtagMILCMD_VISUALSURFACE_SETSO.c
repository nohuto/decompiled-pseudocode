/*
 * XREFs of ?ProcessSetSourceSize@CVisualSurface@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_VISUALSURFACE_SETSOURCESIZE@@@Z @ 0x1801F3BDC
 * Callers:
 *     ?ProcessMessage@CComposition@@AEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z @ 0x1800A643C (-ProcessMessage@CComposition@@AEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800EED40 (_guard_dispatch_icall_nop.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18014FC08 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

__int64 __fastcall CVisualSurface::ProcessSetSourceSize(
        CVisualSurface *this,
        struct CResourceTable *a2,
        const struct tagMILCMD_VISUALSURFACE_SETSOURCESIZE *a3)
{
  int v3; // eax
  unsigned int v4; // ebx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v3 = ((__int64 (__fastcall *)(char *, void *, char *))xmmword_180344590)(
         (char *)this + SDWORD2(xmmword_180344590),
         &CVisualSurface::sc_sourceSize,
         (char *)a3 + 8);
  v4 = v3;
  if ( v3 >= 0 )
    return 0LL;
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x9A,
    (__int64)"onecoreuap\\windows\\dwm\\dwmcore\\resources\\visualsurface.cpp",
    (const char *)(unsigned int)v3);
  return v4;
}
