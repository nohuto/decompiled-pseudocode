/*
 * XREFs of ?SetFocused@CMultitaskingViewElementBase@@UEAAX_N@Z @ 0x1803A3920
 * Callers:
 *     ?SetFocused@CSwitchItemElement@@UEAAX_N@Z @ 0x1803A11B0 (-SetFocused@CSwitchItemElement@@UEAAX_N@Z.c)
 *     ?SetFocused@CSwitchItemGrid@@UEAAX_N@Z @ 0x1803A7B20 (-SetFocused@CSwitchItemGrid@@UEAAX_N@Z.c)
 *     ?SetFocused@CScrollViewerHost@@UEAAX_N@Z @ 0x1803A9030 (-SetFocused@CScrollViewerHost@@UEAAX_N@Z.c)
 *     ?SetFocused@CMultitaskingViewFrameElement@@UEAAX_N@Z @ 0x1803AB640 (-SetFocused@CMultitaskingViewFrameElement@@UEAAX_N@Z.c)
 *     ?SetFocused@CVirtualDesktopContainerElement@@UEAAX_N@Z @ 0x1803AE690 (-SetFocused@CVirtualDesktopContainerElement@@UEAAX_N@Z.c)
 *     ?SetFocused@SwitchItemThumbnailElement@@UEAAX_N@Z @ 0x1803B5F90 (-SetFocused@SwitchItemThumbnailElement@@UEAAX_N@Z.c)
 *     ?SetFocused@CScrollViewer@@UEAAX_N@Z @ 0x1803BB540 (-SetFocused@CScrollViewer@@UEAAX_N@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800F0410 (_guard_dispatch_icall_nop.c)
 *     ?_RaiseFocusEvent@CMultitaskingViewElementBase@@IEAAJXZ @ 0x1803A44B0 (-_RaiseFocusEvent@CMultitaskingViewElementBase@@IEAAJXZ.c)
 */

void __fastcall CMultitaskingViewElementBase::SetFocused(CMultitaskingViewElementBase *this, char a2)
{
  char v2; // al

  v2 = *((_BYTE *)this + 176);
  if ( v2 != a2 )
  {
    *((_BYTE *)this + 176) = a2;
    CMultitaskingViewElementBase::_RaiseFocusEvent(this);
    v2 = *((_BYTE *)this + 176);
  }
  if ( !v2 )
  {
    if ( *((_QWORD *)this + 21) )
      (*(void (__fastcall **)(CMultitaskingViewElementBase *, _QWORD))(*(_QWORD *)this + 288LL))(this, 0LL);
  }
}
