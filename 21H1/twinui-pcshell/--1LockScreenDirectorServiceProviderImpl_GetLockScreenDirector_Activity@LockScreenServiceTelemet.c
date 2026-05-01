/*
 * XREFs of ??1LockScreenDirectorServiceProviderImpl_GetLockScreenDirector_Activity@LockScreenServiceTelemetry@@QEAA@XZ @ 0x1801F4664
 * Callers:
 *     ?GetLockScreenDirector@LockScreenDirectorServiceProviderImpl@@AEAAJPEAPEAUILockScreenDirector@@@Z @ 0x1801F4B68 (-GetLockScreenDirector@LockScreenDirectorServiceProviderImpl@@AEAAJPEAPEAUILockScreenDirector@@@.c)
 * Callees:
 *     ?Destroy@?$ActivityBase@VLockScreenServiceLogging@@$00$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@IEAAXXZ @ 0x1801F48E8 (-Destroy@-$ActivityBase@VLockScreenServiceLogging@@$00$0A@$04$0A@U_TlgReflectorTag_Param0IsProvi.c)
 */

void __fastcall LockScreenServiceTelemetry::LockScreenDirectorServiceProviderImpl_GetLockScreenDirector_Activity::~LockScreenDirectorServiceProviderImpl_GetLockScreenDirector_Activity(
        LockScreenServiceTelemetry::LockScreenDirectorServiceProviderImpl_GetLockScreenDirector_Activity *this)
{
  *(_QWORD *)this = &LockScreenServiceTelemetry::LockScreenDirectorServiceProviderImpl_GetLockScreenDirector_Activity::`vftable';
  wil::ActivityBase<LockScreenServiceLogging,1,0,5,0,_TlgReflectorTag_Param0IsProviderType>::Destroy();
  wil::ActivityBase<LockScreenServiceLogging,1,0,5,0,_TlgReflectorTag_Param0IsProviderType>::~ActivityBase<LockScreenServiceLogging,1,0,5,0,_TlgReflectorTag_Param0IsProviderType>((__int64)this);
}
