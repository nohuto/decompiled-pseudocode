/*
 * XREFs of ??1?$ComPtr@VAppViewIconFactory@@@WRL@Microsoft@@QEAA@XZ @ 0x18033B6B4
 * Callers:
 *     _wil::MakeAndInitializeOrThrow_AppViewIconFactory_IApplicationView___&_IApplicationViewIconLoader___&__::_1_::dtor$0 @ 0x180339F45 (_wil--MakeAndInitializeOrThrow_AppViewIconFactory_IApplicationView___-_IApplicationViewIconLoade.c)
 *     _AppViewIconFactory::CreateInstance_::_1_::dtor$0 @ 0x18033CCD9 (_AppViewIconFactory--CreateInstance_--_1_--dtor$0.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
__int64 __fastcall Microsoft::WRL::ComPtr<AppViewIconFactory>::~ComPtr<AppViewIconFactory>(__int64 a1)
{
  return Microsoft::WRL::ComPtr<AppViewIconFactory>::InternalRelease(a1);
}
