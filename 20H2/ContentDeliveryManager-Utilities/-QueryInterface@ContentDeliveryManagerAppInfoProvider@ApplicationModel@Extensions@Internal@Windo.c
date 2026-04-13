/*
 * XREFs of ?QueryInterface@ContentDeliveryManagerAppInfoProvider@ApplicationModel@Extensions@Internal@Windows@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x18009F7F0
 * Callers:
 *     ?QueryInterface@ContentDeliveryManagerAppInfoProvider@ApplicationModel@Extensions@Internal@Windows@@W7EAAJAEBU_GUID@@PEAPEAX@Z @ 0x1800A0280 (-QueryInterface@ContentDeliveryManagerAppInfoProvider@ApplicationModel@Extensions@I_ea_1800A0280.c)
 *     ?QueryInterface@ContentDeliveryManagerAppInfoProvider@ApplicationModel@Extensions@Internal@Windows@@WBA@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x1800A02B0 (-QueryInterface@ContentDeliveryManagerAppInfoProvider@ApplicationModel@Extensions@I_ea_1800A02B0.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
__int64 __fastcall Windows::Internal::Extensions::ApplicationModel::ContentDeliveryManagerAppInfoProvider::QueryInterface(
        Windows::Internal::Extensions::ApplicationModel::ContentDeliveryManagerAppInfoProvider *this,
        const struct _GUID *a2,
        void **a3)
{
  return Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<1>,1,1,0,Windows::Internal::Notifications::IWpnAppInfoProvider,Microsoft::WRL::FtmBase>::QueryInterface(
           this,
           a2,
           a3);
}
