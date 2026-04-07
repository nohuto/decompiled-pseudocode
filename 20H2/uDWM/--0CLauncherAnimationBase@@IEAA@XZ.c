/*
 * XREFs of ??0CLauncherAnimationBase@@IEAA@XZ @ 0x180008974
 * Callers:
 *     ?Create@CStoryboardFactory@@SAJHPEAVCStoryboard@@PEAPEAV2@@Z @ 0x18003106C (-Create@CStoryboardFactory@@SAJHPEAVCStoryboard@@PEAPEAV2@@Z.c)
 * Callees:
 *     ??0CFlyoutPopup@@IEAA@XZ @ 0x1800089A8 (--0CFlyoutPopup@@IEAA@XZ.c)
 */

CLauncherAnimationBase *__fastcall CLauncherAnimationBase::CLauncherAnimationBase(CLauncherAnimationBase *this)
{
  __int64 v1; // rcx
  CLauncherAnimationBase *result; // rax

  CFlyoutPopup::CFlyoutPopup(this);
  *(_QWORD *)(v1 + 16) = &CSlide::`vftable'{for `IAnimationListener'};
  *(_QWORD *)v1 = &CFlyoutPopup::`vftable'{for `CBaseObject'};
  result = (CLauncherAnimationBase *)v1;
  *(_OWORD *)(v1 + 120) = 0LL;
  return result;
}
