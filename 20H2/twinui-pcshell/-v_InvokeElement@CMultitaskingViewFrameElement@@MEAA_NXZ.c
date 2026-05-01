/*
 * XREFs of ?v_InvokeElement@CMultitaskingViewFrameElement@@MEAA_NXZ @ 0x1803ABE20
 * Callers:
 *     <none>
 * Callees:
 *     AsyncFrameEvents::_NotifyFrameEvent__lambda_1cc7c4a545a2c54b98f9c323f6c45fc2___ @ 0x1803AC5B0 (AsyncFrameEvents--_NotifyFrameEvent__lambda_1cc7c4a545a2c54b98f9c323f6c45fc2___.c)
 */

char __fastcall CMultitaskingViewFrameElement::v_InvokeElement(CMultitaskingViewFrameElement *this)
{
  AsyncFrameEvents::_NotifyFrameEvent__lambda_1cc7c4a545a2c54b98f9c323f6c45fc2___(*((_QWORD *)this + 36));
  return 1;
}
