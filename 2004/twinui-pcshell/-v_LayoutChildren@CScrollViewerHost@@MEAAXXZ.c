/*
 * XREFs of ?v_LayoutChildren@CScrollViewerHost@@MEAAXXZ @ 0x1803A9E00
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x18008CFC0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800EEEF0 (_guard_dispatch_icall_nop.c)
 *     ?_LayoutWithScrollButtons@CScrollViewerHost@@AEAAXXZ @ 0x1803A9B1C (-_LayoutWithScrollButtons@CScrollViewerHost@@AEAAXXZ.c)
 *     ?_LayoutWithoutScrollButtons@CScrollViewerHost@@AEAAXXZ @ 0x1803A9D54 (-_LayoutWithoutScrollButtons@CScrollViewerHost@@AEAAXXZ.c)
 */

void __fastcall CScrollViewerHost::v_LayoutChildren(CScrollViewerHost *this)
{
  __int64 v2; // rcx
  int v3; // edx
  _DWORD v4[4]; // [rsp+30h] [rbp-28h] BYREF

  v2 = *((_QWORD *)this + 11);
  v3 = *((_DWORD *)this + 15);
  v4[0] = *((_DWORD *)this + 14);
  v4[2] = v4[0] + 1;
  v4[1] = v3;
  v4[3] = v3 + 1;
  (*(void (__fastcall **)(__int64, _DWORD *, _QWORD, _QWORD))(*(_QWORD *)v2 + 24LL))(v2, v4, 0LL, 0LL);
  CScrollViewerHost::_LayoutWithoutScrollButtons(this);
  if ( (*(unsigned __int8 (__fastcall **)(_QWORD))(**((_QWORD **)this + 56) + 64LL))(*((_QWORD *)this + 56)) )
    CScrollViewerHost::_LayoutWithScrollButtons(this);
  (*(void (__fastcall **)(_QWORD))(**((_QWORD **)this + 56) + 72LL))(*((_QWORD *)this + 56));
}
