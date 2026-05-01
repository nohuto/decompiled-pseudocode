/*
 * XREFs of ?_SetShrink@CShrinkButtonElement@@IEAAXXZ @ 0x1803AF1CC
 * Callers:
 *     ?v_LayoutChildren@CShrinkButtonElement@@MEAAXW4DCompThumbnailAnimation@@PEAUIUIAnimationStoryboardEventHandler2@@@Z @ 0x1803AF2B0 (-v_LayoutChildren@CShrinkButtonElement@@MEAAXW4DCompThumbnailAnimation@@PEAUIUIAnimationStoryboa.c)
 *     ?v_SetRenderMode@CShrinkButtonElement@@MEAAJW4ButtonRenderMode@CMultitaskingViewButtonElement@@@Z @ 0x1803AF370 (-v_SetRenderMode@CShrinkButtonElement@@MEAAJW4ButtonRenderMode@CMultitaskingViewButtonElement@@@.c)
 *     ?v_SetRenderMode@SwitchItemThumbnailElement@@MEAAJW4ButtonRenderMode@CMultitaskingViewButtonElement@@@Z @ 0x1803B67C0 (-v_SetRenderMode@SwitchItemThumbnailElement@@MEAAJW4ButtonRenderMode@CMultitaskingViewButtonElem.c)
 * Callees:
 *     __security_check_cookie @ 0x18008CB20 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800F0410 (_guard_dispatch_icall_nop.c)
 *     ?_CalcButtonRenderMode@CMultitaskingViewButtonElement@@IEAA?AW4ButtonRenderMode@1@XZ @ 0x1803AEEB8 (-_CalcButtonRenderMode@CMultitaskingViewButtonElement@@IEAA-AW4ButtonRenderMode@1@XZ.c)
 */

void __fastcall CShrinkButtonElement::_SetShrink(CShrinkButtonElement *this)
{
  double v1; // xmm6_8
  int v3; // eax
  LONG v4; // ecx
  LONG v5; // eax
  struct tagRECT rc; // [rsp+30h] [rbp-38h] BYREF

  v1 = DOUBLE_1_0;
  LOBYTE(v3) = CMultitaskingViewButtonElement::_CalcButtonRenderMode((__int64)this);
  if ( v3 == 2 )
    v1 = *((double *)this + 29);
  v4 = *((_DWORD *)this + 64);
  v5 = *((_DWORD *)this + 65);
  rc.left = 0;
  rc.top = 0;
  rc.right = v4;
  rc.bottom = v5;
  InflateRect(&rc, (int)((double)v4 * (v1 - 1.0) * 0.5), (int)((double)v5 * (v1 - 1.0) * 0.5));
  (*(void (__fastcall **)(_QWORD, struct tagRECT *, __int64))(**((_QWORD **)this + 33) + 24LL))(
    *((_QWORD *)this + 33),
    &rc,
    3LL);
}
