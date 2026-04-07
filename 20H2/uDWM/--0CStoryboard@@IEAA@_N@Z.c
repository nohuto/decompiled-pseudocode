/*
 * XREFs of ??0CStoryboard@@IEAA@_N@Z @ 0x18004204C
 * Callers:
 *     ??0CFlyoutPopup@@IEAA@XZ @ 0x1800089A8 (--0CFlyoutPopup@@IEAA@XZ.c)
 *     ??0CSlide@@IEAA@XZ @ 0x1800094B4 (--0CSlide@@IEAA@XZ.c)
 *     ?Create@CStoryboardFactory@@SAJHPEAVCStoryboard@@PEAPEAV2@@Z @ 0x18003106C (-Create@CStoryboardFactory@@SAJHPEAVCStoryboard@@PEAPEAV2@@Z.c)
 *     ??0CFade@@IEAA@XZ @ 0x1800530A8 (--0CFade@@IEAA@XZ.c)
 *     ??0CCrossFade@@QEAA@XZ @ 0x1800ADD20 (--0CCrossFade@@QEAA@XZ.c)
 *     ??0CGroupingStoryboard@@QEAA@_N@Z @ 0x1800ADD80 (--0CGroupingStoryboard@@QEAA@_N@Z.c)
 *     ??0CVirtualDesktopSwitch@@QEAA@XZ @ 0x1800ADE38 (--0CVirtualDesktopSwitch@@QEAA@XZ.c)
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
