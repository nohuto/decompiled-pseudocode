/*
 * XREFs of ?GetRuntimeClassName@ContentDeliveryManagerAppInfoProvider@ApplicationModel@Extensions@Internal@Windows@@UEAAJPEAPEAUHSTRING__@@@Z @ 0x18009D5A0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

HRESULT __fastcall Windows::Internal::Extensions::ApplicationModel::ContentDeliveryManagerAppInfoProvider::GetRuntimeClassName(
        Windows::Internal::Extensions::ApplicationModel::ContentDeliveryManagerAppInfoProvider *this,
        HSTRING *a2)
{
  *a2 = 0LL;
  return WindowsCreateString(
           L"Windows.Internal.Extensions.ApplicationModel.ContentDeliveryManagerAppInfoProvider",
           0x52u,
           a2);
}
