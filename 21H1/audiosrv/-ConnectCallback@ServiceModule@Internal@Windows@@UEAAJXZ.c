/*
 * XREFs of ?ConnectCallback@ServiceModule@Internal@Windows@@UEAAJXZ @ 0x180069AD0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall Windows::Internal::ServiceModule::ConnectCallback(
        const struct Microsoft::WRL::Details::CreatorMap ***this)
{
  return Microsoft::WRL::Details::RegisterObjects<2>((__int64)(this + 5), this[4]);
}
