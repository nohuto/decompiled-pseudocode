/*
 * XREFs of ?ValidateDevice@AcrylicHostBackdrop@@QEAAJXZ @ 0x18000F820
 * Callers:
 *     ?UpdateAcrylicBackgroundBrush@CAccent@@IEAAJXZ @ 0x18000F6A0 (-UpdateAcrylicBackgroundBrush@CAccent@@IEAAJXZ.c)
 *     ?UpdateAccentPolicy@CAccent@@QEAAJPEBUtagRECT@@PEBUACCENT_POLICY@@PEAVCBaseGeometryProxy@@@Z @ 0x1800285D0 (-UpdateAccentPolicy@CAccent@@QEAAJPEBUtagRECT@@PEBUACCENT_POLICY@@PEAVCBaseGeometryProxy@@@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180006658 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?ValidateDevice@UdwmDcompVisual@@QEAAJPEA_N@Z @ 0x180011994 (-ValidateDevice@UdwmDcompVisual@@QEAAJPEA_N@Z.c)
 */

__int64 __fastcall AcrylicHostBackdrop::ValidateDevice(AcrylicHostBackdrop *this)
{
  UdwmDcompVisual *v1; // rcx
  int v2; // eax
  unsigned int v3; // ebx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  if ( *((_BYTE *)this + 24) )
    return 0LL;
  v1 = (UdwmDcompVisual *)*((_QWORD *)this + 2);
  if ( !v1 )
    return 0LL;
  v2 = UdwmDcompVisual::ValidateDevice(v1, 0LL);
  v3 = v2;
  if ( v2 >= 0 )
    return 0LL;
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x1D,
    (__int64)"clientcore\\windows\\dwm\\udwm\\acrylichostbackdrop.cpp",
    (const char *)(unsigned int)v2);
  return v3;
}
