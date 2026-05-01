/*
 * XREFs of ?PointerLeave@HotTrackingElement@@UEAAXXZ @ 0x1803964F0
 * Callers:
 *     <none>
 * Callees:
 *     ??0DetectHotTrackChange@HotTrackingElement@@QEAA@PEAV1@@Z @ 0x180395990 (--0DetectHotTrackChange@HotTrackingElement@@QEAA@PEAV1@@Z.c)
 *     ??1DetectHotTrackChange@HotTrackingElement@@QEAA@XZ @ 0x180395B58 (--1DetectHotTrackChange@HotTrackingElement@@QEAA@XZ.c)
 *     ?PointerLeave@CMultitaskingViewElementBase@@UEAAXXZ @ 0x1803A3A80 (-PointerLeave@CMultitaskingViewElementBase@@UEAAXXZ.c)
 */

void __fastcall HotTrackingElement::PointerLeave(HotTrackingElement *this)
{
  _BYTE v2[24]; // [rsp+20h] [rbp-18h] BYREF

  HotTrackingElement::DetectHotTrackChange::DetectHotTrackChange((HotTrackingElement::DetectHotTrackChange *)v2, this);
  CMultitaskingViewElementBase::PointerLeave(this);
  HotTrackingElement::DetectHotTrackChange::~DetectHotTrackChange((HotTrackingElement::DetectHotTrackChange *)v2);
}
