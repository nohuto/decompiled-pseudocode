/*
 * XREFs of ?AddRef@ModuleCommandResult@Devices@Media@Windows@@W7EAAKXZ @ 0x14002ABD0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall Windows::Media::Devices::ModuleCommandResult::AddRef(__int64 a1)
{
  return Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<1>,1,1,0,Windows::Media::Devices::IAudioDeviceModulesManager,Microsoft::WRL::FtmBase>::AddRef(a1 - 8);
}
