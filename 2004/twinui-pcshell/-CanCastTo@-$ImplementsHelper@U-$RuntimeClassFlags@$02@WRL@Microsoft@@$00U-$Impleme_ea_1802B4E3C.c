/*
 * XREFs of ?CanCastTo@?$ImplementsHelper@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00U?$ImplementsMarker@U?$Implements@U?$RuntimeClassFlags@$02@WRL@Microsoft@@UIPrivilegedOperationsConsumer@@UIImmersiveSessionIdleNotification@@UIPopupClientBroker@Popups@Shell@Internal@Windows@@UINtUserViewWrapperCollection@@@WRL@Microsoft@@@Details@23@VFtmBase@23@@Details@WRL@Microsoft@@IEAAJAEBU_GUID@@PEAPEAXPEA_N@Z @ 0x1802B4E3C
 * Callers:
 *     ?CanCastTo@?$ImplementsHelper@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00U?$ImplementsMarker@VCImmersiveShellComponentWithGITSite@@@Details@23@U?$Implements@U?$RuntimeClassFlags@$02@WRL@Microsoft@@UIPrivilegedOperationsConsumer@@UIImmersiveSessionIdleNotification@@UIPopupClientBroker@Popups@Shell@Internal@Windows@@UINtUserViewWrapperCollection@@@23@VFtmBase@23@@Details@WRL@Microsoft@@IEAAJAEBU_GUID@@PEAPEAXPEA_N@Z @ 0x1802B4F40 (-CanCastTo@-$ImplementsHelper@U-$RuntimeClassFlags@$02@WRL@Microsoft@@$00U-$Impleme_ea_1802B4F40.c)
 * Callees:
 *     InlineIsEqualGUID @ 0x18003CC50 (InlineIsEqualGUID.c)
 *     ?CanCastTo@FtmBase@WRL@Microsoft@@IEAAJAEBU_GUID@@PEAPEAX@Z @ 0x18003CE10 (-CanCastTo@FtmBase@WRL@Microsoft@@IEAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?CanCastTo@?$ImplementsHelper@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00UIImmersiveSessionIdleNotification@@UIPopupClientBroker@Popups@Shell@Internal@Windows@@UINtUserViewWrapperCollection@@@Details@WRL@Microsoft@@IEAAJAEBU_GUID@@PEAPEAXPEA_N@Z @ 0x1802B5008 (-CanCastTo@-$ImplementsHelper@U-$RuntimeClassFlags@$02@WRL@Microsoft@@$00UIImmersiv_ea_1802B5008.c)
 */

__int64 __fastcall Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<3>,1,Microsoft::WRL::Details::ImplementsMarker<Microsoft::WRL::Implements<Microsoft::WRL::RuntimeClassFlags<3>,IPrivilegedOperationsConsumer,IImmersiveSessionIdleNotification,Windows::Internal::Shell::Popups::IPopupClientBroker,INtUserViewWrapperCollection>>,Microsoft::WRL::FtmBase>::CanCastTo(
        __int64 a1,
        struct _GUID *a2)
{
  BOOL IsEqualGUID; // eax
  _QWORD *v5; // r8
  unsigned int CanCastTo; // r9d
  void **v7; // r8
  unsigned int v8; // r10d

  IsEqualGUID = InlineIsEqualGUID(a2, &GUID_b7c623c4_971b_4c3e_96fe_89de6651d7db);
  CanCastTo = 0;
  if ( IsEqualGUID )
  {
    *v5 = a1;
  }
  else
  {
    CanCastTo = Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<3>,1,IImmersiveSessionIdleNotification,Windows::Internal::Shell::Popups::IPopupClientBroker,INtUserViewWrapperCollection>::CanCastTo(
                  a1 + 8,
                  a2,
                  v5,
                  0LL);
    if ( CanCastTo == -2147467262 )
    {
      CanCastTo = Microsoft::WRL::FtmBase::CanCastTo((Microsoft::WRL::FtmBase *)(a1 + 40), a2, v7);
      if ( CanCastTo == v8 )
        return v8;
    }
  }
  return CanCastTo;
}
