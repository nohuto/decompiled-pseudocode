/*
 * XREFs of ?_lambda_invoker_cdecl_@_lambda_8f38397fb510ec0288b294132d0aacc6_@@CAJPEAX@Z @ 0x180090D90
 * Callers:
 *     <none>
 * Callees:
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@U?$ITypedEventHandler@PEAVSpatialGestureRecognizer@Spatial@Input@UI@Windows@@PEAVSpatialNavigationUpdatedEventArgs@2345@@Foundation@Windows@@@Details@WRL@Microsoft@@UEAAKXZ @ 0x18003A9F0 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@U-$ITypedEventHan.c)
 *     ?OnHeadUpdateEvent@SpatialRimDeviceCollectionHeadEventHandler@@AEAAJXZ @ 0x18009514C (-OnHeadUpdateEvent@SpatialRimDeviceCollectionHeadEventHandler@@AEAAJXZ.c)
 */

__int64 __fastcall _lambda_8f38397fb510ec0288b294132d0aacc6_::_lambda_invoker_cdecl_(
        SpatialRimDeviceCollectionHeadEventHandler *a1)
{
  unsigned int updated; // ebx
  volatile int *v3; // rdx

  updated = SpatialRimDeviceCollectionHeadEventHandler::OnHeadUpdateEvent(a1);
  Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,Windows::Foundation::ITypedEventHandler<Windows::UI::Input::Spatial::SpatialGestureRecognizer *,Windows::UI::Input::Spatial::SpatialNavigationUpdatedEventArgs *>>::Release(
    (__int64)a1,
    v3);
  return updated;
}
