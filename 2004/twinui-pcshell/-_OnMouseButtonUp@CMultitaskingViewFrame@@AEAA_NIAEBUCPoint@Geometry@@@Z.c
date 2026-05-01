/*
 * XREFs of ?_OnMouseButtonUp@CMultitaskingViewFrame@@AEAA_NIAEBUCPoint@Geometry@@@Z @ 0x18039B774
 * Callers:
 *     ?v_WndProc@CMultitaskingViewFrame@@EEAA_JPEAUHWND__@@I_K_J@Z @ 0x18039BE30 (-v_WndProc@CMultitaskingViewFrame@@EEAA_JPEAUHWND__@@I_K_J@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800EEEF0 (_guard_dispatch_icall_nop.c)
 *     ?GetPointerButtonForMessage@ElementHelpers@@YA?AW4PointerButton@@I@Z @ 0x1803AD49C (-GetPointerButtonForMessage@ElementHelpers@@YA-AW4PointerButton@@I@Z.c)
 */

char __fastcall CMultitaskingViewFrame::_OnMouseButtonUp(
        CMultitaskingViewFrame *this,
        unsigned int a2,
        const struct Geometry::CPoint *a3)
{
  char v4; // bl
  unsigned int PointerButtonForMessage; // eax
  _QWORD *v6; // r8
  __int64 v7; // rcx
  _QWORD v9[2]; // [rsp+20h] [rbp-28h] BYREF
  int v10; // [rsp+30h] [rbp-18h]

  v4 = 0;
  PointerButtonForMessage = ElementHelpers::GetPointerButtonForMessage(a2);
  v7 = *((_QWORD *)this + 313);
  if ( v7 && PointerButtonForMessage )
  {
    v9[0] = *v6;
    v9[1] = 0LL;
    v10 = 4;
    v4 = (*(__int64 (__fastcall **)(__int64, _QWORD, _QWORD *))(*(_QWORD *)v7 + 208LL))(v7, PointerButtonForMessage, v9);
  }
  if ( *((HWND *)this + 5) == GetCapture() )
    ReleaseCapture();
  return v4;
}
