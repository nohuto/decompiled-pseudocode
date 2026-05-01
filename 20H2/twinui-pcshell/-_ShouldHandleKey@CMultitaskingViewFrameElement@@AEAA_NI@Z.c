/*
 * XREFs of ?_ShouldHandleKey@CMultitaskingViewFrameElement@@AEAA_NI@Z @ 0x1803ABCC0
 * Callers:
 *     ?KeyDown@CMultitaskingViewFrameElement@@UEAA_NIW4ModifierKeys@@@Z @ 0x1803AA650 (-KeyDown@CMultitaskingViewFrameElement@@UEAA_NIW4ModifierKeys@@@Z.c)
 *     ?KeyUp@CMultitaskingViewFrameElement@@UEAA_NIW4ModifierKeys@@@Z @ 0x1803AA7D0 (-KeyUp@CMultitaskingViewFrameElement@@UEAA_NIW4ModifierKeys@@@Z.c)
 * Callees:
 *     <none>
 */

bool __fastcall CMultitaskingViewFrameElement::_ShouldHandleKey(CMultitaskingViewFrameElement *this, int a2)
{
  if ( a2 == 9 )
    return *((_QWORD *)this + 34) != 0LL;
  else
    return a2 == 27;
}
