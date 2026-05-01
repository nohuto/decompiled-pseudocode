/*
 * XREFs of ?HitTestForLightDismiss@CMultitaskingViewFrameElement@@UEAA_NAEBUCPoint@Geometry@@@Z @ 0x1803AAEA0
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x18008CFC0 (__security_check_cookie.c)
 *     ?Contains@CRect@Geometry@@QEBA_NAEBUtagPOINT@@@Z @ 0x1803A0E68 (-Contains@CRect@Geometry@@QEBA_NAEBUtagPOINT@@@Z.c)
 *     ?_GetContentLocation@CMultitaskingViewFrameElement@@AEAA?AUCRect@Geometry@@AEBUtagRECT@@@Z @ 0x1803AC064 (-_GetContentLocation@CMultitaskingViewFrameElement@@AEAA-AUCRect@Geometry@@AEBUtagRECT@@@Z.c)
 */

bool __fastcall CMultitaskingViewFrameElement::HitTestForLightDismiss(
        CMultitaskingViewFrameElement *this,
        const struct tagPOINT *a2)
{
  _BYTE v4[16]; // [rsp+20h] [rbp-28h] BYREF

  if ( !*((_BYTE *)this + 152) )
    return 1;
  CMultitaskingViewFrameElement::_GetContentLocation((char *)this - 240, v4, (char *)this - 184);
  return !Geometry::CRect::Contains((Geometry::CRect *)v4, a2);
}
