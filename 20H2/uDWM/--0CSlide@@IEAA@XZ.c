/*
 * XREFs of ??0CSlide@@IEAA@XZ @ 0x1800094B4
 * Callers:
 *     ??0CSlideIn@@QEAA@XZ @ 0x18000944C (--0CSlideIn@@QEAA@XZ.c)
 *     ??0CSlideOut@@QEAA@XZ @ 0x18000947C (--0CSlideOut@@QEAA@XZ.c)
 *     ?Create@CStoryboardFactory@@SAJHPEAVCStoryboard@@PEAPEAV2@@Z @ 0x18003106C (-Create@CStoryboardFactory@@SAJHPEAVCStoryboard@@PEAPEAV2@@Z.c)
 *     ??0CPanelAnimation@@QEAA@XZ @ 0x1800ADE08 (--0CPanelAnimation@@QEAA@XZ.c)
 * Callees:
 *     ??0CStoryboard@@IEAA@_N@Z @ 0x18004204C (--0CStoryboard@@IEAA@_N@Z.c)
 */

CSlide *__fastcall CSlide::CSlide(CSlide *this)
{
  __int64 v1; // rcx
  CSlide *result; // rax

  CStoryboard::CStoryboard(this, 0);
  *(_DWORD *)(v1 + 120) = 0;
  *(_QWORD *)(v1 + 16) = &CSlide::`vftable'{for `IAnimationListener'};
  result = (CSlide *)v1;
  *(_QWORD *)v1 = &CSlide::`vftable'{for `CBaseObject'};
  return result;
}
