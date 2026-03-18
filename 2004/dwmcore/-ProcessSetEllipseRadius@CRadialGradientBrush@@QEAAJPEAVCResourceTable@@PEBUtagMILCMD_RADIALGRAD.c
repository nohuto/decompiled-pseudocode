/*
 * XREFs of ?ProcessSetEllipseRadius@CRadialGradientBrush@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_RADIALGRADIENTBRUSH_SETELLIPSERADIUS@@@Z @ 0x1801E9508
 * Callers:
 *     ?ProcessMessage@CComposition@@AEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z @ 0x1800A643C (-ProcessMessage@CComposition@@AEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800EED40 (_guard_dispatch_icall_nop.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18014FC08 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

__int64 __fastcall CRadialGradientBrush::ProcessSetEllipseRadius(
        CRadialGradientBrush *this,
        struct CResourceTable *a2,
        const struct tagMILCMD_RADIALGRADIENTBRUSH_SETELLIPSERADIUS *a3)
{
  int v3; // eax
  unsigned int v4; // ebx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v3 = ((__int64 (__fastcall *)(char *, void *, char *))xmmword_1803442B8)(
         (char *)this + SDWORD2(xmmword_1803442B8),
         &CRadialGradientBrush::sc_ellipseRadius,
         (char *)a3 + 8);
  v4 = v3;
  if ( v3 >= 0 )
    return 0LL;
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x10F,
    (__int64)"onecoreuap\\windows\\dwm\\dwmcore\\resources\\radialgradientbrush.cpp",
    (const char *)(unsigned int)v3);
  return v4;
}
