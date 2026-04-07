/*
 * XREFs of ??0CStoryboard@@IEAA@_N@Z @ 0x1800417CC
 * Callers:
 *     ??0CFlyoutPopup@@IEAA@XZ @ 0x180008A08 (--0CFlyoutPopup@@IEAA@XZ.c)
 *     ??0CSlide@@IEAA@XZ @ 0x180009514 (--0CSlide@@IEAA@XZ.c)
 *     ?Create@CStoryboardFactory@@SAJHPEAVCStoryboard@@PEAPEAV2@@Z @ 0x1800338CC (-Create@CStoryboardFactory@@SAJHPEAVCStoryboard@@PEAPEAV2@@Z.c)
 *     ??0CFade@@IEAA@XZ @ 0x180053160 (--0CFade@@IEAA@XZ.c)
 *     ??0CCrossFade@@QEAA@XZ @ 0x1800AE400 (--0CCrossFade@@QEAA@XZ.c)
 *     ??0CGroupingStoryboard@@QEAA@_N@Z @ 0x1800AE460 (--0CGroupingStoryboard@@QEAA@_N@Z.c)
 *     ??0CVirtualDesktopSwitch@@QEAA@XZ @ 0x1800AE518 (--0CVirtualDesktopSwitch@@QEAA@XZ.c)
 * Callees:
 *     <none>
 */

CStoryboard *__fastcall CStoryboard::CStoryboard(CStoryboard *this, char a2)
{
  CStoryboard *result; // rax

  *((_DWORD *)this + 7) = -1;
  *(_QWORD *)this = &CFade::`vftable'{for `CBaseObject'};
  *((_DWORD *)this + 2) = 1;
  *((_QWORD *)this + 2) = &CSlide::`vftable'{for `IAnimationListener'};
  *((_DWORD *)this + 6) = 0;
  *((_DWORD *)this + 16) = -1;
  *((_DWORD *)this + 18) = -1;
  result = this;
  *((GUID *)this + 3) = GUID_NULL;
  *((_BYTE *)this + 68) = a2;
  *((_BYTE *)this + 76) = 0;
  *((_QWORD *)this + 10) = 0LL;
  *((_QWORD *)this + 11) = 0LL;
  *((_QWORD *)this + 12) = 0LL;
  *((_QWORD *)this + 13) = 0LL;
  *((_DWORD *)this + 28) = 0;
  *((_OWORD *)this + 2) = 0LL;
  return result;
}
