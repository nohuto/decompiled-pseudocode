/*
 * XREFs of ?reset@?$shared_object@V?$ActivityData@VStartMenuExperienceLogging@@U_TlgReflectorTag_Param0IsProviderType@@@?$ActivityBase@VStartMenuExperienceLogging@@$00$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@@details@wil@@QEAAXXZ @ 0x180089A00
 * Callers:
 *     ??1StartMenuReposition@StartMenuExperienceTelemetry@@QEAA@XZ @ 0x18007CD14 (--1StartMenuReposition@StartMenuExperienceTelemetry@@QEAA@XZ.c)
 * Callees:
 *     ??1?$ActivityData@VStartMenuExperienceLogging@@U_TlgReflectorTag_Param0IsProviderType@@@?$ActivityBase@VStartMenuExperienceLogging@@$00$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@XZ @ 0x18007D03C (--1-$ActivityData@VStartMenuExperienceLogging@@U_TlgReflectorTag_Param0IsProviderType@@@-$Activi.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x18008D274 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 */

void __fastcall wil::details::shared_object<wil::ActivityBase<StartMenuExperienceLogging,1,0,5,0,_TlgReflectorTag_Param0IsProviderType>::ActivityData<StartMenuExperienceLogging,_TlgReflectorTag_Param0IsProviderType>>::reset(
        volatile signed __int32 **a1)
{
  volatile signed __int32 *v2; // rcx
  volatile signed __int32 *v3; // rdi

  v2 = *a1;
  if ( v2 )
  {
    if ( _InterlockedExchangeAdd(v2, 0xFFFFFFFF) == 1 )
    {
      v3 = *a1;
      if ( *a1 )
      {
        wil::ActivityBase<StartMenuExperienceLogging,1,0,5,0,_TlgReflectorTag_Param0IsProviderType>::ActivityData<StartMenuExperienceLogging,_TlgReflectorTag_Param0IsProviderType>::~ActivityData<StartMenuExperienceLogging,_TlgReflectorTag_Param0IsProviderType>((__int64)(v3 + 2));
        operator delete((void *)v3, (const struct std::nothrow_t *)0x100);
      }
    }
    *a1 = 0LL;
  }
}
