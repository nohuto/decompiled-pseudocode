/*
 * XREFs of ?GetIids@ContentDeliveryManagerConfigurationStatics@ContentManagement@@UEAAJPEAKPEAPEAU_GUID@@@Z @ 0x1800252C0
 * Callers:
 *     ?GetIids@ContentDeliveryManagerConfigurationStatics@ContentManagement@@WCI@EAAJPEAKPEAPEAU_GUID@@@Z @ 0x180029880 (-GetIids@ContentDeliveryManagerConfigurationStatics@ContentManagement@@WCI@EAAJPEAKPEAPEAU_GUID@.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
__int64 __fastcall ContentManagement::ContentDeliveryManagerConfigurationStatics::GetIids(
        ContentManagement::ContentDeliveryManagerConfigurationStatics *this,
        unsigned int *a2,
        struct _GUID **a3)
{
  return Microsoft::WRL::ActivationFactory<Microsoft::WRL::Implements<Microsoft::WRL::FtmBase,ContentManagement::IContentDeliveryManagerConfiguration>,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,0>::GetIids(
           this,
           a2,
           a3);
}
