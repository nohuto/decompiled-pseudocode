/*
 * XREFs of ?QueryInterface@GaussianBlurEffect@Effects@Composition@UI@Microsoft@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x180042EB0
 * Callers:
 *     ?QueryInterface@GaussianBlurEffect@Effects@Composition@UI@Microsoft@@W7EAAJAEBU_GUID@@PEAPEAX@Z @ 0x180056540 (-QueryInterface@GaussianBlurEffect@Effects@Composition@UI@Microsoft@@W7EAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?QueryInterface@GaussianBlurEffect@Effects@Composition@UI@Microsoft@@WBA@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x180056550 (-QueryInterface@GaussianBlurEffect@Effects@Composition@UI@Microsoft@@WBA@EAAJAEBU_GUID@@PEAPEAX@.c)
 *     ?QueryInterface@GaussianBlurEffect@Effects@Composition@UI@Microsoft@@WBI@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x180056560 (-QueryInterface@GaussianBlurEffect@Effects@Composition@UI@Microsoft@@WBI@EAAJAEBU_GUID@@PEAPEAX@.c)
 *     ?QueryInterface@GaussianBlurEffect@Effects@Composition@UI@Microsoft@@WCA@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x180056570 (-QueryInterface@GaussianBlurEffect@Effects@Composition@UI@Microsoft@@WCA@EAAJAEBU_GUID@@PEAPEAX@.c)
 * Callees:
 *     ?CanCastTo@?$ImplementsHelper@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00UIGraphicsEffectSource@Effects@Graphics@Windows@@UIGraphicsEffectD2D1Interop@567@UIGaussianBlurEffect@5Composition@UI@3@@Details@WRL@Microsoft@@IEAAJAEBU_GUID@@PEAPEAXPEA_N@Z @ 0x180042E3C (-CanCastTo@-$ImplementsHelper@U-$RuntimeClassFlags@$02@WRL@Microsoft@@$00UIGraphicsEffectSource@.c)
 *     InlineIsEqualGUID @ 0x180042F48 (InlineIsEqualGUID.c)
 *     _guard_dispatch_icall_nop @ 0x1800560C0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall Microsoft::UI::Composition::Effects::GaussianBlurEffect::QueryInterface(
        Microsoft::UI::Composition::Effects::GaussianBlurEffect *this,
        const struct _GUID *a2,
        void **a3)
{
  __int64 v3; // rcx
  _QWORD *v4; // r8
  __int64 v5; // r9
  __int64 v6; // rcx
  __int64 v7; // rcx
  _QWORD *v8; // r8
  __int64 v9; // r9
  __int64 v10; // r10
  int CanCastTo; // ebx

  *a3 = 0LL;
  if ( (unsigned int)InlineIsEqualGUID(a2, &GUID_00000000_0000_0000_c000_000000000046)
    || (unsigned int)InlineIsEqualGUID(v3, &GUID_af86e2e0_b12d_4c6a_9c5a_d7aa65101e90) )
  {
    *v4 = v5;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v5 + 8LL))(v5);
    return 0;
  }
  if ( (unsigned int)InlineIsEqualGUID(v6, &GUID_cb51c0ce_8fe6_4636_b202_861faa07d8f3)
    || (unsigned int)InlineIsEqualGUID(v7, &GUID_00000038_0000_0000_c000_000000000046) )
  {
    *v8 = v9;
    CanCastTo = 0;
    goto LABEL_6;
  }
  CanCastTo = Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<3>,1,Windows::Graphics::Effects::IGraphicsEffectSource,Windows::Graphics::Effects::IGraphicsEffectD2D1Interop,Microsoft::UI::Composition::Effects::IGaussianBlurEffect>::CanCastTo(
                v9 + 8,
                v10);
  if ( CanCastTo >= 0 )
LABEL_6:
    (*(void (__fastcall **)(_QWORD))(*(_QWORD *)*v8 + 8LL))(*v8);
  return (unsigned int)CanCastTo;
}
