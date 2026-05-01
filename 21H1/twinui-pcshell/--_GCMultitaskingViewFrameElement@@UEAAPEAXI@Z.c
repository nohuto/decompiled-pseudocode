/*
 * XREFs of ??_GCMultitaskingViewFrameElement@@UEAAPEAXI@Z @ 0x1803893A0
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x18008D394 (--3@YAXPEAX@Z.c)
 *     ??1CMultitaskingViewFrameElement@@UEAA@XZ @ 0x180388F6C (--1CMultitaskingViewFrameElement@@UEAA@XZ.c)
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
