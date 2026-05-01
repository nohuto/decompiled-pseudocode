/*
 * XREFs of ?UpdateScrollButtonVisibility@CScrollViewerHost@@UEAAXXZ @ 0x1803887F0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800CA4C0 (_guard_dispatch_icall_nop.c)
 *     ?_LayoutWithScrollButtons@CScrollViewerHost@@AEAAXXZ @ 0x1803888CC (-_LayoutWithScrollButtons@CScrollViewerHost@@AEAAXXZ.c)
 *     ?_LayoutWithoutScrollButtons@CScrollViewerHost@@AEAAXXZ @ 0x180388B04 (-_LayoutWithoutScrollButtons@CScrollViewerHost@@AEAAXXZ.c)
 */

void __fastcall CScrollViewerHost::UpdateScrollButtonVisibility(CScrollViewerHost *this)
{
  char v2; // al
  CScrollViewerHost *v3; // rcx

  v2 = (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)this + 30) + 64LL))(*((_QWORD *)this + 30));
  v3 = (CScrollViewerHost *)((char *)this - 208);
  if ( v2 )
  {
    CScrollViewerHost::_LayoutWithScrollButtons(v3);
    (*(void (__fastcall **)(CScrollViewerHost *))(*(_QWORD *)this + 40LL))(this);
  }
  else
  {
    CScrollViewerHost::_LayoutWithoutScrollButtons(v3);
  }
}
