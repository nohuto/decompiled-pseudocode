/*
 * XREFs of ?OnCursorIdChanged@CCursorVisual@@IEAAXXZ @ 0x180211CE8
 * Callers:
 *     ?SetCursorId@?$CCursorVisualGeneratedT@VCCursorVisual@@VCVisual@@@@QEAAJ_K@Z @ 0x1801A27A4 (-SetCursorId@-$CCursorVisualGeneratedT@VCCursorVisual@@VCVisual@@@@QEAAJ_K@Z.c)
 * Callees:
 *     ?reset@?$com_ptr_t@UIDXGISwapChain1@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ @ 0x1800FFDD8 (-reset@-$com_ptr_t@UIDXGISwapChain1@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801051D0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?TryClaimCursorState@CCursorManager@@QEAA_N_KPEAVCCursorVisual@@0PEAPEAVCCursorState@@@Z @ 0x180267874 (-TryClaimCursorState@CCursorManager@@QEAA_N_KPEAVCCursorVisual@@0PEAPEAVCCursorState@@@Z.c)
 */

void __fastcall CCursorVisual::OnCursorIdChanged(CCursorVisual *this)
{
  struct CCursorState **v1; // rbx
  CCursorManager *v3; // rcx

  v1 = (struct CCursorState **)((char *)this + 744);
  wil::com_ptr_t<IDXGISwapChain1,wil::err_returncode_policy>::reset((__int64 *)this + 93);
  if ( CCursorManager::TryClaimCursorState(
         v3,
         *((_QWORD *)this + 91),
         this,
         *(_QWORD *)(*((_QWORD *)this + 2) + 608LL),
         v1) )
  {
    (*(void (__fastcall **)(_QWORD, CCursorVisual *))(**((_QWORD **)this + 2) + 64LL))(*((_QWORD *)this + 2), this);
    *((_BYTE *)this + 760) = 1;
  }
  else if ( *((_BYTE *)this + 760) )
  {
    (*(void (__fastcall **)(_QWORD, CCursorVisual *))(**((_QWORD **)this + 2) + 72LL))(*((_QWORD *)this + 2), this);
    *((_BYTE *)this + 760) = 0;
  }
}
