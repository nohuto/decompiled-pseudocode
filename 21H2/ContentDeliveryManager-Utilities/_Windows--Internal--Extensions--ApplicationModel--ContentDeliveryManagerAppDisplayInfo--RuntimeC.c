/*
 * XREFs of _Windows::Internal::Extensions::ApplicationModel::ContentDeliveryManagerAppDisplayInfo::RuntimeClassInitialize_::_1_::catch$0 @ 0x1800D8FB9
 * Callers:
 *     <none>
 * Callees:
 *     ?ResultFromCaughtException@wil@@YAJXZ @ 0x180004FF4 (-ResultFromCaughtException@wil@@YAJXZ.c)
 */

// positive sp value has been detected, the output may be wrong!
void *__fastcall Windows::Internal::Extensions::ApplicationModel::ContentDeliveryManagerAppDisplayInfo::RuntimeClassInitialize_::_1_::catch_0(
        wil *a1,
        _DWORD *a2,
        unsigned int a3)
{
  a2[16] = wil::ResultFromCaughtException(a1, a2, a3);
  return &loc_1800A24BB;
}
