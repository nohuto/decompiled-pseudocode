/*
 * XREFs of ??$As@UINtUserViewWrapper@@@?$ComPtr@UIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@@WRL@Microsoft@@QEBAJV?$ComPtrRef@V?$ComPtr@UINtUserViewWrapper@@@WRL@Microsoft@@@Details@12@@Z @ 0x18018458C
 * Callers:
 *     ?SetFramedView@FrameWrapper@@UEAAJPEAUIUnknown@@@Z @ 0x180185410 (-SetFramedView@FrameWrapper@@UEAAJPEAUIUnknown@@@Z.c)
 *     ?UpdateHostedViewPosition@FrameWrapper@@UEAAJXZ @ 0x180185C20 (-UpdateHostedViewPosition@FrameWrapper@@UEAAJXZ.c)
 *     ?SetZBand@CortanaStoreAppExperienceManager@@AEAAJXZ @ 0x1801F4708 (-SetZBand@CortanaStoreAppExperienceManager@@AEAAJXZ.c)
 *     ??$GetViewWrapperAs@UINtUserViewWrapper@@@SearchAppDesktopExperienceView@@AEAAJAEAV?$ComPtr@UINtUserViewWrapper@@@WRL@Microsoft@@@Z @ 0x180205868 (--$GetViewWrapperAs@UINtUserViewWrapper@@@SearchAppDesktopExperienceView@@AEAAJAEAV-$ComPtr@UINt.c)
 *     ??$GetViewWrapperAs@UINtUserViewWrapper@@@CortanaDesktopExperienceView@@AEAAJAEAV?$ComPtr@UINtUserViewWrapper@@@WRL@Microsoft@@@Z @ 0x180208B8C (--$GetViewWrapperAs@UINtUserViewWrapper@@@CortanaDesktopExperienceView@@AEAAJAEAV-$ComPtr@UINtUs.c)
 *     ?_OnViewCreated@AccessibilityExperienceManager@@AEAAJPEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@UEventRegistrationToken@@@Z @ 0x180371890 (-_OnViewCreated@AccessibilityExperienceManager@@AEAAJPEAUIViewWrapper@ViewManagerInterop@Shell@I.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x1800663F0 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 */

__int64 __fastcall Microsoft::WRL::ComPtr<Windows::Internal::Shell::ViewManagerInterop::IViewWrapper>::As<INtUserViewWrapper>(
        __int64 (__fastcall ****a1)(_QWORD, GUID *, __int64 *),
        __int64 *a2)
{
  __int64 (__fastcall ***v2)(_QWORD, GUID *, __int64 *); // rsi
  __int64 (__fastcall *v4)(_QWORD, GUID *, __int64 *); // rdi

  v2 = *a1;
  v4 = ***a1;
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(a2);
  return v4(v2, &GUID_6d043cea_6cdf_43a3_b9d0_d755297c11d2, a2);
}
