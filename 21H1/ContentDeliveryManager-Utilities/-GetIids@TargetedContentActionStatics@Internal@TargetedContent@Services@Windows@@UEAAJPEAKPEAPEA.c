/*
 * XREFs of ?GetIids@TargetedContentActionStatics@Internal@TargetedContent@Services@Windows@@UEAAJPEAKPEAPEAU_GUID@@@Z @ 0x18004F140
 * Callers:
 *     ?GetIids@TargetedContentActionStatics@Internal@TargetedContent@Services@Windows@@WCI@EAAJPEAKPEAPEAU_GUID@@@Z @ 0x180055F00 (-GetIids@TargetedContentActionStatics@Internal@TargetedContent@Services@Windows@@WCI@EAAJPEAKPEA.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
__int64 __fastcall Windows::Services::TargetedContent::Internal::TargetedContentActionStatics::GetIids(
        Windows::Services::TargetedContent::Internal::TargetedContentActionStatics *this,
        unsigned int *a2,
        struct _GUID **a3)
{
  return Microsoft::WRL::ActivationFactory<Microsoft::WRL::Implements<Microsoft::WRL::FtmBase,Windows::Services::TargetedContent::Internal::ITargetedContentActionStaticsInternal>,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,0>::GetIids(
           this,
           a2,
           a3);
}
