/*
 * XREFs of ?_LayoutWithoutScrollButtons@CScrollViewerHost@@AEAAXXZ @ 0x180388B04
 * Callers:
 *     ?UpdateScrollButtonVisibility@CScrollViewerHost@@UEAAXXZ @ 0x1803887F0 (-UpdateScrollButtonVisibility@CScrollViewerHost@@UEAAXXZ.c)
 *     ?v_LayoutChildren@CScrollViewerHost@@MEAAXXZ @ 0x180388BB0 (-v_LayoutChildren@CScrollViewerHost@@MEAAXXZ.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x18006B0B0 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     __security_check_cookie @ 0x18008C840 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800CA4C0 (_guard_dispatch_icall_nop.c)
 *     ??$As@UIMultitaskingViewElement@@@?$ComPtr@UIScrollViewer@@@WRL@Microsoft@@QEBAJV?$ComPtrRef@V?$ComPtr@UIMultitaskingViewElement@@@WRL@Microsoft@@@Details@12@@Z @ 0x18037770C (--$As@UIMultitaskingViewElement@@@-$ComPtr@UIScrollViewer@@@WRL@Microsoft@@QEBAJV-$ComPtrRef@V-$.c)
 *     ?_GetIdealChildLocation@CScrollViewerHost@@AEAA?AUCRect@Geometry@@XZ @ 0x180388850 (-_GetIdealChildLocation@CScrollViewerHost@@AEAA-AUCRect@Geometry@@XZ.c)
 */

void __fastcall CScrollViewerHost::_LayoutWithoutScrollButtons(CScrollViewerHost *this)
{
  __int64 v2; // rcx
  __int64 v3; // rbx
  __int64 IdealChildLocation; // rax
  __int64 v5; // r11
  __int64 *v6; // [rsp+20h] [rbp-28h] BYREF
  _DWORD v7[4]; // [rsp+28h] [rbp-20h] BYREF

  v2 = *((_QWORD *)this + 57);
  if ( v2 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v2 + 144LL))(v2);
  v6 = 0LL;
  Microsoft::WRL::ComPtr<IScrollViewer>::As<IMultitaskingViewElement>((_QWORD *)this + 56, (__int64 *)&v6);
  v3 = *v6;
  IdealChildLocation = CScrollViewerHost::_GetIdealChildLocation((__int64)this, v7);
  (*(void (__fastcall **)(__int64, __int64))(v3 + 104))(v5, IdealChildLocation);
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v6);
}
