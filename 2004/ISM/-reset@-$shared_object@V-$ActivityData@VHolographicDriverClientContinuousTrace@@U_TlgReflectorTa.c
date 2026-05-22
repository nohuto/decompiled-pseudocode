/*
 * XREFs of ?reset@?$shared_object@V?$ActivityData@VHolographicDriverClientContinuousTrace@@U_TlgReflectorTag_Param0IsProviderType@@@?$ActivityBase@VHolographicDriverClientContinuousTrace@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@@details@wil@@QEAAXXZ @ 0x180167C2C
 * Callers:
 *     ??1?$ActivityBase@VHolographicDriverClientContinuousTrace@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@XZ @ 0x18015705C (--1-$ActivityBase@VHolographicDriverClientContinuousTrace@@$0A@$0A@$04$0A@U_TlgReflectorTag_Para.c)
 *     ?Destroy@?$ActivityBase@VHolographicDriverClientContinuousTrace@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@IEAAXXZ @ 0x18015AFA0 (-Destroy@-$ActivityBase@VHolographicDriverClientContinuousTrace@@$0A@$0A@$04$0A@U_TlgReflectorTa.c)
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x18003C6C0 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ??1?$ActivityData@VHolographicDriverClientContinuousTrace@@U_TlgReflectorTag_Param0IsProviderType@@@?$ActivityBase@VHolographicDriverClientContinuousTrace@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@XZ @ 0x180157110 (--1-$ActivityData@VHolographicDriverClientContinuousTrace@@U_TlgReflectorTag_Param0IsProviderTyp.c)
 */

void __fastcall wil::details::shared_object<wil::ActivityBase<HolographicDriverClientContinuousTrace,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>::ActivityData<HolographicDriverClientContinuousTrace,_TlgReflectorTag_Param0IsProviderType>>::reset(
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
        wil::ActivityBase<HolographicDriverClientContinuousTrace,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>::ActivityData<HolographicDriverClientContinuousTrace,_TlgReflectorTag_Param0IsProviderType>::~ActivityData<HolographicDriverClientContinuousTrace,_TlgReflectorTag_Param0IsProviderType>((__int64)(v3 + 2));
        operator delete((void *)v3, (const struct std::nothrow_t *)0x100);
      }
    }
    *a1 = 0LL;
  }
}
