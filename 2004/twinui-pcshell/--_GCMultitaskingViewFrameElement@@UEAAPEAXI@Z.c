/*
 * XREFs of ??_GCMultitaskingViewFrameElement@@UEAAPEAXI@Z @ 0x1803AA5F0
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x18008DC44 (--3@YAXPEAX@Z.c)
 *     ??1CMultitaskingViewFrameElement@@UEAA@XZ @ 0x1803AA1BC (--1CMultitaskingViewFrameElement@@UEAA@XZ.c)
 */

CMultitaskingViewFrameElement *__fastcall CMultitaskingViewFrameElement::`scalar deleting destructor'(
        CMultitaskingViewFrameElement *this,
        char a2)
{
  CMultitaskingViewFrameElement::~CMultitaskingViewFrameElement(this);
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}
