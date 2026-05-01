/*
 * XREFs of ?EnsureWindow@JointDivider@@AEAAJXZ @ 0x18041702C
 * Callers:
 *     ?AppLayoutChanged@JointDivider@@UEAAJPEAUIAppLayout@@@Z @ 0x180416D10 (-AppLayoutChanged@JointDivider@@UEAAJPEAUIAppLayout@@@Z.c)
 * Callees:
 *     memset_0 @ 0x18008DF08 (memset_0.c)
 *     ?Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z @ 0x18013B538 (-Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z.c)
 *     ?JointDivider_LoadGlyphFont@@YAPEAUHFONT__@@W4DEVICE_SCALE_FACTOR@@@Z @ 0x1804212C8 (-JointDivider_LoadGlyphFont@@YAPEAUHFONT__@@W4DEVICE_SCALE_FACTOR@@@Z.c)
 */

__int64 __fastcall JointDivider::EnsureWindow(HWND *this)
{
  HCURSOR CursorW; // rax
  const char *v3; // r9
  HWND v4; // rcx
  HFONT GlyphFont; // rax
  HWND v7; // rcx
  HFONT v8; // rdi
  WNDCLASSEXW v9; // [rsp+60h] [rbp-58h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+B8h] [rbp+0h]

  if ( !this[6] )
  {
    v9.cbSize = 80;
    memset_0(&v9.style, 0, 0x4CuLL);
    v9.lpfnWndProc = (WNDPROC)CWRLImpWndProc<JointDivider>::s_WndProcBase;
    v9.hInstance = &_ImageBase;
    v9.lpszClassName = L"JointDivider";
    CursorW = LoadCursorW(0LL, (LPCWSTR)0x7F84);
    v9.cbWndExtra = 8;
    v9.hCursor = CursorW;
    RegisterClassExW(&v9);
    CreateWindowExW(0x8000000u, L"JointDivider", 0LL, 0x80000000, 0, 0, 0, 0, this[11], 0LL, &_ImageBase, this);
    v4 = this[6];
    if ( !v4 )
      return wil::details::in1diag3::Return_GetLastError(
               retaddr,
               (void *)0xD2,
               (__int64)"pcshell\\twinui\\tabletmode\\lib\\jointdivider.cpp",
               v3);
    DwmpTransitionWindow(v4, 1073741846LL);
    this[9] = 0LL;
    GlyphFont = JointDivider_LoadGlyphFont((enum DEVICE_SCALE_FACTOR)*((_DWORD *)this + 20));
    v7 = this[9];
    v8 = GlyphFont;
    this[9] = 0LL;
    if ( v7 )
      DeleteObject(v7);
    this[9] = (HWND)v8;
  }
  return 0LL;
}
