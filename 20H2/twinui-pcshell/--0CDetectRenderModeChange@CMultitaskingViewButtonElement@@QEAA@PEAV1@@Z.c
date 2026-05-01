/*
 * XREFs of ??0CDetectRenderModeChange@CMultitaskingViewButtonElement@@QEAA@PEAV1@@Z @ 0x1803AECCC
 * Callers:
 *     ?PointerDown@CMultitaskingViewButtonElement@@UEAA_NW4PointerButton@@AEBVMultitaskingViewPointerInputArgs@@@Z @ 0x1803AED70 (-PointerDown@CMultitaskingViewButtonElement@@UEAA_NW4PointerButton@@AEBVMultitaskingViewPointerI.c)
 *     ?PointerLeave@CMultitaskingViewButtonElement@@UEAAXXZ @ 0x1803AEDD0 (-PointerLeave@CMultitaskingViewButtonElement@@UEAAXXZ.c)
 *     ?PointerMove@CMultitaskingViewButtonElement@@UEAAXAEBVMultitaskingViewPointerInputArgs@@@Z @ 0x1803AEE10 (-PointerMove@CMultitaskingViewButtonElement@@UEAAXAEBVMultitaskingViewPointerInputArgs@@@Z.c)
 *     ?PointerUp@CMultitaskingViewButtonElement@@UEAA_NW4PointerButton@@AEBVMultitaskingViewPointerInputArgs@@@Z @ 0x1803AEE60 (-PointerUp@CMultitaskingViewButtonElement@@UEAA_NW4PointerButton@@AEBVMultitaskingViewPointerInp.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800F0410 (_guard_dispatch_icall_nop.c)
 *     ?_CalcButtonRenderMode@CMultitaskingViewButtonElement@@IEAA?AW4ButtonRenderMode@1@XZ @ 0x1803AEEB8 (-_CalcButtonRenderMode@CMultitaskingViewButtonElement@@IEAA-AW4ButtonRenderMode@1@XZ.c)
 */

CMultitaskingViewButtonElement::CDetectRenderModeChange *__fastcall CMultitaskingViewButtonElement::CDetectRenderModeChange::CDetectRenderModeChange(
        CMultitaskingViewButtonElement::CDetectRenderModeChange *this,
        struct CMultitaskingViewButtonElement *a2)
{
  *(_QWORD *)this = a2;
  if ( a2 )
  {
    (*(void (__fastcall **)(struct CMultitaskingViewButtonElement *))(*(_QWORD *)a2 + 8LL))(a2);
    a2 = *(struct CMultitaskingViewButtonElement **)this;
  }
  *((_DWORD *)this + 2) = CMultitaskingViewButtonElement::_CalcButtonRenderMode(a2);
  return this;
}
