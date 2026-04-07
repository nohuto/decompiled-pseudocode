/*
 * XREFs of ??1UdwmDcompVisual@@UEAA@XZ @ 0x180013B18
 * Callers:
 *     ??_EUdwmDcompVisual@@UEAAPEAXI@Z @ 0x180013AD0 (--_EUdwmDcompVisual@@UEAAPEAXI@Z.c)
 * Callees:
 *     ?ReleaseResources@SharedDwmDcompVisual@@QEAAXXZ @ 0x1800158BC (-ReleaseResources@SharedDwmDcompVisual@@QEAAXXZ.c)
 *     ?InternalRelease@?$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ @ 0x18003DD3C (-InternalRelease@-$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ.c)
 */

void __fastcall UdwmDcompVisual::~UdwmDcompVisual(UdwmDcompVisual *this)
{
  *(_QWORD *)this = &UdwmDcompVisual::`vftable';
  Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((char *)this + 80);
  SharedDwmDcompVisual::ReleaseResources((UdwmDcompVisual *)((char *)this + 16));
  SharedDwmDcompVisual::ReleaseResources((UdwmDcompVisual *)((char *)this + 48));
  Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((char *)this + 80);
  Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((char *)this + 64);
  Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((char *)this + 56);
  Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((char *)this + 32);
  Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((char *)this + 24);
  *(_QWORD *)this = &CGlassColorizationResources::`vftable';
}
