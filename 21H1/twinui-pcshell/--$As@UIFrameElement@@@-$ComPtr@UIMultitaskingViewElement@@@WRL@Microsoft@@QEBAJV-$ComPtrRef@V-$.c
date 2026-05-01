/*
 * XREFs of ??$As@UIFrameElement@@@?$ComPtr@UIMultitaskingViewElement@@@WRL@Microsoft@@QEBAJV?$ComPtrRef@V?$ComPtr@UIFrameElement@@@WRL@Microsoft@@@Details@12@@Z @ 0x1803776C8
 * Callers:
 *     ?BeginAnimation@CMultitaskingViewFrame@@UEAAJPEAUIFrameLevelAnimationCoordinator@@@Z @ 0x180378130 (-BeginAnimation@CMultitaskingViewFrame@@UEAAJPEAUIFrameLevelAnimationCoordinator@@@Z.c)
 *     ?GetDimmingLayerThumbnail@CMultitaskingViewFrame@@UEAAJPEAPEAUIDCompThumbnail@@@Z @ 0x180379000 (-GetDimmingLayerThumbnail@CMultitaskingViewFrame@@UEAAJPEAPEAUIDCompThumbnail@@@Z.c)
 *     ?GetGradientThumbnail@CMultitaskingViewFrame@@UEAAJPEAPEAUIDCompThumbnail@@@Z @ 0x180379100 (-GetGradientThumbnail@CMultitaskingViewFrame@@UEAAJPEAPEAUIDCompThumbnail@@@Z.c)
 *     ?GetRootThumbnail@CMultitaskingViewFrame@@UEAAJPEAPEAUIDCompThumbnail@@@Z @ 0x1803792D0 (-GetRootThumbnail@CMultitaskingViewFrame@@UEAAJPEAPEAUIDCompThumbnail@@@Z.c)
 *     ?_OnWindowPosChanged@CMultitaskingViewFrame@@AEAAXXZ @ 0x18037A7A4 (-_OnWindowPosChanged@CMultitaskingViewFrame@@AEAAXXZ.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x18006B0B0 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 */

__int64 __fastcall Microsoft::WRL::ComPtr<IMultitaskingViewElement>::As<IFrameElement>(_QWORD *a1, __int64 *a2)
{
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(a2);
  return (**(__int64 (__fastcall ***)(_QWORD, GUID *, __int64 *))*a1)(
           *a1,
           &GUID_dcaa9d90_42a2_4083_8bd0_8a0e0e4f25d0,
           a2);
}
