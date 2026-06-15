/*
 * XREFs of ??1ModuleCommandResult@Devices@Media@Windows@@MEAA@XZ @ 0x14004B18C
 * Callers:
 *     ??_GModuleCommandResult@Devices@Media@Windows@@MEAAPEAXI@Z @ 0x14004BBF0 (--_GModuleCommandResult@Devices@Media@Windows@@MEAAPEAXI@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x14001A8BC (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 */

void __fastcall Windows::Media::Devices::ModuleCommandResult::~ModuleCommandResult(
        Windows::Media::Devices::ModuleCommandResult *this)
{
  *(_QWORD *)this = &Windows::Media::Devices::ModuleCommandResult::`vftable';
  *((_QWORD *)this + 1) = &Windows::Media::Devices::ModuleCommandResult::`vftable'{for `IWeakReferenceSource'};
  *((_QWORD *)this + 2) = &Windows::Media::Devices::ModuleCommandResult::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<1>,1,Microsoft::WRL::Details::ImplementsMarker<Microsoft::WRL::FtmBase>>'};
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)this + 9);
  Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<1>,1,1,0,Windows::Media::Devices::Internal::IAudioDeviceBroker,Microsoft::WRL::FtmBase>::~RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<1>,1,1,0,Windows::Media::Devices::Internal::IAudioDeviceBroker,Microsoft::WRL::FtmBase>((__int64)this);
}
