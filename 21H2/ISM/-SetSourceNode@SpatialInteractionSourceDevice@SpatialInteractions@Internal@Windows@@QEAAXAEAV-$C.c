/*
 * XREFs of ?SetSourceNode@SpatialInteractionSourceDevice@SpatialInteractions@Internal@Windows@@QEAAXAEAV?$ComPtr@UISpatialGraphNodeReference@Holographic@Internal@Windows@@@WRL@Microsoft@@@Z @ 0x1800D8C34
 * Callers:
 *     _lambda_2610a4571c07b034f8353f9aca44fe5c_::operator() @ 0x1800D6290 (_lambda_2610a4571c07b034f8353f9aca44fe5c_--operator().c)
 *     ?StopTracking@SpatialInteractionSourceObject@SpatialInteractions@Internal@Windows@@UEAAJW4StopTrackingReason@234@@Z @ 0x1800DA420 (-StopTracking@SpatialInteractionSourceObject@SpatialInteractions@Internal@Windows@@UEAAJW4StopTr.c)
 *     _lambda_0ef360edd2b0e079ee5004fb777ac3fe_::operator() @ 0x18016A2C4 (_lambda_0ef360edd2b0e079ee5004fb777ac3fe_--operator().c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIInputPriv@Internal@Spatial@Input@UI@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x18000ED04 (-InternalRelease@-$ComPtr@UIInputPriv@Internal@Spatial@Input@UI@Windows@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??4?$ComPtr@UISpatialGraphNodeReference@Holographic@Internal@Windows@@@WRL@Microsoft@@QEAAAEAV012@$$QEAV012@@Z @ 0x1800CE874 (--4-$ComPtr@UISpatialGraphNodeReference@Holographic@Internal@Windows@@@WRL@Microsoft@@QEAAAEAV01.c)
 */

__int64 __fastcall Windows::Internal::SpatialInteractions::SpatialInteractionSourceDevice::SetSourceNode(
        __int64 a1,
        __int64 *a2)
{
  RTL_SRWLOCK *v2; // rsi
  __int64 v6; // [rsp+30h] [rbp+8h] BYREF

  v6 = 0LL;
  v2 = (RTL_SRWLOCK *)(a1 + 80);
  AcquireSRWLockExclusive((PSRWLOCK)(a1 + 80));
  Microsoft::WRL::ComPtr<Windows::Internal::Holographic::ISpatialGraphNodeReference>::operator=(
    &v6,
    (__int64 *)(a1 + 88));
  Microsoft::WRL::ComPtr<Windows::Internal::Holographic::ISpatialGraphNodeReference>::operator=(
    (__int64 *)(a1 + 88),
    a2);
  if ( v2 )
    ReleaseSRWLockExclusive(v2);
  return Microsoft::WRL::ComPtr<Windows::UI::Input::Spatial::Internal::IInputPriv>::InternalRelease(&v6);
}
