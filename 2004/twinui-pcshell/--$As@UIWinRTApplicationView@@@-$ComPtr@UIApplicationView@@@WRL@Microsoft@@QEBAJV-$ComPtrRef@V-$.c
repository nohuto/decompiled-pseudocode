/*
 * XREFs of ??$As@UIWinRTApplicationView@@@?$ComPtr@UIApplicationView@@@WRL@Microsoft@@QEBAJV?$ComPtrRef@V?$ComPtr@UIWinRTApplicationView@@@WRL@Microsoft@@@Details@12@@Z @ 0x18018C178
 * Callers:
 *     ?_GetApplicationViewUniqueId@HolographicPositioner@@CAJPEAUIApplicationView@@PEAI@Z @ 0x1802449F8 (-_GetApplicationViewUniqueId@HolographicPositioner@@CAJPEAUIApplicationView@@PEAI@Z.c)
 *     ?_IsPropertySetActivationSourceAumidForeground@HolographicPositioner@@AEAAJPEAUIPropertySet@Collections@Foundation@Windows@@PEAUHWND__@@PEAH@Z @ 0x1802452F4 (-_IsPropertySetActivationSourceAumidForeground@HolographicPositioner@@AEAAJPEAUIPropertySet@Coll.c)
 *     ?PurloinForeground@HolographicForegroundAssistant@@UEAAJXZ @ 0x1802478C0 (-PurloinForeground@HolographicForegroundAssistant@@UEAAJXZ.c)
 *     ?RuntimeClassInitialize@ApplicationViewBackedViewHostItem@@QEAAJPEAUIApplicationView@@@Z @ 0x18025A8A0 (-RuntimeClassInitialize@ApplicationViewBackedViewHostItem@@QEAAJPEAUIApplicationView@@@Z.c)
 *     ?_LoadTitleFromWinRTFrame@SwitchItem@@AEAAJPEAPEAG@Z @ 0x18039EE9C (-_LoadTitleFromWinRTFrame@SwitchItem@@AEAAJPEAPEAG@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x18006B7D0 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 */

__int64 __fastcall Microsoft::WRL::ComPtr<IApplicationView>::As<IWinRTApplicationView>(_QWORD *a1, __int64 *a2)
{
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(a2);
  return (**(__int64 (__fastcall ***)(_QWORD, GUID *, __int64 *))*a1)(
           *a1,
           &GUID_d8b456d0_bec6_4f57_bb1d_50559a14384b,
           a2);
}
