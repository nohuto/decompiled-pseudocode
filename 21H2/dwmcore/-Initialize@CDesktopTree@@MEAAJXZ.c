/*
 * XREFs of ?Initialize@CDesktopTree@@MEAAJXZ @ 0x1800C6AC0
 * Callers:
 *     ?Create@CDesktopTree@@KAJPEAVCComposition@@PEAVCVisual@@U_LUID@@PEAPEAV1@@Z @ 0x1801F5F68 (-Create@CDesktopTree@@KAJPEAVCComposition@@PEAVCVisual@@U_LUID@@PEAPEAV1@@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180024060 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??4?$com_ptr_t@VCVisual@@Uerr_returncode_policy@wil@@@wil@@QEAAAEAV01@PEAVCVisual@@@Z @ 0x180027160 (--4-$com_ptr_t@VCVisual@@Uerr_returncode_policy@wil@@@wil@@QEAAAEAV01@PEAVCVisual@@@Z.c)
 *     ??2KeyframeInterpolation@@SAPEAX_K@Z @ 0x18004D79C (--2KeyframeInterpolation@@SAPEAX_K@Z.c)
 *     ??0CVisual@@IEAA@PEAVCComposition@@@Z @ 0x180088200 (--0CVisual@@IEAA@PEAVCComposition@@@Z.c)
 *     ?Initialize@CVisualTree@@MEAAJXZ @ 0x1800C7230 (-Initialize@CVisualTree@@MEAAJXZ.c)
 */

__int64 __fastcall CDesktopTree::Initialize(CDesktopTree *this)
{
  CVisual *v2; // rax
  int v3; // eax
  unsigned int v4; // ebx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v2 = (CVisual *)KeyframeInterpolation::operator new(0x2D8uLL);
  if ( v2 )
    v2 = CVisual::CVisual(v2, *((struct CComposition **)this + 2));
  wil::com_ptr_t<CVisual,wil::err_returncode_policy>::operator=((__int64 *)this + 590, (__int64)v2);
  *((_QWORD *)this + 8) = *((_QWORD *)this + 590);
  v3 = CVisualTree::Initialize(this);
  v4 = v3;
  if ( v3 >= 0 )
    return 0LL;
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x2E,
    (int)"onecoreuap\\windows\\dwm\\dwmcore\\resources\\desktoptree.cpp",
    (const char *)(unsigned int)v3);
  return v4;
}
