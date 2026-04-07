/*
 * XREFs of ??0CFlyoutPopup@@IEAA@XZ @ 0x180008A08
 * Callers:
 *     ??0CLauncherAnimationBase@@IEAA@XZ @ 0x1800089D4 (--0CLauncherAnimationBase@@IEAA@XZ.c)
 *     ?Create@CStoryboardFactory@@SAJHPEAVCStoryboard@@PEAPEAV2@@Z @ 0x1800338CC (-Create@CStoryboardFactory@@SAJHPEAVCStoryboard@@PEAPEAV2@@Z.c)
 * Callees:
 *     ??0CStoryboard@@IEAA@_N@Z @ 0x1800417CC (--0CStoryboard@@IEAA@_N@Z.c)
 */

CFlyoutPopup *__fastcall CFlyoutPopup::CFlyoutPopup(CFlyoutPopup *this)
{
  CFlyoutPopup *v1; // rcx
  CFlyoutPopup *result; // rax

  CStoryboard::CStoryboard(this, 0);
  *((_QWORD *)v1 + 2) = &CSlide::`vftable'{for `IAnimationListener'};
  result = v1;
  *(_QWORD *)v1 = &CFlyoutPopup::`vftable'{for `CBaseObject'};
  return result;
}
